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
#include "../ActsDeqpgles30037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036691_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036691_2 "o_query.consistency.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036691, VkglTestCase_036691_1, VkglTestCase_036691_2);

#define VkglTestCase_036692_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036692_2 "_query.consistency.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036692, VkglTestCase_036692_1, VkglTestCase_036692_2);

#define VkglTestCase_036693_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036693_2 "fo_query.consistency.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036693, VkglTestCase_036693_1, VkglTestCase_036693_2);

#define VkglTestCase_036694_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036694_2 "o_query.consistency.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036694, VkglTestCase_036694_1, VkglTestCase_036694_2);

#define VkglTestCase_036695_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036695_2 "_query.consistency.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036695, VkglTestCase_036695_1, VkglTestCase_036695_2);

#define VkglTestCase_036696_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036696_2 "fo_query.consistency.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036696, VkglTestCase_036696_1, VkglTestCase_036696_2);

#define VkglTestCase_036697_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036697_2 "o_query.consistency.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036697, VkglTestCase_036697_1, VkglTestCase_036697_2);

#define VkglTestCase_036698_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036698_2 "_query.consistency.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036698, VkglTestCase_036698_1, VkglTestCase_036698_2);

#define VkglTestCase_036699_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036699_2 "fo_query.consistency.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036699, VkglTestCase_036699_1, VkglTestCase_036699_2);

#define VkglTestCase_036700_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036700_2 "o_query.consistency.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036700, VkglTestCase_036700_1, VkglTestCase_036700_2);

#define VkglTestCase_036701_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036701_2 "_query.consistency.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036701, VkglTestCase_036701_1, VkglTestCase_036701_2);

#define VkglTestCase_036702_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036702_2 "fo_query.consistency.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036702, VkglTestCase_036702_1, VkglTestCase_036702_2);

#define VkglTestCase_036703_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036703_2 "o_query.consistency.basic.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036703, VkglTestCase_036703_1, VkglTestCase_036703_2);

#define VkglTestCase_036704_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036704_2 "_query.consistency.basic.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036704, VkglTestCase_036704_1, VkglTestCase_036704_2);

#define VkglTestCase_036705_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036705_2 "fo_query.consistency.basic.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036705, VkglTestCase_036705_1, VkglTestCase_036705_2);

#define VkglTestCase_036706_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036706_2 "_query.consistency.basic.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036706, VkglTestCase_036706_1, VkglTestCase_036706_2);

#define VkglTestCase_036707_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036707_2 "query.consistency.basic.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036707, VkglTestCase_036707_1, VkglTestCase_036707_2);

#define VkglTestCase_036708_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036708_2 "o_query.consistency.basic.mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036708, VkglTestCase_036708_1, VkglTestCase_036708_2);

#define VkglTestCase_036709_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036709_2 "_query.consistency.basic.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036709, VkglTestCase_036709_1, VkglTestCase_036709_2);

#define VkglTestCase_036710_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036710_2 "query.consistency.basic.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036710, VkglTestCase_036710_1, VkglTestCase_036710_2);

#define VkglTestCase_036711_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036711_2 "o_query.consistency.basic.mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036711, VkglTestCase_036711_1, VkglTestCase_036711_2);

#define VkglTestCase_036712_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036712_2 "_query.consistency.basic.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036712, VkglTestCase_036712_1, VkglTestCase_036712_2);

#define VkglTestCase_036713_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036713_2 "query.consistency.basic.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036713, VkglTestCase_036713_1, VkglTestCase_036713_2);

#define VkglTestCase_036714_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036714_2 "o_query.consistency.basic.mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036714, VkglTestCase_036714_1, VkglTestCase_036714_2);

#define VkglTestCase_036715_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036715_2 "o_query.consistency.basic.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036715, VkglTestCase_036715_1, VkglTestCase_036715_2);

#define VkglTestCase_036716_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036716_2 "_query.consistency.basic.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036716, VkglTestCase_036716_1, VkglTestCase_036716_2);

#define VkglTestCase_036717_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036717_2 "fo_query.consistency.basic.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036717, VkglTestCase_036717_1, VkglTestCase_036717_2);

#define VkglTestCase_036718_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036718_2 "_query.consistency.basic.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036718, VkglTestCase_036718_1, VkglTestCase_036718_2);

