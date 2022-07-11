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

#define VkglTestCase_026388_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026388_2 "ewclass_48_bits.rgb16i_rgb16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026388, VkglTestCase_026388_1, VkglTestCase_026388_2);

#define VkglTestCase_026389_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026389_2 "ewclass_48_bits.rgb16i_rgb16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026389, VkglTestCase_026389_1, VkglTestCase_026389_2);

#define VkglTestCase_026390_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026390_2 "iewclass_48_bits.rgb16i_rgb16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026390, VkglTestCase_026390_1, VkglTestCase_026390_2);

#define VkglTestCase_026391_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026391_2 "lass_48_bits.rgb16i_rgb16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026391, VkglTestCase_026391_1, VkglTestCase_026391_2);

#define VkglTestCase_026392_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026392_2 "ewclass_48_bits.rgb16i_rgb16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026392, VkglTestCase_026392_1, VkglTestCase_026392_2);

#define VkglTestCase_026393_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026393_2 "ewclass_48_bits.rgb16i_rgb16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026393, VkglTestCase_026393_1, VkglTestCase_026393_2);

#define VkglTestCase_026394_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026394_2 "iewclass_48_bits.rgb16i_rgb16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026394, VkglTestCase_026394_1, VkglTestCase_026394_2);

#define VkglTestCase_026395_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026395_2 "lass_48_bits.rgb16i_rgb16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026395, VkglTestCase_026395_1, VkglTestCase_026395_2);

#define VkglTestCase_026396_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026396_2 "iewclass_48_bits.rgb16i_rgb16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026396, VkglTestCase_026396_1, VkglTestCase_026396_2);

#define VkglTestCase_026397_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026397_2 "iewclass_48_bits.rgb16i_rgb16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026397, VkglTestCase_026397_1, VkglTestCase_026397_2);

#define VkglTestCase_026398_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026398_2 "viewclass_48_bits.rgb16i_rgb16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026398, VkglTestCase_026398_1, VkglTestCase_026398_2);

#define VkglTestCase_026399_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026399_2 "class_48_bits.rgb16i_rgb16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026399, VkglTestCase_026399_1, VkglTestCase_026399_2);

#define VkglTestCase_026400_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026400_2 "lass_48_bits.rgb16i_rgb16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026400, VkglTestCase_026400_1, VkglTestCase_026400_2);

#define VkglTestCase_026401_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026401_2 "lass_48_bits.rgb16i_rgb16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026401, VkglTestCase_026401_1, VkglTestCase_026401_2);

#define VkglTestCase_026402_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026402_2 "class_48_bits.rgb16i_rgb16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026402, VkglTestCase_026402_1, VkglTestCase_026402_2);

#define VkglTestCase_026403_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026403_2 "s_48_bits.rgb16i_rgb16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026403, VkglTestCase_026403_1, VkglTestCase_026403_2);
