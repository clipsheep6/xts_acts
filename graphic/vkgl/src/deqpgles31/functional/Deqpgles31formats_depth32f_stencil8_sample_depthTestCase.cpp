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

#define VkglTestCase_014509_1 "dEQP-GLES31.functional.texture.border_clamp.forma"
#define VkglTestCase_014509_2 "ts.depth32f_stencil8_sample_depth.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014509, VkglTestCase_014509_1, VkglTestCase_014509_2);

#define VkglTestCase_014510_1 "dEQP-GLES31.functional.texture.border_clamp.format"
#define VkglTestCase_014510_2 "s.depth32f_stencil8_sample_depth.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014510, VkglTestCase_014510_1, VkglTestCase_014510_2);

#define VkglTestCase_014511_1 "dEQP-GLES31.functional.texture.border_clamp.forma"
#define VkglTestCase_014511_2 "ts.depth32f_stencil8_sample_depth.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014511, VkglTestCase_014511_1, VkglTestCase_014511_2);

#define VkglTestCase_014512_1 "dEQP-GLES31.functional.texture.border_clamp.forma"
#define VkglTestCase_014512_2 "ts.depth32f_stencil8_sample_depth.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014512, VkglTestCase_014512_1, VkglTestCase_014512_2);
