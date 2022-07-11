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

#define VkglTestCase_011700_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011700_2 "_store.2d_array.load_store.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011700, VkglTestCase_011700_1, VkglTestCase_011700_2);

#define VkglTestCase_011701_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011701_2 "2d_array.load_store.rgba32f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011701, VkglTestCase_011701_1, VkglTestCase_011701_2);

#define VkglTestCase_011702_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011702_2 "_store.2d_array.load_store.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011702, VkglTestCase_011702_1, VkglTestCase_011702_2);

#define VkglTestCase_011703_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011703_2 "2d_array.load_store.rgba16f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011703, VkglTestCase_011703_1, VkglTestCase_011703_2);

#define VkglTestCase_011704_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011704_2 "d_store.2d_array.load_store.r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011704, VkglTestCase_011704_1, VkglTestCase_011704_2);

#define VkglTestCase_011705_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011705_2 "e.2d_array.load_store.r32f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011705, VkglTestCase_011705_1, VkglTestCase_011705_2);

#define VkglTestCase_011706_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011706_2 "store.2d_array.load_store.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011706, VkglTestCase_011706_1, VkglTestCase_011706_2);

#define VkglTestCase_011707_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011707_2 "2d_array.load_store.rgba32ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011707, VkglTestCase_011707_1, VkglTestCase_011707_2);

#define VkglTestCase_011708_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011708_2 "store.2d_array.load_store.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011708, VkglTestCase_011708_1, VkglTestCase_011708_2);

#define VkglTestCase_011709_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011709_2 "2d_array.load_store.rgba16ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011709, VkglTestCase_011709_1, VkglTestCase_011709_2);

#define VkglTestCase_011710_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011710_2 "_store.2d_array.load_store.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011710, VkglTestCase_011710_1, VkglTestCase_011710_2);

#define VkglTestCase_011711_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011711_2 "2d_array.load_store.rgba8ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011711, VkglTestCase_011711_1, VkglTestCase_011711_2);

#define VkglTestCase_011712_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011712_2 "d_store.2d_array.load_store.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011712, VkglTestCase_011712_1, VkglTestCase_011712_2);

#define VkglTestCase_011713_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011713_2 ".2d_array.load_store.r32ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011713, VkglTestCase_011713_1, VkglTestCase_011713_2);

#define VkglTestCase_011714_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011714_2 "_store.2d_array.load_store.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011714, VkglTestCase_011714_1, VkglTestCase_011714_2);

#define VkglTestCase_011715_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011715_2 "2d_array.load_store.rgba32i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011715, VkglTestCase_011715_1, VkglTestCase_011715_2);

#define VkglTestCase_011716_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011716_2 "_store.2d_array.load_store.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011716, VkglTestCase_011716_1, VkglTestCase_011716_2);

#define VkglTestCase_011717_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011717_2 "2d_array.load_store.rgba16i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011717, VkglTestCase_011717_1, VkglTestCase_011717_2);

#define VkglTestCase_011718_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011718_2 "_store.2d_array.load_store.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011718, VkglTestCase_011718_1, VkglTestCase_011718_2);

#define VkglTestCase_011719_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011719_2 ".2d_array.load_store.rgba8i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011719, VkglTestCase_011719_1, VkglTestCase_011719_2);

#define VkglTestCase_011720_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011720_2 "d_store.2d_array.load_store.r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011720, VkglTestCase_011720_1, VkglTestCase_011720_2);

#define VkglTestCase_011721_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011721_2 "e.2d_array.load_store.r32i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011721, VkglTestCase_011721_1, VkglTestCase_011721_2);

#define VkglTestCase_011722_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011722_2 "d_store.2d_array.load_store.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011722, VkglTestCase_011722_1, VkglTestCase_011722_2);

#define VkglTestCase_011723_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011723_2 ".2d_array.load_store.rgba8_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011723, VkglTestCase_011723_1, VkglTestCase_011723_2);

#define VkglTestCase_011724_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011724_2 "tore.2d_array.load_store.rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011724, VkglTestCase_011724_1, VkglTestCase_011724_2);

#define VkglTestCase_011725_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011725_2 "_array.load_store.rgba8_snorm_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011725, VkglTestCase_011725_1, VkglTestCase_011725_2);
