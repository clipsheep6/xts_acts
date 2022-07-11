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

#define VkglTestCase_012937_1 "dEQP-GLES31.functional.texture.mul"
#define VkglTestCase_012937_2 "tisample.samples_3.sample_position"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012937, VkglTestCase_012937_1, VkglTestCase_012937_2);

#define VkglTestCase_012938_1 "dEQP-GLES31.functional.texture.mul"
#define VkglTestCase_012938_2 "tisample.samples_3.sample_mask_only"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012938, VkglTestCase_012938_1, VkglTestCase_012938_2);

#define VkglTestCase_012939_1 "dEQP-GLES31.functional.texture.multisample."
#define VkglTestCase_012939_2 "samples_3.sample_mask_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012939, VkglTestCase_012939_1, VkglTestCase_012939_2);

#define VkglTestCase_012940_1 "dEQP-GLES31.functional.texture.multisample"
#define VkglTestCase_012940_2 ".samples_3.sample_mask_and_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012940, VkglTestCase_012940_1, VkglTestCase_012940_2);

#define VkglTestCase_012941_1 "dEQP-GLES31.functional.texture.multisample.samples_3."
#define VkglTestCase_012941_2 "sample_mask_and_sample_coverage_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012941, VkglTestCase_012941_1, VkglTestCase_012941_2);

#define VkglTestCase_012942_1 "dEQP-GLES31.functional.texture.multisampl"
#define VkglTestCase_012942_2 "e.samples_3.sample_mask_non_effective_bits"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012942, VkglTestCase_012942_1, VkglTestCase_012942_2);

#define VkglTestCase_012943_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012943_2 "sample.samples_3.use_texture_color_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012943, VkglTestCase_012943_1, VkglTestCase_012943_2);

#define VkglTestCase_012944_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012944_2 "ple.samples_3.use_texture_color_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012944, VkglTestCase_012944_1, VkglTestCase_012944_2);

#define VkglTestCase_012945_1 "dEQP-GLES31.functional.texture.mult"
#define VkglTestCase_012945_2 "isample.samples_3.use_texture_int_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012945, VkglTestCase_012945_1, VkglTestCase_012945_2);

#define VkglTestCase_012946_1 "dEQP-GLES31.functional.texture.multisa"
#define VkglTestCase_012946_2 "mple.samples_3.use_texture_int_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012946, VkglTestCase_012946_1, VkglTestCase_012946_2);

#define VkglTestCase_012947_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012947_2 "sample.samples_3.use_texture_uint_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012947, VkglTestCase_012947_1, VkglTestCase_012947_2);

#define VkglTestCase_012948_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012948_2 "ple.samples_3.use_texture_uint_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012948, VkglTestCase_012948_1, VkglTestCase_012948_2);

#define VkglTestCase_012949_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012949_2 "sample.samples_3.use_texture_depth_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012949, VkglTestCase_012949_1, VkglTestCase_012949_2);

#define VkglTestCase_012950_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012950_2 "ple.samples_3.use_texture_depth_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012950, VkglTestCase_012950_1, VkglTestCase_012950_2);
