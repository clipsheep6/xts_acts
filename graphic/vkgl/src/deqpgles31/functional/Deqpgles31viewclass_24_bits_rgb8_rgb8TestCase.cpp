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

#define VkglTestCase_031192_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031192_2 "viewclass_24_bits.rgb8_rgb8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031192, VkglTestCase_031192_1, VkglTestCase_031192_2);

#define VkglTestCase_031193_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031193_2 "viewclass_24_bits.rgb8_rgb8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031193, VkglTestCase_031193_1, VkglTestCase_031193_2);

#define VkglTestCase_031194_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031194_2 ".viewclass_24_bits.rgb8_rgb8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031194, VkglTestCase_031194_1, VkglTestCase_031194_2);

#define VkglTestCase_031195_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031195_2 "wclass_24_bits.rgb8_rgb8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031195, VkglTestCase_031195_1, VkglTestCase_031195_2);

#define VkglTestCase_031196_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031196_2 "ewclass_24_bits.rgb8_rgb8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031196, VkglTestCase_031196_1, VkglTestCase_031196_2);

#define VkglTestCase_031197_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031197_2 "viewclass_24_bits.rgb8_rgb8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031197, VkglTestCase_031197_1, VkglTestCase_031197_2);

#define VkglTestCase_031198_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031198_2 "viewclass_24_bits.rgb8_rgb8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031198, VkglTestCase_031198_1, VkglTestCase_031198_2);

#define VkglTestCase_031199_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031199_2 ".viewclass_24_bits.rgb8_rgb8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031199, VkglTestCase_031199_1, VkglTestCase_031199_2);

#define VkglTestCase_031200_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031200_2 "wclass_24_bits.rgb8_rgb8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031200, VkglTestCase_031200_1, VkglTestCase_031200_2);

#define VkglTestCase_031201_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031201_2 "ewclass_24_bits.rgb8_rgb8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031201, VkglTestCase_031201_1, VkglTestCase_031201_2);

#define VkglTestCase_031202_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031202_2 ".viewclass_24_bits.rgb8_rgb8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031202, VkglTestCase_031202_1, VkglTestCase_031202_2);

#define VkglTestCase_031203_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031203_2 ".viewclass_24_bits.rgb8_rgb8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031203, VkglTestCase_031203_1, VkglTestCase_031203_2);

#define VkglTestCase_031204_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_031204_2 "d.viewclass_24_bits.rgb8_rgb8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031204, VkglTestCase_031204_1, VkglTestCase_031204_2);

#define VkglTestCase_031205_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031205_2 "ewclass_24_bits.rgb8_rgb8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031205, VkglTestCase_031205_1, VkglTestCase_031205_2);

#define VkglTestCase_031206_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031206_2 "iewclass_24_bits.rgb8_rgb8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031206, VkglTestCase_031206_1, VkglTestCase_031206_2);

#define VkglTestCase_031207_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031207_2 "wclass_24_bits.rgb8_rgb8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031207, VkglTestCase_031207_1, VkglTestCase_031207_2);

#define VkglTestCase_031208_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031208_2 "wclass_24_bits.rgb8_rgb8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031208, VkglTestCase_031208_1, VkglTestCase_031208_2);

#define VkglTestCase_031209_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031209_2 "ewclass_24_bits.rgb8_rgb8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031209, VkglTestCase_031209_1, VkglTestCase_031209_2);

#define VkglTestCase_031210_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031210_2 "ass_24_bits.rgb8_rgb8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031210, VkglTestCase_031210_1, VkglTestCase_031210_2);

#define VkglTestCase_031211_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031211_2 "lass_24_bits.rgb8_rgb8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031211, VkglTestCase_031211_1, VkglTestCase_031211_2);

#define VkglTestCase_031212_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031212_2 "ewclass_24_bits.rgb8_rgb8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031212, VkglTestCase_031212_1, VkglTestCase_031212_2);

#define VkglTestCase_031213_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031213_2 "ewclass_24_bits.rgb8_rgb8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031213, VkglTestCase_031213_1, VkglTestCase_031213_2);

#define VkglTestCase_031214_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031214_2 "iewclass_24_bits.rgb8_rgb8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031214, VkglTestCase_031214_1, VkglTestCase_031214_2);

#define VkglTestCase_031215_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031215_2 "lass_24_bits.rgb8_rgb8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031215, VkglTestCase_031215_1, VkglTestCase_031215_2);

#define VkglTestCase_031216_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031216_2 "wclass_24_bits.rgb8_rgb8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031216, VkglTestCase_031216_1, VkglTestCase_031216_2);
