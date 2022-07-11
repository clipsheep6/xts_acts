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

#define VkglTestCase_014271_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014271_2 "lamp.formats.rg8_snorm.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014271, VkglTestCase_014271_1, VkglTestCase_014271_2);

#define VkglTestCase_014272_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014272_2 "lamp.formats.rg8_snorm.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014272, VkglTestCase_014272_1, VkglTestCase_014272_2);

#define VkglTestCase_014273_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014273_2 "clamp.formats.rg8_snorm.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014273, VkglTestCase_014273_1, VkglTestCase_014273_2);

#define VkglTestCase_014274_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014274_2 "lamp.formats.rg8_snorm.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014274, VkglTestCase_014274_1, VkglTestCase_014274_2);

#define VkglTestCase_014275_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014275_2 "clamp.formats.rg8_snorm.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014275, VkglTestCase_014275_1, VkglTestCase_014275_2);

#define VkglTestCase_014276_1 "dEQP-GLES31.functional.texture.border_c"
#define VkglTestCase_014276_2 "lamp.formats.rg8_snorm.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014276, VkglTestCase_014276_1, VkglTestCase_014276_2);
