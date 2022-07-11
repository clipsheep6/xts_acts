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

#define VkglTestCase_042966_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042966_2 "tegers64.max_element_index_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042966, VkglTestCase_042966_1, VkglTestCase_042966_2);

#define VkglTestCase_042967_1 "dEQP-GLES3.functional.state_query.in"
#define VkglTestCase_042967_2 "tegers64.max_element_index_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042967, VkglTestCase_042967_1, VkglTestCase_042967_2);

#define VkglTestCase_042968_1 "dEQP-GLES3.functional.state_query.i"
#define VkglTestCase_042968_2 "ntegers64.max_element_index_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042968, VkglTestCase_042968_1, VkglTestCase_042968_2);

#define VkglTestCase_042969_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042969_2 "ers64.max_server_wait_timeout_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042969, VkglTestCase_042969_1, VkglTestCase_042969_2);

#define VkglTestCase_042970_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042970_2 "ers64.max_server_wait_timeout_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042970, VkglTestCase_042970_1, VkglTestCase_042970_2);

#define VkglTestCase_042971_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042971_2 "gers64.max_server_wait_timeout_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042971, VkglTestCase_042971_1, VkglTestCase_042971_2);

#define VkglTestCase_042972_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042972_2 "ers64.max_uniform_block_size_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042972, VkglTestCase_042972_1, VkglTestCase_042972_2);

#define VkglTestCase_042973_1 "dEQP-GLES3.functional.state_query.integ"
#define VkglTestCase_042973_2 "ers64.max_uniform_block_size_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042973, VkglTestCase_042973_1, VkglTestCase_042973_2);

#define VkglTestCase_042974_1 "dEQP-GLES3.functional.state_query.inte"
#define VkglTestCase_042974_2 "gers64.max_uniform_block_size_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042974, VkglTestCase_042974_1, VkglTestCase_042974_2);

#define VkglTestCase_042975_1 "dEQP-GLES3.functional.state_query.integers64.ma"
#define VkglTestCase_042975_2 "x_combined_vertex_uniform_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042975, VkglTestCase_042975_1, VkglTestCase_042975_2);

#define VkglTestCase_042976_1 "dEQP-GLES3.functional.state_query.integers64.ma"
#define VkglTestCase_042976_2 "x_combined_vertex_uniform_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042976, VkglTestCase_042976_1, VkglTestCase_042976_2);

#define VkglTestCase_042977_1 "dEQP-GLES3.functional.state_query.integers64.m"
#define VkglTestCase_042977_2 "ax_combined_vertex_uniform_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042977, VkglTestCase_042977_1, VkglTestCase_042977_2);

#define VkglTestCase_042978_1 "dEQP-GLES3.functional.state_query.integers64.max"
#define VkglTestCase_042978_2 "_combined_fragment_uniform_components_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042978, VkglTestCase_042978_1, VkglTestCase_042978_2);

#define VkglTestCase_042979_1 "dEQP-GLES3.functional.state_query.integers64.max"
#define VkglTestCase_042979_2 "_combined_fragment_uniform_components_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042979, VkglTestCase_042979_1, VkglTestCase_042979_2);

#define VkglTestCase_042980_1 "dEQP-GLES3.functional.state_query.integers64.ma"
#define VkglTestCase_042980_2 "x_combined_fragment_uniform_components_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042980, VkglTestCase_042980_1, VkglTestCase_042980_2);
