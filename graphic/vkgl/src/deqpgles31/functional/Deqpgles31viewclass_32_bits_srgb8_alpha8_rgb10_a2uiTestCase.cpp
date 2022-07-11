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

#define VkglTestCase_030845_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030845_2 "ss_32_bits.srgb8_alpha8_rgb10_a2ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030845, VkglTestCase_030845_1, VkglTestCase_030845_2);

#define VkglTestCase_030846_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030846_2 "ss_32_bits.srgb8_alpha8_rgb10_a2ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030846, VkglTestCase_030846_1, VkglTestCase_030846_2);

#define VkglTestCase_030847_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030847_2 "ass_32_bits.srgb8_alpha8_rgb10_a2ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030847, VkglTestCase_030847_1, VkglTestCase_030847_2);

#define VkglTestCase_030848_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030848_2 "32_bits.srgb8_alpha8_rgb10_a2ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030848, VkglTestCase_030848_1, VkglTestCase_030848_2);

#define VkglTestCase_030849_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030849_2 "_32_bits.srgb8_alpha8_rgb10_a2ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030849, VkglTestCase_030849_1, VkglTestCase_030849_2);

#define VkglTestCase_030850_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030850_2 "ss_32_bits.srgb8_alpha8_rgb10_a2ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030850, VkglTestCase_030850_1, VkglTestCase_030850_2);

#define VkglTestCase_030851_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030851_2 "ss_32_bits.srgb8_alpha8_rgb10_a2ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030851, VkglTestCase_030851_1, VkglTestCase_030851_2);

#define VkglTestCase_030852_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030852_2 "ass_32_bits.srgb8_alpha8_rgb10_a2ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030852, VkglTestCase_030852_1, VkglTestCase_030852_2);

#define VkglTestCase_030853_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030853_2 "32_bits.srgb8_alpha8_rgb10_a2ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030853, VkglTestCase_030853_1, VkglTestCase_030853_2);

#define VkglTestCase_030854_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030854_2 "_32_bits.srgb8_alpha8_rgb10_a2ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030854, VkglTestCase_030854_1, VkglTestCase_030854_2);

#define VkglTestCase_030855_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030855_2 "ass_32_bits.srgb8_alpha8_rgb10_a2ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030855, VkglTestCase_030855_1, VkglTestCase_030855_2);

#define VkglTestCase_030856_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030856_2 "ass_32_bits.srgb8_alpha8_rgb10_a2ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030856, VkglTestCase_030856_1, VkglTestCase_030856_2);

#define VkglTestCase_030857_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030857_2 "lass_32_bits.srgb8_alpha8_rgb10_a2ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030857, VkglTestCase_030857_1, VkglTestCase_030857_2);

#define VkglTestCase_030858_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030858_2 "_32_bits.srgb8_alpha8_rgb10_a2ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030858, VkglTestCase_030858_1, VkglTestCase_030858_2);

#define VkglTestCase_030859_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030859_2 "s_32_bits.srgb8_alpha8_rgb10_a2ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030859, VkglTestCase_030859_1, VkglTestCase_030859_2);

#define VkglTestCase_030860_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030860_2 "32_bits.srgb8_alpha8_rgb10_a2ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030860, VkglTestCase_030860_1, VkglTestCase_030860_2);

#define VkglTestCase_030861_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030861_2 "32_bits.srgb8_alpha8_rgb10_a2ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030861, VkglTestCase_030861_1, VkglTestCase_030861_2);

#define VkglTestCase_030862_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030862_2 "_32_bits.srgb8_alpha8_rgb10_a2ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030862, VkglTestCase_030862_1, VkglTestCase_030862_2);

#define VkglTestCase_030863_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_030863_2 "bits.srgb8_alpha8_rgb10_a2ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030863, VkglTestCase_030863_1, VkglTestCase_030863_2);

#define VkglTestCase_030864_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030864_2 "_bits.srgb8_alpha8_rgb10_a2ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030864, VkglTestCase_030864_1, VkglTestCase_030864_2);

#define VkglTestCase_030865_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030865_2 "_32_bits.srgb8_alpha8_rgb10_a2ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030865, VkglTestCase_030865_1, VkglTestCase_030865_2);

#define VkglTestCase_030866_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030866_2 "_32_bits.srgb8_alpha8_rgb10_a2ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030866, VkglTestCase_030866_1, VkglTestCase_030866_2);

#define VkglTestCase_030867_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030867_2 "s_32_bits.srgb8_alpha8_rgb10_a2ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030867, VkglTestCase_030867_1, VkglTestCase_030867_2);

#define VkglTestCase_030868_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030868_2 "_bits.srgb8_alpha8_rgb10_a2ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030868, VkglTestCase_030868_1, VkglTestCase_030868_2);

#define VkglTestCase_030869_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030869_2 "32_bits.srgb8_alpha8_rgb10_a2ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030869, VkglTestCase_030869_1, VkglTestCase_030869_2);
