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
#include "../ActsDeqpgles310019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018846_1 "dEQP-GLES31.functional.debug.negative_coverage.cal"
#define VkglTestCase_018846_2 "lbacks.framebuffer_fetch.last_frag_data_not_defined"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018846, VkglTestCase_018846_1, VkglTestCase_018846_2);

#define VkglTestCase_018847_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018847_2 "llbacks.framebuffer_fetch.last_frag_data_readonly"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018847, VkglTestCase_018847_1, VkglTestCase_018847_2);

#define VkglTestCase_018848_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018848_2 "allbacks.framebuffer_fetch.invalid_inout_version"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018848, VkglTestCase_018848_1, VkglTestCase_018848_2);

#define VkglTestCase_018849_1 "dEQP-GLES31.functional.debug.negative_coverage.call"
#define VkglTestCase_018849_2 "backs.framebuffer_fetch.invalid_redeclaration_inout"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018849, VkglTestCase_018849_1, VkglTestCase_018849_2);

#define VkglTestCase_018850_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018850_2 "callbacks.framebuffer_fetch.invalid_vertex_inout"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018850, VkglTestCase_018850_1, VkglTestCase_018850_2);
