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

#define VkglTestCase_014139_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_014139_2 ".modify_render.mapbuffer_write.as_vertex_array"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014139, VkglTestCase_014139_1, VkglTestCase_014139_2);

#define VkglTestCase_014140_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_014140_2 ".modify_render.mapbuffer_write.as_index_array"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014140, VkglTestCase_014140_1, VkglTestCase_014140_2);

#define VkglTestCase_014141_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_"
#define VkglTestCase_014141_2 "render.mapbuffer_write.as_vertex_array_as_index_array"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014141, VkglTestCase_014141_1, VkglTestCase_014141_2);

#define VkglTestCase_014142_1 "dEQP-GLES31.functional.texture.texture_buffer."
#define VkglTestCase_014142_2 "modify_render.mapbuffer_write.as_vertex_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014142, VkglTestCase_014142_1, VkglTestCase_014142_2);

#define VkglTestCase_014143_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_r"
#define VkglTestCase_014143_2 "ender.mapbuffer_write.as_vertex_array_as_vertex_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014143, VkglTestCase_014143_1, VkglTestCase_014143_2);

#define VkglTestCase_014144_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_r"
#define VkglTestCase_014144_2 "ender.mapbuffer_write.as_index_array_as_vertex_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014144, VkglTestCase_014144_1, VkglTestCase_014144_2);

#define VkglTestCase_014145_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.ma"
#define VkglTestCase_014145_2 "pbuffer_write.as_vertex_array_as_index_array_as_vertex_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014145, VkglTestCase_014145_1, VkglTestCase_014145_2);

#define VkglTestCase_014146_1 "dEQP-GLES31.functional.texture.texture_buffer.m"
#define VkglTestCase_014146_2 "odify_render.mapbuffer_write.as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014146, VkglTestCase_014146_1, VkglTestCase_014146_2);

#define VkglTestCase_014147_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_re"
#define VkglTestCase_014147_2 "nder.mapbuffer_write.as_vertex_array_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014147, VkglTestCase_014147_1, VkglTestCase_014147_2);

#define VkglTestCase_014148_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_re"
#define VkglTestCase_014148_2 "nder.mapbuffer_write.as_index_array_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014148, VkglTestCase_014148_1, VkglTestCase_014148_2);

#define VkglTestCase_014149_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.map"
#define VkglTestCase_014149_2 "buffer_write.as_vertex_array_as_index_array_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014149, VkglTestCase_014149_1, VkglTestCase_014149_2);

#define VkglTestCase_014150_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_ren"
#define VkglTestCase_014150_2 "der.mapbuffer_write.as_vertex_texture_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014150, VkglTestCase_014150_1, VkglTestCase_014150_2);

#define VkglTestCase_014151_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.mapb"
#define VkglTestCase_014151_2 "uffer_write.as_vertex_array_as_vertex_texture_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014151, VkglTestCase_014151_1, VkglTestCase_014151_2);

#define VkglTestCase_014152_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.mapb"
#define VkglTestCase_014152_2 "uffer_write.as_index_array_as_vertex_texture_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014152, VkglTestCase_014152_1, VkglTestCase_014152_2);

#define VkglTestCase_014153_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.mapbuffer_wr"
#define VkglTestCase_014153_2 "ite.as_vertex_array_as_index_array_as_vertex_texture_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014153, VkglTestCase_014153_1, VkglTestCase_014153_2);
