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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEDISKREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEDISKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT CreateDiskRequest : public RpcServiceRequest
			{

			public:
				CreateDiskRequest();
				~CreateDiskRequest();

				std::string getTag4Value()const;
				void setTag4Value(const std::string& tag4Value);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSnapshotId()const;
				void setSnapshotId(const std::string& snapshotId);
				std::string getTag2Key()const;
				void setTag2Key(const std::string& tag2Key);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getTag3Key()const;
				void setTag3Key(const std::string& tag3Key);
				std::string getDiskName()const;
				void setDiskName(const std::string& diskName);
				std::string getTag1Value()const;
				void setTag1Value(const std::string& tag1Value);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDiskCategory()const;
				void setDiskCategory(const std::string& diskCategory);
				std::string getTag3Value()const;
				void setTag3Value(const std::string& tag3Value);
				std::string getTag5Key()const;
				void setTag5Key(const std::string& tag5Key);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTag5Value()const;
				void setTag5Value(const std::string& tag5Value);
				std::string getTag1Key()const;
				void setTag1Key(const std::string& tag1Key);
				int getSize()const;
				void setSize(int size);
				bool getEncrypted()const;
				void setEncrypted(bool encrypted);
				std::string getTag2Value()const;
				void setTag2Value(const std::string& tag2Value);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getTag4Key()const;
				void setTag4Key(const std::string& tag4Key);

            private:
				std::string tag4Value_;
				long resourceOwnerId_;
				std::string snapshotId_;
				std::string tag2Key_;
				std::string clientToken_;
				std::string description_;
				std::string tag3Key_;
				std::string diskName_;
				std::string tag1Value_;
				std::string resourceGroupId_;
				std::string regionId_;
				std::string diskCategory_;
				std::string tag3Value_;
				std::string tag5Key_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string tag5Value_;
				std::string tag1Key_;
				int size_;
				bool encrypted_;
				std::string tag2Value_;
				std::string zoneId_;
				std::string tag4Key_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEDISKREQUEST_H_