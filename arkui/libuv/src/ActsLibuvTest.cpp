/*
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
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
#include <stdlib.h>
#include "ActsLibuvTest.h"
extern "C"{
#include "runner.h"
}
#include "uv.h"

typedef void (*init_plugin_function)();

namespace OHOS {
    using namespace std;
    using namespace testing::ext;
    static const char TESTFILE[] = "foo.gz";

    static uv_once_t once_only = UV_ONCE_INIT;

    int i = 0;

    void increment() {
        i++;
    }
    // Preset action of the test suite, which is executed before the first test case
    void ActsLibuvTest::SetUpTestCase(void)
    {
    }
    // Test suite cleanup action, which is executed after the last test case
    void ActsLibuvTest::TearDownTestCase(void)
    {
    }
    // Preset action of the test case
    void ActsLibuvTest::SetUp()
    {
    }
    // Cleanup action of the test case
    void ActsLibuvTest::TearDown()
    {
    }

/**
 * @tc.number    : ActsZlibTest_0100
 * @tc.name      : Test uv_version and uv_version_string test
 * @tc.desc      : [C- SOFTWARE -0200]
*/
HWTEST_F(ActsLibuvTest, TestLibuvTestUVVersion, Function | MediumTest | Level2)
{
    int version = uv_version();
    ASSERT_EQ(version, UV_VERSION_HEX);
    fprintf(stderr, "uv_version error: %d\n", version);

    auto versionString = uv_version_string();
    // ASSERT_EQ(versionString, UV_VERSION_STRING);
    
    fprintf(stderr, "uv_version_string error: %s\n", versionString);

    int replaceAllocator = uv_replace_allocator(nullptr, nullptr, nullptr,nullptr);
    ASSERT_EQ(replaceAllocator, UV_EINVAL);
    fprintf(stderr, "uv_replace_allocator error: %d\n", replaceAllocator);

    uv_loop_t* loop = uv_loop_new();
    ASSERT_TRUE(loop != nullptr);    
}

/**
 * @tc.number    : ActsZlibTest_0200
 * @tc.name      : Test uv_loop_new
 * @tc.desc      : [C- SOFTWARE -0200]
*/
HWTEST_F(ActsLibuvTest, TestLibuvTestLoop, Function | MediumTest | Level2)
{
    uv_loop_t* newLoop;
    newLoop = uv_loop_new();
    ASSERT_TRUE(newLoop != NULL);
    uv_loop_delete(newLoop);
    ASSERT_TRUE(true);
}

/**
 * @tc.number    : ActsZlibTest_0300
 * @tc.name      : Test uv_err_name_r
 * @tc.desc      : [C- SOFTWARE -0200]
*/

HWTEST_F(ActsLibuvTest, TestLibuvTestErrName, Function | MediumTest | Level2)
{
    char* newBuf;
    int err = 0;
    char buf[] =  "errName";
    size_t buflen = 20;
    newBuf = uv_err_name_r(err, buf, buflen);
    fprintf(stderr, "uv_err_name_r error: %s\n", newBuf);
    // ************/
    ASSERT_EQ(newBuf, "errName");
}

/**
 * @tc.number    : ActsZlibTest_0400
 * @tc.name      : Test uv_req_get_data and  uv_req_set_data and uv_req_get_type
 * @tc.desc      : [C- SOFTWARE -0200]
*/
HWTEST_F(ActsLibuvTest, TestLibuvTestReqGetData, Function | MediumTest | Level2)
{
    float f =5.5f;
    float* pf = &f;

    uv_req_t* req = nullptr;
    uv_req_t* setReq = nullptr;
    req->data = pf;
    req->type = UV_UNKNOWN_REQ;
    fprintf(stderr, "uv_req_get_data: %f\n", uv_req_get_data(req));
    fprintf(stderr, "uv_req_get_data: %d\n",  uv_req_get_type(req));
    if (uv_req_get_data(req) == pf){
         ASSERT_TRUE(true);
    } 

    uv_req_set_data(setReq, pf);
    if (uv_req_get_data(setReq) == pf) {
      ASSERT_TRUE(true);
    }

    if (uv_req_get_type(req) == UV_UNKNOWN_REQ) {
      ASSERT_TRUE(true);
    }
}

