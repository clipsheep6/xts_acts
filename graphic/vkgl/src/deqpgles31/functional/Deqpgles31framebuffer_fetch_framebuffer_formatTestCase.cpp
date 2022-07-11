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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007474_1 "dEQP-GLES31.functional.shaders.frameb"
#define VkglTestCase_007474_2 "uffer_fetch.framebuffer_format.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007474, VkglTestCase_007474_1, VkglTestCase_007474_2);

#define VkglTestCase_007475_1 "dEQP-GLES31.functional.shaders.framebu"
#define VkglTestCase_007475_2 "ffer_fetch.framebuffer_format.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007475, VkglTestCase_007475_1, VkglTestCase_007475_2);

#define VkglTestCase_007476_1 "dEQP-GLES31.functional.shaders.frameb"
#define VkglTestCase_007476_2 "uffer_fetch.framebuffer_format.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007476, VkglTestCase_007476_1, VkglTestCase_007476_2);

#define VkglTestCase_007477_1 "dEQP-GLES31.functional.shaders.framebu"
#define VkglTestCase_007477_2 "ffer_fetch.framebuffer_format.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007477, VkglTestCase_007477_1, VkglTestCase_007477_2);

#define VkglTestCase_007478_1 "dEQP-GLES31.functional.shaders.frame"
#define VkglTestCase_007478_2 "buffer_fetch.framebuffer_format.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007478, VkglTestCase_007478_1, VkglTestCase_007478_2);

#define VkglTestCase_007479_1 "dEQP-GLES31.functional.shaders.frameb"
#define VkglTestCase_007479_2 "uffer_fetch.framebuffer_format.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007479, VkglTestCase_007479_1, VkglTestCase_007479_2);

#define VkglTestCase_007480_1 "dEQP-GLES31.functional.shaders.frameb"
#define VkglTestCase_007480_2 "uffer_fetch.framebuffer_format.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007480, VkglTestCase_007480_1, VkglTestCase_007480_2);

#define VkglTestCase_007481_1 "dEQP-GLES31.functional.shaders.framebuff"
#define VkglTestCase_007481_2 "er_fetch.framebuffer_format.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007481, VkglTestCase_007481_1, VkglTestCase_007481_2);

#define VkglTestCase_007482_1 "dEQP-GLES31.functional.shaders.framebu"
#define VkglTestCase_007482_2 "ffer_fetch.framebuffer_format.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007482, VkglTestCase_007482_1, VkglTestCase_007482_2);

#define VkglTestCase_007483_1 "dEQP-GLES31.functional.shaders.framebuf"
#define VkglTestCase_007483_2 "fer_fetch.framebuffer_format.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007483, VkglTestCase_007483_1, VkglTestCase_007483_2);

#define VkglTestCase_007484_1 "dEQP-GLES31.functional.shaders.frame"
#define VkglTestCase_007484_2 "buffer_fetch.framebuffer_format.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007484, VkglTestCase_007484_1, VkglTestCase_007484_2);

#define VkglTestCase_007485_1 "dEQP-GLES31.functional.shaders.frameb"
#define VkglTestCase_007485_2 "uffer_fetch.framebuffer_format.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007485, VkglTestCase_007485_1, VkglTestCase_007485_2);

#define VkglTestCase_007486_1 "dEQP-GLES31.functional.shaders.frame"
#define VkglTestCase_007486_2 "buffer_fetch.framebuffer_format.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007486, VkglTestCase_007486_1, VkglTestCase_007486_2);

#define VkglTestCase_007487_1 "dEQP-GLES31.functional.shaders.frameb"
#define VkglTestCase_007487_2 "uffer_fetch.framebuffer_format.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007487, VkglTestCase_007487_1, VkglTestCase_007487_2);

#define VkglTestCase_007488_1 "dEQP-GLES31.functional.shaders.frame"
#define VkglTestCase_007488_2 "buffer_fetch.framebuffer_format.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007488, VkglTestCase_007488_1, VkglTestCase_007488_2);

#define VkglTestCase_007489_1 "dEQP-GLES31.functional.shaders.frameb"
#define VkglTestCase_007489_2 "uffer_fetch.framebuffer_format.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007489, VkglTestCase_007489_1, VkglTestCase_007489_2);

#define VkglTestCase_007490_1 "dEQP-GLES31.functional.shaders.frame"
#define VkglTestCase_007490_2 "buffer_fetch.framebuffer_format.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007490, VkglTestCase_007490_1, VkglTestCase_007490_2);

#define VkglTestCase_007491_1 "dEQP-GLES31.functional.shaders.frameb"
#define VkglTestCase_007491_2 "uffer_fetch.framebuffer_format.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007491, VkglTestCase_007491_1, VkglTestCase_007491_2);

