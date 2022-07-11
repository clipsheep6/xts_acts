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
#include "../ActsDeqpgles310015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014825_1 "dEQP-GLES31.functional.state_que"
#define VkglTestCase_014825_2 "ry.boolean.sample_mask_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014825, VkglTestCase_014825_1, VkglTestCase_014825_2);

#define VkglTestCase_014826_1 "dEQP-GLES31.functional.state_que"
#define VkglTestCase_014826_2 "ry.boolean.sample_mask_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014826, VkglTestCase_014826_1, VkglTestCase_014826_2);

#define VkglTestCase_014827_1 "dEQP-GLES31.functional.state_que"
#define VkglTestCase_014827_2 "ry.boolean.sample_mask_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014827, VkglTestCase_014827_1, VkglTestCase_014827_2);

#define VkglTestCase_014828_1 "dEQP-GLES31.functional.state_quer"
#define VkglTestCase_014828_2 "y.boolean.sample_mask_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014828, VkglTestCase_014828_1, VkglTestCase_014828_2);

#define VkglTestCase_014829_1 "dEQP-GLES31.functional.state_qu"
#define VkglTestCase_014829_2 "ery.boolean.sample_mask_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014829, VkglTestCase_014829_1, VkglTestCase_014829_2);

#define VkglTestCase_014830_1 "dEQP-GLES31.functional.state_quer"
#define VkglTestCase_014830_2 "y.boolean.sample_shading_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014830, VkglTestCase_014830_1, VkglTestCase_014830_2);

#define VkglTestCase_014831_1 "dEQP-GLES31.functional.state_query"
#define VkglTestCase_014831_2 ".boolean.sample_shading_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014831, VkglTestCase_014831_1, VkglTestCase_014831_2);

#define VkglTestCase_014832_1 "dEQP-GLES31.functional.state_query"
#define VkglTestCase_014832_2 ".boolean.sample_shading_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014832, VkglTestCase_014832_1, VkglTestCase_014832_2);

#define VkglTestCase_014833_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_014833_2 "boolean.sample_shading_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014833, VkglTestCase_014833_1, VkglTestCase_014833_2);

#define VkglTestCase_014834_1 "dEQP-GLES31.functional.state_quer"
#define VkglTestCase_014834_2 "y.boolean.sample_shading_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014834, VkglTestCase_014834_1, VkglTestCase_014834_2);

#define VkglTestCase_014835_1 "dEQP-GLES31.functional.state_que"
#define VkglTestCase_014835_2 "ry.boolean.debug_output_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014835, VkglTestCase_014835_1, VkglTestCase_014835_2);

#define VkglTestCase_014836_1 "dEQP-GLES31.functional.state_quer"
#define VkglTestCase_014836_2 "y.boolean.debug_output_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014836, VkglTestCase_014836_1, VkglTestCase_014836_2);

#define VkglTestCase_014837_1 "dEQP-GLES31.functional.state_quer"
#define VkglTestCase_014837_2 "y.boolean.debug_output_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014837, VkglTestCase_014837_1, VkglTestCase_014837_2);

#define VkglTestCase_014838_1 "dEQP-GLES31.functional.state_query"
#define VkglTestCase_014838_2 ".boolean.debug_output_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014838, VkglTestCase_014838_1, VkglTestCase_014838_2);

#define VkglTestCase_014839_1 "dEQP-GLES31.functional.state_que"
#define VkglTestCase_014839_2 "ry.boolean.debug_output_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014839, VkglTestCase_014839_1, VkglTestCase_014839_2);

#define VkglTestCase_014840_1 "dEQP-GLES31.functional.state_query.boo"
#define VkglTestCase_014840_2 "lean.debug_output_synchronous_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014840, VkglTestCase_014840_1, VkglTestCase_014840_2);

#define VkglTestCase_014841_1 "dEQP-GLES31.functional.state_query.bool"
#define VkglTestCase_014841_2 "ean.debug_output_synchronous_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014841, VkglTestCase_014841_1, VkglTestCase_014841_2);

#define VkglTestCase_014842_1 "dEQP-GLES31.functional.state_query.bool"
#define VkglTestCase_014842_2 "ean.debug_output_synchronous_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014842, VkglTestCase_014842_1, VkglTestCase_014842_2);

#define VkglTestCase_014843_1 "dEQP-GLES31.functional.state_query.boole"
#define VkglTestCase_014843_2 "an.debug_output_synchronous_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014843, VkglTestCase_014843_1, VkglTestCase_014843_2);

#define VkglTestCase_014844_1 "dEQP-GLES31.functional.state_query.boo"
#define VkglTestCase_014844_2 "lean.debug_output_synchronous_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014844, VkglTestCase_014844_1, VkglTestCase_014844_2);
