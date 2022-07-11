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

#define VkglTestCase_012843_1 "dEQP-GLES31.functional.texture.specification.te"
#define VkglTestCase_012843_2 "xsubimage3d_depth.depth_component32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012843, VkglTestCase_012843_1, VkglTestCase_012843_2);

#define VkglTestCase_012844_1 "dEQP-GLES31.functional.texture.specification.t"
#define VkglTestCase_012844_2 "exsubimage3d_depth.depth_component24_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012844, VkglTestCase_012844_1, VkglTestCase_012844_2);

#define VkglTestCase_012845_1 "dEQP-GLES31.functional.texture.specification.t"
#define VkglTestCase_012845_2 "exsubimage3d_depth.depth_component16_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012845, VkglTestCase_012845_1, VkglTestCase_012845_2);

#define VkglTestCase_012846_1 "dEQP-GLES31.functional.texture.specification.t"
#define VkglTestCase_012846_2 "exsubimage3d_depth.depth32f_stencil8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012846, VkglTestCase_012846_1, VkglTestCase_012846_2);

#define VkglTestCase_012847_1 "dEQP-GLES31.functional.texture.specification.t"
#define VkglTestCase_012847_2 "exsubimage3d_depth.depth24_stencil8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012847, VkglTestCase_012847_1, VkglTestCase_012847_2);
