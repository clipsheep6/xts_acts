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

#define VkglTestCase_014809_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_014809_2 "border_clamp.unused_channels.r8"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014809, VkglTestCase_014809_1, VkglTestCase_014809_2);

#define VkglTestCase_014810_1 "dEQP-GLES31.functional.texture.bor"
#define VkglTestCase_014810_2 "der_clamp.unused_channels.rg8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014810, VkglTestCase_014810_1, VkglTestCase_014810_2);

#define VkglTestCase_014811_1 "dEQP-GLES31.functional.texture.b"
#define VkglTestCase_014811_2 "order_clamp.unused_channels.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014811, VkglTestCase_014811_1, VkglTestCase_014811_2);

#define VkglTestCase_014812_1 "dEQP-GLES31.functional.texture.b"
#define VkglTestCase_014812_2 "order_clamp.unused_channels.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014812, VkglTestCase_014812_1, VkglTestCase_014812_2);

#define VkglTestCase_014813_1 "dEQP-GLES31.functional.texture.b"
#define VkglTestCase_014813_2 "order_clamp.unused_channels.r16i"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014813, VkglTestCase_014813_1, VkglTestCase_014813_2);

#define VkglTestCase_014814_1 "dEQP-GLES31.functional.texture.bor"
#define VkglTestCase_014814_2 "der_clamp.unused_channels.luminance"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014814, VkglTestCase_014814_1, VkglTestCase_014814_2);

#define VkglTestCase_014815_1 "dEQP-GLES31.functional.texture.b"
#define VkglTestCase_014815_2 "order_clamp.unused_channels.alpha"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014815, VkglTestCase_014815_1, VkglTestCase_014815_2);

#define VkglTestCase_014816_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014816_2 "_clamp.unused_channels.luminance_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014816, VkglTestCase_014816_1, VkglTestCase_014816_2);

#define VkglTestCase_014817_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014817_2 "clamp.unused_channels.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014817, VkglTestCase_014817_1, VkglTestCase_014817_2);

#define VkglTestCase_014818_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014818_2 "lamp.unused_channels.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014818, VkglTestCase_014818_1, VkglTestCase_014818_2);

#define VkglTestCase_014819_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014819_2 "_clamp.unused_channels.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014819, VkglTestCase_014819_1, VkglTestCase_014819_2);

#define VkglTestCase_014820_1 "dEQP-GLES31.functional.texture.border_clamp.u"
#define VkglTestCase_014820_2 "nused_channels.depth32f_stencil8_sample_depth"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014820, VkglTestCase_014820_1, VkglTestCase_014820_2);

#define VkglTestCase_014821_1 "dEQP-GLES31.functional.texture.border_clamp.un"
#define VkglTestCase_014821_2 "used_channels.depth32f_stencil8_sample_stencil"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014821, VkglTestCase_014821_1, VkglTestCase_014821_2);

#define VkglTestCase_014822_1 "dEQP-GLES31.functional.texture.border_clamp."
#define VkglTestCase_014822_2 "unused_channels.depth24_stencil8_sample_depth"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014822, VkglTestCase_014822_1, VkglTestCase_014822_2);

#define VkglTestCase_014823_1 "dEQP-GLES31.functional.texture.border_clamp.u"
#define VkglTestCase_014823_2 "nused_channels.depth24_stencil8_sample_stencil"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014823, VkglTestCase_014823_1, VkglTestCase_014823_2);

#define VkglTestCase_014824_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014824_2 "lamp.unused_channels.compressed_r11_eac"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014824, VkglTestCase_014824_1, VkglTestCase_014824_2);
