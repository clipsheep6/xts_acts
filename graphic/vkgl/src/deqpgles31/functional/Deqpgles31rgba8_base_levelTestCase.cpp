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

#define VkglTestCase_013083_1 "dEQP-GLES31.functional.texture.gath"
#define VkglTestCase_013083_2 "er.basic.2d.rgba8.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013083, VkglTestCase_013083_1, VkglTestCase_013083_2);

#define VkglTestCase_013084_1 "dEQP-GLES31.functional.texture.gath"
#define VkglTestCase_013084_2 "er.basic.2d.rgba8.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013084, VkglTestCase_013084_1, VkglTestCase_013084_2);

#define VkglTestCase_013152_1 "dEQP-GLES31.functional.texture.gather."
#define VkglTestCase_013152_2 "basic.2d_array.rgba8.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013152, VkglTestCase_013152_1, VkglTestCase_013152_2);

#define VkglTestCase_013153_1 "dEQP-GLES31.functional.texture.gather."
#define VkglTestCase_013153_2 "basic.2d_array.rgba8.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013153, VkglTestCase_013153_1, VkglTestCase_013153_2);

#define VkglTestCase_013227_1 "dEQP-GLES31.functional.texture.gathe"
#define VkglTestCase_013227_2 "r.basic.cube.rgba8.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013227, VkglTestCase_013227_1, VkglTestCase_013227_2);

#define VkglTestCase_013228_1 "dEQP-GLES31.functional.texture.gathe"
#define VkglTestCase_013228_2 "r.basic.cube.rgba8.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013228, VkglTestCase_013228_1, VkglTestCase_013228_2);

#define VkglTestCase_013361_1 "dEQP-GLES31.functional.texture.gather.offset.im"
#define VkglTestCase_013361_2 "plementation_offset.2d.rgba8.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013361, VkglTestCase_013361_1, VkglTestCase_013361_2);

#define VkglTestCase_013362_1 "dEQP-GLES31.functional.texture.gather.offset.im"
#define VkglTestCase_013362_2 "plementation_offset.2d.rgba8.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013362, VkglTestCase_013362_1, VkglTestCase_013362_2);

#define VkglTestCase_013430_1 "dEQP-GLES31.functional.texture.gather.offset.imple"
#define VkglTestCase_013430_2 "mentation_offset.2d_array.rgba8.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013430, VkglTestCase_013430_1, VkglTestCase_013430_2);

#define VkglTestCase_013431_1 "dEQP-GLES31.functional.texture.gather.offset.imple"
#define VkglTestCase_013431_2 "mentation_offset.2d_array.rgba8.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013431, VkglTestCase_013431_1, VkglTestCase_013431_2);

#define VkglTestCase_013559_1 "dEQP-GLES31.functional.texture.gather.offset_dynami"
#define VkglTestCase_013559_2 "c.implementation_offset.2d.rgba8.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013559, VkglTestCase_013559_1, VkglTestCase_013559_2);

#define VkglTestCase_013560_1 "dEQP-GLES31.functional.texture.gather.offset_dynami"
#define VkglTestCase_013560_2 "c.implementation_offset.2d.rgba8.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013560, VkglTestCase_013560_1, VkglTestCase_013560_2);

#define VkglTestCase_013628_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.i"
#define VkglTestCase_013628_2 "mplementation_offset.2d_array.rgba8.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013628, VkglTestCase_013628_1, VkglTestCase_013628_2);

#define VkglTestCase_013629_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.i"
#define VkglTestCase_013629_2 "mplementation_offset.2d_array.rgba8.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013629, VkglTestCase_013629_1, VkglTestCase_013629_2);

#define VkglTestCase_013757_1 "dEQP-GLES31.functional.texture.gather.offsets.i"
#define VkglTestCase_013757_2 "mplementation_offset.2d.rgba8.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013757, VkglTestCase_013757_1, VkglTestCase_013757_2);

#define VkglTestCase_013758_1 "dEQP-GLES31.functional.texture.gather.offsets.i"
#define VkglTestCase_013758_2 "mplementation_offset.2d.rgba8.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013758, VkglTestCase_013758_1, VkglTestCase_013758_2);

#define VkglTestCase_013826_1 "dEQP-GLES31.functional.texture.gather.offsets.impl"
#define VkglTestCase_013826_2 "ementation_offset.2d_array.rgba8.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013826, VkglTestCase_013826_1, VkglTestCase_013826_2);

#define VkglTestCase_013827_1 "dEQP-GLES31.functional.texture.gather.offsets.impl"
#define VkglTestCase_013827_2 "ementation_offset.2d_array.rgba8.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013827, VkglTestCase_013827_1, VkglTestCase_013827_2);
