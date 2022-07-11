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
#include "../ActsDeqpgles310033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032140_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032140_2 "viewclass_16_bits.rg8_r16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032140, VkglTestCase_032140_1, VkglTestCase_032140_2);

#define VkglTestCase_032141_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032141_2 "viewclass_16_bits.rg8_r16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032141, VkglTestCase_032141_1, VkglTestCase_032141_2);

#define VkglTestCase_032142_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032142_2 ".viewclass_16_bits.rg8_r16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032142, VkglTestCase_032142_1, VkglTestCase_032142_2);

#define VkglTestCase_032143_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032143_2 "wclass_16_bits.rg8_r16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032143, VkglTestCase_032143_1, VkglTestCase_032143_2);

#define VkglTestCase_032144_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032144_2 "ewclass_16_bits.rg8_r16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032144, VkglTestCase_032144_1, VkglTestCase_032144_2);

#define VkglTestCase_032145_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032145_2 "viewclass_16_bits.rg8_r16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032145, VkglTestCase_032145_1, VkglTestCase_032145_2);

#define VkglTestCase_032146_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032146_2 "viewclass_16_bits.rg8_r16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032146, VkglTestCase_032146_1, VkglTestCase_032146_2);

#define VkglTestCase_032147_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032147_2 ".viewclass_16_bits.rg8_r16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032147, VkglTestCase_032147_1, VkglTestCase_032147_2);

#define VkglTestCase_032148_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032148_2 "wclass_16_bits.rg8_r16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032148, VkglTestCase_032148_1, VkglTestCase_032148_2);

#define VkglTestCase_032149_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032149_2 "ewclass_16_bits.rg8_r16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032149, VkglTestCase_032149_1, VkglTestCase_032149_2);

#define VkglTestCase_032150_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032150_2 ".viewclass_16_bits.rg8_r16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032150, VkglTestCase_032150_1, VkglTestCase_032150_2);

#define VkglTestCase_032151_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032151_2 ".viewclass_16_bits.rg8_r16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032151, VkglTestCase_032151_1, VkglTestCase_032151_2);

#define VkglTestCase_032152_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032152_2 "d.viewclass_16_bits.rg8_r16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032152, VkglTestCase_032152_1, VkglTestCase_032152_2);

#define VkglTestCase_032153_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032153_2 "ewclass_16_bits.rg8_r16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032153, VkglTestCase_032153_1, VkglTestCase_032153_2);

#define VkglTestCase_032154_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032154_2 "iewclass_16_bits.rg8_r16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032154, VkglTestCase_032154_1, VkglTestCase_032154_2);

#define VkglTestCase_032155_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032155_2 "wclass_16_bits.rg8_r16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032155, VkglTestCase_032155_1, VkglTestCase_032155_2);

#define VkglTestCase_032156_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032156_2 "wclass_16_bits.rg8_r16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032156, VkglTestCase_032156_1, VkglTestCase_032156_2);

#define VkglTestCase_032157_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032157_2 "ewclass_16_bits.rg8_r16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032157, VkglTestCase_032157_1, VkglTestCase_032157_2);

#define VkglTestCase_032158_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032158_2 "ass_16_bits.rg8_r16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032158, VkglTestCase_032158_1, VkglTestCase_032158_2);

#define VkglTestCase_032159_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032159_2 "lass_16_bits.rg8_r16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032159, VkglTestCase_032159_1, VkglTestCase_032159_2);

#define VkglTestCase_032160_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032160_2 "ewclass_16_bits.rg8_r16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032160, VkglTestCase_032160_1, VkglTestCase_032160_2);

#define VkglTestCase_032161_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032161_2 "ewclass_16_bits.rg8_r16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032161, VkglTestCase_032161_1, VkglTestCase_032161_2);

#define VkglTestCase_032162_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032162_2 "iewclass_16_bits.rg8_r16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032162, VkglTestCase_032162_1, VkglTestCase_032162_2);

#define VkglTestCase_032163_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032163_2 "lass_16_bits.rg8_r16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032163, VkglTestCase_032163_1, VkglTestCase_032163_2);

#define VkglTestCase_032164_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032164_2 "wclass_16_bits.rg8_r16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032164, VkglTestCase_032164_1, VkglTestCase_032164_2);
