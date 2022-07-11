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
#include "../ActsDeqpgles310011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010289_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010289_2 "yout.random.all_shared_buffer.0"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010289, VkglTestCase_010289_1, VkglTestCase_010289_2);

#define VkglTestCase_010290_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010290_2 "yout.random.all_shared_buffer.1"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010290, VkglTestCase_010290_1, VkglTestCase_010290_2);

#define VkglTestCase_010291_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010291_2 "yout.random.all_shared_buffer.2"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010291, VkglTestCase_010291_1, VkglTestCase_010291_2);

#define VkglTestCase_010292_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010292_2 "yout.random.all_shared_buffer.3"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010292, VkglTestCase_010292_1, VkglTestCase_010292_2);

#define VkglTestCase_010293_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010293_2 "yout.random.all_shared_buffer.4"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010293, VkglTestCase_010293_1, VkglTestCase_010293_2);

#define VkglTestCase_010294_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010294_2 "yout.random.all_shared_buffer.5"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010294, VkglTestCase_010294_1, VkglTestCase_010294_2);

#define VkglTestCase_010295_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010295_2 "yout.random.all_shared_buffer.6"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010295, VkglTestCase_010295_1, VkglTestCase_010295_2);

#define VkglTestCase_010296_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010296_2 "yout.random.all_shared_buffer.7"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010296, VkglTestCase_010296_1, VkglTestCase_010296_2);

#define VkglTestCase_010297_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010297_2 "yout.random.all_shared_buffer.8"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010297, VkglTestCase_010297_1, VkglTestCase_010297_2);

#define VkglTestCase_010298_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010298_2 "yout.random.all_shared_buffer.9"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010298, VkglTestCase_010298_1, VkglTestCase_010298_2);

#define VkglTestCase_010299_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010299_2 "out.random.all_shared_buffer.10"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010299, VkglTestCase_010299_1, VkglTestCase_010299_2);

#define VkglTestCase_010300_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010300_2 "out.random.all_shared_buffer.11"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010300, VkglTestCase_010300_1, VkglTestCase_010300_2);

#define VkglTestCase_010301_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010301_2 "out.random.all_shared_buffer.12"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010301, VkglTestCase_010301_1, VkglTestCase_010301_2);

#define VkglTestCase_010302_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010302_2 "out.random.all_shared_buffer.13"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010302, VkglTestCase_010302_1, VkglTestCase_010302_2);

#define VkglTestCase_010303_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010303_2 "out.random.all_shared_buffer.14"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010303, VkglTestCase_010303_1, VkglTestCase_010303_2);

#define VkglTestCase_010304_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010304_2 "out.random.all_shared_buffer.15"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010304, VkglTestCase_010304_1, VkglTestCase_010304_2);

#define VkglTestCase_010305_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010305_2 "out.random.all_shared_buffer.16"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010305, VkglTestCase_010305_1, VkglTestCase_010305_2);

#define VkglTestCase_010306_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010306_2 "out.random.all_shared_buffer.17"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010306, VkglTestCase_010306_1, VkglTestCase_010306_2);

#define VkglTestCase_010307_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010307_2 "out.random.all_shared_buffer.18"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010307, VkglTestCase_010307_1, VkglTestCase_010307_2);

#define VkglTestCase_010308_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010308_2 "out.random.all_shared_buffer.19"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010308, VkglTestCase_010308_1, VkglTestCase_010308_2);

#define VkglTestCase_010309_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010309_2 "out.random.all_shared_buffer.20"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010309, VkglTestCase_010309_1, VkglTestCase_010309_2);

#define VkglTestCase_010310_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010310_2 "out.random.all_shared_buffer.21"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010310, VkglTestCase_010310_1, VkglTestCase_010310_2);

#define VkglTestCase_010311_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010311_2 "out.random.all_shared_buffer.22"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010311, VkglTestCase_010311_1, VkglTestCase_010311_2);

#define VkglTestCase_010312_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010312_2 "out.random.all_shared_buffer.23"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010312, VkglTestCase_010312_1, VkglTestCase_010312_2);

