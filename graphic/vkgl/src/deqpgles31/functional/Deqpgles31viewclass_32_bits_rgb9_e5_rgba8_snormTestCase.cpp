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

#define VkglTestCase_031140_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031140_2 "lass_32_bits.rgb9_e5_rgba8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031140, VkglTestCase_031140_1, VkglTestCase_031140_2);

#define VkglTestCase_031141_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031141_2 "lass_32_bits.rgb9_e5_rgba8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031141, VkglTestCase_031141_1, VkglTestCase_031141_2);

#define VkglTestCase_031142_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031142_2 "class_32_bits.rgb9_e5_rgba8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031142, VkglTestCase_031142_1, VkglTestCase_031142_2);

#define VkglTestCase_031143_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031143_2 "s_32_bits.rgb9_e5_rgba8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031143, VkglTestCase_031143_1, VkglTestCase_031143_2);

#define VkglTestCase_031144_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031144_2 "lass_32_bits.rgb9_e5_rgba8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031144, VkglTestCase_031144_1, VkglTestCase_031144_2);

#define VkglTestCase_031145_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031145_2 "lass_32_bits.rgb9_e5_rgba8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031145, VkglTestCase_031145_1, VkglTestCase_031145_2);

#define VkglTestCase_031146_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031146_2 "class_32_bits.rgb9_e5_rgba8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031146, VkglTestCase_031146_1, VkglTestCase_031146_2);

#define VkglTestCase_031147_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031147_2 "s_32_bits.rgb9_e5_rgba8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031147, VkglTestCase_031147_1, VkglTestCase_031147_2);

#define VkglTestCase_031148_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031148_2 "class_32_bits.rgb9_e5_rgba8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031148, VkglTestCase_031148_1, VkglTestCase_031148_2);

#define VkglTestCase_031149_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031149_2 "class_32_bits.rgb9_e5_rgba8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031149, VkglTestCase_031149_1, VkglTestCase_031149_2);

#define VkglTestCase_031150_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031150_2 "wclass_32_bits.rgb9_e5_rgba8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031150, VkglTestCase_031150_1, VkglTestCase_031150_2);

#define VkglTestCase_031151_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031151_2 "ss_32_bits.rgb9_e5_rgba8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031151, VkglTestCase_031151_1, VkglTestCase_031151_2);

#define VkglTestCase_031152_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031152_2 "s_32_bits.rgb9_e5_rgba8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031152, VkglTestCase_031152_1, VkglTestCase_031152_2);

#define VkglTestCase_031153_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031153_2 "s_32_bits.rgb9_e5_rgba8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031153, VkglTestCase_031153_1, VkglTestCase_031153_2);

#define VkglTestCase_031154_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031154_2 "ss_32_bits.rgb9_e5_rgba8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031154, VkglTestCase_031154_1, VkglTestCase_031154_2);

#define VkglTestCase_031155_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_031155_2 "2_bits.rgb9_e5_rgba8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031155, VkglTestCase_031155_1, VkglTestCase_031155_2);
