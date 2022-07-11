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

#define VkglTestCase_012965_1 "dEQP-GLES31.functional.texture.mul"
#define VkglTestCase_012965_2 "tisample.samples_8.sample_position"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012965, VkglTestCase_012965_1, VkglTestCase_012965_2);

#define VkglTestCase_012966_1 "dEQP-GLES31.functional.texture.mul"
#define VkglTestCase_012966_2 "tisample.samples_8.sample_mask_only"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012966, VkglTestCase_012966_1, VkglTestCase_012966_2);

#define VkglTestCase_012967_1 "dEQP-GLES31.functional.texture.multisample."
#define VkglTestCase_012967_2 "samples_8.sample_mask_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012967, VkglTestCase_012967_1, VkglTestCase_012967_2);

#define VkglTestCase_012968_1 "dEQP-GLES31.functional.texture.multisample"
#define VkglTestCase_012968_2 ".samples_8.sample_mask_and_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012968, VkglTestCase_012968_1, VkglTestCase_012968_2);

#define VkglTestCase_012969_1 "dEQP-GLES31.functional.texture.multisample.samples_8."
#define VkglTestCase_012969_2 "sample_mask_and_sample_coverage_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012969, VkglTestCase_012969_1, VkglTestCase_012969_2);

#define VkglTestCase_012970_1 "dEQP-GLES31.functional.texture.multisampl"
#define VkglTestCase_012970_2 "e.samples_8.sample_mask_non_effective_bits"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012970, VkglTestCase_012970_1, VkglTestCase_012970_2);

#define VkglTestCase_012971_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012971_2 "sample.samples_8.use_texture_color_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012971, VkglTestCase_012971_1, VkglTestCase_012971_2);

#define VkglTestCase_012972_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012972_2 "ple.samples_8.use_texture_color_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012972, VkglTestCase_012972_1, VkglTestCase_012972_2);

#define VkglTestCase_012973_1 "dEQP-GLES31.functional.texture.mult"
#define VkglTestCase_012973_2 "isample.samples_8.use_texture_int_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012973, VkglTestCase_012973_1, VkglTestCase_012973_2);

#define VkglTestCase_012974_1 "dEQP-GLES31.functional.texture.multisa"
#define VkglTestCase_012974_2 "mple.samples_8.use_texture_int_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012974, VkglTestCase_012974_1, VkglTestCase_012974_2);

#define VkglTestCase_012975_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012975_2 "sample.samples_8.use_texture_uint_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012975, VkglTestCase_012975_1, VkglTestCase_012975_2);

#define VkglTestCase_012976_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012976_2 "ple.samples_8.use_texture_uint_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012976, VkglTestCase_012976_1, VkglTestCase_012976_2);

#define VkglTestCase_012977_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012977_2 "sample.samples_8.use_texture_depth_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012977, VkglTestCase_012977_1, VkglTestCase_012977_2);

#define VkglTestCase_012978_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012978_2 "ple.samples_8.use_texture_depth_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012978, VkglTestCase_012978_1, VkglTestCase_012978_2);
