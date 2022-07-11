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
#include "../ActsDeqpgles30010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009686_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009686_2 "_operator.sub_assign_effect.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009686, VkglTestCase_009686_1, VkglTestCase_009686_2);

#define VkglTestCase_009687_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009687_2 "operator.sub_assign_effect.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009687, VkglTestCase_009687_1, VkglTestCase_009687_2);

#define VkglTestCase_009688_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009688_2 "operator.sub_assign_effect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009688, VkglTestCase_009688_1, VkglTestCase_009688_2);

#define VkglTestCase_009689_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009689_2 "perator.sub_assign_effect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009689, VkglTestCase_009689_1, VkglTestCase_009689_2);

#define VkglTestCase_009690_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009690_2 "_operator.sub_assign_effect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009690, VkglTestCase_009690_1, VkglTestCase_009690_2);

#define VkglTestCase_009691_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009691_2 "operator.sub_assign_effect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009691, VkglTestCase_009691_1, VkglTestCase_009691_2);

#define VkglTestCase_009692_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009692_2 "y_operator.sub_assign_effect.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009692, VkglTestCase_009692_1, VkglTestCase_009692_2);

#define VkglTestCase_009693_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009693_2 "_operator.sub_assign_effect.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009693, VkglTestCase_009693_1, VkglTestCase_009693_2);

#define VkglTestCase_009694_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009694_2 "operator.sub_assign_effect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009694, VkglTestCase_009694_1, VkglTestCase_009694_2);

#define VkglTestCase_009695_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009695_2 "perator.sub_assign_effect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009695, VkglTestCase_009695_1, VkglTestCase_009695_2);

#define VkglTestCase_009696_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009696_2 "_operator.sub_assign_effect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009696, VkglTestCase_009696_1, VkglTestCase_009696_2);

#define VkglTestCase_009697_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009697_2 "operator.sub_assign_effect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009697, VkglTestCase_009697_1, VkglTestCase_009697_2);

#define VkglTestCase_009698_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009698_2 "y_operator.sub_assign_effect.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009698, VkglTestCase_009698_1, VkglTestCase_009698_2);

#define VkglTestCase_009699_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009699_2 "_operator.sub_assign_effect.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009699, VkglTestCase_009699_1, VkglTestCase_009699_2);

#define VkglTestCase_009700_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009700_2 "operator.sub_assign_effect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009700, VkglTestCase_009700_1, VkglTestCase_009700_2);

#define VkglTestCase_009701_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009701_2 "perator.sub_assign_effect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009701, VkglTestCase_009701_1, VkglTestCase_009701_2);

#define VkglTestCase_009702_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009702_2 "_operator.sub_assign_effect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009702, VkglTestCase_009702_1, VkglTestCase_009702_2);

#define VkglTestCase_009703_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009703_2 "operator.sub_assign_effect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009703, VkglTestCase_009703_1, VkglTestCase_009703_2);

#define VkglTestCase_009704_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009704_2 "y_operator.sub_assign_effect.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009704, VkglTestCase_009704_1, VkglTestCase_009704_2);

#define VkglTestCase_009705_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009705_2 "_operator.sub_assign_effect.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009705, VkglTestCase_009705_1, VkglTestCase_009705_2);

#define VkglTestCase_009706_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009706_2 "operator.sub_assign_effect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009706, VkglTestCase_009706_1, VkglTestCase_009706_2);

#define VkglTestCase_009707_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009707_2 "perator.sub_assign_effect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009707, VkglTestCase_009707_1, VkglTestCase_009707_2);

#define VkglTestCase_009708_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009708_2 "_operator.sub_assign_effect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009708, VkglTestCase_009708_1, VkglTestCase_009708_2);

#define VkglTestCase_009709_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009709_2 "operator.sub_assign_effect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009709, VkglTestCase_009709_1, VkglTestCase_009709_2);

#define VkglTestCase_009710_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009710_2 "y_operator.sub_assign_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009710, VkglTestCase_009710_1, VkglTestCase_009710_2);

