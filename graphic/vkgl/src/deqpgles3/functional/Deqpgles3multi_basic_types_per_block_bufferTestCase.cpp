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
#include "../ActsDeqpgles30036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035828_1 "dEQP-GLES3.functional.ubo.multi_basic"
#define VkglTestCase_035828_2 "_types.per_block_buffer.shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035828, VkglTestCase_035828_1, VkglTestCase_035828_2);

#define VkglTestCase_035829_1 "dEQP-GLES3.functional.ubo.multi_basic_"
#define VkglTestCase_035829_2 "types.per_block_buffer.shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035829, VkglTestCase_035829_1, VkglTestCase_035829_2);

#define VkglTestCase_035830_1 "dEQP-GLES3.functional.ubo.multi_basi"
#define VkglTestCase_035830_2 "c_types.per_block_buffer.shared_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035830, VkglTestCase_035830_1, VkglTestCase_035830_2);

#define VkglTestCase_035831_1 "dEQP-GLES3.functional.ubo.multi_basi"
#define VkglTestCase_035831_2 "c_types.per_block_buffer.shared_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035831, VkglTestCase_035831_1, VkglTestCase_035831_2);

#define VkglTestCase_035832_1 "dEQP-GLES3.functional.ubo.multi_basic_types."
#define VkglTestCase_035832_2 "per_block_buffer.shared_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035832, VkglTestCase_035832_1, VkglTestCase_035832_2);

#define VkglTestCase_035833_1 "dEQP-GLES3.functional.ubo.multi_basic_types.p"
#define VkglTestCase_035833_2 "er_block_buffer.shared_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035833, VkglTestCase_035833_1, VkglTestCase_035833_2);

#define VkglTestCase_035834_1 "dEQP-GLES3.functional.ubo.multi_basic_types"
#define VkglTestCase_035834_2 ".per_block_buffer.shared_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035834, VkglTestCase_035834_1, VkglTestCase_035834_2);

#define VkglTestCase_035835_1 "dEQP-GLES3.functional.ubo.multi_basic_types."
#define VkglTestCase_035835_2 "per_block_buffer.shared_instance_array_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035835, VkglTestCase_035835_1, VkglTestCase_035835_2);

#define VkglTestCase_035836_1 "dEQP-GLES3.functional.ubo.multi_basic"
#define VkglTestCase_035836_2 "_types.per_block_buffer.packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035836, VkglTestCase_035836_1, VkglTestCase_035836_2);

#define VkglTestCase_035837_1 "dEQP-GLES3.functional.ubo.multi_basic_"
#define VkglTestCase_035837_2 "types.per_block_buffer.packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035837, VkglTestCase_035837_1, VkglTestCase_035837_2);

#define VkglTestCase_035838_1 "dEQP-GLES3.functional.ubo.multi_basi"
#define VkglTestCase_035838_2 "c_types.per_block_buffer.packed_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035838, VkglTestCase_035838_1, VkglTestCase_035838_2);

#define VkglTestCase_035839_1 "dEQP-GLES3.functional.ubo.multi_basic_types."
#define VkglTestCase_035839_2 "per_block_buffer.packed_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035839, VkglTestCase_035839_1, VkglTestCase_035839_2);

#define VkglTestCase_035840_1 "dEQP-GLES3.functional.ubo.multi_basic_types.p"
#define VkglTestCase_035840_2 "er_block_buffer.packed_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035840, VkglTestCase_035840_1, VkglTestCase_035840_2);

#define VkglTestCase_035841_1 "dEQP-GLES3.functional.ubo.multi_basic_types."
#define VkglTestCase_035841_2 "per_block_buffer.packed_instance_array_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035841, VkglTestCase_035841_1, VkglTestCase_035841_2);

#define VkglTestCase_035842_1 "dEQP-GLES3.functional.ubo.multi_basic"
#define VkglTestCase_035842_2 "_types.per_block_buffer.std140_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035842, VkglTestCase_035842_1, VkglTestCase_035842_2);

#define VkglTestCase_035843_1 "dEQP-GLES3.functional.ubo.multi_basic_"
#define VkglTestCase_035843_2 "types.per_block_buffer.std140_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035843, VkglTestCase_035843_1, VkglTestCase_035843_2);

#define VkglTestCase_035844_1 "dEQP-GLES3.functional.ubo.multi_basi"
#define VkglTestCase_035844_2 "c_types.per_block_buffer.std140_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035844, VkglTestCase_035844_1, VkglTestCase_035844_2);

#define VkglTestCase_035845_1 "dEQP-GLES3.functional.ubo.multi_basi"
#define VkglTestCase_035845_2 "c_types.per_block_buffer.std140_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035845, VkglTestCase_035845_1, VkglTestCase_035845_2);

#define VkglTestCase_035846_1 "dEQP-GLES3.functional.ubo.multi_basic_types."
#define VkglTestCase_035846_2 "per_block_buffer.std140_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035846, VkglTestCase_035846_1, VkglTestCase_035846_2);

#define VkglTestCase_035847_1 "dEQP-GLES3.functional.ubo.multi_basic_types.p"
#define VkglTestCase_035847_2 "er_block_buffer.std140_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035847, VkglTestCase_035847_1, VkglTestCase_035847_2);

#define VkglTestCase_035848_1 "dEQP-GLES3.functional.ubo.multi_basic_types"
#define VkglTestCase_035848_2 ".per_block_buffer.std140_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035848, VkglTestCase_035848_1, VkglTestCase_035848_2);

#define VkglTestCase_035849_1 "dEQP-GLES3.functional.ubo.multi_basic_types."
#define VkglTestCase_035849_2 "per_block_buffer.std140_instance_array_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035849, VkglTestCase_035849_1, VkglTestCase_035849_2);
