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
#include "../ActsDeqpgles310020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019202_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019202_2 "overage.log.shader_image_load.texture_2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019202, VkglTestCase_019202_1, VkglTestCase_019202_2);

#define VkglTestCase_019203_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019203_2 "overage.log.shader_image_load.texture_3d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019203, VkglTestCase_019203_1, VkglTestCase_019203_2);

#define VkglTestCase_019204_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_019204_2 "e_coverage.log.shader_image_load.cube"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019204, VkglTestCase_019204_1, VkglTestCase_019204_2);

#define VkglTestCase_019205_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019205_2 "coverage.log.shader_image_load.2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019205, VkglTestCase_019205_1, VkglTestCase_019205_2);

#define VkglTestCase_019206_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019206_2 "_coverage.log.shader_image_load.buffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019206, VkglTestCase_019206_1, VkglTestCase_019206_2);

#define VkglTestCase_019207_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019207_2 "overage.log.shader_image_load.cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019207, VkglTestCase_019207_1, VkglTestCase_019207_2);
