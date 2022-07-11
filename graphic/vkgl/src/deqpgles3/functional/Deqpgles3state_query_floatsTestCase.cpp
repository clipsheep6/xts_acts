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

<<<<<<< HEAD
#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30043TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30043TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_042981_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042981_2 "ry.floats.depth_range_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042981, VkglTestCase_042981_1, VkglTestCase_042981_2);

#define VkglTestCase_042982_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042982_2 "ry.floats.depth_range_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042982, VkglTestCase_042982_1, VkglTestCase_042982_2);

#define VkglTestCase_042983_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042983_2 "y.floats.depth_range_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042983, VkglTestCase_042983_1, VkglTestCase_042983_2);

#define VkglTestCase_042984_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_042984_2 "ery.floats.depth_range_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042984, VkglTestCase_042984_1, VkglTestCase_042984_2);

#define VkglTestCase_042985_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042985_2 "ry.floats.line_width_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042985, VkglTestCase_042985_1, VkglTestCase_042985_2);

#define VkglTestCase_042986_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042986_2 "ry.floats.line_width_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042986, VkglTestCase_042986_1, VkglTestCase_042986_2);

#define VkglTestCase_042987_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042987_2 "y.floats.line_width_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042987, VkglTestCase_042987_1, VkglTestCase_042987_2);

#define VkglTestCase_042988_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_042988_2 "ery.floats.line_width_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042988, VkglTestCase_042988_1, VkglTestCase_042988_2);

#define VkglTestCase_042989_1 "dEQP-GLES3.functional.state_query.fl"
#define VkglTestCase_042989_2 "oats.polygon_offset_factor_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042989, VkglTestCase_042989_1, VkglTestCase_042989_2);

#define VkglTestCase_042990_1 "dEQP-GLES3.functional.state_query.fl"
#define VkglTestCase_042990_2 "oats.polygon_offset_factor_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042990, VkglTestCase_042990_1, VkglTestCase_042990_2);

#define VkglTestCase_042991_1 "dEQP-GLES3.functional.state_query.flo"
#define VkglTestCase_042991_2 "ats.polygon_offset_factor_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042991, VkglTestCase_042991_1, VkglTestCase_042991_2);

#define VkglTestCase_042992_1 "dEQP-GLES3.functional.state_query.f"
#define VkglTestCase_042992_2 "loats.polygon_offset_factor_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042992, VkglTestCase_042992_1, VkglTestCase_042992_2);

#define VkglTestCase_042993_1 "dEQP-GLES3.functional.state_query.fl"
#define VkglTestCase_042993_2 "oats.polygon_offset_units_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042993, VkglTestCase_042993_1, VkglTestCase_042993_2);

#define VkglTestCase_042994_1 "dEQP-GLES3.functional.state_query.fl"
#define VkglTestCase_042994_2 "oats.polygon_offset_units_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042994, VkglTestCase_042994_1, VkglTestCase_042994_2);

#define VkglTestCase_042995_1 "dEQP-GLES3.functional.state_query.flo"
#define VkglTestCase_042995_2 "ats.polygon_offset_units_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042995, VkglTestCase_042995_1, VkglTestCase_042995_2);

#define VkglTestCase_042996_1 "dEQP-GLES3.functional.state_query.f"
#define VkglTestCase_042996_2 "loats.polygon_offset_units_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042996, VkglTestCase_042996_1, VkglTestCase_042996_2);

#define VkglTestCase_042997_1 "dEQP-GLES3.functional.state_query.fl"
#define VkglTestCase_042997_2 "oats.sample_coverage_value_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042997, VkglTestCase_042997_1, VkglTestCase_042997_2);

#define VkglTestCase_042998_1 "dEQP-GLES3.functional.state_query.fl"
#define VkglTestCase_042998_2 "oats.sample_coverage_value_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042998, VkglTestCase_042998_1, VkglTestCase_042998_2);

#define VkglTestCase_042999_1 "dEQP-GLES3.functional.state_query.flo"
#define VkglTestCase_042999_2 "ats.sample_coverage_value_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042999, VkglTestCase_042999_1, VkglTestCase_042999_2);