#define VkglTestCase_009711_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009711_2 "_operator.sub_assign_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009711, VkglTestCase_009711_1, VkglTestCase_009711_2);

#define VkglTestCase_009712_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009712_2 "_operator.sub_assign_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009712, VkglTestCase_009712_1, VkglTestCase_009712_2);

#define VkglTestCase_009713_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009713_2 "operator.sub_assign_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009713, VkglTestCase_009713_1, VkglTestCase_009713_2);

#define VkglTestCase_009714_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009714_2 "_operator.sub_assign_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009714, VkglTestCase_009714_1, VkglTestCase_009714_2);

#define VkglTestCase_009715_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009715_2 "operator.sub_assign_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009715, VkglTestCase_009715_1, VkglTestCase_009715_2);

#define VkglTestCase_009716_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009716_2 "operator.sub_assign_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009716, VkglTestCase_009716_1, VkglTestCase_009716_2);

#define VkglTestCase_009717_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009717_2 "perator.sub_assign_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009717, VkglTestCase_009717_1, VkglTestCase_009717_2);

#define VkglTestCase_009718_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009718_2 "_operator.sub_assign_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009718, VkglTestCase_009718_1, VkglTestCase_009718_2);

#define VkglTestCase_009719_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009719_2 "operator.sub_assign_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009719, VkglTestCase_009719_1, VkglTestCase_009719_2);

#define VkglTestCase_009720_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009720_2 "operator.sub_assign_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009720, VkglTestCase_009720_1, VkglTestCase_009720_2);

#define VkglTestCase_009721_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009721_2 "perator.sub_assign_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009721, VkglTestCase_009721_1, VkglTestCase_009721_2);

#define VkglTestCase_009722_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009722_2 "_operator.sub_assign_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009722, VkglTestCase_009722_1, VkglTestCase_009722_2);

#define VkglTestCase_009723_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009723_2 "operator.sub_assign_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009723, VkglTestCase_009723_1, VkglTestCase_009723_2);

#define VkglTestCase_009724_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009724_2 "operator.sub_assign_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009724, VkglTestCase_009724_1, VkglTestCase_009724_2);

#define VkglTestCase_009725_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009725_2 "perator.sub_assign_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009725, VkglTestCase_009725_1, VkglTestCase_009725_2);

#define VkglTestCase_009726_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009726_2 "y_operator.sub_assign_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009726, VkglTestCase_009726_1, VkglTestCase_009726_2);

#define VkglTestCase_009727_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009727_2 "_operator.sub_assign_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009727, VkglTestCase_009727_1, VkglTestCase_009727_2);

#define VkglTestCase_009728_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009728_2 "_operator.sub_assign_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009728, VkglTestCase_009728_1, VkglTestCase_009728_2);

#define VkglTestCase_009729_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009729_2 "operator.sub_assign_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009729, VkglTestCase_009729_1, VkglTestCase_009729_2);

#define VkglTestCase_009730_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009730_2 "_operator.sub_assign_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009730, VkglTestCase_009730_1, VkglTestCase_009730_2);

#define VkglTestCase_009731_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009731_2 "operator.sub_assign_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009731, VkglTestCase_009731_1, VkglTestCase_009731_2);

#define VkglTestCase_009732_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009732_2 "_operator.sub_assign_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009732, VkglTestCase_009732_1, VkglTestCase_009732_2);

#define VkglTestCase_009733_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009733_2 "operator.sub_assign_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009733, VkglTestCase_009733_1, VkglTestCase_009733_2);

#define VkglTestCase_009734_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009734_2 "y_operator.sub_assign_effect.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009734, VkglTestCase_009734_1, VkglTestCase_009734_2);

#define VkglTestCase_009735_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009735_2 "_operator.sub_assign_effect.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009735, VkglTestCase_009735_1, VkglTestCase_009735_2);

#define VkglTestCase_009736_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009736_2 "operator.sub_assign_effect.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009736, VkglTestCase_009736_1, VkglTestCase_009736_2);

