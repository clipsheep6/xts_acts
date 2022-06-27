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
#include "../ActsDeqpgles30028TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fra"
        "gment_ops.depth.cmp_always",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027668 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fra"
        "gment_ops.depth.cmp_never",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027669 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fra"
        "gment_ops.depth.cmp_equal",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027670 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragm"
        "ent_ops.depth.cmp_not_equal",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027671 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragm"
        "ent_ops.depth.cmp_less_than",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027672 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragmen"
        "t_ops.depth.cmp_less_or_equal",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027673 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragme"
        "nt_ops.depth.cmp_greater_than",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027674 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fragment"
        "_ops.depth.cmp_greater_or_equal",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027675 end";
}
