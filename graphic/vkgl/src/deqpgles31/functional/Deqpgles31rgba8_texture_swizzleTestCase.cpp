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

#define VkglTestCase_013072_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013072_2 "2d.rgba8.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013072, VkglTestCase_013072_1, VkglTestCase_013072_2);

#define VkglTestCase_013073_1 "dEQP-GLES31.functional.texture.gather.basic.2"
#define VkglTestCase_013073_2 "d.rgba8.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013073, VkglTestCase_013073_1, VkglTestCase_013073_2);

#define VkglTestCase_013074_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013074_2 "2d.rgba8.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013074, VkglTestCase_013074_1, VkglTestCase_013074_2);

#define VkglTestCase_013075_1 "dEQP-GLES31.functional.texture.gather.basic"
#define VkglTestCase_013075_2 ".2d.rgba8.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013075, VkglTestCase_013075_1, VkglTestCase_013075_2);

#define VkglTestCase_013076_1 "dEQP-GLES31.functional.texture.gather.basic"
#define VkglTestCase_013076_2 ".2d.rgba8.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013076, VkglTestCase_013076_1, VkglTestCase_013076_2);

#define VkglTestCase_013077_1 "dEQP-GLES31.functional.texture.gather.basic"
#define VkglTestCase_013077_2 ".2d.rgba8.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013077, VkglTestCase_013077_1, VkglTestCase_013077_2);

#define VkglTestCase_013141_1 "dEQP-GLES31.functional.texture.gather.basic.2d_"
#define VkglTestCase_013141_2 "array.rgba8.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013141, VkglTestCase_013141_1, VkglTestCase_013141_2);

#define VkglTestCase_013142_1 "dEQP-GLES31.functional.texture.gather.basic.2d_a"
#define VkglTestCase_013142_2 "rray.rgba8.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013142, VkglTestCase_013142_1, VkglTestCase_013142_2);

#define VkglTestCase_013143_1 "dEQP-GLES31.functional.texture.gather.basic.2d_"
#define VkglTestCase_013143_2 "array.rgba8.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013143, VkglTestCase_013143_1, VkglTestCase_013143_2);

#define VkglTestCase_013144_1 "dEQP-GLES31.functional.texture.gather.basic.2d"
#define VkglTestCase_013144_2 "_array.rgba8.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013144, VkglTestCase_013144_1, VkglTestCase_013144_2);

#define VkglTestCase_013145_1 "dEQP-GLES31.functional.texture.gather.basic.2d"
#define VkglTestCase_013145_2 "_array.rgba8.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013145, VkglTestCase_013145_1, VkglTestCase_013145_2);

#define VkglTestCase_013146_1 "dEQP-GLES31.functional.texture.gather.basic.2d"
#define VkglTestCase_013146_2 "_array.rgba8.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013146, VkglTestCase_013146_1, VkglTestCase_013146_2);

#define VkglTestCase_013216_1 "dEQP-GLES31.functional.texture.gather.basic.c"
#define VkglTestCase_013216_2 "ube.rgba8.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013216, VkglTestCase_013216_1, VkglTestCase_013216_2);

#define VkglTestCase_013217_1 "dEQP-GLES31.functional.texture.gather.basic.cu"
#define VkglTestCase_013217_2 "be.rgba8.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013217, VkglTestCase_013217_1, VkglTestCase_013217_2);

#define VkglTestCase_013218_1 "dEQP-GLES31.functional.texture.gather.basic.c"
#define VkglTestCase_013218_2 "ube.rgba8.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013218, VkglTestCase_013218_1, VkglTestCase_013218_2);

#define VkglTestCase_013219_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013219_2 "cube.rgba8.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013219, VkglTestCase_013219_1, VkglTestCase_013219_2);

#define VkglTestCase_013220_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013220_2 "cube.rgba8.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013220, VkglTestCase_013220_1, VkglTestCase_013220_2);

#define VkglTestCase_013221_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013221_2 "cube.rgba8.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013221, VkglTestCase_013221_1, VkglTestCase_013221_2);

#define VkglTestCase_013350_1 "dEQP-GLES31.functional.texture.gather.offset.implementat"
#define VkglTestCase_013350_2 "ion_offset.2d.rgba8.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013350, VkglTestCase_013350_1, VkglTestCase_013350_2);

