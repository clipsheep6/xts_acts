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

#define VkglTestCase_007669_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007669_2 "shared_var.atomic.xor.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007669, VkglTestCase_007669_1, VkglTestCase_007669_2);

#define VkglTestCase_007670_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007670_2 ".shared_var.atomic.xor.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007670, VkglTestCase_007670_1, VkglTestCase_007670_2);

#define VkglTestCase_007671_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007671_2 "hared_var.atomic.xor.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007671, VkglTestCase_007671_1, VkglTestCase_007671_2);

#define VkglTestCase_007672_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007672_2 "hared_var.atomic.xor.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007672, VkglTestCase_007672_1, VkglTestCase_007672_2);

#define VkglTestCase_007673_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007673_2 "shared_var.atomic.xor.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007673, VkglTestCase_007673_1, VkglTestCase_007673_2);

#define VkglTestCase_007674_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007674_2 "shared_var.atomic.xor.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007674, VkglTestCase_007674_1, VkglTestCase_007674_2);

#define VkglTestCase_010369_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010369_2 "sbo.atomic.xor.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010369, VkglTestCase_010369_1, VkglTestCase_010369_2);

#define VkglTestCase_010370_1 "dEQP-GLES31.functional."
#define VkglTestCase_010370_2 "ssbo.atomic.xor.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010370, VkglTestCase_010370_1, VkglTestCase_010370_2);

#define VkglTestCase_010371_1 "dEQP-GLES31.functional.ss"
#define VkglTestCase_010371_2 "bo.atomic.xor.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010371, VkglTestCase_010371_1, VkglTestCase_010371_2);

#define VkglTestCase_010372_1 "dEQP-GLES31.functional.ss"
#define VkglTestCase_010372_2 "bo.atomic.xor.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010372, VkglTestCase_010372_1, VkglTestCase_010372_2);

#define VkglTestCase_010373_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010373_2 "sbo.atomic.xor.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010373, VkglTestCase_010373_1, VkglTestCase_010373_2);

#define VkglTestCase_010374_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010374_2 "sbo.atomic.xor.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010374, VkglTestCase_010374_1, VkglTestCase_010374_2);
