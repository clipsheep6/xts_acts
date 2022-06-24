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
#include "../ActsDeqpgles30022TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgba32f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021887 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.rgba32f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021888 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgba32i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021889 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.rgba32i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021890 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.rgba32ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021891 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.rgba32ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021892 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgba16f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021893 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.rgba16f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021894 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgba16i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021895 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.rgba16i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021896 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.rgba16ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021897 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.rgba16ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021898 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.rgba8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021899 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgba8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021900 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgba8i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021901 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgba8i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021902 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgba8ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021903 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021904, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021904 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.rgba8ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021904 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021904 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021905, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021905 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.f"
        "ormat.sized.2d.srgb8_alpha8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021905 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021905 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.f"
        "ormat.sized.2d.srgb8_alpha8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021906 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021907, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021907 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.srgb_r8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021907 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021907 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021908, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021908 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.srgb_r8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021908 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021908 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021909, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021909 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.srgb_rg8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021909 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021909 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.srgb_rg8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021910 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.rgb10_a2_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021911 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.rgb10_a2_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021912 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "format.sized.2d.rgb10_a2ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021913 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "format.sized.2d.rgb10_a2ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021914 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.rgba4_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021915 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgba4_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021916 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb5_a1_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021917 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.rgb5_a1_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021918 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "format.sized.2d.rgba8_snorm_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021919 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.f"
        "ormat.sized.2d.rgba8_snorm_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021920 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.rgb8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021921 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.rgb8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021922 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb565_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021923 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb565_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021924 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.fo"
        "rmat.sized.2d.r11f_g11f_b10f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021925 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.fo"
        "rmat.sized.2d.r11f_g11f_b10f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021926 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb32f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021927 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb32f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021928 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb32i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021929 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb32i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021930 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb32ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021931 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.rgb32ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021932 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb16f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021933 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb16f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021934 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb16i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021935 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb16i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021936 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb16ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021937 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.rgb16ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021938 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "format.sized.2d.rgb8_snorm_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021939 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "format.sized.2d.rgb8_snorm_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021940 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.rgb8i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021941 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb8i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021942 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb8ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021943 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb8ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021944 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.srgb8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021945 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.srgb8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021946 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rgb9_e5_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021947 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.rgb9_e5_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021948 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.rg32f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021949 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rg32f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021950 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.rg32i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021951 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rg32i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021952 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021953, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021953 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rg32ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021953 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021953 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021954, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021954 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rg32ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021954 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021954 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021955, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021955 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.rg16f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021955 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021955 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rg16f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021956 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.rg16i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021957 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rg16i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021958 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rg16ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021959 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rg16ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021960 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.format.sized.2d.rg8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021961 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.rg8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021962 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.rg8i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021963 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.rg8i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021964 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.rg8ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021965 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.rg8ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021966 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.rg8_snorm_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021967 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "format.sized.2d.rg8_snorm_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021968 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.r32f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021969 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.r32f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021970 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.r32i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021971 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.r32i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021972 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.r32ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021973 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.r32ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021974 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.r16f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021975 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.r16f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021976 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.r16i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021977 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.r16i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021978 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.r16ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021979 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.format.sized.2d.r16ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021980 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.format.sized.2d.r8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021981 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.format.sized.2d.r8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021982 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.format.sized.2d.r8i_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021983 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.r8i_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021984 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.r8ui_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021985 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.format.sized.2d.r8ui_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021986 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.r8_snorm_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021987 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.sized.2d.r8_snorm_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021988 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.form"
        "at.sized.2d.depth_component32f_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021989 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.form"
        "at.sized.2d.depth_component32f_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021990 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.for"
        "mat.sized.2d.depth_component24_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021991 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.form"
        "at.sized.2d.depth_component24_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021992 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.for"
        "mat.sized.2d.depth_component16_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021993 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.form"
        "at.sized.2d.depth_component16_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021994 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.for"
        "mat.sized.2d.depth32f_stencil8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021995 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.form"
        "at.sized.2d.depth32f_stencil8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021996 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.for"
        "mat.sized.2d.depth24_stencil8_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021997 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.for"
        "mat.sized.2d.depth24_stencil8_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021998 end";
}
