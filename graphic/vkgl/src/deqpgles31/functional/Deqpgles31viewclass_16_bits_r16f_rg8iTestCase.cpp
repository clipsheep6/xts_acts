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

#define VkglTestCase_031709_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031709_2 "viewclass_16_bits.r16f_rg8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031709, VkglTestCase_031709_1, VkglTestCase_031709_2);

#define VkglTestCase_031710_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031710_2 "viewclass_16_bits.r16f_rg8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031710, VkglTestCase_031710_1, VkglTestCase_031710_2);

#define VkglTestCase_031711_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031711_2 ".viewclass_16_bits.r16f_rg8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031711, VkglTestCase_031711_1, VkglTestCase_031711_2);

#define VkglTestCase_031712_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031712_2 "wclass_16_bits.r16f_rg8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031712, VkglTestCase_031712_1, VkglTestCase_031712_2);

#define VkglTestCase_031713_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031713_2 "ewclass_16_bits.r16f_rg8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031713, VkglTestCase_031713_1, VkglTestCase_031713_2);

#define VkglTestCase_031714_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031714_2 "viewclass_16_bits.r16f_rg8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031714, VkglTestCase_031714_1, VkglTestCase_031714_2);

#define VkglTestCase_031715_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031715_2 "viewclass_16_bits.r16f_rg8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031715, VkglTestCase_031715_1, VkglTestCase_031715_2);

#define VkglTestCase_031716_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031716_2 ".viewclass_16_bits.r16f_rg8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031716, VkglTestCase_031716_1, VkglTestCase_031716_2);

#define VkglTestCase_031717_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031717_2 "wclass_16_bits.r16f_rg8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031717, VkglTestCase_031717_1, VkglTestCase_031717_2);

#define VkglTestCase_031718_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031718_2 "ewclass_16_bits.r16f_rg8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031718, VkglTestCase_031718_1, VkglTestCase_031718_2);

#define VkglTestCase_031719_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031719_2 ".viewclass_16_bits.r16f_rg8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031719, VkglTestCase_031719_1, VkglTestCase_031719_2);

#define VkglTestCase_031720_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031720_2 ".viewclass_16_bits.r16f_rg8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031720, VkglTestCase_031720_1, VkglTestCase_031720_2);

#define VkglTestCase_031721_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_031721_2 "d.viewclass_16_bits.r16f_rg8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031721, VkglTestCase_031721_1, VkglTestCase_031721_2);

#define VkglTestCase_031722_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031722_2 "ewclass_16_bits.r16f_rg8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031722, VkglTestCase_031722_1, VkglTestCase_031722_2);

#define VkglTestCase_031723_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031723_2 "iewclass_16_bits.r16f_rg8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031723, VkglTestCase_031723_1, VkglTestCase_031723_2);

#define VkglTestCase_031724_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031724_2 "wclass_16_bits.r16f_rg8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031724, VkglTestCase_031724_1, VkglTestCase_031724_2);

#define VkglTestCase_031725_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031725_2 "wclass_16_bits.r16f_rg8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031725, VkglTestCase_031725_1, VkglTestCase_031725_2);

#define VkglTestCase_031726_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031726_2 "ewclass_16_bits.r16f_rg8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031726, VkglTestCase_031726_1, VkglTestCase_031726_2);

#define VkglTestCase_031727_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031727_2 "ass_16_bits.r16f_rg8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031727, VkglTestCase_031727_1, VkglTestCase_031727_2);

#define VkglTestCase_031728_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031728_2 "lass_16_bits.r16f_rg8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031728, VkglTestCase_031728_1, VkglTestCase_031728_2);
