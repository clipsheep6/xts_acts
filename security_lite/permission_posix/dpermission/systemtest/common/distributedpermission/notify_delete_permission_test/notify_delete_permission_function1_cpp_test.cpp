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
#include "permission_log.h"
#include "system_test_distributed_permission_util.h"
#include "ipc_skeleton.h"
#include "time_util.h"

#define private public
#include "distributed_permission_manager_service.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Security::Permission;
using namespace OHOS::STPermissionUtil;
using namespace OHOS::AppExecFwk;
using std::string;

namespace {
static const int32_t cmd_result_buf_size = 1024 * 10;
}  // namespace

class NotifyDeletePermissionFunction1CPPTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
    void CheckLog(string &result_str);
};

void NotifyDeletePermissionFunction1CPPTest::SetUpTestCase(void)
{}

void NotifyDeletePermissionFunction1CPPTest::TearDownTestCase(void)
{
    FILE *ptr;
    ptr = popen("ps -ef|grep DeleteUidPermissionCommand-10001|cut -c 14-18|xargs kill -9", "r");
    pclose(ptr);
}

void NotifyDeletePermissionFunction1CPPTest::SetUp(void)
{}

void NotifyDeletePermissionFunction1CPPTest::TearDown(void)
{}

/**
 * @tc.name      the application permission information and DUID on a device are deleted
 * @tc.number    DPMS_NotifyUidDelete_0600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level1
 */
HWTEST_F(NotifyDeletePermissionFunction1CPPTest, DPMS_NotifyUidDelete_0600, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "NotifyDeletePermissionFunction1CPPTest DPMS_NotifyUidDelete_0600 start";

    GTEST_LOG_(INFO) << "Uninstall DPThirdBundle start.";
    STDistibutePermissionUtil::Uninstall("com.third.hiworld.include_use_by_local_app");
    GTEST_LOG_(INFO) << "Uninstall DPThirdBundle end.";

    string result_srt = "";
    string expect_str = "DeleteUidPermissionCommand-10001, execute succeed.";
    CheckLog(result_srt);
    GTEST_LOG_(INFO) << result_srt;
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);

    GTEST_LOG_(INFO) << "NotifyDeletePermissionFunction1CPPTest DPMS_NotifyUidDelete_0600 end";
}

void NotifyDeletePermissionFunction1CPPTest::CheckLog(string &result_str)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(10000));
    string cmd_1 = "hilog | grep DeleteUidPermissionCommand-10001 > result.log";
    string cmd_2 = "grep -a DeleteUidPermissionCommand-10001 result.log | tail -n 1";
    FILE *ptr;
    char result[cmd_result_buf_size] = {0};
    char buf_ps[cmd_result_buf_size];

    ptr = popen(cmd_1.c_str(), "w");
    std::this_thread::sleep_for(std::chrono::milliseconds(10000));
    if ((ptr = popen(cmd_2.c_str(), "r")) != NULL) {
        while (fgets(buf_ps, sizeof(buf_ps), ptr) != NULL) {
            strncat(result, buf_ps, sizeof(result) - 1);
        }
        pclose(ptr);
        ptr = nullptr;
    }
    string sCmdResult;
    sCmdResult = string(result);

    GTEST_LOG_(INFO) << sCmdResult;

    result_str = sCmdResult.substr(sCmdResult.length() - 51, sCmdResult.length());
    result_str.erase(result_str.end() - 1);

    ptr = popen("rm result.log", "w");
    pclose(ptr);
}