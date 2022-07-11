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

#define VkglTestCase_015701_1 "dEQP-GLES2.functional.cl"
#define VkglTestCase_015701_2 "ipping.point.point_z_clip"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015701, VkglTestCase_015701_1, VkglTestCase_015701_2);

#define VkglTestCase_015702_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015702_2 "oint.point_z_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015702, VkglTestCase_015702_1, VkglTestCase_015702_2);

#define VkglTestCase_015703_1 "dEQP-GLES2.functional.clipping.p"
#define VkglTestCase_015703_2 "oint.point_z_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015703, VkglTestCase_015703_1, VkglTestCase_015703_2);

#define VkglTestCase_015704_1 "dEQP-GLES2.functional.clipping."
#define VkglTestCase_015704_2 "point.point_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015704, VkglTestCase_015704_1, VkglTestCase_015704_2);

#define VkglTestCase_015705_1 "dEQP-GLES2.functional.clipping."
#define VkglTestCase_015705_2 "point.point_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015705, VkglTestCase_015705_1, VkglTestCase_015705_2);

#define VkglTestCase_015706_1 "dEQP-GLES2.functional.clipp"
#define VkglTestCase_015706_2 "ing.point.wide_point_z_clip"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015706, VkglTestCase_015706_1, VkglTestCase_015706_2);

#define VkglTestCase_015707_1 "dEQP-GLES2.functional.clipping.poin"
#define VkglTestCase_015707_2 "t.wide_point_z_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015707, VkglTestCase_015707_1, VkglTestCase_015707_2);

#define VkglTestCase_015708_1 "dEQP-GLES2.functional.clipping.poin"
#define VkglTestCase_015708_2 "t.wide_point_z_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015708, VkglTestCase_015708_1, VkglTestCase_015708_2);

#define VkglTestCase_015709_1 "dEQP-GLES2.functional.clip"
#define VkglTestCase_015709_2 "ping.point.wide_point_clip"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015709, VkglTestCase_015709_1, VkglTestCase_015709_2);

#define VkglTestCase_015710_1 "dEQP-GLES2.functional.clipping.poi"
#define VkglTestCase_015710_2 "nt.wide_point_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015710, VkglTestCase_015710_1, VkglTestCase_015710_2);

#define VkglTestCase_015711_1 "dEQP-GLES2.functional.clipping.poi"
#define VkglTestCase_015711_2 "nt.wide_point_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015711, VkglTestCase_015711_1, VkglTestCase_015711_2);