#define VkglTestCase_043000_1 "dEQP-GLES3.functional.state_query.f"
#define VkglTestCase_043000_2 "loats.sample_coverage_value_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043000, VkglTestCase_043000_1, VkglTestCase_043000_2);

#define VkglTestCase_043001_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043001_2 "ry.floats.blend_color_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043001, VkglTestCase_043001_1, VkglTestCase_043001_2);

#define VkglTestCase_043002_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043002_2 "ry.floats.blend_color_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043002, VkglTestCase_043002_1, VkglTestCase_043002_2);

#define VkglTestCase_043003_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_043003_2 "y.floats.blend_color_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043003, VkglTestCase_043003_1, VkglTestCase_043003_2);

#define VkglTestCase_043004_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_043004_2 "ery.floats.blend_color_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043004, VkglTestCase_043004_1, VkglTestCase_043004_2);

#define VkglTestCase_043005_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043005_2 "floats.color_clear_value_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043005, VkglTestCase_043005_1, VkglTestCase_043005_2);

#define VkglTestCase_043006_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043006_2 "floats.color_clear_value_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043006, VkglTestCase_043006_1, VkglTestCase_043006_2);

#define VkglTestCase_043007_1 "dEQP-GLES3.functional.state_query.f"
#define VkglTestCase_043007_2 "loats.color_clear_value_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043007, VkglTestCase_043007_1, VkglTestCase_043007_2);

#define VkglTestCase_043008_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_043008_2 ".floats.color_clear_value_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043008, VkglTestCase_043008_1, VkglTestCase_043008_2);

#define VkglTestCase_043009_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043009_2 "floats.depth_clear_value_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043009, VkglTestCase_043009_1, VkglTestCase_043009_2);

#define VkglTestCase_043010_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_043010_2 "floats.depth_clear_value_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043010, VkglTestCase_043010_1, VkglTestCase_043010_2);

#define VkglTestCase_043011_1 "dEQP-GLES3.functional.state_query.f"
#define VkglTestCase_043011_2 "loats.depth_clear_value_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043011, VkglTestCase_043011_1, VkglTestCase_043011_2);

#define VkglTestCase_043012_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_043012_2 ".floats.depth_clear_value_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043012, VkglTestCase_043012_1, VkglTestCase_043012_2);

#define VkglTestCase_043013_1 "dEQP-GLES3.functional.state_query.fl"
#define VkglTestCase_043013_2 "oats.max_texture_lod_bias_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043013, VkglTestCase_043013_1, VkglTestCase_043013_2);

#define VkglTestCase_043014_1 "dEQP-GLES3.functional.state_query.fl"
#define VkglTestCase_043014_2 "oats.max_texture_lod_bias_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043014, VkglTestCase_043014_1, VkglTestCase_043014_2);

#define VkglTestCase_043015_1 "dEQP-GLES3.functional.state_query.flo"
#define VkglTestCase_043015_2 "ats.max_texture_lod_bias_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043015, VkglTestCase_043015_1, VkglTestCase_043015_2);

#define VkglTestCase_043016_1 "dEQP-GLES3.functional.state_query.f"
#define VkglTestCase_043016_2 "loats.max_texture_lod_bias_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043016, VkglTestCase_043016_1, VkglTestCase_043016_2);

#define VkglTestCase_043017_1 "dEQP-GLES3.functional.state_query.floa"
#define VkglTestCase_043017_2 "ts.aliased_point_size_range_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043017, VkglTestCase_043017_1, VkglTestCase_043017_2);

#define VkglTestCase_043018_1 "dEQP-GLES3.functional.state_query.floa"
#define VkglTestCase_043018_2 "ts.aliased_point_size_range_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043018, VkglTestCase_043018_1, VkglTestCase_043018_2);

#define VkglTestCase_043019_1 "dEQP-GLES3.functional.state_query.float"
#define VkglTestCase_043019_2 "s.aliased_point_size_range_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043019, VkglTestCase_043019_1, VkglTestCase_043019_2);

#define VkglTestCase_043020_1 "dEQP-GLES3.functional.state_query.flo"
#define VkglTestCase_043020_2 "ats.aliased_point_size_range_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043020, VkglTestCase_043020_1, VkglTestCase_043020_2);

