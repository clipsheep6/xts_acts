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

#define VkglTestCase_014185_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_014185_2 "_modify.as_vertex_array_as_vertex_texture.bufferdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014185, VkglTestCase_014185_1, VkglTestCase_014185_2);

#define VkglTestCase_014186_1 "dEQP-GLES31.functional.texture.texture_buffer.render_"
#define VkglTestCase_014186_2 "modify.as_vertex_array_as_vertex_texture.buffersubdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014186, VkglTestCase_014186_1, VkglTestCase_014186_2);

#define VkglTestCase_014187_1 "dEQP-GLES31.functional.texture.texture_buffer.render_m"
#define VkglTestCase_014187_2 "odify.as_vertex_array_as_vertex_texture.mapbuffer_write"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014187, VkglTestCase_014187_1, VkglTestCase_014187_2);

#define VkglTestCase_014188_1 "dEQP-GLES31.functional.texture.texture_buffer.render_mod"
#define VkglTestCase_014188_2 "ify.as_vertex_array_as_vertex_texture.mapbuffer_readwrite"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014188, VkglTestCase_014188_1, VkglTestCase_014188_2);
