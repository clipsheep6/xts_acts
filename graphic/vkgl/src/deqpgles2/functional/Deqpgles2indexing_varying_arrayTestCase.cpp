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
#include "../ActsDeqpgles20003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002739_1 "dEQP-GLES2.functional.shaders.indexing.va"
#define VkglTestCase_002739_2 "rying_array.float_static_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002739, VkglTestCase_002739_1, VkglTestCase_002739_2);

#define VkglTestCase_002740_1 "dEQP-GLES2.functional.shaders.indexing.var"
#define VkglTestCase_002740_2 "ying_array.float_static_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002740, VkglTestCase_002740_1, VkglTestCase_002740_2);

#define VkglTestCase_002741_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002741_2 "ng_array.float_static_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002741, VkglTestCase_002741_1, VkglTestCase_002741_2);

#define VkglTestCase_002742_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002742_2 "ng_array.float_static_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002742, VkglTestCase_002742_1, VkglTestCase_002742_2);

#define VkglTestCase_002743_1 "dEQP-GLES2.functional.shaders.indexing.var"
#define VkglTestCase_002743_2 "ying_array.float_dynamic_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002743, VkglTestCase_002743_1, VkglTestCase_002743_2);

#define VkglTestCase_002744_1 "dEQP-GLES2.functional.shaders.indexing.var"
#define VkglTestCase_002744_2 "ying_array.float_dynamic_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002744, VkglTestCase_002744_1, VkglTestCase_002744_2);

#define VkglTestCase_002745_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002745_2 "ng_array.float_dynamic_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002745, VkglTestCase_002745_1, VkglTestCase_002745_2);

#define VkglTestCase_002746_1 "dEQP-GLES2.functional.shaders.indexing.varyin"
#define VkglTestCase_002746_2 "g_array.float_dynamic_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002746, VkglTestCase_002746_1, VkglTestCase_002746_2);

#define VkglTestCase_002747_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002747_2 "ng_array.float_static_loop_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002747, VkglTestCase_002747_1, VkglTestCase_002747_2);

#define VkglTestCase_002748_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002748_2 "ng_array.float_static_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002748, VkglTestCase_002748_1, VkglTestCase_002748_2);

#define VkglTestCase_002749_1 "dEQP-GLES2.functional.shaders.indexing.varying"
#define VkglTestCase_002749_2 "_array.float_static_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002749, VkglTestCase_002749_1, VkglTestCase_002749_2);

#define VkglTestCase_002750_1 "dEQP-GLES2.functional.shaders.indexing.varying_"
#define VkglTestCase_002750_2 "array.float_static_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002750, VkglTestCase_002750_1, VkglTestCase_002750_2);

#define VkglTestCase_002751_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002751_2 "ng_array.float_dynamic_loop_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002751, VkglTestCase_002751_1, VkglTestCase_002751_2);

#define VkglTestCase_002752_1 "dEQP-GLES2.functional.shaders.indexing.varyin"
#define VkglTestCase_002752_2 "g_array.float_dynamic_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002752, VkglTestCase_002752_1, VkglTestCase_002752_2);

#define VkglTestCase_002753_1 "dEQP-GLES2.functional.shaders.indexing.varying_"
#define VkglTestCase_002753_2 "array.float_dynamic_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002753, VkglTestCase_002753_1, VkglTestCase_002753_2);

#define VkglTestCase_002754_1 "dEQP-GLES2.functional.shaders.indexing.varying_"
#define VkglTestCase_002754_2 "array.float_dynamic_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002754, VkglTestCase_002754_1, VkglTestCase_002754_2);

#define VkglTestCase_002755_1 "dEQP-GLES2.functional.shaders.indexing.va"
#define VkglTestCase_002755_2 "rying_array.vec2_static_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002755, VkglTestCase_002755_1, VkglTestCase_002755_2);

#define VkglTestCase_002756_1 "dEQP-GLES2.functional.shaders.indexing.va"
#define VkglTestCase_002756_2 "rying_array.vec2_static_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002756, VkglTestCase_002756_1, VkglTestCase_002756_2);

#define VkglTestCase_002757_1 "dEQP-GLES2.functional.shaders.indexing.vary"
#define VkglTestCase_002757_2 "ing_array.vec2_static_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002757, VkglTestCase_002757_1, VkglTestCase_002757_2);

#define VkglTestCase_002758_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002758_2 "ng_array.vec2_static_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002758, VkglTestCase_002758_1, VkglTestCase_002758_2);

#define VkglTestCase_002759_1 "dEQP-GLES2.functional.shaders.indexing.va"
#define VkglTestCase_002759_2 "rying_array.vec2_dynamic_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002759, VkglTestCase_002759_1, VkglTestCase_002759_2);

