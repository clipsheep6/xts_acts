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

#define VkglTestCase_014201_1 "dEQP-GLES31.functional.texture.texture_buffer.render_"
#define VkglTestCase_014201_2 "modify.as_vertex_array_as_fragment_texture.bufferdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014201, VkglTestCase_014201_1, VkglTestCase_014201_2);

#define VkglTestCase_014202_1 "dEQP-GLES31.functional.texture.texture_buffer.render_m"
#define VkglTestCase_014202_2 "odify.as_vertex_array_as_fragment_texture.buffersubdata"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014202, VkglTestCase_014202_1, VkglTestCase_014202_2);

#define VkglTestCase_014203_1 "dEQP-GLES31.functional.texture.texture_buffer.render_mo"
#define VkglTestCase_014203_2 "dify.as_vertex_array_as_fragment_texture.mapbuffer_write"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014203, VkglTestCase_014203_1, VkglTestCase_014203_2);

#define VkglTestCase_014204_1 "dEQP-GLES31.functional.texture.texture_buffer.render_modi"
#define VkglTestCase_014204_2 "fy.as_vertex_array_as_fragment_texture.mapbuffer_readwrite"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014204, VkglTestCase_014204_1, VkglTestCase_014204_2);