#define VkglTestCase_010313_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010313_2 "out.random.all_shared_buffer.24"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010313, VkglTestCase_010313_1, VkglTestCase_010313_2);

#define VkglTestCase_010314_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010314_2 "out.random.all_shared_buffer.25"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010314, VkglTestCase_010314_1, VkglTestCase_010314_2);

#define VkglTestCase_010315_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010315_2 "out.random.all_shared_buffer.26"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010315, VkglTestCase_010315_1, VkglTestCase_010315_2);

#define VkglTestCase_010316_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010316_2 "out.random.all_shared_buffer.27"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010316, VkglTestCase_010316_1, VkglTestCase_010316_2);

#define VkglTestCase_010317_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010317_2 "out.random.all_shared_buffer.28"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010317, VkglTestCase_010317_1, VkglTestCase_010317_2);

#define VkglTestCase_010318_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010318_2 "out.random.all_shared_buffer.29"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010318, VkglTestCase_010318_1, VkglTestCase_010318_2);

#define VkglTestCase_010319_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010319_2 "out.random.all_shared_buffer.30"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010319, VkglTestCase_010319_1, VkglTestCase_010319_2);

#define VkglTestCase_010320_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010320_2 "out.random.all_shared_buffer.31"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010320, VkglTestCase_010320_1, VkglTestCase_010320_2);

#define VkglTestCase_010321_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010321_2 "out.random.all_shared_buffer.32"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010321, VkglTestCase_010321_1, VkglTestCase_010321_2);

#define VkglTestCase_010322_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010322_2 "out.random.all_shared_buffer.33"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010322, VkglTestCase_010322_1, VkglTestCase_010322_2);

#define VkglTestCase_010323_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010323_2 "out.random.all_shared_buffer.34"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010323, VkglTestCase_010323_1, VkglTestCase_010323_2);

#define VkglTestCase_010324_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010324_2 "out.random.all_shared_buffer.35"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010324, VkglTestCase_010324_1, VkglTestCase_010324_2);

#define VkglTestCase_010325_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010325_2 "out.random.all_shared_buffer.36"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010325, VkglTestCase_010325_1, VkglTestCase_010325_2);

#define VkglTestCase_010326_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010326_2 "out.random.all_shared_buffer.37"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010326, VkglTestCase_010326_1, VkglTestCase_010326_2);

#define VkglTestCase_010327_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010327_2 "out.random.all_shared_buffer.38"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010327, VkglTestCase_010327_1, VkglTestCase_010327_2);

#define VkglTestCase_010328_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010328_2 "out.random.all_shared_buffer.39"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010328, VkglTestCase_010328_1, VkglTestCase_010328_2);

#define VkglTestCase_010329_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010329_2 "out.random.all_shared_buffer.40"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010329, VkglTestCase_010329_1, VkglTestCase_010329_2);

#define VkglTestCase_010330_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010330_2 "out.random.all_shared_buffer.41"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010330, VkglTestCase_010330_1, VkglTestCase_010330_2);

#define VkglTestCase_010331_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010331_2 "out.random.all_shared_buffer.42"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010331, VkglTestCase_010331_1, VkglTestCase_010331_2);

#define VkglTestCase_010332_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010332_2 "out.random.all_shared_buffer.43"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010332, VkglTestCase_010332_1, VkglTestCase_010332_2);

#define VkglTestCase_010333_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010333_2 "out.random.all_shared_buffer.44"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010333, VkglTestCase_010333_1, VkglTestCase_010333_2);

#define VkglTestCase_010334_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010334_2 "out.random.all_shared_buffer.45"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010334, VkglTestCase_010334_1, VkglTestCase_010334_2);

#define VkglTestCase_010335_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010335_2 "out.random.all_shared_buffer.46"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010335, VkglTestCase_010335_1, VkglTestCase_010335_2);

#define VkglTestCase_010336_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010336_2 "out.random.all_shared_buffer.47"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010336, VkglTestCase_010336_1, VkglTestCase_010336_2);

#define VkglTestCase_010337_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010337_2 "out.random.all_shared_buffer.48"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010337, VkglTestCase_010337_1, VkglTestCase_010337_2);

