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

#define VkglTestCase_012909_1 "dEQP-GLES31.functional.texture.mul"
#define VkglTestCase_012909_2 "tisample.samples_1.sample_position"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012909, VkglTestCase_012909_1, VkglTestCase_012909_2);

#define VkglTestCase_012910_1 "dEQP-GLES31.functional.texture.mul"
#define VkglTestCase_012910_2 "tisample.samples_1.sample_mask_only"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012910, VkglTestCase_012910_1, VkglTestCase_012910_2);

#define VkglTestCase_012911_1 "dEQP-GLES31.functional.texture.multisample."
#define VkglTestCase_012911_2 "samples_1.sample_mask_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012911, VkglTestCase_012911_1, VkglTestCase_012911_2);

#define VkglTestCase_012912_1 "dEQP-GLES31.functional.texture.multisample"
#define VkglTestCase_012912_2 ".samples_1.sample_mask_and_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012912, VkglTestCase_012912_1, VkglTestCase_012912_2);

#define VkglTestCase_012913_1 "dEQP-GLES31.functional.texture.multisample.samples_1."
#define VkglTestCase_012913_2 "sample_mask_and_sample_coverage_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012913, VkglTestCase_012913_1, VkglTestCase_012913_2);

#define VkglTestCase_012914_1 "dEQP-GLES31.functional.texture.multisampl"
#define VkglTestCase_012914_2 "e.samples_1.sample_mask_non_effective_bits"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012914, VkglTestCase_012914_1, VkglTestCase_012914_2);

#define VkglTestCase_012915_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012915_2 "sample.samples_1.use_texture_color_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012915, VkglTestCase_012915_1, VkglTestCase_012915_2);

#define VkglTestCase_012916_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012916_2 "ple.samples_1.use_texture_color_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012916, VkglTestCase_012916_1, VkglTestCase_012916_2);

#define VkglTestCase_012917_1 "dEQP-GLES31.functional.texture.mult"
#define VkglTestCase_012917_2 "isample.samples_1.use_texture_int_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012917, VkglTestCase_012917_1, VkglTestCase_012917_2);

#define VkglTestCase_012918_1 "dEQP-GLES31.functional.texture.multisa"
#define VkglTestCase_012918_2 "mple.samples_1.use_texture_int_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012918, VkglTestCase_012918_1, VkglTestCase_012918_2);

#define VkglTestCase_012919_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012919_2 "sample.samples_1.use_texture_uint_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012919, VkglTestCase_012919_1, VkglTestCase_012919_2);

#define VkglTestCase_012920_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012920_2 "ple.samples_1.use_texture_uint_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012920, VkglTestCase_012920_1, VkglTestCase_012920_2);

#define VkglTestCase_012921_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012921_2 "sample.samples_1.use_texture_depth_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012921, VkglTestCase_012921_1, VkglTestCase_012921_2);

#define VkglTestCase_012922_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012922_2 "ple.samples_1.use_texture_depth_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012922, VkglTestCase_012922_1, VkglTestCase_012922_2);
