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

#define VkglTestCase_007663_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007663_2 ".shared_var.atomic.or.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007663, VkglTestCase_007663_1, VkglTestCase_007663_2);

#define VkglTestCase_007664_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007664_2 ".shared_var.atomic.or.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007664, VkglTestCase_007664_1, VkglTestCase_007664_2);

#define VkglTestCase_007665_1 "dEQP-GLES31.functional.compute.s"
#define VkglTestCase_007665_2 "hared_var.atomic.or.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007665, VkglTestCase_007665_1, VkglTestCase_007665_2);

#define VkglTestCase_007666_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007666_2 "shared_var.atomic.or.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007666, VkglTestCase_007666_1, VkglTestCase_007666_2);

#define VkglTestCase_007667_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007667_2 "shared_var.atomic.or.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007667, VkglTestCase_007667_1, VkglTestCase_007667_2);

#define VkglTestCase_007668_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007668_2 ".shared_var.atomic.or.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007668, VkglTestCase_007668_1, VkglTestCase_007668_2);

#define VkglTestCase_010363_1 "dEQP-GLES31.functional."
#define VkglTestCase_010363_2 "ssbo.atomic.or.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010363, VkglTestCase_010363_1, VkglTestCase_010363_2);

#define VkglTestCase_010364_1 "dEQP-GLES31.functional."
#define VkglTestCase_010364_2 "ssbo.atomic.or.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010364, VkglTestCase_010364_1, VkglTestCase_010364_2);

#define VkglTestCase_010365_1 "dEQP-GLES31.functional.ss"
#define VkglTestCase_010365_2 "bo.atomic.or.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010365, VkglTestCase_010365_1, VkglTestCase_010365_2);

#define VkglTestCase_010366_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010366_2 "sbo.atomic.or.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010366, VkglTestCase_010366_1, VkglTestCase_010366_2);

#define VkglTestCase_010367_1 "dEQP-GLES31.functional.s"
#define VkglTestCase_010367_2 "sbo.atomic.or.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010367, VkglTestCase_010367_1, VkglTestCase_010367_2);

#define VkglTestCase_010368_1 "dEQP-GLES31.functional."
#define VkglTestCase_010368_2 "ssbo.atomic.or.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010368, VkglTestCase_010368_1, VkglTestCase_010368_2);
