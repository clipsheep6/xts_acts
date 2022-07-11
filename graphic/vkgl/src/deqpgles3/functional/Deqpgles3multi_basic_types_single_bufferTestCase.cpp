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

#define VkglTestCase_035850_1 "dEQP-GLES3.functional.ubo.multi_bas"
#define VkglTestCase_035850_2 "ic_types.single_buffer.shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035850, VkglTestCase_035850_1, VkglTestCase_035850_2);

#define VkglTestCase_035851_1 "dEQP-GLES3.functional.ubo.multi_basi"
#define VkglTestCase_035851_2 "c_types.single_buffer.shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035851, VkglTestCase_035851_1, VkglTestCase_035851_2);

#define VkglTestCase_035852_1 "dEQP-GLES3.functional.ubo.multi_ba"
#define VkglTestCase_035852_2 "sic_types.single_buffer.shared_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035852, VkglTestCase_035852_1, VkglTestCase_035852_2);

#define VkglTestCase_035853_1 "dEQP-GLES3.functional.ubo.multi_bas"
#define VkglTestCase_035853_2 "ic_types.single_buffer.shared_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035853, VkglTestCase_035853_1, VkglTestCase_035853_2);

#define VkglTestCase_035854_1 "dEQP-GLES3.functional.ubo.multi_basic_types"
#define VkglTestCase_035854_2 ".single_buffer.shared_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035854, VkglTestCase_035854_1, VkglTestCase_035854_2);

#define VkglTestCase_035855_1 "dEQP-GLES3.functional.ubo.multi_basic_types."
#define VkglTestCase_035855_2 "single_buffer.shared_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035855, VkglTestCase_035855_1, VkglTestCase_035855_2);

#define VkglTestCase_035856_1 "dEQP-GLES3.functional.ubo.multi_basic_type"
#define VkglTestCase_035856_2 "s.single_buffer.shared_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035856, VkglTestCase_035856_1, VkglTestCase_035856_2);

#define VkglTestCase_035857_1 "dEQP-GLES3.functional.ubo.multi_basic_type"
#define VkglTestCase_035857_2 "s.single_buffer.shared_instance_array_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035857, VkglTestCase_035857_1, VkglTestCase_035857_2);

#define VkglTestCase_035858_1 "dEQP-GLES3.functional.ubo.multi_bas"
#define VkglTestCase_035858_2 "ic_types.single_buffer.packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035858, VkglTestCase_035858_1, VkglTestCase_035858_2);

#define VkglTestCase_035859_1 "dEQP-GLES3.functional.ubo.multi_basi"
#define VkglTestCase_035859_2 "c_types.single_buffer.packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035859, VkglTestCase_035859_1, VkglTestCase_035859_2);

#define VkglTestCase_035860_1 "dEQP-GLES3.functional.ubo.multi_bas"
#define VkglTestCase_035860_2 "ic_types.single_buffer.packed_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035860, VkglTestCase_035860_1, VkglTestCase_035860_2);

#define VkglTestCase_035861_1 "dEQP-GLES3.functional.ubo.multi_basic_types"
#define VkglTestCase_035861_2 ".single_buffer.packed_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035861, VkglTestCase_035861_1, VkglTestCase_035861_2);

#define VkglTestCase_035862_1 "dEQP-GLES3.functional.ubo.multi_basic_types."
#define VkglTestCase_035862_2 "single_buffer.packed_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035862, VkglTestCase_035862_1, VkglTestCase_035862_2);

#define VkglTestCase_035863_1 "dEQP-GLES3.functional.ubo.multi_basic_type"
#define VkglTestCase_035863_2 "s.single_buffer.packed_instance_array_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035863, VkglTestCase_035863_1, VkglTestCase_035863_2);

#define VkglTestCase_035864_1 "dEQP-GLES3.functional.ubo.multi_bas"
#define VkglTestCase_035864_2 "ic_types.single_buffer.std140_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035864, VkglTestCase_035864_1, VkglTestCase_035864_2);

#define VkglTestCase_035865_1 "dEQP-GLES3.functional.ubo.multi_basi"
#define VkglTestCase_035865_2 "c_types.single_buffer.std140_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035865, VkglTestCase_035865_1, VkglTestCase_035865_2);

#define VkglTestCase_035866_1 "dEQP-GLES3.functional.ubo.multi_ba"
#define VkglTestCase_035866_2 "sic_types.single_buffer.std140_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035866, VkglTestCase_035866_1, VkglTestCase_035866_2);

#define VkglTestCase_035867_1 "dEQP-GLES3.functional.ubo.multi_bas"
#define VkglTestCase_035867_2 "ic_types.single_buffer.std140_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035867, VkglTestCase_035867_1, VkglTestCase_035867_2);

#define VkglTestCase_035868_1 "dEQP-GLES3.functional.ubo.multi_basic_types"
#define VkglTestCase_035868_2 ".single_buffer.std140_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035868, VkglTestCase_035868_1, VkglTestCase_035868_2);

#define VkglTestCase_035869_1 "dEQP-GLES3.functional.ubo.multi_basic_types."
#define VkglTestCase_035869_2 "single_buffer.std140_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035869, VkglTestCase_035869_1, VkglTestCase_035869_2);

#define VkglTestCase_035870_1 "dEQP-GLES3.functional.ubo.multi_basic_type"
#define VkglTestCase_035870_2 "s.single_buffer.std140_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035870, VkglTestCase_035870_1, VkglTestCase_035870_2);

#define VkglTestCase_035871_1 "dEQP-GLES3.functional.ubo.multi_basic_type"
#define VkglTestCase_035871_2 "s.single_buffer.std140_instance_array_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035871, VkglTestCase_035871_1, VkglTestCase_035871_2);
