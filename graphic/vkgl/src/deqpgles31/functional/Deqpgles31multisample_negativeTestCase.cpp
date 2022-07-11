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

#define VkglTestCase_013049_1 "dEQP-GLES31.functional.texture.multisample.neg"
#define VkglTestCase_013049_2 "ative.fbo_attach_different_sample_count_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013049, VkglTestCase_013049_1, VkglTestCase_013049_2);

#define VkglTestCase_013050_1 "dEQP-GLES31.functional.texture.multisample.neg"
#define VkglTestCase_013050_2 "ative.fbo_attach_different_sample_count_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013050, VkglTestCase_013050_1, VkglTestCase_013050_2);

#define VkglTestCase_013051_1 "dEQP-GLES31.functional.texture.multisample.neg"
#define VkglTestCase_013051_2 "ative.fbo_attach_different_fixed_state_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013051, VkglTestCase_013051_1, VkglTestCase_013051_2);

#define VkglTestCase_013052_1 "dEQP-GLES31.functional.texture.multisample.neg"
#define VkglTestCase_013052_2 "ative.fbo_attach_different_fixed_state_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013052, VkglTestCase_013052_1, VkglTestCase_013052_2);

#define VkglTestCase_013053_1 "dEQP-GLES31.functional.texture.multisa"
#define VkglTestCase_013053_2 "mple.negative.fbo_attach_non_zero_level"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013053, VkglTestCase_013053_1, VkglTestCase_013053_2);

#define VkglTestCase_013054_1 "dEQP-GLES31.functional.texture.mult"
#define VkglTestCase_013054_2 "isample.negative.texture_min_filter"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013054, VkglTestCase_013054_1, VkglTestCase_013054_2);

#define VkglTestCase_013055_1 "dEQP-GLES31.functional.texture.mult"
#define VkglTestCase_013055_2 "isample.negative.texture_mag_filter"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013055, VkglTestCase_013055_1, VkglTestCase_013055_2);

#define VkglTestCase_013056_1 "dEQP-GLES31.functional.texture.mu"
#define VkglTestCase_013056_2 "ltisample.negative.texture_wrap_s"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013056, VkglTestCase_013056_1, VkglTestCase_013056_2);

#define VkglTestCase_013057_1 "dEQP-GLES31.functional.texture.mu"
#define VkglTestCase_013057_2 "ltisample.negative.texture_wrap_t"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013057, VkglTestCase_013057_1, VkglTestCase_013057_2);

#define VkglTestCase_013058_1 "dEQP-GLES31.functional.texture.mu"
#define VkglTestCase_013058_2 "ltisample.negative.texture_wrap_r"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013058, VkglTestCase_013058_1, VkglTestCase_013058_2);

#define VkglTestCase_013059_1 "dEQP-GLES31.functional.texture.mu"
#define VkglTestCase_013059_2 "ltisample.negative.texture_min_lod"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013059, VkglTestCase_013059_1, VkglTestCase_013059_2);

#define VkglTestCase_013060_1 "dEQP-GLES31.functional.texture.mu"
#define VkglTestCase_013060_2 "ltisample.negative.texture_max_lod"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013060, VkglTestCase_013060_1, VkglTestCase_013060_2);

#define VkglTestCase_013061_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_013061_2 "sample.negative.texture_compare_mode"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013061, VkglTestCase_013061_1, VkglTestCase_013061_2);

#define VkglTestCase_013062_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_013062_2 "sample.negative.texture_compare_func"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013062, VkglTestCase_013062_1, VkglTestCase_013062_2);

#define VkglTestCase_013063_1 "dEQP-GLES31.functional.texture.mult"
#define VkglTestCase_013063_2 "isample.negative.texture_base_level"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013063, VkglTestCase_013063_1, VkglTestCase_013063_2);

#define VkglTestCase_013064_1 "dEQP-GLES31.functional.texture.multisa"
#define VkglTestCase_013064_2 "mple.negative.texture_high_sample_count"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013064, VkglTestCase_013064_1, VkglTestCase_013064_2);

#define VkglTestCase_013065_1 "dEQP-GLES31.functional.texture.multisa"
#define VkglTestCase_013065_2 "mple.negative.texture_zero_sample_count"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013065, VkglTestCase_013065_1, VkglTestCase_013065_2);
