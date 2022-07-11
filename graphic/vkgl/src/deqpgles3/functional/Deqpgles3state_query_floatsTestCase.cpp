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
#include "../ActsDeqpgles30043TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

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
