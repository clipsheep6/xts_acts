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
#include "../ActsDeqpgles310025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024837_1 "dEQP-GLES31.functional.layout_bindin"
#define VkglTestCase_024837_2 "g.image.image2d.vertex_binding_single"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024837, VkglTestCase_024837_1, VkglTestCase_024837_2);

#define VkglTestCase_024838_1 "dEQP-GLES31.functional.layout_bindi"
#define VkglTestCase_024838_2 "ng.image.image2d.vertex_binding_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024838, VkglTestCase_024838_1, VkglTestCase_024838_2);

#define VkglTestCase_024839_1 "dEQP-GLES31.functional.layout_binding"
#define VkglTestCase_024839_2 ".image.image2d.vertex_binding_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024839, VkglTestCase_024839_1, VkglTestCase_024839_2);

#define VkglTestCase_024840_1 "dEQP-GLES31.functional.layout_bindin"
#define VkglTestCase_024840_2 "g.image.image2d.vertex_binding_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024840, VkglTestCase_024840_1, VkglTestCase_024840_2);

#define VkglTestCase_024841_1 "dEQP-GLES31.functional.layout_binding."
#define VkglTestCase_024841_2 "image.image2d.vertex_binding_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024841, VkglTestCase_024841_1, VkglTestCase_024841_2);

#define VkglTestCase_024842_1 "dEQP-GLES31.functional.layout_binding"
#define VkglTestCase_024842_2 ".image.image2d.fragment_binding_single"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024842, VkglTestCase_024842_1, VkglTestCase_024842_2);

#define VkglTestCase_024843_1 "dEQP-GLES31.functional.layout_bindin"
#define VkglTestCase_024843_2 "g.image.image2d.fragment_binding_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024843, VkglTestCase_024843_1, VkglTestCase_024843_2);

#define VkglTestCase_024844_1 "dEQP-GLES31.functional.layout_binding."
#define VkglTestCase_024844_2 "image.image2d.fragment_binding_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024844, VkglTestCase_024844_1, VkglTestCase_024844_2);

#define VkglTestCase_024845_1 "dEQP-GLES31.functional.layout_binding"
#define VkglTestCase_024845_2 ".image.image2d.fragment_binding_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024845, VkglTestCase_024845_1, VkglTestCase_024845_2);

#define VkglTestCase_024846_1 "dEQP-GLES31.functional.layout_binding.i"
#define VkglTestCase_024846_2 "mage.image2d.fragment_binding_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024846, VkglTestCase_024846_1, VkglTestCase_024846_2);

#define VkglTestCase_024929_1 "dEQP-GLES31.functional.layout_binding.nega"
#define VkglTestCase_024929_2 "tive.image.image2d.vertex_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024929, VkglTestCase_024929_1, VkglTestCase_024929_2);

#define VkglTestCase_024930_1 "dEQP-GLES31.functional.layout_binding.negat"
#define VkglTestCase_024930_2 "ive.image.image2d.fragment_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024930, VkglTestCase_024930_1, VkglTestCase_024930_2);

#define VkglTestCase_024931_1 "dEQP-GLES31.functional.layout_binding.negativ"
#define VkglTestCase_024931_2 "e.image.image2d.tess_control_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024931, VkglTestCase_024931_1, VkglTestCase_024931_2);

#define VkglTestCase_024932_1 "dEQP-GLES31.functional.layout_binding.negative"
#define VkglTestCase_024932_2 ".image.image2d.tess_evaluation_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024932, VkglTestCase_024932_1, VkglTestCase_024932_2);

#define VkglTestCase_024933_1 "dEQP-GLES31.functional.layout_binding.n"
#define VkglTestCase_024933_2 "egative.image.image2d.vertex_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024933, VkglTestCase_024933_1, VkglTestCase_024933_2);

#define VkglTestCase_024934_1 "dEQP-GLES31.functional.layout_binding.ne"
#define VkglTestCase_024934_2 "gative.image.image2d.fragment_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024934, VkglTestCase_024934_1, VkglTestCase_024934_2);

#define VkglTestCase_024935_1 "dEQP-GLES31.functional.layout_binding.nega"
#define VkglTestCase_024935_2 "tive.image.image2d.tess_control_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024935, VkglTestCase_024935_1, VkglTestCase_024935_2);

#define VkglTestCase_024936_1 "dEQP-GLES31.functional.layout_binding.negati"
#define VkglTestCase_024936_2 "ve.image.image2d.tess_evaluation_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024936, VkglTestCase_024936_1, VkglTestCase_024936_2);

#define VkglTestCase_024937_1 "dEQP-GLES31.functional.layout_binding.negativ"
#define VkglTestCase_024937_2 "e.image.image2d.vertex_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024937, VkglTestCase_024937_1, VkglTestCase_024937_2);

#define VkglTestCase_024938_1 "dEQP-GLES31.functional.layout_binding.negative"
#define VkglTestCase_024938_2 ".image.image2d.fragment_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024938, VkglTestCase_024938_1, VkglTestCase_024938_2);

#define VkglTestCase_024939_1 "dEQP-GLES31.functional.layout_binding.negative.i"
#define VkglTestCase_024939_2 "mage.image2d.tess_control_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024939, VkglTestCase_024939_1, VkglTestCase_024939_2);

#define VkglTestCase_024940_1 "dEQP-GLES31.functional.layout_binding.negative.im"
#define VkglTestCase_024940_2 "age.image2d.tess_evaluation_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024940, VkglTestCase_024940_1, VkglTestCase_024940_2);

#define VkglTestCase_024941_1 "dEQP-GLES31.functional.layout_binding.nega"
#define VkglTestCase_024941_2 "tive.image.image2d.vertex_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024941, VkglTestCase_024941_1, VkglTestCase_024941_2);

#define VkglTestCase_024942_1 "dEQP-GLES31.functional.layout_binding.negat"
#define VkglTestCase_024942_2 "ive.image.image2d.fragment_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024942, VkglTestCase_024942_1, VkglTestCase_024942_2);

#define VkglTestCase_024943_1 "dEQP-GLES31.functional.layout_binding.negativ"
#define VkglTestCase_024943_2 "e.image.image2d.tess_control_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024943, VkglTestCase_024943_1, VkglTestCase_024943_2);

#define VkglTestCase_024944_1 "dEQP-GLES31.functional.layout_binding.negative."
#define VkglTestCase_024944_2 "image.image2d.tess_evaluation_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024944, VkglTestCase_024944_1, VkglTestCase_024944_2);

#define VkglTestCase_024945_1 "dEQP-GLES31.functional.layout_binding.neg"
#define VkglTestCase_024945_2 "ative.image.image2d.binding_contradictory"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024945, VkglTestCase_024945_1, VkglTestCase_024945_2);

#define VkglTestCase_024946_1 "dEQP-GLES31.functional.layout_binding.negati"
#define VkglTestCase_024946_2 "ve.image.image2d.binding_contradictory_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024946, VkglTestCase_024946_1, VkglTestCase_024946_2);
