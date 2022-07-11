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

#define VkglTestCase_031417_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031417_2 "ewclass_24_bits.rgb8ui_rgb8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031417, VkglTestCase_031417_1, VkglTestCase_031417_2);

#define VkglTestCase_031418_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031418_2 "ewclass_24_bits.rgb8ui_rgb8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031418, VkglTestCase_031418_1, VkglTestCase_031418_2);

#define VkglTestCase_031419_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031419_2 "iewclass_24_bits.rgb8ui_rgb8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031419, VkglTestCase_031419_1, VkglTestCase_031419_2);

#define VkglTestCase_031420_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031420_2 "lass_24_bits.rgb8ui_rgb8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031420, VkglTestCase_031420_1, VkglTestCase_031420_2);

#define VkglTestCase_031421_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031421_2 "ewclass_24_bits.rgb8ui_rgb8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031421, VkglTestCase_031421_1, VkglTestCase_031421_2);

#define VkglTestCase_031422_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031422_2 "ewclass_24_bits.rgb8ui_rgb8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031422, VkglTestCase_031422_1, VkglTestCase_031422_2);

#define VkglTestCase_031423_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031423_2 "iewclass_24_bits.rgb8ui_rgb8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031423, VkglTestCase_031423_1, VkglTestCase_031423_2);

#define VkglTestCase_031424_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031424_2 "lass_24_bits.rgb8ui_rgb8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031424, VkglTestCase_031424_1, VkglTestCase_031424_2);

#define VkglTestCase_031425_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031425_2 "iewclass_24_bits.rgb8ui_rgb8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031425, VkglTestCase_031425_1, VkglTestCase_031425_2);

#define VkglTestCase_031426_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031426_2 "iewclass_24_bits.rgb8ui_rgb8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031426, VkglTestCase_031426_1, VkglTestCase_031426_2);

#define VkglTestCase_031427_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031427_2 "viewclass_24_bits.rgb8ui_rgb8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031427, VkglTestCase_031427_1, VkglTestCase_031427_2);

#define VkglTestCase_031428_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031428_2 "class_24_bits.rgb8ui_rgb8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031428, VkglTestCase_031428_1, VkglTestCase_031428_2);

#define VkglTestCase_031429_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031429_2 "lass_24_bits.rgb8ui_rgb8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031429, VkglTestCase_031429_1, VkglTestCase_031429_2);

#define VkglTestCase_031430_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031430_2 "lass_24_bits.rgb8ui_rgb8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031430, VkglTestCase_031430_1, VkglTestCase_031430_2);

#define VkglTestCase_031431_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031431_2 "class_24_bits.rgb8ui_rgb8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031431, VkglTestCase_031431_1, VkglTestCase_031431_2);

#define VkglTestCase_031432_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031432_2 "s_24_bits.rgb8ui_rgb8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031432, VkglTestCase_031432_1, VkglTestCase_031432_2);
