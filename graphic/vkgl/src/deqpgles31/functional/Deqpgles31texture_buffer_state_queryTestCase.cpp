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
#include "../ActsDeqpgles310014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013878_1 "dEQP-GLES31.functional.texture.texture_buffer."
#define VkglTestCase_013878_2 "state_query.max_texture_buffer_size_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013878, VkglTestCase_013878_1, VkglTestCase_013878_2);

#define VkglTestCase_013879_1 "dEQP-GLES31.functional.texture.texture_buffer."
#define VkglTestCase_013879_2 "state_query.max_texture_buffer_size_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013879, VkglTestCase_013879_1, VkglTestCase_013879_2);

#define VkglTestCase_013880_1 "dEQP-GLES31.functional.texture.texture_buffer.s"
#define VkglTestCase_013880_2 "tate_query.max_texture_buffer_size_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013880, VkglTestCase_013880_1, VkglTestCase_013880_2);

#define VkglTestCase_013881_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_013881_2 ".state_query.max_texture_buffer_size_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013881, VkglTestCase_013881_1, VkglTestCase_013881_2);

#define VkglTestCase_013882_1 "dEQP-GLES31.functional.texture.texture_buffer.stat"
#define VkglTestCase_013882_2 "e_query.texture_buffer_offset_alignment_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013882, VkglTestCase_013882_1, VkglTestCase_013882_2);

#define VkglTestCase_013883_1 "dEQP-GLES31.functional.texture.texture_buffer.stat"
#define VkglTestCase_013883_2 "e_query.texture_buffer_offset_alignment_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013883, VkglTestCase_013883_1, VkglTestCase_013883_2);

#define VkglTestCase_013884_1 "dEQP-GLES31.functional.texture.texture_buffer.state"
#define VkglTestCase_013884_2 "_query.texture_buffer_offset_alignment_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013884, VkglTestCase_013884_1, VkglTestCase_013884_2);

#define VkglTestCase_013885_1 "dEQP-GLES31.functional.texture.texture_buffer.sta"
#define VkglTestCase_013885_2 "te_query.texture_buffer_offset_alignment_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013885, VkglTestCase_013885_1, VkglTestCase_013885_2);

#define VkglTestCase_013886_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_013886_2 ".state_query.texture_buffer_binding_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013886, VkglTestCase_013886_1, VkglTestCase_013886_2);

#define VkglTestCase_013887_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_013887_2 ".state_query.texture_buffer_binding_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013887, VkglTestCase_013887_1, VkglTestCase_013887_2);

#define VkglTestCase_013888_1 "dEQP-GLES31.functional.texture.texture_buffer."
#define VkglTestCase_013888_2 "state_query.texture_buffer_binding_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013888, VkglTestCase_013888_1, VkglTestCase_013888_2);

#define VkglTestCase_013889_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_013889_2 "r.state_query.texture_buffer_binding_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013889, VkglTestCase_013889_1, VkglTestCase_013889_2);

#define VkglTestCase_013890_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_013890_2 ".state_query.texture_binding_buffer_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013890, VkglTestCase_013890_1, VkglTestCase_013890_2);

#define VkglTestCase_013891_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_013891_2 ".state_query.texture_binding_buffer_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013891, VkglTestCase_013891_1, VkglTestCase_013891_2);

#define VkglTestCase_013892_1 "dEQP-GLES31.functional.texture.texture_buffer."
#define VkglTestCase_013892_2 "state_query.texture_binding_buffer_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013892, VkglTestCase_013892_1, VkglTestCase_013892_2);

#define VkglTestCase_013893_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_013893_2 "r.state_query.texture_binding_buffer_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013893, VkglTestCase_013893_1, VkglTestCase_013893_2);

#define VkglTestCase_013894_1 "dEQP-GLES31.functional.texture.texture_buffer.sta"
#define VkglTestCase_013894_2 "te_query.texture_buffer_data_store_binding_integer"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013894, VkglTestCase_013894_1, VkglTestCase_013894_2);

#define VkglTestCase_013895_1 "dEQP-GLES31.functional.texture.texture_buffer.st"
#define VkglTestCase_013895_2 "ate_query.texture_buffer_data_store_binding_float"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013895, VkglTestCase_013895_1, VkglTestCase_013895_2);

#define VkglTestCase_013896_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_013896_2 "er.state_query.texture_buffer_offset_integer"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013896, VkglTestCase_013896_1, VkglTestCase_013896_2);

#define VkglTestCase_013897_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_013897_2 "fer.state_query.texture_buffer_offset_float"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013897, VkglTestCase_013897_1, VkglTestCase_013897_2);

#define VkglTestCase_013898_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_013898_2 "fer.state_query.texture_buffer_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013898, VkglTestCase_013898_1, VkglTestCase_013898_2);

#define VkglTestCase_013899_1 "dEQP-GLES31.functional.texture.texture_bu"
#define VkglTestCase_013899_2 "ffer.state_query.texture_buffer_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013899, VkglTestCase_013899_1, VkglTestCase_013899_2);
