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

#define VkglTestCase_024807_1 "dEQP-GLES31.functional.layout_binding."
#define VkglTestCase_024807_2 "sampler.sampler3d.vertex_binding_single"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024807, VkglTestCase_024807_1, VkglTestCase_024807_2);

#define VkglTestCase_024808_1 "dEQP-GLES31.functional.layout_binding"
#define VkglTestCase_024808_2 ".sampler.sampler3d.vertex_binding_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024808, VkglTestCase_024808_1, VkglTestCase_024808_2);

#define VkglTestCase_024809_1 "dEQP-GLES31.functional.layout_binding.s"
#define VkglTestCase_024809_2 "ampler.sampler3d.vertex_binding_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024809, VkglTestCase_024809_1, VkglTestCase_024809_2);

#define VkglTestCase_024810_1 "dEQP-GLES31.functional.layout_binding."
#define VkglTestCase_024810_2 "sampler.sampler3d.vertex_binding_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024810, VkglTestCase_024810_1, VkglTestCase_024810_2);

#define VkglTestCase_024811_1 "dEQP-GLES31.functional.layout_binding.sa"
#define VkglTestCase_024811_2 "mpler.sampler3d.vertex_binding_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024811, VkglTestCase_024811_1, VkglTestCase_024811_2);

#define VkglTestCase_024812_1 "dEQP-GLES31.functional.layout_binding.s"
#define VkglTestCase_024812_2 "ampler.sampler3d.fragment_binding_single"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024812, VkglTestCase_024812_1, VkglTestCase_024812_2);

#define VkglTestCase_024813_1 "dEQP-GLES31.functional.layout_binding."
#define VkglTestCase_024813_2 "sampler.sampler3d.fragment_binding_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024813, VkglTestCase_024813_1, VkglTestCase_024813_2);

#define VkglTestCase_024814_1 "dEQP-GLES31.functional.layout_binding.sa"
#define VkglTestCase_024814_2 "mpler.sampler3d.fragment_binding_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024814, VkglTestCase_024814_1, VkglTestCase_024814_2);

#define VkglTestCase_024815_1 "dEQP-GLES31.functional.layout_binding.s"
#define VkglTestCase_024815_2 "ampler.sampler3d.fragment_binding_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024815, VkglTestCase_024815_1, VkglTestCase_024815_2);

#define VkglTestCase_024816_1 "dEQP-GLES31.functional.layout_binding.sam"
#define VkglTestCase_024816_2 "pler.sampler3d.fragment_binding_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024816, VkglTestCase_024816_1, VkglTestCase_024816_2);

#define VkglTestCase_024875_1 "dEQP-GLES31.functional.layout_binding.negati"
#define VkglTestCase_024875_2 "ve.sampler.sampler3d.vertex_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024875, VkglTestCase_024875_1, VkglTestCase_024875_2);

#define VkglTestCase_024876_1 "dEQP-GLES31.functional.layout_binding.negativ"
#define VkglTestCase_024876_2 "e.sampler.sampler3d.fragment_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024876, VkglTestCase_024876_1, VkglTestCase_024876_2);

#define VkglTestCase_024877_1 "dEQP-GLES31.functional.layout_binding.negative."
#define VkglTestCase_024877_2 "sampler.sampler3d.tess_control_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024877, VkglTestCase_024877_1, VkglTestCase_024877_2);

#define VkglTestCase_024878_1 "dEQP-GLES31.functional.layout_binding.negative.s"
#define VkglTestCase_024878_2 "ampler.sampler3d.tess_evaluation_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024878, VkglTestCase_024878_1, VkglTestCase_024878_2);

#define VkglTestCase_024879_1 "dEQP-GLES31.functional.layout_binding.neg"
#define VkglTestCase_024879_2 "ative.sampler.sampler3d.vertex_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024879, VkglTestCase_024879_1, VkglTestCase_024879_2);

#define VkglTestCase_024880_1 "dEQP-GLES31.functional.layout_binding.nega"
#define VkglTestCase_024880_2 "tive.sampler.sampler3d.fragment_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024880, VkglTestCase_024880_1, VkglTestCase_024880_2);

#define VkglTestCase_024881_1 "dEQP-GLES31.functional.layout_binding.negati"
#define VkglTestCase_024881_2 "ve.sampler.sampler3d.tess_control_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024881, VkglTestCase_024881_1, VkglTestCase_024881_2);

#define VkglTestCase_024882_1 "dEQP-GLES31.functional.layout_binding.negative"
#define VkglTestCase_024882_2 ".sampler.sampler3d.tess_evaluation_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024882, VkglTestCase_024882_1, VkglTestCase_024882_2);

#define VkglTestCase_024883_1 "dEQP-GLES31.functional.layout_binding.negative."
#define VkglTestCase_024883_2 "sampler.sampler3d.vertex_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024883, VkglTestCase_024883_1, VkglTestCase_024883_2);

#define VkglTestCase_024884_1 "dEQP-GLES31.functional.layout_binding.negative.s"
#define VkglTestCase_024884_2 "ampler.sampler3d.fragment_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024884, VkglTestCase_024884_1, VkglTestCase_024884_2);

#define VkglTestCase_024885_1 "dEQP-GLES31.functional.layout_binding.negative.sam"
#define VkglTestCase_024885_2 "pler.sampler3d.tess_control_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024885, VkglTestCase_024885_1, VkglTestCase_024885_2);

#define VkglTestCase_024886_1 "dEQP-GLES31.functional.layout_binding.negative.samp"
#define VkglTestCase_024886_2 "ler.sampler3d.tess_evaluation_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024886, VkglTestCase_024886_1, VkglTestCase_024886_2);

#define VkglTestCase_024887_1 "dEQP-GLES31.functional.layout_binding.negati"
#define VkglTestCase_024887_2 "ve.sampler.sampler3d.vertex_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024887, VkglTestCase_024887_1, VkglTestCase_024887_2);

#define VkglTestCase_024888_1 "dEQP-GLES31.functional.layout_binding.negativ"
#define VkglTestCase_024888_2 "e.sampler.sampler3d.fragment_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024888, VkglTestCase_024888_1, VkglTestCase_024888_2);

#define VkglTestCase_024889_1 "dEQP-GLES31.functional.layout_binding.negative."
#define VkglTestCase_024889_2 "sampler.sampler3d.tess_control_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024889, VkglTestCase_024889_1, VkglTestCase_024889_2);

#define VkglTestCase_024890_1 "dEQP-GLES31.functional.layout_binding.negative.sa"
#define VkglTestCase_024890_2 "mpler.sampler3d.tess_evaluation_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024890, VkglTestCase_024890_1, VkglTestCase_024890_2);

#define VkglTestCase_024891_1 "dEQP-GLES31.functional.layout_binding.negat"
#define VkglTestCase_024891_2 "ive.sampler.sampler3d.binding_contradictory"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024891, VkglTestCase_024891_1, VkglTestCase_024891_2);

#define VkglTestCase_024892_1 "dEQP-GLES31.functional.layout_binding.negative"
#define VkglTestCase_024892_2 ".sampler.sampler3d.binding_contradictory_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024892, VkglTestCase_024892_1, VkglTestCase_024892_2);
