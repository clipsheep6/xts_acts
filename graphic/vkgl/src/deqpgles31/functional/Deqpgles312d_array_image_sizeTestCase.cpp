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
#include "../ActsDeqpgles310012TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_stor"
        "e.2d_array.image_size.readonly_32x32x32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011819 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_stor"
        "e.2d_array.image_size.readonly_12x34x56",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011820 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_sto"
        "re.2d_array.image_size.readonly_1x1x1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011821 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_sto"
        "re.2d_array.image_size.readonly_7x1x1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011822 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_store"
        ".2d_array.image_size.writeonly_32x32x32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011823 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_store"
        ".2d_array.image_size.writeonly_12x34x56",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011824 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_sto"
        "re.2d_array.image_size.writeonly_1x1x1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011825 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_sto"
        "re.2d_array.image_size.writeonly_7x1x1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011826 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_store.2d_"
        "array.image_size.readonly_writeonly_32x32x32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011827 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_store.2d_"
        "array.image_size.readonly_writeonly_12x34x56",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011828 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_store.2d"
        "_array.image_size.readonly_writeonly_1x1x1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011829 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_store.2d"
        "_array.image_size.readonly_writeonly_7x1x1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011830 end";
}
