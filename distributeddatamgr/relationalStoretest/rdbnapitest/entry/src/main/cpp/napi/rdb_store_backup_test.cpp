#include "napi/native_api.h"
#include <string>
#include <string.h>
#include "common/common.h"
#include "database/rdb/relational_store.h"
#include "database/rdb/relational_store_error_code.h"
#include "database/rdb/oh_cursor.h"
#include "database/rdb/oh_predicates.h"
#include "database/rdb/oh_value_object.h"
#include "database/rdb/oh_values_bucket.h"

std::string boxPath_ = "/data/storage/el2/database/entry_test/";

static napi_value SUB_DDM_RDB_BackupRestoreTest_0500(napi_env env, napi_callback_info info) {
    //    size_t requireArgc = 1;
    //    size_t argc = 1;
    //    napi_value args[1] = {nullptr};
    //    napi_get_cb_info(env, info, &argc, args , nullptr, nullptr);
    //
    //    napi_valuetype valuetype;
    //    napi_typeof(env, args[0], &valuetype);
    //    NAPI_ASSERT(env, valuetype == napi_string, "Wrong type of argment. Expects a string.");
    //
    //    char buffer[128];
    //    size_t bufferSize = 128;
    //    size_t copied = 0;
    //
    //    NAPI_CALL(env, napi_get_value_string_latin1(env, args[0], buffer, bufferSize, &copied));
    ////    napi_get_value_string_latin1(env, args[0], buffer, bufferSize, &copied);
    ////    NAPI_ASSERT(env, copied == 2, "napi_get_value_string_latin1 fail");
    //
    //    napi_value output;
    //    NAPI_CALL(env, napi_create_string_latin1(env, buffer, copied, &output));
    ////    return output;
    //    std::string path;
    //    napi_get_value_string_latin1(env, args[0], buffer, bufferSize, &copied);

    std::string storeBackupTestPath_ = boxPath_ + "rdb_store_test.db";
    OH_Rdb_Store *storeBackupTestRdbStore_;

    OH_Rdb_Config config;
    config.path = storeBackupTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S1;
    config.isEncrypt = false;

    int errCode = 0;
    storeBackupTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    NAPI_ASSERT(env, errCode == 0, "getRdbStore is fail.");

    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                            "data3 FLOAT, data4 BLOB, data5 TEXT);";

    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, createTableSql);
    NAPI_ASSERT(env, errCode == 0, "createTable is fail.");

    OH_VBucket *valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putInt64(valueBucket, "id", 1);
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");
    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    NAPI_ASSERT(env, errCode == 1, "Insert data is fail.");

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");
    cursor->close(cursor);

    std::string backupPath = boxPath_ + "backup.db";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Backup is fail.");

    // delete data before restore
    OH_Predicates *predicates = OH_Rdb_CreatePredicates("test");
    errCode = OH_Rdb_Delete(storeBackupTestRdbStore_, predicates);
    NAPI_ASSERT(env, errCode == 1, "DeleteData is fail.");

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, backupPath.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Restore is fail.");

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");

    errCode = cursor->goToNextRow(cursor);
    NAPI_ASSERT(env, errCode == 0, "goToNextRow is fail.");

    size_t size = 0;
    cursor->getSize(cursor, 1, &size);
    char data1Value[size + 1];
    cursor->getText(cursor, 1, data1Value, size + 1);
    NAPI_ASSERT(env, strncmp(data1Value, "zhangSan", 8) == 0, "getText is fail.");

    int64_t data2Value;
    cursor->getInt64(cursor, 2, &data2Value);
    NAPI_ASSERT(env, data2Value == 12800, "getInt64 is fail.");

    double data3Value;
    cursor->getReal(cursor, 3, &data3Value);
    NAPI_ASSERT(env, data3Value == 100.1, "getReal is fail.");

    cursor->getSize(cursor, 4, &size);
    unsigned char data4Value[size];
    cursor->getBlob(cursor, 4, data4Value, size);
    NAPI_ASSERT(env, data4Value[0] == 1, "getBlob1 is fail.");
    NAPI_ASSERT(env, data4Value[1] == 2, "getBlob2 is fail.");

    cursor->getSize(cursor, 5, &size);
    char data5Value[size + 1];
    cursor->getText(cursor, 5, data5Value, size + 1);
    NAPI_ASSERT(env, strncmp(data5Value, "ABCDEFG", 7) == 0, "getText is fail.");

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);

    char dropTableSql[] = "DROP TABLE IF EXISTS test";
    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, dropTableSql);
    NAPI_ASSERT(env, errCode == 0, "dropTable is fail.");

    errCode = OH_Rdb_CloseStore(storeBackupTestRdbStore_);
    errCode = OH_Rdb_DeleteStore(storeBackupTestPath_.c_str());
    NAPI_ASSERT(env, errCode == 0, "DeleteStore is fail.");

    napi_value returnCode;
    napi_create_double(env, errCode, &returnCode);
    return returnCode;
}

