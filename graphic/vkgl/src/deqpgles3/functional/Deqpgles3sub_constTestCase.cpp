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
#include "../ActsDeqpgles30015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014088_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014088_2 "ix.sub.const.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014088, VkglTestCase_014088_1, VkglTestCase_014088_2);

#define VkglTestCase_014089_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014089_2 "x.sub.const.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014089, VkglTestCase_014089_1, VkglTestCase_014089_2);

#define VkglTestCase_014090_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014090_2 "ix.sub.const.lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014090, VkglTestCase_014090_1, VkglTestCase_014090_2);

#define VkglTestCase_014091_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014091_2 "x.sub.const.lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014091, VkglTestCase_014091_1, VkglTestCase_014091_2);

#define VkglTestCase_014092_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014092_2 ".sub.const.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014092, VkglTestCase_014092_1, VkglTestCase_014092_2);

#define VkglTestCase_014093_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014093_2 "sub.const.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014093, VkglTestCase_014093_1, VkglTestCase_014093_2);

#define VkglTestCase_014094_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014094_2 "x.sub.const.mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014094, VkglTestCase_014094_1, VkglTestCase_014094_2);

#define VkglTestCase_014095_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014095_2 ".sub.const.mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014095, VkglTestCase_014095_1, VkglTestCase_014095_2);

#define VkglTestCase_014096_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014096_2 "x.sub.const.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014096, VkglTestCase_014096_1, VkglTestCase_014096_2);

#define VkglTestCase_014097_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014097_2 ".sub.const.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014097, VkglTestCase_014097_1, VkglTestCase_014097_2);

#define VkglTestCase_014098_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014098_2 "ix.sub.const.highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014098, VkglTestCase_014098_1, VkglTestCase_014098_2);

#define VkglTestCase_014099_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014099_2 "x.sub.const.highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014099, VkglTestCase_014099_1, VkglTestCase_014099_2);

#define VkglTestCase_014100_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014100_2 "x.sub.const.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014100, VkglTestCase_014100_1, VkglTestCase_014100_2);

#define VkglTestCase_014101_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014101_2 ".sub.const.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014101, VkglTestCase_014101_1, VkglTestCase_014101_2);

#define VkglTestCase_014102_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014102_2 ".sub.const.lowp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014102, VkglTestCase_014102_1, VkglTestCase_014102_2);

#define VkglTestCase_014103_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014103_2 "sub.const.lowp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014103, VkglTestCase_014103_1, VkglTestCase_014103_2);

#define VkglTestCase_014104_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014104_2 "sub.const.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014104, VkglTestCase_014104_1, VkglTestCase_014104_2);

#define VkglTestCase_014105_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014105_2 "ub.const.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014105, VkglTestCase_014105_1, VkglTestCase_014105_2);

#define VkglTestCase_014106_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014106_2 "sub.const.mediump_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014106, VkglTestCase_014106_1, VkglTestCase_014106_2);

#define VkglTestCase_014107_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014107_2 "ub.const.mediump_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014107, VkglTestCase_014107_1, VkglTestCase_014107_2);

#define VkglTestCase_014108_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014108_2 ".sub.const.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014108, VkglTestCase_014108_1, VkglTestCase_014108_2);

#define VkglTestCase_014109_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014109_2 "sub.const.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014109, VkglTestCase_014109_1, VkglTestCase_014109_2);

#define VkglTestCase_014110_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014110_2 ".sub.const.highp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014110, VkglTestCase_014110_1, VkglTestCase_014110_2);

#define VkglTestCase_014111_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014111_2 "sub.const.highp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014111, VkglTestCase_014111_1, VkglTestCase_014111_2);

#define VkglTestCase_014112_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014112_2 "x.sub.const.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014112, VkglTestCase_014112_1, VkglTestCase_014112_2);

#define VkglTestCase_014113_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014113_2 ".sub.const.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014113, VkglTestCase_014113_1, VkglTestCase_014113_2);

