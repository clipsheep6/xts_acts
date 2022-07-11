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

#define VkglTestCase_014229_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014229_2 "lamp.formats.luminance.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014229, VkglTestCase_014229_1, VkglTestCase_014229_2);

#define VkglTestCase_014230_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014230_2 "lamp.formats.luminance.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014230, VkglTestCase_014230_1, VkglTestCase_014230_2);

#define VkglTestCase_014231_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014231_2 "clamp.formats.luminance.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014231, VkglTestCase_014231_1, VkglTestCase_014231_2);

#define VkglTestCase_014232_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014232_2 "lamp.formats.luminance.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014232, VkglTestCase_014232_1, VkglTestCase_014232_2);

#define VkglTestCase_014233_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014233_2 "clamp.formats.luminance.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014233, VkglTestCase_014233_1, VkglTestCase_014233_2);

#define VkglTestCase_014234_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014234_2 "lamp.formats.luminance.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014234, VkglTestCase_014234_1, VkglTestCase_014234_2);
