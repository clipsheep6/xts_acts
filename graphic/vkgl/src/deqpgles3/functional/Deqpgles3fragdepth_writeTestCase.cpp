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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016714_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_016714_2 "rs.fragdepth.write.no_write"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016714, VkglTestCase_016714_1, VkglTestCase_016714_2);

#define VkglTestCase_016715_1 "dEQP-GLES3.functional.sha"
#define VkglTestCase_016715_2 "ders.fragdepth.write.const"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016715, VkglTestCase_016715_1, VkglTestCase_016715_2);

#define VkglTestCase_016716_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_016716_2 "ers.fragdepth.write.uniform"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016716, VkglTestCase_016716_1, VkglTestCase_016716_2);

#define VkglTestCase_016717_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_016717_2 "ers.fragdepth.write.dynamic"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016717, VkglTestCase_016717_1, VkglTestCase_016717_2);

#define VkglTestCase_016718_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016718_2 "s.fragdepth.write.fragcoord_z"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016718, VkglTestCase_016718_1, VkglTestCase_016718_2);

#define VkglTestCase_016719_1 "dEQP-GLES3.functional.shaders.fragd"
#define VkglTestCase_016719_2 "epth.write.uniform_conditional_write"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016719, VkglTestCase_016719_1, VkglTestCase_016719_2);

#define VkglTestCase_016720_1 "dEQP-GLES3.functional.shaders.fragd"
#define VkglTestCase_016720_2 "epth.write.dynamic_conditional_write"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016720, VkglTestCase_016720_1, VkglTestCase_016720_2);

#define VkglTestCase_016721_1 "dEQP-GLES3.functional.shaders.fr"
#define VkglTestCase_016721_2 "agdepth.write.uniform_loop_write"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016721, VkglTestCase_016721_1, VkglTestCase_016721_2);

#define VkglTestCase_016722_1 "dEQP-GLES3.functional.shaders.f"
#define VkglTestCase_016722_2 "ragdepth.write.write_in_function"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016722, VkglTestCase_016722_1, VkglTestCase_016722_2);
