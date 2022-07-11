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

#define VkglTestCase_013098_1 "dEQP-GLES31.functional.texture.gather.basic.2d.rgba8"
#define VkglTestCase_013098_2 "ui.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013098, VkglTestCase_013098_1, VkglTestCase_013098_2);

#define VkglTestCase_013167_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array.rg"
#define VkglTestCase_013167_2 "ba8ui.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013167, VkglTestCase_013167_1, VkglTestCase_013167_2);

#define VkglTestCase_013248_1 "dEQP-GLES31.functional.texture.gather.basic.cube.rgba"
#define VkglTestCase_013248_2 "8ui.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013248, VkglTestCase_013248_1, VkglTestCase_013248_2);

#define VkglTestCase_013376_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offs"
#define VkglTestCase_013376_2 "et.2d.rgba8ui.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013376, VkglTestCase_013376_1, VkglTestCase_013376_2);

#define VkglTestCase_013445_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offset."
#define VkglTestCase_013445_2 "2d_array.rgba8ui.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013445, VkglTestCase_013445_1, VkglTestCase_013445_2);

#define VkglTestCase_013574_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_"
#define VkglTestCase_013574_2 "offset.2d.rgba8ui.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013574, VkglTestCase_013574_1, VkglTestCase_013574_2);

#define VkglTestCase_013643_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_off"
#define VkglTestCase_013643_2 "set.2d_array.rgba8ui.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013643, VkglTestCase_013643_1, VkglTestCase_013643_2);

#define VkglTestCase_013772_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_off"
#define VkglTestCase_013772_2 "set.2d.rgba8ui.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013772, VkglTestCase_013772_1, VkglTestCase_013772_2);

#define VkglTestCase_013841_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offset"
#define VkglTestCase_013841_2 ".2d_array.rgba8ui.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013841, VkglTestCase_013841_1, VkglTestCase_013841_2);
