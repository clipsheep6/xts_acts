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

#define VkglTestCase_014177_1 "dEQP-GLES31.functional.texture.texture_buffer.rend"
#define VkglTestCase_014177_2 "er_modify.as_vertex_array_as_index_array.bufferdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014177, VkglTestCase_014177_1, VkglTestCase_014177_2);

#define VkglTestCase_014178_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_014178_2 "_modify.as_vertex_array_as_index_array.buffersubdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014178, VkglTestCase_014178_1, VkglTestCase_014178_2);

#define VkglTestCase_014179_1 "dEQP-GLES31.functional.texture.texture_buffer.render_"
#define VkglTestCase_014179_2 "modify.as_vertex_array_as_index_array.mapbuffer_write"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014179, VkglTestCase_014179_1, VkglTestCase_014179_2);

#define VkglTestCase_014180_1 "dEQP-GLES31.functional.texture.texture_buffer.render_mo"
#define VkglTestCase_014180_2 "dify.as_vertex_array_as_index_array.mapbuffer_readwrite"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014180, VkglTestCase_014180_1, VkglTestCase_014180_2);
