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

#define VkglTestCase_007681_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007681_2 "ared_var.atomic.compswap.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007681, VkglTestCase_007681_1, VkglTestCase_007681_2);

#define VkglTestCase_007682_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007682_2 "ared_var.atomic.compswap.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007682, VkglTestCase_007682_1, VkglTestCase_007682_2);

#define VkglTestCase_007683_1 "dEQP-GLES31.functional.compute.shar"
#define VkglTestCase_007683_2 "ed_var.atomic.compswap.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007683, VkglTestCase_007683_1, VkglTestCase_007683_2);

#define VkglTestCase_007684_1 "dEQP-GLES31.functional.compute.sha"
#define VkglTestCase_007684_2 "red_var.atomic.compswap.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007684, VkglTestCase_007684_1, VkglTestCase_007684_2);

#define VkglTestCase_007685_1 "dEQP-GLES31.functional.compute.sha"
#define VkglTestCase_007685_2 "red_var.atomic.compswap.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007685, VkglTestCase_007685_1, VkglTestCase_007685_2);

#define VkglTestCase_007686_1 "dEQP-GLES31.functional.compute.sh"
#define VkglTestCase_007686_2 "ared_var.atomic.compswap.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007686, VkglTestCase_007686_1, VkglTestCase_007686_2);

#define VkglTestCase_010381_1 "dEQP-GLES31.functional.ssb"
#define VkglTestCase_010381_2 "o.atomic.compswap.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010381, VkglTestCase_010381_1, VkglTestCase_010381_2);

#define VkglTestCase_010382_1 "dEQP-GLES31.functional.ssb"
#define VkglTestCase_010382_2 "o.atomic.compswap.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010382, VkglTestCase_010382_1, VkglTestCase_010382_2);

#define VkglTestCase_010383_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010383_2 "atomic.compswap.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010383, VkglTestCase_010383_1, VkglTestCase_010383_2);

#define VkglTestCase_010384_1 "dEQP-GLES31.functional.ssbo"
#define VkglTestCase_010384_2 ".atomic.compswap.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010384, VkglTestCase_010384_1, VkglTestCase_010384_2);

#define VkglTestCase_010385_1 "dEQP-GLES31.functional.ssbo"
#define VkglTestCase_010385_2 ".atomic.compswap.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010385, VkglTestCase_010385_1, VkglTestCase_010385_2);

#define VkglTestCase_010386_1 "dEQP-GLES31.functional.ssb"
#define VkglTestCase_010386_2 "o.atomic.compswap.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010386, VkglTestCase_010386_1, VkglTestCase_010386_2);
