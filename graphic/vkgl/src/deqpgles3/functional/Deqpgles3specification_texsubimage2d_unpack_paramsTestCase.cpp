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

#define VkglTestCase_026149_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026149_2 ".texsubimage2d_unpack_params.rgb8_alignment"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026149, VkglTestCase_026149_1, VkglTestCase_026149_2);

#define VkglTestCase_026150_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026150_2 ".texsubimage2d_unpack_params.rgb8_row_length"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026150, VkglTestCase_026150_1, VkglTestCase_026150_2);

#define VkglTestCase_026151_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026151_2 ".texsubimage2d_unpack_params.rgb8_skip_rows"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026151, VkglTestCase_026151_1, VkglTestCase_026151_2);

#define VkglTestCase_026152_1 "dEQP-GLES3.functional.texture.specification."
#define VkglTestCase_026152_2 "texsubimage2d_unpack_params.rgb8_skip_pixels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026152, VkglTestCase_026152_1, VkglTestCase_026152_2);

#define VkglTestCase_026153_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026153_2 "on.texsubimage2d_unpack_params.r8_complex1"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026153, VkglTestCase_026153_1, VkglTestCase_026153_2);

#define VkglTestCase_026154_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026154_2 "on.texsubimage2d_unpack_params.r8_complex2"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026154, VkglTestCase_026154_1, VkglTestCase_026154_2);

#define VkglTestCase_026155_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026155_2 "on.texsubimage2d_unpack_params.r8_complex3"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026155, VkglTestCase_026155_1, VkglTestCase_026155_2);

#define VkglTestCase_026156_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026156_2 "on.texsubimage2d_unpack_params.r8_complex4"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026156, VkglTestCase_026156_1, VkglTestCase_026156_2);

#define VkglTestCase_026157_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026157_2 ".texsubimage2d_unpack_params.rgba8_complex1"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026157, VkglTestCase_026157_1, VkglTestCase_026157_2);

#define VkglTestCase_026158_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026158_2 ".texsubimage2d_unpack_params.rgba8_complex2"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026158, VkglTestCase_026158_1, VkglTestCase_026158_2);

#define VkglTestCase_026159_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026159_2 ".texsubimage2d_unpack_params.rgba8_complex3"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026159, VkglTestCase_026159_1, VkglTestCase_026159_2);

#define VkglTestCase_026160_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026160_2 ".texsubimage2d_unpack_params.rgba8_complex4"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026160, VkglTestCase_026160_1, VkglTestCase_026160_2);

#define VkglTestCase_026161_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026161_2 ".texsubimage2d_unpack_params.rgba32f_complex"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026161, VkglTestCase_026161_1, VkglTestCase_026161_2);
