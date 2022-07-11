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

#define VkglTestCase_014154_1 "dEQP-GLES31.functional.texture.texture_buffer.m"
#define VkglTestCase_014154_2 "odify_render.mapbuffer_readwrite.as_vertex_array"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014154, VkglTestCase_014154_1, VkglTestCase_014154_2);

#define VkglTestCase_014155_1 "dEQP-GLES31.functional.texture.texture_buffer.m"
#define VkglTestCase_014155_2 "odify_render.mapbuffer_readwrite.as_index_array"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014155, VkglTestCase_014155_1, VkglTestCase_014155_2);

#define VkglTestCase_014156_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_re"
#define VkglTestCase_014156_2 "nder.mapbuffer_readwrite.as_vertex_array_as_index_array"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014156, VkglTestCase_014156_1, VkglTestCase_014156_2);

#define VkglTestCase_014157_1 "dEQP-GLES31.functional.texture.texture_buffer.mo"
#define VkglTestCase_014157_2 "dify_render.mapbuffer_readwrite.as_vertex_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014157, VkglTestCase_014157_1, VkglTestCase_014157_2);

#define VkglTestCase_014158_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_ren"
#define VkglTestCase_014158_2 "der.mapbuffer_readwrite.as_vertex_array_as_vertex_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014158, VkglTestCase_014158_1, VkglTestCase_014158_2);

#define VkglTestCase_014159_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_ren"
#define VkglTestCase_014159_2 "der.mapbuffer_readwrite.as_index_array_as_vertex_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014159, VkglTestCase_014159_1, VkglTestCase_014159_2);

#define VkglTestCase_014160_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.mapb"
#define VkglTestCase_014160_2 "uffer_readwrite.as_vertex_array_as_index_array_as_vertex_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014160, VkglTestCase_014160_1, VkglTestCase_014160_2);

#define VkglTestCase_014161_1 "dEQP-GLES31.functional.texture.texture_buffer.mod"
#define VkglTestCase_014161_2 "ify_render.mapbuffer_readwrite.as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014161, VkglTestCase_014161_1, VkglTestCase_014161_2);

#define VkglTestCase_014162_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_rend"
#define VkglTestCase_014162_2 "er.mapbuffer_readwrite.as_vertex_array_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014162, VkglTestCase_014162_1, VkglTestCase_014162_2);

#define VkglTestCase_014163_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_rend"
#define VkglTestCase_014163_2 "er.mapbuffer_readwrite.as_index_array_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014163, VkglTestCase_014163_1, VkglTestCase_014163_2);

#define VkglTestCase_014164_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.mapbu"
#define VkglTestCase_014164_2 "ffer_readwrite.as_vertex_array_as_index_array_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014164, VkglTestCase_014164_1, VkglTestCase_014164_2);

#define VkglTestCase_014165_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_rende"
#define VkglTestCase_014165_2 "r.mapbuffer_readwrite.as_vertex_texture_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014165, VkglTestCase_014165_1, VkglTestCase_014165_2);

#define VkglTestCase_014166_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.mapbuf"
#define VkglTestCase_014166_2 "fer_readwrite.as_vertex_array_as_vertex_texture_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014166, VkglTestCase_014166_1, VkglTestCase_014166_2);

#define VkglTestCase_014167_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.mapbuf"
#define VkglTestCase_014167_2 "fer_readwrite.as_index_array_as_vertex_texture_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014167, VkglTestCase_014167_1, VkglTestCase_014167_2);

#define VkglTestCase_014168_1 "dEQP-GLES31.functional.texture.texture_buffer.modify_render.mapbuffer_read"
#define VkglTestCase_014168_2 "write.as_vertex_array_as_index_array_as_vertex_texture_as_fragment_texture"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014168, VkglTestCase_014168_1, VkglTestCase_014168_2);