#define VkglTestCase_013351_1 "dEQP-GLES31.functional.texture.gather.offset.implementat"
#define VkglTestCase_013351_2 "ion_offset.2d.rgba8.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013351, VkglTestCase_013351_1, VkglTestCase_013351_2);

#define VkglTestCase_013352_1 "dEQP-GLES31.functional.texture.gather.offset.implementa"
#define VkglTestCase_013352_2 "tion_offset.2d.rgba8.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013352, VkglTestCase_013352_1, VkglTestCase_013352_2);

#define VkglTestCase_013353_1 "dEQP-GLES31.functional.texture.gather.offset.implementa"
#define VkglTestCase_013353_2 "tion_offset.2d.rgba8.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013353, VkglTestCase_013353_1, VkglTestCase_013353_2);

#define VkglTestCase_013354_1 "dEQP-GLES31.functional.texture.gather.offset.implementa"
#define VkglTestCase_013354_2 "tion_offset.2d.rgba8.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013354, VkglTestCase_013354_1, VkglTestCase_013354_2);

#define VkglTestCase_013355_1 "dEQP-GLES31.functional.texture.gather.offset.implementa"
#define VkglTestCase_013355_2 "tion_offset.2d.rgba8.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013355, VkglTestCase_013355_1, VkglTestCase_013355_2);

#define VkglTestCase_013419_1 "dEQP-GLES31.functional.texture.gather.offset.implementation"
#define VkglTestCase_013419_2 "_offset.2d_array.rgba8.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013419, VkglTestCase_013419_1, VkglTestCase_013419_2);

#define VkglTestCase_013420_1 "dEQP-GLES31.functional.texture.gather.offset.implementation"
#define VkglTestCase_013420_2 "_offset.2d_array.rgba8.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013420, VkglTestCase_013420_1, VkglTestCase_013420_2);

#define VkglTestCase_013421_1 "dEQP-GLES31.functional.texture.gather.offset.implementatio"
#define VkglTestCase_013421_2 "n_offset.2d_array.rgba8.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013421, VkglTestCase_013421_1, VkglTestCase_013421_2);

#define VkglTestCase_013422_1 "dEQP-GLES31.functional.texture.gather.offset.implementatio"
#define VkglTestCase_013422_2 "n_offset.2d_array.rgba8.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013422, VkglTestCase_013422_1, VkglTestCase_013422_2);

#define VkglTestCase_013423_1 "dEQP-GLES31.functional.texture.gather.offset.implementatio"
#define VkglTestCase_013423_2 "n_offset.2d_array.rgba8.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013423, VkglTestCase_013423_1, VkglTestCase_013423_2);

#define VkglTestCase_013424_1 "dEQP-GLES31.functional.texture.gather.offset.implementatio"
#define VkglTestCase_013424_2 "n_offset.2d_array.rgba8.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013424, VkglTestCase_013424_1, VkglTestCase_013424_2);

#define VkglTestCase_013548_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impleme"
#define VkglTestCase_013548_2 "ntation_offset.2d.rgba8.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013548, VkglTestCase_013548_1, VkglTestCase_013548_2);

#define VkglTestCase_013549_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impleme"
#define VkglTestCase_013549_2 "ntation_offset.2d.rgba8.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013549, VkglTestCase_013549_1, VkglTestCase_013549_2);

#define VkglTestCase_013550_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implem"
#define VkglTestCase_013550_2 "entation_offset.2d.rgba8.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013550, VkglTestCase_013550_1, VkglTestCase_013550_2);

#define VkglTestCase_013551_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implem"
#define VkglTestCase_013551_2 "entation_offset.2d.rgba8.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013551, VkglTestCase_013551_1, VkglTestCase_013551_2);

#define VkglTestCase_013552_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implem"
#define VkglTestCase_013552_2 "entation_offset.2d.rgba8.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013552, VkglTestCase_013552_1, VkglTestCase_013552_2);

#define VkglTestCase_013553_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implem"
#define VkglTestCase_013553_2 "entation_offset.2d.rgba8.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013553, VkglTestCase_013553_1, VkglTestCase_013553_2);

