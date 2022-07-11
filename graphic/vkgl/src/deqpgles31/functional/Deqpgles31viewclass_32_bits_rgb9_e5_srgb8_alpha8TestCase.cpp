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

#define VkglTestCase_031156_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031156_2 "ass_32_bits.rgb9_e5_srgb8_alpha8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031156, VkglTestCase_031156_1, VkglTestCase_031156_2);

#define VkglTestCase_031157_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031157_2 "ass_32_bits.rgb9_e5_srgb8_alpha8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031157, VkglTestCase_031157_1, VkglTestCase_031157_2);

#define VkglTestCase_031158_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031158_2 "lass_32_bits.rgb9_e5_srgb8_alpha8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031158, VkglTestCase_031158_1, VkglTestCase_031158_2);

#define VkglTestCase_031159_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031159_2 "_32_bits.rgb9_e5_srgb8_alpha8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031159, VkglTestCase_031159_1, VkglTestCase_031159_2);

#define VkglTestCase_031160_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031160_2 "ss_32_bits.rgb9_e5_srgb8_alpha8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031160, VkglTestCase_031160_1, VkglTestCase_031160_2);

#define VkglTestCase_031161_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031161_2 "ass_32_bits.rgb9_e5_srgb8_alpha8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031161, VkglTestCase_031161_1, VkglTestCase_031161_2);

#define VkglTestCase_031162_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031162_2 "ass_32_bits.rgb9_e5_srgb8_alpha8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031162, VkglTestCase_031162_1, VkglTestCase_031162_2);

#define VkglTestCase_031163_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031163_2 "lass_32_bits.rgb9_e5_srgb8_alpha8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031163, VkglTestCase_031163_1, VkglTestCase_031163_2);

#define VkglTestCase_031164_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031164_2 "_32_bits.rgb9_e5_srgb8_alpha8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031164, VkglTestCase_031164_1, VkglTestCase_031164_2);

#define VkglTestCase_031165_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031165_2 "ss_32_bits.rgb9_e5_srgb8_alpha8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031165, VkglTestCase_031165_1, VkglTestCase_031165_2);

#define VkglTestCase_031166_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031166_2 "lass_32_bits.rgb9_e5_srgb8_alpha8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031166, VkglTestCase_031166_1, VkglTestCase_031166_2);

#define VkglTestCase_031167_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031167_2 "lass_32_bits.rgb9_e5_srgb8_alpha8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031167, VkglTestCase_031167_1, VkglTestCase_031167_2);

#define VkglTestCase_031168_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031168_2 "class_32_bits.rgb9_e5_srgb8_alpha8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031168, VkglTestCase_031168_1, VkglTestCase_031168_2);

#define VkglTestCase_031169_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031169_2 "s_32_bits.rgb9_e5_srgb8_alpha8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031169, VkglTestCase_031169_1, VkglTestCase_031169_2);

#define VkglTestCase_031170_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031170_2 "ass_32_bits.rgb9_e5_srgb8_alpha8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031170, VkglTestCase_031170_1, VkglTestCase_031170_2);

#define VkglTestCase_031171_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031171_2 "_32_bits.rgb9_e5_srgb8_alpha8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031171, VkglTestCase_031171_1, VkglTestCase_031171_2);

#define VkglTestCase_031172_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031172_2 "_32_bits.rgb9_e5_srgb8_alpha8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031172, VkglTestCase_031172_1, VkglTestCase_031172_2);

#define VkglTestCase_031173_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031173_2 "s_32_bits.rgb9_e5_srgb8_alpha8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031173, VkglTestCase_031173_1, VkglTestCase_031173_2);

#define VkglTestCase_031174_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_031174_2 "_bits.rgb9_e5_srgb8_alpha8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031174, VkglTestCase_031174_1, VkglTestCase_031174_2);

#define VkglTestCase_031175_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_031175_2 "32_bits.rgb9_e5_srgb8_alpha8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031175, VkglTestCase_031175_1, VkglTestCase_031175_2);
