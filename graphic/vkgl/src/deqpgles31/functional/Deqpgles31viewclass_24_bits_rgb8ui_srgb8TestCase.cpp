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

#define VkglTestCase_031449_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031449_2 "ewclass_24_bits.rgb8ui_srgb8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031449, VkglTestCase_031449_1, VkglTestCase_031449_2);

#define VkglTestCase_031450_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031450_2 "ewclass_24_bits.rgb8ui_srgb8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031450, VkglTestCase_031450_1, VkglTestCase_031450_2);

#define VkglTestCase_031451_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031451_2 "iewclass_24_bits.rgb8ui_srgb8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031451, VkglTestCase_031451_1, VkglTestCase_031451_2);

#define VkglTestCase_031452_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031452_2 "lass_24_bits.rgb8ui_srgb8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031452, VkglTestCase_031452_1, VkglTestCase_031452_2);

#define VkglTestCase_031453_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031453_2 "ewclass_24_bits.rgb8ui_srgb8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031453, VkglTestCase_031453_1, VkglTestCase_031453_2);

#define VkglTestCase_031454_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031454_2 "ewclass_24_bits.rgb8ui_srgb8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031454, VkglTestCase_031454_1, VkglTestCase_031454_2);

#define VkglTestCase_031455_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031455_2 "iewclass_24_bits.rgb8ui_srgb8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031455, VkglTestCase_031455_1, VkglTestCase_031455_2);

#define VkglTestCase_031456_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031456_2 "lass_24_bits.rgb8ui_srgb8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031456, VkglTestCase_031456_1, VkglTestCase_031456_2);

#define VkglTestCase_031457_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031457_2 "iewclass_24_bits.rgb8ui_srgb8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031457, VkglTestCase_031457_1, VkglTestCase_031457_2);

#define VkglTestCase_031458_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031458_2 "iewclass_24_bits.rgb8ui_srgb8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031458, VkglTestCase_031458_1, VkglTestCase_031458_2);

#define VkglTestCase_031459_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031459_2 "viewclass_24_bits.rgb8ui_srgb8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031459, VkglTestCase_031459_1, VkglTestCase_031459_2);

#define VkglTestCase_031460_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031460_2 "class_24_bits.rgb8ui_srgb8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031460, VkglTestCase_031460_1, VkglTestCase_031460_2);

#define VkglTestCase_031461_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031461_2 "lass_24_bits.rgb8ui_srgb8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031461, VkglTestCase_031461_1, VkglTestCase_031461_2);

#define VkglTestCase_031462_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031462_2 "lass_24_bits.rgb8ui_srgb8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031462, VkglTestCase_031462_1, VkglTestCase_031462_2);

#define VkglTestCase_031463_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031463_2 "class_24_bits.rgb8ui_srgb8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031463, VkglTestCase_031463_1, VkglTestCase_031463_2);

#define VkglTestCase_031464_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031464_2 "s_24_bits.rgb8ui_srgb8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031464, VkglTestCase_031464_1, VkglTestCase_031464_2);
