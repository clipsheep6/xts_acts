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

#define VkglTestCase_015605_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015605_2 "ry.floats.depth_range_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015605, VkglTestCase_015605_1, VkglTestCase_015605_2);

#define VkglTestCase_015606_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015606_2 "ry.floats.depth_range_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015606, VkglTestCase_015606_1, VkglTestCase_015606_2);

#define VkglTestCase_015607_1 "dEQP-GLES2.functional.state_qu"
#define VkglTestCase_015607_2 "ery.floats.depth_range_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015607, VkglTestCase_015607_1, VkglTestCase_015607_2);

#define VkglTestCase_015608_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015608_2 "ry.floats.line_width_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015608, VkglTestCase_015608_1, VkglTestCase_015608_2);

#define VkglTestCase_015609_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015609_2 "ry.floats.line_width_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015609, VkglTestCase_015609_1, VkglTestCase_015609_2);

#define VkglTestCase_015610_1 "dEQP-GLES2.functional.state_qu"
#define VkglTestCase_015610_2 "ery.floats.line_width_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015610, VkglTestCase_015610_1, VkglTestCase_015610_2);

#define VkglTestCase_015611_1 "dEQP-GLES2.functional.state_query.fl"
#define VkglTestCase_015611_2 "oats.polygon_offset_factor_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015611, VkglTestCase_015611_1, VkglTestCase_015611_2);

#define VkglTestCase_015612_1 "dEQP-GLES2.functional.state_query.fl"
#define VkglTestCase_015612_2 "oats.polygon_offset_factor_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015612, VkglTestCase_015612_1, VkglTestCase_015612_2);

#define VkglTestCase_015613_1 "dEQP-GLES2.functional.state_query.f"
#define VkglTestCase_015613_2 "loats.polygon_offset_factor_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015613, VkglTestCase_015613_1, VkglTestCase_015613_2);

#define VkglTestCase_015614_1 "dEQP-GLES2.functional.state_query.fl"
#define VkglTestCase_015614_2 "oats.polygon_offset_units_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015614, VkglTestCase_015614_1, VkglTestCase_015614_2);

#define VkglTestCase_015615_1 "dEQP-GLES2.functional.state_query.fl"
#define VkglTestCase_015615_2 "oats.polygon_offset_units_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015615, VkglTestCase_015615_1, VkglTestCase_015615_2);

#define VkglTestCase_015616_1 "dEQP-GLES2.functional.state_query.f"
#define VkglTestCase_015616_2 "loats.polygon_offset_units_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015616, VkglTestCase_015616_1, VkglTestCase_015616_2);

#define VkglTestCase_015617_1 "dEQP-GLES2.functional.state_query.fl"
#define VkglTestCase_015617_2 "oats.sample_coverage_value_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015617, VkglTestCase_015617_1, VkglTestCase_015617_2);

#define VkglTestCase_015618_1 "dEQP-GLES2.functional.state_query.fl"
#define VkglTestCase_015618_2 "oats.sample_coverage_value_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015618, VkglTestCase_015618_1, VkglTestCase_015618_2);

#define VkglTestCase_015619_1 "dEQP-GLES2.functional.state_query.f"
#define VkglTestCase_015619_2 "loats.sample_coverage_value_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015619, VkglTestCase_015619_1, VkglTestCase_015619_2);

#define VkglTestCase_015620_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015620_2 "floats.color_clear_value_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015620, VkglTestCase_015620_1, VkglTestCase_015620_2);

#define VkglTestCase_015621_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015621_2 "floats.color_clear_value_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015621, VkglTestCase_015621_1, VkglTestCase_015621_2);

#define VkglTestCase_015622_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015622_2 ".floats.color_clear_value_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015622, VkglTestCase_015622_1, VkglTestCase_015622_2);

#define VkglTestCase_015623_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015623_2 "floats.depth_clear_value_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015623, VkglTestCase_015623_1, VkglTestCase_015623_2);

#define VkglTestCase_015624_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015624_2 "floats.depth_clear_value_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015624, VkglTestCase_015624_1, VkglTestCase_015624_2);

#define VkglTestCase_015625_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015625_2 ".floats.depth_clear_value_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015625, VkglTestCase_015625_1, VkglTestCase_015625_2);

#define VkglTestCase_015626_1 "dEQP-GLES2.functional.state_query.floa"
#define VkglTestCase_015626_2 "ts.aliased_point_size_range_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015626, VkglTestCase_015626_1, VkglTestCase_015626_2);

#define VkglTestCase_015627_1 "dEQP-GLES2.functional.state_query.floa"
#define VkglTestCase_015627_2 "ts.aliased_point_size_range_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015627, VkglTestCase_015627_1, VkglTestCase_015627_2);

#define VkglTestCase_015628_1 "dEQP-GLES2.functional.state_query.flo"
#define VkglTestCase_015628_2 "ats.aliased_point_size_range_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015628, VkglTestCase_015628_1, VkglTestCase_015628_2);

#define VkglTestCase_015629_1 "dEQP-GLES2.functional.state_query.floa"
#define VkglTestCase_015629_2 "ts.aliased_line_width_range_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015629, VkglTestCase_015629_1, VkglTestCase_015629_2);

#define VkglTestCase_015630_1 "dEQP-GLES2.functional.state_query.floa"
#define VkglTestCase_015630_2 "ts.aliased_line_width_range_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015630, VkglTestCase_015630_1, VkglTestCase_015630_2);

#define VkglTestCase_015631_1 "dEQP-GLES2.functional.state_query.flo"
#define VkglTestCase_015631_2 "ats.aliased_line_width_range_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015631, VkglTestCase_015631_1, VkglTestCase_015631_2);
