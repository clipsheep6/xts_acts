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

#define VkglTestCase_003283_1 "dEQP-GLES31.functional.shaders.multisample_interpolati"
#define VkglTestCase_003283_2 "on.interpolate_at_offset.negative.vec4_identity_swizzle"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003283, VkglTestCase_003283_1, VkglTestCase_003283_2);

#define VkglTestCase_003284_1 "dEQP-GLES31.functional.shaders.multisample_interpola"
#define VkglTestCase_003284_2 "tion.interpolate_at_offset.negative.vec4_crop_swizzle"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003284, VkglTestCase_003284_1, VkglTestCase_003284_2);

#define VkglTestCase_003285_1 "dEQP-GLES31.functional.shaders.multisample_interpolat"
#define VkglTestCase_003285_2 "ion.interpolate_at_offset.negative.vec4_mixed_swizzle"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003285, VkglTestCase_003285_1, VkglTestCase_003285_2);

#define VkglTestCase_003286_1 "dEQP-GLES31.functional.shaders.multisample_interpola"
#define VkglTestCase_003286_2 "tion.interpolate_at_offset.negative.interpolate_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003286, VkglTestCase_003286_1, VkglTestCase_003286_2);

#define VkglTestCase_003287_1 "dEQP-GLES31.functional.shaders.multisample_interpola"
#define VkglTestCase_003287_2 "tion.interpolate_at_offset.negative.interpolate_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003287, VkglTestCase_003287_1, VkglTestCase_003287_2);

#define VkglTestCase_003288_1 "dEQP-GLES31.functional.shaders.multisample_interpola"
#define VkglTestCase_003288_2 "tion.interpolate_at_offset.negative.interpolate_array"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003288, VkglTestCase_003288_1, VkglTestCase_003288_2);

#define VkglTestCase_003289_1 "dEQP-GLES31.functional.shaders.multisample_interpolat"
#define VkglTestCase_003289_2 "ion.interpolate_at_offset.negative.interpolate_struct"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003289, VkglTestCase_003289_1, VkglTestCase_003289_2);

#define VkglTestCase_003290_1 "dEQP-GLES31.functional.shaders.multisample_interpolation"
#define VkglTestCase_003290_2 ".interpolate_at_offset.negative.interpolate_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003290, VkglTestCase_003290_1, VkglTestCase_003290_2);

#define VkglTestCase_003291_1 "dEQP-GLES31.functional.shaders.multisample_interpola"
#define VkglTestCase_003291_2 "tion.interpolate_at_offset.negative.interpolate_local"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003291, VkglTestCase_003291_1, VkglTestCase_003291_2);

#define VkglTestCase_003292_1 "dEQP-GLES31.functional.shaders.multisample_interpolat"
#define VkglTestCase_003292_2 "ion.interpolate_at_offset.negative.interpolate_global"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003292, VkglTestCase_003292_1, VkglTestCase_003292_2);

#define VkglTestCase_003293_1 "dEQP-GLES31.functional.shaders.multisample_interpolati"
#define VkglTestCase_003293_2 "on.interpolate_at_offset.negative.interpolate_constant"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003293, VkglTestCase_003293_1, VkglTestCase_003293_2);