#define VkglTestCase_013617_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementa"
#define VkglTestCase_013617_2 "tion_offset.2d_array.rgba8.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013617, VkglTestCase_013617_1, VkglTestCase_013617_2);

#define VkglTestCase_013618_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementa"
#define VkglTestCase_013618_2 "tion_offset.2d_array.rgba8.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013618, VkglTestCase_013618_1, VkglTestCase_013618_2);

#define VkglTestCase_013619_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implement"
#define VkglTestCase_013619_2 "ation_offset.2d_array.rgba8.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013619, VkglTestCase_013619_1, VkglTestCase_013619_2);

#define VkglTestCase_013620_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implement"
#define VkglTestCase_013620_2 "ation_offset.2d_array.rgba8.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013620, VkglTestCase_013620_1, VkglTestCase_013620_2);

#define VkglTestCase_013621_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implement"
#define VkglTestCase_013621_2 "ation_offset.2d_array.rgba8.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013621, VkglTestCase_013621_1, VkglTestCase_013621_2);

#define VkglTestCase_013622_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implement"
#define VkglTestCase_013622_2 "ation_offset.2d_array.rgba8.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013622, VkglTestCase_013622_1, VkglTestCase_013622_2);

#define VkglTestCase_013746_1 "dEQP-GLES31.functional.texture.gather.offsets.implementa"
#define VkglTestCase_013746_2 "tion_offset.2d.rgba8.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013746, VkglTestCase_013746_1, VkglTestCase_013746_2);

#define VkglTestCase_013747_1 "dEQP-GLES31.functional.texture.gather.offsets.implementat"
#define VkglTestCase_013747_2 "ion_offset.2d.rgba8.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013747, VkglTestCase_013747_1, VkglTestCase_013747_2);

#define VkglTestCase_013748_1 "dEQP-GLES31.functional.texture.gather.offsets.implementa"
#define VkglTestCase_013748_2 "tion_offset.2d.rgba8.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013748, VkglTestCase_013748_1, VkglTestCase_013748_2);

#define VkglTestCase_013749_1 "dEQP-GLES31.functional.texture.gather.offsets.implement"
#define VkglTestCase_013749_2 "ation_offset.2d.rgba8.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013749, VkglTestCase_013749_1, VkglTestCase_013749_2);

#define VkglTestCase_013750_1 "dEQP-GLES31.functional.texture.gather.offsets.implement"
#define VkglTestCase_013750_2 "ation_offset.2d.rgba8.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013750, VkglTestCase_013750_1, VkglTestCase_013750_2);

#define VkglTestCase_013751_1 "dEQP-GLES31.functional.texture.gather.offsets.implement"
#define VkglTestCase_013751_2 "ation_offset.2d.rgba8.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013751, VkglTestCase_013751_1, VkglTestCase_013751_2);

#define VkglTestCase_013815_1 "dEQP-GLES31.functional.texture.gather.offsets.implementatio"
#define VkglTestCase_013815_2 "n_offset.2d_array.rgba8.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013815, VkglTestCase_013815_1, VkglTestCase_013815_2);

#define VkglTestCase_013816_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation"
#define VkglTestCase_013816_2 "_offset.2d_array.rgba8.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013816, VkglTestCase_013816_1, VkglTestCase_013816_2);

#define VkglTestCase_013817_1 "dEQP-GLES31.functional.texture.gather.offsets.implementatio"
#define VkglTestCase_013817_2 "n_offset.2d_array.rgba8.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013817, VkglTestCase_013817_1, VkglTestCase_013817_2);

#define VkglTestCase_013818_1 "dEQP-GLES31.functional.texture.gather.offsets.implementati"
#define VkglTestCase_013818_2 "on_offset.2d_array.rgba8.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013818, VkglTestCase_013818_1, VkglTestCase_013818_2);

#define VkglTestCase_013819_1 "dEQP-GLES31.functional.texture.gather.offsets.implementati"
#define VkglTestCase_013819_2 "on_offset.2d_array.rgba8.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013819, VkglTestCase_013819_1, VkglTestCase_013819_2);

#define VkglTestCase_013820_1 "dEQP-GLES31.functional.texture.gather.offsets.implementati"
#define VkglTestCase_013820_2 "on_offset.2d_array.rgba8.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013820, VkglTestCase_013820_1, VkglTestCase_013820_2);
