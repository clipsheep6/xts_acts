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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002702_1 "KHR-GLES31.core.view"
#define VkglTestCase_002702_2 "port_array.api_errors"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002702, VkglTestCase_002702_1, VkglTestCase_002702_2);

#define VkglTestCase_002703_1 "KHR-GLES31.core.vie"
#define VkglTestCase_002703_2 "wport_array.queries"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002703, VkglTestCase_002703_1, VkglTestCase_002703_2);

#define VkglTestCase_002704_1 "KHR-GLES31.core.viewp"
#define VkglTestCase_002704_2 "ort_array.viewport_api"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002704, VkglTestCase_002704_1, VkglTestCase_002704_2);

#define VkglTestCase_002705_1 "KHR-GLES31.core.viewp"
#define VkglTestCase_002705_2 "ort_array.scissor_api"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002705, VkglTestCase_002705_1, VkglTestCase_002705_2);

#define VkglTestCase_002706_1 "KHR-GLES31.core.viewpor"
#define VkglTestCase_002706_2 "t_array.depth_range_api"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002706, VkglTestCase_002706_1, VkglTestCase_002706_2);

#define VkglTestCase_002707_1 "KHR-GLES31.core.viewport_a"
#define VkglTestCase_002707_2 "rray.scissor_test_state_api"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002707, VkglTestCase_002707_1, VkglTestCase_002707_2);

#define VkglTestCase_002708_1 "KHR-GLES31.core.viewport_array.draw_t"
#define VkglTestCase_002708_2 "o_single_layer_with_multiple_viewports"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002708, VkglTestCase_002708_1, VkglTestCase_002708_2);

#define VkglTestCase_002709_1 "KHR-GLES31.core.viewport_a"
#define VkglTestCase_002709_2 "rray.dynamic_viewport_index"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002709, VkglTestCase_002709_1, VkglTestCase_002709_2);

#define VkglTestCase_002710_1 "KHR-GLES31.core.viewport_array.draw_mu"
#define VkglTestCase_002710_2 "litple_viewports_with_single_invocation"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002710, VkglTestCase_002710_1, VkglTestCase_002710_2);

#define VkglTestCase_002711_1 "KHR-GLES31.core.viewport_arr"
#define VkglTestCase_002711_2 "ay.viewport_index_subroutine"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002711, VkglTestCase_002711_1, VkglTestCase_002711_2);

#define VkglTestCase_002712_1 "KHR-GLES31.core.viewport_"
#define VkglTestCase_002712_2 "array.draw_multiple_layers"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002712, VkglTestCase_002712_1, VkglTestCase_002712_2);

#define VkglTestCase_002713_1 "KHR-GLES31.core.vie"
#define VkglTestCase_002713_2 "wport_array.scissor"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002713, VkglTestCase_002713_1, VkglTestCase_002713_2);

#define VkglTestCase_002714_1 "KHR-GLES31.core.viewport_a"
#define VkglTestCase_002714_2 "rray.scissor_zero_dimension"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002714, VkglTestCase_002714_1, VkglTestCase_002714_2);

#define VkglTestCase_002715_1 "KHR-GLES31.core.viewpo"
#define VkglTestCase_002715_2 "rt_array.scissor_clear"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002715, VkglTestCase_002715_1, VkglTestCase_002715_2);

#define VkglTestCase_002716_1 "KHR-GLES31.core.viewp"
#define VkglTestCase_002716_2 "ort_array.depth_range"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002716, VkglTestCase_002716_1, VkglTestCase_002716_2);

#define VkglTestCase_002717_1 "KHR-GLES31.core.viewport_a"
#define VkglTestCase_002717_2 "rray.depth_range_depth_test"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002717, VkglTestCase_002717_1, VkglTestCase_002717_2);

#define VkglTestCase_002718_1 "KHR-GLES31.core.viewpor"
#define VkglTestCase_002718_2 "t_array.provoking_vertex"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002718, VkglTestCase_002718_1, VkglTestCase_002718_2);
