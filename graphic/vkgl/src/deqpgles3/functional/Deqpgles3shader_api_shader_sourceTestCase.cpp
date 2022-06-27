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
#include "../ActsDeqpgles30042TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.s"
        "hader_source.replace_source_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041872 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.sh"
        "ader_source.replace_source_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041873 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_so"
        "urce.split_source_2_null_terminated_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041874 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_sou"
        "rce.split_source_2_null_terminated_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041875 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_so"
        "urce.split_source_4_null_terminated_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041876 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_sou"
        "rce.split_source_4_null_terminated_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041877 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_so"
        "urce.split_source_8_null_terminated_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041878 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_sou"
        "rce.split_source_8_null_terminated_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041879 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_so"
        "urce.split_source_2_specify_lengths_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041880 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_sou"
        "rce.split_source_2_specify_lengths_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041881 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_so"
        "urce.split_source_4_specify_lengths_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041882 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_sou"
        "rce.split_source_4_specify_lengths_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041883 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_so"
        "urce.split_source_8_specify_lengths_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041884 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_sou"
        "rce.split_source_8_specify_lengths_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041885 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_sourc"
        "e.split_source_2_random_negative_length_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041886 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_source"
        ".split_source_2_random_negative_length_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041887 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_sourc"
        "e.split_source_4_random_negative_length_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041888 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_source"
        ".split_source_4_random_negative_length_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041889 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_sourc"
        "e.split_source_8_random_negative_length_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041890 end";
}

static HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader_api.shader_source"
        ".split_source_8_random_negative_length_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30042TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30042TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30042TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30042TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30042TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041891 end";
}
