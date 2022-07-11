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

#define VkglTestCase_016323_1 "dEQP-GLES2.functional.draw.draw_arr"
#define VkglTestCase_016323_2 "ays.triangle_strip.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016323, VkglTestCase_016323_1, VkglTestCase_016323_2);

#define VkglTestCase_016324_1 "dEQP-GLES2.functional.draw.draw_arra"
#define VkglTestCase_016324_2 "ys.triangle_strip.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016324, VkglTestCase_016324_1, VkglTestCase_016324_2);

#define VkglTestCase_016325_1 "dEQP-GLES2.functional.draw.draw_arr"
#define VkglTestCase_016325_2 "ays.triangle_strip.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016325, VkglTestCase_016325_1, VkglTestCase_016325_2);
