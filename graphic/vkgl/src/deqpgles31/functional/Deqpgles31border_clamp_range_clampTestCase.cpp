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
#include "../ActsDeqpgles310015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014581_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014581_2 "_clamp.range_clamp.nearest_unorm_color"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014581, VkglTestCase_014581_1, VkglTestCase_014581_2);

#define VkglTestCase_014582_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014582_2 "_clamp.range_clamp.linear_unorm_color"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014582, VkglTestCase_014582_1, VkglTestCase_014582_2);

#define VkglTestCase_014583_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014583_2 "_clamp.range_clamp.nearest_snorm_color"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014583, VkglTestCase_014583_1, VkglTestCase_014583_2);

#define VkglTestCase_014584_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014584_2 "_clamp.range_clamp.linear_snorm_color"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014584, VkglTestCase_014584_1, VkglTestCase_014584_2);

#define VkglTestCase_014585_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014585_2 "_clamp.range_clamp.nearest_float_color"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014585, VkglTestCase_014585_1, VkglTestCase_014585_2);

#define VkglTestCase_014586_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014586_2 "_clamp.range_clamp.nearest_srgb_color"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014586, VkglTestCase_014586_1, VkglTestCase_014586_2);

#define VkglTestCase_014587_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014587_2 "r_clamp.range_clamp.linear_srgb_color"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014587, VkglTestCase_014587_1, VkglTestCase_014587_2);

#define VkglTestCase_014588_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014588_2 "_clamp.range_clamp.nearest_unorm_depth"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014588, VkglTestCase_014588_1, VkglTestCase_014588_2);

#define VkglTestCase_014589_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014589_2 "_clamp.range_clamp.nearest_float_depth"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014589, VkglTestCase_014589_1, VkglTestCase_014589_2);

#define VkglTestCase_014590_1 "dEQP-GLES31.functional.texture.border_clamp.range_"
#define VkglTestCase_014590_2 "clamp.nearest_float_depth_uint_stencil_sample_depth"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014590, VkglTestCase_014590_1, VkglTestCase_014590_2);

#define VkglTestCase_014591_1 "dEQP-GLES31.functional.texture.border_clamp.range_"
#define VkglTestCase_014591_2 "clamp.nearest_unorm_depth_uint_stencil_sample_depth"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014591, VkglTestCase_014591_1, VkglTestCase_014591_2);

#define VkglTestCase_014592_1 "dEQP-GLES31.functional.texture.border_cl"
#define VkglTestCase_014592_2 "amp.range_clamp.nearest_compressed_color"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014592, VkglTestCase_014592_1, VkglTestCase_014592_2);

#define VkglTestCase_014593_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014593_2 "lamp.range_clamp.linear_compressed_color"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014593, VkglTestCase_014593_1, VkglTestCase_014593_2);
