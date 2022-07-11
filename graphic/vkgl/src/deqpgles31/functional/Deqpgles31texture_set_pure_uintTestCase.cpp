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

#define VkglTestCase_015570_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015570_2 "xture.set_pure_uint.texture_swizzle_r"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015570, VkglTestCase_015570_1, VkglTestCase_015570_2);

#define VkglTestCase_015571_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015571_2 "xture.set_pure_uint.texture_swizzle_g"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015571, VkglTestCase_015571_1, VkglTestCase_015571_2);

#define VkglTestCase_015572_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015572_2 "xture.set_pure_uint.texture_swizzle_b"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015572, VkglTestCase_015572_1, VkglTestCase_015572_2);

#define VkglTestCase_015573_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015573_2 "xture.set_pure_uint.texture_swizzle_a"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015573, VkglTestCase_015573_1, VkglTestCase_015573_2);

#define VkglTestCase_015574_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015574_2 "texture.set_pure_uint.texture_wrap_s"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015574, VkglTestCase_015574_1, VkglTestCase_015574_2);

#define VkglTestCase_015575_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015575_2 "texture.set_pure_uint.texture_wrap_t"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015575, VkglTestCase_015575_1, VkglTestCase_015575_2);

#define VkglTestCase_015576_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015576_2 "texture.set_pure_uint.texture_wrap_r"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015576, VkglTestCase_015576_1, VkglTestCase_015576_2);

#define VkglTestCase_015577_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015577_2 "xture.set_pure_uint.texture_mag_filter"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015577, VkglTestCase_015577_1, VkglTestCase_015577_2);

#define VkglTestCase_015578_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015578_2 "xture.set_pure_uint.texture_min_filter"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015578, VkglTestCase_015578_1, VkglTestCase_015578_2);

#define VkglTestCase_015579_1 "dEQP-GLES31.functional.state_query.t"
#define VkglTestCase_015579_2 "exture.set_pure_uint.texture_min_lod"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015579, VkglTestCase_015579_1, VkglTestCase_015579_2);

#define VkglTestCase_015580_1 "dEQP-GLES31.functional.state_query.t"
#define VkglTestCase_015580_2 "exture.set_pure_uint.texture_max_lod"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015580, VkglTestCase_015580_1, VkglTestCase_015580_2);

#define VkglTestCase_015581_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015581_2 "xture.set_pure_uint.texture_base_level"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015581, VkglTestCase_015581_1, VkglTestCase_015581_2);

#define VkglTestCase_015582_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015582_2 "xture.set_pure_uint.texture_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015582, VkglTestCase_015582_1, VkglTestCase_015582_2);

#define VkglTestCase_015583_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015583_2 "ture.set_pure_uint.texture_compare_mode"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015583, VkglTestCase_015583_1, VkglTestCase_015583_2);

#define VkglTestCase_015584_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015584_2 "ture.set_pure_uint.texture_compare_func"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015584, VkglTestCase_015584_1, VkglTestCase_015584_2);

#define VkglTestCase_015585_1 "dEQP-GLES31.functional.state_query.te"
#define VkglTestCase_015585_2 "xture.set_pure_uint.depth_stencil_mode"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015585, VkglTestCase_015585_1, VkglTestCase_015585_2);

#define VkglTestCase_015586_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015586_2 "ture.set_pure_uint.texture_srgb_decode"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015586, VkglTestCase_015586_1, VkglTestCase_015586_2);
