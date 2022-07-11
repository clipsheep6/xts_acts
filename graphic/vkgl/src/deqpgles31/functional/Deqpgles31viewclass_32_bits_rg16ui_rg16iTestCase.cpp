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

#define VkglTestCase_028088_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028088_2 "ewclass_32_bits.rg16ui_rg16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028088, VkglTestCase_028088_1, VkglTestCase_028088_2);

#define VkglTestCase_028089_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028089_2 "ewclass_32_bits.rg16ui_rg16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028089, VkglTestCase_028089_1, VkglTestCase_028089_2);

#define VkglTestCase_028090_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028090_2 "iewclass_32_bits.rg16ui_rg16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028090, VkglTestCase_028090_1, VkglTestCase_028090_2);

#define VkglTestCase_028091_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028091_2 "lass_32_bits.rg16ui_rg16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028091, VkglTestCase_028091_1, VkglTestCase_028091_2);

#define VkglTestCase_028092_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028092_2 "wclass_32_bits.rg16ui_rg16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028092, VkglTestCase_028092_1, VkglTestCase_028092_2);

#define VkglTestCase_028093_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028093_2 "ewclass_32_bits.rg16ui_rg16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028093, VkglTestCase_028093_1, VkglTestCase_028093_2);

#define VkglTestCase_028094_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028094_2 "ewclass_32_bits.rg16ui_rg16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028094, VkglTestCase_028094_1, VkglTestCase_028094_2);

#define VkglTestCase_028095_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028095_2 "iewclass_32_bits.rg16ui_rg16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028095, VkglTestCase_028095_1, VkglTestCase_028095_2);

#define VkglTestCase_028096_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028096_2 "lass_32_bits.rg16ui_rg16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028096, VkglTestCase_028096_1, VkglTestCase_028096_2);

#define VkglTestCase_028097_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028097_2 "wclass_32_bits.rg16ui_rg16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028097, VkglTestCase_028097_1, VkglTestCase_028097_2);

#define VkglTestCase_028098_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028098_2 "iewclass_32_bits.rg16ui_rg16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028098, VkglTestCase_028098_1, VkglTestCase_028098_2);

#define VkglTestCase_028099_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028099_2 "iewclass_32_bits.rg16ui_rg16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028099, VkglTestCase_028099_1, VkglTestCase_028099_2);

#define VkglTestCase_028100_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028100_2 "viewclass_32_bits.rg16ui_rg16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028100, VkglTestCase_028100_1, VkglTestCase_028100_2);

#define VkglTestCase_028101_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028101_2 "class_32_bits.rg16ui_rg16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028101, VkglTestCase_028101_1, VkglTestCase_028101_2);

#define VkglTestCase_028102_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028102_2 "ewclass_32_bits.rg16ui_rg16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028102, VkglTestCase_028102_1, VkglTestCase_028102_2);

#define VkglTestCase_028103_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028103_2 "lass_32_bits.rg16ui_rg16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028103, VkglTestCase_028103_1, VkglTestCase_028103_2);

#define VkglTestCase_028104_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028104_2 "lass_32_bits.rg16ui_rg16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028104, VkglTestCase_028104_1, VkglTestCase_028104_2);

#define VkglTestCase_028105_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028105_2 "class_32_bits.rg16ui_rg16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028105, VkglTestCase_028105_1, VkglTestCase_028105_2);

#define VkglTestCase_028106_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028106_2 "s_32_bits.rg16ui_rg16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028106, VkglTestCase_028106_1, VkglTestCase_028106_2);

#define VkglTestCase_028107_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028107_2 "ass_32_bits.rg16ui_rg16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028107, VkglTestCase_028107_1, VkglTestCase_028107_2);

#define VkglTestCase_028108_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028108_2 "wclass_32_bits.rg16ui_rg16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028108, VkglTestCase_028108_1, VkglTestCase_028108_2);

#define VkglTestCase_028109_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028109_2 "wclass_32_bits.rg16ui_rg16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028109, VkglTestCase_028109_1, VkglTestCase_028109_2);

#define VkglTestCase_028110_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028110_2 "ewclass_32_bits.rg16ui_rg16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028110, VkglTestCase_028110_1, VkglTestCase_028110_2);

#define VkglTestCase_028111_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028111_2 "ass_32_bits.rg16ui_rg16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028111, VkglTestCase_028111_1, VkglTestCase_028111_2);

#define VkglTestCase_028112_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028112_2 "lass_32_bits.rg16ui_rg16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028112, VkglTestCase_028112_1, VkglTestCase_028112_2);
