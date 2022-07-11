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

#define VkglTestCase_019716_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019716_2 "ge.get_error.shader_image_exchange.texture_2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019716, VkglTestCase_019716_1, VkglTestCase_019716_2);

#define VkglTestCase_019717_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019717_2 "ge.get_error.shader_image_exchange.texture_3d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019717, VkglTestCase_019717_1, VkglTestCase_019717_2);

#define VkglTestCase_019718_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019718_2 "erage.get_error.shader_image_exchange.cube"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019718, VkglTestCase_019718_1, VkglTestCase_019718_2);

#define VkglTestCase_019719_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019719_2 "age.get_error.shader_image_exchange.2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019719, VkglTestCase_019719_1, VkglTestCase_019719_2);

#define VkglTestCase_019720_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019720_2 "rage.get_error.shader_image_exchange.buffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019720, VkglTestCase_019720_1, VkglTestCase_019720_2);

#define VkglTestCase_019721_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019721_2 "ge.get_error.shader_image_exchange.cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019721, VkglTestCase_019721_1, VkglTestCase_019721_2);
