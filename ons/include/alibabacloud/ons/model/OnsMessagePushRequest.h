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

#ifndef ALIBABACLOUD_ONS_MODEL_ONSMESSAGEPUSHREQUEST_H_
#define ALIBABACLOUD_ONS_MODEL_ONSMESSAGEPUSHREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ons/OnsExport.h>

namespace AlibabaCloud
{
	namespace Ons
	{
		namespace Model
		{
			class ALIBABACLOUD_ONS_EXPORT OnsMessagePushRequest : public RpcServiceRequest
			{

			public:
				OnsMessagePushRequest();
				~OnsMessagePushRequest();

				long getPreventCache()const;
				void setPreventCache(long preventCache);
				std::string getClientId()const;
				void setClientId(const std::string& clientId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getMsgId()const;
				void setMsgId(const std::string& msgId);
				std::string getTopic()const;
				void setTopic(const std::string& topic);

            private:
				long preventCache_;
				std::string clientId_;
				std::string instanceId_;
				std::string groupId_;
				std::string msgId_;
				std::string topic_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ONS_MODEL_ONSMESSAGEPUSHREQUEST_H_