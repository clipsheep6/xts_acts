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
#include "../ActsDeqpgles310031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030386_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030386_2 "class_32_bits.rgba8_snorm_rg16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030386, VkglTestCase_030386_1, VkglTestCase_030386_2);

#define VkglTestCase_030387_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030387_2 "class_32_bits.rgba8_snorm_rg16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030387, VkglTestCase_030387_1, VkglTestCase_030387_2);

#define VkglTestCase_030388_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030388_2 "wclass_32_bits.rgba8_snorm_rg16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030388, VkglTestCase_030388_1, VkglTestCase_030388_2);

#define VkglTestCase_030389_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030389_2 "ss_32_bits.rgba8_snorm_rg16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030389, VkglTestCase_030389_1, VkglTestCase_030389_2);

#define VkglTestCase_030390_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030390_2 "class_32_bits.rgba8_snorm_rg16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030390, VkglTestCase_030390_1, VkglTestCase_030390_2);

#define VkglTestCase_030391_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030391_2 "class_32_bits.rgba8_snorm_rg16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030391, VkglTestCase_030391_1, VkglTestCase_030391_2);

#define VkglTestCase_030392_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030392_2 "wclass_32_bits.rgba8_snorm_rg16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030392, VkglTestCase_030392_1, VkglTestCase_030392_2);

#define VkglTestCase_030393_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030393_2 "ss_32_bits.rgba8_snorm_rg16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030393, VkglTestCase_030393_1, VkglTestCase_030393_2);

#define VkglTestCase_030394_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030394_2 "wclass_32_bits.rgba8_snorm_rg16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030394, VkglTestCase_030394_1, VkglTestCase_030394_2);

#define VkglTestCase_030395_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030395_2 "wclass_32_bits.rgba8_snorm_rg16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030395, VkglTestCase_030395_1, VkglTestCase_030395_2);

#define VkglTestCase_030396_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030396_2 "ewclass_32_bits.rgba8_snorm_rg16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030396, VkglTestCase_030396_1, VkglTestCase_030396_2);

#define VkglTestCase_030397_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030397_2 "ass_32_bits.rgba8_snorm_rg16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030397, VkglTestCase_030397_1, VkglTestCase_030397_2);

#define VkglTestCase_030398_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030398_2 "ss_32_bits.rgba8_snorm_rg16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030398, VkglTestCase_030398_1, VkglTestCase_030398_2);

#define VkglTestCase_030399_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030399_2 "ss_32_bits.rgba8_snorm_rg16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030399, VkglTestCase_030399_1, VkglTestCase_030399_2);

#define VkglTestCase_030400_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030400_2 "ass_32_bits.rgba8_snorm_rg16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030400, VkglTestCase_030400_1, VkglTestCase_030400_2);

#define VkglTestCase_030401_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030401_2 "32_bits.rgba8_snorm_rg16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030401, VkglTestCase_030401_1, VkglTestCase_030401_2);
