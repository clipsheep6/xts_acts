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
#include "../ActsDeqpgles30041TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_040542_1 "dEQP-GLES3.functional.transform_f"
#define VkglTestCase_040542_2 "eedback.point_size.points_separate"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040542, VkglTestCase_040542_1, VkglTestCase_040542_2);

#define VkglTestCase_040543_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_040543_2 "dback.point_size.points_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040543, VkglTestCase_040543_1, VkglTestCase_040543_2);

#define VkglTestCase_040544_1 "dEQP-GLES3.functional.transform_f"
#define VkglTestCase_040544_2 "eedback.point_size.lines_separate"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040544, VkglTestCase_040544_1, VkglTestCase_040544_2);

#define VkglTestCase_040545_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_040545_2 "edback.point_size.lines_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040545, VkglTestCase_040545_1, VkglTestCase_040545_2);

#define VkglTestCase_040546_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_040546_2 "dback.point_size.triangles_separate"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040546, VkglTestCase_040546_1, VkglTestCase_040546_2);

#define VkglTestCase_040547_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040547_2 "back.point_size.triangles_interleaved"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040547, VkglTestCase_040547_1, VkglTestCase_040547_2);
