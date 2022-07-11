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
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000017_1 "KHR-GLES32.shaders.aggressive"
#define VkglTestCase_000017_2 "_optimizations.sin_float_vert"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000017, VkglTestCase_000017_1, VkglTestCase_000017_2);

#define VkglTestCase_000018_1 "KHR-GLES32.shaders.aggressive"
#define VkglTestCase_000018_2 "_optimizations.sin_float_frag"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000018, VkglTestCase_000018_1, VkglTestCase_000018_2);

#define VkglTestCase_000019_1 "KHR-GLES32.shaders.aggressiv"
#define VkglTestCase_000019_2 "e_optimizations.sin_vec2_vert"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000019, VkglTestCase_000019_1, VkglTestCase_000019_2);

#define VkglTestCase_000020_1 "KHR-GLES32.shaders.aggressiv"
#define VkglTestCase_000020_2 "e_optimizations.sin_vec2_frag"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000020, VkglTestCase_000020_1, VkglTestCase_000020_2);

#define VkglTestCase_000021_1 "KHR-GLES32.shaders.aggressiv"
#define VkglTestCase_000021_2 "e_optimizations.sin_vec3_vert"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000021, VkglTestCase_000021_1, VkglTestCase_000021_2);

#define VkglTestCase_000022_1 "KHR-GLES32.shaders.aggressiv"
#define VkglTestCase_000022_2 "e_optimizations.sin_vec3_frag"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000022, VkglTestCase_000022_1, VkglTestCase_000022_2);

#define VkglTestCase_000023_1 "KHR-GLES32.shaders.aggressive"
#define VkglTestCase_000023_2 "_optimizations.cos_float_vert"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000023, VkglTestCase_000023_1, VkglTestCase_000023_2);

#define VkglTestCase_000024_1 "KHR-GLES32.shaders.aggressive"
#define VkglTestCase_000024_2 "_optimizations.cos_float_frag"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000024, VkglTestCase_000024_1, VkglTestCase_000024_2);

#define VkglTestCase_000025_1 "KHR-GLES32.shaders.aggressiv"
#define VkglTestCase_000025_2 "e_optimizations.cos_vec2_vert"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000025, VkglTestCase_000025_1, VkglTestCase_000025_2);

#define VkglTestCase_000026_1 "KHR-GLES32.shaders.aggressiv"
#define VkglTestCase_000026_2 "e_optimizations.cos_vec2_frag"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000026, VkglTestCase_000026_1, VkglTestCase_000026_2);

#define VkglTestCase_000027_1 "KHR-GLES32.shaders.aggressiv"
#define VkglTestCase_000027_2 "e_optimizations.cos_vec3_vert"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000027, VkglTestCase_000027_1, VkglTestCase_000027_2);

#define VkglTestCase_000028_1 "KHR-GLES32.shaders.aggressiv"
#define VkglTestCase_000028_2 "e_optimizations.cos_vec3_frag"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000028, VkglTestCase_000028_1, VkglTestCase_000028_2);
