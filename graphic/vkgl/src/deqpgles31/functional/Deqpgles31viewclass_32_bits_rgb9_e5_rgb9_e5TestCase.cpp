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

#define VkglTestCase_031176_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031176_2 "wclass_32_bits.rgb9_e5_rgb9_e5.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031176, VkglTestCase_031176_1, VkglTestCase_031176_2);

#define VkglTestCase_031177_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031177_2 "wclass_32_bits.rgb9_e5_rgb9_e5.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031177, VkglTestCase_031177_1, VkglTestCase_031177_2);

#define VkglTestCase_031178_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031178_2 "ewclass_32_bits.rgb9_e5_rgb9_e5.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031178, VkglTestCase_031178_1, VkglTestCase_031178_2);

#define VkglTestCase_031179_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031179_2 "ass_32_bits.rgb9_e5_rgb9_e5.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031179, VkglTestCase_031179_1, VkglTestCase_031179_2);

#define VkglTestCase_031180_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031180_2 "wclass_32_bits.rgb9_e5_rgb9_e5.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031180, VkglTestCase_031180_1, VkglTestCase_031180_2);

#define VkglTestCase_031181_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031181_2 "wclass_32_bits.rgb9_e5_rgb9_e5.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031181, VkglTestCase_031181_1, VkglTestCase_031181_2);

#define VkglTestCase_031182_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031182_2 "ewclass_32_bits.rgb9_e5_rgb9_e5.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031182, VkglTestCase_031182_1, VkglTestCase_031182_2);

#define VkglTestCase_031183_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031183_2 "ass_32_bits.rgb9_e5_rgb9_e5.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031183, VkglTestCase_031183_1, VkglTestCase_031183_2);

#define VkglTestCase_031184_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031184_2 "ewclass_32_bits.rgb9_e5_rgb9_e5.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031184, VkglTestCase_031184_1, VkglTestCase_031184_2);

#define VkglTestCase_031185_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031185_2 "ewclass_32_bits.rgb9_e5_rgb9_e5.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031185, VkglTestCase_031185_1, VkglTestCase_031185_2);

#define VkglTestCase_031186_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031186_2 "iewclass_32_bits.rgb9_e5_rgb9_e5.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031186, VkglTestCase_031186_1, VkglTestCase_031186_2);

#define VkglTestCase_031187_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031187_2 "lass_32_bits.rgb9_e5_rgb9_e5.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031187, VkglTestCase_031187_1, VkglTestCase_031187_2);

#define VkglTestCase_031188_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031188_2 "ass_32_bits.rgb9_e5_rgb9_e5.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031188, VkglTestCase_031188_1, VkglTestCase_031188_2);

#define VkglTestCase_031189_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031189_2 "ass_32_bits.rgb9_e5_rgb9_e5.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031189, VkglTestCase_031189_1, VkglTestCase_031189_2);

#define VkglTestCase_031190_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031190_2 "lass_32_bits.rgb9_e5_rgb9_e5.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031190, VkglTestCase_031190_1, VkglTestCase_031190_2);

#define VkglTestCase_031191_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031191_2 "_32_bits.rgb9_e5_rgb9_e5.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031191, VkglTestCase_031191_1, VkglTestCase_031191_2);
