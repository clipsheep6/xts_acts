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
#include "../ActsDeqpgles310028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027066_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027066_2 "iewclass_32_bits.r32ui_r32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027066, VkglTestCase_027066_1, VkglTestCase_027066_2);

#define VkglTestCase_027067_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027067_2 "iewclass_32_bits.r32ui_r32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027067, VkglTestCase_027067_1, VkglTestCase_027067_2);

#define VkglTestCase_027068_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027068_2 "viewclass_32_bits.r32ui_r32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027068, VkglTestCase_027068_1, VkglTestCase_027068_2);

#define VkglTestCase_027069_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027069_2 "class_32_bits.r32ui_r32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027069, VkglTestCase_027069_1, VkglTestCase_027069_2);

#define VkglTestCase_027070_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027070_2 "iewclass_32_bits.r32ui_r32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027070, VkglTestCase_027070_1, VkglTestCase_027070_2);

#define VkglTestCase_027071_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027071_2 "iewclass_32_bits.r32ui_r32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027071, VkglTestCase_027071_1, VkglTestCase_027071_2);

#define VkglTestCase_027072_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027072_2 "viewclass_32_bits.r32ui_r32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027072, VkglTestCase_027072_1, VkglTestCase_027072_2);

#define VkglTestCase_027073_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027073_2 "class_32_bits.r32ui_r32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027073, VkglTestCase_027073_1, VkglTestCase_027073_2);

#define VkglTestCase_027074_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027074_2 "viewclass_32_bits.r32ui_r32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027074, VkglTestCase_027074_1, VkglTestCase_027074_2);

#define VkglTestCase_027075_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027075_2 "viewclass_32_bits.r32ui_r32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027075, VkglTestCase_027075_1, VkglTestCase_027075_2);

#define VkglTestCase_027076_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_027076_2 ".viewclass_32_bits.r32ui_r32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027076, VkglTestCase_027076_1, VkglTestCase_027076_2);

#define VkglTestCase_027077_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027077_2 "wclass_32_bits.r32ui_r32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027077, VkglTestCase_027077_1, VkglTestCase_027077_2);

#define VkglTestCase_027078_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027078_2 "class_32_bits.r32ui_r32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027078, VkglTestCase_027078_1, VkglTestCase_027078_2);

#define VkglTestCase_027079_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027079_2 "class_32_bits.r32ui_r32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027079, VkglTestCase_027079_1, VkglTestCase_027079_2);

#define VkglTestCase_027080_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027080_2 "wclass_32_bits.r32ui_r32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027080, VkglTestCase_027080_1, VkglTestCase_027080_2);

#define VkglTestCase_027081_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027081_2 "ss_32_bits.r32ui_r32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027081, VkglTestCase_027081_1, VkglTestCase_027081_2);

#define VkglTestCase_027082_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027082_2 "ewclass_32_bits.r32ui_r32f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027082, VkglTestCase_027082_1, VkglTestCase_027082_2);

#define VkglTestCase_027083_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027083_2 "ewclass_32_bits.r32ui_r32f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027083, VkglTestCase_027083_1, VkglTestCase_027083_2);

#define VkglTestCase_027084_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027084_2 "iewclass_32_bits.r32ui_r32f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027084, VkglTestCase_027084_1, VkglTestCase_027084_2);

#define VkglTestCase_027085_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027085_2 "lass_32_bits.r32ui_r32f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027085, VkglTestCase_027085_1, VkglTestCase_027085_2);