#define VkglTestCase_002760_1 "dEQP-GLES2.functional.shaders.indexing.var"
#define VkglTestCase_002760_2 "ying_array.vec2_dynamic_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002760, VkglTestCase_002760_1, VkglTestCase_002760_2);

#define VkglTestCase_002761_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002761_2 "ng_array.vec2_dynamic_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002761, VkglTestCase_002761_1, VkglTestCase_002761_2);

#define VkglTestCase_002762_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002762_2 "ng_array.vec2_dynamic_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002762, VkglTestCase_002762_1, VkglTestCase_002762_2);

#define VkglTestCase_002763_1 "dEQP-GLES2.functional.shaders.indexing.vary"
#define VkglTestCase_002763_2 "ing_array.vec2_static_loop_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002763, VkglTestCase_002763_1, VkglTestCase_002763_2);

#define VkglTestCase_002764_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002764_2 "ng_array.vec2_static_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002764, VkglTestCase_002764_1, VkglTestCase_002764_2);

#define VkglTestCase_002765_1 "dEQP-GLES2.functional.shaders.indexing.varying"
#define VkglTestCase_002765_2 "_array.vec2_static_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002765, VkglTestCase_002765_1, VkglTestCase_002765_2);

#define VkglTestCase_002766_1 "dEQP-GLES2.functional.shaders.indexing.varying"
#define VkglTestCase_002766_2 "_array.vec2_static_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002766, VkglTestCase_002766_1, VkglTestCase_002766_2);

#define VkglTestCase_002767_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002767_2 "ng_array.vec2_dynamic_loop_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002767, VkglTestCase_002767_1, VkglTestCase_002767_2);

#define VkglTestCase_002768_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002768_2 "ng_array.vec2_dynamic_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002768, VkglTestCase_002768_1, VkglTestCase_002768_2);

#define VkglTestCase_002769_1 "dEQP-GLES2.functional.shaders.indexing.varying"
#define VkglTestCase_002769_2 "_array.vec2_dynamic_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002769, VkglTestCase_002769_1, VkglTestCase_002769_2);

#define VkglTestCase_002770_1 "dEQP-GLES2.functional.shaders.indexing.varying_"
#define VkglTestCase_002770_2 "array.vec2_dynamic_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002770, VkglTestCase_002770_1, VkglTestCase_002770_2);

#define VkglTestCase_002771_1 "dEQP-GLES2.functional.shaders.indexing.va"
#define VkglTestCase_002771_2 "rying_array.vec3_static_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002771, VkglTestCase_002771_1, VkglTestCase_002771_2);

#define VkglTestCase_002772_1 "dEQP-GLES2.functional.shaders.indexing.va"
#define VkglTestCase_002772_2 "rying_array.vec3_static_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002772, VkglTestCase_002772_1, VkglTestCase_002772_2);

#define VkglTestCase_002773_1 "dEQP-GLES2.functional.shaders.indexing.vary"
#define VkglTestCase_002773_2 "ing_array.vec3_static_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002773, VkglTestCase_002773_1, VkglTestCase_002773_2);

#define VkglTestCase_002774_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002774_2 "ng_array.vec3_static_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002774, VkglTestCase_002774_1, VkglTestCase_002774_2);

#define VkglTestCase_002775_1 "dEQP-GLES2.functional.shaders.indexing.va"
#define VkglTestCase_002775_2 "rying_array.vec3_dynamic_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002775, VkglTestCase_002775_1, VkglTestCase_002775_2);

#define VkglTestCase_002776_1 "dEQP-GLES2.functional.shaders.indexing.var"
#define VkglTestCase_002776_2 "ying_array.vec3_dynamic_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002776, VkglTestCase_002776_1, VkglTestCase_002776_2);

#define VkglTestCase_002777_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002777_2 "ng_array.vec3_dynamic_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002777, VkglTestCase_002777_1, VkglTestCase_002777_2);

#define VkglTestCase_002778_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002778_2 "ng_array.vec3_dynamic_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002778, VkglTestCase_002778_1, VkglTestCase_002778_2);

#define VkglTestCase_002779_1 "dEQP-GLES2.functional.shaders.indexing.vary"
#define VkglTestCase_002779_2 "ing_array.vec3_static_loop_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002779, VkglTestCase_002779_1, VkglTestCase_002779_2);

#define VkglTestCase_002780_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002780_2 "ng_array.vec3_static_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002780, VkglTestCase_002780_1, VkglTestCase_002780_2);

#define VkglTestCase_002781_1 "dEQP-GLES2.functional.shaders.indexing.varying"
#define VkglTestCase_002781_2 "_array.vec3_static_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002781, VkglTestCase_002781_1, VkglTestCase_002781_2);

