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
#include "../ActsDeqpgles310006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005717_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005717_2 "31.struct_fields.field_before_input.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005717, VkglTestCase_005717_1, VkglTestCase_005717_2);

#define VkglTestCase_005718_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005718_2 "1.struct_fields.field_before_input.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005718, VkglTestCase_005718_1, VkglTestCase_005718_2);

#define VkglTestCase_005719_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005719_2 "31.struct_fields.field_before_input.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005719, VkglTestCase_005719_1, VkglTestCase_005719_2);

#define VkglTestCase_005720_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005720_2 "1.struct_fields.field_before_input.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005720, VkglTestCase_005720_1, VkglTestCase_005720_2);

#define VkglTestCase_005721_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005721_2 "31.struct_fields.field_before_input.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005721, VkglTestCase_005721_1, VkglTestCase_005721_2);

#define VkglTestCase_005722_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005722_2 "1.struct_fields.field_before_input.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005722, VkglTestCase_005722_1, VkglTestCase_005722_2);

#define VkglTestCase_005723_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005723_2 "31.struct_fields.field_before_input.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005723, VkglTestCase_005723_1, VkglTestCase_005723_2);

#define VkglTestCase_005724_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005724_2 "1.struct_fields.field_before_input.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005724, VkglTestCase_005724_1, VkglTestCase_005724_2);

#define VkglTestCase_005725_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005725_2 "31.struct_fields.field_before_input.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005725, VkglTestCase_005725_1, VkglTestCase_005725_2);

#define VkglTestCase_005726_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005726_2 "1.struct_fields.field_before_input.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005726, VkglTestCase_005726_1, VkglTestCase_005726_2);

#define VkglTestCase_005727_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005727_2 "31.struct_fields.field_before_input.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005727, VkglTestCase_005727_1, VkglTestCase_005727_2);

#define VkglTestCase_005728_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005728_2 "1.struct_fields.field_before_input.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005728, VkglTestCase_005728_1, VkglTestCase_005728_2);

#define VkglTestCase_005729_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005729_2 "31.struct_fields.field_before_input.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005729, VkglTestCase_005729_1, VkglTestCase_005729_2);

#define VkglTestCase_005730_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005730_2 "1.struct_fields.field_before_input.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005730, VkglTestCase_005730_1, VkglTestCase_005730_2);

#define VkglTestCase_005731_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005731_2 "31.struct_fields.field_before_input.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005731, VkglTestCase_005731_1, VkglTestCase_005731_2);

#define VkglTestCase_005732_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005732_2 "1.struct_fields.field_before_input.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005732, VkglTestCase_005732_1, VkglTestCase_005732_2);

#define VkglTestCase_005733_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005733_2 "1.struct_fields.field_before_input.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005733, VkglTestCase_005733_1, VkglTestCase_005733_2);

#define VkglTestCase_005734_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005734_2 ".struct_fields.field_before_input.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005734, VkglTestCase_005734_1, VkglTestCase_005734_2);

#define VkglTestCase_005735_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005735_2 "31.struct_fields.field_before_input.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005735, VkglTestCase_005735_1, VkglTestCase_005735_2);

#define VkglTestCase_005736_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005736_2 "1.struct_fields.field_before_input.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005736, VkglTestCase_005736_1, VkglTestCase_005736_2);

#define VkglTestCase_005737_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005737_2 "31.struct_fields.field_before_input.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005737, VkglTestCase_005737_1, VkglTestCase_005737_2);

#define VkglTestCase_005738_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005738_2 "1.struct_fields.field_before_input.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005738, VkglTestCase_005738_1, VkglTestCase_005738_2);

#define VkglTestCase_005739_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_005739_2 "31.struct_fields.field_before_input.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005739, VkglTestCase_005739_1, VkglTestCase_005739_2);

#define VkglTestCase_005740_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005740_2 "1.struct_fields.field_before_input.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005740, VkglTestCase_005740_1, VkglTestCase_005740_2);

#define VkglTestCase_005741_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005741_2 "1.struct_fields.field_before_input.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005741, VkglTestCase_005741_1, VkglTestCase_005741_2);

#define VkglTestCase_005742_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005742_2 ".struct_fields.field_before_input.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005742, VkglTestCase_005742_1, VkglTestCase_005742_2);

#define VkglTestCase_005743_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005743_2 "1.struct_fields.field_before_input.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005743, VkglTestCase_005743_1, VkglTestCase_005743_2);

#define VkglTestCase_005744_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005744_2 ".struct_fields.field_before_input.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005744, VkglTestCase_005744_1, VkglTestCase_005744_2);

