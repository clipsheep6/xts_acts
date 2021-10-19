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

#include <gtest/gtest.h>

#include "distributeddb_data_generate_unit_test.h"
#include "distributeddb_tools_unit_test.h"
#include "db_errno.h"
#include "log_print.h"
#include "db_common.h"

using namespace testing::ext;
using namespace DistributedDB;
using namespace DistributedDBUnitTest;
using namespace std;

namespace {
// define some variables to init a KvStoreDelegateManager object.
KvStoreDelegateManager g_mgr(APP_ID, USER_ID);
string g_testDir;
KvStoreConfig g_config;

// define the g_kvNbDelegateCallback, used to get some information when open a kv store.
DBStatus g_kvDelegateStatus = INVALID_ARGS;
KvStoreNbDelegate* g_kvNbDelegatePtr = nullptr;

void KvStoreNbDelegateCallback(
    DBStatus statusSrc, KvStoreNbDelegate* kvStoreSrc, DBStatus* statusDst, KvStoreNbDelegate** kvStoreDst)
{
    *statusDst = statusSrc;
    *kvStoreDst = kvStoreSrc;
}

// the type of g_kvNbDelegateCallback is function<void(DBStatus, KvStoreDelegate*)>
auto g_kvNbDelegateCallback =
    bind(&KvStoreNbDelegateCallback, placeholders::_1, placeholders::_2, &g_kvDelegateStatus, &g_kvNbDelegatePtr);
}  // namespace

class DistributedDBInterfacesNBTransactionTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
};

void DistributedDBInterfacesNBTransactionTest::SetUpTestCase(void)
{
    DistributedDBToolsUnitTest::TestDirInit(g_testDir);
    g_config.dataDir = g_testDir;
    g_mgr.SetKvStoreConfig(g_config);
    g_mgr.SetProcessLabel("DistributedDBInterfacesNBTransactionTest", "test");
}

void DistributedDBInterfacesNBTransactionTest::TearDownTestCase(void)
{
    if (DistributedDBToolsUnitTest::RemoveTestDbFiles(g_testDir) != 0) {
        LOGE("rm test db files error!");
    }
}

void DistributedDBInterfacesNBTransactionTest::SetUp(void)
{
    g_kvDelegateStatus = INVALID_ARGS;
    g_kvNbDelegatePtr = nullptr;
}

void DistributedDBInterfacesNBTransactionTest::TearDown(void)
{}

/**
 * @tc.name: start001
 * @tc.desc: Test the nb transaction start twice.
 * @tc.type: FUNC
 * @tc.require: AR000DPTQ9
 * @tc.author: wumin
 */
HWTEST_F(DistributedDBInterfacesNBTransactionTest, start001, Function | SmallTest | Level0)
{
    const KvStoreNbDelegate::Option option = {true, false};
    g_mgr.GetKvStore("distributed_nb_transaction_start001", option, g_kvNbDelegateCallback);
    ASSERT_TRUE(g_kvNbDelegatePtr != nullptr);
    EXPECT_TRUE(g_kvDelegateStatus == OK);

    /**
     * @tc.steps:step1. Start transaction.
     * @tc.expected: step1. return OK.
     */
    EXPECT_EQ(g_kvNbDelegatePtr->StartTransaction(), OK);

    /**
     * @tc.steps:step2. Start transaction again.
     * @tc.expected: step2. return DB_ERROR.
     */
    EXPECT_EQ(g_kvNbDelegatePtr->StartTransaction(), DB_ERROR);

    // finilize
    EXPECT_EQ(g_mgr.CloseKvStore(g_kvNbDelegatePtr), OK);
    EXPECT_EQ(g_mgr.DeleteKvStore("distributed_nb_transaction_start001"), OK);
    g_kvNbDelegatePtr = nullptr;
}
