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

class RdbNdkStoreEncryptTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
};

std::string storeEncryptTestPath_ = RDB_TEST_PATH + "rdb_store_test.db";
std::string storeEncryptTestPath2_ = RDB_TEST_PATH + "Encrypt.db";
OH_Rdb_Store *storeEncryptTestRdbStore_;

void RdbNdkStoreEncryptTest::SetUpTestCase(void)
{

}

void RdbNdkStoreEncryptTest::TearDownTestCase(void)
{
    int errCode = OH_Rdb_CloseStore(storeEncryptTestRdbStore_);
    errCode = OH_Rdb_DeleteStore(storeEncryptTestPath_.c_str());
    EXPECT_EQ(errCode, 0);
    
    errCode = OH_Rdb_DeleteStore(storeEncryptTestPath2_.c_str());
    EXPECT_EQ(errCode, 0);
}

void RdbNdkStoreEncryptTest::SetUp(void)
{

}

void RdbNdkStoreEncryptTest::TearDown(void)
{

    
}

/**
 * @tc.name: SUB_DDM_RDB_ENCRYPT_0100
 * @tc.desc: Non-encrypted Access encrypted databases
 * @tc.type: FUNC
 */
HWTEST_F(RdbNdkStoreEncryptTest, SUB_DDM_RDB_ENCRYPT_0100, TestSize.Level1)
{
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
    EXPECT_NE(storeEncryptTestRdbStore_, NULL);
    storeEncryptTestRdbStore_ = NULL;

    storeEncryptTestRdbStore_ = OH_Rdb_GetOrOpen(&config3, &errCode);
    EXPECT_EQ(storeEncryptTestRdbStore_, NULL);
    storeEncryptTestRdbStore_ = NULL;
}

/**
 * @tc.name: SUB_DDM_RDB_ENCRYPT_0200
 * @tc.desc: Non-encrypted Access Non-encrypted databases
 * @tc.type: FUNC
 */
HWTEST_F(RdbNdkStoreEncryptTest, SUB_DDM_RDB_ENCRYPT_0200, TestSize.Level1)
{
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
    EXPECT_NE(storeEncryptTestRdbStore_, NULL);
    storeEncryptTestRdbStore_ = NULL;

    storeEncryptTestRdbStore_ = OH_Rdb_GetOrOpen(&config, &errCode);
    EXPECT_EQ(storeEncryptTestRdbStore_, NULL);
    storeEncryptTestRdbStore_ = NULL;
}