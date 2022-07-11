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
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000026_1 "dEQP-GLES2.functional"
#define VkglTestCase_000026_2 ".clip_control.initial"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000026, VkglTestCase_000026_1, VkglTestCase_000026_2);

#define VkglTestCase_000027_1 "dEQP-GLES2.functional."
#define VkglTestCase_000027_2 "clip_control.modify_get"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000027, VkglTestCase_000027_1, VkglTestCase_000027_2);

#define VkglTestCase_000028_1 "dEQP-GLES2.functiona"
#define VkglTestCase_000028_2 "l.clip_control.errors"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000028, VkglTestCase_000028_1, VkglTestCase_000028_2);

#define VkglTestCase_000029_1 "dEQP-GLES2.functiona"
#define VkglTestCase_000029_2 "l.clip_control.origin"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000029, VkglTestCase_000029_1, VkglTestCase_000029_2);

#define VkglTestCase_000030_1 "dEQP-GLES2.functional.clip_c"
#define VkglTestCase_000030_2 "ontrol.depth_mode_zero_to_one"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000030, VkglTestCase_000030_1, VkglTestCase_000030_2);

#define VkglTestCase_000031_1 "dEQP-GLES2.functional.clip_c"
#define VkglTestCase_000031_2 "ontrol.depth_mode_one_to_one"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000031, VkglTestCase_000031_1, VkglTestCase_000031_2);

#define VkglTestCase_000032_1 "dEQP-GLES2.functional.c"
#define VkglTestCase_000032_2 "lip_control.face_culling"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000032, VkglTestCase_000032_1, VkglTestCase_000032_2);

#define VkglTestCase_000033_1 "dEQP-GLES2.functional.cli"
#define VkglTestCase_000033_2 "p_control.viewport_bounds"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000033, VkglTestCase_000033_1, VkglTestCase_000033_2);
