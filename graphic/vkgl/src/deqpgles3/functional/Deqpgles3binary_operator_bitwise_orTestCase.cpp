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
#include "../ActsDeqpgles30009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008984_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008984_2 "inary_operator.bitwise_or.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008984, VkglTestCase_008984_1, VkglTestCase_008984_2);

#define VkglTestCase_008985_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008985_2 "nary_operator.bitwise_or.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008985, VkglTestCase_008985_1, VkglTestCase_008985_2);

#define VkglTestCase_008986_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008986_2 "ary_operator.bitwise_or.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008986, VkglTestCase_008986_1, VkglTestCase_008986_2);

#define VkglTestCase_008987_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008987_2 "ry_operator.bitwise_or.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008987, VkglTestCase_008987_1, VkglTestCase_008987_2);

#define VkglTestCase_008988_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008988_2 "nary_operator.bitwise_or.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008988, VkglTestCase_008988_1, VkglTestCase_008988_2);

#define VkglTestCase_008989_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008989_2 "ary_operator.bitwise_or.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008989, VkglTestCase_008989_1, VkglTestCase_008989_2);

#define VkglTestCase_008990_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008990_2 "ry_operator.bitwise_or.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008990, VkglTestCase_008990_1, VkglTestCase_008990_2);

#define VkglTestCase_008991_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008991_2 "y_operator.bitwise_or.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008991, VkglTestCase_008991_1, VkglTestCase_008991_2);

#define VkglTestCase_008992_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008992_2 "nary_operator.bitwise_or.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008992, VkglTestCase_008992_1, VkglTestCase_008992_2);

#define VkglTestCase_008993_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008993_2 "ary_operator.bitwise_or.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008993, VkglTestCase_008993_1, VkglTestCase_008993_2);

#define VkglTestCase_008994_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008994_2 "ry_operator.bitwise_or.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008994, VkglTestCase_008994_1, VkglTestCase_008994_2);

#define VkglTestCase_008995_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008995_2 "y_operator.bitwise_or.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008995, VkglTestCase_008995_1, VkglTestCase_008995_2);

#define VkglTestCase_008996_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008996_2 "nary_operator.bitwise_or.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008996, VkglTestCase_008996_1, VkglTestCase_008996_2);

#define VkglTestCase_008997_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008997_2 "ary_operator.bitwise_or.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008997, VkglTestCase_008997_1, VkglTestCase_008997_2);

#define VkglTestCase_008998_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008998_2 "ry_operator.bitwise_or.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008998, VkglTestCase_008998_1, VkglTestCase_008998_2);

#define VkglTestCase_008999_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008999_2 "y_operator.bitwise_or.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008999, VkglTestCase_008999_1, VkglTestCase_008999_2);

#define VkglTestCase_009000_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009000_2 "nary_operator.bitwise_or.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009000, VkglTestCase_009000_1, VkglTestCase_009000_2);

#define VkglTestCase_009001_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009001_2 "ary_operator.bitwise_or.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009001, VkglTestCase_009001_1, VkglTestCase_009001_2);

#define VkglTestCase_009002_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009002_2 "ary_operator.bitwise_or.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009002, VkglTestCase_009002_1, VkglTestCase_009002_2);

#define VkglTestCase_009003_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009003_2 "ry_operator.bitwise_or.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009003, VkglTestCase_009003_1, VkglTestCase_009003_2);

#define VkglTestCase_009004_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009004_2 "ary_operator.bitwise_or.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009004, VkglTestCase_009004_1, VkglTestCase_009004_2);

#define VkglTestCase_009005_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009005_2 "ry_operator.bitwise_or.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009005, VkglTestCase_009005_1, VkglTestCase_009005_2);

#define VkglTestCase_009006_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009006_2 "ary_operator.bitwise_or.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009006, VkglTestCase_009006_1, VkglTestCase_009006_2);

