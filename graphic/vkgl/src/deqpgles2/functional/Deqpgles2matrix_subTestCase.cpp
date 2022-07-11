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
#include "../ActsDeqpgles20007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006989_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_006989_2 "ix.sub.const_lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006989, VkglTestCase_006989_1, VkglTestCase_006989_2);

#define VkglTestCase_006990_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006990_2 "x.sub.const_lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006990, VkglTestCase_006990_1, VkglTestCase_006990_2);

#define VkglTestCase_006991_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_006991_2 "ix.sub.const_lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006991, VkglTestCase_006991_1, VkglTestCase_006991_2);

#define VkglTestCase_006992_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006992_2 "x.sub.const_lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006992, VkglTestCase_006992_1, VkglTestCase_006992_2);

#define VkglTestCase_006993_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006993_2 ".sub.const_mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006993, VkglTestCase_006993_1, VkglTestCase_006993_2);

#define VkglTestCase_006994_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006994_2 "sub.const_mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006994, VkglTestCase_006994_1, VkglTestCase_006994_2);

#define VkglTestCase_006995_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006995_2 "x.sub.const_mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006995, VkglTestCase_006995_1, VkglTestCase_006995_2);

#define VkglTestCase_006996_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006996_2 ".sub.const_mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006996, VkglTestCase_006996_1, VkglTestCase_006996_2);

#define VkglTestCase_006997_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006997_2 "x.sub.const_highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006997, VkglTestCase_006997_1, VkglTestCase_006997_2);

#define VkglTestCase_006998_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006998_2 ".sub.const_highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006998, VkglTestCase_006998_1, VkglTestCase_006998_2);

#define VkglTestCase_006999_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_006999_2 "ix.sub.const_highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006999, VkglTestCase_006999_1, VkglTestCase_006999_2);

#define VkglTestCase_007000_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007000_2 "x.sub.const_highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007000, VkglTestCase_007000_1, VkglTestCase_007000_2);

#define VkglTestCase_007001_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007001_2 "ix.sub.const_lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007001, VkglTestCase_007001_1, VkglTestCase_007001_2);

#define VkglTestCase_007002_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007002_2 "x.sub.const_lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007002, VkglTestCase_007002_1, VkglTestCase_007002_2);

#define VkglTestCase_007003_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007003_2 "ix.sub.const_lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007003, VkglTestCase_007003_1, VkglTestCase_007003_2);

#define VkglTestCase_007004_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007004_2 "x.sub.const_lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007004, VkglTestCase_007004_1, VkglTestCase_007004_2);

#define VkglTestCase_007005_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007005_2 ".sub.const_mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007005, VkglTestCase_007005_1, VkglTestCase_007005_2);

#define VkglTestCase_007006_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007006_2 "sub.const_mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007006, VkglTestCase_007006_1, VkglTestCase_007006_2);

#define VkglTestCase_007007_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007007_2 "x.sub.const_mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007007, VkglTestCase_007007_1, VkglTestCase_007007_2);

#define VkglTestCase_007008_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007008_2 ".sub.const_mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007008, VkglTestCase_007008_1, VkglTestCase_007008_2);

#define VkglTestCase_007009_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007009_2 "x.sub.const_highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007009, VkglTestCase_007009_1, VkglTestCase_007009_2);

#define VkglTestCase_007010_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007010_2 ".sub.const_highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007010, VkglTestCase_007010_1, VkglTestCase_007010_2);

#define VkglTestCase_007011_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007011_2 "ix.sub.const_highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007011, VkglTestCase_007011_1, VkglTestCase_007011_2);

#define VkglTestCase_007012_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007012_2 "x.sub.const_highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007012, VkglTestCase_007012_1, VkglTestCase_007012_2);

#define VkglTestCase_007013_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007013_2 "ix.sub.const_lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007013, VkglTestCase_007013_1, VkglTestCase_007013_2);

#define VkglTestCase_007014_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007014_2 "x.sub.const_lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007014, VkglTestCase_007014_1, VkglTestCase_007014_2);

#define VkglTestCase_007015_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007015_2 "ix.sub.const_lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007015, VkglTestCase_007015_1, VkglTestCase_007015_2);

#define VkglTestCase_007016_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007016_2 "x.sub.const_lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007016, VkglTestCase_007016_1, VkglTestCase_007016_2);

