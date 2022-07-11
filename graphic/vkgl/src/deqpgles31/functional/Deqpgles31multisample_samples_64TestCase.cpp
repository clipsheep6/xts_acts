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

#define VkglTestCase_013035_1 "dEQP-GLES31.functional.texture.mul"
#define VkglTestCase_013035_2 "tisample.samples_64.sample_position"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013035, VkglTestCase_013035_1, VkglTestCase_013035_2);

#define VkglTestCase_013036_1 "dEQP-GLES31.functional.texture.mult"
#define VkglTestCase_013036_2 "isample.samples_64.sample_mask_only"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013036, VkglTestCase_013036_1, VkglTestCase_013036_2);

#define VkglTestCase_013037_1 "dEQP-GLES31.functional.texture.multisample."
#define VkglTestCase_013037_2 "samples_64.sample_mask_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013037, VkglTestCase_013037_1, VkglTestCase_013037_2);

#define VkglTestCase_013038_1 "dEQP-GLES31.functional.texture.multisample"
#define VkglTestCase_013038_2 ".samples_64.sample_mask_and_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013038, VkglTestCase_013038_1, VkglTestCase_013038_2);

#define VkglTestCase_013039_1 "dEQP-GLES31.functional.texture.multisample.samples_64"
#define VkglTestCase_013039_2 ".sample_mask_and_sample_coverage_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013039, VkglTestCase_013039_1, VkglTestCase_013039_2);

#define VkglTestCase_013040_1 "dEQP-GLES31.functional.texture.multisample"
#define VkglTestCase_013040_2 ".samples_64.sample_mask_non_effective_bits"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013040, VkglTestCase_013040_1, VkglTestCase_013040_2);

#define VkglTestCase_013041_1 "dEQP-GLES31.functional.texture.multis"
#define VkglTestCase_013041_2 "ample.samples_64.use_texture_color_2d"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013041, VkglTestCase_013041_1, VkglTestCase_013041_2);

#define VkglTestCase_013042_1 "dEQP-GLES31.functional.texture.multisamp"
#define VkglTestCase_013042_2 "le.samples_64.use_texture_color_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013042, VkglTestCase_013042_1, VkglTestCase_013042_2);

#define VkglTestCase_013043_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_013043_2 "sample.samples_64.use_texture_int_2d"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013043, VkglTestCase_013043_1, VkglTestCase_013043_2);

#define VkglTestCase_013044_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_013044_2 "ple.samples_64.use_texture_int_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013044, VkglTestCase_013044_1, VkglTestCase_013044_2);

#define VkglTestCase_013045_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_013045_2 "sample.samples_64.use_texture_uint_2d"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013045, VkglTestCase_013045_1, VkglTestCase_013045_2);

#define VkglTestCase_013046_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_013046_2 "ple.samples_64.use_texture_uint_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013046, VkglTestCase_013046_1, VkglTestCase_013046_2);

#define VkglTestCase_013047_1 "dEQP-GLES31.functional.texture.multis"
#define VkglTestCase_013047_2 "ample.samples_64.use_texture_depth_2d"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013047, VkglTestCase_013047_1, VkglTestCase_013047_2);

#define VkglTestCase_013048_1 "dEQP-GLES31.functional.texture.multisamp"
#define VkglTestCase_013048_2 "le.samples_64.use_texture_depth_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013048, VkglTestCase_013048_1, VkglTestCase_013048_2);
