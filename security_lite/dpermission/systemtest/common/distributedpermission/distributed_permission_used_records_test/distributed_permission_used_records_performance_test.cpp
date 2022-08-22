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
#include <mutex>
#include "device_info_manager.h"
#include "permission_log.h"
#include "system_test_distributed_permission_util.h"
#include "ipc_skeleton.h"
#include "time_util.h"
#include "distributed_permission_kit.h"
#include "sqlite_storage.h"
#include "singleton.h"
#include "bundle_info.h"
#include "on_permission_used_record_stub.h"
#include "permission_definition.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Security::Permission;
using namespace OHOS::STPermissionUtil;
using namespace OHOS::AppExecFwk;
using namespace OHOS::DistributedHardware;

using std::string;

namespace {
std::recursive_mutex statckLock_;
string deviceId_;
string deviceName_;
int32_t pid_;
int32_t uid_;
bool initFlag;
string permName_ = "ohos.permission.WRITE_CONTACTS";
OHOS::AppExecFwk::BundleInfo bundleInfo_;
static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {
    LOG_CORE, SECURITY_DOMAIN_PERMISSION, "DistributedPermissionUsedRecordsPerformanceTest"};
}  // namespace

class DistributedPermissionUsedRecordsPerformanceTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
    static void RemoveStorage();
    static void InitRecordData();
    static void InitVisitorData(std::string bundleName);
    static string GetAppIdInfo(string &deviceId_);
    static void AddDistributedPermissionUsedRecord(
        string &permName, string &appInfo, int32_t sucCount, int32_t failCount);
};

void DistributedPermissionUsedRecordsPerformanceTest::SetUpTestCase(void)
{}

void DistributedPermissionUsedRecordsPerformanceTest::TearDownTestCase(void)
{}

void DistributedPermissionUsedRecordsPerformanceTest::SetUp(void)
{
    if (initFlag) {
        return;
    }
    char localDeviceId[Constant::DEVICE_UUID_LENGTH] = {0};
    GetDevUdid(localDeviceId, Constant::DEVICE_UUID_LENGTH);
    deviceId_ = localDeviceId;
    PERMISSION_LOG_INFO(LABEL, "localDeviceId  =%{public}s ", localDeviceId);

    // install package
    {
        STDistibutePermissionUtil::Install(DPMS_THIRD_HAP_NAME);
    }
    BundleInfo bundleInfo;
    // get uid
    int systemBundleUid = STDistibutePermissionUtil::GetUidByBundleName(DPMS_THIRD_BUNDLE_NAME);
    uid_ = systemBundleUid;

    std::vector<GenericValues> visitor;
    string appInfo = GetAppIdInfo(deviceId_);
    DistributedPermissionKit::AddPermissionUsedRecord(permName_, appInfo, 1, 0);

    SqliteStorage::GetRealDataStorage().Find(DataStorage::PERMISSION_VISITOR, visitor);
    deviceName_ = visitor[0].GetString(FIELD_DEVICE_NAME);

    PERMISSION_LOG_INFO(LABEL, "deviceName_  =%{public}s ", deviceName_.c_str());
    initFlag = true;
}

void DistributedPermissionUsedRecordsPerformanceTest::TearDown(void)
{}

void DistributedPermissionUsedRecordsPerformanceTest::InitVisitorData(std::string bundleName)
{
    std::vector<GenericValues> visitor;
    GenericValues genericVisitor;
    genericVisitor.Put(FIELD_DEVICE_ID, deviceId_);
    genericVisitor.Put(FIELD_DEVICE_NAME, deviceName_);
    genericVisitor.Put(FIELD_BUNDLE_USER_ID, 0);
    genericVisitor.Put(FIELD_BUNDLE_NAME, bundleName);
    genericVisitor.Put(FIELD_BUNDLE_LABEL, "bundleInfo.label_0");
    visitor.emplace_back(genericVisitor);

    GenericValues genericVisitor1;
    genericVisitor1.Put(FIELD_DEVICE_ID, "device_1");
    genericVisitor1.Put(FIELD_DEVICE_NAME, "device_name_1");
    genericVisitor1.Put(FIELD_BUNDLE_USER_ID, 0);
    genericVisitor1.Put(FIELD_BUNDLE_NAME, "bundleName_1");
    genericVisitor1.Put(FIELD_BUNDLE_LABEL, "bundleInfo.label_1");
    visitor.emplace_back(genericVisitor1);
    DataStorage::GetRealDataStorage().Add(DataStorage::PERMISSION_VISITOR, visitor);
}
void DistributedPermissionUsedRecordsPerformanceTest::InitRecordData()
{
    int opCode = 4;
    int rejectCount = 3;
    int timeHundred = 100;
    std::vector<GenericValues> visitor;
    DataStorage::GetRealDataStorage().Find(DataStorage::PERMISSION_VISITOR, visitor);
    int visitorId = 0;
    if (visitor.size() > 0) {
        visitorId = visitor[0].GetInt(FIELD_ID);
    }

    std::vector<GenericValues> record;
    GenericValues genericRecordFore;
    genericRecordFore.Put(FIELD_TIMESTAMP, timeHundred);
    genericRecordFore.Put(FIELD_VISITOR_ID, visitorId);
    genericRecordFore.Put(FIELD_OP_CODE, opCode);
    genericRecordFore.Put(FIELD_IS_FOREGROUND, 1);
    genericRecordFore.Put(FIELD_ACCESS_COUNT, rejectCount);
    genericRecordFore.Put(FIELD_REJECT_COUNT, rejectCount);

    GenericValues genericRecordBack;
    genericRecordBack.Put(FIELD_TIMESTAMP, timeHundred + timeHundred);
    genericRecordBack.Put(FIELD_VISITOR_ID, visitorId);
    genericRecordBack.Put(FIELD_OP_CODE, opCode);
    genericRecordBack.Put(FIELD_IS_FOREGROUND, 0);
    genericRecordBack.Put(FIELD_ACCESS_COUNT, 1);
    genericRecordBack.Put(FIELD_REJECT_COUNT, 0);

    GenericValues genericRecord;
    genericRecord.Put(FIELD_TIMESTAMP, timeHundred + timeHundred + timeHundred);
    genericRecord.Put(FIELD_VISITOR_ID, visitorId);
    genericRecord.Put(FIELD_OP_CODE, 1);
    genericRecord.Put(FIELD_IS_FOREGROUND, 0);
    genericRecord.Put(FIELD_ACCESS_COUNT, 1);
    genericRecord.Put(FIELD_REJECT_COUNT, rejectCount);
    record.emplace_back(genericRecordFore);
    record.emplace_back(genericRecordBack);
    record.emplace_back(genericRecord);
    DataStorage::GetRealDataStorage().Add(DataStorage::PERMISSION_RECORD, record);
}

