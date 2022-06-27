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

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgba32f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022223 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.rgba32f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022224 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgba32i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022225 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.rgba32i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022226 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.rgba32ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022227 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.rgba32ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022228 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgba16f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022229 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.rgba16f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022230 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022231, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022231 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgba16i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022231 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022231 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.rgba16i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022232 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022233, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022233 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.rgba16ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022233 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022233 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022234, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022234 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.rgba16ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022234 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022234 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.rgba8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022235 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022236, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022236 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgba8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022236 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022236 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022237, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022237 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgba8i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022237 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022237 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022238, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022238 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgba8i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022238 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022238 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgba8ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022239 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.rgba8ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022240 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022241, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022241 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.f"
        "ormat.sized.3d.srgb8_alpha8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022241 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022241 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022242, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022242 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.f"
        "ormat.sized.3d.srgb8_alpha8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022242 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022242 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022243, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022243 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.srgb_r8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022243 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022243 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.srgb_r8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022244 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.srgb_rg8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022245 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.srgb_rg8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022246 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.rgb10_a2_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022247 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.rgb10_a2_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022248 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "format.sized.3d.rgb10_a2ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022249 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "format.sized.3d.rgb10_a2ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022250 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.rgba4_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022251 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgba4_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022252 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb5_a1_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022253 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.rgb5_a1_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022254 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "format.sized.3d.rgba8_snorm_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022255 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.f"
        "ormat.sized.3d.rgba8_snorm_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022256 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.rgb8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022257 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.rgb8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022258 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb565_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022259 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb565_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022260 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.fo"
        "rmat.sized.3d.r11f_g11f_b10f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022261 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.fo"
        "rmat.sized.3d.r11f_g11f_b10f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022262 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb32f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022263 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb32f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022264 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb32i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022265 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb32i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022266 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb32ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022267 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.rgb32ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022268 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb16f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022269 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb16f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022270 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb16i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022271 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb16i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022272 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb16ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022273 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.rgb16ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022274 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "format.sized.3d.rgb8_snorm_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022275 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "format.sized.3d.rgb8_snorm_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022276 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.rgb8i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022277 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb8i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022278 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb8ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022279 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb8ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022280 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.srgb8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022281 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.srgb8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022282 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rgb9_e5_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022283 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.rgb9_e5_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022284 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.rg32f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022285 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rg32f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022286 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.rg32i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022287 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rg32i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022288 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rg32ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022289 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rg32ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022290 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.rg16f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022291 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rg16f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022292 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.rg16i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022293 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rg16i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022294 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rg16ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022295 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rg16ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022296 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.format.sized.3d.rg8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022297 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.rg8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022298 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.rg8i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022299 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.rg8i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022300 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.rg8ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022301 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.rg8ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022302 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.rg8_snorm_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022303 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "format.sized.3d.rg8_snorm_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022304 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.r32f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022305 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.r32f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022306 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.r32i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022307 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.r32i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022308 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.r32ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022309 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.r32ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022310 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.r16f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022311 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.r16f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022312 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.r16i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022313 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.r16i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022314 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.r16ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022315 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.3d.r16ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022316 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.format.sized.3d.r8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022317 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.format.sized.3d.r8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022318 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.format.sized.3d.r8i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022319 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.r8i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022320 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.r8ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022321 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.3d.r8ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022322 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.r8_snorm_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022323 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.3d.r8_snorm_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022324 end";
}
