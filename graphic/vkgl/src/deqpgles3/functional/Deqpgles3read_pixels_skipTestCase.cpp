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
#include "../ActsDeqpgles30043TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_042322_1 "dEQP-GLES3.functional.read"
#define VkglTestCase_042322_2 "_pixels.skip.rgba_ubyte_0_3"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042322, VkglTestCase_042322_1, VkglTestCase_042322_2);

#define VkglTestCase_042323_1 "dEQP-GLES3.functional.read"
#define VkglTestCase_042323_2 "_pixels.skip.rgba_ubyte_3_0"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042323, VkglTestCase_042323_1, VkglTestCase_042323_2);

#define VkglTestCase_042324_1 "dEQP-GLES3.functional.read"
#define VkglTestCase_042324_2 "_pixels.skip.rgba_ubyte_3_3"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042324, VkglTestCase_042324_1, VkglTestCase_042324_2);

#define VkglTestCase_042325_1 "dEQP-GLES3.functional.read"
#define VkglTestCase_042325_2 "_pixels.skip.rgba_ubyte_3_5"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042325, VkglTestCase_042325_1, VkglTestCase_042325_2);

#define VkglTestCase_042326_1 "dEQP-GLES3.functional.rea"
#define VkglTestCase_042326_2 "d_pixels.skip.rgba_int_0_3"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042326, VkglTestCase_042326_1, VkglTestCase_042326_2);

#define VkglTestCase_042327_1 "dEQP-GLES3.functional.rea"
#define VkglTestCase_042327_2 "d_pixels.skip.rgba_int_3_0"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042327, VkglTestCase_042327_1, VkglTestCase_042327_2);

#define VkglTestCase_042328_1 "dEQP-GLES3.functional.rea"
#define VkglTestCase_042328_2 "d_pixels.skip.rgba_int_3_3"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042328, VkglTestCase_042328_1, VkglTestCase_042328_2);

#define VkglTestCase_042329_1 "dEQP-GLES3.functional.rea"
#define VkglTestCase_042329_2 "d_pixels.skip.rgba_int_3_5"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042329, VkglTestCase_042329_1, VkglTestCase_042329_2);

#define VkglTestCase_042330_1 "dEQP-GLES3.functional.read"
#define VkglTestCase_042330_2 "_pixels.skip.rgba_uint_0_3"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042330, VkglTestCase_042330_1, VkglTestCase_042330_2);

#define VkglTestCase_042331_1 "dEQP-GLES3.functional.read"
#define VkglTestCase_042331_2 "_pixels.skip.rgba_uint_3_0"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042331, VkglTestCase_042331_1, VkglTestCase_042331_2);

#define VkglTestCase_042332_1 "dEQP-GLES3.functional.read"
#define VkglTestCase_042332_2 "_pixels.skip.rgba_uint_3_3"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042332, VkglTestCase_042332_1, VkglTestCase_042332_2);

#define VkglTestCase_042333_1 "dEQP-GLES3.functional.read"
#define VkglTestCase_042333_2 "_pixels.skip.rgba_uint_3_5"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042333, VkglTestCase_042333_1, VkglTestCase_042333_2);

#define VkglTestCase_042334_1 "dEQP-GLES3.functional.re"
#define VkglTestCase_042334_2 "ad_pixels.skip.choose_0_3"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042334, VkglTestCase_042334_1, VkglTestCase_042334_2);

#define VkglTestCase_042335_1 "dEQP-GLES3.functional.re"
#define VkglTestCase_042335_2 "ad_pixels.skip.choose_3_0"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042335, VkglTestCase_042335_1, VkglTestCase_042335_2);

#define VkglTestCase_042336_1 "dEQP-GLES3.functional.re"
#define VkglTestCase_042336_2 "ad_pixels.skip.choose_3_3"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042336, VkglTestCase_042336_1, VkglTestCase_042336_2);

#define VkglTestCase_042337_1 "dEQP-GLES3.functional.re"
#define VkglTestCase_042337_2 "ad_pixels.skip.choose_3_5"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042337, VkglTestCase_042337_1, VkglTestCase_042337_2);
