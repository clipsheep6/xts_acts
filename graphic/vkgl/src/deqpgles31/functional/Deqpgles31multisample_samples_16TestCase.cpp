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
#include "../ActsDeqpgles310014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013021_1 "dEQP-GLES31.functional.texture.mul"
#define VkglTestCase_013021_2 "tisample.samples_16.sample_position"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013021, VkglTestCase_013021_1, VkglTestCase_013021_2);

#define VkglTestCase_013022_1 "dEQP-GLES31.functional.texture.mult"
#define VkglTestCase_013022_2 "isample.samples_16.sample_mask_only"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013022, VkglTestCase_013022_1, VkglTestCase_013022_2);

#define VkglTestCase_013023_1 "dEQP-GLES31.functional.texture.multisample."
#define VkglTestCase_013023_2 "samples_16.sample_mask_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013023, VkglTestCase_013023_1, VkglTestCase_013023_2);

#define VkglTestCase_013024_1 "dEQP-GLES31.functional.texture.multisample"
#define VkglTestCase_013024_2 ".samples_16.sample_mask_and_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013024, VkglTestCase_013024_1, VkglTestCase_013024_2);

#define VkglTestCase_013025_1 "dEQP-GLES31.functional.texture.multisample.samples_16"
#define VkglTestCase_013025_2 ".sample_mask_and_sample_coverage_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013025, VkglTestCase_013025_1, VkglTestCase_013025_2);

#define VkglTestCase_013026_1 "dEQP-GLES31.functional.texture.multisample"
#define VkglTestCase_013026_2 ".samples_16.sample_mask_non_effective_bits"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013026, VkglTestCase_013026_1, VkglTestCase_013026_2);

#define VkglTestCase_013027_1 "dEQP-GLES31.functional.texture.multis"
#define VkglTestCase_013027_2 "ample.samples_16.use_texture_color_2d"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013027, VkglTestCase_013027_1, VkglTestCase_013027_2);

#define VkglTestCase_013028_1 "dEQP-GLES31.functional.texture.multisamp"
#define VkglTestCase_013028_2 "le.samples_16.use_texture_color_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013028, VkglTestCase_013028_1, VkglTestCase_013028_2);

#define VkglTestCase_013029_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_013029_2 "sample.samples_16.use_texture_int_2d"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013029, VkglTestCase_013029_1, VkglTestCase_013029_2);

#define VkglTestCase_013030_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_013030_2 "ple.samples_16.use_texture_int_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013030, VkglTestCase_013030_1, VkglTestCase_013030_2);

#define VkglTestCase_013031_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_013031_2 "sample.samples_16.use_texture_uint_2d"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013031, VkglTestCase_013031_1, VkglTestCase_013031_2);

#define VkglTestCase_013032_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_013032_2 "ple.samples_16.use_texture_uint_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013032, VkglTestCase_013032_1, VkglTestCase_013032_2);

#define VkglTestCase_013033_1 "dEQP-GLES31.functional.texture.multis"
#define VkglTestCase_013033_2 "ample.samples_16.use_texture_depth_2d"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013033, VkglTestCase_013033_1, VkglTestCase_013033_2);

#define VkglTestCase_013034_1 "dEQP-GLES31.functional.texture.multisamp"
#define VkglTestCase_013034_2 "le.samples_16.use_texture_depth_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013034, VkglTestCase_013034_1, VkglTestCase_013034_2);
