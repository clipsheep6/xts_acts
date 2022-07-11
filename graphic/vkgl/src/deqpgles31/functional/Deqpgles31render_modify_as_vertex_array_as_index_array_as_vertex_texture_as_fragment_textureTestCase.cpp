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

#define VkglTestCase_014225_1 "dEQP-GLES31.functional.texture.texture_buffer.render_modify.as_vertex"
#define VkglTestCase_014225_2 "_array_as_index_array_as_vertex_texture_as_fragment_texture.bufferdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014225, VkglTestCase_014225_1, VkglTestCase_014225_2);

#define VkglTestCase_014226_1 "dEQP-GLES31.functional.texture.texture_buffer.render_modify.as_vertex_a"
#define VkglTestCase_014226_2 "rray_as_index_array_as_vertex_texture_as_fragment_texture.buffersubdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014226, VkglTestCase_014226_1, VkglTestCase_014226_2);

#define VkglTestCase_014227_1 "dEQP-GLES31.functional.texture.texture_buffer.render_modify.as_vertex_ar"
#define VkglTestCase_014227_2 "ray_as_index_array_as_vertex_texture_as_fragment_texture.mapbuffer_write"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014227, VkglTestCase_014227_1, VkglTestCase_014227_2);

#define VkglTestCase_014228_1 "dEQP-GLES31.functional.texture.texture_buffer.render_modify.as_vertex_arra"
#define VkglTestCase_014228_2 "y_as_index_array_as_vertex_texture_as_fragment_texture.mapbuffer_readwrite"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014228, VkglTestCase_014228_1, VkglTestCase_014228_2);
