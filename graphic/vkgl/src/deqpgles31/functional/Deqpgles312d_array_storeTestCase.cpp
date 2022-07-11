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

#define VkglTestCase_011674_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011674_2 "ad_store.2d_array.store.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011674, VkglTestCase_011674_1, VkglTestCase_011674_2);

#define VkglTestCase_011675_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011675_2 "re.2d_array.store.rgba32f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011675, VkglTestCase_011675_1, VkglTestCase_011675_2);

#define VkglTestCase_011676_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011676_2 "ad_store.2d_array.store.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011676, VkglTestCase_011676_1, VkglTestCase_011676_2);

#define VkglTestCase_011677_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011677_2 "re.2d_array.store.rgba16f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011677, VkglTestCase_011677_1, VkglTestCase_011677_2);

#define VkglTestCase_011678_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011678_2 "load_store.2d_array.store.r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011678, VkglTestCase_011678_1, VkglTestCase_011678_2);

#define VkglTestCase_011679_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011679_2 "ore.2d_array.store.r32f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011679, VkglTestCase_011679_1, VkglTestCase_011679_2);

#define VkglTestCase_011680_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011680_2 "ad_store.2d_array.store.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011680, VkglTestCase_011680_1, VkglTestCase_011680_2);

#define VkglTestCase_011681_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011681_2 "e.2d_array.store.rgba32ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011681, VkglTestCase_011681_1, VkglTestCase_011681_2);

#define VkglTestCase_011682_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011682_2 "ad_store.2d_array.store.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011682, VkglTestCase_011682_1, VkglTestCase_011682_2);

#define VkglTestCase_011683_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011683_2 "e.2d_array.store.rgba16ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011683, VkglTestCase_011683_1, VkglTestCase_011683_2);

#define VkglTestCase_011684_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011684_2 "ad_store.2d_array.store.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011684, VkglTestCase_011684_1, VkglTestCase_011684_2);

#define VkglTestCase_011685_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011685_2 "re.2d_array.store.rgba8ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011685, VkglTestCase_011685_1, VkglTestCase_011685_2);

#define VkglTestCase_011686_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011686_2 "oad_store.2d_array.store.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011686, VkglTestCase_011686_1, VkglTestCase_011686_2);

#define VkglTestCase_011687_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011687_2 "ore.2d_array.store.r32ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011687, VkglTestCase_011687_1, VkglTestCase_011687_2);

#define VkglTestCase_011688_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011688_2 "ad_store.2d_array.store.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011688, VkglTestCase_011688_1, VkglTestCase_011688_2);

#define VkglTestCase_011689_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011689_2 "re.2d_array.store.rgba32i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011689, VkglTestCase_011689_1, VkglTestCase_011689_2);

#define VkglTestCase_011690_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011690_2 "ad_store.2d_array.store.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011690, VkglTestCase_011690_1, VkglTestCase_011690_2);

#define VkglTestCase_011691_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011691_2 "re.2d_array.store.rgba16i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011691, VkglTestCase_011691_1, VkglTestCase_011691_2);

#define VkglTestCase_011692_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011692_2 "oad_store.2d_array.store.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011692, VkglTestCase_011692_1, VkglTestCase_011692_2);

#define VkglTestCase_011693_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011693_2 "re.2d_array.store.rgba8i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011693, VkglTestCase_011693_1, VkglTestCase_011693_2);

#define VkglTestCase_011694_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011694_2 "load_store.2d_array.store.r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011694, VkglTestCase_011694_1, VkglTestCase_011694_2);

#define VkglTestCase_011695_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011695_2 "ore.2d_array.store.r32i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011695, VkglTestCase_011695_1, VkglTestCase_011695_2);

#define VkglTestCase_011696_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011696_2 "oad_store.2d_array.store.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011696, VkglTestCase_011696_1, VkglTestCase_011696_2);

#define VkglTestCase_011697_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011697_2 "ore.2d_array.store.rgba8_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011697, VkglTestCase_011697_1, VkglTestCase_011697_2);

#define VkglTestCase_011698_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011698_2 "_store.2d_array.store.rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011698, VkglTestCase_011698_1, VkglTestCase_011698_2);

#define VkglTestCase_011699_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011699_2 ".2d_array.store.rgba8_snorm_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011699, VkglTestCase_011699_1, VkglTestCase_011699_2);
