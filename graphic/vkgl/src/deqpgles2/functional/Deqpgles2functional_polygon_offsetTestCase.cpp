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

#define VkglTestCase_016303_1 "dEQP-GLES2.functional.pol"
#define VkglTestCase_016303_2 "ygon_offset.default_enable"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016303, VkglTestCase_016303_1, VkglTestCase_016303_2);

#define VkglTestCase_016304_1 "dEQP-GLES2.functional.polygon_offs"
#define VkglTestCase_016304_2 "et.default_displacement_with_units"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016304, VkglTestCase_016304_1, VkglTestCase_016304_2);

#define VkglTestCase_016305_1 "dEQP-GLES2.functional.polygon_o"
#define VkglTestCase_016305_2 "ffset.default_render_with_factor"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016305, VkglTestCase_016305_1, VkglTestCase_016305_2);

#define VkglTestCase_016306_1 "dEQP-GLES2.functional.polygon"
#define VkglTestCase_016306_2 "_offset.default_factor_0_slope"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016306, VkglTestCase_016306_1, VkglTestCase_016306_2);

#define VkglTestCase_016307_1 "dEQP-GLES2.functional.pol"
#define VkglTestCase_016307_2 "ygon_offset.fixed16_enable"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016307, VkglTestCase_016307_1, VkglTestCase_016307_2);

#define VkglTestCase_016308_1 "dEQP-GLES2.functional.polygon_offs"
#define VkglTestCase_016308_2 "et.fixed16_displacement_with_units"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016308, VkglTestCase_016308_1, VkglTestCase_016308_2);

#define VkglTestCase_016309_1 "dEQP-GLES2.functional.polygon_o"
#define VkglTestCase_016309_2 "ffset.fixed16_render_with_factor"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016309, VkglTestCase_016309_1, VkglTestCase_016309_2);

#define VkglTestCase_016310_1 "dEQP-GLES2.functional.polygon"
#define VkglTestCase_016310_2 "_offset.fixed16_factor_0_slope"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016310, VkglTestCase_016310_1, VkglTestCase_016310_2);