#define VkglTestCase_009007_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009007_2 "ry_operator.bitwise_or.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009007, VkglTestCase_009007_1, VkglTestCase_009007_2);

#define VkglTestCase_009008_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009008_2 "nary_operator.bitwise_or.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009008, VkglTestCase_009008_1, VkglTestCase_009008_2);

#define VkglTestCase_009009_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009009_2 "ary_operator.bitwise_or.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009009, VkglTestCase_009009_1, VkglTestCase_009009_2);

#define VkglTestCase_009010_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009010_2 "ary_operator.bitwise_or.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009010, VkglTestCase_009010_1, VkglTestCase_009010_2);

#define VkglTestCase_009011_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009011_2 "ry_operator.bitwise_or.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009011, VkglTestCase_009011_1, VkglTestCase_009011_2);

#define VkglTestCase_009012_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009012_2 "nary_operator.bitwise_or.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009012, VkglTestCase_009012_1, VkglTestCase_009012_2);

#define VkglTestCase_009013_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009013_2 "ary_operator.bitwise_or.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009013, VkglTestCase_009013_1, VkglTestCase_009013_2);

#define VkglTestCase_009014_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009014_2 "ry_operator.bitwise_or.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009014, VkglTestCase_009014_1, VkglTestCase_009014_2);

#define VkglTestCase_009015_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009015_2 "y_operator.bitwise_or.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009015, VkglTestCase_009015_1, VkglTestCase_009015_2);

#define VkglTestCase_009016_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009016_2 "nary_operator.bitwise_or.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009016, VkglTestCase_009016_1, VkglTestCase_009016_2);

#define VkglTestCase_009017_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009017_2 "ary_operator.bitwise_or.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009017, VkglTestCase_009017_1, VkglTestCase_009017_2);

#define VkglTestCase_009018_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009018_2 "ry_operator.bitwise_or.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009018, VkglTestCase_009018_1, VkglTestCase_009018_2);

#define VkglTestCase_009019_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009019_2 "y_operator.bitwise_or.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009019, VkglTestCase_009019_1, VkglTestCase_009019_2);

#define VkglTestCase_009020_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009020_2 "nary_operator.bitwise_or.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009020, VkglTestCase_009020_1, VkglTestCase_009020_2);

#define VkglTestCase_009021_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009021_2 "ary_operator.bitwise_or.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009021, VkglTestCase_009021_1, VkglTestCase_009021_2);

#define VkglTestCase_009022_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009022_2 "ry_operator.bitwise_or.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009022, VkglTestCase_009022_1, VkglTestCase_009022_2);

#define VkglTestCase_009023_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009023_2 "y_operator.bitwise_or.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009023, VkglTestCase_009023_1, VkglTestCase_009023_2);

#define VkglTestCase_009024_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009024_2 "nary_operator.bitwise_or.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009024, VkglTestCase_009024_1, VkglTestCase_009024_2);

#define VkglTestCase_009025_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009025_2 "ary_operator.bitwise_or.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009025, VkglTestCase_009025_1, VkglTestCase_009025_2);

#define VkglTestCase_009026_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009026_2 "ary_operator.bitwise_or.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009026, VkglTestCase_009026_1, VkglTestCase_009026_2);

#define VkglTestCase_009027_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009027_2 "ry_operator.bitwise_or.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009027, VkglTestCase_009027_1, VkglTestCase_009027_2);

#define VkglTestCase_009028_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009028_2 "ary_operator.bitwise_or.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009028, VkglTestCase_009028_1, VkglTestCase_009028_2);

#define VkglTestCase_009029_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009029_2 "ry_operator.bitwise_or.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009029, VkglTestCase_009029_1, VkglTestCase_009029_2);

#define VkglTestCase_009030_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009030_2 "ary_operator.bitwise_or.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009030, VkglTestCase_009030_1, VkglTestCase_009030_2);

