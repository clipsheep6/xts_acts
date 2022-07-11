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
#include "../ActsDeqpgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000401_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000401_2 "ite.render_as_index_array.array_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000401, VkglTestCase_000401_1, VkglTestCase_000401_2);

#define VkglTestCase_000402_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000402_2 "e.render_as_index_array.array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000402, VkglTestCase_000402_1, VkglTestCase_000402_2);

#define VkglTestCase_000403_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000403_2 "e.render_as_index_array.copy_read_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000403, VkglTestCase_000403_1, VkglTestCase_000403_2);

#define VkglTestCase_000404_1 "dEQP-GLES3.functional.buffer.map.write."
#define VkglTestCase_000404_2 "render_as_index_array.copy_read_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000404, VkglTestCase_000404_1, VkglTestCase_000404_2);

#define VkglTestCase_000405_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000405_2 ".render_as_index_array.copy_write_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000405, VkglTestCase_000405_1, VkglTestCase_000405_2);

#define VkglTestCase_000406_1 "dEQP-GLES3.functional.buffer.map.write."
#define VkglTestCase_000406_2 "render_as_index_array.copy_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000406, VkglTestCase_000406_1, VkglTestCase_000406_2);

#define VkglTestCase_000407_1 "dEQP-GLES3.functional.buffer.map.write."
#define VkglTestCase_000407_2 "render_as_index_array.element_array_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000407, VkglTestCase_000407_1, VkglTestCase_000407_2);

#define VkglTestCase_000408_1 "dEQP-GLES3.functional.buffer.map.write.re"
#define VkglTestCase_000408_2 "nder_as_index_array.element_array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000408, VkglTestCase_000408_1, VkglTestCase_000408_2);

#define VkglTestCase_000409_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000409_2 ".render_as_index_array.pixel_pack_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000409, VkglTestCase_000409_1, VkglTestCase_000409_2);

#define VkglTestCase_000410_1 "dEQP-GLES3.functional.buffer.map.write."
#define VkglTestCase_000410_2 "render_as_index_array.pixel_pack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000410, VkglTestCase_000410_1, VkglTestCase_000410_2);

#define VkglTestCase_000411_1 "dEQP-GLES3.functional.buffer.map.write."
#define VkglTestCase_000411_2 "render_as_index_array.pixel_unpack_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000411, VkglTestCase_000411_1, VkglTestCase_000411_2);

#define VkglTestCase_000412_1 "dEQP-GLES3.functional.buffer.map.write.r"
#define VkglTestCase_000412_2 "ender_as_index_array.pixel_unpack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000412, VkglTestCase_000412_1, VkglTestCase_000412_2);

#define VkglTestCase_000413_1 "dEQP-GLES3.functional.buffer.map.write.ren"
#define VkglTestCase_000413_2 "der_as_index_array.transform_feedback_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000413, VkglTestCase_000413_1, VkglTestCase_000413_2);

#define VkglTestCase_000414_1 "dEQP-GLES3.functional.buffer.map.write.rend"
#define VkglTestCase_000414_2 "er_as_index_array.transform_feedback_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000414, VkglTestCase_000414_1, VkglTestCase_000414_2);

#define VkglTestCase_000415_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000415_2 "te.render_as_index_array.uniform_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000415, VkglTestCase_000415_1, VkglTestCase_000415_2);

#define VkglTestCase_000416_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000416_2 ".render_as_index_array.uniform_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000416, VkglTestCase_000416_1, VkglTestCase_000416_2);
