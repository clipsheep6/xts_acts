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
#include "../KhrglesextBaseFunc.h"
#include "../ActsKhrglesext0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000302_1 "KHR-GLESEXT.viewpo"
#define VkglTestCase_000302_2 "rt_array.api_errors"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000302, VkglTestCase_000302_1, VkglTestCase_000302_2);

#define VkglTestCase_000303_1 "KHR-GLESEXT.viewp"
#define VkglTestCase_000303_2 "ort_array.queries"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000303, VkglTestCase_000303_1, VkglTestCase_000303_2);

#define VkglTestCase_000304_1 "KHR-GLESEXT.viewpor"
#define VkglTestCase_000304_2 "t_array.viewport_api"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000304, VkglTestCase_000304_1, VkglTestCase_000304_2);

#define VkglTestCase_000305_1 "KHR-GLESEXT.viewpor"
#define VkglTestCase_000305_2 "t_array.scissor_api"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000305, VkglTestCase_000305_1, VkglTestCase_000305_2);

#define VkglTestCase_000306_1 "KHR-GLESEXT.viewport_"
#define VkglTestCase_000306_2 "array.depth_range_api"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000306, VkglTestCase_000306_1, VkglTestCase_000306_2);

#define VkglTestCase_000307_1 "KHR-GLESEXT.viewport_arr"
#define VkglTestCase_000307_2 "ay.scissor_test_state_api"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000307, VkglTestCase_000307_1, VkglTestCase_000307_2);

#define VkglTestCase_000308_1 "KHR-GLESEXT.viewport_array.draw_to_"
#define VkglTestCase_000308_2 "single_layer_with_multiple_viewports"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000308, VkglTestCase_000308_1, VkglTestCase_000308_2);

#define VkglTestCase_000309_1 "KHR-GLESEXT.viewport_arr"
#define VkglTestCase_000309_2 "ay.dynamic_viewport_index"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000309, VkglTestCase_000309_1, VkglTestCase_000309_2);

#define VkglTestCase_000310_1 "KHR-GLESEXT.viewport_array.draw_muli"
#define VkglTestCase_000310_2 "tple_viewports_with_single_invocation"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000310, VkglTestCase_000310_1, VkglTestCase_000310_2);

#define VkglTestCase_000311_1 "KHR-GLESEXT.viewport_array"
#define VkglTestCase_000311_2 ".viewport_index_subroutine"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000311, VkglTestCase_000311_1, VkglTestCase_000311_2);

#define VkglTestCase_000312_1 "KHR-GLESEXT.viewport_ar"
#define VkglTestCase_000312_2 "ray.draw_multiple_layers"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000312, VkglTestCase_000312_1, VkglTestCase_000312_2);

#define VkglTestCase_000313_1 "KHR-GLESEXT.viewp"
#define VkglTestCase_000313_2 "ort_array.scissor"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000313, VkglTestCase_000313_1, VkglTestCase_000313_2);

#define VkglTestCase_000314_1 "KHR-GLESEXT.viewport_arr"
#define VkglTestCase_000314_2 "ay.scissor_zero_dimension"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000314, VkglTestCase_000314_1, VkglTestCase_000314_2);

#define VkglTestCase_000315_1 "KHR-GLESEXT.viewport"
#define VkglTestCase_000315_2 "_array.scissor_clear"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000315, VkglTestCase_000315_1, VkglTestCase_000315_2);

#define VkglTestCase_000316_1 "KHR-GLESEXT.viewpor"
#define VkglTestCase_000316_2 "t_array.depth_range"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000316, VkglTestCase_000316_1, VkglTestCase_000316_2);

#define VkglTestCase_000317_1 "KHR-GLESEXT.viewport_arr"
#define VkglTestCase_000317_2 "ay.depth_range_depth_test"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000317, VkglTestCase_000317_1, VkglTestCase_000317_2);

#define VkglTestCase_000318_1 "KHR-GLESEXT.viewport_"
#define VkglTestCase_000318_2 "array.provoking_vertex"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000318, VkglTestCase_000318_1, VkglTestCase_000318_2);
