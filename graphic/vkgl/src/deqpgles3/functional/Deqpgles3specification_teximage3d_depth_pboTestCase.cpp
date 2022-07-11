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

#define VkglTestCase_026525_1 "dEQP-GLES3.functional.texture.specification.te"
#define VkglTestCase_026525_2 "ximage3d_depth_pbo.depth_component32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026525, VkglTestCase_026525_1, VkglTestCase_026525_2);

#define VkglTestCase_026526_1 "dEQP-GLES3.functional.texture.specification.t"
#define VkglTestCase_026526_2 "eximage3d_depth_pbo.depth_component24_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026526, VkglTestCase_026526_1, VkglTestCase_026526_2);

#define VkglTestCase_026527_1 "dEQP-GLES3.functional.texture.specification.t"
#define VkglTestCase_026527_2 "eximage3d_depth_pbo.depth_component16_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026527, VkglTestCase_026527_1, VkglTestCase_026527_2);

#define VkglTestCase_026528_1 "dEQP-GLES3.functional.texture.specification.t"
#define VkglTestCase_026528_2 "eximage3d_depth_pbo.depth32f_stencil8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026528, VkglTestCase_026528_1, VkglTestCase_026528_2);

#define VkglTestCase_026529_1 "dEQP-GLES3.functional.texture.specification.t"
#define VkglTestCase_026529_2 "eximage3d_depth_pbo.depth24_stencil8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026529, VkglTestCase_026529_1, VkglTestCase_026529_2);