#define VkglTestCase_007492_1 "dEQP-GLES31.functional.shaders.fram"
#define VkglTestCase_007492_2 "ebuffer_fetch.framebuffer_format.rg8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007492, VkglTestCase_007492_1, VkglTestCase_007492_2);

#define VkglTestCase_007493_1 "dEQP-GLES31.functional.shaders.frame"
#define VkglTestCase_007493_2 "buffer_fetch.framebuffer_format.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007493, VkglTestCase_007493_1, VkglTestCase_007493_2);

#define VkglTestCase_007494_1 "dEQP-GLES31.functional.shaders.frame"
#define VkglTestCase_007494_2 "buffer_fetch.framebuffer_format.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007494, VkglTestCase_007494_1, VkglTestCase_007494_2);

#define VkglTestCase_007495_1 "dEQP-GLES31.functional.shaders.frame"
#define VkglTestCase_007495_2 "buffer_fetch.framebuffer_format.r32i"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007495, VkglTestCase_007495_1, VkglTestCase_007495_2);

#define VkglTestCase_007496_1 "dEQP-GLES31.functional.shaders.frame"
#define VkglTestCase_007496_2 "buffer_fetch.framebuffer_format.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007496, VkglTestCase_007496_1, VkglTestCase_007496_2);

#define VkglTestCase_007497_1 "dEQP-GLES31.functional.shaders.frame"
#define VkglTestCase_007497_2 "buffer_fetch.framebuffer_format.r16i"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007497, VkglTestCase_007497_1, VkglTestCase_007497_2);

#define VkglTestCase_007498_1 "dEQP-GLES31.functional.shaders.frame"
#define VkglTestCase_007498_2 "buffer_fetch.framebuffer_format.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007498, VkglTestCase_007498_1, VkglTestCase_007498_2);

#define VkglTestCase_007499_1 "dEQP-GLES31.functional.shaders.fram"
#define VkglTestCase_007499_2 "ebuffer_fetch.framebuffer_format.r8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007499, VkglTestCase_007499_1, VkglTestCase_007499_2);

#define VkglTestCase_007500_1 "dEQP-GLES31.functional.shaders.fram"
#define VkglTestCase_007500_2 "ebuffer_fetch.framebuffer_format.r8i"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007500, VkglTestCase_007500_1, VkglTestCase_007500_2);

#define VkglTestCase_007501_1 "dEQP-GLES31.functional.shaders.frame"
#define VkglTestCase_007501_2 "buffer_fetch.framebuffer_format.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007501, VkglTestCase_007501_1, VkglTestCase_007501_2);

#define VkglTestCase_007502_1 "dEQP-GLES31.functional.shaders.frameb"
#define VkglTestCase_007502_2 "uffer_fetch.framebuffer_format.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007502, VkglTestCase_007502_1, VkglTestCase_007502_2);

#define VkglTestCase_007503_1 "dEQP-GLES31.functional.shaders.frameb"
#define VkglTestCase_007503_2 "uffer_fetch.framebuffer_format.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007503, VkglTestCase_007503_1, VkglTestCase_007503_2);

#define VkglTestCase_007504_1 "dEQP-GLES31.functional.shaders.framebuffe"
#define VkglTestCase_007504_2 "r_fetch.framebuffer_format.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007504, VkglTestCase_007504_1, VkglTestCase_007504_2);

#define VkglTestCase_007505_1 "dEQP-GLES31.functional.shaders.frame"
#define VkglTestCase_007505_2 "buffer_fetch.framebuffer_format.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007505, VkglTestCase_007505_1, VkglTestCase_007505_2);

#define VkglTestCase_007506_1 "dEQP-GLES31.functional.shaders.frame"
#define VkglTestCase_007506_2 "buffer_fetch.framebuffer_format.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007506, VkglTestCase_007506_1, VkglTestCase_007506_2);

#define VkglTestCase_007507_1 "dEQP-GLES31.functional.shaders.frame"
#define VkglTestCase_007507_2 "buffer_fetch.framebuffer_format.r32f"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007507, VkglTestCase_007507_1, VkglTestCase_007507_2);

#define VkglTestCase_007508_1 "dEQP-GLES31.functional.shaders.frame"
#define VkglTestCase_007508_2 "buffer_fetch.framebuffer_format.r16f"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007508, VkglTestCase_007508_1, VkglTestCase_007508_2);

#define VkglTestCase_007509_1 "dEQP-GLES31.functional.shaders.frameb"
#define VkglTestCase_007509_2 "uffer_fetch.framebuffer_format.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007509, VkglTestCase_007509_1, VkglTestCase_007509_2);
