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
#include "../ActsDeqpgles30017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016284_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016284_2 "x.sub_assign.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016284, VkglTestCase_016284_1, VkglTestCase_016284_2);

#define VkglTestCase_016285_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016285_2 ".sub_assign.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016285, VkglTestCase_016285_1, VkglTestCase_016285_2);

#define VkglTestCase_016286_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016286_2 ".sub_assign.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016286, VkglTestCase_016286_1, VkglTestCase_016286_2);

#define VkglTestCase_016287_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016287_2 "sub_assign.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016287, VkglTestCase_016287_1, VkglTestCase_016287_2);

#define VkglTestCase_016288_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016288_2 "x.sub_assign.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016288, VkglTestCase_016288_1, VkglTestCase_016288_2);

#define VkglTestCase_016289_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016289_2 ".sub_assign.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016289, VkglTestCase_016289_1, VkglTestCase_016289_2);

#define VkglTestCase_016290_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016290_2 ".sub_assign.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016290, VkglTestCase_016290_1, VkglTestCase_016290_2);

#define VkglTestCase_016291_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016291_2 "sub_assign.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016291, VkglTestCase_016291_1, VkglTestCase_016291_2);

#define VkglTestCase_016292_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016292_2 "sub_assign.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016292, VkglTestCase_016292_1, VkglTestCase_016292_2);

#define VkglTestCase_016293_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_016293_2 "ub_assign.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016293, VkglTestCase_016293_1, VkglTestCase_016293_2);

#define VkglTestCase_016294_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016294_2 ".sub_assign.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016294, VkglTestCase_016294_1, VkglTestCase_016294_2);

#define VkglTestCase_016295_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016295_2 "sub_assign.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016295, VkglTestCase_016295_1, VkglTestCase_016295_2);

#define VkglTestCase_016296_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016296_2 ".sub_assign.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016296, VkglTestCase_016296_1, VkglTestCase_016296_2);

#define VkglTestCase_016297_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016297_2 "sub_assign.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016297, VkglTestCase_016297_1, VkglTestCase_016297_2);

#define VkglTestCase_016298_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016298_2 "sub_assign.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016298, VkglTestCase_016298_1, VkglTestCase_016298_2);

#define VkglTestCase_016299_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_016299_2 "ub_assign.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016299, VkglTestCase_016299_1, VkglTestCase_016299_2);

#define VkglTestCase_016300_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016300_2 ".sub_assign.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016300, VkglTestCase_016300_1, VkglTestCase_016300_2);

#define VkglTestCase_016301_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016301_2 "sub_assign.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016301, VkglTestCase_016301_1, VkglTestCase_016301_2);

#define VkglTestCase_016302_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016302_2 ".sub_assign.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016302, VkglTestCase_016302_1, VkglTestCase_016302_2);

#define VkglTestCase_016303_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016303_2 "sub_assign.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016303, VkglTestCase_016303_1, VkglTestCase_016303_2);

#define VkglTestCase_016304_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016304_2 "sub_assign.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016304, VkglTestCase_016304_1, VkglTestCase_016304_2);

#define VkglTestCase_016305_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_016305_2 "ub_assign.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016305, VkglTestCase_016305_1, VkglTestCase_016305_2);

#define VkglTestCase_016306_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016306_2 ".sub_assign.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016306, VkglTestCase_016306_1, VkglTestCase_016306_2);

#define VkglTestCase_016307_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016307_2 "sub_assign.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016307, VkglTestCase_016307_1, VkglTestCase_016307_2);

#define VkglTestCase_016308_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016308_2 "x.sub_assign.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016308, VkglTestCase_016308_1, VkglTestCase_016308_2);

#define VkglTestCase_016309_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016309_2 ".sub_assign.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016309, VkglTestCase_016309_1, VkglTestCase_016309_2);

#define VkglTestCase_016310_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016310_2 ".sub_assign.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016310, VkglTestCase_016310_1, VkglTestCase_016310_2);

