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

#define VkglTestCase_013007_1 "dEQP-GLES31.functional.texture.mul"
#define VkglTestCase_013007_2 "tisample.samples_13.sample_position"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013007, VkglTestCase_013007_1, VkglTestCase_013007_2);

#define VkglTestCase_013008_1 "dEQP-GLES31.functional.texture.mult"
#define VkglTestCase_013008_2 "isample.samples_13.sample_mask_only"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013008, VkglTestCase_013008_1, VkglTestCase_013008_2);

#define VkglTestCase_013009_1 "dEQP-GLES31.functional.texture.multisample."
#define VkglTestCase_013009_2 "samples_13.sample_mask_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013009, VkglTestCase_013009_1, VkglTestCase_013009_2);

#define VkglTestCase_013010_1 "dEQP-GLES31.functional.texture.multisample"
#define VkglTestCase_013010_2 ".samples_13.sample_mask_and_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013010, VkglTestCase_013010_1, VkglTestCase_013010_2);

#define VkglTestCase_013011_1 "dEQP-GLES31.functional.texture.multisample.samples_13"
#define VkglTestCase_013011_2 ".sample_mask_and_sample_coverage_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013011, VkglTestCase_013011_1, VkglTestCase_013011_2);

#define VkglTestCase_013012_1 "dEQP-GLES31.functional.texture.multisample"
#define VkglTestCase_013012_2 ".samples_13.sample_mask_non_effective_bits"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013012, VkglTestCase_013012_1, VkglTestCase_013012_2);

#define VkglTestCase_013013_1 "dEQP-GLES31.functional.texture.multis"
#define VkglTestCase_013013_2 "ample.samples_13.use_texture_color_2d"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013013, VkglTestCase_013013_1, VkglTestCase_013013_2);

#define VkglTestCase_013014_1 "dEQP-GLES31.functional.texture.multisamp"
#define VkglTestCase_013014_2 "le.samples_13.use_texture_color_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013014, VkglTestCase_013014_1, VkglTestCase_013014_2);

#define VkglTestCase_013015_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_013015_2 "sample.samples_13.use_texture_int_2d"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013015, VkglTestCase_013015_1, VkglTestCase_013015_2);

#define VkglTestCase_013016_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_013016_2 "ple.samples_13.use_texture_int_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013016, VkglTestCase_013016_1, VkglTestCase_013016_2);

#define VkglTestCase_013017_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_013017_2 "sample.samples_13.use_texture_uint_2d"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013017, VkglTestCase_013017_1, VkglTestCase_013017_2);

#define VkglTestCase_013018_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_013018_2 "ple.samples_13.use_texture_uint_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013018, VkglTestCase_013018_1, VkglTestCase_013018_2);

#define VkglTestCase_013019_1 "dEQP-GLES31.functional.texture.multis"
#define VkglTestCase_013019_2 "ample.samples_13.use_texture_depth_2d"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013019, VkglTestCase_013019_1, VkglTestCase_013019_2);

#define VkglTestCase_013020_1 "dEQP-GLES31.functional.texture.multisamp"
#define VkglTestCase_013020_2 "le.samples_13.use_texture_depth_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013020, VkglTestCase_013020_1, VkglTestCase_013020_2);
