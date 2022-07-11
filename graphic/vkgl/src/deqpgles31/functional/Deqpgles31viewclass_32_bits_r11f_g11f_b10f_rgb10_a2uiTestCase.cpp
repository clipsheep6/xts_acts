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

#define VkglTestCase_029554_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029554_2 "s_32_bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029554, VkglTestCase_029554_1, VkglTestCase_029554_2);

#define VkglTestCase_029555_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029555_2 "s_32_bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029555, VkglTestCase_029555_1, VkglTestCase_029555_2);

#define VkglTestCase_029556_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029556_2 "ss_32_bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029556, VkglTestCase_029556_1, VkglTestCase_029556_2);

#define VkglTestCase_029557_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029557_2 "2_bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029557, VkglTestCase_029557_1, VkglTestCase_029557_2);

#define VkglTestCase_029558_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029558_2 "32_bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029558, VkglTestCase_029558_1, VkglTestCase_029558_2);

#define VkglTestCase_029559_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029559_2 "s_32_bits.r11f_g11f_b10f_rgb10_a2ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029559, VkglTestCase_029559_1, VkglTestCase_029559_2);

#define VkglTestCase_029560_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029560_2 "s_32_bits.r11f_g11f_b10f_rgb10_a2ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029560, VkglTestCase_029560_1, VkglTestCase_029560_2);

#define VkglTestCase_029561_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029561_2 "ss_32_bits.r11f_g11f_b10f_rgb10_a2ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029561, VkglTestCase_029561_1, VkglTestCase_029561_2);

#define VkglTestCase_029562_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029562_2 "2_bits.r11f_g11f_b10f_rgb10_a2ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029562, VkglTestCase_029562_1, VkglTestCase_029562_2);

#define VkglTestCase_029563_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029563_2 "32_bits.r11f_g11f_b10f_rgb10_a2ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029563, VkglTestCase_029563_1, VkglTestCase_029563_2);

#define VkglTestCase_029564_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029564_2 "ss_32_bits.r11f_g11f_b10f_rgb10_a2ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029564, VkglTestCase_029564_1, VkglTestCase_029564_2);

#define VkglTestCase_029565_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029565_2 "ss_32_bits.r11f_g11f_b10f_rgb10_a2ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029565, VkglTestCase_029565_1, VkglTestCase_029565_2);

#define VkglTestCase_029566_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029566_2 "ass_32_bits.r11f_g11f_b10f_rgb10_a2ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029566, VkglTestCase_029566_1, VkglTestCase_029566_2);

#define VkglTestCase_029567_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029567_2 "32_bits.r11f_g11f_b10f_rgb10_a2ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029567, VkglTestCase_029567_1, VkglTestCase_029567_2);

#define VkglTestCase_029568_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029568_2 "_32_bits.r11f_g11f_b10f_rgb10_a2ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029568, VkglTestCase_029568_1, VkglTestCase_029568_2);

#define VkglTestCase_029569_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029569_2 "2_bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029569, VkglTestCase_029569_1, VkglTestCase_029569_2);

#define VkglTestCase_029570_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029570_2 "2_bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029570, VkglTestCase_029570_1, VkglTestCase_029570_2);

#define VkglTestCase_029571_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029571_2 "32_bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029571, VkglTestCase_029571_1, VkglTestCase_029571_2);

#define VkglTestCase_029572_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_b"
#define VkglTestCase_029572_2 "its.r11f_g11f_b10f_rgb10_a2ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029572, VkglTestCase_029572_1, VkglTestCase_029572_2);

#define VkglTestCase_029573_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_029573_2 "bits.r11f_g11f_b10f_rgb10_a2ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029573, VkglTestCase_029573_1, VkglTestCase_029573_2);
