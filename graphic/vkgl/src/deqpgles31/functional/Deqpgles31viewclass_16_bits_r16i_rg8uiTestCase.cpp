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
#include "../ActsDeqpgles310032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031885_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031885_2 "iewclass_16_bits.r16i_rg8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031885, VkglTestCase_031885_1, VkglTestCase_031885_2);

#define VkglTestCase_031886_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031886_2 "iewclass_16_bits.r16i_rg8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031886, VkglTestCase_031886_1, VkglTestCase_031886_2);

#define VkglTestCase_031887_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031887_2 "viewclass_16_bits.r16i_rg8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031887, VkglTestCase_031887_1, VkglTestCase_031887_2);

#define VkglTestCase_031888_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031888_2 "class_16_bits.r16i_rg8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031888, VkglTestCase_031888_1, VkglTestCase_031888_2);

#define VkglTestCase_031889_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031889_2 "ewclass_16_bits.r16i_rg8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031889, VkglTestCase_031889_1, VkglTestCase_031889_2);

#define VkglTestCase_031890_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031890_2 "iewclass_16_bits.r16i_rg8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031890, VkglTestCase_031890_1, VkglTestCase_031890_2);

#define VkglTestCase_031891_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031891_2 "iewclass_16_bits.r16i_rg8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031891, VkglTestCase_031891_1, VkglTestCase_031891_2);

#define VkglTestCase_031892_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031892_2 "viewclass_16_bits.r16i_rg8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031892, VkglTestCase_031892_1, VkglTestCase_031892_2);

#define VkglTestCase_031893_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031893_2 "class_16_bits.r16i_rg8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031893, VkglTestCase_031893_1, VkglTestCase_031893_2);

#define VkglTestCase_031894_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031894_2 "ewclass_16_bits.r16i_rg8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031894, VkglTestCase_031894_1, VkglTestCase_031894_2);

#define VkglTestCase_031895_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031895_2 "viewclass_16_bits.r16i_rg8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031895, VkglTestCase_031895_1, VkglTestCase_031895_2);

#define VkglTestCase_031896_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031896_2 "viewclass_16_bits.r16i_rg8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031896, VkglTestCase_031896_1, VkglTestCase_031896_2);

#define VkglTestCase_031897_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031897_2 ".viewclass_16_bits.r16i_rg8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031897, VkglTestCase_031897_1, VkglTestCase_031897_2);

#define VkglTestCase_031898_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031898_2 "wclass_16_bits.r16i_rg8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031898, VkglTestCase_031898_1, VkglTestCase_031898_2);

#define VkglTestCase_031899_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031899_2 "iewclass_16_bits.r16i_rg8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031899, VkglTestCase_031899_1, VkglTestCase_031899_2);

#define VkglTestCase_031900_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031900_2 "class_16_bits.r16i_rg8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031900, VkglTestCase_031900_1, VkglTestCase_031900_2);

#define VkglTestCase_031901_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031901_2 "class_16_bits.r16i_rg8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031901, VkglTestCase_031901_1, VkglTestCase_031901_2);

#define VkglTestCase_031902_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031902_2 "wclass_16_bits.r16i_rg8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031902, VkglTestCase_031902_1, VkglTestCase_031902_2);

#define VkglTestCase_031903_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031903_2 "ss_16_bits.r16i_rg8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031903, VkglTestCase_031903_1, VkglTestCase_031903_2);

#define VkglTestCase_031904_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031904_2 "lass_16_bits.r16i_rg8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031904, VkglTestCase_031904_1, VkglTestCase_031904_2);

#define VkglTestCase_031905_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031905_2 "ewclass_16_bits.r16i_rg8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031905, VkglTestCase_031905_1, VkglTestCase_031905_2);

#define VkglTestCase_031906_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031906_2 "ewclass_16_bits.r16i_rg8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031906, VkglTestCase_031906_1, VkglTestCase_031906_2);

#define VkglTestCase_031907_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031907_2 "iewclass_16_bits.r16i_rg8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031907, VkglTestCase_031907_1, VkglTestCase_031907_2);

#define VkglTestCase_031908_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031908_2 "lass_16_bits.r16i_rg8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031908, VkglTestCase_031908_1, VkglTestCase_031908_2);

#define VkglTestCase_031909_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031909_2 "class_16_bits.r16i_rg8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031909, VkglTestCase_031909_1, VkglTestCase_031909_2);
