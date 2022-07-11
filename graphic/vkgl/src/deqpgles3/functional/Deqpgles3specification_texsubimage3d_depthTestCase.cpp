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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026703_1 "dEQP-GLES3.functional.texture.specification.t"
#define VkglTestCase_026703_2 "exsubimage3d_depth.depth_component32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026703, VkglTestCase_026703_1, VkglTestCase_026703_2);

#define VkglTestCase_026704_1 "dEQP-GLES3.functional.texture.specification.t"
#define VkglTestCase_026704_2 "exsubimage3d_depth.depth_component24_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026704, VkglTestCase_026704_1, VkglTestCase_026704_2);

#define VkglTestCase_026705_1 "dEQP-GLES3.functional.texture.specification.t"
#define VkglTestCase_026705_2 "exsubimage3d_depth.depth_component16_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026705, VkglTestCase_026705_1, VkglTestCase_026705_2);

#define VkglTestCase_026706_1 "dEQP-GLES3.functional.texture.specification.t"
#define VkglTestCase_026706_2 "exsubimage3d_depth.depth32f_stencil8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026706, VkglTestCase_026706_1, VkglTestCase_026706_2);

#define VkglTestCase_026707_1 "dEQP-GLES3.functional.texture.specification."
#define VkglTestCase_026707_2 "texsubimage3d_depth.depth24_stencil8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026707, VkglTestCase_026707_1, VkglTestCase_026707_2);
