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
#include "../ActsDeqpgles310012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011451_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011451_2 "cube.format_reinterpret.rgba32f_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011451, VkglTestCase_011451_1, VkglTestCase_011451_2);

#define VkglTestCase_011452_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011452_2 ".cube.format_reinterpret.rgba32f_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011452, VkglTestCase_011452_1, VkglTestCase_011452_2);

#define VkglTestCase_011453_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011453_2 "cube.format_reinterpret.rgba16f_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011453, VkglTestCase_011453_1, VkglTestCase_011453_2);

#define VkglTestCase_011454_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011454_2 ".cube.format_reinterpret.rgba16f_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011454, VkglTestCase_011454_1, VkglTestCase_011454_2);

#define VkglTestCase_011455_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011455_2 "e.cube.format_reinterpret.r32f_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011455, VkglTestCase_011455_1, VkglTestCase_011455_2);

#define VkglTestCase_011456_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011456_2 "re.cube.format_reinterpret.r32f_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011456, VkglTestCase_011456_1, VkglTestCase_011456_2);

#define VkglTestCase_011457_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011457_2 "re.cube.format_reinterpret.r32f_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011457, VkglTestCase_011457_1, VkglTestCase_011457_2);

#define VkglTestCase_011458_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011458_2 "ore.cube.format_reinterpret.r32f_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011458, VkglTestCase_011458_1, VkglTestCase_011458_2);

#define VkglTestCase_011459_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011459_2 "re.cube.format_reinterpret.r32f_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011459, VkglTestCase_011459_1, VkglTestCase_011459_2);

#define VkglTestCase_011460_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011460_2 "cube.format_reinterpret.r32f_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011460, VkglTestCase_011460_1, VkglTestCase_011460_2);

#define VkglTestCase_011461_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011461_2 "cube.format_reinterpret.rgba32ui_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011461, VkglTestCase_011461_1, VkglTestCase_011461_2);

#define VkglTestCase_011462_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011462_2 "cube.format_reinterpret.rgba32ui_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011462, VkglTestCase_011462_1, VkglTestCase_011462_2);

#define VkglTestCase_011463_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011463_2 "cube.format_reinterpret.rgba16ui_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011463, VkglTestCase_011463_1, VkglTestCase_011463_2);

#define VkglTestCase_011464_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011464_2 "cube.format_reinterpret.rgba16ui_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011464, VkglTestCase_011464_1, VkglTestCase_011464_2);

#define VkglTestCase_011465_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011465_2 "e.cube.format_reinterpret.rgba8ui_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011465, VkglTestCase_011465_1, VkglTestCase_011465_2);

#define VkglTestCase_011466_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011466_2 "e.cube.format_reinterpret.rgba8ui_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011466, VkglTestCase_011466_1, VkglTestCase_011466_2);

#define VkglTestCase_011467_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011467_2 ".cube.format_reinterpret.rgba8ui_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011467, VkglTestCase_011467_1, VkglTestCase_011467_2);

#define VkglTestCase_011468_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011468_2 "e.cube.format_reinterpret.rgba8ui_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011468, VkglTestCase_011468_1, VkglTestCase_011468_2);

#define VkglTestCase_011469_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011469_2 "e.cube.format_reinterpret.rgba8ui_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011469, VkglTestCase_011469_1, VkglTestCase_011469_2);

#define VkglTestCase_011470_1 "dEQP-GLES31.functional.image_load_store.c"
#define VkglTestCase_011470_2 "ube.format_reinterpret.rgba8ui_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011470, VkglTestCase_011470_1, VkglTestCase_011470_2);

#define VkglTestCase_011471_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011471_2 "re.cube.format_reinterpret.r32ui_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011471, VkglTestCase_011471_1, VkglTestCase_011471_2);

#define VkglTestCase_011472_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011472_2 "e.cube.format_reinterpret.r32ui_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011472, VkglTestCase_011472_1, VkglTestCase_011472_2);

#define VkglTestCase_011473_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011473_2 "e.cube.format_reinterpret.r32ui_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011473, VkglTestCase_011473_1, VkglTestCase_011473_2);

#define VkglTestCase_011474_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011474_2 "re.cube.format_reinterpret.r32ui_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011474, VkglTestCase_011474_1, VkglTestCase_011474_2);

#define VkglTestCase_011475_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011475_2 "re.cube.format_reinterpret.r32ui_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011475, VkglTestCase_011475_1, VkglTestCase_011475_2);

#define VkglTestCase_011476_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011476_2 "cube.format_reinterpret.r32ui_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011476, VkglTestCase_011476_1, VkglTestCase_011476_2);

#define VkglTestCase_011477_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011477_2 ".cube.format_reinterpret.rgba32i_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011477, VkglTestCase_011477_1, VkglTestCase_011477_2);

