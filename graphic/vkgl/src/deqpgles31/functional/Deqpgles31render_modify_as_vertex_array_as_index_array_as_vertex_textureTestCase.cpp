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

#define VkglTestCase_014193_1 "dEQP-GLES31.functional.texture.texture_buffer.render_modify"
#define VkglTestCase_014193_2 ".as_vertex_array_as_index_array_as_vertex_texture.bufferdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014193, VkglTestCase_014193_1, VkglTestCase_014193_2);

#define VkglTestCase_014194_1 "dEQP-GLES31.functional.texture.texture_buffer.render_modify.a"
#define VkglTestCase_014194_2 "s_vertex_array_as_index_array_as_vertex_texture.buffersubdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014194, VkglTestCase_014194_1, VkglTestCase_014194_2);

#define VkglTestCase_014195_1 "dEQP-GLES31.functional.texture.texture_buffer.render_modify.as"
#define VkglTestCase_014195_2 "_vertex_array_as_index_array_as_vertex_texture.mapbuffer_write"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014195, VkglTestCase_014195_1, VkglTestCase_014195_2);

#define VkglTestCase_014196_1 "dEQP-GLES31.functional.texture.texture_buffer.render_modify.as_v"
#define VkglTestCase_014196_2 "ertex_array_as_index_array_as_vertex_texture.mapbuffer_readwrite"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014196, VkglTestCase_014196_1, VkglTestCase_014196_2);
