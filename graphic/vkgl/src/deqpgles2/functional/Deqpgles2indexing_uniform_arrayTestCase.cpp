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

#define VkglTestCase_002803_1 "dEQP-GLES2.functional.shaders.indexing"
#define VkglTestCase_002803_2 ".uniform_array.float_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002803, VkglTestCase_002803_1, VkglTestCase_002803_2);

#define VkglTestCase_002804_1 "dEQP-GLES2.functional.shaders.indexing."
#define VkglTestCase_002804_2 "uniform_array.float_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002804, VkglTestCase_002804_1, VkglTestCase_002804_2);

#define VkglTestCase_002805_1 "dEQP-GLES2.functional.shaders.indexing."
#define VkglTestCase_002805_2 "uniform_array.float_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002805, VkglTestCase_002805_1, VkglTestCase_002805_2);

#define VkglTestCase_002806_1 "dEQP-GLES2.functional.shaders.indexing.u"
#define VkglTestCase_002806_2 "niform_array.float_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002806, VkglTestCase_002806_1, VkglTestCase_002806_2);

#define VkglTestCase_002807_1 "dEQP-GLES2.functional.shaders.indexing.un"
#define VkglTestCase_002807_2 "iform_array.float_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002807, VkglTestCase_002807_1, VkglTestCase_002807_2);

#define VkglTestCase_002808_1 "dEQP-GLES2.functional.shaders.indexing.uni"
#define VkglTestCase_002808_2 "form_array.float_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002808, VkglTestCase_002808_1, VkglTestCase_002808_2);

#define VkglTestCase_002809_1 "dEQP-GLES2.functional.shaders.indexing.un"
#define VkglTestCase_002809_2 "iform_array.float_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002809, VkglTestCase_002809_1, VkglTestCase_002809_2);

#define VkglTestCase_002810_1 "dEQP-GLES2.functional.shaders.indexing.uni"
#define VkglTestCase_002810_2 "form_array.float_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002810, VkglTestCase_002810_1, VkglTestCase_002810_2);

#define VkglTestCase_002811_1 "dEQP-GLES2.functional.shaders.indexing"
#define VkglTestCase_002811_2 ".uniform_array.vec2_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002811, VkglTestCase_002811_1, VkglTestCase_002811_2);

#define VkglTestCase_002812_1 "dEQP-GLES2.functional.shaders.indexing."
#define VkglTestCase_002812_2 "uniform_array.vec2_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002812, VkglTestCase_002812_1, VkglTestCase_002812_2);

#define VkglTestCase_002813_1 "dEQP-GLES2.functional.shaders.indexing"
#define VkglTestCase_002813_2 ".uniform_array.vec2_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002813, VkglTestCase_002813_1, VkglTestCase_002813_2);

#define VkglTestCase_002814_1 "dEQP-GLES2.functional.shaders.indexing."
#define VkglTestCase_002814_2 "uniform_array.vec2_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002814, VkglTestCase_002814_1, VkglTestCase_002814_2);

#define VkglTestCase_002815_1 "dEQP-GLES2.functional.shaders.indexing.u"
#define VkglTestCase_002815_2 "niform_array.vec2_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002815, VkglTestCase_002815_1, VkglTestCase_002815_2);

#define VkglTestCase_002816_1 "dEQP-GLES2.functional.shaders.indexing.un"
#define VkglTestCase_002816_2 "iform_array.vec2_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002816, VkglTestCase_002816_1, VkglTestCase_002816_2);

#define VkglTestCase_002817_1 "dEQP-GLES2.functional.shaders.indexing.un"
#define VkglTestCase_002817_2 "iform_array.vec2_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002817, VkglTestCase_002817_1, VkglTestCase_002817_2);

#define VkglTestCase_002818_1 "dEQP-GLES2.functional.shaders.indexing.uni"
#define VkglTestCase_002818_2 "form_array.vec2_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002818, VkglTestCase_002818_1, VkglTestCase_002818_2);

