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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014594_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_014594_2 "border_clamp.sampler.unorm_color"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014594, VkglTestCase_014594_1, VkglTestCase_014594_2);

#define VkglTestCase_014595_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_014595_2 "border_clamp.sampler.snorm_color"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014595, VkglTestCase_014595_1, VkglTestCase_014595_2);

#define VkglTestCase_014596_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_014596_2 "border_clamp.sampler.float_color"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014596, VkglTestCase_014596_1, VkglTestCase_014596_2);

#define VkglTestCase_014597_1 "dEQP-GLES31.functional.texture"
#define VkglTestCase_014597_2 ".border_clamp.sampler.int_color"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014597, VkglTestCase_014597_1, VkglTestCase_014597_2);

#define VkglTestCase_014598_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_014598_2 "border_clamp.sampler.uint_color"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014598, VkglTestCase_014598_1, VkglTestCase_014598_2);

#define VkglTestCase_014599_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_014599_2 "border_clamp.sampler.unorm_depth"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014599, VkglTestCase_014599_1, VkglTestCase_014599_2);

#define VkglTestCase_014600_1 "dEQP-GLES31.functional.texture."
#define VkglTestCase_014600_2 "border_clamp.sampler.float_depth"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014600, VkglTestCase_014600_1, VkglTestCase_014600_2);

#define VkglTestCase_014601_1 "dEQP-GLES31.functional.texture.b"
#define VkglTestCase_014601_2 "order_clamp.sampler.uint_stencil"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014601, VkglTestCase_014601_1, VkglTestCase_014601_2);

#define VkglTestCase_014602_1 "dEQP-GLES31.functional.texture.bor"
#define VkglTestCase_014602_2 "der_clamp.sampler.compressed_color"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014602, VkglTestCase_014602_1, VkglTestCase_014602_2);
