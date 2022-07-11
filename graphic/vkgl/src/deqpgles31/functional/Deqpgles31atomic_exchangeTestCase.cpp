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

#define VkglTestCase_007675_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007675_2 "ared_var.atomic.exchange.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007675, VkglTestCase_007675_1, VkglTestCase_007675_2);

#define VkglTestCase_007676_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007676_2 "ared_var.atomic.exchange.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007676, VkglTestCase_007676_1, VkglTestCase_007676_2);

#define VkglTestCase_007677_1 "dEQP-GLES31.functional.compute.shar"
#define VkglTestCase_007677_2 "ed_var.atomic.exchange.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007677, VkglTestCase_007677_1, VkglTestCase_007677_2);

#define VkglTestCase_007678_1 "dEQP-GLES31.functional.compute.sha"
#define VkglTestCase_007678_2 "red_var.atomic.exchange.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007678, VkglTestCase_007678_1, VkglTestCase_007678_2);

#define VkglTestCase_007679_1 "dEQP-GLES31.functional.compute.sha"
#define VkglTestCase_007679_2 "red_var.atomic.exchange.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007679, VkglTestCase_007679_1, VkglTestCase_007679_2);

#define VkglTestCase_007680_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007680_2 "ared_var.atomic.exchange.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007680, VkglTestCase_007680_1, VkglTestCase_007680_2);

#define VkglTestCase_010375_1 "dEQP-GLES31.functional.ssb"
#define VkglTestCase_010375_2 "o.atomic.exchange.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010375, VkglTestCase_010375_1, VkglTestCase_010375_2);

#define VkglTestCase_010376_1 "dEQP-GLES31.functional.ssb"
#define VkglTestCase_010376_2 "o.atomic.exchange.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010376, VkglTestCase_010376_1, VkglTestCase_010376_2);

#define VkglTestCase_010377_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010377_2 "atomic.exchange.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010377, VkglTestCase_010377_1, VkglTestCase_010377_2);

#define VkglTestCase_010378_1 "dEQP-GLES31.functional.ssbo"
#define VkglTestCase_010378_2 ".atomic.exchange.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010378, VkglTestCase_010378_1, VkglTestCase_010378_2);

#define VkglTestCase_010379_1 "dEQP-GLES31.functional.ssbo"
#define VkglTestCase_010379_2 ".atomic.exchange.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010379, VkglTestCase_010379_1, VkglTestCase_010379_2);

#define VkglTestCase_010380_1 "dEQP-GLES31.functional.ssb"
#define VkglTestCase_010380_2 "o.atomic.exchange.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010380, VkglTestCase_010380_1, VkglTestCase_010380_2);
