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

#define VkglTestCase_011517_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011517_2 "_load_store.3d.store.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011517, VkglTestCase_011517_1, VkglTestCase_011517_2);

#define VkglTestCase_011518_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011518_2 "store.3d.store.rgba32f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011518, VkglTestCase_011518_1, VkglTestCase_011518_2);

#define VkglTestCase_011519_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011519_2 "_load_store.3d.store.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011519, VkglTestCase_011519_1, VkglTestCase_011519_2);

#define VkglTestCase_011520_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011520_2 "store.3d.store.rgba16f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011520, VkglTestCase_011520_1, VkglTestCase_011520_2);

#define VkglTestCase_011521_1 "dEQP-GLES31.functional.ima"
#define VkglTestCase_011521_2 "ge_load_store.3d.store.r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011521, VkglTestCase_011521_1, VkglTestCase_011521_2);

#define VkglTestCase_011522_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011522_2 "_store.3d.store.r32f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011522, VkglTestCase_011522_1, VkglTestCase_011522_2);

#define VkglTestCase_011523_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011523_2 "_load_store.3d.store.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011523, VkglTestCase_011523_1, VkglTestCase_011523_2);

#define VkglTestCase_011524_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011524_2 "tore.3d.store.rgba32ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011524, VkglTestCase_011524_1, VkglTestCase_011524_2);

#define VkglTestCase_011525_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011525_2 "_load_store.3d.store.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011525, VkglTestCase_011525_1, VkglTestCase_011525_2);

#define VkglTestCase_011526_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011526_2 "tore.3d.store.rgba16ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011526, VkglTestCase_011526_1, VkglTestCase_011526_2);

#define VkglTestCase_011527_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011527_2 "_load_store.3d.store.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011527, VkglTestCase_011527_1, VkglTestCase_011527_2);

#define VkglTestCase_011528_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011528_2 "store.3d.store.rgba8ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011528, VkglTestCase_011528_1, VkglTestCase_011528_2);

#define VkglTestCase_011529_1 "dEQP-GLES31.functional.imag"
#define VkglTestCase_011529_2 "e_load_store.3d.store.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011529, VkglTestCase_011529_1, VkglTestCase_011529_2);

#define VkglTestCase_011530_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011530_2 "_store.3d.store.r32ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011530, VkglTestCase_011530_1, VkglTestCase_011530_2);

#define VkglTestCase_011531_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011531_2 "_load_store.3d.store.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011531, VkglTestCase_011531_1, VkglTestCase_011531_2);

#define VkglTestCase_011532_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011532_2 "store.3d.store.rgba32i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011532, VkglTestCase_011532_1, VkglTestCase_011532_2);

#define VkglTestCase_011533_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011533_2 "_load_store.3d.store.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011533, VkglTestCase_011533_1, VkglTestCase_011533_2);

#define VkglTestCase_011534_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011534_2 "store.3d.store.rgba16i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011534, VkglTestCase_011534_1, VkglTestCase_011534_2);

#define VkglTestCase_011535_1 "dEQP-GLES31.functional.imag"
#define VkglTestCase_011535_2 "e_load_store.3d.store.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011535, VkglTestCase_011535_1, VkglTestCase_011535_2);

#define VkglTestCase_011536_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011536_2 "store.3d.store.rgba8i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011536, VkglTestCase_011536_1, VkglTestCase_011536_2);

#define VkglTestCase_011537_1 "dEQP-GLES31.functional.ima"
#define VkglTestCase_011537_2 "ge_load_store.3d.store.r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011537, VkglTestCase_011537_1, VkglTestCase_011537_2);

#define VkglTestCase_011538_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011538_2 "_store.3d.store.r32i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011538, VkglTestCase_011538_1, VkglTestCase_011538_2);

#define VkglTestCase_011539_1 "dEQP-GLES31.functional.imag"
#define VkglTestCase_011539_2 "e_load_store.3d.store.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011539, VkglTestCase_011539_1, VkglTestCase_011539_2);

#define VkglTestCase_011540_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011540_2 "_store.3d.store.rgba8_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011540, VkglTestCase_011540_1, VkglTestCase_011540_2);

#define VkglTestCase_011541_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011541_2 "oad_store.3d.store.rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011541, VkglTestCase_011541_1, VkglTestCase_011541_2);

#define VkglTestCase_011542_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011542_2 "ore.3d.store.rgba8_snorm_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011542, VkglTestCase_011542_1, VkglTestCase_011542_2);
