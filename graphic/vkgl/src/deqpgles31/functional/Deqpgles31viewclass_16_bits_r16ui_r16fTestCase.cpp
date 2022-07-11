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

#define VkglTestCase_031930_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031930_2 "iewclass_16_bits.r16ui_r16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031930, VkglTestCase_031930_1, VkglTestCase_031930_2);

#define VkglTestCase_031931_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031931_2 "iewclass_16_bits.r16ui_r16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031931, VkglTestCase_031931_1, VkglTestCase_031931_2);

#define VkglTestCase_031932_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031932_2 "viewclass_16_bits.r16ui_r16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031932, VkglTestCase_031932_1, VkglTestCase_031932_2);

#define VkglTestCase_031933_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031933_2 "class_16_bits.r16ui_r16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031933, VkglTestCase_031933_1, VkglTestCase_031933_2);

#define VkglTestCase_031934_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031934_2 "iewclass_16_bits.r16ui_r16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031934, VkglTestCase_031934_1, VkglTestCase_031934_2);

#define VkglTestCase_031935_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031935_2 "iewclass_16_bits.r16ui_r16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031935, VkglTestCase_031935_1, VkglTestCase_031935_2);

#define VkglTestCase_031936_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031936_2 "viewclass_16_bits.r16ui_r16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031936, VkglTestCase_031936_1, VkglTestCase_031936_2);

#define VkglTestCase_031937_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031937_2 "class_16_bits.r16ui_r16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031937, VkglTestCase_031937_1, VkglTestCase_031937_2);

#define VkglTestCase_031938_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031938_2 "viewclass_16_bits.r16ui_r16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031938, VkglTestCase_031938_1, VkglTestCase_031938_2);

#define VkglTestCase_031939_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031939_2 "viewclass_16_bits.r16ui_r16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031939, VkglTestCase_031939_1, VkglTestCase_031939_2);

#define VkglTestCase_031940_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031940_2 ".viewclass_16_bits.r16ui_r16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031940, VkglTestCase_031940_1, VkglTestCase_031940_2);

#define VkglTestCase_031941_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031941_2 "wclass_16_bits.r16ui_r16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031941, VkglTestCase_031941_1, VkglTestCase_031941_2);

#define VkglTestCase_031942_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031942_2 "class_16_bits.r16ui_r16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031942, VkglTestCase_031942_1, VkglTestCase_031942_2);

#define VkglTestCase_031943_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031943_2 "class_16_bits.r16ui_r16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031943, VkglTestCase_031943_1, VkglTestCase_031943_2);

#define VkglTestCase_031944_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031944_2 "wclass_16_bits.r16ui_r16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031944, VkglTestCase_031944_1, VkglTestCase_031944_2);

#define VkglTestCase_031945_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031945_2 "ss_16_bits.r16ui_r16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031945, VkglTestCase_031945_1, VkglTestCase_031945_2);

#define VkglTestCase_031946_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031946_2 "ewclass_16_bits.r16ui_r16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031946, VkglTestCase_031946_1, VkglTestCase_031946_2);

#define VkglTestCase_031947_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031947_2 "ewclass_16_bits.r16ui_r16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031947, VkglTestCase_031947_1, VkglTestCase_031947_2);

#define VkglTestCase_031948_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031948_2 "iewclass_16_bits.r16ui_r16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031948, VkglTestCase_031948_1, VkglTestCase_031948_2);

#define VkglTestCase_031949_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031949_2 "lass_16_bits.r16ui_r16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031949, VkglTestCase_031949_1, VkglTestCase_031949_2);
