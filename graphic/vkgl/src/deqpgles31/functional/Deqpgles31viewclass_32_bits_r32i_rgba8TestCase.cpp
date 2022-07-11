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
#include "../ActsDeqpgles310027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026856_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026856_2 "iewclass_32_bits.r32i_rgba8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026856, VkglTestCase_026856_1, VkglTestCase_026856_2);

#define VkglTestCase_026857_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026857_2 "iewclass_32_bits.r32i_rgba8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026857, VkglTestCase_026857_1, VkglTestCase_026857_2);

#define VkglTestCase_026858_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026858_2 "viewclass_32_bits.r32i_rgba8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026858, VkglTestCase_026858_1, VkglTestCase_026858_2);

#define VkglTestCase_026859_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026859_2 "class_32_bits.r32i_rgba8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026859, VkglTestCase_026859_1, VkglTestCase_026859_2);

#define VkglTestCase_026860_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026860_2 "ewclass_32_bits.r32i_rgba8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026860, VkglTestCase_026860_1, VkglTestCase_026860_2);

#define VkglTestCase_026861_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026861_2 "iewclass_32_bits.r32i_rgba8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026861, VkglTestCase_026861_1, VkglTestCase_026861_2);

#define VkglTestCase_026862_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026862_2 "iewclass_32_bits.r32i_rgba8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026862, VkglTestCase_026862_1, VkglTestCase_026862_2);

#define VkglTestCase_026863_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026863_2 "viewclass_32_bits.r32i_rgba8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026863, VkglTestCase_026863_1, VkglTestCase_026863_2);

#define VkglTestCase_026864_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026864_2 "class_32_bits.r32i_rgba8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026864, VkglTestCase_026864_1, VkglTestCase_026864_2);

#define VkglTestCase_026865_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026865_2 "ewclass_32_bits.r32i_rgba8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026865, VkglTestCase_026865_1, VkglTestCase_026865_2);

#define VkglTestCase_026866_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026866_2 "viewclass_32_bits.r32i_rgba8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026866, VkglTestCase_026866_1, VkglTestCase_026866_2);

#define VkglTestCase_026867_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026867_2 "viewclass_32_bits.r32i_rgba8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026867, VkglTestCase_026867_1, VkglTestCase_026867_2);

#define VkglTestCase_026868_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026868_2 ".viewclass_32_bits.r32i_rgba8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026868, VkglTestCase_026868_1, VkglTestCase_026868_2);

#define VkglTestCase_026869_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026869_2 "wclass_32_bits.r32i_rgba8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026869, VkglTestCase_026869_1, VkglTestCase_026869_2);

#define VkglTestCase_026870_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026870_2 "iewclass_32_bits.r32i_rgba8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026870, VkglTestCase_026870_1, VkglTestCase_026870_2);

#define VkglTestCase_026871_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026871_2 "class_32_bits.r32i_rgba8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026871, VkglTestCase_026871_1, VkglTestCase_026871_2);

#define VkglTestCase_026872_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026872_2 "class_32_bits.r32i_rgba8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026872, VkglTestCase_026872_1, VkglTestCase_026872_2);

#define VkglTestCase_026873_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026873_2 "wclass_32_bits.r32i_rgba8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026873, VkglTestCase_026873_1, VkglTestCase_026873_2);

#define VkglTestCase_026874_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026874_2 "ss_32_bits.r32i_rgba8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026874, VkglTestCase_026874_1, VkglTestCase_026874_2);

#define VkglTestCase_026875_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026875_2 "lass_32_bits.r32i_rgba8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026875, VkglTestCase_026875_1, VkglTestCase_026875_2);

#define VkglTestCase_026876_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026876_2 "ewclass_32_bits.r32i_rgba8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026876, VkglTestCase_026876_1, VkglTestCase_026876_2);

#define VkglTestCase_026877_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026877_2 "ewclass_32_bits.r32i_rgba8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026877, VkglTestCase_026877_1, VkglTestCase_026877_2);

#define VkglTestCase_026878_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026878_2 "iewclass_32_bits.r32i_rgba8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026878, VkglTestCase_026878_1, VkglTestCase_026878_2);

#define VkglTestCase_026879_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026879_2 "lass_32_bits.r32i_rgba8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026879, VkglTestCase_026879_1, VkglTestCase_026879_2);

#define VkglTestCase_026880_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026880_2 "class_32_bits.r32i_rgba8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026880, VkglTestCase_026880_1, VkglTestCase_026880_2);
