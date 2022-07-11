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
#include "../ActsDeqpgles30016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015600_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015600_2 "x.div.dynamic.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015600, VkglTestCase_015600_1, VkglTestCase_015600_2);

#define VkglTestCase_015601_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015601_2 ".div.dynamic.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015601, VkglTestCase_015601_1, VkglTestCase_015601_2);

#define VkglTestCase_015602_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015602_2 "x.div.dynamic.lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015602, VkglTestCase_015602_1, VkglTestCase_015602_2);

#define VkglTestCase_015603_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015603_2 ".div.dynamic.lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015603, VkglTestCase_015603_1, VkglTestCase_015603_2);

#define VkglTestCase_015604_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015604_2 "div.dynamic.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015604, VkglTestCase_015604_1, VkglTestCase_015604_2);

#define VkglTestCase_015605_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015605_2 "iv.dynamic.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015605, VkglTestCase_015605_1, VkglTestCase_015605_2);

#define VkglTestCase_015606_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015606_2 ".div.dynamic.mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015606, VkglTestCase_015606_1, VkglTestCase_015606_2);

#define VkglTestCase_015607_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015607_2 "div.dynamic.mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015607, VkglTestCase_015607_1, VkglTestCase_015607_2);

#define VkglTestCase_015608_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015608_2 ".div.dynamic.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015608, VkglTestCase_015608_1, VkglTestCase_015608_2);

#define VkglTestCase_015609_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015609_2 "div.dynamic.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015609, VkglTestCase_015609_1, VkglTestCase_015609_2);

#define VkglTestCase_015610_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015610_2 "x.div.dynamic.highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015610, VkglTestCase_015610_1, VkglTestCase_015610_2);

#define VkglTestCase_015611_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015611_2 ".div.dynamic.highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015611, VkglTestCase_015611_1, VkglTestCase_015611_2);

#define VkglTestCase_015612_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015612_2 ".div.dynamic.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015612, VkglTestCase_015612_1, VkglTestCase_015612_2);

#define VkglTestCase_015613_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015613_2 "div.dynamic.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015613, VkglTestCase_015613_1, VkglTestCase_015613_2);

#define VkglTestCase_015614_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015614_2 "div.dynamic.lowp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015614, VkglTestCase_015614_1, VkglTestCase_015614_2);

#define VkglTestCase_015615_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015615_2 "iv.dynamic.lowp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015615, VkglTestCase_015615_1, VkglTestCase_015615_2);

#define VkglTestCase_015616_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015616_2 "iv.dynamic.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015616, VkglTestCase_015616_1, VkglTestCase_015616_2);

#define VkglTestCase_015617_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015617_2 "v.dynamic.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015617, VkglTestCase_015617_1, VkglTestCase_015617_2);

#define VkglTestCase_015618_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015618_2 "iv.dynamic.mediump_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015618, VkglTestCase_015618_1, VkglTestCase_015618_2);

#define VkglTestCase_015619_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015619_2 "v.dynamic.mediump_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015619, VkglTestCase_015619_1, VkglTestCase_015619_2);

#define VkglTestCase_015620_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015620_2 "div.dynamic.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015620, VkglTestCase_015620_1, VkglTestCase_015620_2);

#define VkglTestCase_015621_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015621_2 "iv.dynamic.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015621, VkglTestCase_015621_1, VkglTestCase_015621_2);

#define VkglTestCase_015622_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015622_2 "div.dynamic.highp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015622, VkglTestCase_015622_1, VkglTestCase_015622_2);

#define VkglTestCase_015623_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015623_2 "iv.dynamic.highp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015623, VkglTestCase_015623_1, VkglTestCase_015623_2);

#define VkglTestCase_015624_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015624_2 ".div.dynamic.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015624, VkglTestCase_015624_1, VkglTestCase_015624_2);

#define VkglTestCase_015625_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015625_2 "div.dynamic.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015625, VkglTestCase_015625_1, VkglTestCase_015625_2);

#define VkglTestCase_015626_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015626_2 "div.dynamic.lowp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015626, VkglTestCase_015626_1, VkglTestCase_015626_2);

