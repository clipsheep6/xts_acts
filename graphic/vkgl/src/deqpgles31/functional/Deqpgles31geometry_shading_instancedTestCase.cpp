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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016402_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016402_2 "ing.instanced.geometry_1_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016402, VkglTestCase_016402_1, VkglTestCase_016402_2);

#define VkglTestCase_016403_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016403_2 "ing.instanced.geometry_2_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016403, VkglTestCase_016403_1, VkglTestCase_016403_2);

#define VkglTestCase_016404_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016404_2 "ing.instanced.geometry_8_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016404, VkglTestCase_016404_1, VkglTestCase_016404_2);

#define VkglTestCase_016405_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016405_2 "ing.instanced.geometry_32_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016405, VkglTestCase_016405_1, VkglTestCase_016405_2);

#define VkglTestCase_016406_1 "dEQP-GLES31.functional.geometry_shadi"
#define VkglTestCase_016406_2 "ng.instanced.geometry_max_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016406, VkglTestCase_016406_1, VkglTestCase_016406_2);

#define VkglTestCase_016407_1 "dEQP-GLES31.functional.geometry_shading.inst"
#define VkglTestCase_016407_2 "anced.geometry_output_different_2_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016407, VkglTestCase_016407_1, VkglTestCase_016407_2);

#define VkglTestCase_016408_1 "dEQP-GLES31.functional.geometry_shading.inst"
#define VkglTestCase_016408_2 "anced.geometry_output_different_8_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016408, VkglTestCase_016408_1, VkglTestCase_016408_2);

#define VkglTestCase_016409_1 "dEQP-GLES31.functional.geometry_shading.insta"
#define VkglTestCase_016409_2 "nced.geometry_output_different_32_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016409, VkglTestCase_016409_1, VkglTestCase_016409_2);

#define VkglTestCase_016410_1 "dEQP-GLES31.functional.geometry_shading.insta"
#define VkglTestCase_016410_2 "nced.geometry_output_different_max_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016410, VkglTestCase_016410_1, VkglTestCase_016410_2);

#define VkglTestCase_016411_1 "dEQP-GLES31.functional.geometry_shading"
#define VkglTestCase_016411_2 ".instanced.invocation_per_layer_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016411, VkglTestCase_016411_1, VkglTestCase_016411_2);

#define VkglTestCase_016412_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016412_2 "ing.instanced.invocation_per_layer_3d"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016412, VkglTestCase_016412_1, VkglTestCase_016412_2);

#define VkglTestCase_016413_1 "dEQP-GLES31.functional.geometry_shading"
#define VkglTestCase_016413_2 ".instanced.invocation_per_layer_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016413, VkglTestCase_016413_1, VkglTestCase_016413_2);

#define VkglTestCase_016414_1 "dEQP-GLES31.functional.geometry_shading.insta"
#define VkglTestCase_016414_2 "nced.invocation_per_layer_2d_multisample_array"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016414, VkglTestCase_016414_1, VkglTestCase_016414_2);

#define VkglTestCase_016415_1 "dEQP-GLES31.functional.geometry_shading.inst"
#define VkglTestCase_016415_2 "anced.multiple_layers_per_invocation_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016415, VkglTestCase_016415_1, VkglTestCase_016415_2);

#define VkglTestCase_016416_1 "dEQP-GLES31.functional.geometry_shading.i"
#define VkglTestCase_016416_2 "nstanced.multiple_layers_per_invocation_3d"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016416, VkglTestCase_016416_1, VkglTestCase_016416_2);

#define VkglTestCase_016417_1 "dEQP-GLES31.functional.geometry_shading.inst"
#define VkglTestCase_016417_2 "anced.multiple_layers_per_invocation_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016417, VkglTestCase_016417_1, VkglTestCase_016417_2);

#define VkglTestCase_016418_1 "dEQP-GLES31.functional.geometry_shading.instanced."
#define VkglTestCase_016418_2 "multiple_layers_per_invocation_2d_multisample_array"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016418, VkglTestCase_016418_1, VkglTestCase_016418_2);

#define VkglTestCase_016419_1 "dEQP-GLES31.functional.geometry_shading.in"
#define VkglTestCase_016419_2 "stanced.invocation_output_vary_by_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016419, VkglTestCase_016419_1, VkglTestCase_016419_2);

#define VkglTestCase_016420_1 "dEQP-GLES31.functional.geometry_shading.i"
#define VkglTestCase_016420_2 "nstanced.invocation_output_vary_by_uniform"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016420, VkglTestCase_016420_1, VkglTestCase_016420_2);

#define VkglTestCase_016421_1 "dEQP-GLES31.functional.geometry_shading.i"
#define VkglTestCase_016421_2 "nstanced.invocation_output_vary_by_texture"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016421, VkglTestCase_016421_1, VkglTestCase_016421_2);

#define VkglTestCase_016422_1 "dEQP-GLES31.functional.geometry_shading.inst"
#define VkglTestCase_016422_2 "anced.draw_2_instances_geometry_2_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016422, VkglTestCase_016422_1, VkglTestCase_016422_2);

#define VkglTestCase_016423_1 "dEQP-GLES31.functional.geometry_shading.inst"
#define VkglTestCase_016423_2 "anced.draw_2_instances_geometry_8_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016423, VkglTestCase_016423_1, VkglTestCase_016423_2);

#define VkglTestCase_016424_1 "dEQP-GLES31.functional.geometry_shading.inst"
#define VkglTestCase_016424_2 "anced.draw_4_instances_geometry_2_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016424, VkglTestCase_016424_1, VkglTestCase_016424_2);

#define VkglTestCase_016425_1 "dEQP-GLES31.functional.geometry_shading.inst"
#define VkglTestCase_016425_2 "anced.draw_4_instances_geometry_8_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016425, VkglTestCase_016425_1, VkglTestCase_016425_2);

#define VkglTestCase_016426_1 "dEQP-GLES31.functional.geometry_shading.inst"
#define VkglTestCase_016426_2 "anced.draw_8_instances_geometry_2_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016426, VkglTestCase_016426_1, VkglTestCase_016426_2);

#define VkglTestCase_016427_1 "dEQP-GLES31.functional.geometry_shading.inst"
#define VkglTestCase_016427_2 "anced.draw_8_instances_geometry_8_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016427, VkglTestCase_016427_1, VkglTestCase_016427_2);
