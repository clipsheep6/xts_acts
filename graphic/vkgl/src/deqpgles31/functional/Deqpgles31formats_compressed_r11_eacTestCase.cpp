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

#define VkglTestCase_014521_1 "dEQP-GLES31.functional.texture.border_clamp.form"
#define VkglTestCase_014521_2 "ats.compressed_r11_eac.nearest_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014521, VkglTestCase_014521_1, VkglTestCase_014521_2);

#define VkglTestCase_014522_1 "dEQP-GLES31.functional.texture.border_clamp.format"
#define VkglTestCase_014522_2 "s.compressed_r11_eac.nearest_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014522, VkglTestCase_014522_1, VkglTestCase_014522_2);

#define VkglTestCase_014523_1 "dEQP-GLES31.functional.texture.border_clamp.form"
#define VkglTestCase_014523_2 "ats.compressed_r11_eac.linear_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014523, VkglTestCase_014523_1, VkglTestCase_014523_2);

#define VkglTestCase_014524_1 "dEQP-GLES31.functional.texture.border_clamp.format"
#define VkglTestCase_014524_2 "s.compressed_r11_eac.linear_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014524, VkglTestCase_014524_1, VkglTestCase_014524_2);

#define VkglTestCase_014525_1 "dEQP-GLES31.functional.texture.border_clamp.form"
#define VkglTestCase_014525_2 "ats.compressed_r11_eac.gather_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014525, VkglTestCase_014525_1, VkglTestCase_014525_2);

#define VkglTestCase_014526_1 "dEQP-GLES31.functional.texture.border_clamp.format"
#define VkglTestCase_014526_2 "s.compressed_r11_eac.gather_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014526, VkglTestCase_014526_1, VkglTestCase_014526_2);