static napi_value SUB_DDM_RDB_BackupRestoreTest_0100(napi_env env, napi_callback_info info) {
    std::string storeBackupTestPath_ = boxPath_ + "rdb_store_test.db";
    OH_Rdb_Store *storeBackupTestRdbStore_;

    OH_Rdb_Config config;
    config.path = storeBackupTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S1;
    config.isEncrypt = false;

    int errCode = 0;
    storeBackupTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    NAPI_ASSERT(env, errCode == 0, "getRdbStore is fail.");

    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                            "data3 FLOAT, data4 BLOB, data5 TEXT);";

    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, createTableSql);
    NAPI_ASSERT(env, errCode == 0, "createTable is fail.");

    OH_VBucket *valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");

    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    NAPI_ASSERT(env, errCode == 1, "OH_Rdb_Insert is fail.");
    //        EXPECT_EQ(errCode, 1);

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");
    cursor->close(cursor);

    std::string backupPath = boxPath_ + "";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath.c_str());
    NAPI_ASSERT(env, errCode == 14800011, "OH_Rdb_Backup is success.");

    valueBucket->destroyValuesBucket(valueBucket);

    char dropTableSql[] = "DROP TABLE IF EXISTS test";
    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, dropTableSql);
    NAPI_ASSERT(env, errCode == 0, "dropTable is fail.");

    errCode = OH_Rdb_CloseStore(storeBackupTestRdbStore_);
    errCode = OH_Rdb_DeleteStore(storeBackupTestPath_.c_str());
    NAPI_ASSERT(env, errCode == 0, "DeleteStore is fail.");

    napi_value returnCode;
    napi_create_double(env, errCode, &returnCode);
    return returnCode;
}

