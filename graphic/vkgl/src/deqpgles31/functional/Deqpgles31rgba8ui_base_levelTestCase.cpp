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

#define VkglTestCase_013099_1 "dEQP-GLES31.functional.texture.gathe"
#define VkglTestCase_013099_2 "r.basic.2d.rgba8ui.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013099, VkglTestCase_013099_1, VkglTestCase_013099_2);

#define VkglTestCase_013100_1 "dEQP-GLES31.functional.texture.gathe"
#define VkglTestCase_013100_2 "r.basic.2d.rgba8ui.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013100, VkglTestCase_013100_1, VkglTestCase_013100_2);

#define VkglTestCase_013168_1 "dEQP-GLES31.functional.texture.gather.b"
#define VkglTestCase_013168_2 "asic.2d_array.rgba8ui.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013168, VkglTestCase_013168_1, VkglTestCase_013168_2);

#define VkglTestCase_013169_1 "dEQP-GLES31.functional.texture.gather.b"
#define VkglTestCase_013169_2 "asic.2d_array.rgba8ui.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013169, VkglTestCase_013169_1, VkglTestCase_013169_2);

#define VkglTestCase_013249_1 "dEQP-GLES31.functional.texture.gather"
#define VkglTestCase_013249_2 ".basic.cube.rgba8ui.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013249, VkglTestCase_013249_1, VkglTestCase_013249_2);

#define VkglTestCase_013250_1 "dEQP-GLES31.functional.texture.gather"
#define VkglTestCase_013250_2 ".basic.cube.rgba8ui.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013250, VkglTestCase_013250_1, VkglTestCase_013250_2);

#define VkglTestCase_013377_1 "dEQP-GLES31.functional.texture.gather.offset.imp"
#define VkglTestCase_013377_2 "lementation_offset.2d.rgba8ui.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013377, VkglTestCase_013377_1, VkglTestCase_013377_2);

#define VkglTestCase_013378_1 "dEQP-GLES31.functional.texture.gather.offset.imp"
#define VkglTestCase_013378_2 "lementation_offset.2d.rgba8ui.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013378, VkglTestCase_013378_1, VkglTestCase_013378_2);

#define VkglTestCase_013446_1 "dEQP-GLES31.functional.texture.gather.offset.implem"
#define VkglTestCase_013446_2 "entation_offset.2d_array.rgba8ui.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013446, VkglTestCase_013446_1, VkglTestCase_013446_2);

#define VkglTestCase_013447_1 "dEQP-GLES31.functional.texture.gather.offset.implem"
#define VkglTestCase_013447_2 "entation_offset.2d_array.rgba8ui.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013447, VkglTestCase_013447_1, VkglTestCase_013447_2);

#define VkglTestCase_013575_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic"
#define VkglTestCase_013575_2 ".implementation_offset.2d.rgba8ui.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013575, VkglTestCase_013575_1, VkglTestCase_013575_2);

#define VkglTestCase_013576_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic"
#define VkglTestCase_013576_2 ".implementation_offset.2d.rgba8ui.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013576, VkglTestCase_013576_1, VkglTestCase_013576_2);

#define VkglTestCase_013644_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.im"
#define VkglTestCase_013644_2 "plementation_offset.2d_array.rgba8ui.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013644, VkglTestCase_013644_1, VkglTestCase_013644_2);

#define VkglTestCase_013645_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.im"
#define VkglTestCase_013645_2 "plementation_offset.2d_array.rgba8ui.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013645, VkglTestCase_013645_1, VkglTestCase_013645_2);

#define VkglTestCase_013773_1 "dEQP-GLES31.functional.texture.gather.offsets.im"
#define VkglTestCase_013773_2 "plementation_offset.2d.rgba8ui.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013773, VkglTestCase_013773_1, VkglTestCase_013773_2);

#define VkglTestCase_013774_1 "dEQP-GLES31.functional.texture.gather.offsets.im"
#define VkglTestCase_013774_2 "plementation_offset.2d.rgba8ui.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013774, VkglTestCase_013774_1, VkglTestCase_013774_2);

#define VkglTestCase_013842_1 "dEQP-GLES31.functional.texture.gather.offsets.imple"
#define VkglTestCase_013842_2 "mentation_offset.2d_array.rgba8ui.base_level.level_1"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013842, VkglTestCase_013842_1, VkglTestCase_013842_2);

#define VkglTestCase_013843_1 "dEQP-GLES31.functional.texture.gather.offsets.imple"
#define VkglTestCase_013843_2 "mentation_offset.2d_array.rgba8ui.base_level.level_2"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013843, VkglTestCase_013843_1, VkglTestCase_013843_2);