#define VkglTestCase_007017_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007017_2 ".sub.const_mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007017, VkglTestCase_007017_1, VkglTestCase_007017_2);

#define VkglTestCase_007018_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007018_2 "sub.const_mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007018, VkglTestCase_007018_1, VkglTestCase_007018_2);

#define VkglTestCase_007019_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007019_2 "x.sub.const_mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007019, VkglTestCase_007019_1, VkglTestCase_007019_2);

#define VkglTestCase_007020_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007020_2 ".sub.const_mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007020, VkglTestCase_007020_1, VkglTestCase_007020_2);

#define VkglTestCase_007021_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007021_2 "x.sub.const_highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007021, VkglTestCase_007021_1, VkglTestCase_007021_2);

#define VkglTestCase_007022_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007022_2 ".sub.const_highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007022, VkglTestCase_007022_1, VkglTestCase_007022_2);

#define VkglTestCase_007023_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_007023_2 "ix.sub.const_highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007023, VkglTestCase_007023_1, VkglTestCase_007023_2);

#define VkglTestCase_007024_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007024_2 "x.sub.const_highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007024, VkglTestCase_007024_1, VkglTestCase_007024_2);

#define VkglTestCase_007025_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007025_2 "x.sub.uniform_lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007025, VkglTestCase_007025_1, VkglTestCase_007025_2);

#define VkglTestCase_007026_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007026_2 ".sub.uniform_lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007026, VkglTestCase_007026_1, VkglTestCase_007026_2);

#define VkglTestCase_007027_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007027_2 "x.sub.uniform_lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007027, VkglTestCase_007027_1, VkglTestCase_007027_2);

#define VkglTestCase_007028_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007028_2 ".sub.uniform_lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007028, VkglTestCase_007028_1, VkglTestCase_007028_2);

#define VkglTestCase_007029_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007029_2 "sub.uniform_mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007029, VkglTestCase_007029_1, VkglTestCase_007029_2);

#define VkglTestCase_007030_1 "dEQP-GLES2.functional.shaders.matrix.s"
#define VkglTestCase_007030_2 "ub.uniform_mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007030, VkglTestCase_007030_1, VkglTestCase_007030_2);

#define VkglTestCase_007031_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007031_2 ".sub.uniform_mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007031, VkglTestCase_007031_1, VkglTestCase_007031_2);

#define VkglTestCase_007032_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007032_2 "sub.uniform_mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007032, VkglTestCase_007032_1, VkglTestCase_007032_2);

#define VkglTestCase_007033_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007033_2 ".sub.uniform_highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007033, VkglTestCase_007033_1, VkglTestCase_007033_2);

#define VkglTestCase_007034_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007034_2 "sub.uniform_highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007034, VkglTestCase_007034_1, VkglTestCase_007034_2);

#define VkglTestCase_007035_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007035_2 "x.sub.uniform_highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007035, VkglTestCase_007035_1, VkglTestCase_007035_2);

#define VkglTestCase_007036_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007036_2 ".sub.uniform_highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007036, VkglTestCase_007036_1, VkglTestCase_007036_2);

#define VkglTestCase_007037_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007037_2 "x.sub.uniform_lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007037, VkglTestCase_007037_1, VkglTestCase_007037_2);

#define VkglTestCase_007038_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007038_2 ".sub.uniform_lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007038, VkglTestCase_007038_1, VkglTestCase_007038_2);

#define VkglTestCase_007039_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007039_2 "x.sub.uniform_lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007039, VkglTestCase_007039_1, VkglTestCase_007039_2);

#define VkglTestCase_007040_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007040_2 ".sub.uniform_lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007040, VkglTestCase_007040_1, VkglTestCase_007040_2);

#define VkglTestCase_007041_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007041_2 "sub.uniform_mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007041, VkglTestCase_007041_1, VkglTestCase_007041_2);

#define VkglTestCase_007042_1 "dEQP-GLES2.functional.shaders.matrix.s"
#define VkglTestCase_007042_2 "ub.uniform_mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007042, VkglTestCase_007042_1, VkglTestCase_007042_2);

#define VkglTestCase_007043_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007043_2 ".sub.uniform_mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007043, VkglTestCase_007043_1, VkglTestCase_007043_2);

