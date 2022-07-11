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

#define VkglTestCase_026040_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026040_2 "class_64_bits.rgba16f_rgba16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026040, VkglTestCase_026040_1, VkglTestCase_026040_2);

#define VkglTestCase_026041_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026041_2 "class_64_bits.rgba16f_rgba16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026041, VkglTestCase_026041_1, VkglTestCase_026041_2);

#define VkglTestCase_026042_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026042_2 "wclass_64_bits.rgba16f_rgba16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026042, VkglTestCase_026042_1, VkglTestCase_026042_2);

#define VkglTestCase_026043_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026043_2 "ss_64_bits.rgba16f_rgba16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026043, VkglTestCase_026043_1, VkglTestCase_026043_2);

#define VkglTestCase_026044_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026044_2 "lass_64_bits.rgba16f_rgba16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026044, VkglTestCase_026044_1, VkglTestCase_026044_2);

#define VkglTestCase_026045_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026045_2 "class_64_bits.rgba16f_rgba16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026045, VkglTestCase_026045_1, VkglTestCase_026045_2);

#define VkglTestCase_026046_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026046_2 "class_64_bits.rgba16f_rgba16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026046, VkglTestCase_026046_1, VkglTestCase_026046_2);

#define VkglTestCase_026047_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026047_2 "wclass_64_bits.rgba16f_rgba16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026047, VkglTestCase_026047_1, VkglTestCase_026047_2);

#define VkglTestCase_026048_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026048_2 "ss_64_bits.rgba16f_rgba16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026048, VkglTestCase_026048_1, VkglTestCase_026048_2);

#define VkglTestCase_026049_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026049_2 "lass_64_bits.rgba16f_rgba16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026049, VkglTestCase_026049_1, VkglTestCase_026049_2);

#define VkglTestCase_026050_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026050_2 "wclass_64_bits.rgba16f_rgba16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026050, VkglTestCase_026050_1, VkglTestCase_026050_2);

#define VkglTestCase_026051_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026051_2 "wclass_64_bits.rgba16f_rgba16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026051, VkglTestCase_026051_1, VkglTestCase_026051_2);

#define VkglTestCase_026052_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026052_2 "ewclass_64_bits.rgba16f_rgba16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026052, VkglTestCase_026052_1, VkglTestCase_026052_2);

#define VkglTestCase_026053_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026053_2 "ass_64_bits.rgba16f_rgba16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026053, VkglTestCase_026053_1, VkglTestCase_026053_2);

#define VkglTestCase_026054_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026054_2 "class_64_bits.rgba16f_rgba16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026054, VkglTestCase_026054_1, VkglTestCase_026054_2);

#define VkglTestCase_026055_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026055_2 "ss_64_bits.rgba16f_rgba16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026055, VkglTestCase_026055_1, VkglTestCase_026055_2);

#define VkglTestCase_026056_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026056_2 "ss_64_bits.rgba16f_rgba16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026056, VkglTestCase_026056_1, VkglTestCase_026056_2);

#define VkglTestCase_026057_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026057_2 "ass_64_bits.rgba16f_rgba16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026057, VkglTestCase_026057_1, VkglTestCase_026057_2);

#define VkglTestCase_026058_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_026058_2 "64_bits.rgba16f_rgba16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026058, VkglTestCase_026058_1, VkglTestCase_026058_2);

#define VkglTestCase_026059_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026059_2 "s_64_bits.rgba16f_rgba16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026059, VkglTestCase_026059_1, VkglTestCase_026059_2);
