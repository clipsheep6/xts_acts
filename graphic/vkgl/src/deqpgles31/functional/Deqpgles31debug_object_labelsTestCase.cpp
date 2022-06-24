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

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.object_labels.initial",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019913 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.object_labels.clearing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019914 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.ob"
        "ject_labels.specify_with_length",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019915 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.ob"
        "ject_labels.buffer_limited_query",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019916 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug."
        "object_labels.max_label_length",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019917 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.o"
        "bject_labels.query_length_only",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019918 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.d"
        "ebug.object_labels.buffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019919 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.d"
        "ebug.object_labels.shader",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019920 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.object_labels.program",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019921 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.d"
        "ebug.object_labels.query",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019922 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug."
        "object_labels.program_pipeline",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019923 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debug.o"
        "bject_labels.transform_feedback",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019924 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.object_labels.sampler",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019925 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.de"
        "bug.object_labels.texture",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019926 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debu"
        "g.object_labels.renderbuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019927 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.debu"
        "g.object_labels.framebuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019928 end";
}

static HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional."
        "debug.object_labels.sync",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019929 end";
}
