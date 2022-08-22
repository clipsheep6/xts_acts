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
namespace OHOS {
namespace Security {
namespace Permission {
namespace {
std::recursive_mutex statckLock_;
string deviceId_;
string deviceName_;
string bundleName_;
int32_t pid_;
int32_t uid_;
bool initFlag;
string permName_ = "ohos.permission.WRITE_CONTACTS";
OHOS::AppExecFwk::BundleInfo bundleInfo_;
static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {
    LOG_CORE, SECURITY_DOMAIN_PERMISSION, " DistributedPermissionUsedRecordsFunctionCPPTest"};
}  // namespace

class DistributedPermissionUsedRecordsFunctionCPPTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
    static void RemoveStorage();
    static void AddData(int64_t timestamp);
    static void InitRecordData();
    static void InitVisitorData(std::string bundleName);
    static string GetAppIdInfo(string &deviceId);
    static void FindDataStorageAll(DataStorage::DataType dataType, std::vector<GenericValues> &result);
    static void AddDistributedPermissionUsedRecord(
        string &permName, string &appInfo, int32_t sucCount, int32_t failCount);
};

void DistributedPermissionUsedRecordsFunctionCPPTest::SetUpTestCase(void)
{}

void DistributedPermissionUsedRecordsFunctionCPPTest::TearDownTestCase(void)
{}

void DistributedPermissionUsedRecordsFunctionCPPTest::SetUp(void)
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
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitor);
    deviceName_ = visitor[0].GetString(FIELD_DEVICE_NAME);
    bundleName_ = visitor[0].GetString(FIELD_BUNDLE_NAME);

    PERMISSION_LOG_INFO(LABEL, "deviceName_  =%{public}s ", deviceName_.c_str());
    initFlag = true;
}

void DistributedPermissionUsedRecordsFunctionCPPTest::TearDown(void)
{}

void DistributedPermissionUsedRecordsFunctionCPPTest::InitVisitorData(std::string bundleName)
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
void DistributedPermissionUsedRecordsFunctionCPPTest::InitRecordData()
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
void DistributedPermissionUsedRecordsFunctionCPPTest::RemoveStorage()
{
    GenericValues null;
    DataStorage::GetRealDataStorage().Remove(DataStorage::PERMISSION_VISITOR, null);

    DataStorage::GetRealDataStorage().Remove(DataStorage::PERMISSION_RECORD, null);
}

// create appinfo
string DistributedPermissionUsedRecordsFunctionCPPTest::GetAppIdInfo(string &deviceId)
{
    return DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid_, uid_, deviceId);
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

// find all records
void DistributedPermissionUsedRecordsFunctionCPPTest::FindDataStorageAll(
    DataStorage::DataType dataType, std::vector<GenericValues> &result)
{
    SqliteStorage::GetRealDataStorage().Find(dataType, result);
}

// Add data directly.
void DistributedPermissionUsedRecordsFunctionCPPTest::AddData(int64_t timestamp)
{
    std::vector<GenericValues> visitor;
    GenericValues genericVisitor;

    genericVisitor.Put(FIELD_DEVICE_ID, "device_1");
    genericVisitor.Put(FIELD_DEVICE_NAME, "device_name_1");
    genericVisitor.Put(FIELD_BUNDLE_USER_ID, 0);
    genericVisitor.Put(FIELD_BUNDLE_NAME, "bundleName");
    genericVisitor.Put(FIELD_BUNDLE_LABEL, "bundleInfo.label");
    visitor.emplace_back(genericVisitor);
    DataStorage::GetRealDataStorage().Add(DataStorage::PERMISSION_VISITOR, visitor);
    visitor.clear();
    DataStorage::GetRealDataStorage().Find(DataStorage::PERMISSION_VISITOR, visitor);
    int visitorId = 0;
    if (visitor.size() > 0) {
        visitorId = visitor[0].GetInt(FIELD_ID);
    }
    std::vector<GenericValues> record;
    GenericValues genericRecordFore;

    genericRecordFore.Put(FIELD_TIMESTAMP, timestamp);
    genericRecordFore.Put(FIELD_VISITOR_ID, visitorId);
    genericRecordFore.Put(FIELD_OP_CODE, 1);
    genericRecordFore.Put(FIELD_IS_FOREGROUND, 1);
    genericRecordFore.Put(FIELD_ACCESS_COUNT, 1);
    genericRecordFore.Put(FIELD_REJECT_COUNT, 0);
    record.emplace_back(genericRecordFore);
    DataStorage::GetRealDataStorage().Add(DataStorage::PERMISSION_RECORD, record);
}

