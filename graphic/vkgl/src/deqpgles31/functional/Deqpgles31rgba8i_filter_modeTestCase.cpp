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

#define VkglTestCase_013113_1 "dEQP-GLES31.functional.texture.gather.basic.2d.rgba8"
#define VkglTestCase_013113_2 "i.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013113, VkglTestCase_013113_1, VkglTestCase_013113_2);

#define VkglTestCase_013182_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array.rg"
#define VkglTestCase_013182_2 "ba8i.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013182, VkglTestCase_013182_1, VkglTestCase_013182_2);

#define VkglTestCase_013269_1 "dEQP-GLES31.functional.texture.gather.basic.cube.rgba"
#define VkglTestCase_013269_2 "8i.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013269, VkglTestCase_013269_1, VkglTestCase_013269_2);

#define VkglTestCase_013391_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_off"
#define VkglTestCase_013391_2 "set.2d.rgba8i.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013391, VkglTestCase_013391_1, VkglTestCase_013391_2);

#define VkglTestCase_013460_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offset"
#define VkglTestCase_013460_2 ".2d_array.rgba8i.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013460, VkglTestCase_013460_1, VkglTestCase_013460_2);

#define VkglTestCase_013589_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation"
#define VkglTestCase_013589_2 "_offset.2d.rgba8i.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013589, VkglTestCase_013589_1, VkglTestCase_013589_2);

#define VkglTestCase_013658_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_of"
#define VkglTestCase_013658_2 "fset.2d_array.rgba8i.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013658, VkglTestCase_013658_1, VkglTestCase_013658_2);

#define VkglTestCase_013787_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_off"
#define VkglTestCase_013787_2 "set.2d.rgba8i.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013787, VkglTestCase_013787_1, VkglTestCase_013787_2);

#define VkglTestCase_013856_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offset"
#define VkglTestCase_013856_2 ".2d_array.rgba8i.filter_mode.min_nearest_mipmap_nearest_mag_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013856, VkglTestCase_013856_1, VkglTestCase_013856_2);