static napi_value SUB_DDM_RDB_BackupRestoreTest_0300(napi_env env, napi_callback_info info) {
    std::string storeBackupTestPath_ = boxPath_ + "rdb_store_test.db";
    OH_Rdb_Store *storeBackupTestRdbStore_;

    OH_Rdb_Config config;
    config.path = storeBackupTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S1;
    config.isEncrypt = false;

    int errCode = 0;
    storeBackupTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    NAPI_ASSERT(env, errCode == 0, "getRdbStore is fail.");

    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                            "data3 FLOAT, data4 BLOB, data5 TEXT);";

    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, createTableSql);
    NAPI_ASSERT(env, errCode == 0, "createTable is fail.");

    OH_VBucket *valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putInt64(valueBucket, "id", 1);
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");
    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    NAPI_ASSERT(env, errCode == 1, "OH_Rdb_Insert is fail.");

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");
    cursor->close(cursor);

    std::string backupPath = boxPath_ + "backup.db";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Backup1 is fail.");

    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Backup2 is fail.");
    //        EXPECT_EQ(errCode, 0);//连续备份成同名文件

    // delete data before restore
    OH_Predicates *predicates = OH_Rdb_CreatePredicates("test");
    errCode = OH_Rdb_Delete(storeBackupTestRdbStore_, predicates);
    NAPI_ASSERT(env, errCode == 1, "OH_Rdb_Delete is fail.");

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, backupPath.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Restore is fail.");

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");

    errCode = cursor->goToNextRow(cursor);
    NAPI_ASSERT(env, errCode == 0, "goToNextRow is fail.");

    size_t size = 0;
    cursor->getSize(cursor, 1, &size);
    char data1Value[size + 1];
    cursor->getText(cursor, 1, data1Value, size + 1);
    NAPI_ASSERT(env, strncmp(data1Value, "zhangSan", 8) == 0, "getText is fail.");

    int64_t data2Value;
    cursor->getInt64(cursor, 2, &data2Value);
    NAPI_ASSERT(env, data2Value == 12800, "getInt64 is fail.");

    double data3Value;
    cursor->getReal(cursor, 3, &data3Value);
    NAPI_ASSERT(env, data3Value == 100.1, "getReal is fail.");

    cursor->getSize(cursor, 4, &size);
    unsigned char data4Value[size];
    cursor->getBlob(cursor, 4, data4Value, size);
    NAPI_ASSERT(env, data4Value[0] == 1, "getBlob1 is fail.");
    NAPI_ASSERT(env, data4Value[1] == 2, "getBlob2 is fail.");

    cursor->getSize(cursor, 5, &size);
    char data5Value[size + 1];
    cursor->getText(cursor, 5, data5Value, size + 1);
    NAPI_ASSERT(env, strncmp(data5Value, "ABCDEFG", 7) == 0, "getText is fail.");

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);

    char dropTableSql[] = "DROP TABLE IF EXISTS test";
    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, dropTableSql);
    NAPI_ASSERT(env, errCode == 0, "dropTable is fail.");

    errCode = OH_Rdb_CloseStore(storeBackupTestRdbStore_);
    errCode = OH_Rdb_DeleteStore(storeBackupTestPath_.c_str());
    NAPI_ASSERT(env, errCode == 0, "DeleteStore is fail.");

    napi_value returnCode;
    napi_create_double(env, errCode, &returnCode);
    return returnCode;
}

static napi_value SUB_DDM_RDB_BackupRestoreTest_0400(napi_env env, napi_callback_info info) {
    std::string storeBackupTestPath_ = boxPath_ + "rdb_store_test.db";
    OH_Rdb_Store *storeBackupTestRdbStore_;

    OH_Rdb_Config config;
    config.path = storeBackupTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S1;
    config.isEncrypt = false;

    int errCode = 0;
    storeBackupTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    NAPI_ASSERT(env, errCode == 0, "getRdbStore is fail.");

    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                            "data3 FLOAT, data4 BLOB, data5 TEXT);";

    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, createTableSql);
    NAPI_ASSERT(env, errCode == 0, "createTable is fail.");

    OH_VBucket *valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putInt64(valueBucket, "id", 1);
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");
    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    NAPI_ASSERT(env, errCode == 1, "OH_Rdb_Insert is fail.");

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");
    cursor->close(cursor);

    std::string backupPath1 = boxPath_ + "backup1.db";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath1.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Backup1 is fail.");

    std::string backupPath2 = boxPath_ + "backup2.db";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath2.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Backup2 is fail.");
    //        EXPECT_EQ(errCode, 0);//连续备份成同名文件

    // delete data before restore
    OH_Predicates *predicates = OH_Rdb_CreatePredicates("test");
    errCode = OH_Rdb_Delete(storeBackupTestRdbStore_, predicates);
    NAPI_ASSERT(env, errCode == 1, "OH_Rdb_Delete is fail.");

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, backupPath1.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Restore1 is fail.");

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, backupPath2.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Restore2 is fail.");

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");

    errCode = cursor->goToNextRow(cursor);
    NAPI_ASSERT(env, errCode == 0, "goToNextRow is fail.");

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);

    char dropTableSql[] = "DROP TABLE IF EXISTS test";
    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, dropTableSql);
    NAPI_ASSERT(env, errCode == 0, "dropTable is fail.");

    errCode = OH_Rdb_CloseStore(storeBackupTestRdbStore_);
    errCode = OH_Rdb_DeleteStore(storeBackupTestPath_.c_str());
    NAPI_ASSERT(env, errCode == 0, "DeleteStore is fail.");

    napi_value returnCode;
    napi_create_double(env, errCode, &returnCode);
    return returnCode;
}

