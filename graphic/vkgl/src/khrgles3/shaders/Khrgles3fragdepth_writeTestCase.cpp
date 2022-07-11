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

#define VkglTestCase_000011_1 "KHR-GLES3.shaders.fra"
#define VkglTestCase_000011_2 "gdepth.write.no_write"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000011, VkglTestCase_000011_1, VkglTestCase_000011_2);

#define VkglTestCase_000012_1 "KHR-GLES3.shaders.f"
#define VkglTestCase_000012_2 "ragdepth.write.const"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000012, VkglTestCase_000012_1, VkglTestCase_000012_2);

#define VkglTestCase_000013_1 "KHR-GLES3.shaders.fr"
#define VkglTestCase_000013_2 "agdepth.write.uniform"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000013, VkglTestCase_000013_1, VkglTestCase_000013_2);

#define VkglTestCase_000014_1 "KHR-GLES3.shaders.fr"
#define VkglTestCase_000014_2 "agdepth.write.dynamic"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000014, VkglTestCase_000014_1, VkglTestCase_000014_2);

#define VkglTestCase_000015_1 "KHR-GLES3.shaders.frag"
#define VkglTestCase_000015_2 "depth.write.fragcoord_z"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000015, VkglTestCase_000015_1, VkglTestCase_000015_2);

#define VkglTestCase_000016_1 "KHR-GLES3.shaders.fragdepth.w"
#define VkglTestCase_000016_2 "rite.uniform_conditional_write"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000016, VkglTestCase_000016_1, VkglTestCase_000016_2);

#define VkglTestCase_000017_1 "KHR-GLES3.shaders.fragdepth.w"
#define VkglTestCase_000017_2 "rite.dynamic_conditional_write"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000017, VkglTestCase_000017_1, VkglTestCase_000017_2);

#define VkglTestCase_000018_1 "KHR-GLES3.shaders.fragdept"
#define VkglTestCase_000018_2 "h.write.uniform_loop_write"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000018, VkglTestCase_000018_1, VkglTestCase_000018_2);

#define VkglTestCase_000019_1 "KHR-GLES3.shaders.fragdep"
#define VkglTestCase_000019_2 "th.write.write_in_function"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000019, VkglTestCase_000019_1, VkglTestCase_000019_2);
