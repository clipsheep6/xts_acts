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

#define VkglTestCase_017842_1 "dEQP-GLES31.functional.separate_shader"
#define VkglTestCase_017842_2 ".validation.es31.varying.missing_input"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017842, VkglTestCase_017842_1, VkglTestCase_017842_2);

#define VkglTestCase_017843_1 "dEQP-GLES31.functional.separate_shader"
#define VkglTestCase_017843_2 ".validation.es31.varying.missing_output"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017843, VkglTestCase_017843_1, VkglTestCase_017843_2);

#define VkglTestCase_017844_1 "dEQP-GLES31.functional.separate_shader"
#define VkglTestCase_017844_2 ".validation.es31.varying.mismatch_type"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017844, VkglTestCase_017844_1, VkglTestCase_017844_2);

#define VkglTestCase_017845_1 "dEQP-GLES31.functional.separate_shader.v"
#define VkglTestCase_017845_2 "alidation.es31.varying.mismatch_precision"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017845, VkglTestCase_017845_1, VkglTestCase_017845_2);

#define VkglTestCase_017846_1 "dEQP-GLES31.functional.separate_shader.validati"
#define VkglTestCase_017846_2 "on.es31.varying.mismatch_explicit_location_type"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017846, VkglTestCase_017846_1, VkglTestCase_017846_2);

#define VkglTestCase_017847_1 "dEQP-GLES31.functional.separate_shader.validation"
#define VkglTestCase_017847_2 ".es31.varying.mismatch_explicit_location_precision"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017847, VkglTestCase_017847_1, VkglTestCase_017847_2);

#define VkglTestCase_017848_1 "dEQP-GLES31.functional.separate_shader.valid"
#define VkglTestCase_017848_2 "ation.es31.varying.mismatch_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017848, VkglTestCase_017848_1, VkglTestCase_017848_2);

#define VkglTestCase_017849_1 "dEQP-GLES31.functional.separate_shader.validation."
#define VkglTestCase_017849_2 "es31.varying.mismatch_implicit_explicit_location_1"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017849, VkglTestCase_017849_1, VkglTestCase_017849_2);

#define VkglTestCase_017850_1 "dEQP-GLES31.functional.separate_shader.validation."
#define VkglTestCase_017850_2 "es31.varying.mismatch_implicit_explicit_location_2"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017850, VkglTestCase_017850_1, VkglTestCase_017850_2);

#define VkglTestCase_017851_1 "dEQP-GLES31.functional.separate_shader.validation."
#define VkglTestCase_017851_2 "es31.varying.mismatch_implicit_explicit_location_3"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017851, VkglTestCase_017851_1, VkglTestCase_017851_2);

#define VkglTestCase_017852_1 "dEQP-GLES31.functional.separate_shader.validati"
#define VkglTestCase_017852_2 "on.es31.varying.mismatch_different_struct_names"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017852, VkglTestCase_017852_1, VkglTestCase_017852_2);

#define VkglTestCase_017853_1 "dEQP-GLES31.functional.separate_shader.valida"
#define VkglTestCase_017853_2 "tion.es31.varying.mismatch_struct_member_name"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017853, VkglTestCase_017853_1, VkglTestCase_017853_2);

#define VkglTestCase_017854_1 "dEQP-GLES31.functional.separate_shader.valida"
#define VkglTestCase_017854_2 "tion.es31.varying.mismatch_struct_member_type"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017854, VkglTestCase_017854_1, VkglTestCase_017854_2);

#define VkglTestCase_017855_1 "dEQP-GLES31.functional.separate_shader.validati"
#define VkglTestCase_017855_2 "on.es31.varying.mismatch_struct_member_precision"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017855, VkglTestCase_017855_1, VkglTestCase_017855_2);

#define VkglTestCase_017856_1 "dEQP-GLES31.functional.separate_shader.valida"
#define VkglTestCase_017856_2 "tion.es31.varying.mismatch_struct_member_order"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017856, VkglTestCase_017856_1, VkglTestCase_017856_2);

#define VkglTestCase_017857_1 "dEQP-GLES31.functional.separate_shader.valida"
#define VkglTestCase_017857_2 "tion.es31.varying.mismatch_array_element_type"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017857, VkglTestCase_017857_1, VkglTestCase_017857_2);

#define VkglTestCase_017858_1 "dEQP-GLES31.functional.separate_shader.val"
#define VkglTestCase_017858_2 "idation.es31.varying.mismatch_array_length"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017858, VkglTestCase_017858_1, VkglTestCase_017858_2);

#define VkglTestCase_017859_1 "dEQP-GLES31.functional.separate_shader.vali"
#define VkglTestCase_017859_2 "dation.es31.varying.mismatch_array_precision"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017859, VkglTestCase_017859_1, VkglTestCase_017859_2);

#define VkglTestCase_017860_1 "dEQP-GLES31.functional.separate_shader.validation.es3"
#define VkglTestCase_017860_2 "1.varying.mismatch_qualifier_vertex_flat_fragment_none"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017860, VkglTestCase_017860_1, VkglTestCase_017860_2);

#define VkglTestCase_017861_1 "dEQP-GLES31.functional.separate_shader.validation.es31"
#define VkglTestCase_017861_2 ".varying.mismatch_qualifier_vertex_flat_fragment_smooth"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017861, VkglTestCase_017861_1, VkglTestCase_017861_2);

#define VkglTestCase_017862_1 "dEQP-GLES31.functional.separate_shader.validation.es31."
#define VkglTestCase_017862_2 "varying.mismatch_qualifier_vertex_flat_fragment_centroid"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017862, VkglTestCase_017862_1, VkglTestCase_017862_2);

#define VkglTestCase_017863_1 "dEQP-GLES31.functional.separate_shader.validation.es31"
#define VkglTestCase_017863_2 ".varying.mismatch_qualifier_vertex_smooth_fragment_flat"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017863, VkglTestCase_017863_1, VkglTestCase_017863_2);

#define VkglTestCase_017864_1 "dEQP-GLES31.functional.separate_shader.validation.es31."
#define VkglTestCase_017864_2 "varying.mismatch_qualifier_vertex_centroid_fragment_flat"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017864, VkglTestCase_017864_1, VkglTestCase_017864_2);
