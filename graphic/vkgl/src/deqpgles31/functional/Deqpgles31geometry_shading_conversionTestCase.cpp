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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016344_1 "dEQP-GLES31.functional.geometry_sha"
#define VkglTestCase_016344_2 "ding.conversion.triangles_to_points"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016344, VkglTestCase_016344_1, VkglTestCase_016344_2);

#define VkglTestCase_016345_1 "dEQP-GLES31.functional.geometry_s"
#define VkglTestCase_016345_2 "hading.conversion.lines_to_points"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016345, VkglTestCase_016345_1, VkglTestCase_016345_2);

#define VkglTestCase_016346_1 "dEQP-GLES31.functional.geometry_s"
#define VkglTestCase_016346_2 "hading.conversion.points_to_lines"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016346, VkglTestCase_016346_1, VkglTestCase_016346_2);

#define VkglTestCase_016347_1 "dEQP-GLES31.functional.geometry_sh"
#define VkglTestCase_016347_2 "ading.conversion.triangles_to_lines"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016347, VkglTestCase_016347_1, VkglTestCase_016347_2);

#define VkglTestCase_016348_1 "dEQP-GLES31.functional.geometry_sha"
#define VkglTestCase_016348_2 "ding.conversion.points_to_triangles"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016348, VkglTestCase_016348_1, VkglTestCase_016348_2);

#define VkglTestCase_016349_1 "dEQP-GLES31.functional.geometry_sh"
#define VkglTestCase_016349_2 "ading.conversion.lines_to_triangles"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016349, VkglTestCase_016349_1, VkglTestCase_016349_2);
