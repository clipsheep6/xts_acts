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

#define VkglTestCase_026372_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026372_2 "wclass_48_bits.rgb16f_rgb16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026372, VkglTestCase_026372_1, VkglTestCase_026372_2);

#define VkglTestCase_026373_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026373_2 "wclass_48_bits.rgb16f_rgb16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026373, VkglTestCase_026373_1, VkglTestCase_026373_2);

#define VkglTestCase_026374_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026374_2 "ewclass_48_bits.rgb16f_rgb16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026374, VkglTestCase_026374_1, VkglTestCase_026374_2);

#define VkglTestCase_026375_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026375_2 "ass_48_bits.rgb16f_rgb16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026375, VkglTestCase_026375_1, VkglTestCase_026375_2);

#define VkglTestCase_026376_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026376_2 "wclass_48_bits.rgb16f_rgb16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026376, VkglTestCase_026376_1, VkglTestCase_026376_2);

#define VkglTestCase_026377_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026377_2 "wclass_48_bits.rgb16f_rgb16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026377, VkglTestCase_026377_1, VkglTestCase_026377_2);

#define VkglTestCase_026378_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026378_2 "ewclass_48_bits.rgb16f_rgb16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026378, VkglTestCase_026378_1, VkglTestCase_026378_2);

#define VkglTestCase_026379_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026379_2 "ass_48_bits.rgb16f_rgb16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026379, VkglTestCase_026379_1, VkglTestCase_026379_2);

#define VkglTestCase_026380_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026380_2 "ewclass_48_bits.rgb16f_rgb16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026380, VkglTestCase_026380_1, VkglTestCase_026380_2);

#define VkglTestCase_026381_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026381_2 "ewclass_48_bits.rgb16f_rgb16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026381, VkglTestCase_026381_1, VkglTestCase_026381_2);

#define VkglTestCase_026382_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026382_2 "iewclass_48_bits.rgb16f_rgb16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026382, VkglTestCase_026382_1, VkglTestCase_026382_2);

#define VkglTestCase_026383_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026383_2 "lass_48_bits.rgb16f_rgb16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026383, VkglTestCase_026383_1, VkglTestCase_026383_2);

#define VkglTestCase_026384_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026384_2 "ass_48_bits.rgb16f_rgb16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026384, VkglTestCase_026384_1, VkglTestCase_026384_2);

#define VkglTestCase_026385_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026385_2 "ass_48_bits.rgb16f_rgb16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026385, VkglTestCase_026385_1, VkglTestCase_026385_2);

#define VkglTestCase_026386_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026386_2 "lass_48_bits.rgb16f_rgb16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026386, VkglTestCase_026386_1, VkglTestCase_026386_2);

#define VkglTestCase_026387_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026387_2 "_48_bits.rgb16f_rgb16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026387, VkglTestCase_026387_1, VkglTestCase_026387_2);
