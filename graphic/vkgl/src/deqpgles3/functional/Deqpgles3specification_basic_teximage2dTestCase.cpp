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
#include "../ActsDeqpgles30026TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgba32f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025712 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgba32f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025713 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgba32i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025714 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgba32i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025715 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgba32ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025716 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage2d.rgba32ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025717 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgba16f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025718 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgba16f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025719 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgba16i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025720 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgba16i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025721 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgba16ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025722 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage2d.rgba16ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025723 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.rgba8_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025724 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgba8_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025725 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgba8i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025726 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgba8i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025727 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgba8ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025728 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgba8ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025729 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage2d.srgb8_alpha8_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025730 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.basic_teximage2d.srgb8_alpha8_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025731 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgb10_a2_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025732 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage2d.rgb10_a2_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025733 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage2d.rgb10_a2ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025734 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage2d.rgb10_a2ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025735 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.rgba4_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025736 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgba4_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025737 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgb5_a1_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025738 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgb5_a1_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025739 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage2d.rgba8_snorm_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025740 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage2d.rgba8_snorm_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025741 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.rgb8_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025742 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgb8_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025743 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgb565_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025744 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgb565_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025745 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.basic_teximage2d.r11f_g11f_b10f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025746 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificat"
        "ion.basic_teximage2d.r11f_g11f_b10f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025747 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgb32f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025748 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgb32f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025749 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgb32i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025750 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgb32i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025751 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgb32ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025752 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgb32ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025753 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgb16f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025754 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgb16f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025755 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgb16i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025756 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgb16i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025757 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgb16ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025758 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgb16ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025759 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage2d.rgb8_snorm_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025760 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_teximage2d.rgb8_snorm_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025761 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.rgb8i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025762 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgb8i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025763 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgb8ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025764 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgb8ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025765 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.srgb8_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025766 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.srgb8_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025767 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rgb9_e5_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025768 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rgb9_e5_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025769 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.rg32f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025770 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rg32f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025771 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.rg32i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025772 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rg32i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025773 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rg32ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025774 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rg32ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025775 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.rg16f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025776 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rg16f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025777 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.rg16i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025778 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rg16i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025779 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rg16ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025780 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rg16ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025781 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.basic_teximage2d.rg8_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025782 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.rg8_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025783 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.rg8i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025784 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rg8i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025785 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.rg8ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025786 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.rg8ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025787 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.rg8_snorm_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025788 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage2d.rg8_snorm_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025789 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.r32f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025790 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.r32f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025791 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.r32i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025792 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.r32i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025793 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.r32ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025794 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.r32ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025795 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.r16f_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025796 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.r16f_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025797 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.r16i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025798 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.r16i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025799 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.r16ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025800 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.r16ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025801 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.basic_teximage2d.r8_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025802 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.r8_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025803 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spe"
        "cification.basic_teximage2d.r8i_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025804 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025805, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025805 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.r8i_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025805 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025805 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025806, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025806 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_teximage2d.r8ui_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025806 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025806 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_teximage2d.r8ui_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025807 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_teximage2d.r8_snorm_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025808 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_teximage2d.r8_snorm_cube",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025809 end";
}
