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

#define VkglTestCase_001589_1 "dEQP-GLES3.functional.shaders.li"
#define VkglTestCase_001589_2 "nkage.uniform.block.type_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001589, VkglTestCase_001589_1, VkglTestCase_001589_2);

#define VkglTestCase_001590_1 "dEQP-GLES3.functional.shaders.link"
#define VkglTestCase_001590_2 "age.uniform.block.members_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001590, VkglTestCase_001590_1, VkglTestCase_001590_2);

#define VkglTestCase_001591_1 "dEQP-GLES3.functional.shaders.linkage.u"
#define VkglTestCase_001591_2 "niform.block.layout_qualifier_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001591, VkglTestCase_001591_1, VkglTestCase_001591_2);

#define VkglTestCase_001592_1 "dEQP-GLES3.functional.shaders.linkage.u"
#define VkglTestCase_001592_2 "niform.block.layout_qualifier_mismatch_2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001592, VkglTestCase_001592_1, VkglTestCase_001592_2);

#define VkglTestCase_001593_1 "dEQP-GLES3.functional.shaders.linkage.u"
#define VkglTestCase_001593_2 "niform.block.layout_qualifier_mismatch_4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001593, VkglTestCase_001593_1, VkglTestCase_001593_2);

#define VkglTestCase_001594_1 "dEQP-GLES3.functional.shaders.linkage.u"
#define VkglTestCase_001594_2 "niform.block.layout_qualifier_mismatch_5"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001594, VkglTestCase_001594_1, VkglTestCase_001594_2);
