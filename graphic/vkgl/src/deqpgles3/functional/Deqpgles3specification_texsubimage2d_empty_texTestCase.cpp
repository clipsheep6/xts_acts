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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026093_1 "dEQP-GLES3.functional.texture.specification.t"
#define VkglTestCase_026093_2 "exsubimage2d_empty_tex.alpha_unsigned_byte_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026093, VkglTestCase_026093_1, VkglTestCase_026093_2);

#define VkglTestCase_026094_1 "dEQP-GLES3.functional.texture.specification.te"
#define VkglTestCase_026094_2 "xsubimage2d_empty_tex.alpha_unsigned_byte_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026094, VkglTestCase_026094_1, VkglTestCase_026094_2);

#define VkglTestCase_026095_1 "dEQP-GLES3.functional.texture.specification.tex"
#define VkglTestCase_026095_2 "subimage2d_empty_tex.luminance_unsigned_byte_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026095, VkglTestCase_026095_1, VkglTestCase_026095_2);

#define VkglTestCase_026096_1 "dEQP-GLES3.functional.texture.specification.texs"
#define VkglTestCase_026096_2 "ubimage2d_empty_tex.luminance_unsigned_byte_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026096, VkglTestCase_026096_1, VkglTestCase_026096_2);

#define VkglTestCase_026097_1 "dEQP-GLES3.functional.texture.specification.texsub"
#define VkglTestCase_026097_2 "image2d_empty_tex.luminance_alpha_unsigned_byte_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026097, VkglTestCase_026097_1, VkglTestCase_026097_2);

#define VkglTestCase_026098_1 "dEQP-GLES3.functional.texture.specification.texsubi"
#define VkglTestCase_026098_2 "mage2d_empty_tex.luminance_alpha_unsigned_byte_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026098, VkglTestCase_026098_1, VkglTestCase_026098_2);

#define VkglTestCase_026099_1 "dEQP-GLES3.functional.texture.specification.tex"
#define VkglTestCase_026099_2 "subimage2d_empty_tex.rgb_unsigned_short_5_6_5_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026099, VkglTestCase_026099_1, VkglTestCase_026099_2);

#define VkglTestCase_026100_1 "dEQP-GLES3.functional.texture.specification.texs"
#define VkglTestCase_026100_2 "ubimage2d_empty_tex.rgb_unsigned_short_5_6_5_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026100, VkglTestCase_026100_1, VkglTestCase_026100_2);

#define VkglTestCase_026101_1 "dEQP-GLES3.functional.texture.specification."
#define VkglTestCase_026101_2 "texsubimage2d_empty_tex.rgb_unsigned_byte_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026101, VkglTestCase_026101_1, VkglTestCase_026101_2);

#define VkglTestCase_026102_1 "dEQP-GLES3.functional.texture.specification.t"
#define VkglTestCase_026102_2 "exsubimage2d_empty_tex.rgb_unsigned_byte_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026102, VkglTestCase_026102_1, VkglTestCase_026102_2);

#define VkglTestCase_026103_1 "dEQP-GLES3.functional.texture.specification.texsu"
#define VkglTestCase_026103_2 "bimage2d_empty_tex.rgba_unsigned_short_4_4_4_4_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026103, VkglTestCase_026103_1, VkglTestCase_026103_2);

#define VkglTestCase_026104_1 "dEQP-GLES3.functional.texture.specification.texsub"
#define VkglTestCase_026104_2 "image2d_empty_tex.rgba_unsigned_short_4_4_4_4_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026104, VkglTestCase_026104_1, VkglTestCase_026104_2);

#define VkglTestCase_026105_1 "dEQP-GLES3.functional.texture.specification.texsu"
#define VkglTestCase_026105_2 "bimage2d_empty_tex.rgba_unsigned_short_5_5_5_1_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026105, VkglTestCase_026105_1, VkglTestCase_026105_2);

#define VkglTestCase_026106_1 "dEQP-GLES3.functional.texture.specification.texsub"
#define VkglTestCase_026106_2 "image2d_empty_tex.rgba_unsigned_short_5_5_5_1_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026106, VkglTestCase_026106_1, VkglTestCase_026106_2);

#define VkglTestCase_026107_1 "dEQP-GLES3.functional.texture.specification."
#define VkglTestCase_026107_2 "texsubimage2d_empty_tex.rgba_unsigned_byte_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026107, VkglTestCase_026107_1, VkglTestCase_026107_2);

#define VkglTestCase_026108_1 "dEQP-GLES3.functional.texture.specification.t"
#define VkglTestCase_026108_2 "exsubimage2d_empty_tex.rgba_unsigned_byte_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026108, VkglTestCase_026108_1, VkglTestCase_026108_2);
