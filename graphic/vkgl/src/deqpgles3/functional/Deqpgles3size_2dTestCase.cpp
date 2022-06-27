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
#include "../ActsDeqpgles30023TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.t"
        "exture.size.2d.64x64_l8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022369 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.size.2d.64x64_l8_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022370 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.size.2d.64x64_rgba4444",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022371 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".size.2d.64x64_rgba4444_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022372 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.tex"
        "ture.size.2d.64x64_rgb888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022373 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.size.2d.64x64_rgb888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022374 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.size.2d.64x64_rgba8888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022375 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".size.2d.64x64_rgba8888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022376 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.t"
        "exture.size.2d.65x63_l8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022377 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.size.2d.65x63_rgba4444",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022378 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.tex"
        "ture.size.2d.65x63_rgb888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022379 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.size.2d.65x63_rgba8888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022380 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.te"
        "xture.size.2d.512x512_l8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022381 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.size.2d.512x512_l8_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022382 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.size.2d.512x512_rgba4444",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022383 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "size.2d.512x512_rgba4444_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022384 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.size.2d.512x512_rgb888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022385 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".size.2d.512x512_rgb888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022386 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.size.2d.512x512_rgba8888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022387 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "size.2d.512x512_rgba8888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022388 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.tex"
        "ture.size.2d.1024x1024_l8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022389 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.size.2d.1024x1024_l8_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022390 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.size.2d.1024x1024_rgba4444",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022391 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.s"
        "ize.2d.1024x1024_rgba4444_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022392 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.size.2d.1024x1024_rgb888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022393 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "size.2d.1024x1024_rgb888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022394 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.size.2d.1024x1024_rgba8888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022395 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.s"
        "ize.2d.1024x1024_rgba8888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022396 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.tex"
        "ture.size.2d.2048x2048_l8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022397 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.size.2d.2048x2048_l8_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022398 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.size.2d.2048x2048_rgba4444",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022399 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.s"
        "ize.2d.2048x2048_rgba4444_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022400 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.size.2d.2048x2048_rgb888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022401 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "size.2d.2048x2048_rgb888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022402 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.size.2d.2048x2048_rgba8888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022403 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.s"
        "ize.2d.2048x2048_rgba8888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022404 end";
}
