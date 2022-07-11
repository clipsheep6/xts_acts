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

#define VkglTestCase_014181_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_014181_2 "r.render_modify.as_vertex_texture.bufferdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014181, VkglTestCase_014181_1, VkglTestCase_014181_2);

#define VkglTestCase_014182_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_014182_2 ".render_modify.as_vertex_texture.buffersubdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014182, VkglTestCase_014182_1, VkglTestCase_014182_2);

#define VkglTestCase_014183_1 "dEQP-GLES31.functional.texture.texture_buffer."
#define VkglTestCase_014183_2 "render_modify.as_vertex_texture.mapbuffer_write"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014183, VkglTestCase_014183_1, VkglTestCase_014183_2);

#define VkglTestCase_014184_1 "dEQP-GLES31.functional.texture.texture_buffer.re"
#define VkglTestCase_014184_2 "nder_modify.as_vertex_texture.mapbuffer_readwrite"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014184, VkglTestCase_014184_1, VkglTestCase_014184_2);
