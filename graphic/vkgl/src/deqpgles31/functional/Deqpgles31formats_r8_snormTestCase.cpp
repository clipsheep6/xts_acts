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

#define VkglTestCase_014259_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014259_2 "clamp.formats.r8_snorm.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014259, VkglTestCase_014259_1, VkglTestCase_014259_2);

#define VkglTestCase_014260_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014260_2 "lamp.formats.r8_snorm.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014260, VkglTestCase_014260_1, VkglTestCase_014260_2);

#define VkglTestCase_014261_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014261_2 "clamp.formats.r8_snorm.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014261, VkglTestCase_014261_1, VkglTestCase_014261_2);

#define VkglTestCase_014262_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014262_2 "clamp.formats.r8_snorm.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014262, VkglTestCase_014262_1, VkglTestCase_014262_2);

#define VkglTestCase_014263_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014263_2 "clamp.formats.r8_snorm.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014263, VkglTestCase_014263_1, VkglTestCase_014263_2);

#define VkglTestCase_014264_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014264_2 "clamp.formats.r8_snorm.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014264, VkglTestCase_014264_1, VkglTestCase_014264_2);
