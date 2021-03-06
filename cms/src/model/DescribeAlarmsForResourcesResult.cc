/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/cms/model/DescribeAlarmsForResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeAlarmsForResourcesResult::DescribeAlarmsForResourcesResult() :
	ServiceResult()
{}

DescribeAlarmsForResourcesResult::DescribeAlarmsForResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlarmsForResourcesResult::~DescribeAlarmsForResourcesResult()
{}

void DescribeAlarmsForResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDatapoints = value["Datapoints"]["Alarm"];
	for (auto value : allDatapoints)
	{
		Alarm datapointsObject;
		if(!value["Uuid"].isNull())
			datapointsObject.uuid = value["Uuid"].asString();
		if(!value["Name"].isNull())
			datapointsObject.name = value["Name"].asString();
		if(!value["Namespace"].isNull())
			datapointsObject._namespace = value["Namespace"].asString();
		if(!value["MetricName"].isNull())
			datapointsObject.metricName = value["MetricName"].asString();
		if(!value["Period"].isNull())
			datapointsObject.period = value["Period"].asString();
		if(!value["EvaluationCount"].isNull())
			datapointsObject.evaluationCount = value["EvaluationCount"].asString();
		if(!value["EffectiveInterval"].isNull())
			datapointsObject.effectiveInterval = value["EffectiveInterval"].asString();
		if(!value["NoEffectiveInterval"].isNull())
			datapointsObject.noEffectiveInterval = value["NoEffectiveInterval"].asString();
		if(!value["SilenceTime"].isNull())
			datapointsObject.silenceTime = value["SilenceTime"].asString();
		if(!value["Enable"].isNull())
			datapointsObject.enable = value["Enable"].asString() == "true";
		if(!value["State"].isNull())
			datapointsObject.state = value["State"].asString();
		if(!value["ContactGroups"].isNull())
			datapointsObject.contactGroups = value["ContactGroups"].asString();
		if(!value["Webhook"].isNull())
			datapointsObject.webhook = value["Webhook"].asString();
		if(!value["Subject"].isNull())
			datapointsObject.subject = value["Subject"].asString();
		if(!value["DisplayName"].isNull())
			datapointsObject.displayName = value["DisplayName"].asString();
		if(!value["Resources"].isNull())
			datapointsObject.resources = value["Resources"].asString();
		if(!value["Level"].isNull())
			datapointsObject.level = value["Level"].asString();
		if(!value["GroupId"].isNull())
			datapointsObject.groupId = value["GroupId"].asString();
		if(!value["GroupName"].isNull())
			datapointsObject.groupName = value["GroupName"].asString();
		if(!value["Statistics"].isNull())
			datapointsObject.statistics = value["Statistics"].asString();
		if(!value["ComparisonOperator"].isNull())
			datapointsObject.comparisonOperator = value["ComparisonOperator"].asString();
		if(!value["Threshold"].isNull())
			datapointsObject.threshold = value["Threshold"].asString();
		auto escalationsNode = value["Escalations"];
		auto infoNode = escalationsNode["Info"];
		if(!infoNode["ComparisonOperator"].isNull())
			datapointsObject.escalations.info.comparisonOperator = infoNode["ComparisonOperator"].asString();
		if(!infoNode["Statistics"].isNull())
			datapointsObject.escalations.info.statistics = infoNode["Statistics"].asString();
		if(!infoNode["Threshold"].isNull())
			datapointsObject.escalations.info.threshold = infoNode["Threshold"].asString();
		if(!infoNode["Times"].isNull())
			datapointsObject.escalations.info.times = infoNode["Times"].asString();
		auto warnNode = escalationsNode["Warn"];
		if(!warnNode["ComparisonOperator"].isNull())
			datapointsObject.escalations.warn.comparisonOperator = warnNode["ComparisonOperator"].asString();
		if(!warnNode["Statistics"].isNull())
			datapointsObject.escalations.warn.statistics = warnNode["Statistics"].asString();
		if(!warnNode["Threshold"].isNull())
			datapointsObject.escalations.warn.threshold = warnNode["Threshold"].asString();
		if(!warnNode["Times"].isNull())
			datapointsObject.escalations.warn.times = warnNode["Times"].asString();
		auto criticalNode = escalationsNode["Critical"];
		if(!criticalNode["ComparisonOperator"].isNull())
			datapointsObject.escalations.critical.comparisonOperator = criticalNode["ComparisonOperator"].asString();
		if(!criticalNode["Statistics"].isNull())
			datapointsObject.escalations.critical.statistics = criticalNode["Statistics"].asString();
		if(!criticalNode["Threshold"].isNull())
			datapointsObject.escalations.critical.threshold = criticalNode["Threshold"].asString();
		if(!criticalNode["Times"].isNull())
			datapointsObject.escalations.critical.times = criticalNode["Times"].asString();
		datapoints_.push_back(datapointsObject);
	}
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();
	if(!value["Dimensions"].isNull())
		dimensions_ = value["Dimensions"].asString();

}

std::string DescribeAlarmsForResourcesResult::getMessage()const
{
	return message_;
}

std::string DescribeAlarmsForResourcesResult::getTotal()const
{
	return total_;
}

std::string DescribeAlarmsForResourcesResult::getTraceId()const
{
	return traceId_;
}

std::string DescribeAlarmsForResourcesResult::getDimensions()const
{
	return dimensions_;
}

std::vector<DescribeAlarmsForResourcesResult::Alarm> DescribeAlarmsForResourcesResult::getDatapoints()const
{
	return datapoints_;
}

int DescribeAlarmsForResourcesResult::getCode()const
{
	return code_;
}

bool DescribeAlarmsForResourcesResult::getSuccess()const
{
	return success_;
}

