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

#define VkglTestCase_025869_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025869_2 "ewclass_64_bits.rg32ui_rg32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025869, VkglTestCase_025869_1, VkglTestCase_025869_2);

#define VkglTestCase_025870_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025870_2 "ewclass_64_bits.rg32ui_rg32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025870, VkglTestCase_025870_1, VkglTestCase_025870_2);

#define VkglTestCase_025871_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025871_2 "iewclass_64_bits.rg32ui_rg32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025871, VkglTestCase_025871_1, VkglTestCase_025871_2);

#define VkglTestCase_025872_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025872_2 "lass_64_bits.rg32ui_rg32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025872, VkglTestCase_025872_1, VkglTestCase_025872_2);

#define VkglTestCase_025873_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025873_2 "class_64_bits.rg32ui_rg32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025873, VkglTestCase_025873_1, VkglTestCase_025873_2);

#define VkglTestCase_025874_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025874_2 "ewclass_64_bits.rg32ui_rg32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025874, VkglTestCase_025874_1, VkglTestCase_025874_2);

#define VkglTestCase_025875_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025875_2 "ewclass_64_bits.rg32ui_rg32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025875, VkglTestCase_025875_1, VkglTestCase_025875_2);

#define VkglTestCase_025876_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025876_2 "iewclass_64_bits.rg32ui_rg32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025876, VkglTestCase_025876_1, VkglTestCase_025876_2);

#define VkglTestCase_025877_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025877_2 "lass_64_bits.rg32ui_rg32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025877, VkglTestCase_025877_1, VkglTestCase_025877_2);

#define VkglTestCase_025878_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025878_2 "class_64_bits.rg32ui_rg32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025878, VkglTestCase_025878_1, VkglTestCase_025878_2);

#define VkglTestCase_025879_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025879_2 "iewclass_64_bits.rg32ui_rg32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025879, VkglTestCase_025879_1, VkglTestCase_025879_2);

#define VkglTestCase_025880_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025880_2 "iewclass_64_bits.rg32ui_rg32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025880, VkglTestCase_025880_1, VkglTestCase_025880_2);

#define VkglTestCase_025881_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025881_2 "viewclass_64_bits.rg32ui_rg32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025881, VkglTestCase_025881_1, VkglTestCase_025881_2);

#define VkglTestCase_025882_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025882_2 "class_64_bits.rg32ui_rg32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025882, VkglTestCase_025882_1, VkglTestCase_025882_2);

#define VkglTestCase_025883_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025883_2 "wclass_64_bits.rg32ui_rg32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025883, VkglTestCase_025883_1, VkglTestCase_025883_2);

#define VkglTestCase_025884_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025884_2 "lass_64_bits.rg32ui_rg32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025884, VkglTestCase_025884_1, VkglTestCase_025884_2);

#define VkglTestCase_025885_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025885_2 "lass_64_bits.rg32ui_rg32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025885, VkglTestCase_025885_1, VkglTestCase_025885_2);

#define VkglTestCase_025886_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025886_2 "class_64_bits.rg32ui_rg32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025886, VkglTestCase_025886_1, VkglTestCase_025886_2);

#define VkglTestCase_025887_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025887_2 "s_64_bits.rg32ui_rg32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025887, VkglTestCase_025887_1, VkglTestCase_025887_2);

#define VkglTestCase_025888_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025888_2 "ss_64_bits.rg32ui_rg32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025888, VkglTestCase_025888_1, VkglTestCase_025888_2);

#define VkglTestCase_025889_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025889_2 "class_64_bits.rg32ui_rg32ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025889, VkglTestCase_025889_1, VkglTestCase_025889_2);

#define VkglTestCase_025890_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025890_2 "class_64_bits.rg32ui_rg32ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025890, VkglTestCase_025890_1, VkglTestCase_025890_2);

#define VkglTestCase_025891_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025891_2 "wclass_64_bits.rg32ui_rg32ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025891, VkglTestCase_025891_1, VkglTestCase_025891_2);

#define VkglTestCase_025892_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025892_2 "ss_64_bits.rg32ui_rg32ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025892, VkglTestCase_025892_1, VkglTestCase_025892_2);

#define VkglTestCase_025893_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025893_2 "lass_64_bits.rg32ui_rg32ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025893, VkglTestCase_025893_1, VkglTestCase_025893_2);