#define VkglTestCase_009031_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009031_2 "ry_operator.bitwise_or.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009031, VkglTestCase_009031_1, VkglTestCase_009031_2);

#define VkglTestCase_009032_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009032_2 "ry_operator.bitwise_or.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009032, VkglTestCase_009032_1, VkglTestCase_009032_2);

#define VkglTestCase_009033_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009033_2 "y_operator.bitwise_or.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009033, VkglTestCase_009033_1, VkglTestCase_009033_2);

#define VkglTestCase_009034_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009034_2 "_operator.bitwise_or.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009034, VkglTestCase_009034_1, VkglTestCase_009034_2);

#define VkglTestCase_009035_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009035_2 "operator.bitwise_or.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009035, VkglTestCase_009035_1, VkglTestCase_009035_2);

#define VkglTestCase_009036_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009036_2 "ry_operator.bitwise_or.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009036, VkglTestCase_009036_1, VkglTestCase_009036_2);

#define VkglTestCase_009037_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009037_2 "y_operator.bitwise_or.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009037, VkglTestCase_009037_1, VkglTestCase_009037_2);

#define VkglTestCase_009038_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009038_2 "_operator.bitwise_or.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009038, VkglTestCase_009038_1, VkglTestCase_009038_2);

#define VkglTestCase_009039_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009039_2 "operator.bitwise_or.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009039, VkglTestCase_009039_1, VkglTestCase_009039_2);

#define VkglTestCase_009040_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009040_2 "ry_operator.bitwise_or.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009040, VkglTestCase_009040_1, VkglTestCase_009040_2);

#define VkglTestCase_009041_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009041_2 "y_operator.bitwise_or.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009041, VkglTestCase_009041_1, VkglTestCase_009041_2);

#define VkglTestCase_009042_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009042_2 "_operator.bitwise_or.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009042, VkglTestCase_009042_1, VkglTestCase_009042_2);

#define VkglTestCase_009043_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009043_2 "operator.bitwise_or.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009043, VkglTestCase_009043_1, VkglTestCase_009043_2);

#define VkglTestCase_009044_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009044_2 "y_operator.bitwise_or.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009044, VkglTestCase_009044_1, VkglTestCase_009044_2);

#define VkglTestCase_009045_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009045_2 "_operator.bitwise_or.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009045, VkglTestCase_009045_1, VkglTestCase_009045_2);

#define VkglTestCase_009046_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009046_2 "y_operator.bitwise_or.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009046, VkglTestCase_009046_1, VkglTestCase_009046_2);

#define VkglTestCase_009047_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009047_2 "_operator.bitwise_or.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009047, VkglTestCase_009047_1, VkglTestCase_009047_2);

#define VkglTestCase_009048_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009048_2 "y_operator.bitwise_or.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009048, VkglTestCase_009048_1, VkglTestCase_009048_2);

#define VkglTestCase_009049_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009049_2 "_operator.bitwise_or.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009049, VkglTestCase_009049_1, VkglTestCase_009049_2);

#define VkglTestCase_009050_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009050_2 "y_operator.bitwise_or.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009050, VkglTestCase_009050_1, VkglTestCase_009050_2);

#define VkglTestCase_009051_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009051_2 "_operator.bitwise_or.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009051, VkglTestCase_009051_1, VkglTestCase_009051_2);

#define VkglTestCase_009052_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009052_2 "_operator.bitwise_or.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009052, VkglTestCase_009052_1, VkglTestCase_009052_2);

#define VkglTestCase_009053_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009053_2 "operator.bitwise_or.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009053, VkglTestCase_009053_1, VkglTestCase_009053_2);

#define VkglTestCase_009054_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009054_2 "y_operator.bitwise_or.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009054, VkglTestCase_009054_1, VkglTestCase_009054_2);

#define VkglTestCase_009055_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009055_2 "_operator.bitwise_or.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009055, VkglTestCase_009055_1, VkglTestCase_009055_2);

