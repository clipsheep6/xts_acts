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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025684_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025684_2 "iewclass_64_bits.rg32i_rg32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025684, VkglTestCase_025684_1, VkglTestCase_025684_2);

#define VkglTestCase_025685_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025685_2 "iewclass_64_bits.rg32i_rg32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025685, VkglTestCase_025685_1, VkglTestCase_025685_2);

#define VkglTestCase_025686_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025686_2 "viewclass_64_bits.rg32i_rg32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025686, VkglTestCase_025686_1, VkglTestCase_025686_2);

#define VkglTestCase_025687_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025687_2 "class_64_bits.rg32i_rg32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025687, VkglTestCase_025687_1, VkglTestCase_025687_2);

#define VkglTestCase_025688_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025688_2 "iewclass_64_bits.rg32i_rg32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025688, VkglTestCase_025688_1, VkglTestCase_025688_2);

#define VkglTestCase_025689_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025689_2 "iewclass_64_bits.rg32i_rg32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025689, VkglTestCase_025689_1, VkglTestCase_025689_2);

#define VkglTestCase_025690_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025690_2 "viewclass_64_bits.rg32i_rg32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025690, VkglTestCase_025690_1, VkglTestCase_025690_2);

#define VkglTestCase_025691_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025691_2 "class_64_bits.rg32i_rg32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025691, VkglTestCase_025691_1, VkglTestCase_025691_2);

#define VkglTestCase_025692_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025692_2 "viewclass_64_bits.rg32i_rg32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025692, VkglTestCase_025692_1, VkglTestCase_025692_2);

#define VkglTestCase_025693_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025693_2 "viewclass_64_bits.rg32i_rg32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025693, VkglTestCase_025693_1, VkglTestCase_025693_2);

#define VkglTestCase_025694_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_025694_2 ".viewclass_64_bits.rg32i_rg32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025694, VkglTestCase_025694_1, VkglTestCase_025694_2);

#define VkglTestCase_025695_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025695_2 "wclass_64_bits.rg32i_rg32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025695, VkglTestCase_025695_1, VkglTestCase_025695_2);

#define VkglTestCase_025696_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025696_2 "class_64_bits.rg32i_rg32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025696, VkglTestCase_025696_1, VkglTestCase_025696_2);

#define VkglTestCase_025697_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025697_2 "class_64_bits.rg32i_rg32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025697, VkglTestCase_025697_1, VkglTestCase_025697_2);

#define VkglTestCase_025698_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025698_2 "wclass_64_bits.rg32i_rg32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025698, VkglTestCase_025698_1, VkglTestCase_025698_2);

#define VkglTestCase_025699_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025699_2 "ss_64_bits.rg32i_rg32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025699, VkglTestCase_025699_1, VkglTestCase_025699_2);

#define VkglTestCase_025700_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025700_2 "wclass_64_bits.rg32i_rg32f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025700, VkglTestCase_025700_1, VkglTestCase_025700_2);

#define VkglTestCase_025701_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025701_2 "wclass_64_bits.rg32i_rg32f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025701, VkglTestCase_025701_1, VkglTestCase_025701_2);

#define VkglTestCase_025702_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025702_2 "ewclass_64_bits.rg32i_rg32f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025702, VkglTestCase_025702_1, VkglTestCase_025702_2);

#define VkglTestCase_025703_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025703_2 "ass_64_bits.rg32i_rg32f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025703, VkglTestCase_025703_1, VkglTestCase_025703_2);
