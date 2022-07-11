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

#define VkglTestCase_019220_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019220_2 "erage.log.shader_image_exchange.texture_2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019220, VkglTestCase_019220_1, VkglTestCase_019220_2);

#define VkglTestCase_019221_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019221_2 "erage.log.shader_image_exchange.texture_3d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019221, VkglTestCase_019221_1, VkglTestCase_019221_2);

#define VkglTestCase_019222_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019222_2 "coverage.log.shader_image_exchange.cube"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019222, VkglTestCase_019222_1, VkglTestCase_019222_2);

#define VkglTestCase_019223_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019223_2 "verage.log.shader_image_exchange.2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019223, VkglTestCase_019223_1, VkglTestCase_019223_2);

#define VkglTestCase_019224_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019224_2 "overage.log.shader_image_exchange.buffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019224, VkglTestCase_019224_1, VkglTestCase_019224_2);

#define VkglTestCase_019225_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019225_2 "erage.log.shader_image_exchange.cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019225, VkglTestCase_019225_1, VkglTestCase_019225_2);
