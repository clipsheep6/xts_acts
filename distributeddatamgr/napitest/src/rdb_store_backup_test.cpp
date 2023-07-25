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

class RdbNdkStoreBackupTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
};

std::string storeBackupTestPath_ = RDB_TEST_PATH + "rdb_store_test.db";
OH_Rdb_Store *storeBackupTestRdbStore_;

void RdbNdkStoreBackupTest::SetUpTestCase(void)
{
    OH_Rdb_Config config;
    config.path = storeBackupTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S1;
    config.isEncrypt = false;

    int errCode = 0;
    storeBackupTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    EXPECT_NE(storeBackupTestRdbStore_, NULL);
}

void RdbNdkStoreBackupTest::TearDownTestCase(void)
{
    int errCode = OH_Rdb_CloseStore(storeBackupTestRdbStore_);
    errCode = OH_Rdb_DeleteStore(storeBackupTestPath_.c_str());
    EXPECT_EQ(errCode, 0);
}

void RdbNdkStoreBackupTest::SetUp(void)
{
    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                            "data3 FLOAT, data4 BLOB, data5 TEXT);";
    int errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, createTableSql);
    EXPECT_EQ(errCode, 0);
}

void RdbNdkStoreBackupTest::TearDown(void)
{
    char dropTableSql[] = "DROP TABLE IF EXISTS test";
    int errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, dropTableSql);
    EXPECT_EQ(errCode, 0);
}

/**
 * @tc.name: SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0100
 * @tc.desc: Normal testCase of store for Backup、Restore.
 * @tc.type: FUNC
 */
HWTEST_F(RdbNdkStoreBackupTest, SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0100, TestSize.Level1)
{
    int errCode = 0;
    OH_VBucket* valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putInt64(valueBucket, "id", 1);
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");
    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    EXPECT_EQ(errCode, 1);

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);
    cursor->close(cursor);

    std::string backupPath = RDB_TEST_PATH + "backup.db";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath.c_str());
    EXPECT_EQ(errCode, 0);

    //delete data before restore
    OH_Predicates *predicates = OH_Rdb_CreatePredicates("test");
    errCode = OH_Rdb_Delete(storeBackupTestRdbStore_, predicates);
    EXPECT_EQ(errCode, 1);

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, backupPath.c_str());
    EXPECT_EQ(errCode, 0);

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);

    errCode = cursor->goToNextRow(cursor);
    EXPECT_EQ(errCode, 0);

    size_t size = 0;
    cursor->getSize(cursor, 1, &size);
    char data1Value[size + 1];
    cursor->getText(cursor, 1, data1Value, size + 1);
    EXPECT_EQ(strcmp(data1Value, "zhangSan"), 0);

    int64_t data2Value;
    cursor->getInt64(cursor, 2, &data2Value);
    EXPECT_EQ(data2Value, 12800);

    double data3Value;
    cursor->getReal(cursor, 3, &data3Value);
    EXPECT_EQ(data3Value, 100.1);

    cursor->getSize(cursor, 4, &size);
    unsigned char data4Value[size];
    cursor->getBlob(cursor, 4, data4Value, size);
    EXPECT_EQ(data4Value[0], 1);
    EXPECT_EQ(data4Value[1], 2);

    cursor->getSize(cursor, 5, &size);
    char data5Value[size + 1];
    cursor->getText(cursor, 5, data5Value, size + 1);
    EXPECT_EQ(strcmp(data5Value, "ABCDEFG"), 0);

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);    
}

/**
 * @tc.name: SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0500
 * @tc.desc: Exception testCase of store for Backup、Restore.
 * @tc.desc: backup file name is empty 
 * @tc.type: FUNC
 */
HWTEST_F(RdbNdkStoreBackupTest, SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0500, TestSize.Level1)
{
    int errCode = 0;
    OH_VBucket* valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");
    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    EXPECT_EQ(errCode, 1);

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);
    cursor->close(cursor);

    std::string backupPath = RDB_TEST_PATH + "";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath.c_str());
    EXPECT_EQ(errCode, 14800011);

    valueBucket->destroyValuesBucket(valueBucket);
}

/**
 * @tc.name: SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0300
 * @tc.desc: Exception testCase of store for Backup、Restore.
 * @tc.desc: backup file name already exists
 * @tc.type: FUNC
 */
