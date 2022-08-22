/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OHOS_SYSTEM_TEST_DISTRIBUTED_PERMISSION_STRESS_TEST_H
#define OHOS_SYSTEM_TEST_DISTRIBUTED_PERMISSION_STRESS_TEST_H
#include <string>
#include <unistd.h>
#include <vector>
#include <gtest/gtest.h>
#include "permission_log.h"
#include "system_test_distributed_permission_util.h"
#include "distributed_permission_kit.h"
#include "on_request_permissions_result_stub.h"
#include "sensitive_resource_switch_setting.h"
#include "resource_switch_cache.h"
#include "permission_kit.h"
#include "ability_manager_service.h"
#include "ability_manager_errors.h"
#include "app_mgr_service.h"
#include "system_test_ability_util.h"
#include "sa_mgr_client.h"
#include "system_ability_definition.h"
#include "common_event.h"
#include "common_event_manager.h"
#include "ability_lifecycle_executor.h"
#include "device_info_repository.h"
using std::string;
#include "sqlite_storage.h"
#include "time_util.h"
#include "on_permission_used_record_stub.h"
namespace OHOS {
namespace Security {
namespace Permission {
typedef bool (*FnPtr)(std::string &deviceId, int32_t ruid, int32_t duid);
class StressTestApi {
public:
    static bool DpmsDuidTranstorm_01(std::string &deviceId, int32_t ruid, int32_t duid);
    static bool AllocateDuid_01(std::string &deviceId, int32_t ruid, int32_t duid);
    static bool QueryDuid_01(std::string &deviceId, int32_t ruid, int32_t duid);
    static bool IsDuid_01(std::string &deviceId, int32_t ruid, int32_t duid);
    static bool CheckDPermission_01(std::string &deviceId, int32_t ruid, int32_t duid);
    static bool CheckPermission_01(std::string &deviceId, int32_t ruid, int32_t duid);
    static bool IsRestrictedPermission_01(std::string &deviceId, int32_t ruid, int32_t duid);
    static bool CreateAppIdInfo_01(std::string &deviceId, int32_t ruid, int32_t duid);
    static bool CreateAppIdInfo_02(std::string &deviceId, int32_t ruid, int32_t duid);
    static bool CreateAppIdInfo_03(std::string &deviceId, int32_t ruid, int32_t duid);
    static bool ParseAppIdInfo_01(std::string &deviceId, int32_t ruid, int32_t duid);
    static bool AddPermissionUsedRecord_01(std::string &deviceId, int32_t ruid, int32_t duid);
    static bool GetPermissionUsedRecords_01(std::string &deviceId, int32_t ruid, int32_t duid);
    static bool GetPermissionUsedRecords_02(std::string &deviceId, int32_t ruid, int32_t duid);
    static void GetDpmsDuidTranstormTestFunction_01(std::vector<FnPtr> &vector);
    static void GetDpmsDuidTranstormTestFunction_02(std::vector<FnPtr> &vector);
    static void GetCheckDistributedTestFunction_01(std::vector<FnPtr> &vector);
    static void GetCheckDistributedTestFunction_02(std::vector<FnPtr> &vector);
    static void GetPermissionUsedRecordTestFunction_01(std::vector<FnPtr> &vector);

private:
};  // namespace DistributedHardware
}  // namespace Permission
}  // namespace Security
}  // namespace OHOS
#endif  // OHOS_SYSTEM_TEST_DISTRIBUTED_PERMISSION_STRESS_TEST_H