#define VkglTestCase_009056_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009056_2 "_operator.bitwise_or.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009056, VkglTestCase_009056_1, VkglTestCase_009056_2);

#define VkglTestCase_009057_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009057_2 "operator.bitwise_or.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009057, VkglTestCase_009057_1, VkglTestCase_009057_2);

#define VkglTestCase_009058_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009058_2 "y_operator.bitwise_or.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009058, VkglTestCase_009058_1, VkglTestCase_009058_2);

#define VkglTestCase_009059_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009059_2 "_operator.bitwise_or.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009059, VkglTestCase_009059_1, VkglTestCase_009059_2);

#define VkglTestCase_009060_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009060_2 "_operator.bitwise_or.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009060, VkglTestCase_009060_1, VkglTestCase_009060_2);

#define VkglTestCase_009061_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009061_2 "operator.bitwise_or.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009061, VkglTestCase_009061_1, VkglTestCase_009061_2);

#define VkglTestCase_009062_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009062_2 "y_operator.bitwise_or.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009062, VkglTestCase_009062_1, VkglTestCase_009062_2);

#define VkglTestCase_009063_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009063_2 "_operator.bitwise_or.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009063, VkglTestCase_009063_1, VkglTestCase_009063_2);

#define VkglTestCase_009064_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009064_2 "y_operator.bitwise_or.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009064, VkglTestCase_009064_1, VkglTestCase_009064_2);

#define VkglTestCase_009065_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009065_2 "_operator.bitwise_or.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009065, VkglTestCase_009065_1, VkglTestCase_009065_2);

#define VkglTestCase_009066_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009066_2 "y_operator.bitwise_or.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009066, VkglTestCase_009066_1, VkglTestCase_009066_2);

#define VkglTestCase_009067_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009067_2 "_operator.bitwise_or.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009067, VkglTestCase_009067_1, VkglTestCase_009067_2);

#define VkglTestCase_009068_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009068_2 "ry_operator.bitwise_or.lowp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009068, VkglTestCase_009068_1, VkglTestCase_009068_2);

#define VkglTestCase_009069_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009069_2 "y_operator.bitwise_or.lowp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009069, VkglTestCase_009069_1, VkglTestCase_009069_2);

#define VkglTestCase_009070_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009070_2 "_operator.bitwise_or.mediump_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009070, VkglTestCase_009070_1, VkglTestCase_009070_2);

#define VkglTestCase_009071_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009071_2 "operator.bitwise_or.mediump_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009071, VkglTestCase_009071_1, VkglTestCase_009071_2);

#define VkglTestCase_009072_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009072_2 "ry_operator.bitwise_or.lowp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009072, VkglTestCase_009072_1, VkglTestCase_009072_2);

#define VkglTestCase_009073_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009073_2 "y_operator.bitwise_or.lowp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009073, VkglTestCase_009073_1, VkglTestCase_009073_2);

#define VkglTestCase_009074_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009074_2 "_operator.bitwise_or.mediump_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009074, VkglTestCase_009074_1, VkglTestCase_009074_2);

#define VkglTestCase_009075_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009075_2 "operator.bitwise_or.mediump_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009075, VkglTestCase_009075_1, VkglTestCase_009075_2);

#define VkglTestCase_009076_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009076_2 "ry_operator.bitwise_or.lowp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009076, VkglTestCase_009076_1, VkglTestCase_009076_2);

#define VkglTestCase_009077_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009077_2 "y_operator.bitwise_or.lowp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009077, VkglTestCase_009077_1, VkglTestCase_009077_2);

#define VkglTestCase_009078_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009078_2 "_operator.bitwise_or.mediump_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009078, VkglTestCase_009078_1, VkglTestCase_009078_2);

#define VkglTestCase_009079_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009079_2 "operator.bitwise_or.mediump_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009079, VkglTestCase_009079_1, VkglTestCase_009079_2);