#define VkglTestCase_014114_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014114_2 ".sub.const.lowp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014114, VkglTestCase_014114_1, VkglTestCase_014114_2);

#define VkglTestCase_014115_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014115_2 "sub.const.lowp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014115, VkglTestCase_014115_1, VkglTestCase_014115_2);

#define VkglTestCase_014116_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014116_2 "sub.const.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014116, VkglTestCase_014116_1, VkglTestCase_014116_2);

#define VkglTestCase_014117_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014117_2 "ub.const.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014117, VkglTestCase_014117_1, VkglTestCase_014117_2);

#define VkglTestCase_014118_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014118_2 "sub.const.mediump_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014118, VkglTestCase_014118_1, VkglTestCase_014118_2);

#define VkglTestCase_014119_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014119_2 "ub.const.mediump_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014119, VkglTestCase_014119_1, VkglTestCase_014119_2);

#define VkglTestCase_014120_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014120_2 ".sub.const.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014120, VkglTestCase_014120_1, VkglTestCase_014120_2);

#define VkglTestCase_014121_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014121_2 "sub.const.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014121, VkglTestCase_014121_1, VkglTestCase_014121_2);

#define VkglTestCase_014122_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014122_2 ".sub.const.highp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014122, VkglTestCase_014122_1, VkglTestCase_014122_2);

#define VkglTestCase_014123_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014123_2 "sub.const.highp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014123, VkglTestCase_014123_1, VkglTestCase_014123_2);

#define VkglTestCase_014124_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014124_2 "x.sub.const.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014124, VkglTestCase_014124_1, VkglTestCase_014124_2);

#define VkglTestCase_014125_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014125_2 ".sub.const.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014125, VkglTestCase_014125_1, VkglTestCase_014125_2);

#define VkglTestCase_014126_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014126_2 ".sub.const.lowp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014126, VkglTestCase_014126_1, VkglTestCase_014126_2);

#define VkglTestCase_014127_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014127_2 "sub.const.lowp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014127, VkglTestCase_014127_1, VkglTestCase_014127_2);

#define VkglTestCase_014128_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014128_2 "sub.const.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014128, VkglTestCase_014128_1, VkglTestCase_014128_2);

#define VkglTestCase_014129_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014129_2 "ub.const.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014129, VkglTestCase_014129_1, VkglTestCase_014129_2);

#define VkglTestCase_014130_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014130_2 "sub.const.mediump_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014130, VkglTestCase_014130_1, VkglTestCase_014130_2);

#define VkglTestCase_014131_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014131_2 "ub.const.mediump_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014131, VkglTestCase_014131_1, VkglTestCase_014131_2);

#define VkglTestCase_014132_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014132_2 ".sub.const.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014132, VkglTestCase_014132_1, VkglTestCase_014132_2);

#define VkglTestCase_014133_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014133_2 "sub.const.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014133, VkglTestCase_014133_1, VkglTestCase_014133_2);

#define VkglTestCase_014134_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014134_2 ".sub.const.highp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014134, VkglTestCase_014134_1, VkglTestCase_014134_2);

#define VkglTestCase_014135_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014135_2 "sub.const.highp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014135, VkglTestCase_014135_1, VkglTestCase_014135_2);

#define VkglTestCase_014136_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014136_2 "ix.sub.const.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014136, VkglTestCase_014136_1, VkglTestCase_014136_2);

#define VkglTestCase_014137_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014137_2 "x.sub.const.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014137, VkglTestCase_014137_1, VkglTestCase_014137_2);

#define VkglTestCase_014138_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014138_2 "ix.sub.const.lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014138, VkglTestCase_014138_1, VkglTestCase_014138_2);

#define VkglTestCase_014139_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014139_2 "x.sub.const.lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014139, VkglTestCase_014139_1, VkglTestCase_014139_2);

#define VkglTestCase_014140_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014140_2 ".sub.const.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014140, VkglTestCase_014140_1, VkglTestCase_014140_2);

#define VkglTestCase_014141_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014141_2 "sub.const.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014141, VkglTestCase_014141_1, VkglTestCase_014141_2);

