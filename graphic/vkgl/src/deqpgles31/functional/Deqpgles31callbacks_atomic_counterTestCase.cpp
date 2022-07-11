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

#define VkglTestCase_018697_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018697_2 "llbacks.atomic_counter.atomic_max_counter_bindings"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018697, VkglTestCase_018697_1, VkglTestCase_018697_2);

#define VkglTestCase_018698_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018698_2 "ge.callbacks.atomic_counter.atomic_precision"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018698, VkglTestCase_018698_1, VkglTestCase_018698_2);

#define VkglTestCase_018699_1 "dEQP-GLES31.functional.debug.negative_coverage.cal"
#define VkglTestCase_018699_2 "lbacks.atomic_counter.atomic_binding_offset_overlap"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018699, VkglTestCase_018699_1, VkglTestCase_018699_2);

#define VkglTestCase_018700_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018700_2 "callbacks.atomic_counter.atomic_binding_omitted"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018700, VkglTestCase_018700_1, VkglTestCase_018700_2);

#define VkglTestCase_018701_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018701_2 "rage.callbacks.atomic_counter.atomic_struct"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018701, VkglTestCase_018701_1, VkglTestCase_018701_2);

#define VkglTestCase_018702_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018702_2 "ge.callbacks.atomic_counter.atomic_body_write"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018702, VkglTestCase_018702_1, VkglTestCase_018702_2);

#define VkglTestCase_018703_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018703_2 "e.callbacks.atomic_counter.atomic_body_declare"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018703, VkglTestCase_018703_1, VkglTestCase_018703_2);
