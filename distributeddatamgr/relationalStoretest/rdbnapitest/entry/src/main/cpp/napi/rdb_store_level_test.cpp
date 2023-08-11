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


std::string RDB_TEST_PATH = "/data/storage/el2/database/entry_test/";
std::string storeLevelTestPath_ = RDB_TEST_PATH + "rdb_store_test.db";
OH_Rdb_Store *storeLevelTestRdbStore_;

static napi_value SUB_DDM_RDB_LEVEL_0100(napi_env env, napi_callback_info info) {
    OH_Rdb_Config config;
    config.path = storeLevelTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S1;
    config.isEncrypt = false;
    
    int errCode = 0;
    storeLevelTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    NAPI_ASSERT(env, errCode == 0, "getRdbStore is fail.");
        
    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                                "data3 FLOAT, data4 BLOB, data5 TEXT);";
        
    errCode = OH_Rdb_Execute(storeLevelTestRdbStore_, createTableSql);
    NAPI_ASSERT(env, errCode == 0, "createTable is fail.");
    
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
    NAPI_ASSERT(env, errCode == 1, "OH_Rdb_Insert is fail.");
    
    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeLevelTestRdbStore_, querySql);
    
    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");
    
    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);
    
    char dropTableSql[] = "DROP TABLE IF EXISTS test";
    errCode = OH_Rdb_Execute(storeLevelTestRdbStore_, dropTableSql);
    NAPI_ASSERT(env, errCode == 0, "DropTable is fail.");
    
    errCode = OH_Rdb_CloseStore(storeLevelTestRdbStore_);
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_CloseStore is fail.");
    storeLevelTestRdbStore_ = NULL;
    errCode = OH_Rdb_DeleteStore(storeLevelTestPath_.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_DeleteStore is fail.");
    
    napi_value returnCode;
    napi_create_double(env, errCode, &returnCode);
    return returnCode;
}

static napi_value SUB_DDM_RDB_LEVEL_0200(napi_env env, napi_callback_info info) {
    OH_Rdb_Config config;
    config.path = storeLevelTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S2;
    config.isEncrypt = false;
    
    int errCode = 0;
    storeLevelTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    NAPI_ASSERT(env, errCode == 0, "getRdbStore is fail.");
        
    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                                "data3 FLOAT, data4 BLOB, data5 TEXT);";
        
    errCode = OH_Rdb_Execute(storeLevelTestRdbStore_, createTableSql);
    NAPI_ASSERT(env, errCode == 0, "createTable is fail.");
    
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
    NAPI_ASSERT(env, errCode == 1, "OH_Rdb_Insert is fail.");
    
    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeLevelTestRdbStore_, querySql);
    
    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");
    
    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);
    
    char dropTableSql[] = "DROP TABLE IF EXISTS test";
    errCode = OH_Rdb_Execute(storeLevelTestRdbStore_, dropTableSql);
    NAPI_ASSERT(env, errCode == 0, "DropTable is fail.");
    
    errCode = OH_Rdb_CloseStore(storeLevelTestRdbStore_);
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_CloseStore is fail.");
    storeLevelTestRdbStore_ = NULL;
    errCode = OH_Rdb_DeleteStore(storeLevelTestPath_.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_DeleteStore is fail.");
    
    napi_value returnCode;
    napi_create_double(env, errCode, &returnCode);
    return returnCode;
}

