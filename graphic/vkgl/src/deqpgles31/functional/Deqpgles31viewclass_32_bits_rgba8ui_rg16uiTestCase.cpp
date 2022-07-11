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
#include "../ActsDeqpgles310030TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_029163_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029163_2 "wclass_32_bits.rgba8ui_rg16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029163, VkglTestCase_029163_1, VkglTestCase_029163_2);

#define VkglTestCase_029164_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029164_2 "wclass_32_bits.rgba8ui_rg16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029164, VkglTestCase_029164_1, VkglTestCase_029164_2);

#define VkglTestCase_029165_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029165_2 "ewclass_32_bits.rgba8ui_rg16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029165, VkglTestCase_029165_1, VkglTestCase_029165_2);

#define VkglTestCase_029166_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029166_2 "ass_32_bits.rgba8ui_rg16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029166, VkglTestCase_029166_1, VkglTestCase_029166_2);

#define VkglTestCase_029167_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029167_2 "class_32_bits.rgba8ui_rg16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029167, VkglTestCase_029167_1, VkglTestCase_029167_2);

#define VkglTestCase_029168_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029168_2 "wclass_32_bits.rgba8ui_rg16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029168, VkglTestCase_029168_1, VkglTestCase_029168_2);

#define VkglTestCase_029169_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029169_2 "wclass_32_bits.rgba8ui_rg16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029169, VkglTestCase_029169_1, VkglTestCase_029169_2);

#define VkglTestCase_029170_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029170_2 "ewclass_32_bits.rgba8ui_rg16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029170, VkglTestCase_029170_1, VkglTestCase_029170_2);

#define VkglTestCase_029171_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029171_2 "ass_32_bits.rgba8ui_rg16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029171, VkglTestCase_029171_1, VkglTestCase_029171_2);

#define VkglTestCase_029172_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029172_2 "class_32_bits.rgba8ui_rg16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029172, VkglTestCase_029172_1, VkglTestCase_029172_2);

#define VkglTestCase_029173_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029173_2 "ewclass_32_bits.rgba8ui_rg16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029173, VkglTestCase_029173_1, VkglTestCase_029173_2);

#define VkglTestCase_029174_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029174_2 "ewclass_32_bits.rgba8ui_rg16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029174, VkglTestCase_029174_1, VkglTestCase_029174_2);

#define VkglTestCase_029175_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029175_2 "iewclass_32_bits.rgba8ui_rg16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029175, VkglTestCase_029175_1, VkglTestCase_029175_2);

#define VkglTestCase_029176_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029176_2 "lass_32_bits.rgba8ui_rg16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029176, VkglTestCase_029176_1, VkglTestCase_029176_2);

#define VkglTestCase_029177_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029177_2 "wclass_32_bits.rgba8ui_rg16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029177, VkglTestCase_029177_1, VkglTestCase_029177_2);

#define VkglTestCase_029178_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029178_2 "ass_32_bits.rgba8ui_rg16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029178, VkglTestCase_029178_1, VkglTestCase_029178_2);

#define VkglTestCase_029179_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029179_2 "ass_32_bits.rgba8ui_rg16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029179, VkglTestCase_029179_1, VkglTestCase_029179_2);

#define VkglTestCase_029180_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029180_2 "lass_32_bits.rgba8ui_rg16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029180, VkglTestCase_029180_1, VkglTestCase_029180_2);

#define VkglTestCase_029181_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029181_2 "_32_bits.rgba8ui_rg16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029181, VkglTestCase_029181_1, VkglTestCase_029181_2);

#define VkglTestCase_029182_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029182_2 "ss_32_bits.rgba8ui_rg16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029182, VkglTestCase_029182_1, VkglTestCase_029182_2);

#define VkglTestCase_029183_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029183_2 "class_32_bits.rgba8ui_rg16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029183, VkglTestCase_029183_1, VkglTestCase_029183_2);

#define VkglTestCase_029184_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029184_2 "class_32_bits.rgba8ui_rg16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029184, VkglTestCase_029184_1, VkglTestCase_029184_2);

#define VkglTestCase_029185_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029185_2 "wclass_32_bits.rgba8ui_rg16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029185, VkglTestCase_029185_1, VkglTestCase_029185_2);

#define VkglTestCase_029186_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029186_2 "ss_32_bits.rgba8ui_rg16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029186, VkglTestCase_029186_1, VkglTestCase_029186_2);

#define VkglTestCase_029187_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029187_2 "ass_32_bits.rgba8ui_rg16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029187, VkglTestCase_029187_1, VkglTestCase_029187_2);
