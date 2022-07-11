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
#include "../ActsDeqpgles310036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035019_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035019_2 "its_mixed.rgba32ui_rgba8_etc2_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035019, VkglTestCase_035019_1, VkglTestCase_035019_2);

#define VkglTestCase_035020_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_035020_2 "bits_mixed.rgba32ui_rgba8_etc2_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035020, VkglTestCase_035020_1, VkglTestCase_035020_2);

#define VkglTestCase_035021_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035021_2 "its_mixed.rgba32ui_rgba8_etc2_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035021, VkglTestCase_035021_1, VkglTestCase_035021_2);

#define VkglTestCase_035022_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_035022_2 "bits_mixed.rgba32ui_rgba8_etc2_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035022, VkglTestCase_035022_1, VkglTestCase_035022_2);

#define VkglTestCase_035023_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_035023_2 "bits_mixed.rgba32ui_rgba8_etc2_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035023, VkglTestCase_035023_1, VkglTestCase_035023_2);

#define VkglTestCase_035024_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128"
#define VkglTestCase_035024_2 "_bits_mixed.rgba32ui_rgba8_etc2_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035024, VkglTestCase_035024_1, VkglTestCase_035024_2);

#define VkglTestCase_035025_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035025_2 "_mixed.rgba32ui_rgba8_etc2_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035025, VkglTestCase_035025_1, VkglTestCase_035025_2);

#define VkglTestCase_035026_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035026_2 "s_mixed.rgba32ui_rgba8_etc2_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035026, VkglTestCase_035026_1, VkglTestCase_035026_2);

#define VkglTestCase_035027_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035027_2 "s_mixed.rgba32ui_rgba8_etc2_eac.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035027, VkglTestCase_035027_1, VkglTestCase_035027_2);

#define VkglTestCase_035028_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035028_2 "ts_mixed.rgba32ui_rgba8_etc2_eac.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035028, VkglTestCase_035028_1, VkglTestCase_035028_2);
