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
#include "../ActsDeqpgles310018TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_017690_1 "dEQP-GLES31.functional.separate_shader.inter"
#define VkglTestCase_017690_2 "face.same_name_vertex_smooth_fragment_smooth"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017690, VkglTestCase_017690_1, VkglTestCase_017690_2);

#define VkglTestCase_017691_1 "dEQP-GLES31.functional.separate_shader.interf"
#define VkglTestCase_017691_2 "ace.same_name_vertex_smooth_fragment_centroid"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017691, VkglTestCase_017691_1, VkglTestCase_017691_2);

#define VkglTestCase_017692_1 "dEQP-GLES31.functional.separate_shad"
#define VkglTestCase_017692_2 "er.interface.same_name_vertex_smooth"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017692, VkglTestCase_017692_1, VkglTestCase_017692_2);

#define VkglTestCase_017693_1 "dEQP-GLES31.functional.separate_shader.int"
#define VkglTestCase_017693_2 "erface.same_name_vertex_flat_fragment_flat"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017693, VkglTestCase_017693_1, VkglTestCase_017693_2);

#define VkglTestCase_017694_1 "dEQP-GLES31.functional.separate_shader.interf"
#define VkglTestCase_017694_2 "ace.same_name_vertex_centroid_fragment_smooth"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017694, VkglTestCase_017694_1, VkglTestCase_017694_2);

#define VkglTestCase_017695_1 "dEQP-GLES31.functional.separate_shader.interfa"
#define VkglTestCase_017695_2 "ce.same_name_vertex_centroid_fragment_centroid"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017695, VkglTestCase_017695_1, VkglTestCase_017695_2);

#define VkglTestCase_017696_1 "dEQP-GLES31.functional.separate_shade"
#define VkglTestCase_017696_2 "r.interface.same_name_vertex_centroid"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017696, VkglTestCase_017696_1, VkglTestCase_017696_2);

#define VkglTestCase_017697_1 "dEQP-GLES31.functional.separate_shade"
#define VkglTestCase_017697_2 "r.interface.same_name_fragment_smooth"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017697, VkglTestCase_017697_1, VkglTestCase_017697_2);

#define VkglTestCase_017698_1 "dEQP-GLES31.functional.separate_shader"
#define VkglTestCase_017698_2 ".interface.same_name_fragment_centroid"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017698, VkglTestCase_017698_1, VkglTestCase_017698_2);

#define VkglTestCase_017699_1 "dEQP-GLES31.functional.separa"
#define VkglTestCase_017699_2 "te_shader.interface.same_name"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017699, VkglTestCase_017699_1, VkglTestCase_017699_2);

#define VkglTestCase_017700_1 "dEQP-GLES31.functional.separate_shader.interfa"
#define VkglTestCase_017700_2 "ce.same_location_vertex_smooth_fragment_smooth"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017700, VkglTestCase_017700_1, VkglTestCase_017700_2);

#define VkglTestCase_017701_1 "dEQP-GLES31.functional.separate_shader.interfac"
#define VkglTestCase_017701_2 "e.same_location_vertex_smooth_fragment_centroid"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017701, VkglTestCase_017701_1, VkglTestCase_017701_2);

#define VkglTestCase_017702_1 "dEQP-GLES31.functional.separate_shader"
#define VkglTestCase_017702_2 ".interface.same_location_vertex_smooth"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017702, VkglTestCase_017702_1, VkglTestCase_017702_2);

#define VkglTestCase_017703_1 "dEQP-GLES31.functional.separate_shader.inter"
#define VkglTestCase_017703_2 "face.same_location_vertex_flat_fragment_flat"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017703, VkglTestCase_017703_1, VkglTestCase_017703_2);

#define VkglTestCase_017704_1 "dEQP-GLES31.functional.separate_shader.interfac"
#define VkglTestCase_017704_2 "e.same_location_vertex_centroid_fragment_smooth"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017704, VkglTestCase_017704_1, VkglTestCase_017704_2);

#define VkglTestCase_017705_1 "dEQP-GLES31.functional.separate_shader.interface"
#define VkglTestCase_017705_2 ".same_location_vertex_centroid_fragment_centroid"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017705, VkglTestCase_017705_1, VkglTestCase_017705_2);

#define VkglTestCase_017706_1 "dEQP-GLES31.functional.separate_shader."
#define VkglTestCase_017706_2 "interface.same_location_vertex_centroid"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017706, VkglTestCase_017706_1, VkglTestCase_017706_2);

#define VkglTestCase_017707_1 "dEQP-GLES31.functional.separate_shader."
#define VkglTestCase_017707_2 "interface.same_location_fragment_smooth"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017707, VkglTestCase_017707_1, VkglTestCase_017707_2);

#define VkglTestCase_017708_1 "dEQP-GLES31.functional.separate_shader.i"
#define VkglTestCase_017708_2 "nterface.same_location_fragment_centroid"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017708, VkglTestCase_017708_1, VkglTestCase_017708_2);

#define VkglTestCase_017709_1 "dEQP-GLES31.functional.separate"
#define VkglTestCase_017709_2 "_shader.interface.same_location"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017709, VkglTestCase_017709_1, VkglTestCase_017709_2);
