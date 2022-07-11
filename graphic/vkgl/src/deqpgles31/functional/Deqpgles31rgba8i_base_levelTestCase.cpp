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

#define VkglTestCase_013114_1 "dEQP-GLES31.functional.texture.gathe"
#define VkglTestCase_013114_2 "r.basic.2d.rgba8i.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013114, VkglTestCase_013114_1, VkglTestCase_013114_2);

#define VkglTestCase_013115_1 "dEQP-GLES31.functional.texture.gathe"
#define VkglTestCase_013115_2 "r.basic.2d.rgba8i.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013115, VkglTestCase_013115_1, VkglTestCase_013115_2);

#define VkglTestCase_013183_1 "dEQP-GLES31.functional.texture.gather.b"
#define VkglTestCase_013183_2 "asic.2d_array.rgba8i.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013183, VkglTestCase_013183_1, VkglTestCase_013183_2);

#define VkglTestCase_013184_1 "dEQP-GLES31.functional.texture.gather.b"
#define VkglTestCase_013184_2 "asic.2d_array.rgba8i.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013184, VkglTestCase_013184_1, VkglTestCase_013184_2);

#define VkglTestCase_013270_1 "dEQP-GLES31.functional.texture.gather"
#define VkglTestCase_013270_2 ".basic.cube.rgba8i.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013270, VkglTestCase_013270_1, VkglTestCase_013270_2);

#define VkglTestCase_013271_1 "dEQP-GLES31.functional.texture.gather"
#define VkglTestCase_013271_2 ".basic.cube.rgba8i.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013271, VkglTestCase_013271_1, VkglTestCase_013271_2);

#define VkglTestCase_013392_1 "dEQP-GLES31.functional.texture.gather.offset.im"
#define VkglTestCase_013392_2 "plementation_offset.2d.rgba8i.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013392, VkglTestCase_013392_1, VkglTestCase_013392_2);

#define VkglTestCase_013393_1 "dEQP-GLES31.functional.texture.gather.offset.im"
#define VkglTestCase_013393_2 "plementation_offset.2d.rgba8i.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013393, VkglTestCase_013393_1, VkglTestCase_013393_2);

#define VkglTestCase_013461_1 "dEQP-GLES31.functional.texture.gather.offset.imple"
#define VkglTestCase_013461_2 "mentation_offset.2d_array.rgba8i.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013461, VkglTestCase_013461_1, VkglTestCase_013461_2);

#define VkglTestCase_013462_1 "dEQP-GLES31.functional.texture.gather.offset.imple"
#define VkglTestCase_013462_2 "mentation_offset.2d_array.rgba8i.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013462, VkglTestCase_013462_1, VkglTestCase_013462_2);

#define VkglTestCase_013590_1 "dEQP-GLES31.functional.texture.gather.offset_dynami"
#define VkglTestCase_013590_2 "c.implementation_offset.2d.rgba8i.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013590, VkglTestCase_013590_1, VkglTestCase_013590_2);

#define VkglTestCase_013591_1 "dEQP-GLES31.functional.texture.gather.offset_dynami"
#define VkglTestCase_013591_2 "c.implementation_offset.2d.rgba8i.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013591, VkglTestCase_013591_1, VkglTestCase_013591_2);

#define VkglTestCase_013659_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.i"
#define VkglTestCase_013659_2 "mplementation_offset.2d_array.rgba8i.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013659, VkglTestCase_013659_1, VkglTestCase_013659_2);

#define VkglTestCase_013660_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.i"
#define VkglTestCase_013660_2 "mplementation_offset.2d_array.rgba8i.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013660, VkglTestCase_013660_1, VkglTestCase_013660_2);

#define VkglTestCase_013788_1 "dEQP-GLES31.functional.texture.gather.offsets.im"
#define VkglTestCase_013788_2 "plementation_offset.2d.rgba8i.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013788, VkglTestCase_013788_1, VkglTestCase_013788_2);

#define VkglTestCase_013789_1 "dEQP-GLES31.functional.texture.gather.offsets.im"
#define VkglTestCase_013789_2 "plementation_offset.2d.rgba8i.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013789, VkglTestCase_013789_1, VkglTestCase_013789_2);

#define VkglTestCase_013857_1 "dEQP-GLES31.functional.texture.gather.offsets.imple"
#define VkglTestCase_013857_2 "mentation_offset.2d_array.rgba8i.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013857, VkglTestCase_013857_1, VkglTestCase_013857_2);

#define VkglTestCase_013858_1 "dEQP-GLES31.functional.texture.gather.offsets.imple"
#define VkglTestCase_013858_2 "mentation_offset.2d_array.rgba8i.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013858, VkglTestCase_013858_1, VkglTestCase_013858_2);