static napi_value SUB_DDM_RDB_BackupRestoreTest_0900(napi_env env, napi_callback_info info) {
    std::string storeBackupTestPath_ = boxPath_ + "rdb_store_test.db";
    OH_Rdb_Store *storeBackupTestRdbStore_;

    OH_Rdb_Config config;
    config.path = storeBackupTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S1;
    config.isEncrypt = false;

    int errCode = 0;
    storeBackupTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    NAPI_ASSERT(env, errCode == 0, "getRdbStore is fail.");

    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                            "data3 FLOAT, data4 BLOB, data5 TEXT);";

    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, createTableSql);
    NAPI_ASSERT(env, errCode == 0, "createTable is fail.");

    OH_VBucket *valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");

    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    NAPI_ASSERT(env, errCode == 1, "OH_Rdb_Insert is fail.");
    //        EXPECT_EQ(errCode, 1);

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");
    cursor->close(cursor);

    std::string backupPath = boxPath_ + "backupEmpty.db";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Backup is fail.");

    // delete data before restore
    OH_Predicates *predicates = OH_Rdb_CreatePredicates("test");
    errCode = OH_Rdb_Delete(storeBackupTestRdbStore_, predicates);
    NAPI_ASSERT(env, errCode == 1, "OH_Rdb_Delete is fail.");

    std::string reStorePath = boxPath_ + "";
    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, reStorePath.c_str());
    NAPI_ASSERT(env, errCode == 14800011, "OH_Rdb_Restore is success.");

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 0, "getRowCount is fail.");

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, backupPath.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Restore is fail.");

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);

    char dropTableSql[] = "DROP TABLE IF EXISTS test";
    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, dropTableSql);
    NAPI_ASSERT(env, errCode == 0, "dropTable is fail.");

    errCode = OH_Rdb_CloseStore(storeBackupTestRdbStore_);
    errCode = OH_Rdb_DeleteStore(storeBackupTestPath_.c_str());
    NAPI_ASSERT(env, errCode == 0, "DeleteStore is fail.");

    napi_value returnCode;
    napi_create_double(env, errCode, &returnCode);
    return returnCode;
}

static napi_value SUB_DDM_RDB_BackupRestoreTest_0110(napi_env env, napi_callback_info info) {
    std::string storeBackupTestPath_ = boxPath_ + "rdb_store_test.db";
    OH_Rdb_Store *storeBackupTestRdbStore_;

    OH_Rdb_Config config;
    config.path = storeBackupTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S1;
    config.isEncrypt = false;

    int errCode = 0;
    storeBackupTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    NAPI_ASSERT(env, errCode == 0, "getRdbStore is fail.");

    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                            "data3 FLOAT, data4 BLOB, data5 TEXT);";

    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, createTableSql);
    NAPI_ASSERT(env, errCode == 0, "createTable is fail.");

    OH_VBucket *valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");

    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    NAPI_ASSERT(env, errCode == 1, "OH_Rdb_Insert is fail.");
    //        EXPECT_EQ(errCode, 1);

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");
    cursor->close(cursor);

    std::string backupPath = boxPath_ + "backupWrong.db";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Backup is fail.");

    // delete data before restore
    OH_Predicates *predicates = OH_Rdb_CreatePredicates("test");
    errCode = OH_Rdb_Delete(storeBackupTestRdbStore_, predicates);
    NAPI_ASSERT(env, errCode == 1, "OH_Rdb_Delete is fail.");

    std::string reStorePath = boxPath_ + "wrong.db";
    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, reStorePath.c_str());
    NAPI_ASSERT(env, errCode == 14800011, "OH_Rdb_Restore is success.");

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 0, "getRowCount is fail.");

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, backupPath.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Restore is fail.");

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);

    char dropTableSql[] = "DROP TABLE IF EXISTS test";
    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, dropTableSql);
    NAPI_ASSERT(env, errCode == 0, "dropTable is fail.");

    errCode = OH_Rdb_CloseStore(storeBackupTestRdbStore_);
    errCode = OH_Rdb_DeleteStore(storeBackupTestPath_.c_str());
    NAPI_ASSERT(env, errCode == 0, "DeleteStore is fail.");

    napi_value returnCode;
    napi_create_double(env, errCode, &returnCode);
    return returnCode;
}

