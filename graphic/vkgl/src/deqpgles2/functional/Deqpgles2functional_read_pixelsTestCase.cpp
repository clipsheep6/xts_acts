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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015249_1 "dEQP-GLES2.functional.read"
#define VkglTestCase_015249_2 "_pixels.rgba_ubyte_align_1"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015249, VkglTestCase_015249_1, VkglTestCase_015249_2);

#define VkglTestCase_015250_1 "dEQP-GLES2.functional.read"
#define VkglTestCase_015250_2 "_pixels.rgba_ubyte_align_2"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015250, VkglTestCase_015250_1, VkglTestCase_015250_2);

#define VkglTestCase_015251_1 "dEQP-GLES2.functional.read"
#define VkglTestCase_015251_2 "_pixels.rgba_ubyte_align_4"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015251, VkglTestCase_015251_1, VkglTestCase_015251_2);

#define VkglTestCase_015252_1 "dEQP-GLES2.functional.read"
#define VkglTestCase_015252_2 "_pixels.rgba_ubyte_align_8"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015252, VkglTestCase_015252_1, VkglTestCase_015252_2);

#define VkglTestCase_015253_1 "dEQP-GLES2.functional.re"
#define VkglTestCase_015253_2 "ad_pixels.choose_align_1"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015253, VkglTestCase_015253_1, VkglTestCase_015253_2);

#define VkglTestCase_015254_1 "dEQP-GLES2.functional.re"
#define VkglTestCase_015254_2 "ad_pixels.choose_align_2"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015254, VkglTestCase_015254_1, VkglTestCase_015254_2);

#define VkglTestCase_015255_1 "dEQP-GLES2.functional.re"
#define VkglTestCase_015255_2 "ad_pixels.choose_align_4"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015255, VkglTestCase_015255_1, VkglTestCase_015255_2);

#define VkglTestCase_015256_1 "dEQP-GLES2.functional.re"
#define VkglTestCase_015256_2 "ad_pixels.choose_align_8"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015256, VkglTestCase_015256_1, VkglTestCase_015256_2);
