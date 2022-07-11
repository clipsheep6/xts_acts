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

#define VkglTestCase_035639_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035639_2 "_mixed.rgba_astc_12x12_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035639, VkglTestCase_035639_1, VkglTestCase_035639_2);

#define VkglTestCase_035640_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035640_2 "_mixed.rgba_astc_12x12_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035640, VkglTestCase_035640_1, VkglTestCase_035640_2);

#define VkglTestCase_035641_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035641_2 "s_mixed.rgba_astc_12x12_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035641, VkglTestCase_035641_1, VkglTestCase_035641_2);

#define VkglTestCase_035642_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035642_2 "xed.rgba_astc_12x12_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035642, VkglTestCase_035642_1, VkglTestCase_035642_2);

#define VkglTestCase_035643_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035643_2 "mixed.rgba_astc_12x12_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035643, VkglTestCase_035643_1, VkglTestCase_035643_2);

#define VkglTestCase_035644_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035644_2 "_mixed.rgba_astc_12x12_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035644, VkglTestCase_035644_1, VkglTestCase_035644_2);

#define VkglTestCase_035645_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035645_2 "_mixed.rgba_astc_12x12_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035645, VkglTestCase_035645_1, VkglTestCase_035645_2);

#define VkglTestCase_035646_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035646_2 "s_mixed.rgba_astc_12x12_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035646, VkglTestCase_035646_1, VkglTestCase_035646_2);

#define VkglTestCase_035647_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035647_2 "xed.rgba_astc_12x12_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035647, VkglTestCase_035647_1, VkglTestCase_035647_2);

#define VkglTestCase_035648_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035648_2 "mixed.rgba_astc_12x12_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035648, VkglTestCase_035648_1, VkglTestCase_035648_2);

#define VkglTestCase_035649_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035649_2 "s_mixed.rgba_astc_12x12_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035649, VkglTestCase_035649_1, VkglTestCase_035649_2);

#define VkglTestCase_035650_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035650_2 "s_mixed.rgba_astc_12x12_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035650, VkglTestCase_035650_1, VkglTestCase_035650_2);

#define VkglTestCase_035651_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035651_2 "ts_mixed.rgba_astc_12x12_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035651, VkglTestCase_035651_1, VkglTestCase_035651_2);

#define VkglTestCase_035652_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035652_2 "ixed.rgba_astc_12x12_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035652, VkglTestCase_035652_1, VkglTestCase_035652_2);

#define VkglTestCase_035653_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035653_2 "_mixed.rgba_astc_12x12_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035653, VkglTestCase_035653_1, VkglTestCase_035653_2);

#define VkglTestCase_035654_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035654_2 "xed.rgba_astc_12x12_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035654, VkglTestCase_035654_1, VkglTestCase_035654_2);

#define VkglTestCase_035655_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035655_2 "xed.rgba_astc_12x12_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035655, VkglTestCase_035655_1, VkglTestCase_035655_2);

#define VkglTestCase_035656_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035656_2 "ixed.rgba_astc_12x12_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035656, VkglTestCase_035656_1, VkglTestCase_035656_2);

#define VkglTestCase_035657_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035657_2 ".rgba_astc_12x12_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035657, VkglTestCase_035657_1, VkglTestCase_035657_2);

#define VkglTestCase_035658_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035658_2 "ed.rgba_astc_12x12_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035658, VkglTestCase_035658_1, VkglTestCase_035658_2);
