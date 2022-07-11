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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001595_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001595_2 "s.scalar_to_scalar.float_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001595, VkglTestCase_001595_1, VkglTestCase_001595_2);

#define VkglTestCase_001596_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001596_2 ".scalar_to_scalar.float_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001596, VkglTestCase_001596_1, VkglTestCase_001596_2);

#define VkglTestCase_001597_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001597_2 "ns.scalar_to_scalar.float_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001597, VkglTestCase_001597_1, VkglTestCase_001597_2);

#define VkglTestCase_001598_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001598_2 "s.scalar_to_scalar.float_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001598, VkglTestCase_001598_1, VkglTestCase_001598_2);

#define VkglTestCase_001599_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001599_2 "ns.scalar_to_scalar.float_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001599, VkglTestCase_001599_1, VkglTestCase_001599_2);

#define VkglTestCase_001600_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001600_2 "s.scalar_to_scalar.float_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001600, VkglTestCase_001600_1, VkglTestCase_001600_2);

#define VkglTestCase_001601_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001601_2 "ns.scalar_to_scalar.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001601, VkglTestCase_001601_1, VkglTestCase_001601_2);

#define VkglTestCase_001602_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001602_2 "s.scalar_to_scalar.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001602, VkglTestCase_001602_1, VkglTestCase_001602_2);

#define VkglTestCase_001603_1 "dEQP-GLES3.functional.shaders.conversi"
#define VkglTestCase_001603_2 "ons.scalar_to_scalar.int_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001603, VkglTestCase_001603_1, VkglTestCase_001603_2);

#define VkglTestCase_001604_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001604_2 "ns.scalar_to_scalar.int_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001604, VkglTestCase_001604_1, VkglTestCase_001604_2);

#define VkglTestCase_001605_1 "dEQP-GLES3.functional.shaders.conversi"
#define VkglTestCase_001605_2 "ons.scalar_to_scalar.int_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001605, VkglTestCase_001605_1, VkglTestCase_001605_2);

#define VkglTestCase_001606_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001606_2 "ns.scalar_to_scalar.int_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001606, VkglTestCase_001606_1, VkglTestCase_001606_2);

#define VkglTestCase_001607_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001607_2 "ns.scalar_to_scalar.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001607, VkglTestCase_001607_1, VkglTestCase_001607_2);

#define VkglTestCase_001608_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001608_2 "s.scalar_to_scalar.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001608, VkglTestCase_001608_1, VkglTestCase_001608_2);

#define VkglTestCase_001609_1 "dEQP-GLES3.functional.shaders.conversi"
#define VkglTestCase_001609_2 "ons.scalar_to_scalar.uint_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001609, VkglTestCase_001609_1, VkglTestCase_001609_2);

#define VkglTestCase_001610_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001610_2 "ns.scalar_to_scalar.uint_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001610, VkglTestCase_001610_1, VkglTestCase_001610_2);

#define VkglTestCase_001611_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001611_2 "ns.scalar_to_scalar.uint_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001611, VkglTestCase_001611_1, VkglTestCase_001611_2);

#define VkglTestCase_001612_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001612_2 "s.scalar_to_scalar.uint_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001612, VkglTestCase_001612_1, VkglTestCase_001612_2);

#define VkglTestCase_001613_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001613_2 "ns.scalar_to_scalar.bool_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001613, VkglTestCase_001613_1, VkglTestCase_001613_2);

#define VkglTestCase_001614_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001614_2 "s.scalar_to_scalar.bool_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001614, VkglTestCase_001614_1, VkglTestCase_001614_2);

#define VkglTestCase_001615_1 "dEQP-GLES3.functional.shaders.conversi"
#define VkglTestCase_001615_2 "ons.scalar_to_scalar.bool_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001615, VkglTestCase_001615_1, VkglTestCase_001615_2);

#define VkglTestCase_001616_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001616_2 "ns.scalar_to_scalar.bool_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001616, VkglTestCase_001616_1, VkglTestCase_001616_2);

#define VkglTestCase_001617_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001617_2 "ns.scalar_to_scalar.bool_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001617, VkglTestCase_001617_1, VkglTestCase_001617_2);

#define VkglTestCase_001618_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001618_2 "s.scalar_to_scalar.bool_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001618, VkglTestCase_001618_1, VkglTestCase_001618_2);

#define VkglTestCase_001619_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001619_2 "ns.scalar_to_scalar.float_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001619, VkglTestCase_001619_1, VkglTestCase_001619_2);

#define VkglTestCase_001620_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001620_2 "s.scalar_to_scalar.float_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001620, VkglTestCase_001620_1, VkglTestCase_001620_2);

#define VkglTestCase_001621_1 "dEQP-GLES3.functional.shaders.conversi"
#define VkglTestCase_001621_2 "ons.scalar_to_scalar.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001621, VkglTestCase_001621_1, VkglTestCase_001621_2);

#define VkglTestCase_001622_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001622_2 "ns.scalar_to_scalar.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001622, VkglTestCase_001622_1, VkglTestCase_001622_2);

#define VkglTestCase_001623_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001623_2 "ns.scalar_to_scalar.uint_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001623, VkglTestCase_001623_1, VkglTestCase_001623_2);

#define VkglTestCase_001624_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001624_2 "s.scalar_to_scalar.uint_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001624, VkglTestCase_001624_1, VkglTestCase_001624_2);

#define VkglTestCase_001625_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001625_2 "ns.scalar_to_scalar.bool_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001625, VkglTestCase_001625_1, VkglTestCase_001625_2);

#define VkglTestCase_001626_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001626_2 "s.scalar_to_scalar.bool_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001626, VkglTestCase_001626_1, VkglTestCase_001626_2);
