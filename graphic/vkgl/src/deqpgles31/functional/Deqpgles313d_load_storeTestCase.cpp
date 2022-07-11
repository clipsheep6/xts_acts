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

#define VkglTestCase_011543_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011543_2 "oad_store.3d.load_store.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011543, VkglTestCase_011543_1, VkglTestCase_011543_2);

#define VkglTestCase_011544_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011544_2 "re.3d.load_store.rgba32f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011544, VkglTestCase_011544_1, VkglTestCase_011544_2);

#define VkglTestCase_011545_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011545_2 "oad_store.3d.load_store.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011545, VkglTestCase_011545_1, VkglTestCase_011545_2);

#define VkglTestCase_011546_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011546_2 "re.3d.load_store.rgba16f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011546, VkglTestCase_011546_1, VkglTestCase_011546_2);

#define VkglTestCase_011547_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011547_2 "load_store.3d.load_store.r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011547, VkglTestCase_011547_1, VkglTestCase_011547_2);

#define VkglTestCase_011548_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011548_2 "tore.3d.load_store.r32f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011548, VkglTestCase_011548_1, VkglTestCase_011548_2);

#define VkglTestCase_011549_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011549_2 "ad_store.3d.load_store.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011549, VkglTestCase_011549_1, VkglTestCase_011549_2);

#define VkglTestCase_011550_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011550_2 "re.3d.load_store.rgba32ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011550, VkglTestCase_011550_1, VkglTestCase_011550_2);

#define VkglTestCase_011551_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011551_2 "ad_store.3d.load_store.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011551, VkglTestCase_011551_1, VkglTestCase_011551_2);

#define VkglTestCase_011552_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011552_2 "re.3d.load_store.rgba16ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011552, VkglTestCase_011552_1, VkglTestCase_011552_2);

#define VkglTestCase_011553_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011553_2 "oad_store.3d.load_store.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011553, VkglTestCase_011553_1, VkglTestCase_011553_2);

#define VkglTestCase_011554_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011554_2 "re.3d.load_store.rgba8ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011554, VkglTestCase_011554_1, VkglTestCase_011554_2);

#define VkglTestCase_011555_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011555_2 "load_store.3d.load_store.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011555, VkglTestCase_011555_1, VkglTestCase_011555_2);

#define VkglTestCase_011556_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011556_2 "ore.3d.load_store.r32ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011556, VkglTestCase_011556_1, VkglTestCase_011556_2);

#define VkglTestCase_011557_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011557_2 "oad_store.3d.load_store.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011557, VkglTestCase_011557_1, VkglTestCase_011557_2);

#define VkglTestCase_011558_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011558_2 "re.3d.load_store.rgba32i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011558, VkglTestCase_011558_1, VkglTestCase_011558_2);

#define VkglTestCase_011559_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011559_2 "oad_store.3d.load_store.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011559, VkglTestCase_011559_1, VkglTestCase_011559_2);

#define VkglTestCase_011560_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011560_2 "re.3d.load_store.rgba16i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011560, VkglTestCase_011560_1, VkglTestCase_011560_2);

#define VkglTestCase_011561_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011561_2 "oad_store.3d.load_store.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011561, VkglTestCase_011561_1, VkglTestCase_011561_2);

#define VkglTestCase_011562_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011562_2 "ore.3d.load_store.rgba8i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011562, VkglTestCase_011562_1, VkglTestCase_011562_2);

#define VkglTestCase_011563_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011563_2 "load_store.3d.load_store.r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011563, VkglTestCase_011563_1, VkglTestCase_011563_2);

#define VkglTestCase_011564_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011564_2 "tore.3d.load_store.r32i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011564, VkglTestCase_011564_1, VkglTestCase_011564_2);

#define VkglTestCase_011565_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011565_2 "load_store.3d.load_store.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011565, VkglTestCase_011565_1, VkglTestCase_011565_2);

#define VkglTestCase_011566_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011566_2 "ore.3d.load_store.rgba8_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011566, VkglTestCase_011566_1, VkglTestCase_011566_2);

#define VkglTestCase_011567_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011567_2 "d_store.3d.load_store.rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011567, VkglTestCase_011567_1, VkglTestCase_011567_2);

#define VkglTestCase_011568_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011568_2 ".3d.load_store.rgba8_snorm_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011568, VkglTestCase_011568_1, VkglTestCase_011568_2);
