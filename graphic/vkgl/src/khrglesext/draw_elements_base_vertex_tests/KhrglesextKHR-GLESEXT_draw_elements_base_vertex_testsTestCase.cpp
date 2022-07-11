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

#define VkglTestCase_000290_1 "KHR-GLESEXT.draw_elements_base_v"
#define VkglTestCase_000290_2 "ertex_tests.basevertex_behavior1"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000290, VkglTestCase_000290_1, VkglTestCase_000290_2);

#define VkglTestCase_000291_1 "KHR-GLESEXT.draw_elements_base_v"
#define VkglTestCase_000291_2 "ertex_tests.basevertex_behavior2"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000291, VkglTestCase_000291_1, VkglTestCase_000291_2);

#define VkglTestCase_000292_1 "KHR-GLESEXT.draw_elements_base"
#define VkglTestCase_000292_2 "_vertex_tests.AEP_shader_stages"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000292, VkglTestCase_000292_1, VkglTestCase_000292_2);

#define VkglTestCase_000293_1 "KHR-GLESEXT.draw_elements_"
#define VkglTestCase_000293_2 "base_vertex_tests.underflow"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000293, VkglTestCase_000293_1, VkglTestCase_000293_2);

#define VkglTestCase_000294_1 "KHR-GLESEXT.draw_elements_"
#define VkglTestCase_000294_2 "base_vertex_tests.overflow"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000294, VkglTestCase_000294_1, VkglTestCase_000294_2);

#define VkglTestCase_000295_1 "KHR-GLESEXT.draw_elements_bas"
#define VkglTestCase_000295_2 "e_vertex_tests.valid_active_tf"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000295, VkglTestCase_000295_1, VkglTestCase_000295_2);

#define VkglTestCase_000296_1 "KHR-GLESEXT.draw_elements_base_ve"
#define VkglTestCase_000296_2 "rtex_tests.invalid_count_argument"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000296, VkglTestCase_000296_1, VkglTestCase_000296_2);

#define VkglTestCase_000297_1 "KHR-GLESEXT.draw_elements_base_vertex"
#define VkglTestCase_000297_2 "_tests.invalid_instancecount_argument"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000297, VkglTestCase_000297_1, VkglTestCase_000297_2);

#define VkglTestCase_000298_1 "KHR-GLESEXT.draw_elements_base_v"
#define VkglTestCase_000298_2 "ertex_tests.invalid_mode_argument"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000298, VkglTestCase_000298_1, VkglTestCase_000298_2);

#define VkglTestCase_000299_1 "KHR-GLESEXT.draw_elements_base_vert"
#define VkglTestCase_000299_2 "ex_tests.invalid_primcount_argument"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000299, VkglTestCase_000299_1, VkglTestCase_000299_2);

#define VkglTestCase_000300_1 "KHR-GLESEXT.draw_elements_base_vert"
#define VkglTestCase_000300_2 "ex_tests.invalid_start_end_arguments"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000300, VkglTestCase_000300_1, VkglTestCase_000300_2);

#define VkglTestCase_000301_1 "KHR-GLESEXT.draw_elements_base_v"
#define VkglTestCase_000301_2 "ertex_tests.invalid_type_argument"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000301, VkglTestCase_000301_1, VkglTestCase_000301_2);