#define VkglTestCase_015627_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015627_2 "iv.dynamic.lowp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015627, VkglTestCase_015627_1, VkglTestCase_015627_2);

#define VkglTestCase_015628_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015628_2 "iv.dynamic.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015628, VkglTestCase_015628_1, VkglTestCase_015628_2);

#define VkglTestCase_015629_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015629_2 "v.dynamic.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015629, VkglTestCase_015629_1, VkglTestCase_015629_2);

#define VkglTestCase_015630_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015630_2 "iv.dynamic.mediump_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015630, VkglTestCase_015630_1, VkglTestCase_015630_2);

#define VkglTestCase_015631_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015631_2 "v.dynamic.mediump_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015631, VkglTestCase_015631_1, VkglTestCase_015631_2);

#define VkglTestCase_015632_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015632_2 "div.dynamic.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015632, VkglTestCase_015632_1, VkglTestCase_015632_2);

#define VkglTestCase_015633_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015633_2 "iv.dynamic.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015633, VkglTestCase_015633_1, VkglTestCase_015633_2);

#define VkglTestCase_015634_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015634_2 "div.dynamic.highp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015634, VkglTestCase_015634_1, VkglTestCase_015634_2);

#define VkglTestCase_015635_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015635_2 "iv.dynamic.highp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015635, VkglTestCase_015635_1, VkglTestCase_015635_2);

#define VkglTestCase_015636_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015636_2 ".div.dynamic.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015636, VkglTestCase_015636_1, VkglTestCase_015636_2);

#define VkglTestCase_015637_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015637_2 "div.dynamic.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015637, VkglTestCase_015637_1, VkglTestCase_015637_2);

#define VkglTestCase_015638_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015638_2 "div.dynamic.lowp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015638, VkglTestCase_015638_1, VkglTestCase_015638_2);

#define VkglTestCase_015639_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015639_2 "iv.dynamic.lowp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015639, VkglTestCase_015639_1, VkglTestCase_015639_2);

#define VkglTestCase_015640_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015640_2 "iv.dynamic.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015640, VkglTestCase_015640_1, VkglTestCase_015640_2);

#define VkglTestCase_015641_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015641_2 "v.dynamic.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015641, VkglTestCase_015641_1, VkglTestCase_015641_2);

#define VkglTestCase_015642_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015642_2 "iv.dynamic.mediump_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015642, VkglTestCase_015642_1, VkglTestCase_015642_2);

#define VkglTestCase_015643_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015643_2 "v.dynamic.mediump_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015643, VkglTestCase_015643_1, VkglTestCase_015643_2);

#define VkglTestCase_015644_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015644_2 "div.dynamic.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015644, VkglTestCase_015644_1, VkglTestCase_015644_2);

#define VkglTestCase_015645_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015645_2 "iv.dynamic.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015645, VkglTestCase_015645_1, VkglTestCase_015645_2);

#define VkglTestCase_015646_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015646_2 "div.dynamic.highp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015646, VkglTestCase_015646_1, VkglTestCase_015646_2);

#define VkglTestCase_015647_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015647_2 "iv.dynamic.highp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015647, VkglTestCase_015647_1, VkglTestCase_015647_2);

#define VkglTestCase_015648_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015648_2 "x.div.dynamic.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015648, VkglTestCase_015648_1, VkglTestCase_015648_2);

#define VkglTestCase_015649_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015649_2 ".div.dynamic.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015649, VkglTestCase_015649_1, VkglTestCase_015649_2);

#define VkglTestCase_015650_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015650_2 "x.div.dynamic.lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015650, VkglTestCase_015650_1, VkglTestCase_015650_2);

#define VkglTestCase_015651_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015651_2 ".div.dynamic.lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015651, VkglTestCase_015651_1, VkglTestCase_015651_2);

#define VkglTestCase_015652_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015652_2 "div.dynamic.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015652, VkglTestCase_015652_1, VkglTestCase_015652_2);

#define VkglTestCase_015653_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015653_2 "iv.dynamic.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015653, VkglTestCase_015653_1, VkglTestCase_015653_2);

