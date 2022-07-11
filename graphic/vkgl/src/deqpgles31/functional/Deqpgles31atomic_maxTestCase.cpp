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

#define VkglTestCase_007651_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007651_2 "shared_var.atomic.max.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007651, VkglTestCase_007651_1, VkglTestCase_007651_2);

#define VkglTestCase_007652_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007652_2 ".shared_var.atomic.max.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007652, VkglTestCase_007652_1, VkglTestCase_007652_2);

#define VkglTestCase_007653_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007653_2 "hared_var.atomic.max.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007653, VkglTestCase_007653_1, VkglTestCase_007653_2);

#define VkglTestCase_007654_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007654_2 "hared_var.atomic.max.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007654, VkglTestCase_007654_1, VkglTestCase_007654_2);

#define VkglTestCase_007655_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007655_2 "shared_var.atomic.max.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007655, VkglTestCase_007655_1, VkglTestCase_007655_2);

#define VkglTestCase_007656_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007656_2 "shared_var.atomic.max.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007656, VkglTestCase_007656_1, VkglTestCase_007656_2);

#define VkglTestCase_010351_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010351_2 "sbo.atomic.max.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010351, VkglTestCase_010351_1, VkglTestCase_010351_2);

#define VkglTestCase_010352_1 "dEQP-GLES31.functional."
#define VkglTestCase_010352_2 "ssbo.atomic.max.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010352, VkglTestCase_010352_1, VkglTestCase_010352_2);

#define VkglTestCase_010353_1 "dEQP-GLES31.functional.ss"
#define VkglTestCase_010353_2 "bo.atomic.max.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010353, VkglTestCase_010353_1, VkglTestCase_010353_2);

#define VkglTestCase_010354_1 "dEQP-GLES31.functional.ss"
#define VkglTestCase_010354_2 "bo.atomic.max.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010354, VkglTestCase_010354_1, VkglTestCase_010354_2);

#define VkglTestCase_010355_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010355_2 "sbo.atomic.max.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010355, VkglTestCase_010355_1, VkglTestCase_010355_2);

#define VkglTestCase_010356_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010356_2 "sbo.atomic.max.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010356, VkglTestCase_010356_1, VkglTestCase_010356_2);
