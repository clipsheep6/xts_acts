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
#include "../ActsDeqpgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003196_1 "dEQP-GLES31.functional.shaders.multisample_interpolati"
#define VkglTestCase_003196_2 "on.interpolate_at_sample.negative.vec4_identity_swizzle"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003196, VkglTestCase_003196_1, VkglTestCase_003196_2);

#define VkglTestCase_003197_1 "dEQP-GLES31.functional.shaders.multisample_interpola"
#define VkglTestCase_003197_2 "tion.interpolate_at_sample.negative.vec4_crop_swizzle"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003197, VkglTestCase_003197_1, VkglTestCase_003197_2);

#define VkglTestCase_003198_1 "dEQP-GLES31.functional.shaders.multisample_interpolat"
#define VkglTestCase_003198_2 "ion.interpolate_at_sample.negative.vec4_mixed_swizzle"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003198, VkglTestCase_003198_1, VkglTestCase_003198_2);

#define VkglTestCase_003199_1 "dEQP-GLES31.functional.shaders.multisample_interpola"
#define VkglTestCase_003199_2 "tion.interpolate_at_sample.negative.interpolate_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003199, VkglTestCase_003199_1, VkglTestCase_003199_2);

#define VkglTestCase_003200_1 "dEQP-GLES31.functional.shaders.multisample_interpola"
#define VkglTestCase_003200_2 "tion.interpolate_at_sample.negative.interpolate_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003200, VkglTestCase_003200_1, VkglTestCase_003200_2);

#define VkglTestCase_003201_1 "dEQP-GLES31.functional.shaders.multisample_interpola"
#define VkglTestCase_003201_2 "tion.interpolate_at_sample.negative.interpolate_array"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003201, VkglTestCase_003201_1, VkglTestCase_003201_2);

#define VkglTestCase_003202_1 "dEQP-GLES31.functional.shaders.multisample_interpolat"
#define VkglTestCase_003202_2 "ion.interpolate_at_sample.negative.interpolate_struct"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003202, VkglTestCase_003202_1, VkglTestCase_003202_2);

#define VkglTestCase_003203_1 "dEQP-GLES31.functional.shaders.multisample_interpolation"
#define VkglTestCase_003203_2 ".interpolate_at_sample.negative.interpolate_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003203, VkglTestCase_003203_1, VkglTestCase_003203_2);

#define VkglTestCase_003204_1 "dEQP-GLES31.functional.shaders.multisample_interpola"
#define VkglTestCase_003204_2 "tion.interpolate_at_sample.negative.interpolate_local"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003204, VkglTestCase_003204_1, VkglTestCase_003204_2);

#define VkglTestCase_003205_1 "dEQP-GLES31.functional.shaders.multisample_interpolat"
#define VkglTestCase_003205_2 "ion.interpolate_at_sample.negative.interpolate_global"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003205, VkglTestCase_003205_1, VkglTestCase_003205_2);

#define VkglTestCase_003206_1 "dEQP-GLES31.functional.shaders.multisample_interpolati"
#define VkglTestCase_003206_2 "on.interpolate_at_sample.negative.interpolate_constant"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003206, VkglTestCase_003206_1, VkglTestCase_003206_2);
