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

#define VkglTestCase_026540_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026540_2 "iewclass_32_bits.r32f_rg16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026540, VkglTestCase_026540_1, VkglTestCase_026540_2);

#define VkglTestCase_026541_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026541_2 "iewclass_32_bits.r32f_rg16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026541, VkglTestCase_026541_1, VkglTestCase_026541_2);

#define VkglTestCase_026542_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026542_2 "viewclass_32_bits.r32f_rg16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026542, VkglTestCase_026542_1, VkglTestCase_026542_2);

#define VkglTestCase_026543_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026543_2 "class_32_bits.r32f_rg16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026543, VkglTestCase_026543_1, VkglTestCase_026543_2);

#define VkglTestCase_026544_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026544_2 "ewclass_32_bits.r32f_rg16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026544, VkglTestCase_026544_1, VkglTestCase_026544_2);

#define VkglTestCase_026545_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026545_2 "iewclass_32_bits.r32f_rg16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026545, VkglTestCase_026545_1, VkglTestCase_026545_2);

#define VkglTestCase_026546_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026546_2 "iewclass_32_bits.r32f_rg16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026546, VkglTestCase_026546_1, VkglTestCase_026546_2);

#define VkglTestCase_026547_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026547_2 "viewclass_32_bits.r32f_rg16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026547, VkglTestCase_026547_1, VkglTestCase_026547_2);

#define VkglTestCase_026548_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026548_2 "class_32_bits.r32f_rg16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026548, VkglTestCase_026548_1, VkglTestCase_026548_2);

#define VkglTestCase_026549_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026549_2 "ewclass_32_bits.r32f_rg16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026549, VkglTestCase_026549_1, VkglTestCase_026549_2);

#define VkglTestCase_026550_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026550_2 "viewclass_32_bits.r32f_rg16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026550, VkglTestCase_026550_1, VkglTestCase_026550_2);

#define VkglTestCase_026551_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026551_2 "viewclass_32_bits.r32f_rg16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026551, VkglTestCase_026551_1, VkglTestCase_026551_2);

#define VkglTestCase_026552_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026552_2 ".viewclass_32_bits.r32f_rg16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026552, VkglTestCase_026552_1, VkglTestCase_026552_2);

#define VkglTestCase_026553_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026553_2 "wclass_32_bits.r32f_rg16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026553, VkglTestCase_026553_1, VkglTestCase_026553_2);

#define VkglTestCase_026554_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026554_2 "iewclass_32_bits.r32f_rg16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026554, VkglTestCase_026554_1, VkglTestCase_026554_2);

#define VkglTestCase_026555_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026555_2 "class_32_bits.r32f_rg16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026555, VkglTestCase_026555_1, VkglTestCase_026555_2);

#define VkglTestCase_026556_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026556_2 "class_32_bits.r32f_rg16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026556, VkglTestCase_026556_1, VkglTestCase_026556_2);

#define VkglTestCase_026557_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026557_2 "wclass_32_bits.r32f_rg16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026557, VkglTestCase_026557_1, VkglTestCase_026557_2);

#define VkglTestCase_026558_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026558_2 "ss_32_bits.r32f_rg16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026558, VkglTestCase_026558_1, VkglTestCase_026558_2);

#define VkglTestCase_026559_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026559_2 "lass_32_bits.r32f_rg16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026559, VkglTestCase_026559_1, VkglTestCase_026559_2);
