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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018303_1 "dEQP-GLES31.functional.tessellation_geo"
#define VkglTestCase_018303_2 "metry_interaction.point_size.vertex_set"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018303, VkglTestCase_018303_1, VkglTestCase_018303_2);

#define VkglTestCase_018304_1 "dEQP-GLES31.functional.tessellation_geome"
#define VkglTestCase_018304_2 "try_interaction.point_size.evaluation_set"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018304, VkglTestCase_018304_1, VkglTestCase_018304_2);

#define VkglTestCase_018305_1 "dEQP-GLES31.functional.tessellation_geom"
#define VkglTestCase_018305_2 "etry_interaction.point_size.geometry_set"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018305, VkglTestCase_018305_1, VkglTestCase_018305_2);

#define VkglTestCase_018306_1 "dEQP-GLES31.functional.tessellation_geometry_"
#define VkglTestCase_018306_2 "interaction.point_size.vertex_set_control_set"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018306, VkglTestCase_018306_1, VkglTestCase_018306_2);

#define VkglTestCase_018307_1 "dEQP-GLES31.functional.tessellation_geometry_i"
#define VkglTestCase_018307_2 "nteraction.point_size.vertex_set_evaluation_set"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018307, VkglTestCase_018307_1, VkglTestCase_018307_2);

#define VkglTestCase_018308_1 "dEQP-GLES31.functional.tessellation_geometry_"
#define VkglTestCase_018308_2 "interaction.point_size.vertex_set_eval_default"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018308, VkglTestCase_018308_1, VkglTestCase_018308_2);

#define VkglTestCase_018309_1 "dEQP-GLES31.functional.tessellation_geometry_"
#define VkglTestCase_018309_2 "interaction.point_size.vertex_set_geometry_set"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018309, VkglTestCase_018309_1, VkglTestCase_018309_2);

#define VkglTestCase_018310_1 "dEQP-GLES31.functional.tessellation_geometry_interact"
#define VkglTestCase_018310_2 "ion.point_size.vertex_set_evaluation_set_geometry_set"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018310, VkglTestCase_018310_1, VkglTestCase_018310_2);

#define VkglTestCase_018311_1 "dEQP-GLES31.functional.tessellation_geometry_interaction"
#define VkglTestCase_018311_2 ".point_size.vertex_set_control_pass_eval_add_geometry_add"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018311, VkglTestCase_018311_1, VkglTestCase_018311_2);

#define VkglTestCase_018312_1 "dEQP-GLES31.functional.tessellation_geometry_interactio"
#define VkglTestCase_018312_2 "n.point_size.vertex_set_evaluation_set_geometry_default"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018312, VkglTestCase_018312_1, VkglTestCase_018312_2);
