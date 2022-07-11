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

#define VkglTestCase_031080_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031080_2 "wclass_32_bits.rgb9_e5_rgba8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031080, VkglTestCase_031080_1, VkglTestCase_031080_2);

#define VkglTestCase_031081_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031081_2 "wclass_32_bits.rgb9_e5_rgba8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031081, VkglTestCase_031081_1, VkglTestCase_031081_2);

#define VkglTestCase_031082_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031082_2 "ewclass_32_bits.rgb9_e5_rgba8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031082, VkglTestCase_031082_1, VkglTestCase_031082_2);

#define VkglTestCase_031083_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031083_2 "ass_32_bits.rgb9_e5_rgba8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031083, VkglTestCase_031083_1, VkglTestCase_031083_2);

#define VkglTestCase_031084_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031084_2 "lass_32_bits.rgb9_e5_rgba8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031084, VkglTestCase_031084_1, VkglTestCase_031084_2);

#define VkglTestCase_031085_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031085_2 "wclass_32_bits.rgb9_e5_rgba8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031085, VkglTestCase_031085_1, VkglTestCase_031085_2);

#define VkglTestCase_031086_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031086_2 "wclass_32_bits.rgb9_e5_rgba8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031086, VkglTestCase_031086_1, VkglTestCase_031086_2);

#define VkglTestCase_031087_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031087_2 "ewclass_32_bits.rgb9_e5_rgba8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031087, VkglTestCase_031087_1, VkglTestCase_031087_2);

#define VkglTestCase_031088_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031088_2 "ass_32_bits.rgb9_e5_rgba8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031088, VkglTestCase_031088_1, VkglTestCase_031088_2);

#define VkglTestCase_031089_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031089_2 "lass_32_bits.rgb9_e5_rgba8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031089, VkglTestCase_031089_1, VkglTestCase_031089_2);

#define VkglTestCase_031090_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031090_2 "ewclass_32_bits.rgb9_e5_rgba8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031090, VkglTestCase_031090_1, VkglTestCase_031090_2);

#define VkglTestCase_031091_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031091_2 "ewclass_32_bits.rgb9_e5_rgba8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031091, VkglTestCase_031091_1, VkglTestCase_031091_2);

#define VkglTestCase_031092_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031092_2 "iewclass_32_bits.rgb9_e5_rgba8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031092, VkglTestCase_031092_1, VkglTestCase_031092_2);

#define VkglTestCase_031093_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031093_2 "lass_32_bits.rgb9_e5_rgba8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031093, VkglTestCase_031093_1, VkglTestCase_031093_2);

#define VkglTestCase_031094_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031094_2 "class_32_bits.rgb9_e5_rgba8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031094, VkglTestCase_031094_1, VkglTestCase_031094_2);

#define VkglTestCase_031095_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031095_2 "ass_32_bits.rgb9_e5_rgba8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031095, VkglTestCase_031095_1, VkglTestCase_031095_2);

#define VkglTestCase_031096_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031096_2 "ass_32_bits.rgb9_e5_rgba8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031096, VkglTestCase_031096_1, VkglTestCase_031096_2);

#define VkglTestCase_031097_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031097_2 "lass_32_bits.rgb9_e5_rgba8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031097, VkglTestCase_031097_1, VkglTestCase_031097_2);

#define VkglTestCase_031098_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031098_2 "_32_bits.rgb9_e5_rgba8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031098, VkglTestCase_031098_1, VkglTestCase_031098_2);

#define VkglTestCase_031099_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031099_2 "s_32_bits.rgb9_e5_rgba8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031099, VkglTestCase_031099_1, VkglTestCase_031099_2);
