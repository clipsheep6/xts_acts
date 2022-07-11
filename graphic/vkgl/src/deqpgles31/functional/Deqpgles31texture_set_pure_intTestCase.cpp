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
#include "../ActsDeqpgles310016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015553_1 "dEQP-GLES31.functional.state_query.t"
#define VkglTestCase_015553_2 "exture.set_pure_int.texture_swizzle_r"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015553, VkglTestCase_015553_1, VkglTestCase_015553_2);

#define VkglTestCase_015554_1 "dEQP-GLES31.functional.state_query.t"
#define VkglTestCase_015554_2 "exture.set_pure_int.texture_swizzle_g"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015554, VkglTestCase_015554_1, VkglTestCase_015554_2);

#define VkglTestCase_015555_1 "dEQP-GLES31.functional.state_query.t"
#define VkglTestCase_015555_2 "exture.set_pure_int.texture_swizzle_b"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015555, VkglTestCase_015555_1, VkglTestCase_015555_2);

#define VkglTestCase_015556_1 "dEQP-GLES31.functional.state_query.t"
#define VkglTestCase_015556_2 "exture.set_pure_int.texture_swizzle_a"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015556, VkglTestCase_015556_1, VkglTestCase_015556_2);

#define VkglTestCase_015557_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015557_2 "texture.set_pure_int.texture_wrap_s"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015557, VkglTestCase_015557_1, VkglTestCase_015557_2);

#define VkglTestCase_015558_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015558_2 "texture.set_pure_int.texture_wrap_t"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015558, VkglTestCase_015558_1, VkglTestCase_015558_2);

#define VkglTestCase_015559_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015559_2 "texture.set_pure_int.texture_wrap_r"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015559, VkglTestCase_015559_1, VkglTestCase_015559_2);

#define VkglTestCase_015560_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015560_2 "xture.set_pure_int.texture_mag_filter"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015560, VkglTestCase_015560_1, VkglTestCase_015560_2);

#define VkglTestCase_015561_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015561_2 "xture.set_pure_int.texture_min_filter"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015561, VkglTestCase_015561_1, VkglTestCase_015561_2);

#define VkglTestCase_015562_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015562_2 "texture.set_pure_int.texture_min_lod"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015562, VkglTestCase_015562_1, VkglTestCase_015562_2);

#define VkglTestCase_015563_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015563_2 "texture.set_pure_int.texture_max_lod"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015563, VkglTestCase_015563_1, VkglTestCase_015563_2);

#define VkglTestCase_015564_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015564_2 "xture.set_pure_int.texture_base_level"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015564, VkglTestCase_015564_1, VkglTestCase_015564_2);

#define VkglTestCase_015565_1 "dEQP-GLES31.functional.state_query.t"
#define VkglTestCase_015565_2 "exture.set_pure_int.texture_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015565, VkglTestCase_015565_1, VkglTestCase_015565_2);

#define VkglTestCase_015566_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015566_2 "ture.set_pure_int.texture_compare_mode"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015566, VkglTestCase_015566_1, VkglTestCase_015566_2);

#define VkglTestCase_015567_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015567_2 "ture.set_pure_int.texture_compare_func"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015567, VkglTestCase_015567_1, VkglTestCase_015567_2);

#define VkglTestCase_015568_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015568_2 "xture.set_pure_int.depth_stencil_mode"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015568, VkglTestCase_015568_1, VkglTestCase_015568_2);

#define VkglTestCase_015569_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015569_2 "xture.set_pure_int.texture_srgb_decode"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015569, VkglTestCase_015569_1, VkglTestCase_015569_2);