HWTEST_F(RdbNdkStoreBackupTest, SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0300, TestSize.Level1)
{
    int errCode = 0;
    OH_VBucket* valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putInt64(valueBucket, "id", 1);
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");
    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    EXPECT_EQ(errCode, 1);

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);
    cursor->close(cursor);

    std::string backupPath = RDB_TEST_PATH + "backup.db";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath.c_str());
    EXPECT_EQ(errCode, 0);

    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath.c_str());
    EXPECT_EQ(errCode, 0);//连续备份成同名文件

    //delete data before restore
    OH_Predicates *predicates = OH_Rdb_CreatePredicates("test");
    errCode = OH_Rdb_Delete(storeBackupTestRdbStore_, predicates);
    EXPECT_EQ(errCode, 1);

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, backupPath.c_str());
    EXPECT_EQ(errCode, 0);

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);

    errCode = cursor->goToNextRow(cursor);
    EXPECT_EQ(errCode, 0);

    size_t size = 0;
    cursor->getSize(cursor, 1, &size);
    char data1Value[size + 1];
    cursor->getText(cursor, 1, data1Value, size + 1);
    EXPECT_EQ(strcmp(data1Value, "zhangSan"), 0);

    int64_t data2Value;
    cursor->getInt64(cursor, 2, &data2Value);
    EXPECT_EQ(data2Value, 12800);

    double data3Value;
    cursor->getReal(cursor, 3, &data3Value);
    EXPECT_EQ(data3Value, 100.1);

    cursor->getSize(cursor, 4, &size);
    unsigned char data4Value[size];
    cursor->getBlob(cursor, 4, data4Value, size);
    EXPECT_EQ(data4Value[0], 1);
    EXPECT_EQ(data4Value[1], 2);

    cursor->getSize(cursor, 5, &size);
    char data5Value[size + 1];
    cursor->getText(cursor, 5, data5Value, size + 1);
    EXPECT_EQ(strcmp(data5Value, "ABCDEFG"), 0);

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);    
}

/**
 * @tc.name: SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0400
 * @tc.desc: Exception testCase of store for Backup、Restore.
 * @tc.type: FUNC
 */
HWTEST_F(RdbNdkStoreBackupTest, SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0400, TestSize.Level1)
{
    int errCode = 0;
    OH_VBucket* valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putInt64(valueBucket, "id", 1);
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");
    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    EXPECT_EQ(errCode, 1);

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);
    cursor->close(cursor);

    std::string backupPath1 = RDB_TEST_PATH + "backup1.db";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath1.c_str());
    EXPECT_EQ(errCode, 0);

    std::string backupPath2 = RDB_TEST_PATH + "backup2.db";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath2.c_str());
    EXPECT_EQ(errCode, 0);//连续备份成不同名文件

    //delete data before restore
    OH_Predicates *predicates = OH_Rdb_CreatePredicates("test");
    errCode = OH_Rdb_Delete(storeBackupTestRdbStore_, predicates);
    EXPECT_EQ(errCode, 1);

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, backupPath1.c_str());
    EXPECT_EQ(errCode, 0);

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, backupPath2.c_str());
    EXPECT_EQ(errCode, 0);

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);

    errCode = cursor->goToNextRow(cursor);
    EXPECT_EQ(errCode, 0);

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);    
}

/**
 * @tc.name: SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0900
 * @tc.desc: Exception testCase of store for Backup、Restore.
 * @tc.desc: Restore file name is empty
 * @tc.type: FUNC
 */
HWTEST_F(RdbNdkStoreBackupTest, SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0900, TestSize.Level1)
{
    int errCode = 0;
    OH_VBucket* valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putInt64(valueBucket, "id", 1);
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");
    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    EXPECT_EQ(errCode, 1);

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);
    cursor->close(cursor);

    std::string backupPath = RDB_TEST_PATH + "backupEmpty.db";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath.c_str());
    EXPECT_EQ(errCode, 0);

    //delete data before restore
    OH_Predicates *predicates = OH_Rdb_CreatePredicates("test");
    errCode = OH_Rdb_Delete(storeBackupTestRdbStore_, predicates);
    EXPECT_EQ(errCode, 1);

    std::string reStorePath = RDB_TEST_PATH + "";
    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, reStorePath.c_str());
    EXPECT_EQ(errCode, 14800011);

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 0);

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, backupPath.c_str());
    EXPECT_EQ(errCode, 0);

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);
}

/**
 * @tc.name: SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0110
 * @tc.desc: Exception testCase of store for Backup、Restore.
 * @tc.desc: Restore file name is invalid
 * @tc.type: FUNC
 */
HWTEST_F(RdbNdkStoreBackupTest, SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0110, TestSize.Level1)
{
    int errCode = 0;
    OH_VBucket* valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putInt64(valueBucket, "id", 1);
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");
    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    EXPECT_EQ(errCode, 1);

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);
    cursor->close(cursor);

    std::string backupPath = RDB_TEST_PATH + "backupWrong.db";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath.c_str());
    EXPECT_EQ(errCode, 0);

    //delete data before restore
    OH_Predicates *predicates = OH_Rdb_CreatePredicates("test");
    errCode = OH_Rdb_Delete(storeBackupTestRdbStore_, predicates);
    EXPECT_EQ(errCode, 1);

    std::string reStorePath = RDB_TEST_PATH + "wrong.db";
    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, reStorePath.c_str());
    EXPECT_EQ(errCode, 14800011);

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 0);

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, backupPath.c_str());
    EXPECT_EQ(errCode, 0);


    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);    
}

