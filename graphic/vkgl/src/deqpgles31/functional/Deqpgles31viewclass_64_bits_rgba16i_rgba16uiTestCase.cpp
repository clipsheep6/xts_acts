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

#define VkglTestCase_026175_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026175_2 "class_64_bits.rgba16i_rgba16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026175, VkglTestCase_026175_1, VkglTestCase_026175_2);

#define VkglTestCase_026176_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026176_2 "class_64_bits.rgba16i_rgba16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026176, VkglTestCase_026176_1, VkglTestCase_026176_2);

#define VkglTestCase_026177_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026177_2 "wclass_64_bits.rgba16i_rgba16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026177, VkglTestCase_026177_1, VkglTestCase_026177_2);

#define VkglTestCase_026178_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026178_2 "ss_64_bits.rgba16i_rgba16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026178, VkglTestCase_026178_1, VkglTestCase_026178_2);

#define VkglTestCase_026179_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026179_2 "lass_64_bits.rgba16i_rgba16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026179, VkglTestCase_026179_1, VkglTestCase_026179_2);

#define VkglTestCase_026180_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026180_2 "class_64_bits.rgba16i_rgba16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026180, VkglTestCase_026180_1, VkglTestCase_026180_2);

#define VkglTestCase_026181_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026181_2 "class_64_bits.rgba16i_rgba16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026181, VkglTestCase_026181_1, VkglTestCase_026181_2);

#define VkglTestCase_026182_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026182_2 "wclass_64_bits.rgba16i_rgba16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026182, VkglTestCase_026182_1, VkglTestCase_026182_2);

#define VkglTestCase_026183_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026183_2 "ss_64_bits.rgba16i_rgba16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026183, VkglTestCase_026183_1, VkglTestCase_026183_2);

#define VkglTestCase_026184_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026184_2 "lass_64_bits.rgba16i_rgba16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026184, VkglTestCase_026184_1, VkglTestCase_026184_2);

#define VkglTestCase_026185_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026185_2 "wclass_64_bits.rgba16i_rgba16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026185, VkglTestCase_026185_1, VkglTestCase_026185_2);

#define VkglTestCase_026186_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026186_2 "wclass_64_bits.rgba16i_rgba16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026186, VkglTestCase_026186_1, VkglTestCase_026186_2);

#define VkglTestCase_026187_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026187_2 "ewclass_64_bits.rgba16i_rgba16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026187, VkglTestCase_026187_1, VkglTestCase_026187_2);

#define VkglTestCase_026188_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026188_2 "ass_64_bits.rgba16i_rgba16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026188, VkglTestCase_026188_1, VkglTestCase_026188_2);

#define VkglTestCase_026189_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026189_2 "class_64_bits.rgba16i_rgba16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026189, VkglTestCase_026189_1, VkglTestCase_026189_2);

#define VkglTestCase_026190_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026190_2 "ss_64_bits.rgba16i_rgba16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026190, VkglTestCase_026190_1, VkglTestCase_026190_2);

#define VkglTestCase_026191_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026191_2 "ss_64_bits.rgba16i_rgba16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026191, VkglTestCase_026191_1, VkglTestCase_026191_2);

#define VkglTestCase_026192_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026192_2 "ass_64_bits.rgba16i_rgba16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026192, VkglTestCase_026192_1, VkglTestCase_026192_2);

#define VkglTestCase_026193_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_026193_2 "64_bits.rgba16i_rgba16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026193, VkglTestCase_026193_1, VkglTestCase_026193_2);

#define VkglTestCase_026194_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026194_2 "s_64_bits.rgba16i_rgba16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026194, VkglTestCase_026194_1, VkglTestCase_026194_2);

#define VkglTestCase_026195_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026195_2 "lass_64_bits.rgba16i_rgba16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026195, VkglTestCase_026195_1, VkglTestCase_026195_2);

#define VkglTestCase_026196_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026196_2 "lass_64_bits.rgba16i_rgba16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026196, VkglTestCase_026196_1, VkglTestCase_026196_2);

#define VkglTestCase_026197_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026197_2 "class_64_bits.rgba16i_rgba16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026197, VkglTestCase_026197_1, VkglTestCase_026197_2);

#define VkglTestCase_026198_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026198_2 "s_64_bits.rgba16i_rgba16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026198, VkglTestCase_026198_1, VkglTestCase_026198_2);

#define VkglTestCase_026199_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026199_2 "ss_64_bits.rgba16i_rgba16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026199, VkglTestCase_026199_1, VkglTestCase_026199_2);
