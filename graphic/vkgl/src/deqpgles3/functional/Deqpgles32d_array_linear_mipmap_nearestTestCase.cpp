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

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array.lin"
        "ear_mipmap_nearest.less_or_equal_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025640 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array.line"
        "ar_mipmap_nearest.less_or_equal_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025641 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array.lin"
        "ear_mipmap_nearest.less_or_equal_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025642 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array.linea"
        "r_mipmap_nearest.greater_or_equal_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025643 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array.linea"
        "r_mipmap_nearest.greater_or_equal_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025644 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array.line"
        "ar_mipmap_nearest.greater_or_equal_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025645 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array"
        ".linear_mipmap_nearest.less_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025646 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array"
        ".linear_mipmap_nearest.less_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025647 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_arra"
        "y.linear_mipmap_nearest.less_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025648 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array."
        "linear_mipmap_nearest.greater_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025649 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array.l"
        "inear_mipmap_nearest.greater_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025650 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array."
        "linear_mipmap_nearest.greater_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025651 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array"
        ".linear_mipmap_nearest.equal_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025652 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array."
        "linear_mipmap_nearest.equal_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025653 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array"
        ".linear_mipmap_nearest.equal_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025654 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array.l"
        "inear_mipmap_nearest.not_equal_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025655 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array.li"
        "near_mipmap_nearest.not_equal_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025656 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array.l"
        "inear_mipmap_nearest.not_equal_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025657 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array."
        "linear_mipmap_nearest.always_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025658 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array."
        "linear_mipmap_nearest.always_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025659 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array"
        ".linear_mipmap_nearest.always_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025660 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array"
        ".linear_mipmap_nearest.never_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025661 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array."
        "linear_mipmap_nearest.never_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025662 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.shadow.2d_array"
        ".linear_mipmap_nearest.never_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025663 end";
}