/**
 * @tc.name: SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0600
 * @tc.desc: Normal testCase of store for Backup、Restore.
 * @tc.desc: backup file name is a space
 * @tc.type: FUNC
 */
HWTEST_F(RdbNdkStoreBackupTest, SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0600, TestSize.Level1)
{
    int errCode = 0;
    OH_VBucket* valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");
    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    EXPECT_EQ(errCode, 1);

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);
    cursor->close(cursor);

    std::string backupPath = RDB_TEST_PATH + " ";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath.c_str());
    EXPECT_EQ(errCode, 0);

    //delete data before restore
    OH_Predicates *predicates = OH_Rdb_CreatePredicates("test");
    errCode = OH_Rdb_Delete(storeBackupTestRdbStore_, predicates);
    EXPECT_EQ(errCode, 1);

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, backupPath.c_str());
    EXPECT_EQ(errCode, 0);

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);

    errCode = cursor->goToNextRow(cursor);
    EXPECT_EQ(errCode, 0);

    size_t size = 0;
    cursor->getSize(cursor, 1, &size);
    char data1Value[size + 1];
    cursor->getText(cursor, 1, data1Value, size + 1);
    EXPECT_EQ(strcmp(data1Value, "zhangSan"), 0);

    int64_t data2Value;
    cursor->getInt64(cursor, 2, &data2Value);
    EXPECT_EQ(data2Value, 12800);

    double data3Value;
    cursor->getReal(cursor, 3, &data3Value);
    EXPECT_EQ(data3Value, 100.1);

    cursor->getSize(cursor, 4, &size);
    unsigned char data4Value[size];
    cursor->getBlob(cursor, 4, data4Value, size);
    EXPECT_EQ(data4Value[0], 1);
    EXPECT_EQ(data4Value[1], 2);

    cursor->getSize(cursor, 5, &size);
    char data5Value[size + 1];
    cursor->getText(cursor, 5, data5Value, size + 1);
    EXPECT_EQ(strcmp(data5Value, "ABCDEFG"), 0);

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);    
}

/**
 * @tc.name: SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0800
 * @tc.desc: Normal testCase of store for Backup、Restore.
 * @tc.desc: Restore file name is a null
 * @tc.type: FUNC
 */
HWTEST_F(RdbNdkStoreBackupTest, SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0800, TestSize.Level1)
{
    int errCode = 0;
    OH_VBucket* valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");
    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    EXPECT_EQ(errCode, 1);

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);
    cursor->close(cursor);

    std::string backupPath = RDB_TEST_PATH + "backupNull.db";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath.c_str());
    EXPECT_EQ(errCode, 0);

    //delete data before restore
    OH_Predicates *predicates = OH_Rdb_CreatePredicates("test");
    errCode = OH_Rdb_Delete(storeBackupTestRdbStore_, predicates);
    EXPECT_EQ(errCode, 1);

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, NULL);
    EXPECT_EQ(errCode, 14800001);

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 0);

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, backupPath.c_str());
    EXPECT_EQ(errCode, 0);

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);

    errCode = cursor->goToNextRow(cursor);
    EXPECT_EQ(errCode, 0);

    size_t size = 0;
    cursor->getSize(cursor, 1, &size);
    char data1Value[size + 1];
    cursor->getText(cursor, 1, data1Value, size + 1);
    EXPECT_EQ(strcmp(data1Value, "zhangSan"), 0);

    int64_t data2Value;
    cursor->getInt64(cursor, 2, &data2Value);
    EXPECT_EQ(data2Value, 12800);

    double data3Value;
    cursor->getReal(cursor, 3, &data3Value);
    EXPECT_EQ(data3Value, 100.1);

    cursor->getSize(cursor, 4, &size);
    unsigned char data4Value[size];
    cursor->getBlob(cursor, 4, data4Value, size);
    EXPECT_EQ(data4Value[0], 1);
    EXPECT_EQ(data4Value[1], 2);

    cursor->getSize(cursor, 5, &size);
    char data5Value[size + 1];
    cursor->getText(cursor, 5, data5Value, size + 1);
    EXPECT_EQ(strcmp(data5Value, "ABCDEFG"), 0);

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);    
}

/**
 * @tc.name: SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0700
 * @tc.desc: Normal testCase of store for Backup、Restore.
 * @tc.desc: Backup file name is a null
 * @tc.type: FUNC
 */
HWTEST_F(RdbNdkStoreBackupTest, SUB_DDM_RDB_RdbBackupRestoreCallbackTest_0700, TestSize.Level1)
{
    int errCode = 0;
    OH_VBucket* valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");
    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    EXPECT_EQ(errCode, 1);

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    EXPECT_EQ(rowCount, 1);
    cursor->close(cursor);

 
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, NULL);
    EXPECT_EQ(errCode, 14800001);

    valueBucket->destroyValuesBucket(valueBucket);  
}