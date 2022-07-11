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

#define VkglTestCase_012923_1 "dEQP-GLES31.functional.texture.mul"
#define VkglTestCase_012923_2 "tisample.samples_2.sample_position"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012923, VkglTestCase_012923_1, VkglTestCase_012923_2);

#define VkglTestCase_012924_1 "dEQP-GLES31.functional.texture.mul"
#define VkglTestCase_012924_2 "tisample.samples_2.sample_mask_only"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012924, VkglTestCase_012924_1, VkglTestCase_012924_2);

#define VkglTestCase_012925_1 "dEQP-GLES31.functional.texture.multisample."
#define VkglTestCase_012925_2 "samples_2.sample_mask_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012925, VkglTestCase_012925_1, VkglTestCase_012925_2);

#define VkglTestCase_012926_1 "dEQP-GLES31.functional.texture.multisample"
#define VkglTestCase_012926_2 ".samples_2.sample_mask_and_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012926, VkglTestCase_012926_1, VkglTestCase_012926_2);

#define VkglTestCase_012927_1 "dEQP-GLES31.functional.texture.multisample.samples_2."
#define VkglTestCase_012927_2 "sample_mask_and_sample_coverage_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012927, VkglTestCase_012927_1, VkglTestCase_012927_2);

#define VkglTestCase_012928_1 "dEQP-GLES31.functional.texture.multisampl"
#define VkglTestCase_012928_2 "e.samples_2.sample_mask_non_effective_bits"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012928, VkglTestCase_012928_1, VkglTestCase_012928_2);

#define VkglTestCase_012929_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012929_2 "sample.samples_2.use_texture_color_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012929, VkglTestCase_012929_1, VkglTestCase_012929_2);

#define VkglTestCase_012930_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012930_2 "ple.samples_2.use_texture_color_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012930, VkglTestCase_012930_1, VkglTestCase_012930_2);

#define VkglTestCase_012931_1 "dEQP-GLES31.functional.texture.mult"
#define VkglTestCase_012931_2 "isample.samples_2.use_texture_int_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012931, VkglTestCase_012931_1, VkglTestCase_012931_2);

#define VkglTestCase_012932_1 "dEQP-GLES31.functional.texture.multisa"
#define VkglTestCase_012932_2 "mple.samples_2.use_texture_int_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012932, VkglTestCase_012932_1, VkglTestCase_012932_2);

#define VkglTestCase_012933_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012933_2 "sample.samples_2.use_texture_uint_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012933, VkglTestCase_012933_1, VkglTestCase_012933_2);

#define VkglTestCase_012934_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012934_2 "ple.samples_2.use_texture_uint_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012934, VkglTestCase_012934_1, VkglTestCase_012934_2);

#define VkglTestCase_012935_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012935_2 "sample.samples_2.use_texture_depth_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012935, VkglTestCase_012935_1, VkglTestCase_012935_2);

#define VkglTestCase_012936_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012936_2 "ple.samples_2.use_texture_depth_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012936, VkglTestCase_012936_1, VkglTestCase_012936_2);
