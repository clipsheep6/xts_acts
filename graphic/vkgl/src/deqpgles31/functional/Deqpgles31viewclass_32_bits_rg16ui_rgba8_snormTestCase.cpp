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

#define VkglTestCase_028283_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028283_2 "lass_32_bits.rg16ui_rgba8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028283, VkglTestCase_028283_1, VkglTestCase_028283_2);

#define VkglTestCase_028284_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028284_2 "lass_32_bits.rg16ui_rgba8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028284, VkglTestCase_028284_1, VkglTestCase_028284_2);

#define VkglTestCase_028285_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028285_2 "class_32_bits.rg16ui_rgba8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028285, VkglTestCase_028285_1, VkglTestCase_028285_2);

#define VkglTestCase_028286_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028286_2 "s_32_bits.rg16ui_rgba8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028286, VkglTestCase_028286_1, VkglTestCase_028286_2);

#define VkglTestCase_028287_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028287_2 "lass_32_bits.rg16ui_rgba8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028287, VkglTestCase_028287_1, VkglTestCase_028287_2);

#define VkglTestCase_028288_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028288_2 "lass_32_bits.rg16ui_rgba8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028288, VkglTestCase_028288_1, VkglTestCase_028288_2);

#define VkglTestCase_028289_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028289_2 "class_32_bits.rg16ui_rgba8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028289, VkglTestCase_028289_1, VkglTestCase_028289_2);

#define VkglTestCase_028290_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028290_2 "s_32_bits.rg16ui_rgba8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028290, VkglTestCase_028290_1, VkglTestCase_028290_2);

#define VkglTestCase_028291_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028291_2 "class_32_bits.rg16ui_rgba8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028291, VkglTestCase_028291_1, VkglTestCase_028291_2);

#define VkglTestCase_028292_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028292_2 "class_32_bits.rg16ui_rgba8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028292, VkglTestCase_028292_1, VkglTestCase_028292_2);

#define VkglTestCase_028293_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028293_2 "wclass_32_bits.rg16ui_rgba8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028293, VkglTestCase_028293_1, VkglTestCase_028293_2);

#define VkglTestCase_028294_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028294_2 "ss_32_bits.rg16ui_rgba8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028294, VkglTestCase_028294_1, VkglTestCase_028294_2);

#define VkglTestCase_028295_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028295_2 "s_32_bits.rg16ui_rgba8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028295, VkglTestCase_028295_1, VkglTestCase_028295_2);

#define VkglTestCase_028296_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028296_2 "s_32_bits.rg16ui_rgba8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028296, VkglTestCase_028296_1, VkglTestCase_028296_2);

#define VkglTestCase_028297_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028297_2 "ss_32_bits.rg16ui_rgba8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028297, VkglTestCase_028297_1, VkglTestCase_028297_2);

#define VkglTestCase_028298_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_028298_2 "2_bits.rg16ui_rgba8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028298, VkglTestCase_028298_1, VkglTestCase_028298_2);

#define VkglTestCase_028299_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028299_2 "ass_32_bits.rg16ui_rgba8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028299, VkglTestCase_028299_1, VkglTestCase_028299_2);

#define VkglTestCase_028300_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028300_2 "ass_32_bits.rg16ui_rgba8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028300, VkglTestCase_028300_1, VkglTestCase_028300_2);

#define VkglTestCase_028301_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028301_2 "lass_32_bits.rg16ui_rgba8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028301, VkglTestCase_028301_1, VkglTestCase_028301_2);

#define VkglTestCase_028302_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028302_2 "_32_bits.rg16ui_rgba8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028302, VkglTestCase_028302_1, VkglTestCase_028302_2);
