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
#include "../ActsKhrgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000020_1 "KHR-GLES3.shaders.frag"
#define VkglTestCase_000020_2 "depth.compare.no_write"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000020, VkglTestCase_000020_1, VkglTestCase_000020_2);

#define VkglTestCase_000021_1 "KHR-GLES3.shaders.fr"
#define VkglTestCase_000021_2 "agdepth.compare.const"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000021, VkglTestCase_000021_1, VkglTestCase_000021_2);

#define VkglTestCase_000022_1 "KHR-GLES3.shaders.fra"
#define VkglTestCase_000022_2 "gdepth.compare.uniform"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000022, VkglTestCase_000022_1, VkglTestCase_000022_2);

#define VkglTestCase_000023_1 "KHR-GLES3.shaders.fra"
#define VkglTestCase_000023_2 "gdepth.compare.dynamic"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000023, VkglTestCase_000023_1, VkglTestCase_000023_2);

#define VkglTestCase_000024_1 "KHR-GLES3.shaders.fragd"
#define VkglTestCase_000024_2 "epth.compare.fragcoord_z"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000024, VkglTestCase_000024_1, VkglTestCase_000024_2);

#define VkglTestCase_000025_1 "KHR-GLES3.shaders.fragdepth.co"
#define VkglTestCase_000025_2 "mpare.uniform_conditional_write"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000025, VkglTestCase_000025_1, VkglTestCase_000025_2);

#define VkglTestCase_000026_1 "KHR-GLES3.shaders.fragdepth.co"
#define VkglTestCase_000026_2 "mpare.dynamic_conditional_write"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000026, VkglTestCase_000026_1, VkglTestCase_000026_2);

#define VkglTestCase_000027_1 "KHR-GLES3.shaders.fragdepth"
#define VkglTestCase_000027_2 ".compare.uniform_loop_write"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000027, VkglTestCase_000027_1, VkglTestCase_000027_2);

#define VkglTestCase_000028_1 "KHR-GLES3.shaders.fragdept"
#define VkglTestCase_000028_2 "h.compare.write_in_function"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000028, VkglTestCase_000028_1, VkglTestCase_000028_2);
