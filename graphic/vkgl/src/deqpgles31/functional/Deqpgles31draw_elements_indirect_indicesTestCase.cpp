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

#define VkglTestCase_007736_1 "dEQP-GLES31.functional.draw_indirect.dr"
#define VkglTestCase_007736_2 "aw_elements_indirect.indices.index_byte"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007736, VkglTestCase_007736_1, VkglTestCase_007736_2);

#define VkglTestCase_007737_1 "dEQP-GLES31.functional.draw_indirect.dr"
#define VkglTestCase_007737_2 "aw_elements_indirect.indices.index_short"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007737, VkglTestCase_007737_1, VkglTestCase_007737_2);

#define VkglTestCase_007738_1 "dEQP-GLES31.functional.draw_indirect.d"
#define VkglTestCase_007738_2 "raw_elements_indirect.indices.index_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007738, VkglTestCase_007738_1, VkglTestCase_007738_2);
