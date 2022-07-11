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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016142_1 "dEQP-GLES31.functional.state_query.multisample_interp"
#define VkglTestCase_016142_2 "olation.fragment_interpolation_offset_bits.get_boolean"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016142, VkglTestCase_016142_1, VkglTestCase_016142_2);

#define VkglTestCase_016143_1 "dEQP-GLES31.functional.state_query.multisample_interp"
#define VkglTestCase_016143_2 "olation.fragment_interpolation_offset_bits.get_integer"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016143, VkglTestCase_016143_1, VkglTestCase_016143_2);

#define VkglTestCase_016144_1 "dEQP-GLES31.functional.state_query.multisample_inter"
#define VkglTestCase_016144_2 "polation.fragment_interpolation_offset_bits.get_float"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016144, VkglTestCase_016144_1, VkglTestCase_016144_2);

#define VkglTestCase_016145_1 "dEQP-GLES31.functional.state_query.multisample_interpo"
#define VkglTestCase_016145_2 "lation.fragment_interpolation_offset_bits.get_integer64"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016145, VkglTestCase_016145_1, VkglTestCase_016145_2);