#define VkglTestCase_043021_1 "dEQP-GLES3.functional.state_query.floa"
#define VkglTestCase_043021_2 "ts.aliased_line_width_range_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043021, VkglTestCase_043021_1, VkglTestCase_043021_2);

#define VkglTestCase_043022_1 "dEQP-GLES3.functional.state_query.floa"
#define VkglTestCase_043022_2 "ts.aliased_line_width_range_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043022, VkglTestCase_043022_1, VkglTestCase_043022_2);

#define VkglTestCase_043023_1 "dEQP-GLES3.functional.state_query.float"
#define VkglTestCase_043023_2 "s.aliased_line_width_range_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043023, VkglTestCase_043023_1, VkglTestCase_043023_2);

#define VkglTestCase_043024_1 "dEQP-GLES3.functional.state_query.flo"
#define VkglTestCase_043024_2 "ats.aliased_line_width_range_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043024, VkglTestCase_043024_1, VkglTestCase_043024_2);
=======
static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_que"
        "ry.floats.depth_range_getboolean",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042981 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_que"
        "ry.floats.depth_range_getinteger",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042982 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_quer"
        "y.floats.depth_range_getinteger64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042983 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_qu"
        "ery.floats.depth_range_getfloat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042984 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_que"
        "ry.floats.line_width_getboolean",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042985 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_que"
        "ry.floats.line_width_getinteger",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042986 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_quer"
        "y.floats.line_width_getinteger64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042987 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_qu"
        "ery.floats.line_width_getfloat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042988 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.fl"
        "oats.polygon_offset_factor_getboolean",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042989 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.fl"
        "oats.polygon_offset_factor_getinteger",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042990 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.flo"
        "ats.polygon_offset_factor_getinteger64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042991 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.f"
        "loats.polygon_offset_factor_getfloat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042992 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.fl"
        "oats.polygon_offset_units_getboolean",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042993 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.fl"
        "oats.polygon_offset_units_getinteger",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042994 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.flo"
        "ats.polygon_offset_units_getinteger64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042995 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.f"
        "loats.polygon_offset_units_getfloat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042996 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.fl"
        "oats.sample_coverage_value_getboolean",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042997 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.fl"
        "oats.sample_coverage_value_getinteger",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042998 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.flo"
        "ats.sample_coverage_value_getinteger64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042999 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.f"
        "loats.sample_coverage_value_getfloat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043000 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_que"
        "ry.floats.blend_color_getboolean",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043001 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_que"
        "ry.floats.blend_color_getinteger",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043002 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_quer"
        "y.floats.blend_color_getinteger64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043003 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_qu"
        "ery.floats.blend_color_getfloat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043004 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query."
        "floats.color_clear_value_getboolean",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043005 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query."
        "floats.color_clear_value_getinteger",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043006 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.f"
        "loats.color_clear_value_getinteger64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043007 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query"
        ".floats.color_clear_value_getfloat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043008 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query."
        "floats.depth_clear_value_getboolean",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043009 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query."
        "floats.depth_clear_value_getinteger",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043010 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.f"
        "loats.depth_clear_value_getinteger64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043011 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query"
        ".floats.depth_clear_value_getfloat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043012 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.fl"
        "oats.max_texture_lod_bias_getboolean",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043013 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.fl"
        "oats.max_texture_lod_bias_getinteger",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043014 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.flo"
        "ats.max_texture_lod_bias_getinteger64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043015 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.f"
        "loats.max_texture_lod_bias_getfloat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043016 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.floa"
        "ts.aliased_point_size_range_getboolean",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043017 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.floa"
        "ts.aliased_point_size_range_getinteger",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043018 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.float"
        "s.aliased_point_size_range_getinteger64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043019 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.flo"
        "ats.aliased_point_size_range_getfloat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043020 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.floa"
        "ts.aliased_line_width_range_getboolean",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043021 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.floa"
        "ts.aliased_line_width_range_getinteger",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043022 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.float"
        "s.aliased_line_width_range_getinteger64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043023 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_043024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.state_query.flo"
        "ats.aliased_line_width_range_getfloat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043024 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
