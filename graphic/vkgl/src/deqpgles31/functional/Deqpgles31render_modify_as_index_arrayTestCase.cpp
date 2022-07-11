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

#define VkglTestCase_014173_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_014173_2 "fer.render_modify.as_index_array.bufferdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014173, VkglTestCase_014173_1, VkglTestCase_014173_2);

#define VkglTestCase_014174_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_014174_2 "r.render_modify.as_index_array.buffersubdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014174, VkglTestCase_014174_1, VkglTestCase_014174_2);

#define VkglTestCase_014175_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_014175_2 ".render_modify.as_index_array.mapbuffer_write"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014175, VkglTestCase_014175_1, VkglTestCase_014175_2);

#define VkglTestCase_014176_1 "dEQP-GLES31.functional.texture.texture_buffer.r"
#define VkglTestCase_014176_2 "ender_modify.as_index_array.mapbuffer_readwrite"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014176, VkglTestCase_014176_1, VkglTestCase_014176_2);
