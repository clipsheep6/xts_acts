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
#include "../ActsDeqpgles30044TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_043301_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043301_2 "ipping.point.point_z_clip"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043301, VkglTestCase_043301_1, VkglTestCase_043301_2);

#define VkglTestCase_043302_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043302_2 "oint.point_z_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043302, VkglTestCase_043302_1, VkglTestCase_043302_2);

#define VkglTestCase_043303_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043303_2 "oint.point_z_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043303, VkglTestCase_043303_1, VkglTestCase_043303_2);

#define VkglTestCase_043304_1 "dEQP-GLES3.functional.clipping."
#define VkglTestCase_043304_2 "point.point_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043304, VkglTestCase_043304_1, VkglTestCase_043304_2);

#define VkglTestCase_043305_1 "dEQP-GLES3.functional.clipping."
#define VkglTestCase_043305_2 "point.point_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043305, VkglTestCase_043305_1, VkglTestCase_043305_2);

#define VkglTestCase_043306_1 "dEQP-GLES3.functional.clipp"
#define VkglTestCase_043306_2 "ing.point.wide_point_z_clip"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043306, VkglTestCase_043306_1, VkglTestCase_043306_2);

#define VkglTestCase_043307_1 "dEQP-GLES3.functional.clipping.poin"
#define VkglTestCase_043307_2 "t.wide_point_z_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043307, VkglTestCase_043307_1, VkglTestCase_043307_2);

#define VkglTestCase_043308_1 "dEQP-GLES3.functional.clipping.poin"
#define VkglTestCase_043308_2 "t.wide_point_z_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043308, VkglTestCase_043308_1, VkglTestCase_043308_2);

#define VkglTestCase_043309_1 "dEQP-GLES3.functional.clip"
#define VkglTestCase_043309_2 "ping.point.wide_point_clip"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043309, VkglTestCase_043309_1, VkglTestCase_043309_2);

#define VkglTestCase_043310_1 "dEQP-GLES3.functional.clipping.poi"
#define VkglTestCase_043310_2 "nt.wide_point_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043310, VkglTestCase_043310_1, VkglTestCase_043310_2);

#define VkglTestCase_043311_1 "dEQP-GLES3.functional.clipping.poi"
#define VkglTestCase_043311_2 "nt.wide_point_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043311, VkglTestCase_043311_1, VkglTestCase_043311_2);
