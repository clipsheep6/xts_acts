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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002953_1 "KHR-GLES3.shaders.sha"
#define VkglTestCase_002953_2 "der_integer_mix.define"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002953, VkglTestCase_002953_1, VkglTestCase_002953_2);

#define VkglTestCase_002954_1 "KHR-GLES3.shaders.shader_int"
#define VkglTestCase_002954_2 "eger_mix.prototypes-extension"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002954, VkglTestCase_002954_1, VkglTestCase_002954_2);

#define VkglTestCase_002955_1 "KHR-GLES3.shaders.shade"
#define VkglTestCase_002955_2 "r_integer_mix.prototypes"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002955, VkglTestCase_002955_1, VkglTestCase_002955_2);

#define VkglTestCase_002956_1 "KHR-GLES3.shaders.shader_int"
#define VkglTestCase_002956_2 "eger_mix.prototypes-negative"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002956, VkglTestCase_002956_1, VkglTestCase_002956_2);

#define VkglTestCase_002957_1 "KHR-GLES3.shaders.shade"
#define VkglTestCase_002957_2 "r_integer_mix.mix-ivec4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002957, VkglTestCase_002957_1, VkglTestCase_002957_2);

#define VkglTestCase_002958_1 "KHR-GLES3.shaders.shade"
#define VkglTestCase_002958_2 "r_integer_mix.mix-uvec4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002958, VkglTestCase_002958_1, VkglTestCase_002958_2);

#define VkglTestCase_002959_1 "KHR-GLES3.shaders.shade"
#define VkglTestCase_002959_2 "r_integer_mix.mix-bvec4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002959, VkglTestCase_002959_1, VkglTestCase_002959_2);
