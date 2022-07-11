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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007645_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007645_2 "shared_var.atomic.min.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007645, VkglTestCase_007645_1, VkglTestCase_007645_2);

#define VkglTestCase_007646_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007646_2 ".shared_var.atomic.min.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007646, VkglTestCase_007646_1, VkglTestCase_007646_2);

#define VkglTestCase_007647_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007647_2 "hared_var.atomic.min.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007647, VkglTestCase_007647_1, VkglTestCase_007647_2);

#define VkglTestCase_007648_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007648_2 "hared_var.atomic.min.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007648, VkglTestCase_007648_1, VkglTestCase_007648_2);

#define VkglTestCase_007649_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007649_2 "shared_var.atomic.min.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007649, VkglTestCase_007649_1, VkglTestCase_007649_2);

#define VkglTestCase_007650_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007650_2 "shared_var.atomic.min.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007650, VkglTestCase_007650_1, VkglTestCase_007650_2);

#define VkglTestCase_010345_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010345_2 "sbo.atomic.min.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010345, VkglTestCase_010345_1, VkglTestCase_010345_2);

#define VkglTestCase_010346_1 "dEQP-GLES31.functional."
#define VkglTestCase_010346_2 "ssbo.atomic.min.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010346, VkglTestCase_010346_1, VkglTestCase_010346_2);

#define VkglTestCase_010347_1 "dEQP-GLES31.functional.ss"
#define VkglTestCase_010347_2 "bo.atomic.min.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010347, VkglTestCase_010347_1, VkglTestCase_010347_2);

#define VkglTestCase_010348_1 "dEQP-GLES31.functional.ss"
#define VkglTestCase_010348_2 "bo.atomic.min.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010348, VkglTestCase_010348_1, VkglTestCase_010348_2);

#define VkglTestCase_010349_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010349_2 "sbo.atomic.min.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010349, VkglTestCase_010349_1, VkglTestCase_010349_2);

#define VkglTestCase_010350_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010350_2 "sbo.atomic.min.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010350, VkglTestCase_010350_1, VkglTestCase_010350_2);
