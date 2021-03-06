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

#include <alibabacloud/ivision/model/DescribeStreamPredictResultRequest.h>

using AlibabaCloud::Ivision::Model::DescribeStreamPredictResultRequest;

DescribeStreamPredictResultRequest::DescribeStreamPredictResultRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribeStreamPredictResult")
{}

DescribeStreamPredictResultRequest::~DescribeStreamPredictResultRequest()
{}

long DescribeStreamPredictResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeStreamPredictResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeStreamPredictResultRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void DescribeStreamPredictResultRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setParameter("NextPageToken", nextPageToken);
}

long DescribeStreamPredictResultRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeStreamPredictResultRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeStreamPredictResultRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeStreamPredictResultRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeStreamPredictResultRequest::getStartTime()const
{
	return startTime_;
}

void DescribeStreamPredictResultRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeStreamPredictResultRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeStreamPredictResultRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeStreamPredictResultRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeStreamPredictResultRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeStreamPredictResultRequest::getCallerType()const
{
	return callerType_;
}

void DescribeStreamPredictResultRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeStreamPredictResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeStreamPredictResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeStreamPredictResultRequest::getPredictId()const
{
	return predictId_;
}

void DescribeStreamPredictResultRequest::setPredictId(const std::string& predictId)
{
	predictId_ = predictId;
	setParameter("PredictId", predictId);
}

std::string DescribeStreamPredictResultRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeStreamPredictResultRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeStreamPredictResultRequest::getRegionId()const
{
	return regionId_;
}

void DescribeStreamPredictResultRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeStreamPredictResultRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeStreamPredictResultRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

long DescribeStreamPredictResultRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeStreamPredictResultRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeStreamPredictResultRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeStreamPredictResultRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeStreamPredictResultRequest::getProbabilityThreshold()const
{
	return probabilityThreshold_;
}

void DescribeStreamPredictResultRequest::setProbabilityThreshold(const std::string& probabilityThreshold)
{
	probabilityThreshold_ = probabilityThreshold;
	setParameter("ProbabilityThreshold", probabilityThreshold);
}

std::string DescribeStreamPredictResultRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeStreamPredictResultRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeStreamPredictResultRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeStreamPredictResultRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeStreamPredictResultRequest::getShowLog()const
{
	return showLog_;
}

void DescribeStreamPredictResultRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeStreamPredictResultRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeStreamPredictResultRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeStreamPredictResultRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeStreamPredictResultRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeStreamPredictResultRequest::getModelId()const
{
	return modelId_;
}

void DescribeStreamPredictResultRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setParameter("ModelId", modelId);
}

std::string DescribeStreamPredictResultRequest::getEndTime()const
{
	return endTime_;
}

void DescribeStreamPredictResultRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeStreamPredictResultRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeStreamPredictResultRequest::setCurrentPage(long currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeStreamPredictResultRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeStreamPredictResultRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeStreamPredictResultRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeStreamPredictResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeStreamPredictResultRequest::getVersion()const
{
	return version_;
}

void DescribeStreamPredictResultRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeStreamPredictResultRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeStreamPredictResultRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeStreamPredictResultRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeStreamPredictResultRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeStreamPredictResultRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeStreamPredictResultRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeStreamPredictResultRequest::getRequestId()const
{
	return requestId_;
}

void DescribeStreamPredictResultRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