#define VkglTestCase_007044_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007044_2 "sub.uniform_mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007044, VkglTestCase_007044_1, VkglTestCase_007044_2);

#define VkglTestCase_007045_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007045_2 ".sub.uniform_highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007045, VkglTestCase_007045_1, VkglTestCase_007045_2);

#define VkglTestCase_007046_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007046_2 "sub.uniform_highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007046, VkglTestCase_007046_1, VkglTestCase_007046_2);

#define VkglTestCase_007047_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007047_2 "x.sub.uniform_highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007047, VkglTestCase_007047_1, VkglTestCase_007047_2);

#define VkglTestCase_007048_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007048_2 ".sub.uniform_highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007048, VkglTestCase_007048_1, VkglTestCase_007048_2);

#define VkglTestCase_007049_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007049_2 "x.sub.uniform_lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007049, VkglTestCase_007049_1, VkglTestCase_007049_2);

#define VkglTestCase_007050_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007050_2 ".sub.uniform_lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007050, VkglTestCase_007050_1, VkglTestCase_007050_2);

#define VkglTestCase_007051_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007051_2 "x.sub.uniform_lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007051, VkglTestCase_007051_1, VkglTestCase_007051_2);

#define VkglTestCase_007052_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007052_2 ".sub.uniform_lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007052, VkglTestCase_007052_1, VkglTestCase_007052_2);

#define VkglTestCase_007053_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007053_2 "sub.uniform_mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007053, VkglTestCase_007053_1, VkglTestCase_007053_2);

#define VkglTestCase_007054_1 "dEQP-GLES2.functional.shaders.matrix.s"
#define VkglTestCase_007054_2 "ub.uniform_mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007054, VkglTestCase_007054_1, VkglTestCase_007054_2);

#define VkglTestCase_007055_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007055_2 ".sub.uniform_mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007055, VkglTestCase_007055_1, VkglTestCase_007055_2);

#define VkglTestCase_007056_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007056_2 "sub.uniform_mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007056, VkglTestCase_007056_1, VkglTestCase_007056_2);

#define VkglTestCase_007057_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007057_2 ".sub.uniform_highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007057, VkglTestCase_007057_1, VkglTestCase_007057_2);

#define VkglTestCase_007058_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007058_2 "sub.uniform_highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007058, VkglTestCase_007058_1, VkglTestCase_007058_2);

#define VkglTestCase_007059_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007059_2 "x.sub.uniform_highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007059, VkglTestCase_007059_1, VkglTestCase_007059_2);

#define VkglTestCase_007060_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007060_2 ".sub.uniform_highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007060, VkglTestCase_007060_1, VkglTestCase_007060_2);

#define VkglTestCase_007061_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007061_2 "x.sub.dynamic_lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007061, VkglTestCase_007061_1, VkglTestCase_007061_2);

#define VkglTestCase_007062_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007062_2 ".sub.dynamic_lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007062, VkglTestCase_007062_1, VkglTestCase_007062_2);

#define VkglTestCase_007063_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007063_2 "x.sub.dynamic_lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007063, VkglTestCase_007063_1, VkglTestCase_007063_2);

#define VkglTestCase_007064_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007064_2 ".sub.dynamic_lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007064, VkglTestCase_007064_1, VkglTestCase_007064_2);

#define VkglTestCase_007065_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007065_2 "sub.dynamic_mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007065, VkglTestCase_007065_1, VkglTestCase_007065_2);

#define VkglTestCase_007066_1 "dEQP-GLES2.functional.shaders.matrix.s"
#define VkglTestCase_007066_2 "ub.dynamic_mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007066, VkglTestCase_007066_1, VkglTestCase_007066_2);

#define VkglTestCase_007067_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007067_2 ".sub.dynamic_mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007067, VkglTestCase_007067_1, VkglTestCase_007067_2);

#define VkglTestCase_007068_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007068_2 "sub.dynamic_mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007068, VkglTestCase_007068_1, VkglTestCase_007068_2);

#define VkglTestCase_007069_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007069_2 ".sub.dynamic_highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007069, VkglTestCase_007069_1, VkglTestCase_007069_2);

#define VkglTestCase_007070_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007070_2 "sub.dynamic_highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007070, VkglTestCase_007070_1, VkglTestCase_007070_2);

