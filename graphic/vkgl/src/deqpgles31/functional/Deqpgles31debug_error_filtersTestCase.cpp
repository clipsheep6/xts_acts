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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310020TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.d"
        "ebug.error_filters.case_0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019849 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.d"
        "ebug.error_filters.case_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019850 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.d"
        "ebug.error_filters.case_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019851 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.d"
        "ebug.error_filters.case_3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019852 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.d"
        "ebug.error_filters.case_4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019853 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.d"
        "ebug.error_filters.case_5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019854 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.d"
        "ebug.error_filters.case_6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019855 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.d"
        "ebug.error_filters.case_7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019856 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.d"
        "ebug.error_filters.case_8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019857 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.d"
        "ebug.error_filters.case_9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019858 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019859 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019860 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019861 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019862 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019863 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019864 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019865 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019866 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019867 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019868 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019869 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019870 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019871 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019872 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019873 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019874 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019875 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019876 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019877 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019878 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019879 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.error_filters.case_31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019880 end";
}
