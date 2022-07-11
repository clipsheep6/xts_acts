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

#define VkglTestCase_015712_1 "dEQP-GLES2.functional.c"
#define VkglTestCase_015712_2 "lipping.line.line_z_clip"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015712, VkglTestCase_015712_1, VkglTestCase_015712_2);

#define VkglTestCase_015713_1 "dEQP-GLES2.functional.clipping."
#define VkglTestCase_015713_2 "line.line_z_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015713, VkglTestCase_015713_1, VkglTestCase_015713_2);

#define VkglTestCase_015714_1 "dEQP-GLES2.functional.clipping."
#define VkglTestCase_015714_2 "line.line_z_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015714, VkglTestCase_015714_1, VkglTestCase_015714_2);

#define VkglTestCase_015715_1 "dEQP-GLES2.functional.clipping"
#define VkglTestCase_015715_2 ".line.line_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015715, VkglTestCase_015715_1, VkglTestCase_015715_2);

#define VkglTestCase_015716_1 "dEQP-GLES2.functional.clipping"
#define VkglTestCase_015716_2 ".line.line_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015716, VkglTestCase_015716_1, VkglTestCase_015716_2);

#define VkglTestCase_015717_1 "dEQP-GLES2.functional.clip"
#define VkglTestCase_015717_2 "ping.line.wide_line_z_clip"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015717, VkglTestCase_015717_1, VkglTestCase_015717_2);

#define VkglTestCase_015718_1 "dEQP-GLES2.functional.clipping.lin"
#define VkglTestCase_015718_2 "e.wide_line_z_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015718, VkglTestCase_015718_1, VkglTestCase_015718_2);

#define VkglTestCase_015719_1 "dEQP-GLES2.functional.clipping.lin"
#define VkglTestCase_015719_2 "e.wide_line_z_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015719, VkglTestCase_015719_1, VkglTestCase_015719_2);

#define VkglTestCase_015720_1 "dEQP-GLES2.functional.cli"
#define VkglTestCase_015720_2 "pping.line.wide_line_clip"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015720, VkglTestCase_015720_1, VkglTestCase_015720_2);

#define VkglTestCase_015721_1 "dEQP-GLES2.functional.clipping.li"
#define VkglTestCase_015721_2 "ne.wide_line_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015721, VkglTestCase_015721_1, VkglTestCase_015721_2);

#define VkglTestCase_015722_1 "dEQP-GLES2.functional.clipping.li"
#define VkglTestCase_015722_2 "ne.wide_line_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015722, VkglTestCase_015722_1, VkglTestCase_015722_2);

#define VkglTestCase_015723_1 "dEQP-GLES2.functional.cli"
#define VkglTestCase_015723_2 "pping.line.long_line_clip"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015723, VkglTestCase_015723_1, VkglTestCase_015723_2);

#define VkglTestCase_015724_1 "dEQP-GLES2.functional.clipp"
#define VkglTestCase_015724_2 "ing.line.long_wide_line_clip"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015724, VkglTestCase_015724_1, VkglTestCase_015724_2);

#define VkglTestCase_015725_1 "dEQP-GLES2.functional.clip"
#define VkglTestCase_015725_2 "ping.line.line_attrib_clip"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015725, VkglTestCase_015725_1, VkglTestCase_015725_2);

#define VkglTestCase_015726_1 "dEQP-GLES2.functional.clippi"
#define VkglTestCase_015726_2 "ng.line.wide_line_attrib_clip"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015726, VkglTestCase_015726_1, VkglTestCase_015726_2);