#define VkglTestCase_036719_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036719_2 "query.consistency.basic.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036719, VkglTestCase_036719_1, VkglTestCase_036719_2);

#define VkglTestCase_036720_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036720_2 "o_query.consistency.basic.mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036720, VkglTestCase_036720_1, VkglTestCase_036720_2);

#define VkglTestCase_036721_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036721_2 "_query.consistency.basic.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036721, VkglTestCase_036721_1, VkglTestCase_036721_2);

#define VkglTestCase_036722_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036722_2 "query.consistency.basic.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036722, VkglTestCase_036722_1, VkglTestCase_036722_2);

#define VkglTestCase_036723_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036723_2 "o_query.consistency.basic.mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036723, VkglTestCase_036723_1, VkglTestCase_036723_2);

#define VkglTestCase_036724_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036724_2 "_query.consistency.basic.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036724, VkglTestCase_036724_1, VkglTestCase_036724_2);

#define VkglTestCase_036725_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036725_2 "query.consistency.basic.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036725, VkglTestCase_036725_1, VkglTestCase_036725_2);

#define VkglTestCase_036726_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036726_2 "o_query.consistency.basic.mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036726, VkglTestCase_036726_1, VkglTestCase_036726_2);

#define VkglTestCase_036727_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036727_2 "o_query.consistency.basic.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036727, VkglTestCase_036727_1, VkglTestCase_036727_2);

#define VkglTestCase_036728_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036728_2 "_query.consistency.basic.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036728, VkglTestCase_036728_1, VkglTestCase_036728_2);

#define VkglTestCase_036729_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036729_2 "fo_query.consistency.basic.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036729, VkglTestCase_036729_1, VkglTestCase_036729_2);

#define VkglTestCase_036730_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036730_2 "fo_query.consistency.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036730, VkglTestCase_036730_1, VkglTestCase_036730_2);

#define VkglTestCase_036731_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036731_2 "o_query.consistency.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036731, VkglTestCase_036731_1, VkglTestCase_036731_2);

#define VkglTestCase_036732_1 "dEQP-GLES3.functional.uniform_api.i"
#define VkglTestCase_036732_2 "nfo_query.consistency.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036732, VkglTestCase_036732_1, VkglTestCase_036732_2);

#define VkglTestCase_036733_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036733_2 "o_query.consistency.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036733, VkglTestCase_036733_1, VkglTestCase_036733_2);

#define VkglTestCase_036734_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036734_2 "_query.consistency.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036734, VkglTestCase_036734_1, VkglTestCase_036734_2);

#define VkglTestCase_036735_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036735_2 "fo_query.consistency.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036735, VkglTestCase_036735_1, VkglTestCase_036735_2);

#define VkglTestCase_036736_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036736_2 "o_query.consistency.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036736, VkglTestCase_036736_1, VkglTestCase_036736_2);

#define VkglTestCase_036737_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036737_2 "_query.consistency.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036737, VkglTestCase_036737_1, VkglTestCase_036737_2);

#define VkglTestCase_036738_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036738_2 "fo_query.consistency.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036738, VkglTestCase_036738_1, VkglTestCase_036738_2);

#define VkglTestCase_036739_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036739_2 "o_query.consistency.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036739, VkglTestCase_036739_1, VkglTestCase_036739_2);

#define VkglTestCase_036740_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036740_2 "_query.consistency.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036740, VkglTestCase_036740_1, VkglTestCase_036740_2);

#define VkglTestCase_036741_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036741_2 "fo_query.consistency.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036741, VkglTestCase_036741_1, VkglTestCase_036741_2);

#define VkglTestCase_036742_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036742_2 "o_query.consistency.basic.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036742, VkglTestCase_036742_1, VkglTestCase_036742_2);

#define VkglTestCase_036743_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036743_2 "_query.consistency.basic.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036743, VkglTestCase_036743_1, VkglTestCase_036743_2);

#define VkglTestCase_036744_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036744_2 "fo_query.consistency.basic.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036744, VkglTestCase_036744_1, VkglTestCase_036744_2);

#define VkglTestCase_036745_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036745_2 "o_query.consistency.basic.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036745, VkglTestCase_036745_1, VkglTestCase_036745_2);

