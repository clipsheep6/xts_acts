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

#define VkglTestCase_025264_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025264_2 "class_128_bits.rgba32f_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025264, VkglTestCase_025264_1, VkglTestCase_025264_2);

#define VkglTestCase_025265_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025265_2 "class_128_bits.rgba32f_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025265, VkglTestCase_025265_1, VkglTestCase_025265_2);

#define VkglTestCase_025266_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025266_2 "wclass_128_bits.rgba32f_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025266, VkglTestCase_025266_1, VkglTestCase_025266_2);

#define VkglTestCase_025267_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025267_2 "ss_128_bits.rgba32f_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025267, VkglTestCase_025267_1, VkglTestCase_025267_2);

#define VkglTestCase_025268_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025268_2 "lass_128_bits.rgba32f_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025268, VkglTestCase_025268_1, VkglTestCase_025268_2);

#define VkglTestCase_025269_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025269_2 "class_128_bits.rgba32f_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025269, VkglTestCase_025269_1, VkglTestCase_025269_2);

#define VkglTestCase_025270_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025270_2 "class_128_bits.rgba32f_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025270, VkglTestCase_025270_1, VkglTestCase_025270_2);

#define VkglTestCase_025271_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025271_2 "wclass_128_bits.rgba32f_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025271, VkglTestCase_025271_1, VkglTestCase_025271_2);

#define VkglTestCase_025272_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025272_2 "ss_128_bits.rgba32f_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025272, VkglTestCase_025272_1, VkglTestCase_025272_2);

#define VkglTestCase_025273_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025273_2 "lass_128_bits.rgba32f_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025273, VkglTestCase_025273_1, VkglTestCase_025273_2);

#define VkglTestCase_025274_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025274_2 "wclass_128_bits.rgba32f_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025274, VkglTestCase_025274_1, VkglTestCase_025274_2);

#define VkglTestCase_025275_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025275_2 "wclass_128_bits.rgba32f_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025275, VkglTestCase_025275_1, VkglTestCase_025275_2);

#define VkglTestCase_025276_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025276_2 "ewclass_128_bits.rgba32f_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025276, VkglTestCase_025276_1, VkglTestCase_025276_2);

#define VkglTestCase_025277_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025277_2 "ass_128_bits.rgba32f_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025277, VkglTestCase_025277_1, VkglTestCase_025277_2);

#define VkglTestCase_025278_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025278_2 "class_128_bits.rgba32f_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025278, VkglTestCase_025278_1, VkglTestCase_025278_2);

#define VkglTestCase_025279_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025279_2 "ss_128_bits.rgba32f_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025279, VkglTestCase_025279_1, VkglTestCase_025279_2);

#define VkglTestCase_025280_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025280_2 "ss_128_bits.rgba32f_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025280, VkglTestCase_025280_1, VkglTestCase_025280_2);

#define VkglTestCase_025281_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025281_2 "ass_128_bits.rgba32f_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025281, VkglTestCase_025281_1, VkglTestCase_025281_2);

#define VkglTestCase_025282_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_025282_2 "128_bits.rgba32f_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025282, VkglTestCase_025282_1, VkglTestCase_025282_2);

#define VkglTestCase_025283_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025283_2 "s_128_bits.rgba32f_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025283, VkglTestCase_025283_1, VkglTestCase_025283_2);
