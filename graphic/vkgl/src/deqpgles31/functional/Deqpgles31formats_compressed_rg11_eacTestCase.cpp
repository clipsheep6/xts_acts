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

#define VkglTestCase_014533_1 "dEQP-GLES31.functional.texture.border_clamp.forma"
#define VkglTestCase_014533_2 "ts.compressed_rg11_eac.nearest_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014533, VkglTestCase_014533_1, VkglTestCase_014533_2);

#define VkglTestCase_014534_1 "dEQP-GLES31.functional.texture.border_clamp.formats"
#define VkglTestCase_014534_2 ".compressed_rg11_eac.nearest_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014534, VkglTestCase_014534_1, VkglTestCase_014534_2);

#define VkglTestCase_014535_1 "dEQP-GLES31.functional.texture.border_clamp.form"
#define VkglTestCase_014535_2 "ats.compressed_rg11_eac.linear_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014535, VkglTestCase_014535_1, VkglTestCase_014535_2);

#define VkglTestCase_014536_1 "dEQP-GLES31.functional.texture.border_clamp.format"
#define VkglTestCase_014536_2 "s.compressed_rg11_eac.linear_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014536, VkglTestCase_014536_1, VkglTestCase_014536_2);

#define VkglTestCase_014537_1 "dEQP-GLES31.functional.texture.border_clamp.form"
#define VkglTestCase_014537_2 "ats.compressed_rg11_eac.gather_size_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014537, VkglTestCase_014537_1, VkglTestCase_014537_2);

#define VkglTestCase_014538_1 "dEQP-GLES31.functional.texture.border_clamp.format"
#define VkglTestCase_014538_2 "s.compressed_rg11_eac.gather_size_not_tile_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014538, VkglTestCase_014538_1, VkglTestCase_014538_2);
