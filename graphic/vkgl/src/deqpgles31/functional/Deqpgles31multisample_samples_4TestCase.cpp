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
#include "../ActsDeqpgles310013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012951_1 "dEQP-GLES31.functional.texture.mul"
#define VkglTestCase_012951_2 "tisample.samples_4.sample_position"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012951, VkglTestCase_012951_1, VkglTestCase_012951_2);

#define VkglTestCase_012952_1 "dEQP-GLES31.functional.texture.mul"
#define VkglTestCase_012952_2 "tisample.samples_4.sample_mask_only"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012952, VkglTestCase_012952_1, VkglTestCase_012952_2);

#define VkglTestCase_012953_1 "dEQP-GLES31.functional.texture.multisample."
#define VkglTestCase_012953_2 "samples_4.sample_mask_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012953, VkglTestCase_012953_1, VkglTestCase_012953_2);

#define VkglTestCase_012954_1 "dEQP-GLES31.functional.texture.multisample"
#define VkglTestCase_012954_2 ".samples_4.sample_mask_and_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012954, VkglTestCase_012954_1, VkglTestCase_012954_2);

#define VkglTestCase_012955_1 "dEQP-GLES31.functional.texture.multisample.samples_4."
#define VkglTestCase_012955_2 "sample_mask_and_sample_coverage_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012955, VkglTestCase_012955_1, VkglTestCase_012955_2);

#define VkglTestCase_012956_1 "dEQP-GLES31.functional.texture.multisampl"
#define VkglTestCase_012956_2 "e.samples_4.sample_mask_non_effective_bits"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012956, VkglTestCase_012956_1, VkglTestCase_012956_2);

#define VkglTestCase_012957_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012957_2 "sample.samples_4.use_texture_color_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012957, VkglTestCase_012957_1, VkglTestCase_012957_2);

#define VkglTestCase_012958_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012958_2 "ple.samples_4.use_texture_color_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012958, VkglTestCase_012958_1, VkglTestCase_012958_2);

#define VkglTestCase_012959_1 "dEQP-GLES31.functional.texture.mult"
#define VkglTestCase_012959_2 "isample.samples_4.use_texture_int_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012959, VkglTestCase_012959_1, VkglTestCase_012959_2);

#define VkglTestCase_012960_1 "dEQP-GLES31.functional.texture.multisa"
#define VkglTestCase_012960_2 "mple.samples_4.use_texture_int_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012960, VkglTestCase_012960_1, VkglTestCase_012960_2);

#define VkglTestCase_012961_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012961_2 "sample.samples_4.use_texture_uint_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012961, VkglTestCase_012961_1, VkglTestCase_012961_2);

#define VkglTestCase_012962_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012962_2 "ple.samples_4.use_texture_uint_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012962, VkglTestCase_012962_1, VkglTestCase_012962_2);

#define VkglTestCase_012963_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012963_2 "sample.samples_4.use_texture_depth_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012963, VkglTestCase_012963_1, VkglTestCase_012963_2);

#define VkglTestCase_012964_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012964_2 "ple.samples_4.use_texture_depth_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012964, VkglTestCase_012964_1, VkglTestCase_012964_2);
