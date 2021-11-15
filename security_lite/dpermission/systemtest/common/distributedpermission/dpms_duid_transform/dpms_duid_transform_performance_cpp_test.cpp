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
#include <cstdio>
#include <fstream>
#include <sstream>
#include <chrono>
#include <gtest/gtest.h>
#include <vector>
#include <mutex>
#include "permission_log.h"
#include "system_test_distributed_permission_util.h"
#include "ipc_skeleton.h"
#include "time_util.h"
#include "distributed_permission_kit.h"
#include "sqlite_storage.h"
#include "bundle_info.h"

#include "device_info_repository.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Security::Permission;
using namespace OHOS::STPermissionUtil;
using namespace OHOS::AppExecFwk;
using namespace OHOS::DistributedHardware;
using std::string;

namespace {
string deviceId_;
int32_t rUidThird_ = 0;
}  // namespace

namespace {
static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {
    LOG_CORE, SECURITY_DOMAIN_PERMISSION, "DpmsDuidTransformPerformanceCppTest"};
}
class DpmsDuidTransformPerformanceCppTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void DpmsDuidTransformPerformanceCppTest::SetUpTestCase()
{
    STDistibutePermissionUtil::Install(THIRD_INCLUDE_USE_BY_lOCAL_HAP_NAME_ADD_V1);
    rUidThird_ = STDistibutePermissionUtil::GetUidByBundleName(THIRD_INCLUDE_USE_BY_lOCAL_BUNDLE_NAME_ADD_V1);

    auto list = DeviceInfoRepository::GetInstance().ListDeviceInfo();
    auto iter = list.begin();
    for (; iter != list.end(); iter++) {
        DeviceInfo info = (*iter);
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> DpmsDuidTransformPerformanceCppTest device name: %{public}s", info.deviceName.c_str());
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> DpmsDuidTransformPerformanceCppTest device type: %{public}s", info.deviceType.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> DpmsDuidTransformPerformanceCppTest device network id: %{public}s",
            info.deviceId.networkId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> DpmsDuidTransformPerformanceCppTest device udid: %{public}s",
            info.deviceId.uniqueDisabilityId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> DpmsDuidTransformPerformanceCppTest device uuid: %{public}s",
            info.deviceId.universallyUniqueId.c_str());
    }
    std::vector<DmDeviceInfo> deviceList;
    std::string str = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(str, deviceList);
    deviceId_ = deviceList[0].deviceId;
}

void DpmsDuidTransformPerformanceCppTest::TearDownTestCase()
{
    STDistibutePermissionUtil::Uninstall(THIRD_INCLUDE_USE_BY_lOCAL_BUNDLE_NAME_ADD_V1);
}

void DpmsDuidTransformPerformanceCppTest::SetUp()
{}

void DpmsDuidTransformPerformanceCppTest::TearDown()
{}

/**
 * @tc.name      AllocateDuid interface performance.
 * @tc.number    DPMS_AllocateDuid_2100
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DpmsDuidTransformPerformanceCppTest, DPMS_AllocateDuid_2100, TestSize.Level3)
{
    int32_t count = 1000;
    double sum = 0;
    for (int32_t i = 0; i < count; i++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::AllocateDuid(deviceId_, rUidThird_);
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = endTime - startTime;
        sum += fp_ms.count();
    }
    EXPECT_LT(sum / count, STDistibutePermissionUtil::MAX_ELAPSED);
    GTEST_LOG_(INFO) << "avg = " << sum / count << "(ms)";
}

/**
 * @tc.name      QueryDuid interface performance.
 * @tc.number    DPMS_QueryDuid_0500
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DpmsDuidTransformPerformanceCppTest, DPMS_QueryDuid_0500, TestSize.Level3)
{
    int32_t count = 1000;
    double sum = 0;
    for (int32_t i = 0; i < count; i++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::QueryDuid(deviceId_, rUidThird_);
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = endTime - startTime;
        sum += fp_ms.count();
    }
    EXPECT_LT(sum / count, STDistibutePermissionUtil::MAX_ELAPSED);
    GTEST_LOG_(INFO) << "avg = " << sum / count << "(ms)";
}

/**
 * @tc.name      IsDuid interface performance.
 * @tc.number    DPMS_IsDuid_0600
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DpmsDuidTransformPerformanceCppTest, DPMS_IsDuid_0600, TestSize.Level3)
{
    int32_t count = 1000;
    double sum = 0;
    for (int32_t i = 0; i < count; i++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::IsDuid(12619999);
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = endTime - startTime;
        sum += fp_ms.count();
    }
    EXPECT_LT(sum / count, STDistibutePermissionUtil::MAX_ELAPSED);
    GTEST_LOG_(INFO) << "avg = " << sum / count << "(ms)";
}
