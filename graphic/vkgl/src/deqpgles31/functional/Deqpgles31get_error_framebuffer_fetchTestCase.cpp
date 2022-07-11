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
#include "../ActsDeqpgles310020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019840_1 "dEQP-GLES31.functional.debug.negative_coverage.get"
#define VkglTestCase_019840_2 "_error.framebuffer_fetch.last_frag_data_not_defined"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019840, VkglTestCase_019840_1, VkglTestCase_019840_2);

#define VkglTestCase_019841_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019841_2 "t_error.framebuffer_fetch.last_frag_data_readonly"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019841, VkglTestCase_019841_1, VkglTestCase_019841_2);

#define VkglTestCase_019842_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019842_2 "et_error.framebuffer_fetch.invalid_inout_version"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019842, VkglTestCase_019842_1, VkglTestCase_019842_2);

#define VkglTestCase_019843_1 "dEQP-GLES31.functional.debug.negative_coverage.get_"
#define VkglTestCase_019843_2 "error.framebuffer_fetch.invalid_redeclaration_inout"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019843, VkglTestCase_019843_1, VkglTestCase_019843_2);

#define VkglTestCase_019844_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019844_2 "get_error.framebuffer_fetch.invalid_vertex_inout"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019844, VkglTestCase_019844_1, VkglTestCase_019844_2);
