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
#include "../ActsDeqpgles310031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030145_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030145_2 "wclass_32_bits.rgb10_a2_rgba8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030145, VkglTestCase_030145_1, VkglTestCase_030145_2);

#define VkglTestCase_030146_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030146_2 "wclass_32_bits.rgb10_a2_rgba8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030146, VkglTestCase_030146_1, VkglTestCase_030146_2);

#define VkglTestCase_030147_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030147_2 "ewclass_32_bits.rgb10_a2_rgba8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030147, VkglTestCase_030147_1, VkglTestCase_030147_2);

#define VkglTestCase_030148_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030148_2 "ass_32_bits.rgb10_a2_rgba8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030148, VkglTestCase_030148_1, VkglTestCase_030148_2);

#define VkglTestCase_030149_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030149_2 "lass_32_bits.rgb10_a2_rgba8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030149, VkglTestCase_030149_1, VkglTestCase_030149_2);

#define VkglTestCase_030150_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030150_2 "wclass_32_bits.rgb10_a2_rgba8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030150, VkglTestCase_030150_1, VkglTestCase_030150_2);

#define VkglTestCase_030151_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030151_2 "wclass_32_bits.rgb10_a2_rgba8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030151, VkglTestCase_030151_1, VkglTestCase_030151_2);

#define VkglTestCase_030152_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030152_2 "ewclass_32_bits.rgb10_a2_rgba8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030152, VkglTestCase_030152_1, VkglTestCase_030152_2);

#define VkglTestCase_030153_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030153_2 "ass_32_bits.rgb10_a2_rgba8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030153, VkglTestCase_030153_1, VkglTestCase_030153_2);

#define VkglTestCase_030154_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030154_2 "lass_32_bits.rgb10_a2_rgba8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030154, VkglTestCase_030154_1, VkglTestCase_030154_2);

#define VkglTestCase_030155_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030155_2 "ewclass_32_bits.rgb10_a2_rgba8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030155, VkglTestCase_030155_1, VkglTestCase_030155_2);

#define VkglTestCase_030156_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030156_2 "ewclass_32_bits.rgb10_a2_rgba8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030156, VkglTestCase_030156_1, VkglTestCase_030156_2);

#define VkglTestCase_030157_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030157_2 "iewclass_32_bits.rgb10_a2_rgba8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030157, VkglTestCase_030157_1, VkglTestCase_030157_2);

#define VkglTestCase_030158_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030158_2 "lass_32_bits.rgb10_a2_rgba8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030158, VkglTestCase_030158_1, VkglTestCase_030158_2);

#define VkglTestCase_030159_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030159_2 "class_32_bits.rgb10_a2_rgba8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030159, VkglTestCase_030159_1, VkglTestCase_030159_2);

#define VkglTestCase_030160_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030160_2 "ass_32_bits.rgb10_a2_rgba8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030160, VkglTestCase_030160_1, VkglTestCase_030160_2);

#define VkglTestCase_030161_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030161_2 "ass_32_bits.rgb10_a2_rgba8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030161, VkglTestCase_030161_1, VkglTestCase_030161_2);

#define VkglTestCase_030162_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030162_2 "lass_32_bits.rgb10_a2_rgba8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030162, VkglTestCase_030162_1, VkglTestCase_030162_2);

#define VkglTestCase_030163_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030163_2 "_32_bits.rgb10_a2_rgba8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030163, VkglTestCase_030163_1, VkglTestCase_030163_2);

#define VkglTestCase_030164_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030164_2 "s_32_bits.rgb10_a2_rgba8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030164, VkglTestCase_030164_1, VkglTestCase_030164_2);

#define VkglTestCase_030165_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030165_2 "lass_32_bits.rgb10_a2_rgba8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030165, VkglTestCase_030165_1, VkglTestCase_030165_2);

#define VkglTestCase_030166_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030166_2 "lass_32_bits.rgb10_a2_rgba8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030166, VkglTestCase_030166_1, VkglTestCase_030166_2);

#define VkglTestCase_030167_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030167_2 "class_32_bits.rgb10_a2_rgba8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030167, VkglTestCase_030167_1, VkglTestCase_030167_2);

#define VkglTestCase_030168_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030168_2 "s_32_bits.rgb10_a2_rgba8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030168, VkglTestCase_030168_1, VkglTestCase_030168_2);

#define VkglTestCase_030169_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030169_2 "ass_32_bits.rgb10_a2_rgba8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030169, VkglTestCase_030169_1, VkglTestCase_030169_2);
