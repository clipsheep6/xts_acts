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

#define VkglTestCase_025394_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025394_2 "class_128_bits.rgba32ui_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025394, VkglTestCase_025394_1, VkglTestCase_025394_2);

#define VkglTestCase_025395_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025395_2 "class_128_bits.rgba32ui_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025395, VkglTestCase_025395_1, VkglTestCase_025395_2);

#define VkglTestCase_025396_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025396_2 "wclass_128_bits.rgba32ui_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025396, VkglTestCase_025396_1, VkglTestCase_025396_2);

#define VkglTestCase_025397_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025397_2 "ss_128_bits.rgba32ui_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025397, VkglTestCase_025397_1, VkglTestCase_025397_2);

#define VkglTestCase_025398_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025398_2 "ass_128_bits.rgba32ui_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025398, VkglTestCase_025398_1, VkglTestCase_025398_2);

#define VkglTestCase_025399_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025399_2 "class_128_bits.rgba32ui_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025399, VkglTestCase_025399_1, VkglTestCase_025399_2);

#define VkglTestCase_025400_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025400_2 "class_128_bits.rgba32ui_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025400, VkglTestCase_025400_1, VkglTestCase_025400_2);

#define VkglTestCase_025401_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025401_2 "wclass_128_bits.rgba32ui_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025401, VkglTestCase_025401_1, VkglTestCase_025401_2);

#define VkglTestCase_025402_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025402_2 "ss_128_bits.rgba32ui_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025402, VkglTestCase_025402_1, VkglTestCase_025402_2);

#define VkglTestCase_025403_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025403_2 "ass_128_bits.rgba32ui_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025403, VkglTestCase_025403_1, VkglTestCase_025403_2);

#define VkglTestCase_025404_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025404_2 "wclass_128_bits.rgba32ui_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025404, VkglTestCase_025404_1, VkglTestCase_025404_2);

#define VkglTestCase_025405_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025405_2 "wclass_128_bits.rgba32ui_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025405, VkglTestCase_025405_1, VkglTestCase_025405_2);

#define VkglTestCase_025406_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025406_2 "ewclass_128_bits.rgba32ui_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025406, VkglTestCase_025406_1, VkglTestCase_025406_2);

#define VkglTestCase_025407_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025407_2 "ass_128_bits.rgba32ui_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025407, VkglTestCase_025407_1, VkglTestCase_025407_2);

#define VkglTestCase_025408_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025408_2 "lass_128_bits.rgba32ui_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025408, VkglTestCase_025408_1, VkglTestCase_025408_2);

#define VkglTestCase_025409_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025409_2 "ss_128_bits.rgba32ui_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025409, VkglTestCase_025409_1, VkglTestCase_025409_2);

#define VkglTestCase_025410_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025410_2 "ss_128_bits.rgba32ui_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025410, VkglTestCase_025410_1, VkglTestCase_025410_2);

#define VkglTestCase_025411_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025411_2 "ass_128_bits.rgba32ui_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025411, VkglTestCase_025411_1, VkglTestCase_025411_2);

#define VkglTestCase_025412_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_025412_2 "128_bits.rgba32ui_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025412, VkglTestCase_025412_1, VkglTestCase_025412_2);

#define VkglTestCase_025413_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025413_2 "_128_bits.rgba32ui_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025413, VkglTestCase_025413_1, VkglTestCase_025413_2);

#define VkglTestCase_025414_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025414_2 "ass_128_bits.rgba32ui_rgba32i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025414, VkglTestCase_025414_1, VkglTestCase_025414_2);

#define VkglTestCase_025415_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025415_2 "ass_128_bits.rgba32ui_rgba32i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025415, VkglTestCase_025415_1, VkglTestCase_025415_2);

#define VkglTestCase_025416_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025416_2 "lass_128_bits.rgba32ui_rgba32i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025416, VkglTestCase_025416_1, VkglTestCase_025416_2);

#define VkglTestCase_025417_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025417_2 "_128_bits.rgba32ui_rgba32i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025417, VkglTestCase_025417_1, VkglTestCase_025417_2);

#define VkglTestCase_025418_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025418_2 "ss_128_bits.rgba32ui_rgba32i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025418, VkglTestCase_025418_1, VkglTestCase_025418_2);
