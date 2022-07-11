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

#define VkglTestCase_018716_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018716_2 "age.callbacks.shader_image_atomic.texture_2d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018716, VkglTestCase_018716_1, VkglTestCase_018716_2);

#define VkglTestCase_018717_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018717_2 "age.callbacks.shader_image_atomic.texture_3d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018717, VkglTestCase_018717_1, VkglTestCase_018717_2);

#define VkglTestCase_018718_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018718_2 "verage.callbacks.shader_image_atomic.cube"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018718, VkglTestCase_018718_1, VkglTestCase_018718_2);

#define VkglTestCase_018719_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018719_2 "rage.callbacks.shader_image_atomic.2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018719, VkglTestCase_018719_1, VkglTestCase_018719_2);

#define VkglTestCase_018720_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018720_2 "erage.callbacks.shader_image_atomic.buffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018720, VkglTestCase_018720_1, VkglTestCase_018720_2);

#define VkglTestCase_018721_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018721_2 "age.callbacks.shader_image_atomic.cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018721, VkglTestCase_018721_1, VkglTestCase_018721_2);
