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

#include <alibabacloud/ecs/model/DescribeInstanceMonitorDataRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceMonitorDataRequest;

DescribeInstanceMonitorDataRequest::DescribeInstanceMonitorDataRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceMonitorData")
{}

DescribeInstanceMonitorDataRequest::~DescribeInstanceMonitorDataRequest()
{}

long DescribeInstanceMonitorDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceMonitorDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeInstanceMonitorDataRequest::getPeriod()const
{
	return period_;
}

void DescribeInstanceMonitorDataRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string DescribeInstanceMonitorDataRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstanceMonitorDataRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeInstanceMonitorDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceMonitorDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceMonitorDataRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstanceMonitorDataRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeInstanceMonitorDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeInstanceMonitorDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeInstanceMonitorDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeInstanceMonitorDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeInstanceMonitorDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceMonitorDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