static napi_value SUB_DDM_RDB_LEVEL_0300(napi_env env, napi_callback_info info) {
    OH_Rdb_Config config;
    config.path = storeLevelTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S3;
    config.isEncrypt = false;
    
    int errCode = 0;
    storeLevelTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    NAPI_ASSERT(env, errCode == 0, "getRdbStore is fail.");
        
    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                                "data3 FLOAT, data4 BLOB, data5 TEXT);";
        
    errCode = OH_Rdb_Execute(storeLevelTestRdbStore_, createTableSql);
    NAPI_ASSERT(env, errCode == 0, "createTable is fail.");
    
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
    NAPI_ASSERT(env, errCode == 1, "OH_Rdb_Insert is fail.");
    
    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeLevelTestRdbStore_, querySql);
    
    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");
    
    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);
    
    char dropTableSql[] = "DROP TABLE IF EXISTS test";
    errCode = OH_Rdb_Execute(storeLevelTestRdbStore_, dropTableSql);
    NAPI_ASSERT(env, errCode == 0, "DropTable is fail.");
    
    errCode = OH_Rdb_CloseStore(storeLevelTestRdbStore_);
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_CloseStore is fail.");
    storeLevelTestRdbStore_ = NULL;
    errCode = OH_Rdb_DeleteStore(storeLevelTestPath_.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_DeleteStore is fail.");
    
    napi_value returnCode;
    napi_create_double(env, errCode, &returnCode);
    return returnCode;
}

static napi_value SUB_DDM_RDB_LEVEL_0400(napi_env env, napi_callback_info info) {
    OH_Rdb_Config config;
    config.path = storeLevelTestPath_.c_str();
    config.securityLevel = OH_Rdb_SecurityLevel::S4;
    config.isEncrypt = false;
    
    int errCode = 0;
    storeLevelTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    NAPI_ASSERT(env, errCode == 0, "getRdbStore is fail.");
        
    char createTableSql[] = "CREATE TABLE test (id INTEGER PRIMARY KEY AUTOINCREMENT, data1 TEXT, data2 INTEGER, "
                                "data3 FLOAT, data4 BLOB, data5 TEXT);";
        
    errCode = OH_Rdb_Execute(storeLevelTestRdbStore_, createTableSql);
    NAPI_ASSERT(env, errCode == 0, "createTable is fail.");
    
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
    NAPI_ASSERT(env, errCode == 1, "OH_Rdb_Insert is fail.");
    
    char querySql[] = "SELECT * FROM test";
    OH_Cursor *cursor = OH_Rdb_ExecuteQuery(storeLevelTestRdbStore_, querySql);
    
    int rowCount = 0;
    cursor->getRowCount(cursor, &rowCount);
    NAPI_ASSERT(env, rowCount == 1, "getRowCount is fail.");
    
    valueBucket->destroyValuesBucket(valueBucket);
    cursor->close(cursor);
    
    char dropTableSql[] = "DROP TABLE IF EXISTS test";
    errCode = OH_Rdb_Execute(storeLevelTestRdbStore_, dropTableSql);
    NAPI_ASSERT(env, errCode == 0, "DropTable is fail.");
    
    errCode = OH_Rdb_CloseStore(storeLevelTestRdbStore_);
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_CloseStore is fail.");
    storeLevelTestRdbStore_ = NULL;
    errCode = OH_Rdb_DeleteStore(storeLevelTestPath_.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_DeleteStore is fail.");
    
    napi_value returnCode;
    napi_create_double(env, errCode, &returnCode);
    return returnCode;
}





EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports) {
    napi_property_descriptor desc[] = {
        {"SUB_DDM_RDB_LEVEL_0100", nullptr, SUB_DDM_RDB_LEVEL_0100, nullptr, nullptr, nullptr, napi_default, nullptr},
    {"SUB_DDM_RDB_LEVEL_0200", nullptr, SUB_DDM_RDB_LEVEL_0200, nullptr, nullptr, nullptr, napi_default, nullptr},
    {"SUB_DDM_RDB_LEVEL_0300", nullptr, SUB_DDM_RDB_LEVEL_0300, nullptr, nullptr, nullptr, napi_default, nullptr},
    {"SUB_DDM_RDB_LEVEL_0400", nullptr, SUB_DDM_RDB_LEVEL_0400, nullptr, nullptr, nullptr, napi_default, nullptr}};
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}
EXTERN_C_END

static napi_module demoModule = {
    .nm_version = 1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = Init,
    .nm_modname = "levelTest",
    .nm_priv = ((void *)0),
    .reserved = {0},
};

extern "C" __attribute__((constructor)) void RegisterEntryModule(void) {
    napi_module_register(&demoModule);
}
