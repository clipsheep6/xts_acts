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

#define VkglTestCase_031297_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031297_2 "iewclass_24_bits.rgb8i_rgb8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031297, VkglTestCase_031297_1, VkglTestCase_031297_2);

#define VkglTestCase_031298_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031298_2 "iewclass_24_bits.rgb8i_rgb8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031298, VkglTestCase_031298_1, VkglTestCase_031298_2);

#define VkglTestCase_031299_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031299_2 "viewclass_24_bits.rgb8i_rgb8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031299, VkglTestCase_031299_1, VkglTestCase_031299_2);

#define VkglTestCase_031300_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031300_2 "class_24_bits.rgb8i_rgb8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031300, VkglTestCase_031300_1, VkglTestCase_031300_2);

#define VkglTestCase_031301_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031301_2 "ewclass_24_bits.rgb8i_rgb8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031301, VkglTestCase_031301_1, VkglTestCase_031301_2);

#define VkglTestCase_031302_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031302_2 "iewclass_24_bits.rgb8i_rgb8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031302, VkglTestCase_031302_1, VkglTestCase_031302_2);

#define VkglTestCase_031303_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031303_2 "iewclass_24_bits.rgb8i_rgb8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031303, VkglTestCase_031303_1, VkglTestCase_031303_2);

#define VkglTestCase_031304_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031304_2 "viewclass_24_bits.rgb8i_rgb8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031304, VkglTestCase_031304_1, VkglTestCase_031304_2);

#define VkglTestCase_031305_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031305_2 "class_24_bits.rgb8i_rgb8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031305, VkglTestCase_031305_1, VkglTestCase_031305_2);

#define VkglTestCase_031306_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031306_2 "ewclass_24_bits.rgb8i_rgb8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031306, VkglTestCase_031306_1, VkglTestCase_031306_2);

#define VkglTestCase_031307_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031307_2 "viewclass_24_bits.rgb8i_rgb8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031307, VkglTestCase_031307_1, VkglTestCase_031307_2);

#define VkglTestCase_031308_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031308_2 "viewclass_24_bits.rgb8i_rgb8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031308, VkglTestCase_031308_1, VkglTestCase_031308_2);

#define VkglTestCase_031309_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031309_2 ".viewclass_24_bits.rgb8i_rgb8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031309, VkglTestCase_031309_1, VkglTestCase_031309_2);

#define VkglTestCase_031310_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031310_2 "wclass_24_bits.rgb8i_rgb8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031310, VkglTestCase_031310_1, VkglTestCase_031310_2);

#define VkglTestCase_031311_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031311_2 "iewclass_24_bits.rgb8i_rgb8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031311, VkglTestCase_031311_1, VkglTestCase_031311_2);

#define VkglTestCase_031312_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031312_2 "class_24_bits.rgb8i_rgb8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031312, VkglTestCase_031312_1, VkglTestCase_031312_2);

#define VkglTestCase_031313_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031313_2 "class_24_bits.rgb8i_rgb8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031313, VkglTestCase_031313_1, VkglTestCase_031313_2);

#define VkglTestCase_031314_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031314_2 "wclass_24_bits.rgb8i_rgb8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031314, VkglTestCase_031314_1, VkglTestCase_031314_2);

#define VkglTestCase_031315_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031315_2 "ss_24_bits.rgb8i_rgb8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031315, VkglTestCase_031315_1, VkglTestCase_031315_2);

#define VkglTestCase_031316_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031316_2 "lass_24_bits.rgb8i_rgb8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031316, VkglTestCase_031316_1, VkglTestCase_031316_2);