static napi_value SUB_DDM_RDB_BackupRestoreTest_0600(napi_env env, napi_callback_info info) {
    std::string storeBackupTestPath_ = boxPath_ + "rdb_store_test.db";
    OH_Rdb_Store *storeBackupTestRdbStore_;

    OH_Rdb_Config config;
    config.path = storeBackupTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S1;
    config.isEncrypt = false;

    int errCode = 0;
    storeBackupTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    NAPI_ASSERT(env, errCode == 0, "getRdbStore is fail.");

    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                            "data3 FLOAT, data4 BLOB, data5 TEXT);";

    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, createTableSql);
    NAPI_ASSERT(env, errCode == 0, "createTable is fail.");

    OH_VBucket *valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putInt64(valueBucket, "id", 1);
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");
    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    NAPI_ASSERT(env, errCode == 1, "Insert data is fail.");

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");
    cursor->close(cursor);

    std::string backupPath = boxPath_ + " ";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Backup is fail.");

    // delete data before restore
    OH_Predicates *predicates = OH_Rdb_CreatePredicates("test");
    errCode = OH_Rdb_Delete(storeBackupTestRdbStore_, predicates);
    NAPI_ASSERT(env, errCode == 1, "DeleteData is fail.");

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, backupPath.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Restore is fail.");

    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");

    errCode = cursor->goToNextRow(cursor);
    NAPI_ASSERT(env, errCode == 0, "goToNextRow is fail.");

    size_t size = 0;
    cursor->getSize(cursor, 1, &size);
    char data1Value[size + 1];
    cursor->getText(cursor, 1, data1Value, size + 1);
    NAPI_ASSERT(env, strncmp(data1Value, "zhangSan", 8) == 0, "getText is fail.");

    int64_t data2Value;
    cursor->getInt64(cursor, 2, &data2Value);
    NAPI_ASSERT(env, data2Value == 12800, "getInt64 is fail.");

    double data3Value;
    cursor->getReal(cursor, 3, &data3Value);
    NAPI_ASSERT(env, data3Value == 100.1, "getReal is fail.");

    cursor->getSize(cursor, 4, &size);
    unsigned char data4Value[size];
    cursor->getBlob(cursor, 4, data4Value, size);
    NAPI_ASSERT(env, data4Value[0] == 1, "getBlob1 is fail.");
    NAPI_ASSERT(env, data4Value[1] == 2, "getBlob2 is fail.");

    cursor->getSize(cursor, 5, &size);
    char data5Value[size + 1];
    cursor->getText(cursor, 5, data5Value, size + 1);
    NAPI_ASSERT(env, strncmp(data5Value, "ABCDEFG", 7) == 0, "getText is fail.");

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);

    char dropTableSql[] = "DROP TABLE IF EXISTS test";
    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, dropTableSql);
    NAPI_ASSERT(env, errCode == 0, "dropTable is fail.");

    errCode = OH_Rdb_CloseStore(storeBackupTestRdbStore_);
    errCode = OH_Rdb_DeleteStore(storeBackupTestPath_.c_str());
    NAPI_ASSERT(env, errCode == 0, "DeleteStore is fail.");

    napi_value returnCode;
    napi_create_double(env, errCode, &returnCode);
    return returnCode;
}

