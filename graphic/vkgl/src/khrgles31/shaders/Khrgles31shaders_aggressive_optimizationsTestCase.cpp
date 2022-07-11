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
#include "../ActsKhrgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003457_1 "KHR-GLES31.shaders.aggressive"
#define VkglTestCase_003457_2 "_optimizations.sin_float_vert"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003457, VkglTestCase_003457_1, VkglTestCase_003457_2);

#define VkglTestCase_003458_1 "KHR-GLES31.shaders.aggressive"
#define VkglTestCase_003458_2 "_optimizations.sin_float_frag"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003458, VkglTestCase_003458_1, VkglTestCase_003458_2);

#define VkglTestCase_003459_1 "KHR-GLES31.shaders.aggressiv"
#define VkglTestCase_003459_2 "e_optimizations.sin_vec2_vert"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003459, VkglTestCase_003459_1, VkglTestCase_003459_2);

#define VkglTestCase_003460_1 "KHR-GLES31.shaders.aggressiv"
#define VkglTestCase_003460_2 "e_optimizations.sin_vec2_frag"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003460, VkglTestCase_003460_1, VkglTestCase_003460_2);

#define VkglTestCase_003461_1 "KHR-GLES31.shaders.aggressiv"
#define VkglTestCase_003461_2 "e_optimizations.sin_vec3_vert"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003461, VkglTestCase_003461_1, VkglTestCase_003461_2);

#define VkglTestCase_003462_1 "KHR-GLES31.shaders.aggressiv"
#define VkglTestCase_003462_2 "e_optimizations.sin_vec3_frag"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003462, VkglTestCase_003462_1, VkglTestCase_003462_2);

#define VkglTestCase_003463_1 "KHR-GLES31.shaders.aggressive"
#define VkglTestCase_003463_2 "_optimizations.cos_float_vert"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003463, VkglTestCase_003463_1, VkglTestCase_003463_2);

#define VkglTestCase_003464_1 "KHR-GLES31.shaders.aggressive"
#define VkglTestCase_003464_2 "_optimizations.cos_float_frag"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003464, VkglTestCase_003464_1, VkglTestCase_003464_2);

#define VkglTestCase_003465_1 "KHR-GLES31.shaders.aggressiv"
#define VkglTestCase_003465_2 "e_optimizations.cos_vec2_vert"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003465, VkglTestCase_003465_1, VkglTestCase_003465_2);

#define VkglTestCase_003466_1 "KHR-GLES31.shaders.aggressiv"
#define VkglTestCase_003466_2 "e_optimizations.cos_vec2_frag"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003466, VkglTestCase_003466_1, VkglTestCase_003466_2);

#define VkglTestCase_003467_1 "KHR-GLES31.shaders.aggressiv"
#define VkglTestCase_003467_2 "e_optimizations.cos_vec3_vert"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003467, VkglTestCase_003467_1, VkglTestCase_003467_2);

#define VkglTestCase_003468_1 "KHR-GLES31.shaders.aggressiv"
#define VkglTestCase_003468_2 "e_optimizations.cos_vec3_frag"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003468, VkglTestCase_003468_1, VkglTestCase_003468_2);
