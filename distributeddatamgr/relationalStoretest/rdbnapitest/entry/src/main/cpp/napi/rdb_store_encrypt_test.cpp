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
std::string storeEncryptTestPath_ = RDB_TEST_PATH + "rdb_encrypt_test.db";
std::string storeEncryptTestPath2_ = RDB_TEST_PATH + "Encrypt.db";
OH_Rdb_Store *storeEncryptTestRdbStore_;
OH_Rdb_Store *storeEncryptTestRdbStore2_;

static napi_value SUB_DDM_RDB_ENCRYPT_0100(napi_env env, napi_callback_info info) {
    OH_Rdb_Config config2;
    config2.path = storeEncryptTestPath2_.c_str();
    config2.securityLevel = OH_Rdb_SecurityLevel::S1;
    config2.isEncrypt = true;
    
    OH_Rdb_Config config3;
    config3.path = storeEncryptTestPath2_.c_str();
    config3.securityLevel = OH_Rdb_SecurityLevel::S1;
    config3.isEncrypt = false;
    
    int errCode = 0;
    storeEncryptTestRdbStore_ = OH_Rdb_GetOrOpen(&config2, &errCode);
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_GetOrOpen is fail.");
    NAPI_ASSERT(env, storeEncryptTestRdbStore_ != NULL, "OH_Rdb_GetOrOpen config2 is fail.");
    
    storeEncryptTestRdbStore2_ = OH_Rdb_GetOrOpen(&config3, &errCode);
    NAPI_ASSERT(env, storeEncryptTestRdbStore2_ == NULL, "OH_Rdb_GetOrOpen config3 is success.");
    
    errCode = OH_Rdb_CloseStore(storeEncryptTestRdbStore_);
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_CloseStore is fail.");
    storeEncryptTestRdbStore_ = NULL;
    storeEncryptTestRdbStore2_ = NULL;
    
    errCode = OH_Rdb_DeleteStore(storeEncryptTestPath_.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_DeleteStore is fail.");
    
    errCode = OH_Rdb_DeleteStore(storeEncryptTestPath2_.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_DeleteStore is fail.");

    napi_value returnCode;
    napi_create_double(env, errCode, &returnCode);
    return returnCode;
}


static napi_value SUB_DDM_RDB_ENCRYPT_0200(napi_env env, napi_callback_info info) {
    OH_Rdb_Config config;
        config.path = storeEncryptTestPath_.c_str();
        config.securityLevel = OH_Rdb_SecurityLevel::S1;
        config.isEncrypt = false;
    
        OH_Rdb_Config config1;
        config1.path = storeEncryptTestPath_.c_str();
        config1.securityLevel = OH_Rdb_SecurityLevel::S2;
        config1.isEncrypt = false;
    
    int errCode = 0;
        storeEncryptTestRdbStore_ = OH_Rdb_GetOrOpen(&config1, &errCode);
        NAPI_ASSERT(env, errCode == 0, "OH_Rdb_GetOrOpen is fail.");
        NAPI_ASSERT(env, storeEncryptTestRdbStore_ != NULL, "OH_Rdb_GetOrOpen config1 is fail.");
    
    
        storeEncryptTestRdbStore2_ = OH_Rdb_GetOrOpen(&config, &errCode);
        NAPI_ASSERT(env, storeEncryptTestRdbStore2_ == NULL, "OH_Rdb_GetOrOpen config3 is success.");
    
    errCode = OH_Rdb_CloseStore(storeEncryptTestRdbStore_);
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_CloseStore is fail.");
    storeEncryptTestRdbStore_ = NULL;
    storeEncryptTestRdbStore2_ = NULL;
    errCode = OH_Rdb_DeleteStore(storeEncryptTestPath_.c_str());
    NAPI_ASSERT(env, errCode == 0, "OH_Rdb_DeleteStore is fail.");

    napi_value returnCode;
    napi_create_double(env, errCode, &returnCode);
    return returnCode;
}





EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports) {
    napi_property_descriptor desc[] = {
    {"SUB_DDM_RDB_ENCRYPT_0100", nullptr, SUB_DDM_RDB_ENCRYPT_0100, nullptr, nullptr, nullptr, napi_default, nullptr},
    {"SUB_DDM_RDB_ENCRYPT_0200", nullptr, SUB_DDM_RDB_ENCRYPT_0200, nullptr, nullptr, nullptr, napi_default, nullptr}};
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}
EXTERN_C_END

static napi_module demoModule = {
    .nm_version = 1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = Init,
    .nm_modname = "encrypt",
    .nm_priv = ((void *)0),
    .reserved = {0},
};

extern "C" __attribute__((constructor)) void RegisterEntryModule(void) {
    napi_module_register(&demoModule);
}
