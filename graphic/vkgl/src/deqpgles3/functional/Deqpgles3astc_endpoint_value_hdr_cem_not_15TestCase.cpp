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

#define VkglTestCase_027528_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027528_2 "d.astc.endpoint_value_hdr_cem_not_15.4x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027528, VkglTestCase_027528_1, VkglTestCase_027528_2);

#define VkglTestCase_027529_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027529_2 "d.astc.endpoint_value_hdr_cem_not_15.5x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027529, VkglTestCase_027529_1, VkglTestCase_027529_2);

#define VkglTestCase_027530_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027530_2 "d.astc.endpoint_value_hdr_cem_not_15.5x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027530, VkglTestCase_027530_1, VkglTestCase_027530_2);

#define VkglTestCase_027531_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027531_2 "d.astc.endpoint_value_hdr_cem_not_15.6x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027531, VkglTestCase_027531_1, VkglTestCase_027531_2);

#define VkglTestCase_027532_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027532_2 "d.astc.endpoint_value_hdr_cem_not_15.6x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027532, VkglTestCase_027532_1, VkglTestCase_027532_2);

#define VkglTestCase_027533_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027533_2 "d.astc.endpoint_value_hdr_cem_not_15.8x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027533, VkglTestCase_027533_1, VkglTestCase_027533_2);

#define VkglTestCase_027534_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027534_2 "d.astc.endpoint_value_hdr_cem_not_15.8x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027534, VkglTestCase_027534_1, VkglTestCase_027534_2);

#define VkglTestCase_027535_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027535_2 "d.astc.endpoint_value_hdr_cem_not_15.8x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027535, VkglTestCase_027535_1, VkglTestCase_027535_2);

#define VkglTestCase_027536_1 "dEQP-GLES3.functional.texture.compressed"
#define VkglTestCase_027536_2 ".astc.endpoint_value_hdr_cem_not_15.10x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027536, VkglTestCase_027536_1, VkglTestCase_027536_2);

#define VkglTestCase_027537_1 "dEQP-GLES3.functional.texture.compressed"
#define VkglTestCase_027537_2 ".astc.endpoint_value_hdr_cem_not_15.10x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027537, VkglTestCase_027537_1, VkglTestCase_027537_2);

#define VkglTestCase_027538_1 "dEQP-GLES3.functional.texture.compressed"
#define VkglTestCase_027538_2 ".astc.endpoint_value_hdr_cem_not_15.10x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027538, VkglTestCase_027538_1, VkglTestCase_027538_2);

#define VkglTestCase_027539_1 "dEQP-GLES3.functional.texture.compressed"
#define VkglTestCase_027539_2 ".astc.endpoint_value_hdr_cem_not_15.10x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027539, VkglTestCase_027539_1, VkglTestCase_027539_2);

#define VkglTestCase_027540_1 "dEQP-GLES3.functional.texture.compressed"
#define VkglTestCase_027540_2 ".astc.endpoint_value_hdr_cem_not_15.12x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027540, VkglTestCase_027540_1, VkglTestCase_027540_2);

#define VkglTestCase_027541_1 "dEQP-GLES3.functional.texture.compressed"
#define VkglTestCase_027541_2 ".astc.endpoint_value_hdr_cem_not_15.12x12"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027541, VkglTestCase_027541_1, VkglTestCase_027541_2);