#define VkglTestCase_002819_1 "dEQP-GLES2.functional.shaders.indexing"
#define VkglTestCase_002819_2 ".uniform_array.vec3_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002819, VkglTestCase_002819_1, VkglTestCase_002819_2);

#define VkglTestCase_002820_1 "dEQP-GLES2.functional.shaders.indexing."
#define VkglTestCase_002820_2 "uniform_array.vec3_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002820, VkglTestCase_002820_1, VkglTestCase_002820_2);

#define VkglTestCase_002821_1 "dEQP-GLES2.functional.shaders.indexing"
#define VkglTestCase_002821_2 ".uniform_array.vec3_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002821, VkglTestCase_002821_1, VkglTestCase_002821_2);

#define VkglTestCase_002822_1 "dEQP-GLES2.functional.shaders.indexing."
#define VkglTestCase_002822_2 "uniform_array.vec3_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002822, VkglTestCase_002822_1, VkglTestCase_002822_2);

#define VkglTestCase_002823_1 "dEQP-GLES2.functional.shaders.indexing.u"
#define VkglTestCase_002823_2 "niform_array.vec3_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002823, VkglTestCase_002823_1, VkglTestCase_002823_2);

#define VkglTestCase_002824_1 "dEQP-GLES2.functional.shaders.indexing.un"
#define VkglTestCase_002824_2 "iform_array.vec3_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002824, VkglTestCase_002824_1, VkglTestCase_002824_2);

#define VkglTestCase_002825_1 "dEQP-GLES2.functional.shaders.indexing.un"
#define VkglTestCase_002825_2 "iform_array.vec3_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002825, VkglTestCase_002825_1, VkglTestCase_002825_2);

#define VkglTestCase_002826_1 "dEQP-GLES2.functional.shaders.indexing.uni"
#define VkglTestCase_002826_2 "form_array.vec3_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002826, VkglTestCase_002826_1, VkglTestCase_002826_2);

#define VkglTestCase_002827_1 "dEQP-GLES2.functional.shaders.indexing"
#define VkglTestCase_002827_2 ".uniform_array.vec4_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002827, VkglTestCase_002827_1, VkglTestCase_002827_2);

#define VkglTestCase_002828_1 "dEQP-GLES2.functional.shaders.indexing."
#define VkglTestCase_002828_2 "uniform_array.vec4_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002828, VkglTestCase_002828_1, VkglTestCase_002828_2);

#define VkglTestCase_002829_1 "dEQP-GLES2.functional.shaders.indexing"
#define VkglTestCase_002829_2 ".uniform_array.vec4_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002829, VkglTestCase_002829_1, VkglTestCase_002829_2);

#define VkglTestCase_002830_1 "dEQP-GLES2.functional.shaders.indexing."
#define VkglTestCase_002830_2 "uniform_array.vec4_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002830, VkglTestCase_002830_1, VkglTestCase_002830_2);

#define VkglTestCase_002831_1 "dEQP-GLES2.functional.shaders.indexing.u"
#define VkglTestCase_002831_2 "niform_array.vec4_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002831, VkglTestCase_002831_1, VkglTestCase_002831_2);

#define VkglTestCase_002832_1 "dEQP-GLES2.functional.shaders.indexing.un"
#define VkglTestCase_002832_2 "iform_array.vec4_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002832, VkglTestCase_002832_1, VkglTestCase_002832_2);

#define VkglTestCase_002833_1 "dEQP-GLES2.functional.shaders.indexing.un"
#define VkglTestCase_002833_2 "iform_array.vec4_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002833, VkglTestCase_002833_1, VkglTestCase_002833_2);

#define VkglTestCase_002834_1 "dEQP-GLES2.functional.shaders.indexing.uni"
#define VkglTestCase_002834_2 "form_array.vec4_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002834, VkglTestCase_002834_1, VkglTestCase_002834_2);