#define VkglTestCase_014142_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014142_2 "x.sub.const.mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014142, VkglTestCase_014142_1, VkglTestCase_014142_2);

#define VkglTestCase_014143_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014143_2 ".sub.const.mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014143, VkglTestCase_014143_1, VkglTestCase_014143_2);

#define VkglTestCase_014144_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014144_2 "x.sub.const.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014144, VkglTestCase_014144_1, VkglTestCase_014144_2);

#define VkglTestCase_014145_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014145_2 ".sub.const.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014145, VkglTestCase_014145_1, VkglTestCase_014145_2);

#define VkglTestCase_014146_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014146_2 "ix.sub.const.highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014146, VkglTestCase_014146_1, VkglTestCase_014146_2);

#define VkglTestCase_014147_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014147_2 "x.sub.const.highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014147, VkglTestCase_014147_1, VkglTestCase_014147_2);

#define VkglTestCase_014148_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014148_2 "x.sub.const.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014148, VkglTestCase_014148_1, VkglTestCase_014148_2);

#define VkglTestCase_014149_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014149_2 ".sub.const.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014149, VkglTestCase_014149_1, VkglTestCase_014149_2);

#define VkglTestCase_014150_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014150_2 ".sub.const.lowp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014150, VkglTestCase_014150_1, VkglTestCase_014150_2);

#define VkglTestCase_014151_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014151_2 "sub.const.lowp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014151, VkglTestCase_014151_1, VkglTestCase_014151_2);

#define VkglTestCase_014152_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014152_2 "sub.const.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014152, VkglTestCase_014152_1, VkglTestCase_014152_2);

#define VkglTestCase_014153_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014153_2 "ub.const.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014153, VkglTestCase_014153_1, VkglTestCase_014153_2);

#define VkglTestCase_014154_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014154_2 "sub.const.mediump_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014154, VkglTestCase_014154_1, VkglTestCase_014154_2);

#define VkglTestCase_014155_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014155_2 "ub.const.mediump_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014155, VkglTestCase_014155_1, VkglTestCase_014155_2);

#define VkglTestCase_014156_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014156_2 ".sub.const.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014156, VkglTestCase_014156_1, VkglTestCase_014156_2);

#define VkglTestCase_014157_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014157_2 "sub.const.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014157, VkglTestCase_014157_1, VkglTestCase_014157_2);

#define VkglTestCase_014158_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014158_2 ".sub.const.highp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014158, VkglTestCase_014158_1, VkglTestCase_014158_2);

#define VkglTestCase_014159_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014159_2 "sub.const.highp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014159, VkglTestCase_014159_1, VkglTestCase_014159_2);

#define VkglTestCase_014160_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014160_2 "x.sub.const.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014160, VkglTestCase_014160_1, VkglTestCase_014160_2);

#define VkglTestCase_014161_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014161_2 ".sub.const.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014161, VkglTestCase_014161_1, VkglTestCase_014161_2);

#define VkglTestCase_014162_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014162_2 ".sub.const.lowp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014162, VkglTestCase_014162_1, VkglTestCase_014162_2);

#define VkglTestCase_014163_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014163_2 "sub.const.lowp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014163, VkglTestCase_014163_1, VkglTestCase_014163_2);

#define VkglTestCase_014164_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014164_2 "sub.const.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014164, VkglTestCase_014164_1, VkglTestCase_014164_2);

#define VkglTestCase_014165_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014165_2 "ub.const.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014165, VkglTestCase_014165_1, VkglTestCase_014165_2);

#define VkglTestCase_014166_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014166_2 "sub.const.mediump_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014166, VkglTestCase_014166_1, VkglTestCase_014166_2);

#define VkglTestCase_014167_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014167_2 "ub.const.mediump_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014167, VkglTestCase_014167_1, VkglTestCase_014167_2);

#define VkglTestCase_014168_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014168_2 ".sub.const.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014168, VkglTestCase_014168_1, VkglTestCase_014168_2);