#define VkglTestCase_002782_1 "dEQP-GLES2.functional.shaders.indexing.varying"
#define VkglTestCase_002782_2 "_array.vec3_static_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002782, VkglTestCase_002782_1, VkglTestCase_002782_2);

#define VkglTestCase_002783_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002783_2 "ng_array.vec3_dynamic_loop_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002783, VkglTestCase_002783_1, VkglTestCase_002783_2);

#define VkglTestCase_002784_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002784_2 "ng_array.vec3_dynamic_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002784, VkglTestCase_002784_1, VkglTestCase_002784_2);

#define VkglTestCase_002785_1 "dEQP-GLES2.functional.shaders.indexing.varying"
#define VkglTestCase_002785_2 "_array.vec3_dynamic_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002785, VkglTestCase_002785_1, VkglTestCase_002785_2);

#define VkglTestCase_002786_1 "dEQP-GLES2.functional.shaders.indexing.varying_"
#define VkglTestCase_002786_2 "array.vec3_dynamic_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002786, VkglTestCase_002786_1, VkglTestCase_002786_2);

#define VkglTestCase_002787_1 "dEQP-GLES2.functional.shaders.indexing.va"
#define VkglTestCase_002787_2 "rying_array.vec4_static_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002787, VkglTestCase_002787_1, VkglTestCase_002787_2);

#define VkglTestCase_002788_1 "dEQP-GLES2.functional.shaders.indexing.va"
#define VkglTestCase_002788_2 "rying_array.vec4_static_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002788, VkglTestCase_002788_1, VkglTestCase_002788_2);

#define VkglTestCase_002789_1 "dEQP-GLES2.functional.shaders.indexing.vary"
#define VkglTestCase_002789_2 "ing_array.vec4_static_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002789, VkglTestCase_002789_1, VkglTestCase_002789_2);

#define VkglTestCase_002790_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002790_2 "ng_array.vec4_static_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002790, VkglTestCase_002790_1, VkglTestCase_002790_2);

#define VkglTestCase_002791_1 "dEQP-GLES2.functional.shaders.indexing.va"
#define VkglTestCase_002791_2 "rying_array.vec4_dynamic_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002791, VkglTestCase_002791_1, VkglTestCase_002791_2);

#define VkglTestCase_002792_1 "dEQP-GLES2.functional.shaders.indexing.var"
#define VkglTestCase_002792_2 "ying_array.vec4_dynamic_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002792, VkglTestCase_002792_1, VkglTestCase_002792_2);

#define VkglTestCase_002793_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002793_2 "ng_array.vec4_dynamic_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002793, VkglTestCase_002793_1, VkglTestCase_002793_2);

#define VkglTestCase_002794_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002794_2 "ng_array.vec4_dynamic_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002794, VkglTestCase_002794_1, VkglTestCase_002794_2);

#define VkglTestCase_002795_1 "dEQP-GLES2.functional.shaders.indexing.vary"
#define VkglTestCase_002795_2 "ing_array.vec4_static_loop_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002795, VkglTestCase_002795_1, VkglTestCase_002795_2);

#define VkglTestCase_002796_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002796_2 "ng_array.vec4_static_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002796, VkglTestCase_002796_1, VkglTestCase_002796_2);

#define VkglTestCase_002797_1 "dEQP-GLES2.functional.shaders.indexing.varying"
#define VkglTestCase_002797_2 "_array.vec4_static_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002797, VkglTestCase_002797_1, VkglTestCase_002797_2);

#define VkglTestCase_002798_1 "dEQP-GLES2.functional.shaders.indexing.varying"
#define VkglTestCase_002798_2 "_array.vec4_static_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002798, VkglTestCase_002798_1, VkglTestCase_002798_2);

#define VkglTestCase_002799_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002799_2 "ng_array.vec4_dynamic_loop_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002799, VkglTestCase_002799_1, VkglTestCase_002799_2);

#define VkglTestCase_002800_1 "dEQP-GLES2.functional.shaders.indexing.varyi"
#define VkglTestCase_002800_2 "ng_array.vec4_dynamic_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002800, VkglTestCase_002800_1, VkglTestCase_002800_2);

#define VkglTestCase_002801_1 "dEQP-GLES2.functional.shaders.indexing.varying"
#define VkglTestCase_002801_2 "_array.vec4_dynamic_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002801, VkglTestCase_002801_1, VkglTestCase_002801_2);

#define VkglTestCase_002802_1 "dEQP-GLES2.functional.shaders.indexing.varying_"
#define VkglTestCase_002802_2 "array.vec4_dynamic_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002802, VkglTestCase_002802_1, VkglTestCase_002802_2);
