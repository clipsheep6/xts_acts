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

#define VkglTestCase_018704_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018704_2 "rage.callbacks.shader_image_load.texture_2d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018704, VkglTestCase_018704_1, VkglTestCase_018704_2);

#define VkglTestCase_018705_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018705_2 "rage.callbacks.shader_image_load.texture_3d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018705, VkglTestCase_018705_1, VkglTestCase_018705_2);

#define VkglTestCase_018706_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018706_2 "overage.callbacks.shader_image_load.cube"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018706, VkglTestCase_018706_1, VkglTestCase_018706_2);

#define VkglTestCase_018707_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018707_2 "erage.callbacks.shader_image_load.2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018707, VkglTestCase_018707_1, VkglTestCase_018707_2);

#define VkglTestCase_018708_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018708_2 "verage.callbacks.shader_image_load.buffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018708, VkglTestCase_018708_1, VkglTestCase_018708_2);

#define VkglTestCase_018709_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018709_2 "rage.callbacks.shader_image_load.cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018709, VkglTestCase_018709_1, VkglTestCase_018709_2);
