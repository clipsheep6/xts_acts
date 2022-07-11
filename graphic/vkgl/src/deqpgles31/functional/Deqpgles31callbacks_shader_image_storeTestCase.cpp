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

#define VkglTestCase_018710_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018710_2 "age.callbacks.shader_image_store.texture_2d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018710, VkglTestCase_018710_1, VkglTestCase_018710_2);

#define VkglTestCase_018711_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018711_2 "age.callbacks.shader_image_store.texture_3d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018711, VkglTestCase_018711_1, VkglTestCase_018711_2);

#define VkglTestCase_018712_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018712_2 "verage.callbacks.shader_image_store.cube"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018712, VkglTestCase_018712_1, VkglTestCase_018712_2);

#define VkglTestCase_018713_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018713_2 "rage.callbacks.shader_image_store.2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018713, VkglTestCase_018713_1, VkglTestCase_018713_2);

#define VkglTestCase_018714_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018714_2 "erage.callbacks.shader_image_store.buffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018714, VkglTestCase_018714_1, VkglTestCase_018714_2);

#define VkglTestCase_018715_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018715_2 "age.callbacks.shader_image_store.cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018715, VkglTestCase_018715_1, VkglTestCase_018715_2);
