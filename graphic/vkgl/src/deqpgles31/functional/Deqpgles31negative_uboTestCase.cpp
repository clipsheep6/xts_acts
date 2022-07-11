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

#define VkglTestCase_024893_1 "dEQP-GLES31.functional.layout_binding"
#define VkglTestCase_024893_2 ".negative.ubo.vertex_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024893, VkglTestCase_024893_1, VkglTestCase_024893_2);

#define VkglTestCase_024894_1 "dEQP-GLES31.functional.layout_binding."
#define VkglTestCase_024894_2 "negative.ubo.fragment_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024894, VkglTestCase_024894_1, VkglTestCase_024894_2);

#define VkglTestCase_024895_1 "dEQP-GLES31.functional.layout_binding.ne"
#define VkglTestCase_024895_2 "gative.ubo.tess_control_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024895, VkglTestCase_024895_1, VkglTestCase_024895_2);

#define VkglTestCase_024896_1 "dEQP-GLES31.functional.layout_binding.neg"
#define VkglTestCase_024896_2 "ative.ubo.tess_evaluation_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024896, VkglTestCase_024896_1, VkglTestCase_024896_2);

#define VkglTestCase_024897_1 "dEQP-GLES31.functional.layout_bind"
#define VkglTestCase_024897_2 "ing.negative.ubo.vertex_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024897, VkglTestCase_024897_1, VkglTestCase_024897_2);

#define VkglTestCase_024898_1 "dEQP-GLES31.functional.layout_bindi"
#define VkglTestCase_024898_2 "ng.negative.ubo.fragment_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024898, VkglTestCase_024898_1, VkglTestCase_024898_2);

#define VkglTestCase_024899_1 "dEQP-GLES31.functional.layout_binding"
#define VkglTestCase_024899_2 ".negative.ubo.tess_control_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024899, VkglTestCase_024899_1, VkglTestCase_024899_2);

#define VkglTestCase_024900_1 "dEQP-GLES31.functional.layout_binding.n"
#define VkglTestCase_024900_2 "egative.ubo.tess_evaluation_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024900, VkglTestCase_024900_1, VkglTestCase_024900_2);

#define VkglTestCase_024901_1 "dEQP-GLES31.functional.layout_binding.ne"
#define VkglTestCase_024901_2 "gative.ubo.vertex_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024901, VkglTestCase_024901_1, VkglTestCase_024901_2);

#define VkglTestCase_024902_1 "dEQP-GLES31.functional.layout_binding.neg"
#define VkglTestCase_024902_2 "ative.ubo.fragment_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024902, VkglTestCase_024902_1, VkglTestCase_024902_2);

#define VkglTestCase_024903_1 "dEQP-GLES31.functional.layout_binding.negat"
#define VkglTestCase_024903_2 "ive.ubo.tess_control_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024903, VkglTestCase_024903_1, VkglTestCase_024903_2);

#define VkglTestCase_024904_1 "dEQP-GLES31.functional.layout_binding.negati"
#define VkglTestCase_024904_2 "ve.ubo.tess_evaluation_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024904, VkglTestCase_024904_1, VkglTestCase_024904_2);

#define VkglTestCase_024905_1 "dEQP-GLES31.functional.layout_binding"
#define VkglTestCase_024905_2 ".negative.ubo.vertex_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024905, VkglTestCase_024905_1, VkglTestCase_024905_2);

#define VkglTestCase_024906_1 "dEQP-GLES31.functional.layout_binding."
#define VkglTestCase_024906_2 "negative.ubo.fragment_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024906, VkglTestCase_024906_1, VkglTestCase_024906_2);

#define VkglTestCase_024907_1 "dEQP-GLES31.functional.layout_binding.ne"
#define VkglTestCase_024907_2 "gative.ubo.tess_control_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024907, VkglTestCase_024907_1, VkglTestCase_024907_2);

#define VkglTestCase_024908_1 "dEQP-GLES31.functional.layout_binding.nega"
#define VkglTestCase_024908_2 "tive.ubo.tess_evaluation_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024908, VkglTestCase_024908_1, VkglTestCase_024908_2);

#define VkglTestCase_024909_1 "dEQP-GLES31.functional.layout_bindin"
#define VkglTestCase_024909_2 "g.negative.ubo.binding_contradictory"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024909, VkglTestCase_024909_1, VkglTestCase_024909_2);

#define VkglTestCase_024910_1 "dEQP-GLES31.functional.layout_binding.n"
#define VkglTestCase_024910_2 "egative.ubo.binding_contradictory_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024910, VkglTestCase_024910_1, VkglTestCase_024910_2);
