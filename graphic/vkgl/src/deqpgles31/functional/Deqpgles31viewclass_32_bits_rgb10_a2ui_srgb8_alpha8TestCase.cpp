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

#define VkglTestCase_029935_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029935_2 "ss_32_bits.rgb10_a2ui_srgb8_alpha8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029935, VkglTestCase_029935_1, VkglTestCase_029935_2);

#define VkglTestCase_029936_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029936_2 "ss_32_bits.rgb10_a2ui_srgb8_alpha8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029936, VkglTestCase_029936_1, VkglTestCase_029936_2);

#define VkglTestCase_029937_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029937_2 "ass_32_bits.rgb10_a2ui_srgb8_alpha8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029937, VkglTestCase_029937_1, VkglTestCase_029937_2);

#define VkglTestCase_029938_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029938_2 "32_bits.rgb10_a2ui_srgb8_alpha8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029938, VkglTestCase_029938_1, VkglTestCase_029938_2);

#define VkglTestCase_029939_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029939_2 "_32_bits.rgb10_a2ui_srgb8_alpha8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029939, VkglTestCase_029939_1, VkglTestCase_029939_2);

#define VkglTestCase_029940_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029940_2 "ss_32_bits.rgb10_a2ui_srgb8_alpha8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029940, VkglTestCase_029940_1, VkglTestCase_029940_2);

#define VkglTestCase_029941_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029941_2 "ss_32_bits.rgb10_a2ui_srgb8_alpha8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029941, VkglTestCase_029941_1, VkglTestCase_029941_2);

#define VkglTestCase_029942_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029942_2 "ass_32_bits.rgb10_a2ui_srgb8_alpha8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029942, VkglTestCase_029942_1, VkglTestCase_029942_2);

#define VkglTestCase_029943_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029943_2 "32_bits.rgb10_a2ui_srgb8_alpha8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029943, VkglTestCase_029943_1, VkglTestCase_029943_2);

#define VkglTestCase_029944_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029944_2 "_32_bits.rgb10_a2ui_srgb8_alpha8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029944, VkglTestCase_029944_1, VkglTestCase_029944_2);

#define VkglTestCase_029945_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029945_2 "ass_32_bits.rgb10_a2ui_srgb8_alpha8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029945, VkglTestCase_029945_1, VkglTestCase_029945_2);

#define VkglTestCase_029946_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029946_2 "ass_32_bits.rgb10_a2ui_srgb8_alpha8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029946, VkglTestCase_029946_1, VkglTestCase_029946_2);

#define VkglTestCase_029947_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029947_2 "lass_32_bits.rgb10_a2ui_srgb8_alpha8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029947, VkglTestCase_029947_1, VkglTestCase_029947_2);

#define VkglTestCase_029948_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029948_2 "_32_bits.rgb10_a2ui_srgb8_alpha8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029948, VkglTestCase_029948_1, VkglTestCase_029948_2);

#define VkglTestCase_029949_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029949_2 "s_32_bits.rgb10_a2ui_srgb8_alpha8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029949, VkglTestCase_029949_1, VkglTestCase_029949_2);

#define VkglTestCase_029950_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029950_2 "32_bits.rgb10_a2ui_srgb8_alpha8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029950, VkglTestCase_029950_1, VkglTestCase_029950_2);

#define VkglTestCase_029951_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029951_2 "32_bits.rgb10_a2ui_srgb8_alpha8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029951, VkglTestCase_029951_1, VkglTestCase_029951_2);

#define VkglTestCase_029952_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029952_2 "_32_bits.rgb10_a2ui_srgb8_alpha8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029952, VkglTestCase_029952_1, VkglTestCase_029952_2);

#define VkglTestCase_029953_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_029953_2 "bits.rgb10_a2ui_srgb8_alpha8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029953, VkglTestCase_029953_1, VkglTestCase_029953_2);

#define VkglTestCase_029954_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029954_2 "_bits.rgb10_a2ui_srgb8_alpha8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029954, VkglTestCase_029954_1, VkglTestCase_029954_2);

#define VkglTestCase_029955_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029955_2 "_32_bits.rgb10_a2ui_srgb8_alpha8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029955, VkglTestCase_029955_1, VkglTestCase_029955_2);

#define VkglTestCase_029956_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029956_2 "_32_bits.rgb10_a2ui_srgb8_alpha8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029956, VkglTestCase_029956_1, VkglTestCase_029956_2);

#define VkglTestCase_029957_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029957_2 "s_32_bits.rgb10_a2ui_srgb8_alpha8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029957, VkglTestCase_029957_1, VkglTestCase_029957_2);

#define VkglTestCase_029958_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029958_2 "_bits.rgb10_a2ui_srgb8_alpha8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029958, VkglTestCase_029958_1, VkglTestCase_029958_2);

#define VkglTestCase_029959_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029959_2 "32_bits.rgb10_a2ui_srgb8_alpha8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029959, VkglTestCase_029959_1, VkglTestCase_029959_2);
