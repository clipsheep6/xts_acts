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

#define VkglTestCase_028163_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028163_2 "ewclass_32_bits.rg16ui_rgba8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028163, VkglTestCase_028163_1, VkglTestCase_028163_2);

#define VkglTestCase_028164_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028164_2 "ewclass_32_bits.rg16ui_rgba8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028164, VkglTestCase_028164_1, VkglTestCase_028164_2);

#define VkglTestCase_028165_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028165_2 "iewclass_32_bits.rg16ui_rgba8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028165, VkglTestCase_028165_1, VkglTestCase_028165_2);

#define VkglTestCase_028166_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028166_2 "lass_32_bits.rg16ui_rgba8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028166, VkglTestCase_028166_1, VkglTestCase_028166_2);

#define VkglTestCase_028167_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028167_2 "class_32_bits.rg16ui_rgba8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028167, VkglTestCase_028167_1, VkglTestCase_028167_2);

#define VkglTestCase_028168_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028168_2 "ewclass_32_bits.rg16ui_rgba8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028168, VkglTestCase_028168_1, VkglTestCase_028168_2);

#define VkglTestCase_028169_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028169_2 "ewclass_32_bits.rg16ui_rgba8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028169, VkglTestCase_028169_1, VkglTestCase_028169_2);

#define VkglTestCase_028170_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028170_2 "iewclass_32_bits.rg16ui_rgba8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028170, VkglTestCase_028170_1, VkglTestCase_028170_2);

#define VkglTestCase_028171_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028171_2 "lass_32_bits.rg16ui_rgba8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028171, VkglTestCase_028171_1, VkglTestCase_028171_2);

#define VkglTestCase_028172_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028172_2 "class_32_bits.rg16ui_rgba8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028172, VkglTestCase_028172_1, VkglTestCase_028172_2);

#define VkglTestCase_028173_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028173_2 "iewclass_32_bits.rg16ui_rgba8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028173, VkglTestCase_028173_1, VkglTestCase_028173_2);

#define VkglTestCase_028174_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028174_2 "iewclass_32_bits.rg16ui_rgba8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028174, VkglTestCase_028174_1, VkglTestCase_028174_2);

#define VkglTestCase_028175_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028175_2 "viewclass_32_bits.rg16ui_rgba8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028175, VkglTestCase_028175_1, VkglTestCase_028175_2);

#define VkglTestCase_028176_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028176_2 "class_32_bits.rg16ui_rgba8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028176, VkglTestCase_028176_1, VkglTestCase_028176_2);

#define VkglTestCase_028177_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028177_2 "wclass_32_bits.rg16ui_rgba8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028177, VkglTestCase_028177_1, VkglTestCase_028177_2);

#define VkglTestCase_028178_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028178_2 "lass_32_bits.rg16ui_rgba8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028178, VkglTestCase_028178_1, VkglTestCase_028178_2);

#define VkglTestCase_028179_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028179_2 "lass_32_bits.rg16ui_rgba8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028179, VkglTestCase_028179_1, VkglTestCase_028179_2);

#define VkglTestCase_028180_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028180_2 "class_32_bits.rg16ui_rgba8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028180, VkglTestCase_028180_1, VkglTestCase_028180_2);

#define VkglTestCase_028181_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028181_2 "s_32_bits.rg16ui_rgba8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028181, VkglTestCase_028181_1, VkglTestCase_028181_2);

#define VkglTestCase_028182_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028182_2 "ss_32_bits.rg16ui_rgba8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028182, VkglTestCase_028182_1, VkglTestCase_028182_2);

#define VkglTestCase_028183_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028183_2 "class_32_bits.rg16ui_rgba8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028183, VkglTestCase_028183_1, VkglTestCase_028183_2);

#define VkglTestCase_028184_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028184_2 "class_32_bits.rg16ui_rgba8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028184, VkglTestCase_028184_1, VkglTestCase_028184_2);

#define VkglTestCase_028185_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028185_2 "wclass_32_bits.rg16ui_rgba8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028185, VkglTestCase_028185_1, VkglTestCase_028185_2);

#define VkglTestCase_028186_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028186_2 "ss_32_bits.rg16ui_rgba8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028186, VkglTestCase_028186_1, VkglTestCase_028186_2);

#define VkglTestCase_028187_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028187_2 "lass_32_bits.rg16ui_rgba8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028187, VkglTestCase_028187_1, VkglTestCase_028187_2);
