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

#define VkglTestCase_007510_1 "dEQP-GLES31.functiona"
#define VkglTestCase_007510_2 "l.compute.basic.empty"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007510, VkglTestCase_007510_1, VkglTestCase_007510_2);

#define VkglTestCase_007511_1 "dEQP-GLES31.functional.compute.ba"
#define VkglTestCase_007511_2 "sic.ubo_to_ssbo_single_invocation"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007511, VkglTestCase_007511_1, VkglTestCase_007511_2);

#define VkglTestCase_007512_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007512_2 ".basic.ubo_to_ssbo_single_group"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007512, VkglTestCase_007512_1, VkglTestCase_007512_2);

#define VkglTestCase_007513_1 "dEQP-GLES31.functional.compute.bas"
#define VkglTestCase_007513_2 "ic.ubo_to_ssbo_multiple_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007513, VkglTestCase_007513_1, VkglTestCase_007513_2);

#define VkglTestCase_007514_1 "dEQP-GLES31.functional.compute.b"
#define VkglTestCase_007514_2 "asic.ubo_to_ssbo_multiple_groups"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007514, VkglTestCase_007514_1, VkglTestCase_007514_2);

#define VkglTestCase_007515_1 "dEQP-GLES31.functional.compute.b"
#define VkglTestCase_007515_2 "asic.copy_ssbo_single_invocation"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007515, VkglTestCase_007515_1, VkglTestCase_007515_2);

#define VkglTestCase_007516_1 "dEQP-GLES31.functional.compute.ba"
#define VkglTestCase_007516_2 "sic.copy_ssbo_multiple_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007516, VkglTestCase_007516_1, VkglTestCase_007516_2);

#define VkglTestCase_007517_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007517_2 "basic.copy_ssbo_multiple_groups"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007517, VkglTestCase_007517_1, VkglTestCase_007517_2);

#define VkglTestCase_007518_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007518_2 "basic.ssbo_rw_single_invocation"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007518, VkglTestCase_007518_1, VkglTestCase_007518_2);

#define VkglTestCase_007519_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007519_2 ".basic.ssbo_rw_multiple_groups"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007519, VkglTestCase_007519_1, VkglTestCase_007519_2);

#define VkglTestCase_007520_1 "dEQP-GLES31.functional.compute.basi"
#define VkglTestCase_007520_2 "c.ssbo_unsized_arr_single_invocation"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007520, VkglTestCase_007520_1, VkglTestCase_007520_2);

#define VkglTestCase_007521_1 "dEQP-GLES31.functional.compute.bas"
#define VkglTestCase_007521_2 "ic.ssbo_unsized_arr_multiple_groups"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007521, VkglTestCase_007521_1, VkglTestCase_007521_2);

#define VkglTestCase_007522_1 "dEQP-GLES31.functional.compute.basic"
#define VkglTestCase_007522_2 ".write_multiple_arr_single_invocation"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007522, VkglTestCase_007522_1, VkglTestCase_007522_2);

#define VkglTestCase_007523_1 "dEQP-GLES31.functional.compute.basi"
#define VkglTestCase_007523_2 "c.write_multiple_arr_multiple_groups"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007523, VkglTestCase_007523_1, VkglTestCase_007523_2);

#define VkglTestCase_007524_1 "dEQP-GLES31.functional.compute.basic.wri"
#define VkglTestCase_007524_2 "te_multiple_unsized_arr_single_invocation"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007524, VkglTestCase_007524_1, VkglTestCase_007524_2);

#define VkglTestCase_007525_1 "dEQP-GLES31.functional.compute.basic.wr"
#define VkglTestCase_007525_2 "ite_multiple_unsized_arr_multiple_groups"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007525, VkglTestCase_007525_1, VkglTestCase_007525_2);

#define VkglTestCase_007526_1 "dEQP-GLES31.functional.compute.basic"
#define VkglTestCase_007526_2 ".ssbo_local_barrier_single_invocation"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007526, VkglTestCase_007526_1, VkglTestCase_007526_2);

#define VkglTestCase_007527_1 "dEQP-GLES31.functional.compute.bas"
#define VkglTestCase_007527_2 "ic.ssbo_local_barrier_single_group"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007527, VkglTestCase_007527_1, VkglTestCase_007527_2);

#define VkglTestCase_007528_1 "dEQP-GLES31.functional.compute.basi"
#define VkglTestCase_007528_2 "c.ssbo_local_barrier_multiple_groups"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007528, VkglTestCase_007528_1, VkglTestCase_007528_2);

#define VkglTestCase_007529_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007529_2 ".basic.ssbo_cmd_barrier_single"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007529, VkglTestCase_007529_1, VkglTestCase_007529_2);