#define VkglTestCase_005745_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005745_2 "1.struct_fields.field_before_input.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005745, VkglTestCase_005745_1, VkglTestCase_005745_2);

#define VkglTestCase_005746_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005746_2 ".struct_fields.field_before_input.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005746, VkglTestCase_005746_1, VkglTestCase_005746_2);

#define VkglTestCase_005747_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005747_2 "1.struct_fields.field_before_input.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005747, VkglTestCase_005747_1, VkglTestCase_005747_2);

#define VkglTestCase_005748_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005748_2 ".struct_fields.field_before_input.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005748, VkglTestCase_005748_1, VkglTestCase_005748_2);

#define VkglTestCase_005749_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005749_2 "1.struct_fields.field_before_input.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005749, VkglTestCase_005749_1, VkglTestCase_005749_2);

#define VkglTestCase_005750_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005750_2 ".struct_fields.field_before_input.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005750, VkglTestCase_005750_1, VkglTestCase_005750_2);

#define VkglTestCase_005751_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005751_2 "1.struct_fields.field_before_input.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005751, VkglTestCase_005751_1, VkglTestCase_005751_2);

#define VkglTestCase_005752_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005752_2 ".struct_fields.field_before_input.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005752, VkglTestCase_005752_1, VkglTestCase_005752_2);

#define VkglTestCase_005753_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005753_2 "1.struct_fields.field_before_input.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005753, VkglTestCase_005753_1, VkglTestCase_005753_2);

#define VkglTestCase_005754_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005754_2 ".struct_fields.field_before_input.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005754, VkglTestCase_005754_1, VkglTestCase_005754_2);

#define VkglTestCase_005755_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005755_2 "1.struct_fields.field_before_input.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005755, VkglTestCase_005755_1, VkglTestCase_005755_2);

#define VkglTestCase_005756_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005756_2 ".struct_fields.field_before_input.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005756, VkglTestCase_005756_1, VkglTestCase_005756_2);

#define VkglTestCase_005757_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_005757_2 "1.struct_fields.field_before_input.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005757, VkglTestCase_005757_1, VkglTestCase_005757_2);

#define VkglTestCase_005758_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
#define VkglTestCase_005758_2 ".struct_fields.field_before_input.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005758, VkglTestCase_005758_1, VkglTestCase_005758_2);

#define VkglTestCase_006751_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006751_2 "32.struct_fields.field_before_input.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006751, VkglTestCase_006751_1, VkglTestCase_006751_2);

#define VkglTestCase_006752_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006752_2 "2.struct_fields.field_before_input.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006752, VkglTestCase_006752_1, VkglTestCase_006752_2);

#define VkglTestCase_006753_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006753_2 "32.struct_fields.field_before_input.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006753, VkglTestCase_006753_1, VkglTestCase_006753_2);

#define VkglTestCase_006754_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006754_2 "2.struct_fields.field_before_input.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006754, VkglTestCase_006754_1, VkglTestCase_006754_2);

#define VkglTestCase_006755_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006755_2 "32.struct_fields.field_before_input.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006755, VkglTestCase_006755_1, VkglTestCase_006755_2);

#define VkglTestCase_006756_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006756_2 "2.struct_fields.field_before_input.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006756, VkglTestCase_006756_1, VkglTestCase_006756_2);

#define VkglTestCase_006757_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006757_2 "32.struct_fields.field_before_input.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006757, VkglTestCase_006757_1, VkglTestCase_006757_2);

#define VkglTestCase_006758_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006758_2 "2.struct_fields.field_before_input.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006758, VkglTestCase_006758_1, VkglTestCase_006758_2);

#define VkglTestCase_006759_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006759_2 "32.struct_fields.field_before_input.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006759, VkglTestCase_006759_1, VkglTestCase_006759_2);

#define VkglTestCase_006760_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006760_2 "2.struct_fields.field_before_input.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006760, VkglTestCase_006760_1, VkglTestCase_006760_2);

#define VkglTestCase_006761_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006761_2 "32.struct_fields.field_before_input.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006761, VkglTestCase_006761_1, VkglTestCase_006761_2);

#define VkglTestCase_006762_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006762_2 "2.struct_fields.field_before_input.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006762, VkglTestCase_006762_1, VkglTestCase_006762_2);

#define VkglTestCase_006763_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006763_2 "32.struct_fields.field_before_input.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006763, VkglTestCase_006763_1, VkglTestCase_006763_2);

#define VkglTestCase_006764_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006764_2 "2.struct_fields.field_before_input.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006764, VkglTestCase_006764_1, VkglTestCase_006764_2);