#define VkglTestCase_011478_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011478_2 "cube.format_reinterpret.rgba32i_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011478, VkglTestCase_011478_1, VkglTestCase_011478_2);

#define VkglTestCase_011479_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011479_2 ".cube.format_reinterpret.rgba16i_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011479, VkglTestCase_011479_1, VkglTestCase_011479_2);

#define VkglTestCase_011480_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011480_2 "cube.format_reinterpret.rgba16i_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011480, VkglTestCase_011480_1, VkglTestCase_011480_2);

#define VkglTestCase_011481_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011481_2 "re.cube.format_reinterpret.rgba8i_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011481, VkglTestCase_011481_1, VkglTestCase_011481_2);

#define VkglTestCase_011482_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011482_2 ".cube.format_reinterpret.rgba8i_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011482, VkglTestCase_011482_1, VkglTestCase_011482_2);

#define VkglTestCase_011483_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011483_2 "e.cube.format_reinterpret.rgba8i_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011483, VkglTestCase_011483_1, VkglTestCase_011483_2);

#define VkglTestCase_011484_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011484_2 "re.cube.format_reinterpret.rgba8i_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011484, VkglTestCase_011484_1, VkglTestCase_011484_2);

#define VkglTestCase_011485_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011485_2 "e.cube.format_reinterpret.rgba8i_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011485, VkglTestCase_011485_1, VkglTestCase_011485_2);

#define VkglTestCase_011486_1 "dEQP-GLES31.functional.image_load_store.c"
#define VkglTestCase_011486_2 "ube.format_reinterpret.rgba8i_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011486, VkglTestCase_011486_1, VkglTestCase_011486_2);

#define VkglTestCase_011487_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011487_2 "ore.cube.format_reinterpret.r32i_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011487, VkglTestCase_011487_1, VkglTestCase_011487_2);

#define VkglTestCase_011488_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011488_2 "e.cube.format_reinterpret.r32i_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011488, VkglTestCase_011488_1, VkglTestCase_011488_2);

#define VkglTestCase_011489_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011489_2 "re.cube.format_reinterpret.r32i_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011489, VkglTestCase_011489_1, VkglTestCase_011489_2);

#define VkglTestCase_011490_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011490_2 "re.cube.format_reinterpret.r32i_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011490, VkglTestCase_011490_1, VkglTestCase_011490_2);

#define VkglTestCase_011491_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011491_2 "re.cube.format_reinterpret.r32i_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011491, VkglTestCase_011491_1, VkglTestCase_011491_2);

#define VkglTestCase_011492_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011492_2 "cube.format_reinterpret.r32i_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011492, VkglTestCase_011492_1, VkglTestCase_011492_2);

#define VkglTestCase_011493_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011493_2 "re.cube.format_reinterpret.rgba8_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011493, VkglTestCase_011493_1, VkglTestCase_011493_2);

#define VkglTestCase_011494_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011494_2 "e.cube.format_reinterpret.rgba8_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011494, VkglTestCase_011494_1, VkglTestCase_011494_2);

#define VkglTestCase_011495_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011495_2 "re.cube.format_reinterpret.rgba8_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011495, VkglTestCase_011495_1, VkglTestCase_011495_2);

#define VkglTestCase_011496_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011496_2 "e.cube.format_reinterpret.rgba8_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011496, VkglTestCase_011496_1, VkglTestCase_011496_2);

#define VkglTestCase_011497_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011497_2 "re.cube.format_reinterpret.rgba8_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011497, VkglTestCase_011497_1, VkglTestCase_011497_2);

#define VkglTestCase_011498_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011498_2 "cube.format_reinterpret.rgba8_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011498, VkglTestCase_011498_1, VkglTestCase_011498_2);

#define VkglTestCase_011499_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011499_2 "cube.format_reinterpret.rgba8_snorm_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011499, VkglTestCase_011499_1, VkglTestCase_011499_2);

#define VkglTestCase_011500_1 "dEQP-GLES31.functional.image_load_store.c"
#define VkglTestCase_011500_2 "ube.format_reinterpret.rgba8_snorm_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011500, VkglTestCase_011500_1, VkglTestCase_011500_2);

#define VkglTestCase_011501_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011501_2 "cube.format_reinterpret.rgba8_snorm_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011501, VkglTestCase_011501_1, VkglTestCase_011501_2);

#define VkglTestCase_011502_1 "dEQP-GLES31.functional.image_load_store.c"
#define VkglTestCase_011502_2 "ube.format_reinterpret.rgba8_snorm_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011502, VkglTestCase_011502_1, VkglTestCase_011502_2);

#define VkglTestCase_011503_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011503_2 "cube.format_reinterpret.rgba8_snorm_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011503, VkglTestCase_011503_1, VkglTestCase_011503_2);

#define VkglTestCase_011504_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011504_2 "cube.format_reinterpret.rgba8_snorm_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011504, VkglTestCase_011504_1, VkglTestCase_011504_2);
