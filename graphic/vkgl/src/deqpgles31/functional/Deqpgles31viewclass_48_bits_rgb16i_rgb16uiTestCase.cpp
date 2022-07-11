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

#define VkglTestCase_026420_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026420_2 "wclass_48_bits.rgb16i_rgb16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026420, VkglTestCase_026420_1, VkglTestCase_026420_2);

#define VkglTestCase_026421_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026421_2 "wclass_48_bits.rgb16i_rgb16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026421, VkglTestCase_026421_1, VkglTestCase_026421_2);

#define VkglTestCase_026422_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026422_2 "ewclass_48_bits.rgb16i_rgb16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026422, VkglTestCase_026422_1, VkglTestCase_026422_2);

#define VkglTestCase_026423_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026423_2 "ass_48_bits.rgb16i_rgb16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026423, VkglTestCase_026423_1, VkglTestCase_026423_2);

#define VkglTestCase_026424_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026424_2 "wclass_48_bits.rgb16i_rgb16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026424, VkglTestCase_026424_1, VkglTestCase_026424_2);

#define VkglTestCase_026425_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026425_2 "wclass_48_bits.rgb16i_rgb16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026425, VkglTestCase_026425_1, VkglTestCase_026425_2);

#define VkglTestCase_026426_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026426_2 "ewclass_48_bits.rgb16i_rgb16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026426, VkglTestCase_026426_1, VkglTestCase_026426_2);

#define VkglTestCase_026427_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026427_2 "ass_48_bits.rgb16i_rgb16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026427, VkglTestCase_026427_1, VkglTestCase_026427_2);

#define VkglTestCase_026428_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026428_2 "ewclass_48_bits.rgb16i_rgb16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026428, VkglTestCase_026428_1, VkglTestCase_026428_2);

#define VkglTestCase_026429_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026429_2 "ewclass_48_bits.rgb16i_rgb16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026429, VkglTestCase_026429_1, VkglTestCase_026429_2);

#define VkglTestCase_026430_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026430_2 "iewclass_48_bits.rgb16i_rgb16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026430, VkglTestCase_026430_1, VkglTestCase_026430_2);

#define VkglTestCase_026431_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026431_2 "lass_48_bits.rgb16i_rgb16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026431, VkglTestCase_026431_1, VkglTestCase_026431_2);

#define VkglTestCase_026432_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026432_2 "ass_48_bits.rgb16i_rgb16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026432, VkglTestCase_026432_1, VkglTestCase_026432_2);

#define VkglTestCase_026433_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026433_2 "ass_48_bits.rgb16i_rgb16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026433, VkglTestCase_026433_1, VkglTestCase_026433_2);

#define VkglTestCase_026434_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026434_2 "lass_48_bits.rgb16i_rgb16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026434, VkglTestCase_026434_1, VkglTestCase_026434_2);

#define VkglTestCase_026435_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026435_2 "_48_bits.rgb16i_rgb16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026435, VkglTestCase_026435_1, VkglTestCase_026435_2);