#define VkglTestCase_010338_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_010338_2 "out.random.all_shared_buffer.49"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010338, VkglTestCase_010338_1, VkglTestCase_010338_2);

#define VkglTestCase_011179_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011179_2 ".random.all_shared_buffer.0"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011179, VkglTestCase_011179_1, VkglTestCase_011179_2);

#define VkglTestCase_011180_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011180_2 ".random.all_shared_buffer.1"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011180, VkglTestCase_011180_1, VkglTestCase_011180_2);

#define VkglTestCase_011181_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011181_2 ".random.all_shared_buffer.2"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011181, VkglTestCase_011181_1, VkglTestCase_011181_2);

#define VkglTestCase_011182_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011182_2 ".random.all_shared_buffer.3"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011182, VkglTestCase_011182_1, VkglTestCase_011182_2);

#define VkglTestCase_011183_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011183_2 ".random.all_shared_buffer.4"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011183, VkglTestCase_011183_1, VkglTestCase_011183_2);

#define VkglTestCase_011184_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011184_2 ".random.all_shared_buffer.5"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011184, VkglTestCase_011184_1, VkglTestCase_011184_2);

#define VkglTestCase_011185_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011185_2 ".random.all_shared_buffer.6"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011185, VkglTestCase_011185_1, VkglTestCase_011185_2);

#define VkglTestCase_011186_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011186_2 ".random.all_shared_buffer.7"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011186, VkglTestCase_011186_1, VkglTestCase_011186_2);

#define VkglTestCase_011187_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011187_2 ".random.all_shared_buffer.8"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011187, VkglTestCase_011187_1, VkglTestCase_011187_2);

#define VkglTestCase_011188_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011188_2 ".random.all_shared_buffer.9"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011188, VkglTestCase_011188_1, VkglTestCase_011188_2);

#define VkglTestCase_011189_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011189_2 "random.all_shared_buffer.10"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011189, VkglTestCase_011189_1, VkglTestCase_011189_2);

#define VkglTestCase_011190_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011190_2 "random.all_shared_buffer.11"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011190, VkglTestCase_011190_1, VkglTestCase_011190_2);

#define VkglTestCase_011191_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011191_2 "random.all_shared_buffer.12"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011191, VkglTestCase_011191_1, VkglTestCase_011191_2);

#define VkglTestCase_011192_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011192_2 "random.all_shared_buffer.13"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011192, VkglTestCase_011192_1, VkglTestCase_011192_2);

#define VkglTestCase_011193_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011193_2 "random.all_shared_buffer.14"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011193, VkglTestCase_011193_1, VkglTestCase_011193_2);

#define VkglTestCase_011194_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011194_2 "random.all_shared_buffer.15"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011194, VkglTestCase_011194_1, VkglTestCase_011194_2);

#define VkglTestCase_011195_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011195_2 "random.all_shared_buffer.16"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011195, VkglTestCase_011195_1, VkglTestCase_011195_2);

#define VkglTestCase_011196_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011196_2 "random.all_shared_buffer.17"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011196, VkglTestCase_011196_1, VkglTestCase_011196_2);

#define VkglTestCase_011197_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011197_2 "random.all_shared_buffer.18"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011197, VkglTestCase_011197_1, VkglTestCase_011197_2);

#define VkglTestCase_011198_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011198_2 "random.all_shared_buffer.19"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011198, VkglTestCase_011198_1, VkglTestCase_011198_2);

#define VkglTestCase_011199_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011199_2 "random.all_shared_buffer.20"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011199, VkglTestCase_011199_1, VkglTestCase_011199_2);

#define VkglTestCase_011200_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011200_2 "random.all_shared_buffer.21"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011200, VkglTestCase_011200_1, VkglTestCase_011200_2);

#define VkglTestCase_011201_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011201_2 "random.all_shared_buffer.22"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011201, VkglTestCase_011201_1, VkglTestCase_011201_2);

#define VkglTestCase_011202_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011202_2 "random.all_shared_buffer.23"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011202, VkglTestCase_011202_1, VkglTestCase_011202_2);

