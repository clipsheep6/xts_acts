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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000790_1 "KHR-GLES31.core.shad"
#define VkglTestCase_000790_2 "er_integer_mix.define"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000790, VkglTestCase_000790_1, VkglTestCase_000790_2);

#define VkglTestCase_000791_1 "KHR-GLES31.core.shader_inte"
#define VkglTestCase_000791_2 "ger_mix.prototypes-extension"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000791, VkglTestCase_000791_1, VkglTestCase_000791_2);

#define VkglTestCase_000792_1 "KHR-GLES31.core.shader"
#define VkglTestCase_000792_2 "_integer_mix.prototypes"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000792, VkglTestCase_000792_1, VkglTestCase_000792_2);

#define VkglTestCase_000793_1 "KHR-GLES31.core.shader_inte"
#define VkglTestCase_000793_2 "ger_mix.prototypes-negative"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000793, VkglTestCase_000793_1, VkglTestCase_000793_2);

#define VkglTestCase_000794_1 "KHR-GLES31.core.shader"
#define VkglTestCase_000794_2 "_integer_mix.mix-ivec4"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000794, VkglTestCase_000794_1, VkglTestCase_000794_2);

#define VkglTestCase_000795_1 "KHR-GLES31.core.shader"
#define VkglTestCase_000795_2 "_integer_mix.mix-uvec4"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000795, VkglTestCase_000795_1, VkglTestCase_000795_2);

#define VkglTestCase_000796_1 "KHR-GLES31.core.shader"
#define VkglTestCase_000796_2 "_integer_mix.mix-bvec4"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000796, VkglTestCase_000796_1, VkglTestCase_000796_2);