#define VkglTestCase_009737_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009737_2 "perator.sub_assign_effect.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009737, VkglTestCase_009737_1, VkglTestCase_009737_2);

#define VkglTestCase_009738_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009738_2 "_operator.sub_assign_effect.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009738, VkglTestCase_009738_1, VkglTestCase_009738_2);

#define VkglTestCase_009739_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009739_2 "operator.sub_assign_effect.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009739, VkglTestCase_009739_1, VkglTestCase_009739_2);

#define VkglTestCase_009740_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009740_2 "operator.sub_assign_effect.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009740, VkglTestCase_009740_1, VkglTestCase_009740_2);

#define VkglTestCase_009741_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009741_2 "perator.sub_assign_effect.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009741, VkglTestCase_009741_1, VkglTestCase_009741_2);

#define VkglTestCase_009742_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009742_2 "_operator.sub_assign_effect.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009742, VkglTestCase_009742_1, VkglTestCase_009742_2);

#define VkglTestCase_009743_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009743_2 "operator.sub_assign_effect.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009743, VkglTestCase_009743_1, VkglTestCase_009743_2);

#define VkglTestCase_009744_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009744_2 "operator.sub_assign_effect.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009744, VkglTestCase_009744_1, VkglTestCase_009744_2);

#define VkglTestCase_009745_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009745_2 "perator.sub_assign_effect.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009745, VkglTestCase_009745_1, VkglTestCase_009745_2);

#define VkglTestCase_009746_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009746_2 "_operator.sub_assign_effect.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009746, VkglTestCase_009746_1, VkglTestCase_009746_2);

#define VkglTestCase_009747_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009747_2 "operator.sub_assign_effect.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009747, VkglTestCase_009747_1, VkglTestCase_009747_2);

#define VkglTestCase_009748_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009748_2 "operator.sub_assign_effect.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009748, VkglTestCase_009748_1, VkglTestCase_009748_2);

#define VkglTestCase_009749_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009749_2 "perator.sub_assign_effect.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009749, VkglTestCase_009749_1, VkglTestCase_009749_2);

#define VkglTestCase_009750_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009750_2 "_operator.sub_assign_effect.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009750, VkglTestCase_009750_1, VkglTestCase_009750_2);

#define VkglTestCase_009751_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009751_2 "operator.sub_assign_effect.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009751, VkglTestCase_009751_1, VkglTestCase_009751_2);

#define VkglTestCase_009752_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009752_2 "_operator.sub_assign_effect.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009752, VkglTestCase_009752_1, VkglTestCase_009752_2);

#define VkglTestCase_009753_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009753_2 "operator.sub_assign_effect.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009753, VkglTestCase_009753_1, VkglTestCase_009753_2);

#define VkglTestCase_009754_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009754_2 "_operator.sub_assign_effect.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009754, VkglTestCase_009754_1, VkglTestCase_009754_2);

#define VkglTestCase_009755_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009755_2 "operator.sub_assign_effect.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009755, VkglTestCase_009755_1, VkglTestCase_009755_2);

#define VkglTestCase_009756_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009756_2 "_operator.sub_assign_effect.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009756, VkglTestCase_009756_1, VkglTestCase_009756_2);

#define VkglTestCase_009757_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009757_2 "operator.sub_assign_effect.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009757, VkglTestCase_009757_1, VkglTestCase_009757_2);

#define VkglTestCase_009758_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009758_2 "perator.sub_assign_effect.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009758, VkglTestCase_009758_1, VkglTestCase_009758_2);

#define VkglTestCase_009759_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009759_2 "erator.sub_assign_effect.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009759, VkglTestCase_009759_1, VkglTestCase_009759_2);

#define VkglTestCase_009760_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009760_2 "rator.sub_assign_effect.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009760, VkglTestCase_009760_1, VkglTestCase_009760_2);

#define VkglTestCase_009761_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009761_2 "ator.sub_assign_effect.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009761, VkglTestCase_009761_1, VkglTestCase_009761_2);