#define VkglTestCase_036746_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036746_2 "_query.consistency.basic.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036746, VkglTestCase_036746_1, VkglTestCase_036746_2);

#define VkglTestCase_036747_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036747_2 "fo_query.consistency.basic.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036747, VkglTestCase_036747_1, VkglTestCase_036747_2);

#define VkglTestCase_036748_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036748_2 "o_query.consistency.basic.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036748, VkglTestCase_036748_1, VkglTestCase_036748_2);

#define VkglTestCase_036749_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036749_2 "_query.consistency.basic.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036749, VkglTestCase_036749_1, VkglTestCase_036749_2);

#define VkglTestCase_036750_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036750_2 "fo_query.consistency.basic.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036750, VkglTestCase_036750_1, VkglTestCase_036750_2);

#define VkglTestCase_036751_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036751_2 "o_query.consistency.basic.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036751, VkglTestCase_036751_1, VkglTestCase_036751_2);

#define VkglTestCase_036752_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036752_2 "_query.consistency.basic.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036752, VkglTestCase_036752_1, VkglTestCase_036752_2);

#define VkglTestCase_036753_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036753_2 "fo_query.consistency.basic.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036753, VkglTestCase_036753_1, VkglTestCase_036753_2);

#define VkglTestCase_036754_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036754_2 "o_query.consistency.basic.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036754, VkglTestCase_036754_1, VkglTestCase_036754_2);

#define VkglTestCase_036755_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036755_2 "_query.consistency.basic.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036755, VkglTestCase_036755_1, VkglTestCase_036755_2);

#define VkglTestCase_036756_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036756_2 "fo_query.consistency.basic.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036756, VkglTestCase_036756_1, VkglTestCase_036756_2);

#define VkglTestCase_036757_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036757_2 "o_query.consistency.basic.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036757, VkglTestCase_036757_1, VkglTestCase_036757_2);

#define VkglTestCase_036758_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036758_2 "_query.consistency.basic.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036758, VkglTestCase_036758_1, VkglTestCase_036758_2);

#define VkglTestCase_036759_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036759_2 "fo_query.consistency.basic.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036759, VkglTestCase_036759_1, VkglTestCase_036759_2);

#define VkglTestCase_036760_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036760_2 "o_query.consistency.basic.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036760, VkglTestCase_036760_1, VkglTestCase_036760_2);

#define VkglTestCase_036761_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036761_2 "_query.consistency.basic.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036761, VkglTestCase_036761_1, VkglTestCase_036761_2);

#define VkglTestCase_036762_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036762_2 "fo_query.consistency.basic.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036762, VkglTestCase_036762_1, VkglTestCase_036762_2);

#define VkglTestCase_036763_1 "dEQP-GLES3.functional.uniform_api.inf"
#define VkglTestCase_036763_2 "o_query.consistency.basic.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036763, VkglTestCase_036763_1, VkglTestCase_036763_2);

#define VkglTestCase_036764_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036764_2 "_query.consistency.basic.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036764, VkglTestCase_036764_1, VkglTestCase_036764_2);

#define VkglTestCase_036765_1 "dEQP-GLES3.functional.uniform_api.in"
#define VkglTestCase_036765_2 "fo_query.consistency.basic.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036765, VkglTestCase_036765_1, VkglTestCase_036765_2);

#define VkglTestCase_036766_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036766_2 "query.consistency.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036766, VkglTestCase_036766_1, VkglTestCase_036766_2);

#define VkglTestCase_036767_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036767_2 "uery.consistency.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036767, VkglTestCase_036767_1, VkglTestCase_036767_2);

#define VkglTestCase_036768_1 "dEQP-GLES3.functional.uniform_api.info"
#define VkglTestCase_036768_2 "_query.consistency.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036768, VkglTestCase_036768_1, VkglTestCase_036768_2);

#define VkglTestCase_036769_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036769_2 "uery.consistency.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036769, VkglTestCase_036769_1, VkglTestCase_036769_2);

#define VkglTestCase_036770_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036770_2 "ery.consistency.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036770, VkglTestCase_036770_1, VkglTestCase_036770_2);

#define VkglTestCase_036771_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036771_2 "query.consistency.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036771, VkglTestCase_036771_1, VkglTestCase_036771_2);
