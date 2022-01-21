/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "tools.h"
#include <chrono>
#include <thread>

namespace OHOS {
namespace MMI {
void MmiSleep(float second)
{
    ASSERT_GT(second, 0);
    int32_t ms = int32_t(second * 1000); // 1 second equals 1000 microseconds
    ASSERT_GT(ms, 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));		
}

void MmiSleep(int32_t second)
{
    std::this_thread::sleep_for(std::chrono::seconds(1));	
}

void MmiSleep1s()
{
	MmiSleep(1);
}

int32_t ExecInjection(const std::string jsonFileName)
{
	const std::string injectionCommand = "hosmmi-event-injection json " + jsonFileName;   
	int ret = system(injectionCommand.data());
	MMI_LOGD("call system(\"%{public}s\"), ret: %{public}d", injectionCommand.data, ret);
    return 0;
}
} // namespace MMI
} // namespace OHOS