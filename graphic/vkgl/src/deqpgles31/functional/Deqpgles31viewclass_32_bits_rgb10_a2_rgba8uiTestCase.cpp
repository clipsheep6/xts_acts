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

#define VkglTestCase_030170_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030170_2 "class_32_bits.rgb10_a2_rgba8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030170, VkglTestCase_030170_1, VkglTestCase_030170_2);

#define VkglTestCase_030171_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030171_2 "class_32_bits.rgb10_a2_rgba8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030171, VkglTestCase_030171_1, VkglTestCase_030171_2);

#define VkglTestCase_030172_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030172_2 "wclass_32_bits.rgb10_a2_rgba8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030172, VkglTestCase_030172_1, VkglTestCase_030172_2);

#define VkglTestCase_030173_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030173_2 "ss_32_bits.rgb10_a2_rgba8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030173, VkglTestCase_030173_1, VkglTestCase_030173_2);

#define VkglTestCase_030174_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030174_2 "lass_32_bits.rgb10_a2_rgba8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030174, VkglTestCase_030174_1, VkglTestCase_030174_2);

#define VkglTestCase_030175_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030175_2 "class_32_bits.rgb10_a2_rgba8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030175, VkglTestCase_030175_1, VkglTestCase_030175_2);

#define VkglTestCase_030176_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030176_2 "class_32_bits.rgb10_a2_rgba8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030176, VkglTestCase_030176_1, VkglTestCase_030176_2);

#define VkglTestCase_030177_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030177_2 "wclass_32_bits.rgb10_a2_rgba8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030177, VkglTestCase_030177_1, VkglTestCase_030177_2);

#define VkglTestCase_030178_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030178_2 "ss_32_bits.rgb10_a2_rgba8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030178, VkglTestCase_030178_1, VkglTestCase_030178_2);

#define VkglTestCase_030179_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030179_2 "lass_32_bits.rgb10_a2_rgba8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030179, VkglTestCase_030179_1, VkglTestCase_030179_2);

#define VkglTestCase_030180_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030180_2 "wclass_32_bits.rgb10_a2_rgba8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030180, VkglTestCase_030180_1, VkglTestCase_030180_2);

#define VkglTestCase_030181_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030181_2 "wclass_32_bits.rgb10_a2_rgba8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030181, VkglTestCase_030181_1, VkglTestCase_030181_2);

#define VkglTestCase_030182_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030182_2 "ewclass_32_bits.rgb10_a2_rgba8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030182, VkglTestCase_030182_1, VkglTestCase_030182_2);

#define VkglTestCase_030183_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030183_2 "ass_32_bits.rgb10_a2_rgba8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030183, VkglTestCase_030183_1, VkglTestCase_030183_2);

#define VkglTestCase_030184_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030184_2 "class_32_bits.rgb10_a2_rgba8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030184, VkglTestCase_030184_1, VkglTestCase_030184_2);

#define VkglTestCase_030185_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030185_2 "ss_32_bits.rgb10_a2_rgba8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030185, VkglTestCase_030185_1, VkglTestCase_030185_2);

#define VkglTestCase_030186_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030186_2 "ss_32_bits.rgb10_a2_rgba8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030186, VkglTestCase_030186_1, VkglTestCase_030186_2);

#define VkglTestCase_030187_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030187_2 "ass_32_bits.rgb10_a2_rgba8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030187, VkglTestCase_030187_1, VkglTestCase_030187_2);

#define VkglTestCase_030188_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030188_2 "32_bits.rgb10_a2_rgba8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030188, VkglTestCase_030188_1, VkglTestCase_030188_2);

#define VkglTestCase_030189_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030189_2 "s_32_bits.rgb10_a2_rgba8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030189, VkglTestCase_030189_1, VkglTestCase_030189_2);

#define VkglTestCase_030190_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030190_2 "lass_32_bits.rgb10_a2_rgba8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030190, VkglTestCase_030190_1, VkglTestCase_030190_2);

#define VkglTestCase_030191_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030191_2 "lass_32_bits.rgb10_a2_rgba8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030191, VkglTestCase_030191_1, VkglTestCase_030191_2);

#define VkglTestCase_030192_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030192_2 "class_32_bits.rgb10_a2_rgba8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030192, VkglTestCase_030192_1, VkglTestCase_030192_2);

#define VkglTestCase_030193_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030193_2 "s_32_bits.rgb10_a2_rgba8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030193, VkglTestCase_030193_1, VkglTestCase_030193_2);

#define VkglTestCase_030194_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030194_2 "ss_32_bits.rgb10_a2_rgba8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030194, VkglTestCase_030194_1, VkglTestCase_030194_2);