// delete all records
void DistributedPermissionUsedRecordsPerformanceTest::RemoveStorage()
{
    GenericValues null;
    DataStorage::GetRealDataStorage().Remove(DataStorage::PERMISSION_VISITOR, null);
    DataStorage::GetRealDataStorage().Remove(DataStorage::PERMISSION_RECORD, null);
}

// create appinfo
string DistributedPermissionUsedRecordsPerformanceTest::GetAppIdInfo(string &deviceId_)
{
    return DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid_, uid_, deviceId_);
}

// callback
class TestCallback : public OnPermissionUsedRecordStub {
public:
    TestCallback() = default;
    virtual ~TestCallback() = default;

    void OnQueried(ErrCode code, QueryPermissionUsedResult &result)
    {
        int successCode = 200;
        PERMISSION_LOG_DEBUG(LABEL, "------------time end-------------");
        EXPECT_EQ(code, successCode);
    }
};

/**
 * @tc.name      AddPermissionUsedRecord interface performance
 * @tc.number    DPMS_AddPermissionUsedRecord_0900
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DistributedPermissionUsedRecordsPerformanceTest, DPMS_AddPermissionUsedRecord_0900, TestSize.Level3)
{
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0900 start");
    int count = 1000;
    std::chrono::duration<double, std::milli> fp_ms;
    auto timeFast = std::chrono::milliseconds(10);
    for (int i = 0; i < count; i++) {
        RemoveStorage();
        string appInfo = GetAppIdInfo(deviceId_);
        DistributedPermissionKit::AddPermissionUsedRecord(permName_, appInfo, 1, 0);
        std::this_thread::sleep_for(timeFast);
        auto startTime = std::chrono::high_resolution_clock::now();
        PERMISSION_LOG_DEBUG(LABEL, "------------time start-------------");
        DistributedPermissionKit::AddPermissionUsedRecord(permName_, appInfo, 1, 0);
        PERMISSION_LOG_DEBUG(LABEL, "------------time end-------------");
        auto endTime = std::chrono::high_resolution_clock::now();
        fp_ms += (endTime - startTime) * 0.001;
    }
    PERMISSION_LOG_DEBUG(LABEL, "avg = %{public}f", fp_ms.count());
    EXPECT_LT(fp_ms.count(), 0.5);
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0900 end");
}

/**
 * @tc.name      GetPermissionUsedRecords interface performance
 * @tc.number    DPMS_GetPermissionUsedRecords_1800
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DistributedPermissionUsedRecordsPerformanceTest, DPMS_GetPermissionUsedRecords_1800, TestSize.Level3)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1800 start");
    int count = 1000;
    std::chrono::duration<double, std::milli> fp_ms;
    for (int i = 0; i < count; i++) {
        QueryPermissionUsedRequest request;
        QueryPermissionUsedResult result;
        auto startTime = std::chrono::high_resolution_clock::now();
        PERMISSION_LOG_DEBUG(LABEL, "------------time start-------------");
        DistributedPermissionKit::GetPermissionUsedRecords(request, result);
        PERMISSION_LOG_DEBUG(LABEL, "------------time end-------------");
        auto endTime = std::chrono::high_resolution_clock::now();
        fp_ms += (endTime - startTime) * 0.001;
    }
    PERMISSION_LOG_DEBUG(LABEL, "avg = %{public}f", fp_ms.count());
    EXPECT_LT(fp_ms.count(), 0.5);
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1800 end");
}

/**
 * @tc.name      GetPermissionUsedRecords interface performance
 * @tc.number    DPMS_GetPermissionUsedRecordsAsync_0100
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DistributedPermissionUsedRecordsPerformanceTest, DPMS_GetPermissionUsedRecordsAsync_0100, TestSize.Level3)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecordsAsync_0100 start");
    int count = 1000;
    std::chrono::duration<double, std::milli> fp_ms;
    for (int i = 0; i < count; i++) {
        auto timeFast = std::chrono::milliseconds(100);
        OHOS::sptr<TestCallback> callback(new TestCallback());
        QueryPermissionUsedRequest request;
        QueryPermissionUsedResult result;
        auto startTime = std::chrono::high_resolution_clock::now();
        PERMISSION_LOG_DEBUG(LABEL, "------------time start-------------");
        DistributedPermissionKit::GetPermissionUsedRecords(request, callback);
        auto endTime = std::chrono::high_resolution_clock::now();
        std::this_thread::sleep_for(timeFast);
        fp_ms += (endTime - startTime) * 0.001;
    }
    PERMISSION_LOG_DEBUG(LABEL, "avg = %{public}f", fp_ms.count());
    EXPECT_LT(fp_ms.count(), 0.5);
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecordsAsync_0100 end");
}
