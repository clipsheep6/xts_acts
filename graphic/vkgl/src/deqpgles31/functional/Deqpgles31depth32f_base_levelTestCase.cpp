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

#define VkglTestCase_013133_1 "dEQP-GLES31.functional.texture.gather"
#define VkglTestCase_013133_2 ".basic.2d.depth32f.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013133, VkglTestCase_013133_1, VkglTestCase_013133_2);

#define VkglTestCase_013134_1 "dEQP-GLES31.functional.texture.gather"
#define VkglTestCase_013134_2 ".basic.2d.depth32f.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013134, VkglTestCase_013134_1, VkglTestCase_013134_2);

#define VkglTestCase_013202_1 "dEQP-GLES31.functional.texture.gather.ba"
#define VkglTestCase_013202_2 "sic.2d_array.depth32f.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013202, VkglTestCase_013202_1, VkglTestCase_013202_2);

#define VkglTestCase_013203_1 "dEQP-GLES31.functional.texture.gather.ba"
#define VkglTestCase_013203_2 "sic.2d_array.depth32f.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013203, VkglTestCase_013203_1, VkglTestCase_013203_2);

#define VkglTestCase_013411_1 "dEQP-GLES31.functional.texture.gather.offset.imp"
#define VkglTestCase_013411_2 "lementation_offset.2d.depth32f.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013411, VkglTestCase_013411_1, VkglTestCase_013411_2);

#define VkglTestCase_013412_1 "dEQP-GLES31.functional.texture.gather.offset.imp"
#define VkglTestCase_013412_2 "lementation_offset.2d.depth32f.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013412, VkglTestCase_013412_1, VkglTestCase_013412_2);

#define VkglTestCase_013480_1 "dEQP-GLES31.functional.texture.gather.offset.implem"
#define VkglTestCase_013480_2 "entation_offset.2d_array.depth32f.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013480, VkglTestCase_013480_1, VkglTestCase_013480_2);

#define VkglTestCase_013481_1 "dEQP-GLES31.functional.texture.gather.offset.implem"
#define VkglTestCase_013481_2 "entation_offset.2d_array.depth32f.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013481, VkglTestCase_013481_1, VkglTestCase_013481_2);

#define VkglTestCase_013609_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic"
#define VkglTestCase_013609_2 ".implementation_offset.2d.depth32f.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013609, VkglTestCase_013609_1, VkglTestCase_013609_2);

#define VkglTestCase_013610_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic"
#define VkglTestCase_013610_2 ".implementation_offset.2d.depth32f.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013610, VkglTestCase_013610_1, VkglTestCase_013610_2);

#define VkglTestCase_013678_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.im"
#define VkglTestCase_013678_2 "plementation_offset.2d_array.depth32f.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013678, VkglTestCase_013678_1, VkglTestCase_013678_2);

#define VkglTestCase_013679_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.im"
#define VkglTestCase_013679_2 "plementation_offset.2d_array.depth32f.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013679, VkglTestCase_013679_1, VkglTestCase_013679_2);

#define VkglTestCase_013807_1 "dEQP-GLES31.functional.texture.gather.offsets.imp"
#define VkglTestCase_013807_2 "lementation_offset.2d.depth32f.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013807, VkglTestCase_013807_1, VkglTestCase_013807_2);

#define VkglTestCase_013808_1 "dEQP-GLES31.functional.texture.gather.offsets.imp"
#define VkglTestCase_013808_2 "lementation_offset.2d.depth32f.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013808, VkglTestCase_013808_1, VkglTestCase_013808_2);

#define VkglTestCase_013876_1 "dEQP-GLES31.functional.texture.gather.offsets.implem"
#define VkglTestCase_013876_2 "entation_offset.2d_array.depth32f.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013876, VkglTestCase_013876_1, VkglTestCase_013876_2);

#define VkglTestCase_013877_1 "dEQP-GLES31.functional.texture.gather.offsets.implem"
#define VkglTestCase_013877_2 "entation_offset.2d_array.depth32f.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013877, VkglTestCase_013877_1, VkglTestCase_013877_2);
