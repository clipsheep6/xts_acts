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
#include "../ActsDeqpgles310009TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tes"
        "s_coord_component_range.triangles_equal_spacing_ccw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008177 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coor"
        "d_component_range.triangles_equal_spacing_ccw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008178 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tes"
        "s_coord_component_range.triangles_equal_spacing_cw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008179 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coo"
        "rd_component_range.triangles_equal_spacing_cw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008180 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coo"
        "rd_component_range.triangles_fractional_odd_spacing_ccw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008181 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coord_co"
        "mponent_range.triangles_fractional_odd_spacing_ccw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008182 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_co"
        "ord_component_range.triangles_fractional_odd_spacing_cw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008183 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coord_co"
        "mponent_range.triangles_fractional_odd_spacing_cw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008184 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coo"
        "rd_component_range.triangles_fractional_even_spacing_ccw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008185 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coord_com"
        "ponent_range.triangles_fractional_even_spacing_ccw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008186 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coo"
        "rd_component_range.triangles_fractional_even_spacing_cw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008187 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coord_co"
        "mponent_range.triangles_fractional_even_spacing_cw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008188 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.t"
        "ess_coord_component_range.quads_equal_spacing_ccw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008189 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_co"
        "ord_component_range.quads_equal_spacing_ccw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008190 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.t"
        "ess_coord_component_range.quads_equal_spacing_cw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008191 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_c"
        "oord_component_range.quads_equal_spacing_cw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008192 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_c"
        "oord_component_range.quads_fractional_odd_spacing_ccw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008193 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coord_"
        "component_range.quads_fractional_odd_spacing_ccw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008194 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_"
        "coord_component_range.quads_fractional_odd_spacing_cw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008195 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coord_"
        "component_range.quads_fractional_odd_spacing_cw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008196 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_c"
        "oord_component_range.quads_fractional_even_spacing_ccw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008197 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coord_c"
        "omponent_range.quads_fractional_even_spacing_ccw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008198 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_c"
        "oord_component_range.quads_fractional_even_spacing_cw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008199 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coord_"
        "component_range.quads_fractional_even_spacing_cw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008200 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tes"
        "s_coord_component_range.isolines_equal_spacing_ccw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008201 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coo"
        "rd_component_range.isolines_equal_spacing_ccw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008202 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008203, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008203 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.te"
        "ss_coord_component_range.isolines_equal_spacing_cw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008203 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008203 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008204, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008204 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coo"
        "rd_component_range.isolines_equal_spacing_cw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008204 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008204 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008205, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008205 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_co"
        "ord_component_range.isolines_fractional_odd_spacing_ccw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008205 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008205 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008206, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008206 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coord_co"
        "mponent_range.isolines_fractional_odd_spacing_ccw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008206 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008206 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008207, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008207 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_co"
        "ord_component_range.isolines_fractional_odd_spacing_cw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008207 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008207 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coord_c"
        "omponent_range.isolines_fractional_odd_spacing_cw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008208 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coo"
        "rd_component_range.isolines_fractional_even_spacing_ccw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008209 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coord_co"
        "mponent_range.isolines_fractional_even_spacing_ccw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008210 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_co"
        "ord_component_range.isolines_fractional_even_spacing_cw",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008211 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.tess_coord_co"
        "mponent_range.isolines_fractional_even_spacing_cw_point_mode",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008212 end";
}
