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

#define VkglTestCase_026394_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026394_2 ".teximage3d_unpack_params.rgb8_image_height"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026394, VkglTestCase_026394_1, VkglTestCase_026394_2);

#define VkglTestCase_026395_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026395_2 "n.teximage3d_unpack_params.rgb8_row_length"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026395, VkglTestCase_026395_1, VkglTestCase_026395_2);

#define VkglTestCase_026396_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026396_2 "n.teximage3d_unpack_params.rgb8_skip_images"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026396, VkglTestCase_026396_1, VkglTestCase_026396_2);

#define VkglTestCase_026397_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026397_2 "on.teximage3d_unpack_params.rgb8_skip_rows"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026397, VkglTestCase_026397_1, VkglTestCase_026397_2);

#define VkglTestCase_026398_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026398_2 "n.teximage3d_unpack_params.rgb8_skip_pixels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026398, VkglTestCase_026398_1, VkglTestCase_026398_2);

#define VkglTestCase_026399_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026399_2 "ion.teximage3d_unpack_params.r8_complex1"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026399, VkglTestCase_026399_1, VkglTestCase_026399_2);

#define VkglTestCase_026400_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026400_2 "ion.teximage3d_unpack_params.r8_complex2"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026400, VkglTestCase_026400_1, VkglTestCase_026400_2);

#define VkglTestCase_026401_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026401_2 "ion.teximage3d_unpack_params.r8_complex3"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026401, VkglTestCase_026401_1, VkglTestCase_026401_2);

#define VkglTestCase_026402_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026402_2 "ion.teximage3d_unpack_params.r8_complex4"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026402, VkglTestCase_026402_1, VkglTestCase_026402_2);

#define VkglTestCase_026403_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026403_2 "on.teximage3d_unpack_params.rgba8_complex1"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026403, VkglTestCase_026403_1, VkglTestCase_026403_2);

#define VkglTestCase_026404_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026404_2 "on.teximage3d_unpack_params.rgba8_complex2"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026404, VkglTestCase_026404_1, VkglTestCase_026404_2);

#define VkglTestCase_026405_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026405_2 "on.teximage3d_unpack_params.rgba8_complex3"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026405, VkglTestCase_026405_1, VkglTestCase_026405_2);

#define VkglTestCase_026406_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026406_2 "on.teximage3d_unpack_params.rgba8_complex4"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026406, VkglTestCase_026406_1, VkglTestCase_026406_2);

#define VkglTestCase_026407_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026407_2 "n.teximage3d_unpack_params.rgba32f_complex"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026407, VkglTestCase_026407_1, VkglTestCase_026407_2);
