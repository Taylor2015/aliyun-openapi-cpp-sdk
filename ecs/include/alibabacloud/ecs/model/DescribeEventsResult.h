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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEEVENTSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEEVENTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeEventsResult : public ServiceResult
			{
			public:
				struct Events
				{
					std::string status;
					std::string eventCategory;
					std::string resourceId;
					std::string eventType;
					std::string supportModify;
					std::string eventId;
					std::string planTime;
					std::string expireTime;
				};


				DescribeEventsResult();
				explicit DescribeEventsResult(const std::string &payload);
				~DescribeEventsResult();
				int getPageSize()const;
				int getTotal()const;
				std::vector<Events> getData()const;
				int getPageNo()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int total_;
				std::vector<Events> data_;
				int pageNo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEEVENTSRESULT_H_