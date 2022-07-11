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

#define VkglTestCase_026579_1 "dEQP-GLES3.functional.texture.specification."
#define VkglTestCase_026579_2 "texsubimage3d_unpack_params.rgb8_image_height"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026579, VkglTestCase_026579_1, VkglTestCase_026579_2);

#define VkglTestCase_026580_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026580_2 ".texsubimage3d_unpack_params.rgb8_row_length"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026580, VkglTestCase_026580_1, VkglTestCase_026580_2);

#define VkglTestCase_026581_1 "dEQP-GLES3.functional.texture.specification."
#define VkglTestCase_026581_2 "texsubimage3d_unpack_params.rgb8_skip_images"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026581, VkglTestCase_026581_1, VkglTestCase_026581_2);

#define VkglTestCase_026582_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026582_2 ".texsubimage3d_unpack_params.rgb8_skip_rows"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026582, VkglTestCase_026582_1, VkglTestCase_026582_2);

#define VkglTestCase_026583_1 "dEQP-GLES3.functional.texture.specification."
#define VkglTestCase_026583_2 "texsubimage3d_unpack_params.rgb8_skip_pixels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026583, VkglTestCase_026583_1, VkglTestCase_026583_2);

#define VkglTestCase_026584_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026584_2 "on.texsubimage3d_unpack_params.r8_complex1"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026584, VkglTestCase_026584_1, VkglTestCase_026584_2);

#define VkglTestCase_026585_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026585_2 "on.texsubimage3d_unpack_params.r8_complex2"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026585, VkglTestCase_026585_1, VkglTestCase_026585_2);

#define VkglTestCase_026586_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026586_2 "on.texsubimage3d_unpack_params.r8_complex3"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026586, VkglTestCase_026586_1, VkglTestCase_026586_2);

#define VkglTestCase_026587_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026587_2 "on.texsubimage3d_unpack_params.r8_complex4"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026587, VkglTestCase_026587_1, VkglTestCase_026587_2);

#define VkglTestCase_026588_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026588_2 ".texsubimage3d_unpack_params.rgba8_complex1"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026588, VkglTestCase_026588_1, VkglTestCase_026588_2);

#define VkglTestCase_026589_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026589_2 ".texsubimage3d_unpack_params.rgba8_complex2"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026589, VkglTestCase_026589_1, VkglTestCase_026589_2);

#define VkglTestCase_026590_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026590_2 ".texsubimage3d_unpack_params.rgba8_complex3"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026590, VkglTestCase_026590_1, VkglTestCase_026590_2);

#define VkglTestCase_026591_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026591_2 ".texsubimage3d_unpack_params.rgba8_complex4"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026591, VkglTestCase_026591_1, VkglTestCase_026591_2);

#define VkglTestCase_026592_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026592_2 ".texsubimage3d_unpack_params.rgba32f_complex"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026592, VkglTestCase_026592_1, VkglTestCase_026592_2);