/**
 * @tc.name      PermName is null, don't add.
 * @tc.number    DPMS_AddPermissionUsedRecord_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_AddPermissionUsedRecord_0100, TestSize.Level4)
{
    RemoveStorage();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0100 start");

    std::vector<GenericValues> visitorBefore;
    std::vector<GenericValues> recordBefore;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorBefore);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordBefore);
    EXPECT_EQ((int)visitorBefore.size(), 0);
    EXPECT_EQ((int)recordBefore.size(), 0);

    string appInfo = GetAppIdInfo(deviceId_);
    string permName = "";
    PERMISSION_LOG_DEBUG(LABEL,
        "init DPMS_AddPermissionUsedRecord_0100 deviceId_= %{public}s, appInfo=%{public}s, permName=%{public}s",
        deviceId_.c_str(),
        appInfo.c_str(),
        permName.c_str());
    DistributedPermissionKit::AddPermissionUsedRecord(permName, appInfo, 1, 0);

    std::vector<GenericValues> visitorAfter;
    std::vector<GenericValues> recordAfter;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorAfter);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordAfter);
    EXPECT_EQ((int)visitorAfter.size(), (int)visitorBefore.size());
    EXPECT_EQ((int)recordAfter.size(), (int)recordBefore.size());
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest PMS_Page_Ability_0100 end");
}

/**
 * @tc.name      AppIdInfo_deviceId is null, don't add.
 * @tc.number    DPMS_AddPermissionUsedRecord_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_AddPermissionUsedRecord_0200, TestSize.Level4)
{
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0200 start");
    RemoveStorage();
    string deviceId = "";
    std::vector<GenericValues> visitorBefore;
    std::vector<GenericValues> recordBefore;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorBefore);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordBefore);
    EXPECT_EQ((int)visitorBefore.size(), 0);
    EXPECT_EQ((int)recordBefore.size(), 0);

    string appInfo = GetAppIdInfo(deviceId);
    PERMISSION_LOG_DEBUG(LABEL,
        "init DPMS_AddPermissionUsedRecord_0200 deviceId_= %{public}s, appInfo=%{public}s, permName=%{public}s",
        deviceId_.c_str(),
        appInfo.c_str(),
        permName_.c_str());
    DistributedPermissionKit::AddPermissionUsedRecord(permName_, appInfo, 1, 0);

    std::vector<GenericValues> visitorAfter;
    std::vector<GenericValues> recordAfter;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorAfter);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordAfter);
    EXPECT_EQ((int)visitorAfter.size(), (int)visitorBefore.size());
    EXPECT_EQ((int)recordAfter.size(), (int)recordBefore.size());
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0200 end");
}

/**
 * @tc.name      PermissionVisitor table and permissionRecord table don't exist input data, add data.
 * @tc.number    DPMS_AddPermissionUsedRecord_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_AddPermissionUsedRecord_0300, TestSize.Level1)
{
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0300 start");
    RemoveStorage();

    std::vector<GenericValues> visitorBefore;
    std::vector<GenericValues> recordBefore;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorBefore);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordBefore);
    EXPECT_EQ((int)visitorBefore.size(), 0);
    EXPECT_EQ((int)recordBefore.size(), 0);

    string appInfo = GetAppIdInfo(deviceId_);
    PERMISSION_LOG_DEBUG(LABEL,
        "init DPMS_AddPermissionUsedRecord_0300 deviceId_= %{public}s, appInfo=%{public}s, permName=%{public}s",
        deviceId_.c_str(),
        appInfo.c_str(),
        permName_.c_str());
    DistributedPermissionKit::AddPermissionUsedRecord(permName_, appInfo, 1, 0);

    std::vector<GenericValues> visitorAfter;
    std::vector<GenericValues> recordAfter;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorAfter);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordAfter);
    EXPECT_EQ((int)visitorAfter.size(), (int)visitorBefore.size() + 1);
    EXPECT_EQ((int)recordAfter.size(), (int)recordBefore.size() + 1);
    EXPECT_STREQ(bundleName_.c_str(), visitorAfter[0].GetString(FIELD_BUNDLE_NAME).c_str());
    EXPECT_STREQ(deviceId_.c_str(), visitorAfter[0].GetString(FIELD_DEVICE_ID).c_str());
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0300 end");
}

/**
 * @tc.name      PermissionVisitor exists data, permissionRecord doesn't, permissionRecord table add data.
 * @tc.number    DPMS_AddPermissionUsedRecord_0400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_AddPermissionUsedRecord_0400, TestSize.Level1)
{
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0400 start");
    RemoveStorage();

    std::vector<GenericValues> visitorBefore;
    std::vector<GenericValues> recordBefore;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorBefore);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordBefore);
    EXPECT_EQ((int)visitorBefore.size(), 0);
    EXPECT_EQ((int)recordBefore.size(), 0);

    string appInfo = GetAppIdInfo(deviceId_);
    PERMISSION_LOG_DEBUG(LABEL,
        "init DPMS_AddPermissionUsedRecord_0400 deviceId_= %{public}s, appInfo=%{public}s, permName=%{public}s",
        deviceId_.c_str(),
        appInfo.c_str(),
        permName_.c_str());
    DistributedPermissionKit::AddPermissionUsedRecord(permName_, appInfo, 1, 0);
    string permName = "ohos.permission.LOCATION";
    DistributedPermissionKit::AddPermissionUsedRecord(permName, appInfo, 1, 0);

    std::vector<GenericValues> visitorAfter;
    std::vector<GenericValues> recordAfter;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorAfter);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordAfter);
    EXPECT_EQ((int)visitorAfter.size(), (int)visitorBefore.size() + 1);
    EXPECT_EQ((int)recordAfter.size(), (int)recordBefore.size() + 2);
    string newPermName;
    int32_t opcode = recordAfter[1].GetInt(FIELD_OP_CODE);
    Constant::PermissionNameToOrFromOpCode(newPermName, opcode);
    EXPECT_STREQ(bundleName_.c_str(), visitorAfter[0].GetString(FIELD_BUNDLE_NAME).c_str());
    EXPECT_STREQ(deviceId_.c_str(), visitorAfter[0].GetString(FIELD_DEVICE_ID).c_str());
    EXPECT_STREQ(newPermName.c_str(), permName.c_str());
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0400 end");
}

/**
 * @tc.name      Both table exists data, permissionRecord table need to drop precision of timestamp then update data.
 * @tc.number    DPMS_AddPermissionUsedRecord_0500
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_AddPermissionUsedRecord_0500, TestSize.Level1)
{
    int sleepTime = 3;
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0500 start");
    RemoveStorage();

    std::vector<GenericValues> visitorBefore;
    std::vector<GenericValues> recordBefore;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorBefore);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordBefore);
    EXPECT_EQ((int)visitorBefore.size(), 0);
    EXPECT_EQ((int)recordBefore.size(), 0);

    string appInfo = GetAppIdInfo(deviceId_);
    PERMISSION_LOG_DEBUG(LABEL,
        "init DPMS_AddPermissionUsedRecord_0500 deviceId_= %{public}s, appInfo=%{public}s, permName=%{public}s",
        deviceId_.c_str(),
        appInfo.c_str(),
        permName_.c_str());
    DistributedPermissionKit::AddPermissionUsedRecord(permName_, appInfo, 1, 0);
    sleep(sleepTime);
    DistributedPermissionKit::AddPermissionUsedRecord(permName_, appInfo, 1, 0);

    std::vector<GenericValues> visitorAfter;
    std::vector<GenericValues> recordAfter;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorAfter);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordAfter);
    EXPECT_EQ((int)visitorAfter.size(), (int)visitorBefore.size() + 1);
    EXPECT_EQ((int)recordAfter.size(), (int)recordBefore.size() + 1);
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0500 end");
}

/**
 * @tc.name      Both table exists data, permissionRecord table doesn't need to drop precision of timestamp, but add
 * data.
 * @tc.number    DPMS_AddPermissionUsedRecord_0600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_AddPermissionUsedRecord_0600, TestSize.Level1)
{
    int sleepTime = 61;
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0600 start");
    RemoveStorage();

    std::vector<GenericValues> visitorBefore;
    std::vector<GenericValues> recordBefore;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorBefore);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordBefore);
    EXPECT_EQ((int)visitorBefore.size(), 0);
    EXPECT_EQ((int)recordBefore.size(), 0);

    string appInfo = GetAppIdInfo(deviceId_);
    PERMISSION_LOG_DEBUG(LABEL,
        "init DPMS_AddPermissionUsedRecord_0600 deviceId_= %{public}s, appInfo=%{public}s, permName=%{public}s",
        deviceId_.c_str(),
        appInfo.c_str(),
        permName_.c_str());
    DistributedPermissionKit::AddPermissionUsedRecord(permName_, appInfo, 1, 0);
    sleep(sleepTime);
    DistributedPermissionKit::AddPermissionUsedRecord(permName_, appInfo, 1, 0);

    std::vector<GenericValues> visitorAfter;
    std::vector<GenericValues> recordAfter;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorAfter);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordAfter);
    EXPECT_EQ((int)visitorAfter.size(), (int)visitorBefore.size() + 1);
    EXPECT_EQ((int)recordAfter.size(), (int)recordBefore.size() + 2);
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0600 end");
}

/**
 * @tc.name      More than 30 days of data will be deleted when the add operation is performed.
 * @tc.number    DPMS_AddPermissionUsedRecord_0700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_AddPermissionUsedRecord_0700, TestSize.Level1)
{
    int sleepTime = 3;
    RemoveStorage();
    AddData(TimeUtil::GetTimestamp() - 2592000);
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0700 start");

    std::vector<GenericValues> visitorBefore;
    std::vector<GenericValues> recordBefore;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorBefore);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordBefore);
    EXPECT_EQ((int)visitorBefore.size(), 1);
    EXPECT_EQ((int)recordBefore.size(), 1);

    string appInfo = GetAppIdInfo(deviceId_);
    PERMISSION_LOG_DEBUG(LABEL,
        "init DPMS_AddPermissionUsedRecord_0700 deviceId_= %{public}s, appInfo=%{public}s, permName=%{public}s",
        deviceId_.c_str(),
        appInfo.c_str(),
        permName_.c_str());
    DistributedPermissionKit::AddPermissionUsedRecord(permName_, appInfo, 1, 0);
    sleep(sleepTime);
    std::vector<GenericValues> visitorAfter;
    std::vector<GenericValues> recordAfter;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorAfter);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordAfter);
    EXPECT_EQ((int)visitorAfter.size(), (int)visitorBefore.size() + 1);
    EXPECT_EQ((int)recordAfter.size(), (int)recordBefore.size());
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0700 end");
}

/**
 * @tc.name      Less than 30 days of data will not be deleted when the add operation is performed.
 * @tc.number    DPMS_AddPermissionUsedRecord_0800
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_AddPermissionUsedRecord_0800, TestSize.Level1)
{
    RemoveStorage();
    AddData(TimeUtil::GetTimestamp() - 2591999);
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0800 start");

    std::vector<GenericValues> visitorBefore;
    std::vector<GenericValues> recordBefore;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorBefore);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordBefore);
    EXPECT_EQ((int)visitorBefore.size(), 1);
    EXPECT_EQ((int)recordBefore.size(), 1);

    string appInfo = GetAppIdInfo(deviceId_);
    PERMISSION_LOG_DEBUG(LABEL,
        "init DPMS_AddPermissionUsedRecord_0800 deviceId_= %{public}s, appInfo=%{public}s, permName=%{public}s",
        deviceId_.c_str(),
        appInfo.c_str(),
        permName_.c_str());
    DistributedPermissionKit::AddPermissionUsedRecord(permName_, appInfo, 1, 0);

    std::vector<GenericValues> visitorAfter;
    std::vector<GenericValues> recordAfter;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorAfter);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordAfter);
    EXPECT_EQ((int)visitorAfter.size(), (int)visitorBefore.size() + 1);
    EXPECT_EQ((int)recordAfter.size(), (int)recordBefore.size() + 1);
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_0800 end");
}

/**
 * @tc.name      PermissionName is not exist in the translate map.
 * @tc.number    DPMS_AddPermissionUsedRecord_1200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_AddPermissionUsedRecord_1200, TestSize.Level2)
{
    RemoveStorage();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_1200 start");

    std::vector<GenericValues> visitorBefore;
    std::vector<GenericValues> recordBefore;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorBefore);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordBefore);
    EXPECT_EQ((int)visitorBefore.size(), 0);
    EXPECT_EQ((int)recordBefore.size(), 0);

    string permName = "ohos.permission.NULL";
    string appInfo = GetAppIdInfo(deviceId_);
    PERMISSION_LOG_DEBUG(LABEL,
        "init DPMS_AddPermissionUsedRecord_1200 deviceId_= %{public}s, appInfo=%{public}s, permName=%{public}s",
        deviceId_.c_str(),
        appInfo.c_str(),
        permName.c_str());
    DistributedPermissionKit::AddPermissionUsedRecord(permName, appInfo, 1, 0);

    std::vector<GenericValues> visitorAfter;
    std::vector<GenericValues> recordAfter;
    FindDataStorageAll(DataStorage::PERMISSION_VISITOR, visitorAfter);
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, recordAfter);
    EXPECT_EQ((int)visitorAfter.size(), (int)visitorBefore.size() + 1);
    EXPECT_EQ((int)recordAfter.size(), (int)recordBefore.size());
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_AddPermissionUsedRecord_1200 end");
}

/**
 * @tc.name      More than 30 days of data will be deleted when the search operation is performed.
 * @tc.number    DPMS_GetPermissionUsedRecords_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_0100, TestSize.Level1)
{
    int sleepTime = 3;
    RemoveStorage();
    AddData(TimeUtil::GetTimestamp() - 2592000);
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0100 start");

    QueryPermissionUsedRequest request;
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    EXPECT_EQ(state, 0);
    sleep(sleepTime);
    std::vector<GenericValues> record;
    FindDataStorageAll(DataStorage::PERMISSION_RECORD, record);
    EXPECT_EQ((int)record.size(), 0);

    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0100 end");
}

/**
 * @tc.name      BeginTimeMillis is greater than endTimeMillis, time conditions are invalid, find faild.
 * @tc.number    DPMS_GetPermissionUsedRecords_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_0200, TestSize.Level4)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0200 start");

    QueryPermissionUsedRequest request;
    request.beginTimeMillis = 150;
    request.endTimeMillis = 100;
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    EXPECT_EQ(state, -1);
    EXPECT_EQ((int)result.bundlePermissionUsedRecords.size(), 0);

    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0200 end");
}

/**
 * @tc.name      BeginTimeMillis is less than 0, time conditions are invalid, find faild.
 * @tc.number    DPMS_GetPermissionUsedRecords_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_0300, TestSize.Level4)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0300 start");

    QueryPermissionUsedRequest request;
    request.beginTimeMillis = -1;
    request.endTimeMillis = 200;
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    EXPECT_EQ(state, -1);
    EXPECT_EQ((int)result.bundlePermissionUsedRecords.size(), 0);

    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0300 end");
}

/**
 * @tc.name      EndTimeMillis is less than 0, time conditions are invalid, find faild.
 * @tc.number    DPMS_GetPermissionUsedRecords_0400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_0400, TestSize.Level4)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0400 start");

    QueryPermissionUsedRequest request;
    request.beginTimeMillis = -2;
    request.endTimeMillis = -1;
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    EXPECT_EQ(state, -1);
    EXPECT_EQ((int)result.bundlePermissionUsedRecords.size(), 0);

    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0400 end");
}

/**
 * @tc.name      BeginTimeMillis is equal 0, time conditions are valid, find the data before endTimeMillis.
 * @tc.number    DPMS_GetPermissionUsedRecords_0500
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_0500, TestSize.Level1)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0500 start");

    QueryPermissionUsedRequest request;
    request.beginTimeMillis = 0;
    request.endTimeMillis = 250;
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    int recordSize = result.bundlePermissionUsedRecords[0].permissionUsedRecords.size();
    EXPECT_EQ(state, 0);
    EXPECT_EQ(recordSize, 1);

    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0500 end");
}

/**
 * @tc.name      EndTimeMillis is equal 0, time conditions are valid, find the data after beginTimeMillis.
 * @tc.number    DPMS_GetPermissionUsedRecords_0600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_0600, TestSize.Level1)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0600 start");

    QueryPermissionUsedRequest request;
    request.beginTimeMillis = 150;
    request.endTimeMillis = 0;
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    int recordSize = result.bundlePermissionUsedRecords[0].permissionUsedRecords.size();
    EXPECT_EQ(state, 0);
    EXPECT_EQ(recordSize, 2);

    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0600 end");
}

/**
 * @tc.name      BeginTimeMillis = 0, endTimeMillis = 0, time conditions are valid, find the data of all time.
 * @tc.number    DPMS_GetPermissionUsedRecords_0700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_0700, TestSize.Level1)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0700 start");

    QueryPermissionUsedRequest request;
    request.beginTimeMillis = 0;
    request.endTimeMillis = 0;
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    int recordSize = result.bundlePermissionUsedRecords[0].permissionUsedRecords.size();
    EXPECT_EQ(state, 0);
    EXPECT_EQ(recordSize, 2);

    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0700 end");
}

/**
 * @tc.name      Flag = 0, result doesn't record detailed time.
 * @tc.number    DPMS_GetPermissionUsedRecords_0800
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_0800, TestSize.Level1)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0800 start");

    QueryPermissionUsedRequest request;
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    EXPECT_EQ(state, 0);
    bool detailFlag = false;
    for (auto bundle : result.bundlePermissionUsedRecords) {
        for (auto record : bundle.permissionUsedRecords) {
            if (record.accessRecordBg.size() > 0 || record.accessRecordFg.size() > 0 ||
                record.rejectRecordBg.size() > 0 || record.rejectRecordFg.size() > 0) {
                detailFlag = true;
            }
        }
    }
    EXPECT_FALSE(detailFlag);

    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0800 end");
}

/**
 * @tc.name      Flag = 1, result records detailed time.
 * @tc.number    DPMS_GetPermissionUsedRecords_0900
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_0900, TestSize.Level1)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0900 start");

    QueryPermissionUsedRequest request;
    request.flag = 1;
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    EXPECT_EQ(state, 0);
    bool detailFlag = false;
    for (auto bundle : result.bundlePermissionUsedRecords) {
        for (auto record : bundle.permissionUsedRecords) {
            if (record.accessRecordBg.size() > 0 || record.accessRecordFg.size() > 0 ||
                record.rejectRecordBg.size() > 0 || record.rejectRecordFg.size() > 0) {
                detailFlag = true;
            }
        }
    }
    EXPECT_TRUE(detailFlag);
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_0900 end");
}

/**
 * @tc.name      DeviceLabel and permissionNames are not null, find out eligible data.
 * @tc.number    DPMS_GetPermissionUsedRecords_1000
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_1000, TestSize.Level1)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1000 start");

    QueryPermissionUsedRequest request;
    request.deviceLabel = deviceName_;
    request.permissionNames.emplace_back("ohos.permission.LOCATION");
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    EXPECT_EQ(state, 0);

    EXPECT_EQ((int)result.bundlePermissionUsedRecords.size(), 1);
    EXPECT_STREQ(result.bundlePermissionUsedRecords[0].deviceLabel.c_str(), request.deviceLabel.c_str());
    EXPECT_EQ((int)result.bundlePermissionUsedRecords[0].permissionUsedRecords.size(), 1);
    EXPECT_STREQ(result.bundlePermissionUsedRecords[0].permissionUsedRecords[0].permissionName.c_str(),
        request.permissionNames[0].c_str());

    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1000 end");
}

/**
 * @tc.name      BundleName and permissionNames are not null, find out eligible data.
 * @tc.number    DPMS_GetPermissionUsedRecords_1100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_1100, TestSize.Level1)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1100 start");

    QueryPermissionUsedRequest request;
    request.bundleName = "bundleName_0";
    request.permissionNames.emplace_back("ohos.permission.LOCATION");
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    EXPECT_EQ(state, 0);
    EXPECT_EQ((int)result.bundlePermissionUsedRecords.size(), 1);
    EXPECT_STREQ(result.bundlePermissionUsedRecords[0].bundleName.c_str(), request.bundleName.c_str());
    EXPECT_EQ((int)result.bundlePermissionUsedRecords[0].permissionUsedRecords.size(), 1);
    EXPECT_STREQ(result.bundlePermissionUsedRecords[0].permissionUsedRecords[0].permissionName.c_str(),
        request.permissionNames[0].c_str());

    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1100 end");
}

/**
 * @tc.name      BundleName, deviceLabel and permissionNames are not null, find out eligible data.
 * @tc.number    DPMS_GetPermissionUsedRecords_1200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_1200, TestSize.Level1)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1200 start");

    QueryPermissionUsedRequest request;
    request.deviceLabel = deviceName_;
    request.bundleName = "bundleName_0";
    request.permissionNames.emplace_back("ohos.permission.LOCATION");
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    EXPECT_EQ(state, 0);
    EXPECT_EQ((int)result.bundlePermissionUsedRecords.size(), 1);
    EXPECT_STREQ(result.bundlePermissionUsedRecords[0].bundleName.c_str(), request.bundleName.c_str());
    EXPECT_STREQ(result.bundlePermissionUsedRecords[0].deviceLabel.c_str(), request.deviceLabel.c_str());
    EXPECT_EQ((int)result.bundlePermissionUsedRecords[0].permissionUsedRecords.size(), 1);
    EXPECT_STREQ(result.bundlePermissionUsedRecords[0].permissionUsedRecords[0].permissionName.c_str(),
        request.permissionNames[0].c_str());

    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1200 end");
}

/**
 * @tc.name      BundleName and deviceLabel are not null, find out eligible data.
 * @tc.number    DPMS_GetPermissionUsedRecords_1300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_1300, TestSize.Level1)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1300 start");

    QueryPermissionUsedRequest request;
    request.deviceLabel = deviceName_;
    request.bundleName = "bundleName_0";
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    EXPECT_EQ(state, 0);
    EXPECT_EQ((int)result.bundlePermissionUsedRecords.size(), 1);
    EXPECT_STREQ(result.bundlePermissionUsedRecords[0].bundleName.c_str(), request.bundleName.c_str());
    EXPECT_STREQ(result.bundlePermissionUsedRecords[0].deviceLabel.c_str(), request.deviceLabel.c_str());

    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1300 end");
}

/**
 * @tc.name      DeviceLabel is not null, find out eligible data.
 * @tc.number    DPMS_GetPermissionUsedRecords_1400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_1400, TestSize.Level1)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1400 start");

    QueryPermissionUsedRequest request;
    request.deviceLabel = deviceName_;
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    EXPECT_EQ(state, 0);
    EXPECT_EQ((int)result.bundlePermissionUsedRecords.size(), 1);
    EXPECT_STREQ(result.bundlePermissionUsedRecords[0].deviceLabel.c_str(), request.deviceLabel.c_str());

    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1400 end");
}

/**
 * @tc.name      BundleName is not null, find out eligible data.
 * @tc.number    DPMS_GetPermissionUsedRecords_1500
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_1500, TestSize.Level1)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1500 start");

    QueryPermissionUsedRequest request;
    request.bundleName = "bundleName_0";
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    EXPECT_EQ(state, 0);
    EXPECT_EQ((int)result.bundlePermissionUsedRecords.size(), 1);
    EXPECT_STREQ(result.bundlePermissionUsedRecords[0].bundleName.c_str(), request.bundleName.c_str());

    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1500 end");
}

/**
 * @tc.name      PermissionNames are not null, find out eligible data.
 * @tc.number    DPMS_GetPermissionUsedRecords_1600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_1600, TestSize.Level1)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1600 start");

    QueryPermissionUsedRequest request;
    request.permissionNames.emplace_back("ohos.permission.LOCATION");
    request.permissionNames.emplace_back("ohos.permission.READ_CONTACTS");
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    int recordSize = result.bundlePermissionUsedRecords[0].permissionUsedRecords.size();
    EXPECT_EQ(state, 0);
    EXPECT_EQ(recordSize, 2);
    bool flag = false;
    auto bundle = result.bundlePermissionUsedRecords[0];
    if (bundle.permissionUsedRecords.size() > 0) {
        if (bundle.permissionUsedRecords[0].permissionName == request.permissionNames[0]) {
            EXPECT_STREQ(bundle.permissionUsedRecords[0].permissionName.c_str(), request.permissionNames[0].c_str());
            EXPECT_STREQ(bundle.permissionUsedRecords[1].permissionName.c_str(), request.permissionNames[1].c_str());
        } else {
            EXPECT_STREQ(bundle.permissionUsedRecords[0].permissionName.c_str(), request.permissionNames[1].c_str());
            EXPECT_STREQ(bundle.permissionUsedRecords[1].permissionName.c_str(), request.permissionNames[0].c_str());
        }
        flag = true;
    }

    EXPECT_TRUE(flag);

    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1600 end");
}

/**
 * @tc.name      DeviceLabel, bundleName and permissionNames are null, find out all data.
 * @tc.number    DPMS_GetPermissionUsedRecords_1700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionUsedRecordsFunctionCPPTest, DPMS_GetPermissionUsedRecords_1700, TestSize.Level1)
{
    RemoveStorage();
    InitVisitorData("bundleName_0");
    InitRecordData();
    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1700 start");

    QueryPermissionUsedRequest request;
    QueryPermissionUsedResult result;
    int state = DistributedPermissionKit::GetPermissionUsedRecords(request, result);
    int recordSize = result.bundlePermissionUsedRecords[0].permissionUsedRecords.size();
    EXPECT_EQ(state, 0);
    EXPECT_EQ(recordSize, 2);

    PERMISSION_LOG_INFO(LABEL, "DistributedPermissionRecordsTest DPMS_GetPermissionUsedRecords_1700 end");
}
}  // namespace Permission
}  // namespace Security
}  // namespace OHOS