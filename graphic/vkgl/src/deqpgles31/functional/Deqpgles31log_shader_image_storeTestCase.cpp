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

#define VkglTestCase_019208_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019208_2 "verage.log.shader_image_store.texture_2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019208, VkglTestCase_019208_1, VkglTestCase_019208_2);

#define VkglTestCase_019209_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019209_2 "verage.log.shader_image_store.texture_3d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019209, VkglTestCase_019209_1, VkglTestCase_019209_2);

#define VkglTestCase_019210_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019210_2 "_coverage.log.shader_image_store.cube"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019210, VkglTestCase_019210_1, VkglTestCase_019210_2);

#define VkglTestCase_019211_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019211_2 "overage.log.shader_image_store.2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019211, VkglTestCase_019211_1, VkglTestCase_019211_2);

#define VkglTestCase_019212_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019212_2 "coverage.log.shader_image_store.buffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019212, VkglTestCase_019212_1, VkglTestCase_019212_2);

#define VkglTestCase_019213_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019213_2 "verage.log.shader_image_store.cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019213, VkglTestCase_019213_1, VkglTestCase_019213_2);