#define VkglTestCase_006765_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006765_2 "32.struct_fields.field_before_input.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006765, VkglTestCase_006765_1, VkglTestCase_006765_2);

#define VkglTestCase_006766_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006766_2 "2.struct_fields.field_before_input.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006766, VkglTestCase_006766_1, VkglTestCase_006766_2);

#define VkglTestCase_006767_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006767_2 "2.struct_fields.field_before_input.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006767, VkglTestCase_006767_1, VkglTestCase_006767_2);

#define VkglTestCase_006768_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006768_2 ".struct_fields.field_before_input.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006768, VkglTestCase_006768_1, VkglTestCase_006768_2);

#define VkglTestCase_006769_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006769_2 "32.struct_fields.field_before_input.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006769, VkglTestCase_006769_1, VkglTestCase_006769_2);

#define VkglTestCase_006770_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006770_2 "2.struct_fields.field_before_input.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006770, VkglTestCase_006770_1, VkglTestCase_006770_2);

#define VkglTestCase_006771_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006771_2 "32.struct_fields.field_before_input.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006771, VkglTestCase_006771_1, VkglTestCase_006771_2);

#define VkglTestCase_006772_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006772_2 "2.struct_fields.field_before_input.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006772, VkglTestCase_006772_1, VkglTestCase_006772_2);

#define VkglTestCase_006773_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es"
#define VkglTestCase_006773_2 "32.struct_fields.field_before_input.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006773, VkglTestCase_006773_1, VkglTestCase_006773_2);

#define VkglTestCase_006774_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006774_2 "2.struct_fields.field_before_input.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006774, VkglTestCase_006774_1, VkglTestCase_006774_2);

#define VkglTestCase_006775_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006775_2 "2.struct_fields.field_before_input.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006775, VkglTestCase_006775_1, VkglTestCase_006775_2);

#define VkglTestCase_006776_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006776_2 ".struct_fields.field_before_input.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006776, VkglTestCase_006776_1, VkglTestCase_006776_2);

#define VkglTestCase_006777_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006777_2 "2.struct_fields.field_before_input.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006777, VkglTestCase_006777_1, VkglTestCase_006777_2);

#define VkglTestCase_006778_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006778_2 ".struct_fields.field_before_input.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006778, VkglTestCase_006778_1, VkglTestCase_006778_2);

#define VkglTestCase_006779_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006779_2 "2.struct_fields.field_before_input.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006779, VkglTestCase_006779_1, VkglTestCase_006779_2);

#define VkglTestCase_006780_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006780_2 ".struct_fields.field_before_input.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006780, VkglTestCase_006780_1, VkglTestCase_006780_2);

#define VkglTestCase_006781_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006781_2 "2.struct_fields.field_before_input.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006781, VkglTestCase_006781_1, VkglTestCase_006781_2);

#define VkglTestCase_006782_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006782_2 ".struct_fields.field_before_input.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006782, VkglTestCase_006782_1, VkglTestCase_006782_2);

#define VkglTestCase_006783_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006783_2 "2.struct_fields.field_before_input.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006783, VkglTestCase_006783_1, VkglTestCase_006783_2);

#define VkglTestCase_006784_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006784_2 ".struct_fields.field_before_input.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006784, VkglTestCase_006784_1, VkglTestCase_006784_2);

#define VkglTestCase_006785_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006785_2 "2.struct_fields.field_before_input.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006785, VkglTestCase_006785_1, VkglTestCase_006785_2);

#define VkglTestCase_006786_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006786_2 ".struct_fields.field_before_input.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006786, VkglTestCase_006786_1, VkglTestCase_006786_2);

#define VkglTestCase_006787_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006787_2 "2.struct_fields.field_before_input.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006787, VkglTestCase_006787_1, VkglTestCase_006787_2);

#define VkglTestCase_006788_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006788_2 ".struct_fields.field_before_input.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006788, VkglTestCase_006788_1, VkglTestCase_006788_2);

#define VkglTestCase_006789_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006789_2 "2.struct_fields.field_before_input.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006789, VkglTestCase_006789_1, VkglTestCase_006789_2);

#define VkglTestCase_006790_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006790_2 ".struct_fields.field_before_input.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006790, VkglTestCase_006790_1, VkglTestCase_006790_2);

#define VkglTestCase_006791_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es3"
#define VkglTestCase_006791_2 "2.struct_fields.field_before_input.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006791, VkglTestCase_006791_1, VkglTestCase_006791_2);

#define VkglTestCase_006792_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
#define VkglTestCase_006792_2 ".struct_fields.field_before_input.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006792, VkglTestCase_006792_1, VkglTestCase_006792_2);
