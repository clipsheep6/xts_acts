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

#define VkglTestCase_014283_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014283_2 "lamp.formats.rgb8_snorm.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014283, VkglTestCase_014283_1, VkglTestCase_014283_2);

#define VkglTestCase_014284_1 "dEQP-GLES31.functional.texture.border_cl"
#define VkglTestCase_014284_2 "amp.formats.rgb8_snorm.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014284, VkglTestCase_014284_1, VkglTestCase_014284_2);

#define VkglTestCase_014285_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014285_2 "lamp.formats.rgb8_snorm.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014285, VkglTestCase_014285_1, VkglTestCase_014285_2);

#define VkglTestCase_014286_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014286_2 "lamp.formats.rgb8_snorm.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014286, VkglTestCase_014286_1, VkglTestCase_014286_2);

#define VkglTestCase_014287_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014287_2 "lamp.formats.rgb8_snorm.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014287, VkglTestCase_014287_1, VkglTestCase_014287_2);

#define VkglTestCase_014288_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014288_2 "lamp.formats.rgb8_snorm.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014288, VkglTestCase_014288_1, VkglTestCase_014288_2);
