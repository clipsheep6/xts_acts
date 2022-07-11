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

#define VkglTestCase_026340_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026340_2 "ewclass_48_bits.rgb16f_rgb16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026340, VkglTestCase_026340_1, VkglTestCase_026340_2);

#define VkglTestCase_026341_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026341_2 "ewclass_48_bits.rgb16f_rgb16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026341, VkglTestCase_026341_1, VkglTestCase_026341_2);

#define VkglTestCase_026342_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026342_2 "iewclass_48_bits.rgb16f_rgb16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026342, VkglTestCase_026342_1, VkglTestCase_026342_2);

#define VkglTestCase_026343_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026343_2 "lass_48_bits.rgb16f_rgb16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026343, VkglTestCase_026343_1, VkglTestCase_026343_2);

#define VkglTestCase_026344_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026344_2 "ewclass_48_bits.rgb16f_rgb16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026344, VkglTestCase_026344_1, VkglTestCase_026344_2);

#define VkglTestCase_026345_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026345_2 "ewclass_48_bits.rgb16f_rgb16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026345, VkglTestCase_026345_1, VkglTestCase_026345_2);

#define VkglTestCase_026346_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026346_2 "iewclass_48_bits.rgb16f_rgb16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026346, VkglTestCase_026346_1, VkglTestCase_026346_2);

#define VkglTestCase_026347_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026347_2 "lass_48_bits.rgb16f_rgb16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026347, VkglTestCase_026347_1, VkglTestCase_026347_2);

#define VkglTestCase_026348_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026348_2 "iewclass_48_bits.rgb16f_rgb16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026348, VkglTestCase_026348_1, VkglTestCase_026348_2);

#define VkglTestCase_026349_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026349_2 "iewclass_48_bits.rgb16f_rgb16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026349, VkglTestCase_026349_1, VkglTestCase_026349_2);

#define VkglTestCase_026350_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026350_2 "viewclass_48_bits.rgb16f_rgb16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026350, VkglTestCase_026350_1, VkglTestCase_026350_2);

#define VkglTestCase_026351_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026351_2 "class_48_bits.rgb16f_rgb16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026351, VkglTestCase_026351_1, VkglTestCase_026351_2);

#define VkglTestCase_026352_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026352_2 "lass_48_bits.rgb16f_rgb16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026352, VkglTestCase_026352_1, VkglTestCase_026352_2);

#define VkglTestCase_026353_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026353_2 "lass_48_bits.rgb16f_rgb16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026353, VkglTestCase_026353_1, VkglTestCase_026353_2);

#define VkglTestCase_026354_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026354_2 "class_48_bits.rgb16f_rgb16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026354, VkglTestCase_026354_1, VkglTestCase_026354_2);

#define VkglTestCase_026355_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026355_2 "s_48_bits.rgb16f_rgb16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026355, VkglTestCase_026355_1, VkglTestCase_026355_2);