#define VkglTestCase_016311_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016311_2 "sub_assign.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016311, VkglTestCase_016311_1, VkglTestCase_016311_2);

#define VkglTestCase_016312_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016312_2 "x.sub_assign.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016312, VkglTestCase_016312_1, VkglTestCase_016312_2);

#define VkglTestCase_016313_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016313_2 ".sub_assign.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016313, VkglTestCase_016313_1, VkglTestCase_016313_2);

#define VkglTestCase_016314_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016314_2 ".sub_assign.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016314, VkglTestCase_016314_1, VkglTestCase_016314_2);

#define VkglTestCase_016315_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016315_2 "sub_assign.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016315, VkglTestCase_016315_1, VkglTestCase_016315_2);

#define VkglTestCase_016316_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016316_2 "sub_assign.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016316, VkglTestCase_016316_1, VkglTestCase_016316_2);

#define VkglTestCase_016317_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_016317_2 "ub_assign.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016317, VkglTestCase_016317_1, VkglTestCase_016317_2);

#define VkglTestCase_016318_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016318_2 ".sub_assign.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016318, VkglTestCase_016318_1, VkglTestCase_016318_2);

#define VkglTestCase_016319_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016319_2 "sub_assign.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016319, VkglTestCase_016319_1, VkglTestCase_016319_2);

#define VkglTestCase_016320_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016320_2 ".sub_assign.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016320, VkglTestCase_016320_1, VkglTestCase_016320_2);

#define VkglTestCase_016321_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016321_2 "sub_assign.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016321, VkglTestCase_016321_1, VkglTestCase_016321_2);

#define VkglTestCase_016322_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016322_2 "sub_assign.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016322, VkglTestCase_016322_1, VkglTestCase_016322_2);

#define VkglTestCase_016323_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_016323_2 "ub_assign.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016323, VkglTestCase_016323_1, VkglTestCase_016323_2);

#define VkglTestCase_016324_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016324_2 ".sub_assign.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016324, VkglTestCase_016324_1, VkglTestCase_016324_2);

#define VkglTestCase_016325_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016325_2 "sub_assign.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016325, VkglTestCase_016325_1, VkglTestCase_016325_2);

#define VkglTestCase_016326_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016326_2 ".sub_assign.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016326, VkglTestCase_016326_1, VkglTestCase_016326_2);

#define VkglTestCase_016327_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016327_2 "sub_assign.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016327, VkglTestCase_016327_1, VkglTestCase_016327_2);

#define VkglTestCase_016328_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016328_2 "sub_assign.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016328, VkglTestCase_016328_1, VkglTestCase_016328_2);

#define VkglTestCase_016329_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_016329_2 "ub_assign.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016329, VkglTestCase_016329_1, VkglTestCase_016329_2);

#define VkglTestCase_016330_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016330_2 ".sub_assign.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016330, VkglTestCase_016330_1, VkglTestCase_016330_2);

#define VkglTestCase_016331_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016331_2 "sub_assign.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016331, VkglTestCase_016331_1, VkglTestCase_016331_2);

#define VkglTestCase_016332_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016332_2 "x.sub_assign.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016332, VkglTestCase_016332_1, VkglTestCase_016332_2);

#define VkglTestCase_016333_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016333_2 ".sub_assign.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016333, VkglTestCase_016333_1, VkglTestCase_016333_2);

#define VkglTestCase_016334_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016334_2 ".sub_assign.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016334, VkglTestCase_016334_1, VkglTestCase_016334_2);

#define VkglTestCase_016335_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016335_2 "sub_assign.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016335, VkglTestCase_016335_1, VkglTestCase_016335_2);

#define VkglTestCase_016336_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016336_2 "x.sub_assign.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016336, VkglTestCase_016336_1, VkglTestCase_016336_2);

#define VkglTestCase_016337_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016337_2 ".sub_assign.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016337, VkglTestCase_016337_1, VkglTestCase_016337_2);
