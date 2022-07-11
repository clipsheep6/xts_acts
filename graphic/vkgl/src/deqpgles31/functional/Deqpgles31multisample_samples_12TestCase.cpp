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

#define VkglTestCase_012993_1 "dEQP-GLES31.functional.texture.mul"
#define VkglTestCase_012993_2 "tisample.samples_12.sample_position"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012993, VkglTestCase_012993_1, VkglTestCase_012993_2);

#define VkglTestCase_012994_1 "dEQP-GLES31.functional.texture.mult"
#define VkglTestCase_012994_2 "isample.samples_12.sample_mask_only"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012994, VkglTestCase_012994_1, VkglTestCase_012994_2);

#define VkglTestCase_012995_1 "dEQP-GLES31.functional.texture.multisample."
#define VkglTestCase_012995_2 "samples_12.sample_mask_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012995, VkglTestCase_012995_1, VkglTestCase_012995_2);

#define VkglTestCase_012996_1 "dEQP-GLES31.functional.texture.multisample"
#define VkglTestCase_012996_2 ".samples_12.sample_mask_and_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012996, VkglTestCase_012996_1, VkglTestCase_012996_2);

#define VkglTestCase_012997_1 "dEQP-GLES31.functional.texture.multisample.samples_12"
#define VkglTestCase_012997_2 ".sample_mask_and_sample_coverage_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012997, VkglTestCase_012997_1, VkglTestCase_012997_2);

#define VkglTestCase_012998_1 "dEQP-GLES31.functional.texture.multisample"
#define VkglTestCase_012998_2 ".samples_12.sample_mask_non_effective_bits"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012998, VkglTestCase_012998_1, VkglTestCase_012998_2);

#define VkglTestCase_012999_1 "dEQP-GLES31.functional.texture.multis"
#define VkglTestCase_012999_2 "ample.samples_12.use_texture_color_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012999, VkglTestCase_012999_1, VkglTestCase_012999_2);

#define VkglTestCase_013000_1 "dEQP-GLES31.functional.texture.multisamp"
#define VkglTestCase_013000_2 "le.samples_12.use_texture_color_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_013000, VkglTestCase_013000_1, VkglTestCase_013000_2);

#define VkglTestCase_013001_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_013001_2 "sample.samples_12.use_texture_int_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_013001, VkglTestCase_013001_1, VkglTestCase_013001_2);

#define VkglTestCase_013002_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_013002_2 "ple.samples_12.use_texture_int_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_013002, VkglTestCase_013002_1, VkglTestCase_013002_2);

#define VkglTestCase_013003_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_013003_2 "sample.samples_12.use_texture_uint_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_013003, VkglTestCase_013003_1, VkglTestCase_013003_2);

#define VkglTestCase_013004_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_013004_2 "ple.samples_12.use_texture_uint_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_013004, VkglTestCase_013004_1, VkglTestCase_013004_2);

#define VkglTestCase_013005_1 "dEQP-GLES31.functional.texture.multis"
#define VkglTestCase_013005_2 "ample.samples_12.use_texture_depth_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_013005, VkglTestCase_013005_1, VkglTestCase_013005_2);

#define VkglTestCase_013006_1 "dEQP-GLES31.functional.texture.multisamp"
#define VkglTestCase_013006_2 "le.samples_12.use_texture_depth_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_013006, VkglTestCase_013006_1, VkglTestCase_013006_2);
