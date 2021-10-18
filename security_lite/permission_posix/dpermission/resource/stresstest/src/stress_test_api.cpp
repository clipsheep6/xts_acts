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
#include <unistd.h>
#include "stress_test_api.h"

using std::string;
using namespace OHOS::STPermissionUtil;
using namespace OHOS;
using namespace OHOS::Security::Permission;
using namespace OHOS::AppExecFwk;
using namespace OHOS::STABUtil;
using namespace OHOS::EventFwk;
using namespace OHOS::STtools;
using namespace OHOS::DistributedHardware;
using MAP_STR_STR = std::map<std::string, std::string>;
namespace OHOS {
namespace Security {
namespace Permission {
const int32_t PID = getpid();
const string PERMISSION_NAME = "ohos.permission.GET_NETWORK_INFO";
bool DistibutePermissionStressTest::DpmsDuidTranstorm_01(std::string &deviceId, int32_t ruid)
{
    std::cout << "DpmsDuidTranstorm_01 start" << std::endl;
    std::cout << "deviceId ：" << deviceId << std::endl;
    std::cout << "ruid ：" << ruid << std::endl;
    int32_t allocateDuid = DistributedPermissionKit::AllocateDuid(deviceId, ruid);
    std::cout << "allocateDuid ：" << allocateDuid << std::endl;
    int32_t queryDuid = DistributedPermissionKit::QueryDuid(deviceId, ruid);
    std::cout << "queryDuid ：" << queryDuid << std::endl;
    bool result1 = DistributedPermissionKit::IsDuid(allocateDuid);
    std::cout << "result1 ：" << result1 << std::endl;
    bool result2 = DistributedPermissionKit::IsDuid(queryDuid);
    std::cout << "result2 ：" << result2 << std::endl;
    std::cout << "DpmsDuidTranstorm_01 end" << std::endl;
    return (result1 > 0 && result2 > 0) ? true : false;
}

bool DistibutePermissionStressTest::AllocateDuid_01(std::string &deviceId, int32_t ruid)
{
    std::cout << "AllocateDuid_01 start" << std::endl;
    std::cout << "deviceId ：" << deviceId << std::endl;
    std::cout << "ruid ：" << ruid << std::endl;
    int32_t allocateDuid = DistributedPermissionKit::AllocateDuid(deviceId, ruid);
    std::cout << "allocateDuid ：" << allocateDuid << std::endl;
    std::cout << "AllocateDuid_01 end" << std::endl;
    return allocateDuid > 0;
}

bool DistibutePermissionStressTest::QueryDuid_01(std::string &deviceId, int32_t ruid)
{
    std::cout << "QueryDuid_01 start" << std::endl;
    std::cout << "deviceId ：" << deviceId << std::endl;
    std::cout << "ruid ：" << ruid << std::endl;
    int32_t queryDuid = DistributedPermissionKit::QueryDuid(deviceId, ruid);
    std::cout << "queryDuid ：" << queryDuid << std::endl;
    std::cout << "QueryDuid_01 end" << std::endl;
    return queryDuid == -2 || queryDuid > 0;
}

bool DistibutePermissionStressTest::IsDuid_01(std::string &deviceId, int32_t ruid)
{
    std::cout << "IsDuid_01 start" << std::endl;
    std::cout << "deviceId ：" << deviceId << std::endl;
    std::cout << "ruid ：" << ruid << std::endl;
    int32_t allocateDuid = DistributedPermissionKit::AllocateDuid(deviceId, ruid);
    std::cout << "allocateDuid ：" << allocateDuid << std::endl;
    bool result1 = DistributedPermissionKit::IsDuid(allocateDuid);
    std::cout << "result1 ：" << result1 << std::endl;
    std::cout << "IsDuid_01 end" << std::endl;
    return result1 > 0;
}

bool DistibutePermissionStressTest::CheckDPermission_01(std::string &deviceId, int32_t ruid)
{
    std::cout << "CheckDPermission_01 start" << std::endl;
    std::cout << "deviceId ：" << deviceId << std::endl;
    std::cout << "ruid ：" << ruid << std::endl;
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, ruid);
    int32_t result = DistributedPermissionKit::CheckDPermission(duid, PERMISSION_NAME);
    std::cout << "CheckDPermission_01 end" << std::endl;
    return result == 0 ? true : false;
}

bool DistibutePermissionStressTest::CheckPermission_01(std::string &deviceId, int32_t ruid)
{
    std::cout << "CheckPermission_01 start" << std::endl;
    std::cout << "deviceId ：" << deviceId << std::endl;
    std::cout << "ruid ：" << ruid << std::endl;
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, ruid);
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, duid, deviceId);
    int32_t result = DistributedPermissionKit::CheckPermission(PERMISSION_NAME, appIdInfo);
    std::cout << "CheckPermission_01 end" << std::endl;
    return result == 0 ? true : false;
}