#define VkglTestCase_009762_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009762_2 "erator.sub_assign_effect.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009762, VkglTestCase_009762_1, VkglTestCase_009762_2);

#define VkglTestCase_009763_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009763_2 "rator.sub_assign_effect.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009763, VkglTestCase_009763_1, VkglTestCase_009763_2);

#define VkglTestCase_009764_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009764_2 "perator.sub_assign_effect.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009764, VkglTestCase_009764_1, VkglTestCase_009764_2);

#define VkglTestCase_009765_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009765_2 "erator.sub_assign_effect.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009765, VkglTestCase_009765_1, VkglTestCase_009765_2);

#define VkglTestCase_009766_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009766_2 "rator.sub_assign_effect.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009766, VkglTestCase_009766_1, VkglTestCase_009766_2);

#define VkglTestCase_009767_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009767_2 "ator.sub_assign_effect.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009767, VkglTestCase_009767_1, VkglTestCase_009767_2);

#define VkglTestCase_009768_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009768_2 "erator.sub_assign_effect.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009768, VkglTestCase_009768_1, VkglTestCase_009768_2);

#define VkglTestCase_009769_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009769_2 "rator.sub_assign_effect.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009769, VkglTestCase_009769_1, VkglTestCase_009769_2);

#define VkglTestCase_009770_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009770_2 "perator.sub_assign_effect.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009770, VkglTestCase_009770_1, VkglTestCase_009770_2);

#define VkglTestCase_009771_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009771_2 "erator.sub_assign_effect.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009771, VkglTestCase_009771_1, VkglTestCase_009771_2);

#define VkglTestCase_009772_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009772_2 "rator.sub_assign_effect.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009772, VkglTestCase_009772_1, VkglTestCase_009772_2);

#define VkglTestCase_009773_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009773_2 "ator.sub_assign_effect.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009773, VkglTestCase_009773_1, VkglTestCase_009773_2);

#define VkglTestCase_009774_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009774_2 "erator.sub_assign_effect.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009774, VkglTestCase_009774_1, VkglTestCase_009774_2);

#define VkglTestCase_009775_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009775_2 "rator.sub_assign_effect.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009775, VkglTestCase_009775_1, VkglTestCase_009775_2);

#define VkglTestCase_009776_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009776_2 "perator.sub_assign_effect.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009776, VkglTestCase_009776_1, VkglTestCase_009776_2);

#define VkglTestCase_009777_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009777_2 "erator.sub_assign_effect.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009777, VkglTestCase_009777_1, VkglTestCase_009777_2);

#define VkglTestCase_009778_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009778_2 "erator.sub_assign_effect.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009778, VkglTestCase_009778_1, VkglTestCase_009778_2);

#define VkglTestCase_009779_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009779_2 "rator.sub_assign_effect.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009779, VkglTestCase_009779_1, VkglTestCase_009779_2);

#define VkglTestCase_009780_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009780_2 "perator.sub_assign_effect.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009780, VkglTestCase_009780_1, VkglTestCase_009780_2);

#define VkglTestCase_009781_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009781_2 "erator.sub_assign_effect.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009781, VkglTestCase_009781_1, VkglTestCase_009781_2);

#define VkglTestCase_009782_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009782_2 "erator.sub_assign_effect.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009782, VkglTestCase_009782_1, VkglTestCase_009782_2);

#define VkglTestCase_009783_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009783_2 "rator.sub_assign_effect.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009783, VkglTestCase_009783_1, VkglTestCase_009783_2);

#define VkglTestCase_009784_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009784_2 "perator.sub_assign_effect.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009784, VkglTestCase_009784_1, VkglTestCase_009784_2);

#define VkglTestCase_009785_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009785_2 "erator.sub_assign_effect.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009785, VkglTestCase_009785_1, VkglTestCase_009785_2);

#define VkglTestCase_009786_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009786_2 "erator.sub_assign_effect.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009786, VkglTestCase_009786_1, VkglTestCase_009786_2);

