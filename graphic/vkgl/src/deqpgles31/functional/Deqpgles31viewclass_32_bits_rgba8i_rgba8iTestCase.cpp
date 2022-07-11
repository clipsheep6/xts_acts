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
#include "../ActsDeqpgles310029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028863_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028863_2 "ewclass_32_bits.rgba8i_rgba8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028863, VkglTestCase_028863_1, VkglTestCase_028863_2);

#define VkglTestCase_028864_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028864_2 "ewclass_32_bits.rgba8i_rgba8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028864, VkglTestCase_028864_1, VkglTestCase_028864_2);

#define VkglTestCase_028865_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028865_2 "iewclass_32_bits.rgba8i_rgba8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028865, VkglTestCase_028865_1, VkglTestCase_028865_2);

#define VkglTestCase_028866_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028866_2 "lass_32_bits.rgba8i_rgba8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028866, VkglTestCase_028866_1, VkglTestCase_028866_2);

#define VkglTestCase_028867_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028867_2 "class_32_bits.rgba8i_rgba8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028867, VkglTestCase_028867_1, VkglTestCase_028867_2);

#define VkglTestCase_028868_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028868_2 "ewclass_32_bits.rgba8i_rgba8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028868, VkglTestCase_028868_1, VkglTestCase_028868_2);

#define VkglTestCase_028869_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028869_2 "ewclass_32_bits.rgba8i_rgba8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028869, VkglTestCase_028869_1, VkglTestCase_028869_2);

#define VkglTestCase_028870_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028870_2 "iewclass_32_bits.rgba8i_rgba8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028870, VkglTestCase_028870_1, VkglTestCase_028870_2);

#define VkglTestCase_028871_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028871_2 "lass_32_bits.rgba8i_rgba8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028871, VkglTestCase_028871_1, VkglTestCase_028871_2);

#define VkglTestCase_028872_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028872_2 "class_32_bits.rgba8i_rgba8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028872, VkglTestCase_028872_1, VkglTestCase_028872_2);

#define VkglTestCase_028873_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028873_2 "iewclass_32_bits.rgba8i_rgba8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028873, VkglTestCase_028873_1, VkglTestCase_028873_2);

#define VkglTestCase_028874_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028874_2 "iewclass_32_bits.rgba8i_rgba8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028874, VkglTestCase_028874_1, VkglTestCase_028874_2);

#define VkglTestCase_028875_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028875_2 "viewclass_32_bits.rgba8i_rgba8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028875, VkglTestCase_028875_1, VkglTestCase_028875_2);

#define VkglTestCase_028876_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028876_2 "class_32_bits.rgba8i_rgba8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028876, VkglTestCase_028876_1, VkglTestCase_028876_2);

#define VkglTestCase_028877_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028877_2 "wclass_32_bits.rgba8i_rgba8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028877, VkglTestCase_028877_1, VkglTestCase_028877_2);

#define VkglTestCase_028878_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028878_2 "lass_32_bits.rgba8i_rgba8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028878, VkglTestCase_028878_1, VkglTestCase_028878_2);

#define VkglTestCase_028879_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028879_2 "lass_32_bits.rgba8i_rgba8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028879, VkglTestCase_028879_1, VkglTestCase_028879_2);

#define VkglTestCase_028880_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028880_2 "class_32_bits.rgba8i_rgba8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028880, VkglTestCase_028880_1, VkglTestCase_028880_2);

#define VkglTestCase_028881_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028881_2 "s_32_bits.rgba8i_rgba8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028881, VkglTestCase_028881_1, VkglTestCase_028881_2);

#define VkglTestCase_028882_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028882_2 "ss_32_bits.rgba8i_rgba8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028882, VkglTestCase_028882_1, VkglTestCase_028882_2);

#define VkglTestCase_028883_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028883_2 "class_32_bits.rgba8i_rgba8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028883, VkglTestCase_028883_1, VkglTestCase_028883_2);

#define VkglTestCase_028884_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028884_2 "class_32_bits.rgba8i_rgba8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028884, VkglTestCase_028884_1, VkglTestCase_028884_2);

#define VkglTestCase_028885_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028885_2 "wclass_32_bits.rgba8i_rgba8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028885, VkglTestCase_028885_1, VkglTestCase_028885_2);

#define VkglTestCase_028886_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028886_2 "ss_32_bits.rgba8i_rgba8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028886, VkglTestCase_028886_1, VkglTestCase_028886_2);

#define VkglTestCase_028887_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028887_2 "lass_32_bits.rgba8i_rgba8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028887, VkglTestCase_028887_1, VkglTestCase_028887_2);
