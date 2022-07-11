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
#include "../Khrgles2BaseFunc.h"
#include "../ActsKhrgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000003_1 "KHR-GLES2.shaders.aggressive"
#define VkglTestCase_000003_2 "_optimizations.sin_float_vert"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000003, VkglTestCase_000003_1, VkglTestCase_000003_2);

#define VkglTestCase_000004_1 "KHR-GLES2.shaders.aggressive"
#define VkglTestCase_000004_2 "_optimizations.sin_float_frag"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000004, VkglTestCase_000004_1, VkglTestCase_000004_2);

#define VkglTestCase_000005_1 "KHR-GLES2.shaders.aggressive"
#define VkglTestCase_000005_2 "_optimizations.sin_vec2_vert"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000005, VkglTestCase_000005_1, VkglTestCase_000005_2);

#define VkglTestCase_000006_1 "KHR-GLES2.shaders.aggressive"
#define VkglTestCase_000006_2 "_optimizations.sin_vec2_frag"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000006, VkglTestCase_000006_1, VkglTestCase_000006_2);

#define VkglTestCase_000007_1 "KHR-GLES2.shaders.aggressive"
#define VkglTestCase_000007_2 "_optimizations.sin_vec3_vert"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000007, VkglTestCase_000007_1, VkglTestCase_000007_2);

#define VkglTestCase_000008_1 "KHR-GLES2.shaders.aggressive"
#define VkglTestCase_000008_2 "_optimizations.sin_vec3_frag"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000008, VkglTestCase_000008_1, VkglTestCase_000008_2);

#define VkglTestCase_000009_1 "KHR-GLES2.shaders.aggressive"
#define VkglTestCase_000009_2 "_optimizations.cos_float_vert"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000009, VkglTestCase_000009_1, VkglTestCase_000009_2);

#define VkglTestCase_000010_1 "KHR-GLES2.shaders.aggressive"
#define VkglTestCase_000010_2 "_optimizations.cos_float_frag"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000010, VkglTestCase_000010_1, VkglTestCase_000010_2);

#define VkglTestCase_000011_1 "KHR-GLES2.shaders.aggressive"
#define VkglTestCase_000011_2 "_optimizations.cos_vec2_vert"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000011, VkglTestCase_000011_1, VkglTestCase_000011_2);

#define VkglTestCase_000012_1 "KHR-GLES2.shaders.aggressive"
#define VkglTestCase_000012_2 "_optimizations.cos_vec2_frag"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000012, VkglTestCase_000012_1, VkglTestCase_000012_2);

#define VkglTestCase_000013_1 "KHR-GLES2.shaders.aggressive"
#define VkglTestCase_000013_2 "_optimizations.cos_vec3_vert"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000013, VkglTestCase_000013_1, VkglTestCase_000013_2);

#define VkglTestCase_000014_1 "KHR-GLES2.shaders.aggressive"
#define VkglTestCase_000014_2 "_optimizations.cos_vec3_frag"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000014, VkglTestCase_000014_1, VkglTestCase_000014_2);
