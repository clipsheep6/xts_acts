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

#define VkglTestCase_026290_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026290_2 "class_64_bits.rgba16ui_rgba16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026290, VkglTestCase_026290_1, VkglTestCase_026290_2);

#define VkglTestCase_026291_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026291_2 "class_64_bits.rgba16ui_rgba16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026291, VkglTestCase_026291_1, VkglTestCase_026291_2);

#define VkglTestCase_026292_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026292_2 "wclass_64_bits.rgba16ui_rgba16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026292, VkglTestCase_026292_1, VkglTestCase_026292_2);

#define VkglTestCase_026293_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026293_2 "ss_64_bits.rgba16ui_rgba16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026293, VkglTestCase_026293_1, VkglTestCase_026293_2);

#define VkglTestCase_026294_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026294_2 "lass_64_bits.rgba16ui_rgba16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026294, VkglTestCase_026294_1, VkglTestCase_026294_2);

#define VkglTestCase_026295_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026295_2 "class_64_bits.rgba16ui_rgba16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026295, VkglTestCase_026295_1, VkglTestCase_026295_2);

#define VkglTestCase_026296_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026296_2 "class_64_bits.rgba16ui_rgba16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026296, VkglTestCase_026296_1, VkglTestCase_026296_2);

#define VkglTestCase_026297_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026297_2 "wclass_64_bits.rgba16ui_rgba16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026297, VkglTestCase_026297_1, VkglTestCase_026297_2);

#define VkglTestCase_026298_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026298_2 "ss_64_bits.rgba16ui_rgba16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026298, VkglTestCase_026298_1, VkglTestCase_026298_2);

#define VkglTestCase_026299_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026299_2 "lass_64_bits.rgba16ui_rgba16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026299, VkglTestCase_026299_1, VkglTestCase_026299_2);

#define VkglTestCase_026300_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026300_2 "wclass_64_bits.rgba16ui_rgba16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026300, VkglTestCase_026300_1, VkglTestCase_026300_2);

#define VkglTestCase_026301_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026301_2 "wclass_64_bits.rgba16ui_rgba16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026301, VkglTestCase_026301_1, VkglTestCase_026301_2);

#define VkglTestCase_026302_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026302_2 "ewclass_64_bits.rgba16ui_rgba16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026302, VkglTestCase_026302_1, VkglTestCase_026302_2);

#define VkglTestCase_026303_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026303_2 "ass_64_bits.rgba16ui_rgba16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026303, VkglTestCase_026303_1, VkglTestCase_026303_2);

#define VkglTestCase_026304_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026304_2 "class_64_bits.rgba16ui_rgba16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026304, VkglTestCase_026304_1, VkglTestCase_026304_2);

#define VkglTestCase_026305_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026305_2 "ss_64_bits.rgba16ui_rgba16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026305, VkglTestCase_026305_1, VkglTestCase_026305_2);

#define VkglTestCase_026306_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026306_2 "ss_64_bits.rgba16ui_rgba16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026306, VkglTestCase_026306_1, VkglTestCase_026306_2);

#define VkglTestCase_026307_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026307_2 "ass_64_bits.rgba16ui_rgba16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026307, VkglTestCase_026307_1, VkglTestCase_026307_2);

#define VkglTestCase_026308_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_026308_2 "64_bits.rgba16ui_rgba16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026308, VkglTestCase_026308_1, VkglTestCase_026308_2);

#define VkglTestCase_026309_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026309_2 "s_64_bits.rgba16ui_rgba16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026309, VkglTestCase_026309_1, VkglTestCase_026309_2);

#define VkglTestCase_026310_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026310_2 "lass_64_bits.rgba16ui_rgba16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026310, VkglTestCase_026310_1, VkglTestCase_026310_2);

#define VkglTestCase_026311_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026311_2 "lass_64_bits.rgba16ui_rgba16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026311, VkglTestCase_026311_1, VkglTestCase_026311_2);

#define VkglTestCase_026312_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026312_2 "class_64_bits.rgba16ui_rgba16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026312, VkglTestCase_026312_1, VkglTestCase_026312_2);

#define VkglTestCase_026313_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026313_2 "s_64_bits.rgba16ui_rgba16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026313, VkglTestCase_026313_1, VkglTestCase_026313_2);

#define VkglTestCase_026314_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026314_2 "ss_64_bits.rgba16ui_rgba16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026314, VkglTestCase_026314_1, VkglTestCase_026314_2);
