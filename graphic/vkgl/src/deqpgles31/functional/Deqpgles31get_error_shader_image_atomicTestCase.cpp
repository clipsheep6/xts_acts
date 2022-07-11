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

#define VkglTestCase_019710_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019710_2 "age.get_error.shader_image_atomic.texture_2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019710, VkglTestCase_019710_1, VkglTestCase_019710_2);

#define VkglTestCase_019711_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019711_2 "age.get_error.shader_image_atomic.texture_3d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019711, VkglTestCase_019711_1, VkglTestCase_019711_2);

#define VkglTestCase_019712_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019712_2 "verage.get_error.shader_image_atomic.cube"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019712, VkglTestCase_019712_1, VkglTestCase_019712_2);

#define VkglTestCase_019713_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019713_2 "rage.get_error.shader_image_atomic.2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019713, VkglTestCase_019713_1, VkglTestCase_019713_2);

#define VkglTestCase_019714_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019714_2 "erage.get_error.shader_image_atomic.buffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019714, VkglTestCase_019714_1, VkglTestCase_019714_2);

#define VkglTestCase_019715_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019715_2 "age.get_error.shader_image_atomic.cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019715, VkglTestCase_019715_1, VkglTestCase_019715_2);
