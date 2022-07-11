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

#define VkglTestCase_019698_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019698_2 "rage.get_error.shader_image_load.texture_2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019698, VkglTestCase_019698_1, VkglTestCase_019698_2);

#define VkglTestCase_019699_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019699_2 "rage.get_error.shader_image_load.texture_3d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019699, VkglTestCase_019699_1, VkglTestCase_019699_2);

#define VkglTestCase_019700_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019700_2 "overage.get_error.shader_image_load.cube"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019700, VkglTestCase_019700_1, VkglTestCase_019700_2);

#define VkglTestCase_019701_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019701_2 "erage.get_error.shader_image_load.2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019701, VkglTestCase_019701_1, VkglTestCase_019701_2);

#define VkglTestCase_019702_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019702_2 "verage.get_error.shader_image_load.buffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019702, VkglTestCase_019702_1, VkglTestCase_019702_2);

#define VkglTestCase_019703_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019703_2 "rage.get_error.shader_image_load.cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019703, VkglTestCase_019703_1, VkglTestCase_019703_2);
