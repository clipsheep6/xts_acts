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

#define VkglTestCase_042306_1 "dEQP-GLES3.functional.read_p"
#define VkglTestCase_042306_2 "ixels.rowlength.rgba_ubyte_17"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042306, VkglTestCase_042306_1, VkglTestCase_042306_2);

#define VkglTestCase_042307_1 "dEQP-GLES3.functional.read_p"
#define VkglTestCase_042307_2 "ixels.rowlength.rgba_ubyte_19"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042307, VkglTestCase_042307_1, VkglTestCase_042307_2);

#define VkglTestCase_042308_1 "dEQP-GLES3.functional.read_p"
#define VkglTestCase_042308_2 "ixels.rowlength.rgba_ubyte_23"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042308, VkglTestCase_042308_1, VkglTestCase_042308_2);

#define VkglTestCase_042309_1 "dEQP-GLES3.functional.read_p"
#define VkglTestCase_042309_2 "ixels.rowlength.rgba_ubyte_29"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042309, VkglTestCase_042309_1, VkglTestCase_042309_2);

#define VkglTestCase_042310_1 "dEQP-GLES3.functional.read_"
#define VkglTestCase_042310_2 "pixels.rowlength.rgba_int_17"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042310, VkglTestCase_042310_1, VkglTestCase_042310_2);

#define VkglTestCase_042311_1 "dEQP-GLES3.functional.read_"
#define VkglTestCase_042311_2 "pixels.rowlength.rgba_int_19"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042311, VkglTestCase_042311_1, VkglTestCase_042311_2);

#define VkglTestCase_042312_1 "dEQP-GLES3.functional.read_"
#define VkglTestCase_042312_2 "pixels.rowlength.rgba_int_23"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042312, VkglTestCase_042312_1, VkglTestCase_042312_2);

#define VkglTestCase_042313_1 "dEQP-GLES3.functional.read_"
#define VkglTestCase_042313_2 "pixels.rowlength.rgba_int_29"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042313, VkglTestCase_042313_1, VkglTestCase_042313_2);

#define VkglTestCase_042314_1 "dEQP-GLES3.functional.read_p"
#define VkglTestCase_042314_2 "ixels.rowlength.rgba_uint_17"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042314, VkglTestCase_042314_1, VkglTestCase_042314_2);

#define VkglTestCase_042315_1 "dEQP-GLES3.functional.read_p"
#define VkglTestCase_042315_2 "ixels.rowlength.rgba_uint_19"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042315, VkglTestCase_042315_1, VkglTestCase_042315_2);

#define VkglTestCase_042316_1 "dEQP-GLES3.functional.read_p"
#define VkglTestCase_042316_2 "ixels.rowlength.rgba_uint_23"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042316, VkglTestCase_042316_1, VkglTestCase_042316_2);

#define VkglTestCase_042317_1 "dEQP-GLES3.functional.read_p"
#define VkglTestCase_042317_2 "ixels.rowlength.rgba_uint_29"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042317, VkglTestCase_042317_1, VkglTestCase_042317_2);

#define VkglTestCase_042318_1 "dEQP-GLES3.functional.read"
#define VkglTestCase_042318_2 "_pixels.rowlength.choose_17"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042318, VkglTestCase_042318_1, VkglTestCase_042318_2);

#define VkglTestCase_042319_1 "dEQP-GLES3.functional.read"
#define VkglTestCase_042319_2 "_pixels.rowlength.choose_19"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042319, VkglTestCase_042319_1, VkglTestCase_042319_2);

#define VkglTestCase_042320_1 "dEQP-GLES3.functional.read"
#define VkglTestCase_042320_2 "_pixels.rowlength.choose_23"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042320, VkglTestCase_042320_1, VkglTestCase_042320_2);

#define VkglTestCase_042321_1 "dEQP-GLES3.functional.read"
#define VkglTestCase_042321_2 "_pixels.rowlength.choose_29"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042321, VkglTestCase_042321_1, VkglTestCase_042321_2);