#define VkglTestCase_015654_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015654_2 ".div.dynamic.mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015654, VkglTestCase_015654_1, VkglTestCase_015654_2);

#define VkglTestCase_015655_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015655_2 "div.dynamic.mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015655, VkglTestCase_015655_1, VkglTestCase_015655_2);

#define VkglTestCase_015656_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015656_2 ".div.dynamic.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015656, VkglTestCase_015656_1, VkglTestCase_015656_2);

#define VkglTestCase_015657_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015657_2 "div.dynamic.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015657, VkglTestCase_015657_1, VkglTestCase_015657_2);

#define VkglTestCase_015658_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015658_2 "x.div.dynamic.highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015658, VkglTestCase_015658_1, VkglTestCase_015658_2);

#define VkglTestCase_015659_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015659_2 ".div.dynamic.highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015659, VkglTestCase_015659_1, VkglTestCase_015659_2);

#define VkglTestCase_015660_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015660_2 ".div.dynamic.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015660, VkglTestCase_015660_1, VkglTestCase_015660_2);

#define VkglTestCase_015661_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015661_2 "div.dynamic.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015661, VkglTestCase_015661_1, VkglTestCase_015661_2);

#define VkglTestCase_015662_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015662_2 "div.dynamic.lowp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015662, VkglTestCase_015662_1, VkglTestCase_015662_2);

#define VkglTestCase_015663_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015663_2 "iv.dynamic.lowp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015663, VkglTestCase_015663_1, VkglTestCase_015663_2);

#define VkglTestCase_015664_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015664_2 "iv.dynamic.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015664, VkglTestCase_015664_1, VkglTestCase_015664_2);

#define VkglTestCase_015665_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015665_2 "v.dynamic.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015665, VkglTestCase_015665_1, VkglTestCase_015665_2);

#define VkglTestCase_015666_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015666_2 "iv.dynamic.mediump_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015666, VkglTestCase_015666_1, VkglTestCase_015666_2);

#define VkglTestCase_015667_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015667_2 "v.dynamic.mediump_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015667, VkglTestCase_015667_1, VkglTestCase_015667_2);

#define VkglTestCase_015668_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015668_2 "div.dynamic.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015668, VkglTestCase_015668_1, VkglTestCase_015668_2);

#define VkglTestCase_015669_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015669_2 "iv.dynamic.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015669, VkglTestCase_015669_1, VkglTestCase_015669_2);

#define VkglTestCase_015670_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015670_2 "div.dynamic.highp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015670, VkglTestCase_015670_1, VkglTestCase_015670_2);

#define VkglTestCase_015671_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015671_2 "iv.dynamic.highp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015671, VkglTestCase_015671_1, VkglTestCase_015671_2);

#define VkglTestCase_015672_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015672_2 ".div.dynamic.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015672, VkglTestCase_015672_1, VkglTestCase_015672_2);

#define VkglTestCase_015673_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015673_2 "div.dynamic.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015673, VkglTestCase_015673_1, VkglTestCase_015673_2);

#define VkglTestCase_015674_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015674_2 "div.dynamic.lowp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015674, VkglTestCase_015674_1, VkglTestCase_015674_2);

#define VkglTestCase_015675_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015675_2 "iv.dynamic.lowp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015675, VkglTestCase_015675_1, VkglTestCase_015675_2);

#define VkglTestCase_015676_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015676_2 "iv.dynamic.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015676, VkglTestCase_015676_1, VkglTestCase_015676_2);

#define VkglTestCase_015677_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015677_2 "v.dynamic.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015677, VkglTestCase_015677_1, VkglTestCase_015677_2);

#define VkglTestCase_015678_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015678_2 "iv.dynamic.mediump_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015678, VkglTestCase_015678_1, VkglTestCase_015678_2);

#define VkglTestCase_015679_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015679_2 "v.dynamic.mediump_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015679, VkglTestCase_015679_1, VkglTestCase_015679_2);

#define VkglTestCase_015680_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015680_2 "div.dynamic.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015680, VkglTestCase_015680_1, VkglTestCase_015680_2);