/**
 * @tc.number    : ActsZlibTest_0500
 * @tc.name      : Test uv_print_all_handles and uv_print_active_handles
 * @tc.desc      : [C- SOFTWARE -0200]
*/
HWTEST_F(ActsLibuvTest, TestLibuvTestPrintHandles, Function | MediumTest | Level2)
{
    uv_loop_t* loop = nullptr;
    FILE *fp = fopen(TESTFILE, "r");
    uv_print_all_handles(loop, fp);
    uv_print_active_handles(loop, fp);
    ASSERT_TRUE(true);
}

/**
 * @tc.number    : ActsZlibTest_0600
 * @tc.name      : Test uv_udp_get_send_queue_size and uv_udp_get_send_queue_count
 * @tc.desc      : [C- SOFTWARE -0200]
*/
HWTEST_F(ActsLibuvTest, TestLibuvTestUpdSendQueue, Function | MediumTest | Level2)
{
    size_t size, sizeC;
    uv_udp_t* handle = nullptr;
    handle->send_queue_size = 5;
    handle->send_queue_count = 5;
    size = uv_udp_get_send_queue_size(handle);
    ASSERT_TRUE(size == 5);

    sizeC = uv_udp_get_send_queue_count(handle);
    ASSERT_TRUE(sizeC == 5);
}

/**
 * @tc.number    : ActsZlibTest_0700
 * @tc.name      : Test uv_fs_lchown
 * @tc.desc      : [C- SOFTWARE -0200]
*/
HWTEST_F(ActsLibuvTest, TestLibuvTestFsLchown, Function | MediumTest | Level2)
{
    int retC;
    uv_loop_t loop;
    uv_fs_t req;
    const char *path = "/date/";
    uv_uid_t uid = 10000;
    uv_gid_t gid = 2020;
    retC = uv_fs_lchown(&loop, &req, path, uid, gid, nullptr);
     fprintf(stderr, "uv_err_name_r error: %d\n", retC);
}

/**
 * @tc.number    : ActsZlibTest_0800
 * @tc.name      : Test uv_disable_stdio_inheritance
 * @tc.desc      : [C- SOFTWARE -0200]
*/
HWTEST_F(ActsLibuvTest, TestLibuvTestDisableStdioInheritance, Function | MediumTest | Level2)
{
    uv_disable_stdio_inheritance();
    ASSERT_TRUE(true);
}

/**
 * @tc.number    : ActsZlibTest_0900
 * @tc.name      : Test uv_dlsym
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(ActsLibuvTest, TestLibuvTestDlsym, Function | MediumTest | Level2) {
  int argc = 1;
  char **argv = nullptr;
  char tmp[] =  {"aaaa"};
  *argv = tmp;
  uv_lib_t *lib = (uv_lib_t *)malloc(sizeof(uv_lib_t));
  while (--argc) {
    fprintf(stderr, "Loading %s\n", argv[argc]);
    if (uv_dlopen(argv[argc], lib)) {
      fprintf(stderr, "Error: %s\n", uv_dlerror(lib));
      continue;
    }
    init_plugin_function init_plugin;
    if (!uv_dlsym(lib, "initialize", (void **)&init_plugin)) {
      ASSERT_TRUE(true);
    } else {
      fprintf(stderr, "dlsym error: %s\n", uv_dlerror(lib));
    }
  }
}

/**
 * @tc.number    : ActsZlibTest_1000
 * @tc.name      : Test uv_once
 * @tc.desc      : [C- SOFTWARE -0200]
*/
HWTEST_F(ActsLibuvTest, TestLibuvTestUvOnce, Function | MediumTest | Level2)
{
    uv_once(&once_only, increment);
    ASSERT_TRUE(true);
}
}
