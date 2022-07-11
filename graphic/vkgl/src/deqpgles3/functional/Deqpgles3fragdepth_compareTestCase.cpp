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

#define VkglTestCase_016723_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016723_2 "s.fragdepth.compare.no_write"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016723, VkglTestCase_016723_1, VkglTestCase_016723_2);

#define VkglTestCase_016724_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_016724_2 "ers.fragdepth.compare.const"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016724, VkglTestCase_016724_1, VkglTestCase_016724_2);

#define VkglTestCase_016725_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_016725_2 "rs.fragdepth.compare.uniform"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016725, VkglTestCase_016725_1, VkglTestCase_016725_2);

#define VkglTestCase_016726_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_016726_2 "rs.fragdepth.compare.dynamic"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016726, VkglTestCase_016726_1, VkglTestCase_016726_2);

#define VkglTestCase_016727_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016727_2 ".fragdepth.compare.fragcoord_z"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016727, VkglTestCase_016727_1, VkglTestCase_016727_2);

#define VkglTestCase_016728_1 "dEQP-GLES3.functional.shaders.fragde"
#define VkglTestCase_016728_2 "pth.compare.uniform_conditional_write"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016728, VkglTestCase_016728_1, VkglTestCase_016728_2);

#define VkglTestCase_016729_1 "dEQP-GLES3.functional.shaders.fragde"
#define VkglTestCase_016729_2 "pth.compare.dynamic_conditional_write"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016729, VkglTestCase_016729_1, VkglTestCase_016729_2);

#define VkglTestCase_016730_1 "dEQP-GLES3.functional.shaders.fra"
#define VkglTestCase_016730_2 "gdepth.compare.uniform_loop_write"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016730, VkglTestCase_016730_1, VkglTestCase_016730_2);

#define VkglTestCase_016731_1 "dEQP-GLES3.functional.shaders.fr"
#define VkglTestCase_016731_2 "agdepth.compare.write_in_function"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016731, VkglTestCase_016731_1, VkglTestCase_016731_2);