static napi_value SUB_DDM_RDB_BackupRestoreTest_0700(napi_env env, napi_callback_info info) {
    std::string storeBackupTestPath_ = boxPath_ + "rdb_store_test.db";
    OH_Rdb_Store *storeBackupTestRdbStore_;

    OH_Rdb_Config config;
    config.path = storeBackupTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S1;
    config.isEncrypt = false;

    int errCode = 0;
    storeBackupTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    NAPI_ASSERT(env, errCode == 0, "getRdbStore is fail.");

    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                            "data3 FLOAT, data4 BLOB, data5 TEXT);";

    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, createTableSql);
    NAPI_ASSERT(env, errCode == 0, "createTable is fail.");

    OH_VBucket *valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putInt64(valueBucket, "id", 1);
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");
    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    NAPI_ASSERT(env, errCode == 1, "Insert data is fail.");

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");
    cursor->close(cursor);

    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, NULL);
    NAPI_ASSERT(env, errCode == 14800001, "OH_Rdb_Backup is success.");
    
    valueBucket->destroyValuesBucket(valueBucket);

    char dropTableSql[] = "DROP TABLE IF EXISTS test";
    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, dropTableSql);
    NAPI_ASSERT(env, errCode == 0, "dropTable is fail.");

    errCode = OH_Rdb_CloseStore(storeBackupTestRdbStore_);
    errCode = OH_Rdb_DeleteStore(storeBackupTestPath_.c_str());
    NAPI_ASSERT(env, errCode == 0, "DeleteStore is fail.");

    napi_value returnCode;
    napi_create_double(env, errCode, &returnCode);
    return returnCode;
}

static napi_value SUB_DDM_RDB_BackupRestoreTest_0800(napi_env env, napi_callback_info info) {
    std::string storeBackupTestPath_ = boxPath_ + "rdb_store_test.db";
    OH_Rdb_Store *storeBackupTestRdbStore_;

    OH_Rdb_Config config;
    config.path = storeBackupTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S1;
    config.isEncrypt = false;

    int errCode = 0;
    storeBackupTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    NAPI_ASSERT(env, errCode == 0, "getRdbStore is fail.");

    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                            "data3 FLOAT, data4 BLOB, data5 TEXT);";

    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, createTableSql);
    NAPI_ASSERT(env, errCode == 0, "createTable is fail.");

    OH_VBucket *valueBucket = OH_Rdb_CreateValuesBucket();
    valueBucket->putInt64(valueBucket, "id", 1);
    valueBucket->putText(valueBucket, "data1", "zhangSan");
    valueBucket->putInt64(valueBucket, "data2", 12800);
    valueBucket->putReal(valueBucket, "data3", 100.1);
    uint8_t arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    valueBucket->putBlob(valueBucket, "data4", arr, len);
    valueBucket->putText(valueBucket, "data5", "ABCDEFG");
    errCode = OH_Rdb_Insert(storeBackupTestRdbStore_, "test", valueBucket);
    NAPI_ASSERT(env, errCode == 1, "Insert data is fail.");

    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);

    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");
    cursor->close(cursor);

    std::string backupPath = boxPath_ + "backupNull.db";
    errCode = OH_Rdb_Backup(storeBackupTestRdbStore_, backupPath.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Backup is fail.");

    // delete data before restore
    OH_Predicates *predicates = OH_Rdb_CreatePredicates("test");
    errCode = OH_Rdb_Delete(storeBackupTestRdbStore_, predicates);
    NAPI_ASSERT(env, errCode == 1, "DeleteData is fail.");

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, NULL);
    NAPI_ASSERT(env, errCode == 14800001, "OH_Rdb_Restore is success.");
    
    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 0, "getRowCount is success.");

    errCode = OH_Rdb_Restore(storeBackupTestRdbStore_, backupPath.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_Restore is fail.");
    
    cursor = OH_Rdb_ExecuteQuery(storeBackupTestRdbStore_, querySql);
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");

    errCode = cursor->goToNextRow(cursor);
    NAPI_ASSERT(env, errCode == 0, "goToNextRow is fail.");

    size_t size = 0;
    cursor->getSize(cursor, 1, &size);
    char data1Value[size + 1];
    cursor->getText(cursor, 1, data1Value, size + 1);
    NAPI_ASSERT(env, strncmp(data1Value, "zhangSan", 8) == 0, "getText is fail.");

    int64_t data2Value;
    cursor->getInt64(cursor, 2, &data2Value);
    NAPI_ASSERT(env, data2Value == 12800, "getInt64 is fail.");

    double data3Value;
    cursor->getReal(cursor, 3, &data3Value);
    NAPI_ASSERT(env, data3Value == 100.1, "getReal is fail.");

    cursor->getSize(cursor, 4, &size);
    unsigned char data4Value[size];
    cursor->getBlob(cursor, 4, data4Value, size);
    NAPI_ASSERT(env, data4Value[0] == 1, "getBlob1 is fail.");
    NAPI_ASSERT(env, data4Value[1] == 2, "getBlob2 is fail.");

    cursor->getSize(cursor, 5, &size);
    char data5Value[size + 1];
    cursor->getText(cursor, 5, data5Value, size + 1);
    NAPI_ASSERT(env, strncmp(data5Value, "ABCDEFG", 7) == 0, "getText is fail.");

    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);

    char dropTableSql[] = "DROP TABLE IF EXISTS test";
    errCode = OH_Rdb_Execute(storeBackupTestRdbStore_, dropTableSql);
    NAPI_ASSERT(env, errCode == 0, "dropTable is fail.");

    errCode = OH_Rdb_CloseStore(storeBackupTestRdbStore_);
    errCode = OH_Rdb_DeleteStore(storeBackupTestPath_.c_str());
    NAPI_ASSERT(env, errCode == 0, "DeleteStore is fail.");

    napi_value returnCode;
    napi_create_double(env, errCode, &returnCode);
    return returnCode;
}





EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports) {
    napi_property_descriptor desc[] = {
        {"SUB_DDM_RDB_BackupRestoreTest_0100", nullptr, SUB_DDM_RDB_BackupRestoreTest_0100, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"SUB_DDM_RDB_BackupRestoreTest_0300", nullptr, SUB_DDM_RDB_BackupRestoreTest_0300, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"SUB_DDM_RDB_BackupRestoreTest_0400", nullptr, SUB_DDM_RDB_BackupRestoreTest_0400, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"SUB_DDM_RDB_BackupRestoreTest_0600", nullptr, SUB_DDM_RDB_BackupRestoreTest_0600, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"SUB_DDM_RDB_BackupRestoreTest_0700", nullptr, SUB_DDM_RDB_BackupRestoreTest_0700, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"SUB_DDM_RDB_BackupRestoreTest_0800", nullptr, SUB_DDM_RDB_BackupRestoreTest_0800, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"SUB_DDM_RDB_BackupRestoreTest_0900", nullptr, SUB_DDM_RDB_BackupRestoreTest_0900, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"SUB_DDM_RDB_BackupRestoreTest_0110", nullptr, SUB_DDM_RDB_BackupRestoreTest_0110, nullptr, nullptr, nullptr, napi_default, nullptr},
        {"SUB_DDM_RDB_BackupRestoreTest_0500", nullptr, SUB_DDM_RDB_BackupRestoreTest_0500, nullptr, nullptr, nullptr, napi_default, nullptr}};
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}
EXTERN_C_END

static napi_module demoModule = {
    .nm_version = 1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = Init,
    .nm_modname = "backup",
    .nm_priv = ((void *)0),
    .reserved = {0},
};

extern "C" __attribute__((constructor)) void RegisterEntryModule(void) {
    napi_module_register(&demoModule);
}
