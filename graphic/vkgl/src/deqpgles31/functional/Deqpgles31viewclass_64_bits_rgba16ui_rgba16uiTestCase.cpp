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

#define VkglTestCase_026315_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026315_2 "class_64_bits.rgba16ui_rgba16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026315, VkglTestCase_026315_1, VkglTestCase_026315_2);

#define VkglTestCase_026316_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026316_2 "class_64_bits.rgba16ui_rgba16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026316, VkglTestCase_026316_1, VkglTestCase_026316_2);

#define VkglTestCase_026317_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026317_2 "wclass_64_bits.rgba16ui_rgba16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026317, VkglTestCase_026317_1, VkglTestCase_026317_2);

#define VkglTestCase_026318_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026318_2 "ss_64_bits.rgba16ui_rgba16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026318, VkglTestCase_026318_1, VkglTestCase_026318_2);

#define VkglTestCase_026319_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026319_2 "ass_64_bits.rgba16ui_rgba16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026319, VkglTestCase_026319_1, VkglTestCase_026319_2);

#define VkglTestCase_026320_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026320_2 "class_64_bits.rgba16ui_rgba16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026320, VkglTestCase_026320_1, VkglTestCase_026320_2);

#define VkglTestCase_026321_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026321_2 "class_64_bits.rgba16ui_rgba16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026321, VkglTestCase_026321_1, VkglTestCase_026321_2);

#define VkglTestCase_026322_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026322_2 "wclass_64_bits.rgba16ui_rgba16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026322, VkglTestCase_026322_1, VkglTestCase_026322_2);

#define VkglTestCase_026323_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026323_2 "ss_64_bits.rgba16ui_rgba16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026323, VkglTestCase_026323_1, VkglTestCase_026323_2);

#define VkglTestCase_026324_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026324_2 "ass_64_bits.rgba16ui_rgba16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026324, VkglTestCase_026324_1, VkglTestCase_026324_2);

#define VkglTestCase_026325_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026325_2 "wclass_64_bits.rgba16ui_rgba16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026325, VkglTestCase_026325_1, VkglTestCase_026325_2);

#define VkglTestCase_026326_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026326_2 "wclass_64_bits.rgba16ui_rgba16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026326, VkglTestCase_026326_1, VkglTestCase_026326_2);

#define VkglTestCase_026327_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026327_2 "ewclass_64_bits.rgba16ui_rgba16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026327, VkglTestCase_026327_1, VkglTestCase_026327_2);

#define VkglTestCase_026328_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026328_2 "ass_64_bits.rgba16ui_rgba16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026328, VkglTestCase_026328_1, VkglTestCase_026328_2);

#define VkglTestCase_026329_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026329_2 "lass_64_bits.rgba16ui_rgba16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026329, VkglTestCase_026329_1, VkglTestCase_026329_2);

#define VkglTestCase_026330_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026330_2 "ss_64_bits.rgba16ui_rgba16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026330, VkglTestCase_026330_1, VkglTestCase_026330_2);

#define VkglTestCase_026331_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026331_2 "ss_64_bits.rgba16ui_rgba16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026331, VkglTestCase_026331_1, VkglTestCase_026331_2);

#define VkglTestCase_026332_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026332_2 "ass_64_bits.rgba16ui_rgba16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026332, VkglTestCase_026332_1, VkglTestCase_026332_2);

#define VkglTestCase_026333_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_026333_2 "64_bits.rgba16ui_rgba16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026333, VkglTestCase_026333_1, VkglTestCase_026333_2);

#define VkglTestCase_026334_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026334_2 "_64_bits.rgba16ui_rgba16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026334, VkglTestCase_026334_1, VkglTestCase_026334_2);

#define VkglTestCase_026335_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026335_2 "ass_64_bits.rgba16ui_rgba16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026335, VkglTestCase_026335_1, VkglTestCase_026335_2);

#define VkglTestCase_026336_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026336_2 "ass_64_bits.rgba16ui_rgba16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026336, VkglTestCase_026336_1, VkglTestCase_026336_2);

#define VkglTestCase_026337_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026337_2 "lass_64_bits.rgba16ui_rgba16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026337, VkglTestCase_026337_1, VkglTestCase_026337_2);

#define VkglTestCase_026338_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026338_2 "_64_bits.rgba16ui_rgba16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026338, VkglTestCase_026338_1, VkglTestCase_026338_2);

#define VkglTestCase_026339_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026339_2 "ss_64_bits.rgba16ui_rgba16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026339, VkglTestCase_026339_1, VkglTestCase_026339_2);
