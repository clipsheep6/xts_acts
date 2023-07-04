/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

#include <gtest/gtest.h>

#include <string>
#include "common.h"
#include "relational_store.h"
#include "relational_store_error_code.h"

using namespace testing::ext;
using namespace OHOS::NativeRdb;

class RdbNdkStoreLevelTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
};

std::string storeLevelTestPath_ = RDB_TEST_PATH + "rdb_store_test.db";
OH_Rdb_Store *storeLevelTestRdbStore_;

void RdbNdkStoreLevelTest::SetUpTestCase(void)
{

}

void RdbNdkStoreLevelTest::TearDownTestCase(void)
{
   
}

void RdbNdkStoreLevelTest::SetUp(void)
{

}

void RdbNdkStoreLevelTest::TearDown(void)
{
    int errCode = OH_Rdb_CloseStore(storeLevelTestRdbStore_);
    errCode = OH_Rdb_DeleteStore(storeLevelTestPath_.c_str());
    EXPECT_EQ(errCode, 0);
    
}

/**
 * @tc.name: SUB_DDM_RDB_StoreLevel_0100
 * @tc.desc: StoreLevel is S1
 * @tc.type: FUNC
 */
HWTEST_F(RdbNdkStoreLevelTest, SUB_DDM_RDB_StoreLevel_0100, TestSize.Level1)
{
    OH_Rdb_Config config;
    config.path = storeLevelTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S1;
    config.isEncrypt = false;

    int errCode = 0;
    storeLevelTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    EXPECT_NE(storeLevelTestRdbStore_, NULL);

    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                            "data3 FLOAT, data4 BLOB, data5 TEXT);";
    errCode = OH_Rdb_Execute(storeLevelTestRdbStore_, createTableSql);
    EXPECT_EQ(errCode, 0);

    char dropTableSql[] = "DROP TABLE IF EXISTS test";

    OH_VBucket* valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putInt64(valueBucket, "id", 1);
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");

    errCode = OH_Rdb_Insert(storeLevelTestRdbStore_, "test", valueBucket);
    EXPECT_EQ(errCode, 1);

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeLevelTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);

    errCode = OH_Rdb_Execute(storeLevelTestRdbStore_, dropTableSql);
    EXPECT_EQ(errCode, 0);
}

/**
 * @tc.name: SUB_DDM_RDB_StoreLevel_0200
 * @tc.desc: StoreLevel is S2
 * @tc.type: FUNC
 */
HWTEST_F(RdbNdkStoreLevelTest, SUB_DDM_RDB_StoreLevel_0200, TestSize.Level1)
{
    OH_Rdb_Config config;
    config.path = storeLevelTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S2;
    config.isEncrypt = false;

    int errCode = 0;
    storeLevelTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    EXPECT_NE(storeLevelTestRdbStore_, NULL);

    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                            "data3 FLOAT, data4 BLOB, data5 TEXT);";
    errCode = OH_Rdb_Execute(storeLevelTestRdbStore_, createTableSql);
    EXPECT_EQ(errCode, 0);

    char dropTableSql[] = "DROP TABLE IF EXISTS test";

    OH_VBucket* valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putInt64(valueBucket, "id", 1);
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");

    errCode = OH_Rdb_Insert(storeLevelTestRdbStore_, "test", valueBucket);
    EXPECT_EQ(errCode, 1);

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeLevelTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);

    errCode = OH_Rdb_Execute(storeLevelTestRdbStore_, dropTableSql);
    EXPECT_EQ(errCode, 0);
}

/**
 * @tc.name: SUB_DDM_RDB_StoreLevel_0300
 * @tc.desc: StoreLevel is S3
 * @tc.type: FUNC
 */
HWTEST_F(RdbNdkStoreLevelTest, SUB_DDM_RDB_StoreLevel_0300, TestSize.Level1)
{
    OH_Rdb_Config config;
    config.path = storeLevelTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S3;
    config.isEncrypt = false;

    int errCode = 0;
    storeLevelTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    EXPECT_NE(storeLevelTestRdbStore_, NULL);

    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                            "data3 FLOAT, data4 BLOB, data5 TEXT);";
    errCode = OH_Rdb_Execute(storeLevelTestRdbStore_, createTableSql);
    EXPECT_EQ(errCode, 0);

    char dropTableSql[] = "DROP TABLE IF EXISTS test";

    OH_VBucket* valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putInt64(valueBucket, "id", 1);
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");

    errCode = OH_Rdb_Insert(storeLevelTestRdbStore_, "test", valueBucket);
    EXPECT_EQ(errCode, 1);

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeLevelTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);

    errCode = OH_Rdb_Execute(storeLevelTestRdbStore_, dropTableSql);
    EXPECT_EQ(errCode, 0);
}

/**
 * @tc.name: SUB_DDM_RDB_StoreLevel_0400
 * @tc.desc: StoreLevel is S4
 * @tc.type: FUNC
 */
HWTEST_F(RdbNdkStoreLevelTest, SUB_DDM_RDB_StoreLevel_0400, TestSize.Level1)
{
    OH_Rdb_Config config;
    config.path = storeLevelTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S4;
    config.isEncrypt = false;

    int errCode = 0;
    storeLevelTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    EXPECT_NE(storeLevelTestRdbStore_, NULL);

    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                            "data3 FLOAT, data4 BLOB, data5 TEXT);";
    errCode = OH_Rdb_Execute(storeLevelTestRdbStore_, createTableSql);
    EXPECT_EQ(errCode, 0);

    char dropTableSql[] = "DROP TABLE IF EXISTS test";

    OH_VBucket* valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putInt64(valueBucket, "id", 1);
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");

    errCode = OH_Rdb_Insert(storeLevelTestRdbStore_, "test", valueBucket);
    EXPECT_EQ(errCode, 1);

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeLevelTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);

    errCode = OH_Rdb_Execute(storeLevelTestRdbStore_, dropTableSql);
    EXPECT_EQ(errCode, 0);
}