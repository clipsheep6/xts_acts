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

#define VkglTestCase_014277_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014277_2 "r_clamp.formats.rgb8.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014277, VkglTestCase_014277_1, VkglTestCase_014277_2);

#define VkglTestCase_014278_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014278_2 "_clamp.formats.rgb8.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014278, VkglTestCase_014278_1, VkglTestCase_014278_2);

#define VkglTestCase_014279_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014279_2 "r_clamp.formats.rgb8.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014279, VkglTestCase_014279_1, VkglTestCase_014279_2);

#define VkglTestCase_014280_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014280_2 "r_clamp.formats.rgb8.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014280, VkglTestCase_014280_1, VkglTestCase_014280_2);

#define VkglTestCase_014281_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014281_2 "r_clamp.formats.rgb8.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014281, VkglTestCase_014281_1, VkglTestCase_014281_2);

#define VkglTestCase_014282_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014282_2 "r_clamp.formats.rgb8.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014282, VkglTestCase_014282_1, VkglTestCase_014282_2);
