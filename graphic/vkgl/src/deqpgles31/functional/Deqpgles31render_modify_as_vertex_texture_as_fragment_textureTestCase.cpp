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

#define VkglTestCase_014213_1 "dEQP-GLES31.functional.texture.texture_buffer.render_m"
#define VkglTestCase_014213_2 "odify.as_vertex_texture_as_fragment_texture.bufferdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014213, VkglTestCase_014213_1, VkglTestCase_014213_2);

#define VkglTestCase_014214_1 "dEQP-GLES31.functional.texture.texture_buffer.render_mo"
#define VkglTestCase_014214_2 "dify.as_vertex_texture_as_fragment_texture.buffersubdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014214, VkglTestCase_014214_1, VkglTestCase_014214_2);

#define VkglTestCase_014215_1 "dEQP-GLES31.functional.texture.texture_buffer.render_mod"
#define VkglTestCase_014215_2 "ify.as_vertex_texture_as_fragment_texture.mapbuffer_write"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014215, VkglTestCase_014215_1, VkglTestCase_014215_2);

#define VkglTestCase_014216_1 "dEQP-GLES31.functional.texture.texture_buffer.render_modif"
#define VkglTestCase_014216_2 "y.as_vertex_texture_as_fragment_texture.mapbuffer_readwrite"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014216, VkglTestCase_014216_1, VkglTestCase_014216_2);
