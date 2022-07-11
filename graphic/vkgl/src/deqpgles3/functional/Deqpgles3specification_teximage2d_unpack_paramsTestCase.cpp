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
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025864_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_025864_2 "on.teximage2d_unpack_params.rgb8_alignment"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025864, VkglTestCase_025864_1, VkglTestCase_025864_2);

#define VkglTestCase_025865_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_025865_2 "n.teximage2d_unpack_params.rgb8_row_length"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025865, VkglTestCase_025865_1, VkglTestCase_025865_2);

#define VkglTestCase_025866_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_025866_2 "on.teximage2d_unpack_params.rgb8_skip_rows"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025866, VkglTestCase_025866_1, VkglTestCase_025866_2);

#define VkglTestCase_025867_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_025867_2 "n.teximage2d_unpack_params.rgb8_skip_pixels"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025867, VkglTestCase_025867_1, VkglTestCase_025867_2);

#define VkglTestCase_025868_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_025868_2 "ion.teximage2d_unpack_params.r8_complex1"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025868, VkglTestCase_025868_1, VkglTestCase_025868_2);

#define VkglTestCase_025869_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_025869_2 "ion.teximage2d_unpack_params.r8_complex2"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025869, VkglTestCase_025869_1, VkglTestCase_025869_2);

#define VkglTestCase_025870_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_025870_2 "ion.teximage2d_unpack_params.r8_complex3"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025870, VkglTestCase_025870_1, VkglTestCase_025870_2);

#define VkglTestCase_025871_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_025871_2 "ion.teximage2d_unpack_params.r8_complex4"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025871, VkglTestCase_025871_1, VkglTestCase_025871_2);

#define VkglTestCase_025872_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_025872_2 "on.teximage2d_unpack_params.rgba8_complex1"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025872, VkglTestCase_025872_1, VkglTestCase_025872_2);

#define VkglTestCase_025873_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_025873_2 "on.teximage2d_unpack_params.rgba8_complex2"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025873, VkglTestCase_025873_1, VkglTestCase_025873_2);

#define VkglTestCase_025874_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_025874_2 "on.teximage2d_unpack_params.rgba8_complex3"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025874, VkglTestCase_025874_1, VkglTestCase_025874_2);

#define VkglTestCase_025875_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_025875_2 "on.teximage2d_unpack_params.rgba8_complex4"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025875, VkglTestCase_025875_1, VkglTestCase_025875_2);

#define VkglTestCase_025876_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_025876_2 "n.teximage2d_unpack_params.rgba32f_complex"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025876, VkglTestCase_025876_1, VkglTestCase_025876_2);
