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
#include "../ActsDeqpgles30009TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.bitwise_and.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008864 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008865 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008866 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008867 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.lowp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008868 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.lowp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008869 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.mediump_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008870 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.mediump_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008871 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.lowp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008872 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.lowp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008873 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.mediump_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008874 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.mediump_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008875 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.lowp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008876 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.lowp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008877 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.mediump_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008878 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.mediump_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008879 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.bitwise_and.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008880 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008881 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.highp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008882 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.highp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008883 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.highp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008884 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.highp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008885 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.highp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008886 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.highp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008887 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.bitwise_and.lowp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008888 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.lowp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008889 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.mediump_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008890 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.mediump_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008891 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.lowp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008892 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.lowp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008893 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.mediump_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008894 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.mediump_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008895 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.lowp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008896 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.lowp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008897 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.mediump_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008898 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.mediump_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008899 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.lowp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008900 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.lowp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008901 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.mediump_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008902 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.mediump_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008903 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008904, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008904 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.highp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008904 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008904 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008905, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008905 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.highp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008905 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008905 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.highp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008906 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008907, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008907 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.highp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008907 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008907 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008908, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008908 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.highp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008908 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008908 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008909, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008909 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.highp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008909 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008909 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.bitwise_and.highp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008910 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.bitwise_and.highp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008911 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.lowp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008912 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.lowp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008913 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.mediump_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008914 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.mediump_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008915 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.lowp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008916 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.lowp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008917 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.mediump_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008918 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.mediump_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008919 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.lowp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008920 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.lowp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008921 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.mediump_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008922 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.mediump_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008923 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.highp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008924 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.highp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008925 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.highp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008926 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.highp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008927 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.highp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008928 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.highp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008929 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.lowp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008930 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.lowp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008931 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.mediump_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008932 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.bitwise_and.mediump_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008933 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.lowp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008934 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.lowp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008935 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.mediump_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008936 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.bitwise_and.mediump_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008937 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.lowp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008938 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.lowp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008939 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.mediump_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008940 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.bitwise_and.mediump_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008941 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.highp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008942 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.highp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008943 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.highp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008944 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.highp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008945 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.highp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008946 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.highp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008947 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.lowp_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008948 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.lowp_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008949 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.mediump_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008950 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.mediump_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008951 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.lowp_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008952 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008953, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008953 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.lowp_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008953 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008953 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008954, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008954 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.mediump_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008954 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008954 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008955, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008955 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.mediump_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008955 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008955 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.lowp_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008956 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.lowp_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008957 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.mediump_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008958 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.mediump_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008959 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.highp_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008960 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.highp_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008961 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.highp_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008962 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.highp_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008963 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.highp_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008964 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.highp_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008965 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.lowp_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008966 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.lowp_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008967 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.mediump_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008968 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.bitwise_and.mediump_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008969 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.lowp_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008970 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.lowp_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008971 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.mediump_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008972 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.bitwise_and.mediump_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008973 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binar"
        "y_operator.bitwise_and.lowp_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008974 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.lowp_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008975 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.mediump_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008976 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.bitwise_and.mediump_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008977 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.highp_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008978 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.highp_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008979 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.highp_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008980 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.highp_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008981 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary"
        "_operator.bitwise_and.highp_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008982 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_"
        "operator.bitwise_and.highp_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008983 end";
}
