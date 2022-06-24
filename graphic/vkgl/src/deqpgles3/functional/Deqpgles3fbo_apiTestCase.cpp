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

#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30031TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "api.valid_tex2d_attachments",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030842 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.a"
        "pi.valid_texcube_attachments",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030843 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".api.valid_rbo_attachments",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030844 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".api.attach_to_default_fbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030845 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.a"
        "pi.invalid_tex2d_attachments",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030846 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.ap"
        "i.invalid_texcube_attachments",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030847 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "api.invalid_rbo_attachments",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030848 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional"
        ".fbo.api.attach_names",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030849 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional."
        "fbo.api.texture_levels",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030850 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.api"
        ".attachment_query_default_fbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030851 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.ap"
        "i.attachment_query_empty_fbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030852 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "api.attachment_query_tex2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030853 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.a"
        "pi.attachment_query_texcube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030854 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".api.attachment_query_rbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030855 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.api.de"
        "lete_tex_2d_attached_to_bound_fbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030856 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.api.del"
        "ete_tex_cube_attached_to_bound_fbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030857 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.api.d"
        "elete_rbo_attached_to_bound_fbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030858 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.api.dele"
        "te_tex_2d_attached_to_not_bound_fbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030859 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.api.delet"
        "e_tex_cube_attached_to_not_bound_fbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030860 end";
}

static HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_030861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.api.del"
        "ete_rbo_attached_to_not_bound_fbo",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30031TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30031TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30031TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30031TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30031TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_030861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_030861 end";
}
