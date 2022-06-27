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
#include "../ActsDeqpgles30001TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepr"
        "ocessor.recursion.recursion_1_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000888 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepro"
        "cessor.recursion.recursion_1_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000889 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepr"
        "ocessor.recursion.recursion_2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000890 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepro"
        "cessor.recursion.recursion_2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000891 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepr"
        "ocessor.recursion.recursion_3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000892 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepro"
        "cessor.recursion.recursion_3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000893 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepr"
        "ocessor.recursion.recursion_4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000894 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepro"
        "cessor.recursion.recursion_4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000895 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepr"
        "ocessor.recursion.recursion_5_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000896 end";
}

static HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.prepro"
        "cessor.recursion.recursion_5_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000897 end";
}
