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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20017TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vert"
        "ex.clip_three.clip_neg_x_and_pos_x_and_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016039 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vert"
        "ex.clip_three.clip_neg_x_and_pos_x_and_neg_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016040 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_neg_x_and_pos_x_and_neg_x_neg_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016041 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_neg_x_and_pos_x_and_pos_x_neg_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016042 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_neg_x_and_pos_x_and_pos_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016043 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_neg_x_and_pos_x_and_neg_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016044 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_neg_x_and_pos_x_and_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016045 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_neg_x_and_pos_x_and_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016046 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_neg_x_and_pos_x_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016047 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_neg_x_and_pos_x_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016048 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_x_and_pos_x_and_neg_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016049 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_x_and_pos_x_and_pos_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016050 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_x_and_pos_x_and_pos_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016051 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_x_and_pos_x_and_neg_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016052 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_x_and_pos_x_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016053 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_x_and_pos_x_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016054 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_x_and_pos_x_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016055 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_x_and_pos_x_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016056 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vert"
        "ex.clip_three.clip_neg_x_and_pos_y_and_neg_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016057 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_neg_x_and_pos_y_and_pos_x_neg_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016058 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_neg_x_and_neg_y_and_pos_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016059 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_x_and_neg_x_neg_y_and_pos_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016060 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_x_and_pos_x_neg_y_and_pos_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016061 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_x_and_pos_x_neg_y_and_neg_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016062 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_x_and_neg_y_neg_z_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016063 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_and_neg_y_neg_z_and_pos_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016064 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_x_and_pos_y_neg_z_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016065 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_and_pos_y_neg_z_and_pos_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016066 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_and_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016067 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_and_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016068 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016069 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_and_pos_x_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016070 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016071 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016072 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_and_pos_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016073 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016074 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vert"
        "ex.clip_three.clip_pos_x_and_pos_y_and_neg_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016075 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_pos_x_and_pos_y_and_neg_x_neg_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016076 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_pos_x_and_neg_y_and_neg_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016077 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_x_and_neg_x_neg_y_and_pos_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016078 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_x_and_neg_x_neg_y_and_neg_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016079 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_x_and_pos_x_neg_y_and_neg_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016080 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_x_and_neg_y_neg_z_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016081 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_and_neg_y_neg_z_and_neg_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016082 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_x_and_pos_y_neg_z_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016083 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_and_pos_y_neg_z_and_neg_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016084 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_and_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016085 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_and_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016086 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016087 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_and_neg_x_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016088 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016089 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016090, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016090 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016090 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016090 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016091, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016091 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_and_neg_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016091 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016091 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016092, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016092 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016092 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016092 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016093, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016093 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_pos_y_and_neg_y_and_neg_x_neg_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016093 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016093 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016094, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016094 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_pos_y_and_neg_y_and_pos_x_neg_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016094 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016094 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016095, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016095 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_pos_y_and_neg_y_and_pos_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016095 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016095 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016096, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016096 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_pos_y_and_neg_y_and_neg_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016096 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016096 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016097, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016097 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_pos_y_and_neg_y_and_neg_x_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016097 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016097 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016098, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016098 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_pos_y_and_neg_y_and_pos_x_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016098 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016098 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016099, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016099 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_pos_y_and_neg_y_and_pos_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016099 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016099 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016100, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016100 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex."
        "clip_three.clip_pos_y_and_neg_y_and_neg_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016100 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016100 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016101, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016101 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_y_and_neg_y_and_neg_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016101 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016101 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016102, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016102 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_y_and_neg_y_and_pos_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016102 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016102 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016103, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016103 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_y_and_neg_y_and_pos_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016103 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016103 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016104, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016104 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_y_and_neg_y_and_neg_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016104 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016104 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016105, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016105 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_y_and_neg_y_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016105 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016105 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016106, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016106 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_y_and_neg_y_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016106 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016106 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016107, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016107 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_y_and_neg_y_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016107 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016107 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016108, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016108 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_y_and_neg_y_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016108 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016108 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016109, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016109 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_y_and_neg_x_neg_y_and_pos_x_neg_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016109 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016109 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016110, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016110 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_y_and_neg_x_neg_y_and_pos_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016110 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016110 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016111, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016111 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_y_and_pos_x_neg_y_and_neg_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016111 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016111 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016112, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016112 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_y_and_neg_x_neg_z_and_pos_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016112 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016112 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016113, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016113 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_y_and_neg_x_neg_z_and_pos_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016113 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016113 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016114, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016114 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_pos_y_and_pos_x_neg_z_and_neg_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016114 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016114 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016115, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016115 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_y_and_pos_x_neg_z_and_neg_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016115 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016115 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016116, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016116 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_y_and_pos_x_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016116 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016116 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016117, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016117 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_y_and_neg_x_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016117 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016117 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016118, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016118 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_y_and_neg_x_neg_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016118 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016118 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016119, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016119 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_y_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016119 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016119 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016120, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016120 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_y_and_pos_x_neg_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016120 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016120 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016121, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016121 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_y_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016121 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016121 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016122, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016122 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_y_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016122 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016122 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016123, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016123 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_y_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016123 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016123 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016124, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016124 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_y_and_neg_x_neg_y_and_pos_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016124 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016124 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016125, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016125 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_y_and_pos_x_neg_y_and_neg_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016125 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016125 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016126, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016126 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_y_and_pos_x_pos_y_and_neg_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016126 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016126 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016127, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016127 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_y_and_neg_x_neg_z_and_pos_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016127 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016127 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016128, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016128 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_y_and_neg_x_neg_z_and_pos_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016128 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016128 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016129, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016129 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.cli"
        "p_three.clip_neg_y_and_pos_x_neg_z_and_neg_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016129 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016129 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016130, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016130 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_y_and_pos_x_neg_z_and_neg_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016130 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016130 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016131, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016131 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_y_and_pos_x_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016131 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016131 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016132, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016132 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_y_and_neg_x_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016132 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016132 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016133, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016133 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_y_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016133 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016133 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016134, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016134 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_y_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016134 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016134 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016135, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016135 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_y_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016135 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016135 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016136, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016136 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_y_and_pos_x_pos_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016136 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016136 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016137, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016137 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_y_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016137 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016137 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016138, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016138 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_y_and_neg_x_pos_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016138 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016138 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_pos_x_neg_y_and_pos_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016139 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_pos_x_neg_y_and_neg_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016140 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016141, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016141 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016141 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016141 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016142, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016142 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_x_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016142 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016142 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_x_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016143 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016144 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016145 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016146 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016147 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016148 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016149 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016150 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016151 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_neg_y_and_pos_x_pos_y_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016152 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_neg_y_and_pos_x_pos_y_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016153 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_neg_x_neg_z_and_pos_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016154 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_pos_x_neg_z_and_neg_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016155 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_pos_x_neg_z_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016156 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_pos_x_pos_z_and_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016157 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_neg_y_neg_z_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016158 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_y_and_pos_y_neg_z_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016159 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_x_neg_y_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016160 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_x_neg_y_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016161 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_y_and_pos_x_pos_y_and_neg_x_pos_y",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016162 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_x_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016163 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_x_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016164 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016165 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016166 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016167 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016168 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016169 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016170 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016171 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016172 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_neg_y_and_neg_x_pos_y_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016173 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_neg_y_and_neg_x_pos_y_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016174 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_y_and_neg_x_neg_z_and_pos_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016175 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_y_and_neg_x_neg_z_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016176 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_y_and_pos_x_neg_z_and_neg_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016177 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_y_and_neg_x_pos_z_and_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016178 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_y_and_neg_y_neg_z_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016179 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_y_and_pos_y_neg_z_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016180 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_x_neg_y_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016181 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_x_neg_y_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016182 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_pos_y_and_neg_x_neg_z_and_pos_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016183 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_pos_y_and_neg_x_neg_z_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016184 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_pos_y_and_pos_x_neg_z_and_neg_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016185 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_pos_y_and_neg_x_pos_z_and_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016186 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_pos_y_and_neg_y_neg_z_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016187 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_pos_y_and_pos_y_neg_z_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016188 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_x_pos_y_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016189 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_x_pos_y_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016190 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_pos_y_and_neg_x_neg_z_and_pos_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016191 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_pos_y_and_pos_x_neg_z_and_neg_x_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016192 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_pos_y_and_pos_x_neg_z_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016193 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_pos_y_and_pos_x_pos_z_and_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016194 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_pos_y_and_neg_y_neg_z_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016195 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_pos_y_and_pos_y_neg_z_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016196 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_x_pos_y_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016197 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_x_pos_y_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016198 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016199 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016200 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016201 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016202 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016203, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016203 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016203 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016203 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016204, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016204 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016204 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016204 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016205, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016205 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016205 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016205 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016206, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016206 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016206 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016206 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016207, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016207 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016207 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016207 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016208 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016209 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_x_neg_z_and_pos_x_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016210 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_z_and_neg_y_neg_z_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016211 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_neg_z_and_pos_y_neg_z_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016212 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_x_neg_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016213 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_x_neg_z_and_pos_x_neg_y_pos_z_and_pos_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016214 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_x_neg_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016215 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_x_neg_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016216 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_x_neg_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016217 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016218 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016219 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016220 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016221 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016222 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016223 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016224 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016225 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016226 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016227 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016228 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_x_neg_z_and_neg_x_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016229 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_z_and_neg_y_neg_z_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016230 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016231, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016231 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_neg_z_and_pos_y_neg_z_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016231 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016231 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_x_neg_z_and_neg_x_neg_y_pos_z_and_neg_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016232 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016233, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016233 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_x_neg_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016233 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016233 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016234, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016234 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_x_neg_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016234 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016234 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_x_neg_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016235 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016236, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016236 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_x_neg_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016236 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016236 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016237, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016237 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_pos_z_and_neg_y_neg_z_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016237 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016237 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016238, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016238 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_pos_x_pos_z_and_pos_y_neg_z_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016238 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016238 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_x_pos_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016239 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_x_pos_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016240 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016241, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016241 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_x_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016241 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016241 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016242, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016242 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_x_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016242 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016242 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016243, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016243 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_x_pos_z_and_neg_x_neg_y_neg_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016243 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016243 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_pos_z_and_neg_y_neg_z_and_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016244 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_t"
        "hree.clip_neg_x_pos_z_and_pos_y_neg_z_and_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016245 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_x_pos_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016246 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_x_pos_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016247 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_x_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016248 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_x_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016249 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_x_pos_z_and_pos_x_neg_y_neg_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016250 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_neg_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016251 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_pos_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016252 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_pos_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016253 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_neg_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016254 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016255 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016256 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016257 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_neg_y_neg_z_and_pos_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016258 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_y_neg_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016259 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_y_neg_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016260 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_y_neg_z_and_pos_x_pos_y_pos_z_and_neg_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016261 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_y_neg_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016262 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_y_neg_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016263 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_neg_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016264 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_pos_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016265 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_pos_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016266 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_neg_x_pos_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016267 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016268 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016269 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016270 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_thre"
        "e.clip_pos_y_neg_z_and_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016271 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_y_neg_z_and_neg_x_neg_y_pos_z_and_pos_x_neg_y_pos_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016272 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_y_neg_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016273 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_y_neg_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016274 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_y_neg_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016275 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_y_neg_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016276 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_y_pos_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016277 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_y_pos_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016278 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_y_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016279 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_y_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016280 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_pos_y_pos_z_and_neg_x_neg_y_neg_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016281 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_y_pos_z_and_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016282 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_y_pos_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016283 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_y_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016284 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_y_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016285 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.c"
        "lip_neg_y_pos_z_and_pos_x_pos_y_neg_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016286 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
        "_neg_x_neg_y_pos_z_and_pos_x_neg_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016287 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
        "_neg_x_neg_y_pos_z_and_pos_x_neg_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016288 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
        "_neg_x_neg_y_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016289 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
        "_neg_x_neg_y_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016290 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
        "_neg_x_neg_y_pos_z_and_pos_x_neg_y_neg_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016291 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
        "_neg_x_neg_y_pos_z_and_pos_x_pos_y_neg_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016292 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
        "_pos_x_neg_y_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016293 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
        "_pos_x_neg_y_pos_z_and_pos_x_pos_y_pos_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016294 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
        "_pos_x_neg_y_pos_z_and_neg_x_neg_y_neg_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016295 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
        "_pos_x_neg_y_pos_z_and_pos_x_pos_y_neg_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016296 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
        "_pos_x_pos_y_pos_z_and_neg_x_pos_y_pos_z_and_neg_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016297 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
        "_pos_x_pos_y_pos_z_and_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016298 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
        "_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016299 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
        "_pos_x_pos_y_pos_z_and_neg_x_neg_y_neg_z_and_neg_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016300 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
        "_neg_x_pos_y_pos_z_and_neg_x_neg_y_neg_z_and_pos_x_neg_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016301 end";
}

static HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES2.functional.clipping.triangle_vertex.clip_three.clip"
        "_neg_x_pos_y_pos_z_and_pos_x_neg_y_neg_z_and_pos_x_pos_y_neg_z",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles20017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles20017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles20017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles20017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles20017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016302 end";
}