#define VkglTestCase_009080_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009080_2 "y_operator.bitwise_or.highp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009080, VkglTestCase_009080_1, VkglTestCase_009080_2);

#define VkglTestCase_009081_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009081_2 "_operator.bitwise_or.highp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009081, VkglTestCase_009081_1, VkglTestCase_009081_2);

#define VkglTestCase_009082_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009082_2 "y_operator.bitwise_or.highp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009082, VkglTestCase_009082_1, VkglTestCase_009082_2);

#define VkglTestCase_009083_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009083_2 "_operator.bitwise_or.highp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009083, VkglTestCase_009083_1, VkglTestCase_009083_2);

#define VkglTestCase_009084_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009084_2 "y_operator.bitwise_or.highp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009084, VkglTestCase_009084_1, VkglTestCase_009084_2);

#define VkglTestCase_009085_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009085_2 "_operator.bitwise_or.highp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009085, VkglTestCase_009085_1, VkglTestCase_009085_2);

#define VkglTestCase_009086_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009086_2 "y_operator.bitwise_or.lowp_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009086, VkglTestCase_009086_1, VkglTestCase_009086_2);

#define VkglTestCase_009087_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009087_2 "_operator.bitwise_or.lowp_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009087, VkglTestCase_009087_1, VkglTestCase_009087_2);

#define VkglTestCase_009088_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009088_2 "_operator.bitwise_or.mediump_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009088, VkglTestCase_009088_1, VkglTestCase_009088_2);

#define VkglTestCase_009089_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009089_2 "operator.bitwise_or.mediump_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009089, VkglTestCase_009089_1, VkglTestCase_009089_2);

#define VkglTestCase_009090_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009090_2 "y_operator.bitwise_or.lowp_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009090, VkglTestCase_009090_1, VkglTestCase_009090_2);

#define VkglTestCase_009091_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009091_2 "_operator.bitwise_or.lowp_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009091, VkglTestCase_009091_1, VkglTestCase_009091_2);

#define VkglTestCase_009092_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009092_2 "_operator.bitwise_or.mediump_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009092, VkglTestCase_009092_1, VkglTestCase_009092_2);

#define VkglTestCase_009093_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009093_2 "operator.bitwise_or.mediump_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009093, VkglTestCase_009093_1, VkglTestCase_009093_2);

#define VkglTestCase_009094_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009094_2 "y_operator.bitwise_or.lowp_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009094, VkglTestCase_009094_1, VkglTestCase_009094_2);

#define VkglTestCase_009095_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009095_2 "_operator.bitwise_or.lowp_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009095, VkglTestCase_009095_1, VkglTestCase_009095_2);

#define VkglTestCase_009096_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009096_2 "_operator.bitwise_or.mediump_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009096, VkglTestCase_009096_1, VkglTestCase_009096_2);

#define VkglTestCase_009097_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009097_2 "operator.bitwise_or.mediump_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009097, VkglTestCase_009097_1, VkglTestCase_009097_2);

#define VkglTestCase_009098_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009098_2 "y_operator.bitwise_or.highp_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009098, VkglTestCase_009098_1, VkglTestCase_009098_2);

#define VkglTestCase_009099_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009099_2 "_operator.bitwise_or.highp_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009099, VkglTestCase_009099_1, VkglTestCase_009099_2);

#define VkglTestCase_009100_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009100_2 "y_operator.bitwise_or.highp_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009100, VkglTestCase_009100_1, VkglTestCase_009100_2);

#define VkglTestCase_009101_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009101_2 "_operator.bitwise_or.highp_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009101, VkglTestCase_009101_1, VkglTestCase_009101_2);

#define VkglTestCase_009102_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009102_2 "y_operator.bitwise_or.highp_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009102, VkglTestCase_009102_1, VkglTestCase_009102_2);

#define VkglTestCase_009103_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009103_2 "_operator.bitwise_or.highp_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_009103, VkglTestCase_009103_1, VkglTestCase_009103_2);
