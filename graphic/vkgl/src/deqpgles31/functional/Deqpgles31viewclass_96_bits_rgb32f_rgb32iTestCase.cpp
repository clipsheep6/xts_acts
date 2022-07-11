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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025460_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025460_2 "ewclass_96_bits.rgb32f_rgb32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025460, VkglTestCase_025460_1, VkglTestCase_025460_2);

#define VkglTestCase_025461_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025461_2 "ewclass_96_bits.rgb32f_rgb32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025461, VkglTestCase_025461_1, VkglTestCase_025461_2);

#define VkglTestCase_025462_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025462_2 "iewclass_96_bits.rgb32f_rgb32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025462, VkglTestCase_025462_1, VkglTestCase_025462_2);

#define VkglTestCase_025463_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025463_2 "lass_96_bits.rgb32f_rgb32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025463, VkglTestCase_025463_1, VkglTestCase_025463_2);

#define VkglTestCase_025464_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025464_2 "ewclass_96_bits.rgb32f_rgb32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025464, VkglTestCase_025464_1, VkglTestCase_025464_2);

#define VkglTestCase_025465_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025465_2 "ewclass_96_bits.rgb32f_rgb32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025465, VkglTestCase_025465_1, VkglTestCase_025465_2);

#define VkglTestCase_025466_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025466_2 "iewclass_96_bits.rgb32f_rgb32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025466, VkglTestCase_025466_1, VkglTestCase_025466_2);

#define VkglTestCase_025467_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025467_2 "lass_96_bits.rgb32f_rgb32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025467, VkglTestCase_025467_1, VkglTestCase_025467_2);

#define VkglTestCase_025468_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025468_2 "iewclass_96_bits.rgb32f_rgb32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025468, VkglTestCase_025468_1, VkglTestCase_025468_2);

#define VkglTestCase_025469_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025469_2 "iewclass_96_bits.rgb32f_rgb32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025469, VkglTestCase_025469_1, VkglTestCase_025469_2);

#define VkglTestCase_025470_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025470_2 "viewclass_96_bits.rgb32f_rgb32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025470, VkglTestCase_025470_1, VkglTestCase_025470_2);

#define VkglTestCase_025471_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025471_2 "class_96_bits.rgb32f_rgb32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025471, VkglTestCase_025471_1, VkglTestCase_025471_2);

#define VkglTestCase_025472_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025472_2 "lass_96_bits.rgb32f_rgb32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025472, VkglTestCase_025472_1, VkglTestCase_025472_2);

#define VkglTestCase_025473_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025473_2 "lass_96_bits.rgb32f_rgb32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025473, VkglTestCase_025473_1, VkglTestCase_025473_2);

#define VkglTestCase_025474_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025474_2 "class_96_bits.rgb32f_rgb32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025474, VkglTestCase_025474_1, VkglTestCase_025474_2);

#define VkglTestCase_025475_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025475_2 "s_96_bits.rgb32f_rgb32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025475, VkglTestCase_025475_1, VkglTestCase_025475_2);
