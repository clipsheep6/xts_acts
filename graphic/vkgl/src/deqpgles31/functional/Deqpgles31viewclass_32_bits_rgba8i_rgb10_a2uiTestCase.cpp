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
#include "../ActsDeqpgles310029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028933_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028933_2 "class_32_bits.rgba8i_rgb10_a2ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028933, VkglTestCase_028933_1, VkglTestCase_028933_2);

#define VkglTestCase_028934_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028934_2 "class_32_bits.rgba8i_rgb10_a2ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028934, VkglTestCase_028934_1, VkglTestCase_028934_2);

#define VkglTestCase_028935_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028935_2 "wclass_32_bits.rgba8i_rgb10_a2ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028935, VkglTestCase_028935_1, VkglTestCase_028935_2);

#define VkglTestCase_028936_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028936_2 "ss_32_bits.rgba8i_rgb10_a2ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028936, VkglTestCase_028936_1, VkglTestCase_028936_2);

#define VkglTestCase_028937_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028937_2 "ass_32_bits.rgba8i_rgb10_a2ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028937, VkglTestCase_028937_1, VkglTestCase_028937_2);

#define VkglTestCase_028938_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028938_2 "class_32_bits.rgba8i_rgb10_a2ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028938, VkglTestCase_028938_1, VkglTestCase_028938_2);

#define VkglTestCase_028939_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028939_2 "class_32_bits.rgba8i_rgb10_a2ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028939, VkglTestCase_028939_1, VkglTestCase_028939_2);

#define VkglTestCase_028940_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028940_2 "wclass_32_bits.rgba8i_rgb10_a2ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028940, VkglTestCase_028940_1, VkglTestCase_028940_2);

#define VkglTestCase_028941_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028941_2 "ss_32_bits.rgba8i_rgb10_a2ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028941, VkglTestCase_028941_1, VkglTestCase_028941_2);

#define VkglTestCase_028942_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028942_2 "ass_32_bits.rgba8i_rgb10_a2ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028942, VkglTestCase_028942_1, VkglTestCase_028942_2);

#define VkglTestCase_028943_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028943_2 "wclass_32_bits.rgba8i_rgb10_a2ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028943, VkglTestCase_028943_1, VkglTestCase_028943_2);

#define VkglTestCase_028944_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028944_2 "wclass_32_bits.rgba8i_rgb10_a2ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028944, VkglTestCase_028944_1, VkglTestCase_028944_2);

#define VkglTestCase_028945_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028945_2 "ewclass_32_bits.rgba8i_rgb10_a2ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028945, VkglTestCase_028945_1, VkglTestCase_028945_2);

#define VkglTestCase_028946_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028946_2 "ass_32_bits.rgba8i_rgb10_a2ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028946, VkglTestCase_028946_1, VkglTestCase_028946_2);

#define VkglTestCase_028947_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028947_2 "lass_32_bits.rgba8i_rgb10_a2ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028947, VkglTestCase_028947_1, VkglTestCase_028947_2);

#define VkglTestCase_028948_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028948_2 "ss_32_bits.rgba8i_rgb10_a2ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028948, VkglTestCase_028948_1, VkglTestCase_028948_2);

#define VkglTestCase_028949_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028949_2 "ss_32_bits.rgba8i_rgb10_a2ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028949, VkglTestCase_028949_1, VkglTestCase_028949_2);

#define VkglTestCase_028950_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028950_2 "ass_32_bits.rgba8i_rgb10_a2ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028950, VkglTestCase_028950_1, VkglTestCase_028950_2);

#define VkglTestCase_028951_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_028951_2 "32_bits.rgba8i_rgb10_a2ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028951, VkglTestCase_028951_1, VkglTestCase_028951_2);

#define VkglTestCase_028952_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028952_2 "_32_bits.rgba8i_rgb10_a2ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028952, VkglTestCase_028952_1, VkglTestCase_028952_2);

#define VkglTestCase_028953_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028953_2 "ass_32_bits.rgba8i_rgb10_a2ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028953, VkglTestCase_028953_1, VkglTestCase_028953_2);

#define VkglTestCase_028954_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028954_2 "ass_32_bits.rgba8i_rgb10_a2ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028954, VkglTestCase_028954_1, VkglTestCase_028954_2);

#define VkglTestCase_028955_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028955_2 "lass_32_bits.rgba8i_rgb10_a2ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028955, VkglTestCase_028955_1, VkglTestCase_028955_2);

#define VkglTestCase_028956_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028956_2 "_32_bits.rgba8i_rgb10_a2ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028956, VkglTestCase_028956_1, VkglTestCase_028956_2);

#define VkglTestCase_028957_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028957_2 "ss_32_bits.rgba8i_rgb10_a2ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028957, VkglTestCase_028957_1, VkglTestCase_028957_2);
