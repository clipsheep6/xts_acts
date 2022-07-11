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

#define VkglTestCase_036562_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_u"
#define VkglTestCase_036562_2 "niformsiv.basic_array_first_elem_without_brackets.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036562, VkglTestCase_036562_1, VkglTestCase_036562_2);

#define VkglTestCase_036563_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_un"
#define VkglTestCase_036563_2 "iformsiv.basic_array_first_elem_without_brackets.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036563, VkglTestCase_036563_1, VkglTestCase_036563_2);

#define VkglTestCase_036564_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_"
#define VkglTestCase_036564_2 "uniformsiv.basic_array_first_elem_without_brackets.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036564, VkglTestCase_036564_1, VkglTestCase_036564_2);

#define VkglTestCase_036565_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_u"
#define VkglTestCase_036565_2 "niformsiv.basic_array_first_elem_without_brackets.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036565, VkglTestCase_036565_1, VkglTestCase_036565_2);

#define VkglTestCase_036566_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_un"
#define VkglTestCase_036566_2 "iformsiv.basic_array_first_elem_without_brackets.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036566, VkglTestCase_036566_1, VkglTestCase_036566_2);

#define VkglTestCase_036567_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_"
#define VkglTestCase_036567_2 "uniformsiv.basic_array_first_elem_without_brackets.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036567, VkglTestCase_036567_1, VkglTestCase_036567_2);

#define VkglTestCase_036568_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_u"
#define VkglTestCase_036568_2 "niformsiv.basic_array_first_elem_without_brackets.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036568, VkglTestCase_036568_1, VkglTestCase_036568_2);

#define VkglTestCase_036569_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_un"
#define VkglTestCase_036569_2 "iformsiv.basic_array_first_elem_without_brackets.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036569, VkglTestCase_036569_1, VkglTestCase_036569_2);

#define VkglTestCase_036570_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_"
#define VkglTestCase_036570_2 "uniformsiv.basic_array_first_elem_without_brackets.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036570, VkglTestCase_036570_1, VkglTestCase_036570_2);

#define VkglTestCase_036571_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_"
#define VkglTestCase_036571_2 "uniformsiv.basic_array_first_elem_without_brackets.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036571, VkglTestCase_036571_1, VkglTestCase_036571_2);

#define VkglTestCase_036572_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_u"
#define VkglTestCase_036572_2 "niformsiv.basic_array_first_elem_without_brackets.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036572, VkglTestCase_036572_1, VkglTestCase_036572_2);

#define VkglTestCase_036573_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active"
#define VkglTestCase_036573_2 "_uniformsiv.basic_array_first_elem_without_brackets.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036573, VkglTestCase_036573_1, VkglTestCase_036573_2);

#define VkglTestCase_036574_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_u"
#define VkglTestCase_036574_2 "niformsiv.basic_array_first_elem_without_brackets.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036574, VkglTestCase_036574_1, VkglTestCase_036574_2);

#define VkglTestCase_036575_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_un"
#define VkglTestCase_036575_2 "iformsiv.basic_array_first_elem_without_brackets.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036575, VkglTestCase_036575_1, VkglTestCase_036575_2);

#define VkglTestCase_036576_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_"
#define VkglTestCase_036576_2 "uniformsiv.basic_array_first_elem_without_brackets.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036576, VkglTestCase_036576_1, VkglTestCase_036576_2);

#define VkglTestCase_036577_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_u"
#define VkglTestCase_036577_2 "niformsiv.basic_array_first_elem_without_brackets.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036577, VkglTestCase_036577_1, VkglTestCase_036577_2);

#define VkglTestCase_036578_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_un"
#define VkglTestCase_036578_2 "iformsiv.basic_array_first_elem_without_brackets.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036578, VkglTestCase_036578_1, VkglTestCase_036578_2);

#define VkglTestCase_036579_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_"
#define VkglTestCase_036579_2 "uniformsiv.basic_array_first_elem_without_brackets.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036579, VkglTestCase_036579_1, VkglTestCase_036579_2);

#define VkglTestCase_036580_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_u"
#define VkglTestCase_036580_2 "niformsiv.basic_array_first_elem_without_brackets.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036580, VkglTestCase_036580_1, VkglTestCase_036580_2);

#define VkglTestCase_036581_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_un"
#define VkglTestCase_036581_2 "iformsiv.basic_array_first_elem_without_brackets.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036581, VkglTestCase_036581_1, VkglTestCase_036581_2);

#define VkglTestCase_036582_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_"
#define VkglTestCase_036582_2 "uniformsiv.basic_array_first_elem_without_brackets.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036582, VkglTestCase_036582_1, VkglTestCase_036582_2);

#define VkglTestCase_036583_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_u"
#define VkglTestCase_036583_2 "niformsiv.basic_array_first_elem_without_brackets.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036583, VkglTestCase_036583_1, VkglTestCase_036583_2);

#define VkglTestCase_036584_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_un"
#define VkglTestCase_036584_2 "iformsiv.basic_array_first_elem_without_brackets.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036584, VkglTestCase_036584_1, VkglTestCase_036584_2);

#define VkglTestCase_036585_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_"
#define VkglTestCase_036585_2 "uniformsiv.basic_array_first_elem_without_brackets.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036585, VkglTestCase_036585_1, VkglTestCase_036585_2);

#define VkglTestCase_036586_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_u"
#define VkglTestCase_036586_2 "niformsiv.basic_array_first_elem_without_brackets.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036586, VkglTestCase_036586_1, VkglTestCase_036586_2);

#define VkglTestCase_036587_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_un"
#define VkglTestCase_036587_2 "iformsiv.basic_array_first_elem_without_brackets.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036587, VkglTestCase_036587_1, VkglTestCase_036587_2);

#define VkglTestCase_036588_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_"
#define VkglTestCase_036588_2 "uniformsiv.basic_array_first_elem_without_brackets.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036588, VkglTestCase_036588_1, VkglTestCase_036588_2);

#define VkglTestCase_036589_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_uni"
#define VkglTestCase_036589_2 "formsiv.basic_array_first_elem_without_brackets.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036589, VkglTestCase_036589_1, VkglTestCase_036589_2);

#define VkglTestCase_036590_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_unif"
#define VkglTestCase_036590_2 "ormsiv.basic_array_first_elem_without_brackets.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036590, VkglTestCase_036590_1, VkglTestCase_036590_2);

#define VkglTestCase_036591_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_active_un"
#define VkglTestCase_036591_2 "iformsiv.basic_array_first_elem_without_brackets.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036591, VkglTestCase_036591_1, VkglTestCase_036591_2);
