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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027542_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027542_2 "sed.astc.endpoint_value_hdr_cem_15.4x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027542, VkglTestCase_027542_1, VkglTestCase_027542_2);

#define VkglTestCase_027543_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027543_2 "sed.astc.endpoint_value_hdr_cem_15.5x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027543, VkglTestCase_027543_1, VkglTestCase_027543_2);

#define VkglTestCase_027544_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027544_2 "sed.astc.endpoint_value_hdr_cem_15.5x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027544, VkglTestCase_027544_1, VkglTestCase_027544_2);

#define VkglTestCase_027545_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027545_2 "sed.astc.endpoint_value_hdr_cem_15.6x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027545, VkglTestCase_027545_1, VkglTestCase_027545_2);

#define VkglTestCase_027546_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027546_2 "sed.astc.endpoint_value_hdr_cem_15.6x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027546, VkglTestCase_027546_1, VkglTestCase_027546_2);

#define VkglTestCase_027547_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027547_2 "sed.astc.endpoint_value_hdr_cem_15.8x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027547, VkglTestCase_027547_1, VkglTestCase_027547_2);

#define VkglTestCase_027548_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027548_2 "sed.astc.endpoint_value_hdr_cem_15.8x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027548, VkglTestCase_027548_1, VkglTestCase_027548_2);

#define VkglTestCase_027549_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027549_2 "sed.astc.endpoint_value_hdr_cem_15.8x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027549, VkglTestCase_027549_1, VkglTestCase_027549_2);

#define VkglTestCase_027550_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027550_2 "ed.astc.endpoint_value_hdr_cem_15.10x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027550, VkglTestCase_027550_1, VkglTestCase_027550_2);

#define VkglTestCase_027551_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027551_2 "ed.astc.endpoint_value_hdr_cem_15.10x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027551, VkglTestCase_027551_1, VkglTestCase_027551_2);

#define VkglTestCase_027552_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027552_2 "ed.astc.endpoint_value_hdr_cem_15.10x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027552, VkglTestCase_027552_1, VkglTestCase_027552_2);

#define VkglTestCase_027553_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027553_2 "ed.astc.endpoint_value_hdr_cem_15.10x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027553, VkglTestCase_027553_1, VkglTestCase_027553_2);

#define VkglTestCase_027554_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027554_2 "ed.astc.endpoint_value_hdr_cem_15.12x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027554, VkglTestCase_027554_1, VkglTestCase_027554_2);

#define VkglTestCase_027555_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027555_2 "ed.astc.endpoint_value_hdr_cem_15.12x12"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027555, VkglTestCase_027555_1, VkglTestCase_027555_2);