#define VkglTestCase_009787_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009787_2 "rator.sub_assign_effect.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009787, VkglTestCase_009787_1, VkglTestCase_009787_2);

#define VkglTestCase_009788_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009788_2 "perator.sub_assign_effect.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009788, VkglTestCase_009788_1, VkglTestCase_009788_2);

#define VkglTestCase_009789_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009789_2 "erator.sub_assign_effect.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009789, VkglTestCase_009789_1, VkglTestCase_009789_2);

#define VkglTestCase_009790_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009790_2 "perator.sub_assign_effect.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009790, VkglTestCase_009790_1, VkglTestCase_009790_2);

#define VkglTestCase_009791_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009791_2 "erator.sub_assign_effect.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009791, VkglTestCase_009791_1, VkglTestCase_009791_2);

#define VkglTestCase_009792_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009792_2 "perator.sub_assign_effect.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009792, VkglTestCase_009792_1, VkglTestCase_009792_2);

#define VkglTestCase_009793_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009793_2 "erator.sub_assign_effect.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009793, VkglTestCase_009793_1, VkglTestCase_009793_2);

#define VkglTestCase_009794_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009794_2 "perator.sub_assign_effect.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009794, VkglTestCase_009794_1, VkglTestCase_009794_2);

#define VkglTestCase_009795_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009795_2 "erator.sub_assign_effect.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009795, VkglTestCase_009795_1, VkglTestCase_009795_2);

#define VkglTestCase_009796_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009796_2 "rator.sub_assign_effect.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009796, VkglTestCase_009796_1, VkglTestCase_009796_2);

#define VkglTestCase_009797_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009797_2 "ator.sub_assign_effect.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009797, VkglTestCase_009797_1, VkglTestCase_009797_2);

#define VkglTestCase_009798_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009798_2 "perator.sub_assign_effect.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009798, VkglTestCase_009798_1, VkglTestCase_009798_2);

#define VkglTestCase_009799_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009799_2 "erator.sub_assign_effect.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009799, VkglTestCase_009799_1, VkglTestCase_009799_2);

#define VkglTestCase_009800_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009800_2 "rator.sub_assign_effect.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009800, VkglTestCase_009800_1, VkglTestCase_009800_2);

#define VkglTestCase_009801_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009801_2 "ator.sub_assign_effect.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009801, VkglTestCase_009801_1, VkglTestCase_009801_2);

#define VkglTestCase_009802_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009802_2 "perator.sub_assign_effect.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009802, VkglTestCase_009802_1, VkglTestCase_009802_2);

#define VkglTestCase_009803_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009803_2 "erator.sub_assign_effect.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009803, VkglTestCase_009803_1, VkglTestCase_009803_2);

#define VkglTestCase_009804_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009804_2 "rator.sub_assign_effect.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009804, VkglTestCase_009804_1, VkglTestCase_009804_2);

#define VkglTestCase_009805_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009805_2 "ator.sub_assign_effect.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009805, VkglTestCase_009805_1, VkglTestCase_009805_2);

#define VkglTestCase_009806_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009806_2 "erator.sub_assign_effect.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009806, VkglTestCase_009806_1, VkglTestCase_009806_2);

#define VkglTestCase_009807_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009807_2 "rator.sub_assign_effect.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009807, VkglTestCase_009807_1, VkglTestCase_009807_2);

#define VkglTestCase_009808_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009808_2 "erator.sub_assign_effect.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009808, VkglTestCase_009808_1, VkglTestCase_009808_2);

#define VkglTestCase_009809_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009809_2 "rator.sub_assign_effect.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009809, VkglTestCase_009809_1, VkglTestCase_009809_2);

#define VkglTestCase_009810_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009810_2 "erator.sub_assign_effect.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009810, VkglTestCase_009810_1, VkglTestCase_009810_2);

#define VkglTestCase_009811_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009811_2 "rator.sub_assign_effect.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009811, VkglTestCase_009811_1, VkglTestCase_009811_2);