#define VkglTestCase_014169_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014169_2 "sub.const.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014169, VkglTestCase_014169_1, VkglTestCase_014169_2);

#define VkglTestCase_014170_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014170_2 ".sub.const.highp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014170, VkglTestCase_014170_1, VkglTestCase_014170_2);

#define VkglTestCase_014171_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014171_2 "sub.const.highp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014171, VkglTestCase_014171_1, VkglTestCase_014171_2);

#define VkglTestCase_014172_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014172_2 "x.sub.const.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014172, VkglTestCase_014172_1, VkglTestCase_014172_2);

#define VkglTestCase_014173_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014173_2 ".sub.const.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014173, VkglTestCase_014173_1, VkglTestCase_014173_2);

#define VkglTestCase_014174_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014174_2 ".sub.const.lowp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014174, VkglTestCase_014174_1, VkglTestCase_014174_2);

#define VkglTestCase_014175_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014175_2 "sub.const.lowp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014175, VkglTestCase_014175_1, VkglTestCase_014175_2);

#define VkglTestCase_014176_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014176_2 "sub.const.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014176, VkglTestCase_014176_1, VkglTestCase_014176_2);

#define VkglTestCase_014177_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014177_2 "ub.const.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014177, VkglTestCase_014177_1, VkglTestCase_014177_2);

#define VkglTestCase_014178_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014178_2 "sub.const.mediump_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014178, VkglTestCase_014178_1, VkglTestCase_014178_2);

#define VkglTestCase_014179_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014179_2 "ub.const.mediump_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014179, VkglTestCase_014179_1, VkglTestCase_014179_2);

#define VkglTestCase_014180_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014180_2 ".sub.const.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014180, VkglTestCase_014180_1, VkglTestCase_014180_2);

#define VkglTestCase_014181_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014181_2 "sub.const.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014181, VkglTestCase_014181_1, VkglTestCase_014181_2);

#define VkglTestCase_014182_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014182_2 ".sub.const.highp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014182, VkglTestCase_014182_1, VkglTestCase_014182_2);

#define VkglTestCase_014183_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014183_2 "sub.const.highp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014183, VkglTestCase_014183_1, VkglTestCase_014183_2);

#define VkglTestCase_014184_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014184_2 "ix.sub.const.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014184, VkglTestCase_014184_1, VkglTestCase_014184_2);

#define VkglTestCase_014185_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014185_2 "x.sub.const.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014185, VkglTestCase_014185_1, VkglTestCase_014185_2);

#define VkglTestCase_014186_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014186_2 "ix.sub.const.lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014186, VkglTestCase_014186_1, VkglTestCase_014186_2);

#define VkglTestCase_014187_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014187_2 "x.sub.const.lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014187, VkglTestCase_014187_1, VkglTestCase_014187_2);

#define VkglTestCase_014188_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014188_2 ".sub.const.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014188, VkglTestCase_014188_1, VkglTestCase_014188_2);

#define VkglTestCase_014189_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014189_2 "sub.const.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014189, VkglTestCase_014189_1, VkglTestCase_014189_2);

#define VkglTestCase_014190_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014190_2 "x.sub.const.mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014190, VkglTestCase_014190_1, VkglTestCase_014190_2);

#define VkglTestCase_014191_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014191_2 ".sub.const.mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014191, VkglTestCase_014191_1, VkglTestCase_014191_2);

#define VkglTestCase_014192_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014192_2 "x.sub.const.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014192, VkglTestCase_014192_1, VkglTestCase_014192_2);

#define VkglTestCase_014193_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014193_2 ".sub.const.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014193, VkglTestCase_014193_1, VkglTestCase_014193_2);

#define VkglTestCase_014194_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014194_2 "ix.sub.const.highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014194, VkglTestCase_014194_1, VkglTestCase_014194_2);

#define VkglTestCase_014195_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014195_2 "x.sub.const.highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014195, VkglTestCase_014195_1, VkglTestCase_014195_2);
