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

#define VkglTestCase_003207_1 "dEQP-GLES31.functional.shaders.multisample_interpolatio"
#define VkglTestCase_003207_2 "n.interpolate_at_centroid.negative.vec4_identity_swizzle"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003207, VkglTestCase_003207_1, VkglTestCase_003207_2);

#define VkglTestCase_003208_1 "dEQP-GLES31.functional.shaders.multisample_interpolat"
#define VkglTestCase_003208_2 "ion.interpolate_at_centroid.negative.vec4_crop_swizzle"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003208, VkglTestCase_003208_1, VkglTestCase_003208_2);

#define VkglTestCase_003209_1 "dEQP-GLES31.functional.shaders.multisample_interpolati"
#define VkglTestCase_003209_2 "on.interpolate_at_centroid.negative.vec4_mixed_swizzle"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003209, VkglTestCase_003209_1, VkglTestCase_003209_2);

#define VkglTestCase_003210_1 "dEQP-GLES31.functional.shaders.multisample_interpolat"
#define VkglTestCase_003210_2 "ion.interpolate_at_centroid.negative.interpolate_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003210, VkglTestCase_003210_1, VkglTestCase_003210_2);

#define VkglTestCase_003211_1 "dEQP-GLES31.functional.shaders.multisample_interpolat"
#define VkglTestCase_003211_2 "ion.interpolate_at_centroid.negative.interpolate_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003211, VkglTestCase_003211_1, VkglTestCase_003211_2);

#define VkglTestCase_003212_1 "dEQP-GLES31.functional.shaders.multisample_interpolat"
#define VkglTestCase_003212_2 "ion.interpolate_at_centroid.negative.interpolate_array"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003212, VkglTestCase_003212_1, VkglTestCase_003212_2);

#define VkglTestCase_003213_1 "dEQP-GLES31.functional.shaders.multisample_interpolati"
#define VkglTestCase_003213_2 "on.interpolate_at_centroid.negative.interpolate_struct"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003213, VkglTestCase_003213_1, VkglTestCase_003213_2);

#define VkglTestCase_003214_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003214_2 "interpolate_at_centroid.negative.interpolate_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003214, VkglTestCase_003214_1, VkglTestCase_003214_2);

#define VkglTestCase_003215_1 "dEQP-GLES31.functional.shaders.multisample_interpolat"
#define VkglTestCase_003215_2 "ion.interpolate_at_centroid.negative.interpolate_local"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003215, VkglTestCase_003215_1, VkglTestCase_003215_2);

#define VkglTestCase_003216_1 "dEQP-GLES31.functional.shaders.multisample_interpolati"
#define VkglTestCase_003216_2 "on.interpolate_at_centroid.negative.interpolate_global"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003216, VkglTestCase_003216_1, VkglTestCase_003216_2);

#define VkglTestCase_003217_1 "dEQP-GLES31.functional.shaders.multisample_interpolatio"
#define VkglTestCase_003217_2 "n.interpolate_at_centroid.negative.interpolate_constant"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003217, VkglTestCase_003217_1, VkglTestCase_003217_2);
