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

#define VkglTestCase_025419_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025419_2 "lass_128_bits.rgba32ui_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025419, VkglTestCase_025419_1, VkglTestCase_025419_2);

#define VkglTestCase_025420_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025420_2 "lass_128_bits.rgba32ui_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025420, VkglTestCase_025420_1, VkglTestCase_025420_2);

#define VkglTestCase_025421_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025421_2 "class_128_bits.rgba32ui_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025421, VkglTestCase_025421_1, VkglTestCase_025421_2);

#define VkglTestCase_025422_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025422_2 "s_128_bits.rgba32ui_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025422, VkglTestCase_025422_1, VkglTestCase_025422_2);

#define VkglTestCase_025423_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025423_2 "ass_128_bits.rgba32ui_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025423, VkglTestCase_025423_1, VkglTestCase_025423_2);

#define VkglTestCase_025424_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025424_2 "lass_128_bits.rgba32ui_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025424, VkglTestCase_025424_1, VkglTestCase_025424_2);

#define VkglTestCase_025425_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025425_2 "lass_128_bits.rgba32ui_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025425, VkglTestCase_025425_1, VkglTestCase_025425_2);

#define VkglTestCase_025426_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025426_2 "class_128_bits.rgba32ui_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025426, VkglTestCase_025426_1, VkglTestCase_025426_2);

#define VkglTestCase_025427_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025427_2 "s_128_bits.rgba32ui_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025427, VkglTestCase_025427_1, VkglTestCase_025427_2);

#define VkglTestCase_025428_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025428_2 "ass_128_bits.rgba32ui_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025428, VkglTestCase_025428_1, VkglTestCase_025428_2);

#define VkglTestCase_025429_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025429_2 "class_128_bits.rgba32ui_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025429, VkglTestCase_025429_1, VkglTestCase_025429_2);

#define VkglTestCase_025430_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025430_2 "class_128_bits.rgba32ui_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025430, VkglTestCase_025430_1, VkglTestCase_025430_2);

#define VkglTestCase_025431_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025431_2 "wclass_128_bits.rgba32ui_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025431, VkglTestCase_025431_1, VkglTestCase_025431_2);

#define VkglTestCase_025432_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025432_2 "ss_128_bits.rgba32ui_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025432, VkglTestCase_025432_1, VkglTestCase_025432_2);

#define VkglTestCase_025433_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025433_2 "lass_128_bits.rgba32ui_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025433, VkglTestCase_025433_1, VkglTestCase_025433_2);

#define VkglTestCase_025434_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025434_2 "s_128_bits.rgba32ui_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025434, VkglTestCase_025434_1, VkglTestCase_025434_2);

#define VkglTestCase_025435_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025435_2 "s_128_bits.rgba32ui_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025435, VkglTestCase_025435_1, VkglTestCase_025435_2);

#define VkglTestCase_025436_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025436_2 "ss_128_bits.rgba32ui_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025436, VkglTestCase_025436_1, VkglTestCase_025436_2);

#define VkglTestCase_025437_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_1"
#define VkglTestCase_025437_2 "28_bits.rgba32ui_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025437, VkglTestCase_025437_1, VkglTestCase_025437_2);

#define VkglTestCase_025438_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025438_2 "_128_bits.rgba32ui_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025438, VkglTestCase_025438_1, VkglTestCase_025438_2);

#define VkglTestCase_025439_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025439_2 "ass_128_bits.rgba32ui_rgba32ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025439, VkglTestCase_025439_1, VkglTestCase_025439_2);

#define VkglTestCase_025440_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025440_2 "ass_128_bits.rgba32ui_rgba32ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025440, VkglTestCase_025440_1, VkglTestCase_025440_2);

#define VkglTestCase_025441_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025441_2 "lass_128_bits.rgba32ui_rgba32ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025441, VkglTestCase_025441_1, VkglTestCase_025441_2);

#define VkglTestCase_025442_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025442_2 "_128_bits.rgba32ui_rgba32ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025442, VkglTestCase_025442_1, VkglTestCase_025442_2);

#define VkglTestCase_025443_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025443_2 "s_128_bits.rgba32ui_rgba32ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025443, VkglTestCase_025443_1, VkglTestCase_025443_2);
