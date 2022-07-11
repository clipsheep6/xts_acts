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
#include "../ActsDeqpgles30044TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_043187_1 "dEQP-GLES3.functional.state_query.buffe"
#define VkglTestCase_043187_2 "r_object.buffer_size_getbufferparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043187, VkglTestCase_043187_1, VkglTestCase_043187_2);

#define VkglTestCase_043188_1 "dEQP-GLES3.functional.state_query.buffer"
#define VkglTestCase_043188_2 "_object.buffer_size_getbufferparameteri64"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043188, VkglTestCase_043188_1, VkglTestCase_043188_2);

#define VkglTestCase_043189_1 "dEQP-GLES3.functional.state_query.buffer"
#define VkglTestCase_043189_2 "_object.buffer_usage_getbufferparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043189, VkglTestCase_043189_1, VkglTestCase_043189_2);

#define VkglTestCase_043190_1 "dEQP-GLES3.functional.state_query.buffer_"
#define VkglTestCase_043190_2 "object.buffer_usage_getbufferparameteri64"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043190, VkglTestCase_043190_1, VkglTestCase_043190_2);

#define VkglTestCase_043191_1 "dEQP-GLES3.functional.state_query.buffer_ob"
#define VkglTestCase_043191_2 "ject.buffer_access_flags_getbufferparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043191, VkglTestCase_043191_1, VkglTestCase_043191_2);

#define VkglTestCase_043192_1 "dEQP-GLES3.functional.state_query.buffer_obj"
#define VkglTestCase_043192_2 "ect.buffer_access_flags_getbufferparameteri64"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043192, VkglTestCase_043192_1, VkglTestCase_043192_2);

#define VkglTestCase_043193_1 "dEQP-GLES3.functional.state_query.buffer"
#define VkglTestCase_043193_2 "_object.buffer_mapped_getbufferparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043193, VkglTestCase_043193_1, VkglTestCase_043193_2);

#define VkglTestCase_043194_1 "dEQP-GLES3.functional.state_query.buffer_"
#define VkglTestCase_043194_2 "object.buffer_mapped_getbufferparameteri64"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043194, VkglTestCase_043194_1, VkglTestCase_043194_2);

#define VkglTestCase_043195_1 "dEQP-GLES3.functional.state_query.buffer_objec"
#define VkglTestCase_043195_2 "t.buffer_map_offset_length_getbufferparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043195, VkglTestCase_043195_1, VkglTestCase_043195_2);

#define VkglTestCase_043196_1 "dEQP-GLES3.functional.state_query.buffer_object"
#define VkglTestCase_043196_2 ".buffer_map_offset_length_getbufferparameteri64"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043196, VkglTestCase_043196_1, VkglTestCase_043196_2);

#define VkglTestCase_043197_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_043197_2 "ry.buffer_object.buffer_pointer"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043197, VkglTestCase_043197_1, VkglTestCase_043197_2);
