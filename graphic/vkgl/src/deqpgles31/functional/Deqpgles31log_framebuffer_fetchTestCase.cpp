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

#define VkglTestCase_019344_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019344_2 "log.framebuffer_fetch.last_frag_data_not_defined"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019344, VkglTestCase_019344_1, VkglTestCase_019344_2);

#define VkglTestCase_019345_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019345_2 ".log.framebuffer_fetch.last_frag_data_readonly"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019345, VkglTestCase_019345_1, VkglTestCase_019345_2);

#define VkglTestCase_019346_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019346_2 "e.log.framebuffer_fetch.invalid_inout_version"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019346, VkglTestCase_019346_1, VkglTestCase_019346_2);

#define VkglTestCase_019347_1 "dEQP-GLES31.functional.debug.negative_coverage.l"
#define VkglTestCase_019347_2 "og.framebuffer_fetch.invalid_redeclaration_inout"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019347, VkglTestCase_019347_1, VkglTestCase_019347_2);

#define VkglTestCase_019348_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019348_2 "ge.log.framebuffer_fetch.invalid_vertex_inout"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019348, VkglTestCase_019348_1, VkglTestCase_019348_2);