#define VkglTestCase_007530_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007530_2 "basic.ssbo_cmd_barrier_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007530, VkglTestCase_007530_1, VkglTestCase_007530_2);

#define VkglTestCase_007531_1 "dEQP-GLES31.functional.compute.b"
#define VkglTestCase_007531_2 "asic.shared_var_single_invocation"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007531, VkglTestCase_007531_1, VkglTestCase_007531_2);

#define VkglTestCase_007532_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007532_2 ".basic.shared_var_single_group"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007532, VkglTestCase_007532_1, VkglTestCase_007532_2);

#define VkglTestCase_007533_1 "dEQP-GLES31.functional.compute.bas"
#define VkglTestCase_007533_2 "ic.shared_var_multiple_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007533, VkglTestCase_007533_1, VkglTestCase_007533_2);

#define VkglTestCase_007534_1 "dEQP-GLES31.functional.compute."
#define VkglTestCase_007534_2 "basic.shared_var_multiple_groups"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007534, VkglTestCase_007534_1, VkglTestCase_007534_2);

#define VkglTestCase_007535_1 "dEQP-GLES31.functional.compute.basi"
#define VkglTestCase_007535_2 "c.shared_atomic_op_single_invocation"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007535, VkglTestCase_007535_1, VkglTestCase_007535_2);

#define VkglTestCase_007536_1 "dEQP-GLES31.functional.compute.ba"
#define VkglTestCase_007536_2 "sic.shared_atomic_op_single_group"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007536, VkglTestCase_007536_1, VkglTestCase_007536_2);

#define VkglTestCase_007537_1 "dEQP-GLES31.functional.compute.basic."
#define VkglTestCase_007537_2 "shared_atomic_op_multiple_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007537, VkglTestCase_007537_1, VkglTestCase_007537_2);

#define VkglTestCase_007538_1 "dEQP-GLES31.functional.compute.bas"
#define VkglTestCase_007538_2 "ic.shared_atomic_op_multiple_groups"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007538, VkglTestCase_007538_1, VkglTestCase_007538_2);

#define VkglTestCase_007539_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007539_2 ".basic.copy_image_to_ssbo_small"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007539, VkglTestCase_007539_1, VkglTestCase_007539_2);

#define VkglTestCase_007540_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007540_2 ".basic.copy_image_to_ssbo_large"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007540, VkglTestCase_007540_1, VkglTestCase_007540_2);

#define VkglTestCase_007541_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007541_2 ".basic.copy_ssbo_to_image_small"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007541, VkglTestCase_007541_1, VkglTestCase_007541_2);

#define VkglTestCase_007542_1 "dEQP-GLES31.functional.compute"
#define VkglTestCase_007542_2 ".basic.copy_ssbo_to_image_large"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007542, VkglTestCase_007542_1, VkglTestCase_007542_2);

#define VkglTestCase_007543_1 "dEQP-GLES31.functional.compute.b"
#define VkglTestCase_007543_2 "asic.image_atomic_op_local_size_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007543, VkglTestCase_007543_1, VkglTestCase_007543_2);

#define VkglTestCase_007544_1 "dEQP-GLES31.functional.compute.b"
#define VkglTestCase_007544_2 "asic.image_atomic_op_local_size_8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007544, VkglTestCase_007544_1, VkglTestCase_007544_2);

#define VkglTestCase_007545_1 "dEQP-GLES31.functional.compu"
#define VkglTestCase_007545_2 "te.basic.image_barrier_single"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007545, VkglTestCase_007545_1, VkglTestCase_007545_2);

#define VkglTestCase_007546_1 "dEQP-GLES31.functional.comput"
#define VkglTestCase_007546_2 "e.basic.image_barrier_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007546, VkglTestCase_007546_1, VkglTestCase_007546_2);

#define VkglTestCase_007547_1 "dEQP-GLES31.functional.compute.bas"
#define VkglTestCase_007547_2 "ic.atomic_counter_single_invocation"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007547, VkglTestCase_007547_1, VkglTestCase_007547_2);

#define VkglTestCase_007548_1 "dEQP-GLES31.functional.compute.b"
#define VkglTestCase_007548_2 "asic.atomic_counter_single_group"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007548, VkglTestCase_007548_1, VkglTestCase_007548_2);

#define VkglTestCase_007549_1 "dEQP-GLES31.functional.compute.basic"
#define VkglTestCase_007549_2 ".atomic_counter_multiple_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007549, VkglTestCase_007549_1, VkglTestCase_007549_2);

#define VkglTestCase_007550_1 "dEQP-GLES31.functional.compute.ba"
#define VkglTestCase_007550_2 "sic.atomic_counter_multiple_groups"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007550, VkglTestCase_007550_1, VkglTestCase_007550_2);
