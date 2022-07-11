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

#define VkglTestCase_019691_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019691_2 "t_error.atomic_counter.atomic_max_counter_bindings"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019691, VkglTestCase_019691_1, VkglTestCase_019691_2);

#define VkglTestCase_019692_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019692_2 "ge.get_error.atomic_counter.atomic_precision"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019692, VkglTestCase_019692_1, VkglTestCase_019692_2);

#define VkglTestCase_019693_1 "dEQP-GLES31.functional.debug.negative_coverage.get"
#define VkglTestCase_019693_2 "_error.atomic_counter.atomic_binding_offset_overlap"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019693, VkglTestCase_019693_1, VkglTestCase_019693_2);

#define VkglTestCase_019694_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019694_2 "get_error.atomic_counter.atomic_binding_omitted"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019694, VkglTestCase_019694_1, VkglTestCase_019694_2);

#define VkglTestCase_019695_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019695_2 "rage.get_error.atomic_counter.atomic_struct"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019695, VkglTestCase_019695_1, VkglTestCase_019695_2);

#define VkglTestCase_019696_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019696_2 "ge.get_error.atomic_counter.atomic_body_write"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019696, VkglTestCase_019696_1, VkglTestCase_019696_2);

#define VkglTestCase_019697_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019697_2 "e.get_error.atomic_counter.atomic_body_declare"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019697, VkglTestCase_019697_1, VkglTestCase_019697_2);
