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

#define VkglTestCase_014189_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_014189_2 "r_modify.as_index_array_as_vertex_texture.bufferdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014189, VkglTestCase_014189_1, VkglTestCase_014189_2);

#define VkglTestCase_014190_1 "dEQP-GLES31.functional.texture.texture_buffer.render_"
#define VkglTestCase_014190_2 "modify.as_index_array_as_vertex_texture.buffersubdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014190, VkglTestCase_014190_1, VkglTestCase_014190_2);

#define VkglTestCase_014191_1 "dEQP-GLES31.functional.texture.texture_buffer.render_m"
#define VkglTestCase_014191_2 "odify.as_index_array_as_vertex_texture.mapbuffer_write"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014191, VkglTestCase_014191_1, VkglTestCase_014191_2);

#define VkglTestCase_014192_1 "dEQP-GLES31.functional.texture.texture_buffer.render_mod"
#define VkglTestCase_014192_2 "ify.as_index_array_as_vertex_texture.mapbuffer_readwrite"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014192, VkglTestCase_014192_1, VkglTestCase_014192_2);
