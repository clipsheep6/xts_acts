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
#include "../ActsDeqpgles30032TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color."
        "repeated_clear.blit.tex2d.rgba32i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031964 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color.r"
        "epeated_clear.blit.tex2d.rgba32ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031965 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color."
        "repeated_clear.blit.tex2d.rgba16i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031966 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color.r"
        "epeated_clear.blit.tex2d.rgba16ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031967 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color"
        ".repeated_clear.blit.tex2d.rgba8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031968 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color."
        "repeated_clear.blit.tex2d.rgba8i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031969 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color."
        "repeated_clear.blit.tex2d.rgba8ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031970 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color.rep"
        "eated_clear.blit.tex2d.srgb8_alpha8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031971 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color.r"
        "epeated_clear.blit.tex2d.rgb10_a2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031972 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color.re"
        "peated_clear.blit.tex2d.rgb10_a2ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031973 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color"
        ".repeated_clear.blit.tex2d.rgba4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031974 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color."
        "repeated_clear.blit.tex2d.rgb5_a1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031975 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color"
        ".repeated_clear.blit.tex2d.rgb8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031976 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color."
        "repeated_clear.blit.tex2d.rgb565",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031977 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color"
        ".repeated_clear.blit.tex2d.rg32i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031978 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color."
        "repeated_clear.blit.tex2d.rg32ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031979 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color"
        ".repeated_clear.blit.tex2d.rg16i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031980 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color."
        "repeated_clear.blit.tex2d.rg16ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031981 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.colo"
        "r.repeated_clear.blit.tex2d.rg8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031982 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color"
        ".repeated_clear.blit.tex2d.rg8i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031983 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color"
        ".repeated_clear.blit.tex2d.rg8ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031984 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color"
        ".repeated_clear.blit.tex2d.r32i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031985 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color"
        ".repeated_clear.blit.tex2d.r32ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031986 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color"
        ".repeated_clear.blit.tex2d.r16i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031987 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color"
        ".repeated_clear.blit.tex2d.r16ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031988 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.colo"
        "r.repeated_clear.blit.tex2d.r8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031989 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.colo"
        "r.repeated_clear.blit.tex2d.r8i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031990 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color"
        ".repeated_clear.blit.tex2d.r8ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031991 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color."
        "repeated_clear.blit.tex2d.rgba32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031992 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color."
        "repeated_clear.blit.tex2d.rgba16f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031993 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color.repe"
        "ated_clear.blit.tex2d.r11f_g11f_b10f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031994 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color"
        ".repeated_clear.blit.tex2d.rg32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031995 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color"
        ".repeated_clear.blit.tex2d.rg16f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031996 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color"
        ".repeated_clear.blit.tex2d.r32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031997 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color"
        ".repeated_clear.blit.tex2d.r16f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031998 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.color."
        "repeated_clear.blit.tex2d.rgb16f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031999 end";
}