#define VkglTestCase_007071_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007071_2 "x.sub.dynamic_highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007071, VkglTestCase_007071_1, VkglTestCase_007071_2);

#define VkglTestCase_007072_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007072_2 ".sub.dynamic_highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007072, VkglTestCase_007072_1, VkglTestCase_007072_2);

#define VkglTestCase_007073_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007073_2 "x.sub.dynamic_lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007073, VkglTestCase_007073_1, VkglTestCase_007073_2);

#define VkglTestCase_007074_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007074_2 ".sub.dynamic_lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007074, VkglTestCase_007074_1, VkglTestCase_007074_2);

#define VkglTestCase_007075_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007075_2 "x.sub.dynamic_lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007075, VkglTestCase_007075_1, VkglTestCase_007075_2);

#define VkglTestCase_007076_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007076_2 ".sub.dynamic_lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007076, VkglTestCase_007076_1, VkglTestCase_007076_2);

#define VkglTestCase_007077_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007077_2 "sub.dynamic_mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007077, VkglTestCase_007077_1, VkglTestCase_007077_2);

#define VkglTestCase_007078_1 "dEQP-GLES2.functional.shaders.matrix.s"
#define VkglTestCase_007078_2 "ub.dynamic_mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007078, VkglTestCase_007078_1, VkglTestCase_007078_2);

#define VkglTestCase_007079_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007079_2 ".sub.dynamic_mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007079, VkglTestCase_007079_1, VkglTestCase_007079_2);

#define VkglTestCase_007080_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007080_2 "sub.dynamic_mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007080, VkglTestCase_007080_1, VkglTestCase_007080_2);

#define VkglTestCase_007081_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007081_2 ".sub.dynamic_highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007081, VkglTestCase_007081_1, VkglTestCase_007081_2);

#define VkglTestCase_007082_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007082_2 "sub.dynamic_highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007082, VkglTestCase_007082_1, VkglTestCase_007082_2);

#define VkglTestCase_007083_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007083_2 "x.sub.dynamic_highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007083, VkglTestCase_007083_1, VkglTestCase_007083_2);

#define VkglTestCase_007084_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007084_2 ".sub.dynamic_highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007084, VkglTestCase_007084_1, VkglTestCase_007084_2);

#define VkglTestCase_007085_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007085_2 "x.sub.dynamic_lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007085, VkglTestCase_007085_1, VkglTestCase_007085_2);

#define VkglTestCase_007086_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007086_2 ".sub.dynamic_lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007086, VkglTestCase_007086_1, VkglTestCase_007086_2);

#define VkglTestCase_007087_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007087_2 "x.sub.dynamic_lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007087, VkglTestCase_007087_1, VkglTestCase_007087_2);

#define VkglTestCase_007088_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007088_2 ".sub.dynamic_lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007088, VkglTestCase_007088_1, VkglTestCase_007088_2);

#define VkglTestCase_007089_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007089_2 "sub.dynamic_mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007089, VkglTestCase_007089_1, VkglTestCase_007089_2);

#define VkglTestCase_007090_1 "dEQP-GLES2.functional.shaders.matrix.s"
#define VkglTestCase_007090_2 "ub.dynamic_mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007090, VkglTestCase_007090_1, VkglTestCase_007090_2);

#define VkglTestCase_007091_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007091_2 ".sub.dynamic_mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007091, VkglTestCase_007091_1, VkglTestCase_007091_2);

#define VkglTestCase_007092_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007092_2 "sub.dynamic_mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007092, VkglTestCase_007092_1, VkglTestCase_007092_2);

#define VkglTestCase_007093_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007093_2 ".sub.dynamic_highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007093, VkglTestCase_007093_1, VkglTestCase_007093_2);

#define VkglTestCase_007094_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_007094_2 "sub.dynamic_highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007094, VkglTestCase_007094_1, VkglTestCase_007094_2);

#define VkglTestCase_007095_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_007095_2 "x.sub.dynamic_highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007095, VkglTestCase_007095_1, VkglTestCase_007095_2);

#define VkglTestCase_007096_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_007096_2 ".sub.dynamic_highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_007096, VkglTestCase_007096_1, VkglTestCase_007096_2);