#define VkglTestCase_011203_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011203_2 "random.all_shared_buffer.24"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011203, VkglTestCase_011203_1, VkglTestCase_011203_2);

#define VkglTestCase_011204_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011204_2 "random.all_shared_buffer.25"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011204, VkglTestCase_011204_1, VkglTestCase_011204_2);

#define VkglTestCase_011205_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011205_2 "random.all_shared_buffer.26"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011205, VkglTestCase_011205_1, VkglTestCase_011205_2);

#define VkglTestCase_011206_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011206_2 "random.all_shared_buffer.27"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011206, VkglTestCase_011206_1, VkglTestCase_011206_2);

#define VkglTestCase_011207_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011207_2 "random.all_shared_buffer.28"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011207, VkglTestCase_011207_1, VkglTestCase_011207_2);

#define VkglTestCase_011208_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011208_2 "random.all_shared_buffer.29"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011208, VkglTestCase_011208_1, VkglTestCase_011208_2);

#define VkglTestCase_011209_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011209_2 "random.all_shared_buffer.30"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011209, VkglTestCase_011209_1, VkglTestCase_011209_2);

#define VkglTestCase_011210_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011210_2 "random.all_shared_buffer.31"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011210, VkglTestCase_011210_1, VkglTestCase_011210_2);

#define VkglTestCase_011211_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011211_2 "random.all_shared_buffer.32"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011211, VkglTestCase_011211_1, VkglTestCase_011211_2);

#define VkglTestCase_011212_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011212_2 "random.all_shared_buffer.33"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011212, VkglTestCase_011212_1, VkglTestCase_011212_2);

#define VkglTestCase_011213_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011213_2 "random.all_shared_buffer.34"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011213, VkglTestCase_011213_1, VkglTestCase_011213_2);

#define VkglTestCase_011214_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011214_2 "random.all_shared_buffer.35"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011214, VkglTestCase_011214_1, VkglTestCase_011214_2);

#define VkglTestCase_011215_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011215_2 "random.all_shared_buffer.36"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011215, VkglTestCase_011215_1, VkglTestCase_011215_2);

#define VkglTestCase_011216_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011216_2 "random.all_shared_buffer.37"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011216, VkglTestCase_011216_1, VkglTestCase_011216_2);

#define VkglTestCase_011217_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011217_2 "random.all_shared_buffer.38"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011217, VkglTestCase_011217_1, VkglTestCase_011217_2);

#define VkglTestCase_011218_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011218_2 "random.all_shared_buffer.39"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011218, VkglTestCase_011218_1, VkglTestCase_011218_2);

#define VkglTestCase_011219_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011219_2 "random.all_shared_buffer.40"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011219, VkglTestCase_011219_1, VkglTestCase_011219_2);

#define VkglTestCase_011220_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011220_2 "random.all_shared_buffer.41"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011220, VkglTestCase_011220_1, VkglTestCase_011220_2);

#define VkglTestCase_011221_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011221_2 "random.all_shared_buffer.42"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011221, VkglTestCase_011221_1, VkglTestCase_011221_2);

#define VkglTestCase_011222_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011222_2 "random.all_shared_buffer.43"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011222, VkglTestCase_011222_1, VkglTestCase_011222_2);

#define VkglTestCase_011223_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011223_2 "random.all_shared_buffer.44"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011223, VkglTestCase_011223_1, VkglTestCase_011223_2);

#define VkglTestCase_011224_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011224_2 "random.all_shared_buffer.45"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011224, VkglTestCase_011224_1, VkglTestCase_011224_2);

#define VkglTestCase_011225_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011225_2 "random.all_shared_buffer.46"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011225, VkglTestCase_011225_1, VkglTestCase_011225_2);

#define VkglTestCase_011226_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011226_2 "random.all_shared_buffer.47"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011226, VkglTestCase_011226_1, VkglTestCase_011226_2);

#define VkglTestCase_011227_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011227_2 "random.all_shared_buffer.48"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011227, VkglTestCase_011227_1, VkglTestCase_011227_2);

#define VkglTestCase_011228_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011228_2 "random.all_shared_buffer.49"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011228, VkglTestCase_011228_1, VkglTestCase_011228_2);
