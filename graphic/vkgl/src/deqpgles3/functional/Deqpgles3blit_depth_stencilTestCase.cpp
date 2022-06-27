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
#include "../ActsDeqpgles30033TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.blit.dep"
        "th_stencil.depth_component32f_basic",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032553 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.blit.dep"
        "th_stencil.depth_component32f_scale",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032554 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.blit.dep"
        "th_stencil.depth_component24_basic",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032555 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.blit.dep"
        "th_stencil.depth_component24_scale",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032556 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.blit.dep"
        "th_stencil.depth_component16_basic",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032557 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.blit.dep"
        "th_stencil.depth_component16_scale",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032558 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.blit.dep"
        "th_stencil.depth32f_stencil8_basic",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032559 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.blit.dep"
        "th_stencil.depth32f_stencil8_scale",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032560 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.blit.depth"
        "_stencil.depth32f_stencil8_depth_only",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032561 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.blit.depth_"
        "stencil.depth32f_stencil8_stencil_only",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032562 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.blit.de"
        "pth_stencil.depth24_stencil8_basic",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032563 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.blit.de"
        "pth_stencil.depth24_stencil8_scale",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032564 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.blit.depth"
        "_stencil.depth24_stencil8_depth_only",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032565 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.blit.depth_"
        "stencil.depth24_stencil8_stencil_only",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032566 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.blit.d"
        "epth_stencil.stencil_index8_basic",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032567 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.blit.d"
        "epth_stencil.stencil_index8_scale",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032568 end";
}
