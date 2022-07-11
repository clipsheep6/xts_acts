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

#define VkglTestCase_010387_1 "dEQP-GLES31.functional.ssb"
#define VkglTestCase_010387_2 "o.array_length.sized_array"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010387, VkglTestCase_010387_1, VkglTestCase_010387_2);

#define VkglTestCase_010388_1 "dEQP-GLES31.functional.ssbo.arr"
#define VkglTestCase_010388_2 "ay_length.sized_writeonly_array"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010388, VkglTestCase_010388_1, VkglTestCase_010388_2);

#define VkglTestCase_010389_1 "dEQP-GLES31.functional.ssbo.ar"
#define VkglTestCase_010389_2 "ray_length.sized_readonly_array"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010389, VkglTestCase_010389_1, VkglTestCase_010389_2);

#define VkglTestCase_010390_1 "dEQP-GLES31.functional.ssbo"
#define VkglTestCase_010390_2 ".array_length.unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010390, VkglTestCase_010390_1, VkglTestCase_010390_2);

#define VkglTestCase_010391_1 "dEQP-GLES31.functional.ssbo.arra"
#define VkglTestCase_010391_2 "y_length.unsized_writeonly_array"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010391, VkglTestCase_010391_1, VkglTestCase_010391_2);

#define VkglTestCase_010392_1 "dEQP-GLES31.functional.ssbo.arr"
#define VkglTestCase_010392_2 "ay_length.unsized_readonly_array"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010392, VkglTestCase_010392_1, VkglTestCase_010392_2);