#define VkglTestCase_015681_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015681_2 "iv.dynamic.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015681, VkglTestCase_015681_1, VkglTestCase_015681_2);

#define VkglTestCase_015682_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015682_2 "div.dynamic.highp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015682, VkglTestCase_015682_1, VkglTestCase_015682_2);

#define VkglTestCase_015683_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015683_2 "iv.dynamic.highp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015683, VkglTestCase_015683_1, VkglTestCase_015683_2);

#define VkglTestCase_015684_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015684_2 ".div.dynamic.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015684, VkglTestCase_015684_1, VkglTestCase_015684_2);

#define VkglTestCase_015685_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015685_2 "div.dynamic.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015685, VkglTestCase_015685_1, VkglTestCase_015685_2);

#define VkglTestCase_015686_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015686_2 "div.dynamic.lowp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015686, VkglTestCase_015686_1, VkglTestCase_015686_2);

#define VkglTestCase_015687_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015687_2 "iv.dynamic.lowp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015687, VkglTestCase_015687_1, VkglTestCase_015687_2);

#define VkglTestCase_015688_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015688_2 "iv.dynamic.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015688, VkglTestCase_015688_1, VkglTestCase_015688_2);

#define VkglTestCase_015689_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015689_2 "v.dynamic.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015689, VkglTestCase_015689_1, VkglTestCase_015689_2);

#define VkglTestCase_015690_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015690_2 "iv.dynamic.mediump_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015690, VkglTestCase_015690_1, VkglTestCase_015690_2);

#define VkglTestCase_015691_1 "dEQP-GLES3.functional.shaders.matrix.di"
#define VkglTestCase_015691_2 "v.dynamic.mediump_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015691, VkglTestCase_015691_1, VkglTestCase_015691_2);

#define VkglTestCase_015692_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015692_2 "div.dynamic.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015692, VkglTestCase_015692_1, VkglTestCase_015692_2);

#define VkglTestCase_015693_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015693_2 "iv.dynamic.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015693, VkglTestCase_015693_1, VkglTestCase_015693_2);

#define VkglTestCase_015694_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015694_2 "div.dynamic.highp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015694, VkglTestCase_015694_1, VkglTestCase_015694_2);

#define VkglTestCase_015695_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015695_2 "iv.dynamic.highp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015695, VkglTestCase_015695_1, VkglTestCase_015695_2);

#define VkglTestCase_015696_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015696_2 "x.div.dynamic.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015696, VkglTestCase_015696_1, VkglTestCase_015696_2);

#define VkglTestCase_015697_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015697_2 ".div.dynamic.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015697, VkglTestCase_015697_1, VkglTestCase_015697_2);

#define VkglTestCase_015698_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015698_2 "x.div.dynamic.lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015698, VkglTestCase_015698_1, VkglTestCase_015698_2);

#define VkglTestCase_015699_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015699_2 ".div.dynamic.lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015699, VkglTestCase_015699_1, VkglTestCase_015699_2);

#define VkglTestCase_015700_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015700_2 "div.dynamic.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015700, VkglTestCase_015700_1, VkglTestCase_015700_2);

#define VkglTestCase_015701_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015701_2 "iv.dynamic.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015701, VkglTestCase_015701_1, VkglTestCase_015701_2);

#define VkglTestCase_015702_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015702_2 ".div.dynamic.mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015702, VkglTestCase_015702_1, VkglTestCase_015702_2);

#define VkglTestCase_015703_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015703_2 "div.dynamic.mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015703, VkglTestCase_015703_1, VkglTestCase_015703_2);

#define VkglTestCase_015704_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015704_2 ".div.dynamic.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015704, VkglTestCase_015704_1, VkglTestCase_015704_2);

#define VkglTestCase_015705_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015705_2 "div.dynamic.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015705, VkglTestCase_015705_1, VkglTestCase_015705_2);

#define VkglTestCase_015706_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015706_2 "x.div.dynamic.highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015706, VkglTestCase_015706_1, VkglTestCase_015706_2);

#define VkglTestCase_015707_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015707_2 ".div.dynamic.highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015707, VkglTestCase_015707_1, VkglTestCase_015707_2);
