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
#include "../ActsDeqpgles20014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013698_1 "dEQP-GLES2.functional.n"
#define VkglTestCase_013698_2 "egative_api.state.enable"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013698, VkglTestCase_013698_1, VkglTestCase_013698_2);

#define VkglTestCase_013699_1 "dEQP-GLES2.functional.ne"
#define VkglTestCase_013699_2 "gative_api.state.disable"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013699, VkglTestCase_013699_1, VkglTestCase_013699_2);

#define VkglTestCase_013700_1 "dEQP-GLES2.functional.nega"
#define VkglTestCase_013700_2 "tive_api.state.get_booleanv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013700, VkglTestCase_013700_1, VkglTestCase_013700_2);

#define VkglTestCase_013701_1 "dEQP-GLES2.functional.neg"
#define VkglTestCase_013701_2 "ative_api.state.get_floatv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013701, VkglTestCase_013701_1, VkglTestCase_013701_2);

#define VkglTestCase_013702_1 "dEQP-GLES2.functional.nega"
#define VkglTestCase_013702_2 "tive_api.state.get_integerv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013702, VkglTestCase_013702_1, VkglTestCase_013702_2);

#define VkglTestCase_013703_1 "dEQP-GLES2.functional.neg"
#define VkglTestCase_013703_2 "ative_api.state.get_string"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013703, VkglTestCase_013703_1, VkglTestCase_013703_2);

#define VkglTestCase_013704_1 "dEQP-GLES2.functional.negative"
#define VkglTestCase_013704_2 "_api.state.get_attached_shaders"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013704, VkglTestCase_013704_1, VkglTestCase_013704_2);

#define VkglTestCase_013705_1 "dEQP-GLES2.functional.nega"
#define VkglTestCase_013705_2 "tive_api.state.get_shaderiv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013705, VkglTestCase_013705_1, VkglTestCase_013705_2);

#define VkglTestCase_013706_1 "dEQP-GLES2.functional.negative"
#define VkglTestCase_013706_2 "_api.state.get_shader_info_log"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013706, VkglTestCase_013706_1, VkglTestCase_013706_2);

#define VkglTestCase_013707_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013707_2 ".state.get_shader_precision_format"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013707, VkglTestCase_013707_1, VkglTestCase_013707_2);

#define VkglTestCase_013708_1 "dEQP-GLES2.functional.negativ"
#define VkglTestCase_013708_2 "e_api.state.get_shader_source"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013708, VkglTestCase_013708_1, VkglTestCase_013708_2);

#define VkglTestCase_013709_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013709_2 "ive_api.state.get_programiv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013709, VkglTestCase_013709_1, VkglTestCase_013709_2);

#define VkglTestCase_013710_1 "dEQP-GLES2.functional.negative"
#define VkglTestCase_013710_2 "_api.state.get_program_info_log"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013710, VkglTestCase_013710_1, VkglTestCase_013710_2);

#define VkglTestCase_013711_1 "dEQP-GLES2.functional.negative"
#define VkglTestCase_013711_2 "_api.state.get_tex_parameterfv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013711, VkglTestCase_013711_1, VkglTestCase_013711_2);

#define VkglTestCase_013712_1 "dEQP-GLES2.functional.negative"
#define VkglTestCase_013712_2 "_api.state.get_tex_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013712, VkglTestCase_013712_1, VkglTestCase_013712_2);

#define VkglTestCase_013713_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013713_2 "ive_api.state.get_uniformfv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013713, VkglTestCase_013713_1, VkglTestCase_013713_2);

#define VkglTestCase_013714_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013714_2 "ive_api.state.get_uniformiv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013714, VkglTestCase_013714_1, VkglTestCase_013714_2);

#define VkglTestCase_013715_1 "dEQP-GLES2.functional.negative"
#define VkglTestCase_013715_2 "_api.state.get_vertex_attribfv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013715, VkglTestCase_013715_1, VkglTestCase_013715_2);

#define VkglTestCase_013716_1 "dEQP-GLES2.functional.negative"
#define VkglTestCase_013716_2 "_api.state.get_vertex_attribiv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013716, VkglTestCase_013716_1, VkglTestCase_013716_2);

#define VkglTestCase_013717_1 "dEQP-GLES2.functional.negative_ap"
#define VkglTestCase_013717_2 "i.state.get_vertex_attrib_pointerv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013717, VkglTestCase_013717_1, VkglTestCase_013717_2);

#define VkglTestCase_013718_1 "dEQP-GLES2.functional.negative_"
#define VkglTestCase_013718_2 "api.state.get_buffer_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013718, VkglTestCase_013718_1, VkglTestCase_013718_2);

#define VkglTestCase_013719_1 "dEQP-GLES2.functional.negative_api.stat"
#define VkglTestCase_013719_2 "e.get_framebuffer_attachment_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013719, VkglTestCase_013719_1, VkglTestCase_013719_2);

#define VkglTestCase_013720_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013720_2 ".state.get_renderbuffer_parameteriv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013720, VkglTestCase_013720_1, VkglTestCase_013720_2);

#define VkglTestCase_013721_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013721_2 "ive_api.state.get_is_enabled"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013721, VkglTestCase_013721_1, VkglTestCase_013721_2);

#define VkglTestCase_013722_1 "dEQP-GLES2.functional."
#define VkglTestCase_013722_2 "negative_api.state.hint"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013722, VkglTestCase_013722_1, VkglTestCase_013722_2);

#define VkglTestCase_013723_1 "dEQP-GLES2.functional.neg"
#define VkglTestCase_013723_2 "ative_api.state.is_buffer"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013723, VkglTestCase_013723_1, VkglTestCase_013723_2);

#define VkglTestCase_013724_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013724_2 "ive_api.state.is_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013724, VkglTestCase_013724_1, VkglTestCase_013724_2);

#define VkglTestCase_013725_1 "dEQP-GLES2.functional.neg"
#define VkglTestCase_013725_2 "ative_api.state.is_program"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013725, VkglTestCase_013725_1, VkglTestCase_013725_2);

#define VkglTestCase_013726_1 "dEQP-GLES2.functional.negati"
#define VkglTestCase_013726_2 "ve_api.state.is_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013726, VkglTestCase_013726_1, VkglTestCase_013726_2);

#define VkglTestCase_013727_1 "dEQP-GLES2.functional.neg"
#define VkglTestCase_013727_2 "ative_api.state.is_shader"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013727, VkglTestCase_013727_1, VkglTestCase_013727_2);

#define VkglTestCase_013728_1 "dEQP-GLES2.functional.neg"
#define VkglTestCase_013728_2 "ative_api.state.is_texture"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013728, VkglTestCase_013728_1, VkglTestCase_013728_2);
