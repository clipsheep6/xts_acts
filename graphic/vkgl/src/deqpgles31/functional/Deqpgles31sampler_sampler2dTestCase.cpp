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

#define VkglTestCase_024797_1 "dEQP-GLES31.functional.layout_binding."
#define VkglTestCase_024797_2 "sampler.sampler2d.vertex_binding_single"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024797, VkglTestCase_024797_1, VkglTestCase_024797_2);

#define VkglTestCase_024798_1 "dEQP-GLES31.functional.layout_binding"
#define VkglTestCase_024798_2 ".sampler.sampler2d.vertex_binding_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024798, VkglTestCase_024798_1, VkglTestCase_024798_2);

#define VkglTestCase_024799_1 "dEQP-GLES31.functional.layout_binding.s"
#define VkglTestCase_024799_2 "ampler.sampler2d.vertex_binding_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024799, VkglTestCase_024799_1, VkglTestCase_024799_2);

#define VkglTestCase_024800_1 "dEQP-GLES31.functional.layout_binding."
#define VkglTestCase_024800_2 "sampler.sampler2d.vertex_binding_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024800, VkglTestCase_024800_1, VkglTestCase_024800_2);

#define VkglTestCase_024801_1 "dEQP-GLES31.functional.layout_binding.sa"
#define VkglTestCase_024801_2 "mpler.sampler2d.vertex_binding_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024801, VkglTestCase_024801_1, VkglTestCase_024801_2);

#define VkglTestCase_024802_1 "dEQP-GLES31.functional.layout_binding.s"
#define VkglTestCase_024802_2 "ampler.sampler2d.fragment_binding_single"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024802, VkglTestCase_024802_1, VkglTestCase_024802_2);

#define VkglTestCase_024803_1 "dEQP-GLES31.functional.layout_binding."
#define VkglTestCase_024803_2 "sampler.sampler2d.fragment_binding_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024803, VkglTestCase_024803_1, VkglTestCase_024803_2);

#define VkglTestCase_024804_1 "dEQP-GLES31.functional.layout_binding.sa"
#define VkglTestCase_024804_2 "mpler.sampler2d.fragment_binding_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024804, VkglTestCase_024804_1, VkglTestCase_024804_2);

#define VkglTestCase_024805_1 "dEQP-GLES31.functional.layout_binding.s"
#define VkglTestCase_024805_2 "ampler.sampler2d.fragment_binding_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024805, VkglTestCase_024805_1, VkglTestCase_024805_2);

#define VkglTestCase_024806_1 "dEQP-GLES31.functional.layout_binding.sam"
#define VkglTestCase_024806_2 "pler.sampler2d.fragment_binding_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024806, VkglTestCase_024806_1, VkglTestCase_024806_2);

#define VkglTestCase_024857_1 "dEQP-GLES31.functional.layout_binding.negati"
#define VkglTestCase_024857_2 "ve.sampler.sampler2d.vertex_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024857, VkglTestCase_024857_1, VkglTestCase_024857_2);

#define VkglTestCase_024858_1 "dEQP-GLES31.functional.layout_binding.negativ"
#define VkglTestCase_024858_2 "e.sampler.sampler2d.fragment_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024858, VkglTestCase_024858_1, VkglTestCase_024858_2);

#define VkglTestCase_024859_1 "dEQP-GLES31.functional.layout_binding.negative."
#define VkglTestCase_024859_2 "sampler.sampler2d.tess_control_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024859, VkglTestCase_024859_1, VkglTestCase_024859_2);

#define VkglTestCase_024860_1 "dEQP-GLES31.functional.layout_binding.negative.s"
#define VkglTestCase_024860_2 "ampler.sampler2d.tess_evaluation_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024860, VkglTestCase_024860_1, VkglTestCase_024860_2);

#define VkglTestCase_024861_1 "dEQP-GLES31.functional.layout_binding.neg"
#define VkglTestCase_024861_2 "ative.sampler.sampler2d.vertex_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024861, VkglTestCase_024861_1, VkglTestCase_024861_2);

#define VkglTestCase_024862_1 "dEQP-GLES31.functional.layout_binding.nega"
#define VkglTestCase_024862_2 "tive.sampler.sampler2d.fragment_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024862, VkglTestCase_024862_1, VkglTestCase_024862_2);

#define VkglTestCase_024863_1 "dEQP-GLES31.functional.layout_binding.negati"
#define VkglTestCase_024863_2 "ve.sampler.sampler2d.tess_control_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024863, VkglTestCase_024863_1, VkglTestCase_024863_2);

#define VkglTestCase_024864_1 "dEQP-GLES31.functional.layout_binding.negative"
#define VkglTestCase_024864_2 ".sampler.sampler2d.tess_evaluation_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024864, VkglTestCase_024864_1, VkglTestCase_024864_2);

#define VkglTestCase_024865_1 "dEQP-GLES31.functional.layout_binding.negative."
#define VkglTestCase_024865_2 "sampler.sampler2d.vertex_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024865, VkglTestCase_024865_1, VkglTestCase_024865_2);

#define VkglTestCase_024866_1 "dEQP-GLES31.functional.layout_binding.negative.s"
#define VkglTestCase_024866_2 "ampler.sampler2d.fragment_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024866, VkglTestCase_024866_1, VkglTestCase_024866_2);

#define VkglTestCase_024867_1 "dEQP-GLES31.functional.layout_binding.negative.sam"
#define VkglTestCase_024867_2 "pler.sampler2d.tess_control_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024867, VkglTestCase_024867_1, VkglTestCase_024867_2);

#define VkglTestCase_024868_1 "dEQP-GLES31.functional.layout_binding.negative.samp"
#define VkglTestCase_024868_2 "ler.sampler2d.tess_evaluation_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024868, VkglTestCase_024868_1, VkglTestCase_024868_2);

#define VkglTestCase_024869_1 "dEQP-GLES31.functional.layout_binding.negati"
#define VkglTestCase_024869_2 "ve.sampler.sampler2d.vertex_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024869, VkglTestCase_024869_1, VkglTestCase_024869_2);

#define VkglTestCase_024870_1 "dEQP-GLES31.functional.layout_binding.negativ"
#define VkglTestCase_024870_2 "e.sampler.sampler2d.fragment_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024870, VkglTestCase_024870_1, VkglTestCase_024870_2);

#define VkglTestCase_024871_1 "dEQP-GLES31.functional.layout_binding.negative."
#define VkglTestCase_024871_2 "sampler.sampler2d.tess_control_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024871, VkglTestCase_024871_1, VkglTestCase_024871_2);

#define VkglTestCase_024872_1 "dEQP-GLES31.functional.layout_binding.negative.sa"
#define VkglTestCase_024872_2 "mpler.sampler2d.tess_evaluation_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024872, VkglTestCase_024872_1, VkglTestCase_024872_2);

#define VkglTestCase_024873_1 "dEQP-GLES31.functional.layout_binding.negat"
#define VkglTestCase_024873_2 "ive.sampler.sampler2d.binding_contradictory"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024873, VkglTestCase_024873_1, VkglTestCase_024873_2);

#define VkglTestCase_024874_1 "dEQP-GLES31.functional.layout_binding.negative"
#define VkglTestCase_024874_2 ".sampler.sampler2d.binding_contradictory_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024874, VkglTestCase_024874_1, VkglTestCase_024874_2);