bool DistibutePermissionStressTest::IsRestrictedPermission_01(std::string &deviceId, int32_t ruid)
{
    std::cout << "IsRestrictedPermission_01 start" << std::endl;
    std::cout << "deviceId ：" << deviceId << std::endl;
    std::cout << "ruid ：" << ruid << std::endl;
    std::string permissionName = "ohos.permission.READ_CONTACTS";
    bool result = DistributedPermissionKit::IsRestrictedPermission(permissionName);
    std::cout << "IsRestrictedPermission_01 end" << std::endl;
    return result;
}

bool DistibutePermissionStressTest::CreateAppIdInfo_01(std::string &deviceId, int32_t ruid)
{
    std::cout << "CreateAppIdInfo_01 start" << std::endl;
    std::cout << "deviceId ：" << deviceId << std::endl;
    std::cout << "ruid ：" << ruid << std::endl;
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, ruid);
    std::string expect_j = "{\"pid\":" + std::to_string(PID) + ",\"uid\":" + std::to_string(ruid) + "}";
    std::cout << "CreateAppIdInfo_01 end" << std::endl;
    // return (strcmp(appIdInfo.c_str(), expect_j.c_str())) ? true : false;
    return (appIdInfo == expect_j) ? true : false;
}

bool DistibutePermissionStressTest::CreateAppIdInfo_02(std::string &deviceId, int32_t ruid)
{
    std::cout << "CreateAppIdInfo_02 start" << std::endl;
    std::cout << "deviceId ：" << deviceId << std::endl;
    std::cout << "ruid ：" << ruid << std::endl;
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, ruid, deviceId);
    string expect_j =
        "{\"deviceID\":\"" + deviceId + "\",\"pid\":" + std::to_string(PID) + ",\"uid\":" + std::to_string(ruid) + "}";
    std::cout << "ruid ：" << appIdInfo << std::endl;
    std::cout << "ruid ：" << expect_j << std::endl;
    std::cout << "CreateAppIdInfo_02 end" << std::endl;
    // return (strcmp(appIdInfo.c_str(), expect_j.c_str())) ? true : false;
    return (appIdInfo == expect_j) ? true : false;
}

bool DistibutePermissionStressTest::CreateAppIdInfo_03(std::string &deviceId, int32_t ruid)
{
    std::cout << "CreateAppIdInfo_03 start" << std::endl;
    std::cout << "deviceId ：" << deviceId << std::endl;
    std::cout << "ruid ：" << ruid << std::endl;
    string appIdInfo =
        DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, ruid, deviceId, THIRD_BUNDLE_NAME2);
    string expect_j = "{\"bundleName\":\"" + THIRD_BUNDLE_NAME2 + "\",\"deviceID\":\"" + deviceId +
                      "\",\"pid\":" + std::to_string(PID) + ",\"uid\":" + std::to_string(ruid) + "}";
    std::cout << "CreateAppIdInfo_03 end" << std::endl;
    // return (strcmp(appIdInfo.c_str(), expect_j.c_str())) ? true : false;
    return (appIdInfo == expect_j) ? true : false;
}

bool DistibutePermissionStressTest::ParseAppIdInfo_01(std::string &deviceId, int32_t ruid)
{
    std::cout << "ParseAppIdInfo_01 start" << std::endl;
    std::cout << "deviceId ：" << deviceId << std::endl;
    std::cout << "ruid ：" << ruid << std::endl;
    std::string appIdInfo =
        "{\"deviceID\":\"" + deviceId + "\",\"pid\":" + std::to_string(PID) + ",\"uid\":" + std::to_string(ruid) + "}";
    AppIdInfo appIdInfoObj;
    bool ret = DistributedPermissionKit::AppIdInfoHelper::ParseAppIdInfo(appIdInfo, appIdInfoObj);
    std::cout << "ParseAppIdInfo_01 end" << std::endl;
    return ret;
}

void DistibutePermissionStressTest::GetDpmsDuidTranstormTestFunction_01(std::vector<FnPtr> &vector)
{
    vector.push_back(DpmsDuidTranstorm_01);
}
void DistibutePermissionStressTest::GetDpmsDuidTranstormTestFunction_02(std::vector<FnPtr> &vector)
{
    vector.push_back(AllocateDuid_01);
    vector.push_back(QueryDuid_01);
    vector.push_back(IsDuid_01);
}

void DistibutePermissionStressTest::GetCheckDistributedTestFunction_01(std::vector<FnPtr> &vector)
{
    vector.push_back(CheckDPermission_01);
    vector.push_back(CheckPermission_01);
}

void DistibutePermissionStressTest::GetCheckDistributedTestFunction_02(std::vector<FnPtr> &vector)
{
    vector.push_back(IsRestrictedPermission_01);
    vector.push_back(CreateAppIdInfo_01);
    vector.push_back(CreateAppIdInfo_02);
    vector.push_back(CreateAppIdInfo_03);
    vector.push_back(ParseAppIdInfo_01);
}
}  // namespace Permission
}  // namespace Security
}  // namespace OHOS