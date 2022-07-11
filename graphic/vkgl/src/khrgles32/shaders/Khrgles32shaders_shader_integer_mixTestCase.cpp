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

#define VkglTestCase_000007_1 "KHR-GLES32.shaders.sha"
#define VkglTestCase_000007_2 "der_integer_mix.define"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000007, VkglTestCase_000007_1, VkglTestCase_000007_2);

#define VkglTestCase_000008_1 "KHR-GLES32.shaders.shader_int"
#define VkglTestCase_000008_2 "eger_mix.prototypes-extension"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000008, VkglTestCase_000008_1, VkglTestCase_000008_2);

#define VkglTestCase_000009_1 "KHR-GLES32.shaders.shade"
#define VkglTestCase_000009_2 "r_integer_mix.prototypes"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000009, VkglTestCase_000009_1, VkglTestCase_000009_2);

#define VkglTestCase_000010_1 "KHR-GLES32.shaders.shader_in"
#define VkglTestCase_000010_2 "teger_mix.prototypes-negative"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000010, VkglTestCase_000010_1, VkglTestCase_000010_2);

#define VkglTestCase_000011_1 "KHR-GLES32.shaders.shad"
#define VkglTestCase_000011_2 "er_integer_mix.mix-ivec4"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000011, VkglTestCase_000011_1, VkglTestCase_000011_2);

#define VkglTestCase_000012_1 "KHR-GLES32.shaders.shad"
#define VkglTestCase_000012_2 "er_integer_mix.mix-uvec4"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000012, VkglTestCase_000012_1, VkglTestCase_000012_2);

#define VkglTestCase_000013_1 "KHR-GLES32.shaders.shad"
#define VkglTestCase_000013_2 "er_integer_mix.mix-bvec4"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000013, VkglTestCase_000013_1, VkglTestCase_000013_2);
