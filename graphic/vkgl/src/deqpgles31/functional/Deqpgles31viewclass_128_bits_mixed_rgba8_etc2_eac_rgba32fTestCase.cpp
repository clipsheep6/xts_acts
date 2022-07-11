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
#include "../ActsDeqpgles310035TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_034067_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034067_2 "its_mixed.rgba8_etc2_eac_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034067, VkglTestCase_034067_1, VkglTestCase_034067_2);

#define VkglTestCase_034068_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034068_2 "its_mixed.rgba8_etc2_eac_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034068, VkglTestCase_034068_1, VkglTestCase_034068_2);

#define VkglTestCase_034069_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034069_2 "bits_mixed.rgba8_etc2_eac_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034069, VkglTestCase_034069_1, VkglTestCase_034069_2);

#define VkglTestCase_034070_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034070_2 "_mixed.rgba8_etc2_eac_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034070, VkglTestCase_034070_1, VkglTestCase_034070_2);

#define VkglTestCase_034071_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034071_2 "bits_mixed.rgba8_etc2_eac_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034071, VkglTestCase_034071_1, VkglTestCase_034071_2);

#define VkglTestCase_034072_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034072_2 "bits_mixed.rgba8_etc2_eac_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034072, VkglTestCase_034072_1, VkglTestCase_034072_2);

#define VkglTestCase_034073_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128"
#define VkglTestCase_034073_2 "_bits_mixed.rgba8_etc2_eac_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034073, VkglTestCase_034073_1, VkglTestCase_034073_2);

#define VkglTestCase_034074_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034074_2 "s_mixed.rgba8_etc2_eac_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034074, VkglTestCase_034074_1, VkglTestCase_034074_2);
