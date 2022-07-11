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

#define VkglTestCase_028678_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028678_2 "ewclass_32_bits.rgba8_rgb9_e5.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028678, VkglTestCase_028678_1, VkglTestCase_028678_2);

#define VkglTestCase_028679_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028679_2 "ewclass_32_bits.rgba8_rgb9_e5.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028679, VkglTestCase_028679_1, VkglTestCase_028679_2);

#define VkglTestCase_028680_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028680_2 "iewclass_32_bits.rgba8_rgb9_e5.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028680, VkglTestCase_028680_1, VkglTestCase_028680_2);

#define VkglTestCase_028681_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028681_2 "lass_32_bits.rgba8_rgb9_e5.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028681, VkglTestCase_028681_1, VkglTestCase_028681_2);

#define VkglTestCase_028682_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028682_2 "ewclass_32_bits.rgba8_rgb9_e5.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028682, VkglTestCase_028682_1, VkglTestCase_028682_2);

#define VkglTestCase_028683_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028683_2 "ewclass_32_bits.rgba8_rgb9_e5.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028683, VkglTestCase_028683_1, VkglTestCase_028683_2);

#define VkglTestCase_028684_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028684_2 "iewclass_32_bits.rgba8_rgb9_e5.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028684, VkglTestCase_028684_1, VkglTestCase_028684_2);

#define VkglTestCase_028685_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028685_2 "lass_32_bits.rgba8_rgb9_e5.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028685, VkglTestCase_028685_1, VkglTestCase_028685_2);

#define VkglTestCase_028686_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028686_2 "iewclass_32_bits.rgba8_rgb9_e5.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028686, VkglTestCase_028686_1, VkglTestCase_028686_2);

#define VkglTestCase_028687_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028687_2 "iewclass_32_bits.rgba8_rgb9_e5.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028687, VkglTestCase_028687_1, VkglTestCase_028687_2);

#define VkglTestCase_028688_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028688_2 "viewclass_32_bits.rgba8_rgb9_e5.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028688, VkglTestCase_028688_1, VkglTestCase_028688_2);

#define VkglTestCase_028689_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028689_2 "class_32_bits.rgba8_rgb9_e5.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028689, VkglTestCase_028689_1, VkglTestCase_028689_2);

#define VkglTestCase_028690_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028690_2 "lass_32_bits.rgba8_rgb9_e5.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028690, VkglTestCase_028690_1, VkglTestCase_028690_2);

#define VkglTestCase_028691_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028691_2 "lass_32_bits.rgba8_rgb9_e5.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028691, VkglTestCase_028691_1, VkglTestCase_028691_2);

#define VkglTestCase_028692_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028692_2 "class_32_bits.rgba8_rgb9_e5.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028692, VkglTestCase_028692_1, VkglTestCase_028692_2);

#define VkglTestCase_028693_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028693_2 "s_32_bits.rgba8_rgb9_e5.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028693, VkglTestCase_028693_1, VkglTestCase_028693_2);

#define VkglTestCase_028694_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028694_2 "class_32_bits.rgba8_rgb9_e5.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028694, VkglTestCase_028694_1, VkglTestCase_028694_2);

#define VkglTestCase_028695_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028695_2 "class_32_bits.rgba8_rgb9_e5.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028695, VkglTestCase_028695_1, VkglTestCase_028695_2);

#define VkglTestCase_028696_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028696_2 "wclass_32_bits.rgba8_rgb9_e5.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028696, VkglTestCase_028696_1, VkglTestCase_028696_2);

#define VkglTestCase_028697_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028697_2 "ss_32_bits.rgba8_rgb9_e5.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028697, VkglTestCase_028697_1, VkglTestCase_028697_2);
