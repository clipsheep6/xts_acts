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
#include "../ActsDeqpgles310013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012783_1 "dEQP-GLES31.functional.texture.specification.te"
#define VkglTestCase_012783_2 "ximage3d_depth_pbo.depth_component32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012783, VkglTestCase_012783_1, VkglTestCase_012783_2);

#define VkglTestCase_012784_1 "dEQP-GLES31.functional.texture.specification.te"
#define VkglTestCase_012784_2 "ximage3d_depth_pbo.depth_component24_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012784, VkglTestCase_012784_1, VkglTestCase_012784_2);

#define VkglTestCase_012785_1 "dEQP-GLES31.functional.texture.specification.te"
#define VkglTestCase_012785_2 "ximage3d_depth_pbo.depth_component16_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012785, VkglTestCase_012785_1, VkglTestCase_012785_2);

#define VkglTestCase_012786_1 "dEQP-GLES31.functional.texture.specification.te"
#define VkglTestCase_012786_2 "ximage3d_depth_pbo.depth32f_stencil8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012786, VkglTestCase_012786_1, VkglTestCase_012786_2);

#define VkglTestCase_012787_1 "dEQP-GLES31.functional.texture.specification.t"
#define VkglTestCase_012787_2 "eximage3d_depth_pbo.depth24_stencil8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012787, VkglTestCase_012787_1, VkglTestCase_012787_2);
