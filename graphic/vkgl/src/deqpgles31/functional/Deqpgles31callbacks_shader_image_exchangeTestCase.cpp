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

#define VkglTestCase_018722_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018722_2 "ge.callbacks.shader_image_exchange.texture_2d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018722, VkglTestCase_018722_1, VkglTestCase_018722_2);

#define VkglTestCase_018723_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018723_2 "ge.callbacks.shader_image_exchange.texture_3d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018723, VkglTestCase_018723_1, VkglTestCase_018723_2);

#define VkglTestCase_018724_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018724_2 "erage.callbacks.shader_image_exchange.cube"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018724, VkglTestCase_018724_1, VkglTestCase_018724_2);

#define VkglTestCase_018725_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018725_2 "age.callbacks.shader_image_exchange.2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018725, VkglTestCase_018725_1, VkglTestCase_018725_2);

#define VkglTestCase_018726_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018726_2 "rage.callbacks.shader_image_exchange.buffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018726, VkglTestCase_018726_1, VkglTestCase_018726_2);

#define VkglTestCase_018727_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018727_2 "ge.callbacks.shader_image_exchange.cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018727, VkglTestCase_018727_1, VkglTestCase_018727_2);
