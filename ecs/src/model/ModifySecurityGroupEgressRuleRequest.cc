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

#include <alibabacloud/ecs/model/ModifySecurityGroupEgressRuleRequest.h>

using AlibabaCloud::Ecs::Model::ModifySecurityGroupEgressRuleRequest;

ModifySecurityGroupEgressRuleRequest::ModifySecurityGroupEgressRuleRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifySecurityGroupEgressRule")
{}

ModifySecurityGroupEgressRuleRequest::~ModifySecurityGroupEgressRuleRequest()
{}

std::string ModifySecurityGroupEgressRuleRequest::getNicType()const
{
	return nicType_;
}

void ModifySecurityGroupEgressRuleRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setParameter("NicType", nicType);
}

long ModifySecurityGroupEgressRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySecurityGroupEgressRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifySecurityGroupEgressRuleRequest::getSourcePortRange()const
{
	return sourcePortRange_;
}

void ModifySecurityGroupEgressRuleRequest::setSourcePortRange(const std::string& sourcePortRange)
{
	sourcePortRange_ = sourcePortRange;
	setParameter("SourcePortRange", sourcePortRange);
}

std::string ModifySecurityGroupEgressRuleRequest::getClientToken()const
{
	return clientToken_;
}

void ModifySecurityGroupEgressRuleRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long ModifySecurityGroupEgressRuleRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifySecurityGroupEgressRuleRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string ModifySecurityGroupEgressRuleRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifySecurityGroupEgressRuleRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

bool ModifySecurityGroupEgressRuleRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifySecurityGroupEgressRuleRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string ModifySecurityGroupEgressRuleRequest::getDescription()const
{
	return description_;
}

void ModifySecurityGroupEgressRuleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifySecurityGroupEgressRuleRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifySecurityGroupEgressRuleRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifySecurityGroupEgressRuleRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifySecurityGroupEgressRuleRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifySecurityGroupEgressRuleRequest::getCallerType()const
{
	return callerType_;
}

void ModifySecurityGroupEgressRuleRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string ModifySecurityGroupEgressRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySecurityGroupEgressRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifySecurityGroupEgressRuleRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifySecurityGroupEgressRuleRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifySecurityGroupEgressRuleRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifySecurityGroupEgressRuleRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifySecurityGroupEgressRuleRequest::getRegionId()const
{
	return regionId_;
}

void ModifySecurityGroupEgressRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool ModifySecurityGroupEgressRuleRequest::getEnable()const
{
	return enable_;
}

void ModifySecurityGroupEgressRuleRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string ModifySecurityGroupEgressRuleRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifySecurityGroupEgressRuleRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ModifySecurityGroupEgressRuleRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifySecurityGroupEgressRuleRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifySecurityGroupEgressRuleRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifySecurityGroupEgressRuleRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ModifySecurityGroupEgressRuleRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifySecurityGroupEgressRuleRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifySecurityGroupEgressRuleRequest::getPolicy()const
{
	return policy_;
}

void ModifySecurityGroupEgressRuleRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setParameter("Policy", policy);
}

std::string ModifySecurityGroupEgressRuleRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifySecurityGroupEgressRuleRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string ModifySecurityGroupEgressRuleRequest::getPortRange()const
{
	return portRange_;
}

void ModifySecurityGroupEgressRuleRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setParameter("PortRange", portRange);
}

std::string ModifySecurityGroupEgressRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySecurityGroupEgressRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifySecurityGroupEgressRuleRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void ModifySecurityGroupEgressRuleRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

std::string ModifySecurityGroupEgressRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySecurityGroupEgressRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifySecurityGroupEgressRuleRequest::getSourceCidrIp()const
{
	return sourceCidrIp_;
}

void ModifySecurityGroupEgressRuleRequest::setSourceCidrIp(const std::string& sourceCidrIp)
{
	sourceCidrIp_ = sourceCidrIp;
	setParameter("SourceCidrIp", sourceCidrIp);
}

std::string ModifySecurityGroupEgressRuleRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifySecurityGroupEgressRuleRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

std::string ModifySecurityGroupEgressRuleRequest::getDestGroupId()const
{
	return destGroupId_;
}

void ModifySecurityGroupEgressRuleRequest::setDestGroupId(const std::string& destGroupId)
{
	destGroupId_ = destGroupId;
	setParameter("DestGroupId", destGroupId);
}

long ModifySecurityGroupEgressRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySecurityGroupEgressRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifySecurityGroupEgressRuleRequest::getDestGroupOwnerAccount()const
{
	return destGroupOwnerAccount_;
}

void ModifySecurityGroupEgressRuleRequest::setDestGroupOwnerAccount(const std::string& destGroupOwnerAccount)
{
	destGroupOwnerAccount_ = destGroupOwnerAccount;
	setParameter("DestGroupOwnerAccount", destGroupOwnerAccount);
}

std::string ModifySecurityGroupEgressRuleRequest::getPriority()const
{
	return priority_;
}

void ModifySecurityGroupEgressRuleRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setParameter("Priority", priority);
}

std::string ModifySecurityGroupEgressRuleRequest::getDestCidrIp()const
{
	return destCidrIp_;
}

void ModifySecurityGroupEgressRuleRequest::setDestCidrIp(const std::string& destCidrIp)
{
	destCidrIp_ = destCidrIp;
	setParameter("DestCidrIp", destCidrIp);
}

bool ModifySecurityGroupEgressRuleRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifySecurityGroupEgressRuleRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool ModifySecurityGroupEgressRuleRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifySecurityGroupEgressRuleRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool ModifySecurityGroupEgressRuleRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifySecurityGroupEgressRuleRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

long ModifySecurityGroupEgressRuleRequest::getDestGroupOwnerId()const
{
	return destGroupOwnerId_;
}

void ModifySecurityGroupEgressRuleRequest::setDestGroupOwnerId(long destGroupOwnerId)
{
	destGroupOwnerId_ = destGroupOwnerId;
	setParameter("DestGroupOwnerId", std::to_string(destGroupOwnerId));
}

std::string ModifySecurityGroupEgressRuleRequest::getRequestId()const
{
	return requestId_;
}

void ModifySecurityGroupEgressRuleRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

