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
#include "../ActsDeqpgles310030TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_029845_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029845_2 "s_32_bits.rgb10_a2ui_r11f_g11f_b10f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029845, VkglTestCase_029845_1, VkglTestCase_029845_2);

#define VkglTestCase_029846_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029846_2 "s_32_bits.rgb10_a2ui_r11f_g11f_b10f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029846, VkglTestCase_029846_1, VkglTestCase_029846_2);

#define VkglTestCase_029847_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029847_2 "ss_32_bits.rgb10_a2ui_r11f_g11f_b10f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029847, VkglTestCase_029847_1, VkglTestCase_029847_2);

#define VkglTestCase_029848_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029848_2 "2_bits.rgb10_a2ui_r11f_g11f_b10f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029848, VkglTestCase_029848_1, VkglTestCase_029848_2);

#define VkglTestCase_029849_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029849_2 "s_32_bits.rgb10_a2ui_r11f_g11f_b10f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029849, VkglTestCase_029849_1, VkglTestCase_029849_2);

#define VkglTestCase_029850_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029850_2 "s_32_bits.rgb10_a2ui_r11f_g11f_b10f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029850, VkglTestCase_029850_1, VkglTestCase_029850_2);

#define VkglTestCase_029851_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029851_2 "ss_32_bits.rgb10_a2ui_r11f_g11f_b10f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029851, VkglTestCase_029851_1, VkglTestCase_029851_2);

#define VkglTestCase_029852_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029852_2 "2_bits.rgb10_a2ui_r11f_g11f_b10f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029852, VkglTestCase_029852_1, VkglTestCase_029852_2);

#define VkglTestCase_029853_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029853_2 "ss_32_bits.rgb10_a2ui_r11f_g11f_b10f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029853, VkglTestCase_029853_1, VkglTestCase_029853_2);

#define VkglTestCase_029854_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029854_2 "ss_32_bits.rgb10_a2ui_r11f_g11f_b10f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029854, VkglTestCase_029854_1, VkglTestCase_029854_2);

#define VkglTestCase_029855_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029855_2 "ass_32_bits.rgb10_a2ui_r11f_g11f_b10f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029855, VkglTestCase_029855_1, VkglTestCase_029855_2);

#define VkglTestCase_029856_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029856_2 "32_bits.rgb10_a2ui_r11f_g11f_b10f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029856, VkglTestCase_029856_1, VkglTestCase_029856_2);

#define VkglTestCase_029857_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029857_2 "2_bits.rgb10_a2ui_r11f_g11f_b10f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029857, VkglTestCase_029857_1, VkglTestCase_029857_2);

#define VkglTestCase_029858_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029858_2 "2_bits.rgb10_a2ui_r11f_g11f_b10f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029858, VkglTestCase_029858_1, VkglTestCase_029858_2);

#define VkglTestCase_029859_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029859_2 "32_bits.rgb10_a2ui_r11f_g11f_b10f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029859, VkglTestCase_029859_1, VkglTestCase_029859_2);

#define VkglTestCase_029860_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_b"
#define VkglTestCase_029860_2 "its.rgb10_a2ui_r11f_g11f_b10f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029860, VkglTestCase_029860_1, VkglTestCase_029860_2);

#define VkglTestCase_029861_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029861_2 "32_bits.rgb10_a2ui_r11f_g11f_b10f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029861, VkglTestCase_029861_1, VkglTestCase_029861_2);

#define VkglTestCase_029862_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029862_2 "32_bits.rgb10_a2ui_r11f_g11f_b10f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029862, VkglTestCase_029862_1, VkglTestCase_029862_2);

#define VkglTestCase_029863_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029863_2 "_32_bits.rgb10_a2ui_r11f_g11f_b10f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029863, VkglTestCase_029863_1, VkglTestCase_029863_2);

#define VkglTestCase_029864_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_029864_2 "bits.rgb10_a2ui_r11f_g11f_b10f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029864, VkglTestCase_029864_1, VkglTestCase_029864_2);
