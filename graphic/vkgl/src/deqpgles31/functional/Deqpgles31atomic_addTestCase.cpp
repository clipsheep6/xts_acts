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

#define VkglTestCase_007639_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007639_2 "shared_var.atomic.add.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007639, VkglTestCase_007639_1, VkglTestCase_007639_2);

#define VkglTestCase_007640_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007640_2 ".shared_var.atomic.add.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007640, VkglTestCase_007640_1, VkglTestCase_007640_2);

#define VkglTestCase_007641_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007641_2 "hared_var.atomic.add.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007641, VkglTestCase_007641_1, VkglTestCase_007641_2);

#define VkglTestCase_007642_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007642_2 "hared_var.atomic.add.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007642, VkglTestCase_007642_1, VkglTestCase_007642_2);

#define VkglTestCase_007643_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007643_2 "shared_var.atomic.add.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007643, VkglTestCase_007643_1, VkglTestCase_007643_2);

#define VkglTestCase_007644_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007644_2 "shared_var.atomic.add.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007644, VkglTestCase_007644_1, VkglTestCase_007644_2);

#define VkglTestCase_010339_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010339_2 "sbo.atomic.add.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010339, VkglTestCase_010339_1, VkglTestCase_010339_2);

#define VkglTestCase_010340_1 "dEQP-GLES31.functional."
#define VkglTestCase_010340_2 "ssbo.atomic.add.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010340, VkglTestCase_010340_1, VkglTestCase_010340_2);

#define VkglTestCase_010341_1 "dEQP-GLES31.functional.ss"
#define VkglTestCase_010341_2 "bo.atomic.add.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010341, VkglTestCase_010341_1, VkglTestCase_010341_2);

#define VkglTestCase_010342_1 "dEQP-GLES31.functional.ss"
#define VkglTestCase_010342_2 "bo.atomic.add.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010342, VkglTestCase_010342_1, VkglTestCase_010342_2);

#define VkglTestCase_010343_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010343_2 "sbo.atomic.add.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010343, VkglTestCase_010343_1, VkglTestCase_010343_2);

#define VkglTestCase_010344_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010344_2 "sbo.atomic.add.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010344, VkglTestCase_010344_1, VkglTestCase_010344_2);
