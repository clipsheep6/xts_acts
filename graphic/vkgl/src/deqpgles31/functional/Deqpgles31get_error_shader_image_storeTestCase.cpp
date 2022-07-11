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

#define VkglTestCase_019704_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019704_2 "age.get_error.shader_image_store.texture_2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019704, VkglTestCase_019704_1, VkglTestCase_019704_2);

#define VkglTestCase_019705_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019705_2 "age.get_error.shader_image_store.texture_3d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019705, VkglTestCase_019705_1, VkglTestCase_019705_2);

#define VkglTestCase_019706_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019706_2 "verage.get_error.shader_image_store.cube"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019706, VkglTestCase_019706_1, VkglTestCase_019706_2);

#define VkglTestCase_019707_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019707_2 "rage.get_error.shader_image_store.2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019707, VkglTestCase_019707_1, VkglTestCase_019707_2);

#define VkglTestCase_019708_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019708_2 "erage.get_error.shader_image_store.buffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019708, VkglTestCase_019708_1, VkglTestCase_019708_2);

#define VkglTestCase_019709_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019709_2 "age.get_error.shader_image_store.cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019709, VkglTestCase_019709_1, VkglTestCase_019709_2);
