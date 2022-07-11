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

#define VkglTestCase_024911_1 "dEQP-GLES31.functional.layout_binding"
#define VkglTestCase_024911_2 ".negative.ssbo.vertex_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024911, VkglTestCase_024911_1, VkglTestCase_024911_2);

#define VkglTestCase_024912_1 "dEQP-GLES31.functional.layout_binding."
#define VkglTestCase_024912_2 "negative.ssbo.fragment_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024912, VkglTestCase_024912_1, VkglTestCase_024912_2);

#define VkglTestCase_024913_1 "dEQP-GLES31.functional.layout_binding.ne"
#define VkglTestCase_024913_2 "gative.ssbo.tess_control_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024913, VkglTestCase_024913_1, VkglTestCase_024913_2);

#define VkglTestCase_024914_1 "dEQP-GLES31.functional.layout_binding.nega"
#define VkglTestCase_024914_2 "tive.ssbo.tess_evaluation_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024914, VkglTestCase_024914_1, VkglTestCase_024914_2);

#define VkglTestCase_024915_1 "dEQP-GLES31.functional.layout_bindi"
#define VkglTestCase_024915_2 "ng.negative.ssbo.vertex_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024915, VkglTestCase_024915_1, VkglTestCase_024915_2);

#define VkglTestCase_024916_1 "dEQP-GLES31.functional.layout_bindin"
#define VkglTestCase_024916_2 "g.negative.ssbo.fragment_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024916, VkglTestCase_024916_1, VkglTestCase_024916_2);

#define VkglTestCase_024917_1 "dEQP-GLES31.functional.layout_binding."
#define VkglTestCase_024917_2 "negative.ssbo.tess_control_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024917, VkglTestCase_024917_1, VkglTestCase_024917_2);

#define VkglTestCase_024918_1 "dEQP-GLES31.functional.layout_binding.n"
#define VkglTestCase_024918_2 "egative.ssbo.tess_evaluation_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024918, VkglTestCase_024918_1, VkglTestCase_024918_2);

#define VkglTestCase_024919_1 "dEQP-GLES31.functional.layout_binding.ne"
#define VkglTestCase_024919_2 "gative.ssbo.vertex_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024919, VkglTestCase_024919_1, VkglTestCase_024919_2);

#define VkglTestCase_024920_1 "dEQP-GLES31.functional.layout_binding.neg"
#define VkglTestCase_024920_2 "ative.ssbo.fragment_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024920, VkglTestCase_024920_1, VkglTestCase_024920_2);

#define VkglTestCase_024921_1 "dEQP-GLES31.functional.layout_binding.negat"
#define VkglTestCase_024921_2 "ive.ssbo.tess_control_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024921, VkglTestCase_024921_1, VkglTestCase_024921_2);

#define VkglTestCase_024922_1 "dEQP-GLES31.functional.layout_binding.negativ"
#define VkglTestCase_024922_2 "e.ssbo.tess_evaluation_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024922, VkglTestCase_024922_1, VkglTestCase_024922_2);

#define VkglTestCase_024923_1 "dEQP-GLES31.functional.layout_binding."
#define VkglTestCase_024923_2 "negative.ssbo.vertex_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024923, VkglTestCase_024923_1, VkglTestCase_024923_2);

#define VkglTestCase_024924_1 "dEQP-GLES31.functional.layout_binding.n"
#define VkglTestCase_024924_2 "egative.ssbo.fragment_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024924, VkglTestCase_024924_1, VkglTestCase_024924_2);

#define VkglTestCase_024925_1 "dEQP-GLES31.functional.layout_binding.neg"
#define VkglTestCase_024925_2 "ative.ssbo.tess_control_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024925, VkglTestCase_024925_1, VkglTestCase_024925_2);

#define VkglTestCase_024926_1 "dEQP-GLES31.functional.layout_binding.nega"
#define VkglTestCase_024926_2 "tive.ssbo.tess_evaluation_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024926, VkglTestCase_024926_1, VkglTestCase_024926_2);

#define VkglTestCase_024927_1 "dEQP-GLES31.functional.layout_bindin"
#define VkglTestCase_024927_2 "g.negative.ssbo.binding_contradictory"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024927, VkglTestCase_024927_1, VkglTestCase_024927_2);

#define VkglTestCase_024928_1 "dEQP-GLES31.functional.layout_binding.n"
#define VkglTestCase_024928_2 "egative.ssbo.binding_contradictory_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024928, VkglTestCase_024928_1, VkglTestCase_024928_2);
