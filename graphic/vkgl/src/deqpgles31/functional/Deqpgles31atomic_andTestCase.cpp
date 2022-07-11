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

#define VkglTestCase_007657_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007657_2 "shared_var.atomic.and.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007657, VkglTestCase_007657_1, VkglTestCase_007657_2);

#define VkglTestCase_007658_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007658_2 ".shared_var.atomic.and.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007658, VkglTestCase_007658_1, VkglTestCase_007658_2);

#define VkglTestCase_007659_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007659_2 "hared_var.atomic.and.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007659, VkglTestCase_007659_1, VkglTestCase_007659_2);

#define VkglTestCase_007660_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007660_2 "hared_var.atomic.and.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007660, VkglTestCase_007660_1, VkglTestCase_007660_2);

#define VkglTestCase_007661_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007661_2 "shared_var.atomic.and.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007661, VkglTestCase_007661_1, VkglTestCase_007661_2);

#define VkglTestCase_007662_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007662_2 "shared_var.atomic.and.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007662, VkglTestCase_007662_1, VkglTestCase_007662_2);

#define VkglTestCase_010357_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010357_2 "sbo.atomic.and.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010357, VkglTestCase_010357_1, VkglTestCase_010357_2);

#define VkglTestCase_010358_1 "dEQP-GLES31.functional."
#define VkglTestCase_010358_2 "ssbo.atomic.and.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010358, VkglTestCase_010358_1, VkglTestCase_010358_2);

#define VkglTestCase_010359_1 "dEQP-GLES31.functional.ss"
#define VkglTestCase_010359_2 "bo.atomic.and.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010359, VkglTestCase_010359_1, VkglTestCase_010359_2);

#define VkglTestCase_010360_1 "dEQP-GLES31.functional.ss"
#define VkglTestCase_010360_2 "bo.atomic.and.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010360, VkglTestCase_010360_1, VkglTestCase_010360_2);

#define VkglTestCase_010361_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010361_2 "sbo.atomic.and.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010361, VkglTestCase_010361_1, VkglTestCase_010361_2);

#define VkglTestCase_010362_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010362_2 "sbo.atomic.and.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010362, VkglTestCase_010362_1, VkglTestCase_010362_2);
