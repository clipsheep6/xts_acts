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

#define VkglTestCase_002962_1 "KHR-GLES3.shaders.aggressive"
#define VkglTestCase_002962_2 "_optimizations.sin_float_vert"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002962, VkglTestCase_002962_1, VkglTestCase_002962_2);

#define VkglTestCase_002963_1 "KHR-GLES3.shaders.aggressive"
#define VkglTestCase_002963_2 "_optimizations.sin_float_frag"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002963, VkglTestCase_002963_1, VkglTestCase_002963_2);

#define VkglTestCase_002964_1 "KHR-GLES3.shaders.aggressive"
#define VkglTestCase_002964_2 "_optimizations.sin_vec2_vert"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002964, VkglTestCase_002964_1, VkglTestCase_002964_2);

#define VkglTestCase_002965_1 "KHR-GLES3.shaders.aggressive"
#define VkglTestCase_002965_2 "_optimizations.sin_vec2_frag"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002965, VkglTestCase_002965_1, VkglTestCase_002965_2);

#define VkglTestCase_002966_1 "KHR-GLES3.shaders.aggressive"
#define VkglTestCase_002966_2 "_optimizations.sin_vec3_vert"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002966, VkglTestCase_002966_1, VkglTestCase_002966_2);

#define VkglTestCase_002967_1 "KHR-GLES3.shaders.aggressive"
#define VkglTestCase_002967_2 "_optimizations.sin_vec3_frag"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002967, VkglTestCase_002967_1, VkglTestCase_002967_2);

#define VkglTestCase_002968_1 "KHR-GLES3.shaders.aggressive"
#define VkglTestCase_002968_2 "_optimizations.cos_float_vert"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002968, VkglTestCase_002968_1, VkglTestCase_002968_2);

#define VkglTestCase_002969_1 "KHR-GLES3.shaders.aggressive"
#define VkglTestCase_002969_2 "_optimizations.cos_float_frag"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002969, VkglTestCase_002969_1, VkglTestCase_002969_2);

#define VkglTestCase_002970_1 "KHR-GLES3.shaders.aggressive"
#define VkglTestCase_002970_2 "_optimizations.cos_vec2_vert"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002970, VkglTestCase_002970_1, VkglTestCase_002970_2);

#define VkglTestCase_002971_1 "KHR-GLES3.shaders.aggressive"
#define VkglTestCase_002971_2 "_optimizations.cos_vec2_frag"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002971, VkglTestCase_002971_1, VkglTestCase_002971_2);

#define VkglTestCase_002972_1 "KHR-GLES3.shaders.aggressive"
#define VkglTestCase_002972_2 "_optimizations.cos_vec3_vert"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002972, VkglTestCase_002972_1, VkglTestCase_002972_2);

#define VkglTestCase_002973_1 "KHR-GLES3.shaders.aggressive"
#define VkglTestCase_002973_2 "_optimizations.cos_vec3_frag"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002973, VkglTestCase_002973_1, VkglTestCase_002973_2);
