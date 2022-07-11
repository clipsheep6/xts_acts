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

#define VkglTestCase_014124_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_014124_2 "r.modify_render.buffersubdata.as_vertex_array"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014124, VkglTestCase_014124_1, VkglTestCase_014124_2);

#define VkglTestCase_014125_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_014125_2 "r.modify_render.buffersubdata.as_index_array"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014125, VkglTestCase_014125_1, VkglTestCase_014125_2);

#define VkglTestCase_014126_1 "dEQP-GLES31.functional.texture.texture_buffer.modify"
#define VkglTestCase_014126_2 "_render.buffersubdata.as_vertex_array_as_index_array"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014126, VkglTestCase_014126_1, VkglTestCase_014126_2);

#define VkglTestCase_014127_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_014127_2 ".modify_render.buffersubdata.as_vertex_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014127, VkglTestCase_014127_1, VkglTestCase_014127_2);

#define VkglTestCase_014128_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_"
#define VkglTestCase_014128_2 "render.buffersubdata.as_vertex_array_as_vertex_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014128, VkglTestCase_014128_1, VkglTestCase_014128_2);

#define VkglTestCase_014129_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_"
#define VkglTestCase_014129_2 "render.buffersubdata.as_index_array_as_vertex_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014129, VkglTestCase_014129_1, VkglTestCase_014129_2);

#define VkglTestCase_014130_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.b"
#define VkglTestCase_014130_2 "uffersubdata.as_vertex_array_as_index_array_as_vertex_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014130, VkglTestCase_014130_1, VkglTestCase_014130_2);

#define VkglTestCase_014131_1 "dEQP-GLES31.functional.texture.texture_buffer."
#define VkglTestCase_014131_2 "modify_render.buffersubdata.as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014131, VkglTestCase_014131_1, VkglTestCase_014131_2);

#define VkglTestCase_014132_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_r"
#define VkglTestCase_014132_2 "ender.buffersubdata.as_vertex_array_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014132, VkglTestCase_014132_1, VkglTestCase_014132_2);

#define VkglTestCase_014133_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_r"
#define VkglTestCase_014133_2 "ender.buffersubdata.as_index_array_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014133, VkglTestCase_014133_1, VkglTestCase_014133_2);

#define VkglTestCase_014134_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.bu"
#define VkglTestCase_014134_2 "ffersubdata.as_vertex_array_as_index_array_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014134, VkglTestCase_014134_1, VkglTestCase_014134_2);

#define VkglTestCase_014135_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_re"
#define VkglTestCase_014135_2 "nder.buffersubdata.as_vertex_texture_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014135, VkglTestCase_014135_1, VkglTestCase_014135_2);

#define VkglTestCase_014136_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.buf"
#define VkglTestCase_014136_2 "fersubdata.as_vertex_array_as_vertex_texture_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014136, VkglTestCase_014136_1, VkglTestCase_014136_2);

#define VkglTestCase_014137_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.buf"
#define VkglTestCase_014137_2 "fersubdata.as_index_array_as_vertex_texture_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014137, VkglTestCase_014137_1, VkglTestCase_014137_2);

#define VkglTestCase_014138_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.buffersubda"
#define VkglTestCase_014138_2 "ta.as_vertex_array_as_index_array_as_vertex_texture_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014138, VkglTestCase_014138_1, VkglTestCase_014138_2);
