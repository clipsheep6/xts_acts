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
#include "../ActsDeqpgles20017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016317_1 "dEQP-GLES2.functional.draw.draw_"
#define VkglTestCase_016317_2 "arrays.triangles.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016317, VkglTestCase_016317_1, VkglTestCase_016317_2);

#define VkglTestCase_016318_1 "dEQP-GLES2.functional.draw.draw_ar"
#define VkglTestCase_016318_2 "rays.triangles.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016318, VkglTestCase_016318_1, VkglTestCase_016318_2);

#define VkglTestCase_016319_1 "dEQP-GLES2.functional.draw.draw_a"
#define VkglTestCase_016319_2 "rrays.triangles.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016319, VkglTestCase_016319_1, VkglTestCase_016319_2);
