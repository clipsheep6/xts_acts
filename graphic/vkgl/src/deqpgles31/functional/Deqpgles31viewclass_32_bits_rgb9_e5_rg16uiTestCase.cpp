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

#define VkglTestCase_031020_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031020_2 "wclass_32_bits.rgb9_e5_rg16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031020, VkglTestCase_031020_1, VkglTestCase_031020_2);

#define VkglTestCase_031021_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031021_2 "wclass_32_bits.rgb9_e5_rg16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031021, VkglTestCase_031021_1, VkglTestCase_031021_2);

#define VkglTestCase_031022_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031022_2 "ewclass_32_bits.rgb9_e5_rg16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031022, VkglTestCase_031022_1, VkglTestCase_031022_2);

#define VkglTestCase_031023_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031023_2 "ass_32_bits.rgb9_e5_rg16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031023, VkglTestCase_031023_1, VkglTestCase_031023_2);

#define VkglTestCase_031024_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031024_2 "class_32_bits.rgb9_e5_rg16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031024, VkglTestCase_031024_1, VkglTestCase_031024_2);

#define VkglTestCase_031025_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031025_2 "wclass_32_bits.rgb9_e5_rg16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031025, VkglTestCase_031025_1, VkglTestCase_031025_2);

#define VkglTestCase_031026_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031026_2 "wclass_32_bits.rgb9_e5_rg16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031026, VkglTestCase_031026_1, VkglTestCase_031026_2);

#define VkglTestCase_031027_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031027_2 "ewclass_32_bits.rgb9_e5_rg16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031027, VkglTestCase_031027_1, VkglTestCase_031027_2);

#define VkglTestCase_031028_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031028_2 "ass_32_bits.rgb9_e5_rg16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031028, VkglTestCase_031028_1, VkglTestCase_031028_2);

#define VkglTestCase_031029_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031029_2 "class_32_bits.rgb9_e5_rg16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031029, VkglTestCase_031029_1, VkglTestCase_031029_2);

#define VkglTestCase_031030_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031030_2 "ewclass_32_bits.rgb9_e5_rg16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031030, VkglTestCase_031030_1, VkglTestCase_031030_2);

#define VkglTestCase_031031_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031031_2 "ewclass_32_bits.rgb9_e5_rg16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031031, VkglTestCase_031031_1, VkglTestCase_031031_2);

#define VkglTestCase_031032_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031032_2 "iewclass_32_bits.rgb9_e5_rg16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031032, VkglTestCase_031032_1, VkglTestCase_031032_2);

#define VkglTestCase_031033_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031033_2 "lass_32_bits.rgb9_e5_rg16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031033, VkglTestCase_031033_1, VkglTestCase_031033_2);

#define VkglTestCase_031034_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031034_2 "wclass_32_bits.rgb9_e5_rg16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031034, VkglTestCase_031034_1, VkglTestCase_031034_2);

#define VkglTestCase_031035_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031035_2 "ass_32_bits.rgb9_e5_rg16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031035, VkglTestCase_031035_1, VkglTestCase_031035_2);

#define VkglTestCase_031036_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031036_2 "ass_32_bits.rgb9_e5_rg16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031036, VkglTestCase_031036_1, VkglTestCase_031036_2);

#define VkglTestCase_031037_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031037_2 "lass_32_bits.rgb9_e5_rg16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031037, VkglTestCase_031037_1, VkglTestCase_031037_2);

#define VkglTestCase_031038_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031038_2 "_32_bits.rgb9_e5_rg16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031038, VkglTestCase_031038_1, VkglTestCase_031038_2);

#define VkglTestCase_031039_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031039_2 "ss_32_bits.rgb9_e5_rg16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031039, VkglTestCase_031039_1, VkglTestCase_031039_2);
