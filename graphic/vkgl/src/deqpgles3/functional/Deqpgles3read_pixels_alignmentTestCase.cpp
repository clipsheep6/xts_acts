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

#define VkglTestCase_042290_1 "dEQP-GLES3.functional.read_p"
#define VkglTestCase_042290_2 "ixels.alignment.rgba_ubyte_1"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042290, VkglTestCase_042290_1, VkglTestCase_042290_2);

#define VkglTestCase_042291_1 "dEQP-GLES3.functional.read_p"
#define VkglTestCase_042291_2 "ixels.alignment.rgba_ubyte_2"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042291, VkglTestCase_042291_1, VkglTestCase_042291_2);

#define VkglTestCase_042292_1 "dEQP-GLES3.functional.read_p"
#define VkglTestCase_042292_2 "ixels.alignment.rgba_ubyte_4"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042292, VkglTestCase_042292_1, VkglTestCase_042292_2);

#define VkglTestCase_042293_1 "dEQP-GLES3.functional.read_p"
#define VkglTestCase_042293_2 "ixels.alignment.rgba_ubyte_8"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042293, VkglTestCase_042293_1, VkglTestCase_042293_2);

#define VkglTestCase_042294_1 "dEQP-GLES3.functional.read_"
#define VkglTestCase_042294_2 "pixels.alignment.rgba_int_1"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042294, VkglTestCase_042294_1, VkglTestCase_042294_2);

#define VkglTestCase_042295_1 "dEQP-GLES3.functional.read_"
#define VkglTestCase_042295_2 "pixels.alignment.rgba_int_2"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042295, VkglTestCase_042295_1, VkglTestCase_042295_2);

#define VkglTestCase_042296_1 "dEQP-GLES3.functional.read_"
#define VkglTestCase_042296_2 "pixels.alignment.rgba_int_4"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042296, VkglTestCase_042296_1, VkglTestCase_042296_2);

#define VkglTestCase_042297_1 "dEQP-GLES3.functional.read_"
#define VkglTestCase_042297_2 "pixels.alignment.rgba_int_8"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042297, VkglTestCase_042297_1, VkglTestCase_042297_2);

#define VkglTestCase_042298_1 "dEQP-GLES3.functional.read_"
#define VkglTestCase_042298_2 "pixels.alignment.rgba_uint_1"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042298, VkglTestCase_042298_1, VkglTestCase_042298_2);

#define VkglTestCase_042299_1 "dEQP-GLES3.functional.read_"
#define VkglTestCase_042299_2 "pixels.alignment.rgba_uint_2"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042299, VkglTestCase_042299_1, VkglTestCase_042299_2);

#define VkglTestCase_042300_1 "dEQP-GLES3.functional.read_"
#define VkglTestCase_042300_2 "pixels.alignment.rgba_uint_4"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042300, VkglTestCase_042300_1, VkglTestCase_042300_2);

#define VkglTestCase_042301_1 "dEQP-GLES3.functional.read_"
#define VkglTestCase_042301_2 "pixels.alignment.rgba_uint_8"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042301, VkglTestCase_042301_1, VkglTestCase_042301_2);

#define VkglTestCase_042302_1 "dEQP-GLES3.functional.read"
#define VkglTestCase_042302_2 "_pixels.alignment.choose_1"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042302, VkglTestCase_042302_1, VkglTestCase_042302_2);

#define VkglTestCase_042303_1 "dEQP-GLES3.functional.read"
#define VkglTestCase_042303_2 "_pixels.alignment.choose_2"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042303, VkglTestCase_042303_1, VkglTestCase_042303_2);

#define VkglTestCase_042304_1 "dEQP-GLES3.functional.read"
#define VkglTestCase_042304_2 "_pixels.alignment.choose_4"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042304, VkglTestCase_042304_1, VkglTestCase_042304_2);

#define VkglTestCase_042305_1 "dEQP-GLES3.functional.read"
#define VkglTestCase_042305_2 "_pixels.alignment.choose_8"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042305, VkglTestCase_042305_1, VkglTestCase_042305_2);
