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

#define VkglTestCase_019214_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019214_2 "verage.log.shader_image_atomic.texture_2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019214, VkglTestCase_019214_1, VkglTestCase_019214_2);

#define VkglTestCase_019215_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019215_2 "verage.log.shader_image_atomic.texture_3d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019215, VkglTestCase_019215_1, VkglTestCase_019215_2);

#define VkglTestCase_019216_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019216_2 "_coverage.log.shader_image_atomic.cube"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019216, VkglTestCase_019216_1, VkglTestCase_019216_2);

#define VkglTestCase_019217_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019217_2 "overage.log.shader_image_atomic.2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019217, VkglTestCase_019217_1, VkglTestCase_019217_2);

#define VkglTestCase_019218_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019218_2 "coverage.log.shader_image_atomic.buffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019218, VkglTestCase_019218_1, VkglTestCase_019218_2);

#define VkglTestCase_019219_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019219_2 "verage.log.shader_image_atomic.cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019219, VkglTestCase_019219_1, VkglTestCase_019219_2);
