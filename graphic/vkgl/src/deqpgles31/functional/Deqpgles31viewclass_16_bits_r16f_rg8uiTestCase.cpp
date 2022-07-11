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

#define VkglTestCase_031729_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031729_2 "iewclass_16_bits.r16f_rg8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031729, VkglTestCase_031729_1, VkglTestCase_031729_2);

#define VkglTestCase_031730_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031730_2 "iewclass_16_bits.r16f_rg8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031730, VkglTestCase_031730_1, VkglTestCase_031730_2);

#define VkglTestCase_031731_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031731_2 "viewclass_16_bits.r16f_rg8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031731, VkglTestCase_031731_1, VkglTestCase_031731_2);

#define VkglTestCase_031732_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031732_2 "class_16_bits.r16f_rg8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031732, VkglTestCase_031732_1, VkglTestCase_031732_2);

#define VkglTestCase_031733_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031733_2 "ewclass_16_bits.r16f_rg8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031733, VkglTestCase_031733_1, VkglTestCase_031733_2);

#define VkglTestCase_031734_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031734_2 "iewclass_16_bits.r16f_rg8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031734, VkglTestCase_031734_1, VkglTestCase_031734_2);

#define VkglTestCase_031735_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031735_2 "iewclass_16_bits.r16f_rg8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031735, VkglTestCase_031735_1, VkglTestCase_031735_2);

#define VkglTestCase_031736_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031736_2 "viewclass_16_bits.r16f_rg8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031736, VkglTestCase_031736_1, VkglTestCase_031736_2);

#define VkglTestCase_031737_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031737_2 "class_16_bits.r16f_rg8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031737, VkglTestCase_031737_1, VkglTestCase_031737_2);

#define VkglTestCase_031738_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031738_2 "ewclass_16_bits.r16f_rg8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031738, VkglTestCase_031738_1, VkglTestCase_031738_2);

#define VkglTestCase_031739_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031739_2 "viewclass_16_bits.r16f_rg8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031739, VkglTestCase_031739_1, VkglTestCase_031739_2);

#define VkglTestCase_031740_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031740_2 "viewclass_16_bits.r16f_rg8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031740, VkglTestCase_031740_1, VkglTestCase_031740_2);

#define VkglTestCase_031741_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031741_2 ".viewclass_16_bits.r16f_rg8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031741, VkglTestCase_031741_1, VkglTestCase_031741_2);

#define VkglTestCase_031742_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031742_2 "wclass_16_bits.r16f_rg8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031742, VkglTestCase_031742_1, VkglTestCase_031742_2);

#define VkglTestCase_031743_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031743_2 "iewclass_16_bits.r16f_rg8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031743, VkglTestCase_031743_1, VkglTestCase_031743_2);

#define VkglTestCase_031744_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031744_2 "class_16_bits.r16f_rg8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031744, VkglTestCase_031744_1, VkglTestCase_031744_2);

#define VkglTestCase_031745_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031745_2 "class_16_bits.r16f_rg8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031745, VkglTestCase_031745_1, VkglTestCase_031745_2);

#define VkglTestCase_031746_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031746_2 "wclass_16_bits.r16f_rg8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031746, VkglTestCase_031746_1, VkglTestCase_031746_2);

#define VkglTestCase_031747_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031747_2 "ss_16_bits.r16f_rg8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031747, VkglTestCase_031747_1, VkglTestCase_031747_2);

#define VkglTestCase_031748_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031748_2 "lass_16_bits.r16f_rg8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031748, VkglTestCase_031748_1, VkglTestCase_031748_2);
