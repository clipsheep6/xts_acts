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
#include "../ActsDeqpgles310022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021847_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021847_2 "ry.program_input.location.vertex_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021847, VkglTestCase_021847_1, VkglTestCase_021847_2);

#define VkglTestCase_021848_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_021848_2 "m_input.location.vertex_fragment.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021848, VkglTestCase_021848_1, VkglTestCase_021848_2);

#define VkglTestCase_022437_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_022437_2 "y.program_output.location.vertex_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022437, VkglTestCase_022437_1, VkglTestCase_022437_2);

#define VkglTestCase_022438_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022438_2 "_output.location.vertex_fragment.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022438, VkglTestCase_022438_1, VkglTestCase_022438_2);

#define VkglTestCase_022439_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022439_2 "rogram_output.location.vertex_fragment.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022439, VkglTestCase_022439_1, VkglTestCase_022439_2);

#define VkglTestCase_022440_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022440_2 "tput.location.vertex_fragment.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022440, VkglTestCase_022440_1, VkglTestCase_022440_2);
