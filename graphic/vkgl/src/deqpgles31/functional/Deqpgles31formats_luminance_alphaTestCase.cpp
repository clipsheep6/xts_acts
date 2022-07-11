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

#define VkglTestCase_014241_1 "dEQP-GLES31.functional.texture.border_clam"
#define VkglTestCase_014241_2 "p.formats.luminance_alpha.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014241, VkglTestCase_014241_1, VkglTestCase_014241_2);

#define VkglTestCase_014242_1 "dEQP-GLES31.functional.texture.border_clam"
#define VkglTestCase_014242_2 "p.formats.luminance_alpha.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014242, VkglTestCase_014242_1, VkglTestCase_014242_2);

#define VkglTestCase_014243_1 "dEQP-GLES31.functional.texture.border_cla"
#define VkglTestCase_014243_2 "mp.formats.luminance_alpha.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014243, VkglTestCase_014243_1, VkglTestCase_014243_2);

#define VkglTestCase_014244_1 "dEQP-GLES31.functional.texture.border_clam"
#define VkglTestCase_014244_2 "p.formats.luminance_alpha.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014244, VkglTestCase_014244_1, VkglTestCase_014244_2);

#define VkglTestCase_014245_1 "dEQP-GLES31.functional.texture.border_cla"
#define VkglTestCase_014245_2 "mp.formats.luminance_alpha.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014245, VkglTestCase_014245_1, VkglTestCase_014245_2);

#define VkglTestCase_014246_1 "dEQP-GLES31.functional.texture.border_clam"
#define VkglTestCase_014246_2 "p.formats.luminance_alpha.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014246, VkglTestCase_014246_1, VkglTestCase_014246_2);
