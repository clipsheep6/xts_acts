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

#define VkglTestCase_014109_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_014109_2 "er.modify_render.bufferdata.as_vertex_array"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014109, VkglTestCase_014109_1, VkglTestCase_014109_2);

#define VkglTestCase_014110_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_014110_2 "fer.modify_render.bufferdata.as_index_array"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014110, VkglTestCase_014110_1, VkglTestCase_014110_2);

#define VkglTestCase_014111_1 "dEQP-GLES31.functional.texture.texture_buffer.modi"
#define VkglTestCase_014111_2 "fy_render.bufferdata.as_vertex_array_as_index_array"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014111, VkglTestCase_014111_1, VkglTestCase_014111_2);

#define VkglTestCase_014112_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_014112_2 "r.modify_render.bufferdata.as_vertex_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014112, VkglTestCase_014112_1, VkglTestCase_014112_2);

#define VkglTestCase_014113_1 "dEQP-GLES31.functional.texture.texture_buffer.modify"
#define VkglTestCase_014113_2 "_render.bufferdata.as_vertex_array_as_vertex_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014113, VkglTestCase_014113_1, VkglTestCase_014113_2);

#define VkglTestCase_014114_1 "dEQP-GLES31.functional.texture.texture_buffer.modif"
#define VkglTestCase_014114_2 "y_render.bufferdata.as_index_array_as_vertex_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014114, VkglTestCase_014114_1, VkglTestCase_014114_2);

#define VkglTestCase_014115_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render"
#define VkglTestCase_014115_2 ".bufferdata.as_vertex_array_as_index_array_as_vertex_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014115, VkglTestCase_014115_1, VkglTestCase_014115_2);

#define VkglTestCase_014116_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_014116_2 ".modify_render.bufferdata.as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014116, VkglTestCase_014116_1, VkglTestCase_014116_2);

#define VkglTestCase_014117_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_"
#define VkglTestCase_014117_2 "render.bufferdata.as_vertex_array_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014117, VkglTestCase_014117_1, VkglTestCase_014117_2);

#define VkglTestCase_014118_1 "dEQP-GLES31.functional.texture.texture_buffer.modify"
#define VkglTestCase_014118_2 "_render.bufferdata.as_index_array_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014118, VkglTestCase_014118_1, VkglTestCase_014118_2);

#define VkglTestCase_014119_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render."
#define VkglTestCase_014119_2 "bufferdata.as_vertex_array_as_index_array_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014119, VkglTestCase_014119_1, VkglTestCase_014119_2);

#define VkglTestCase_014120_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_r"
#define VkglTestCase_014120_2 "ender.bufferdata.as_vertex_texture_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014120, VkglTestCase_014120_1, VkglTestCase_014120_2);

#define VkglTestCase_014121_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.bu"
#define VkglTestCase_014121_2 "fferdata.as_vertex_array_as_vertex_texture_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014121, VkglTestCase_014121_1, VkglTestCase_014121_2);

#define VkglTestCase_014122_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.b"
#define VkglTestCase_014122_2 "ufferdata.as_index_array_as_vertex_texture_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014122, VkglTestCase_014122_1, VkglTestCase_014122_2);

#define VkglTestCase_014123_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.bufferdat"
#define VkglTestCase_014123_2 "a.as_vertex_array_as_index_array_as_vertex_texture_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014123, VkglTestCase_014123_1, VkglTestCase_014123_2);
