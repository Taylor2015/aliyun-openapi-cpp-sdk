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

#include <alibabacloud/vpc/model/CreateIpv6GatewayRequest.h>

using AlibabaCloud::Vpc::Model::CreateIpv6GatewayRequest;

CreateIpv6GatewayRequest::CreateIpv6GatewayRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateIpv6Gateway")
{}

CreateIpv6GatewayRequest::~CreateIpv6GatewayRequest()
{}

long CreateIpv6GatewayRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateIpv6GatewayRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateIpv6GatewayRequest::getClientToken()const
{
	return clientToken_;
}

void CreateIpv6GatewayRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long CreateIpv6GatewayRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateIpv6GatewayRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string CreateIpv6GatewayRequest::getDescription()const
{
	return description_;
}

void CreateIpv6GatewayRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

bool CreateIpv6GatewayRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateIpv6GatewayRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string CreateIpv6GatewayRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateIpv6GatewayRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateIpv6GatewayRequest::getSpec()const
{
	return spec_;
}

void CreateIpv6GatewayRequest::setSpec(const std::string& spec)
{
	spec_ = spec;
	setParameter("Spec", spec);
}

std::string CreateIpv6GatewayRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateIpv6GatewayRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateIpv6GatewayRequest::getCallerType()const
{
	return callerType_;
}

void CreateIpv6GatewayRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string CreateIpv6GatewayRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateIpv6GatewayRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateIpv6GatewayRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateIpv6GatewayRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateIpv6GatewayRequest::getRegionId()const
{
	return regionId_;
}

void CreateIpv6GatewayRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateIpv6GatewayRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateIpv6GatewayRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool CreateIpv6GatewayRequest::getEnable()const
{
	return enable_;
}

void CreateIpv6GatewayRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string CreateIpv6GatewayRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateIpv6GatewayRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string CreateIpv6GatewayRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateIpv6GatewayRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateIpv6GatewayRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateIpv6GatewayRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long CreateIpv6GatewayRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateIpv6GatewayRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateIpv6GatewayRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateIpv6GatewayRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string CreateIpv6GatewayRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateIpv6GatewayRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateIpv6GatewayRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateIpv6GatewayRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateIpv6GatewayRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateIpv6GatewayRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long CreateIpv6GatewayRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateIpv6GatewayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool CreateIpv6GatewayRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateIpv6GatewayRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool CreateIpv6GatewayRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateIpv6GatewayRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool CreateIpv6GatewayRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateIpv6GatewayRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string CreateIpv6GatewayRequest::getRequestId()const
{
	return requestId_;
}

void CreateIpv6GatewayRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string CreateIpv6GatewayRequest::getVpcId()const
{
	return vpcId_;
}

void CreateIpv6GatewayRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateIpv6GatewayRequest::getName()const
{
	return name_;
}

void CreateIpv6GatewayRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

