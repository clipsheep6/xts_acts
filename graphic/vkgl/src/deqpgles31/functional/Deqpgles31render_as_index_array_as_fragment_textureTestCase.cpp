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

#define VkglTestCase_013999_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_013999_2 "r.as_index_array_as_fragment_texture.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013999, VkglTestCase_013999_1, VkglTestCase_013999_2);

#define VkglTestCase_014000_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_014000_2 "r.as_index_array_as_fragment_texture.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_014000, VkglTestCase_014000_1, VkglTestCase_014000_2);

#define VkglTestCase_014001_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_014001_2 ".as_index_array_as_fragment_texture.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_014001, VkglTestCase_014001_1, VkglTestCase_014001_2);

#define VkglTestCase_014002_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_014002_2 ".as_index_array_as_fragment_texture.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_014002, VkglTestCase_014002_1, VkglTestCase_014002_2);

#define VkglTestCase_014003_1 "dEQP-GLES31.functional.texture.texture_buffer.render."
#define VkglTestCase_014003_2 "as_index_array_as_fragment_texture.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_014003, VkglTestCase_014003_1, VkglTestCase_014003_2);

#define VkglTestCase_014004_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_014004_2 "r.as_index_array_as_fragment_texture.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_014004, VkglTestCase_014004_1, VkglTestCase_014004_2);

#define VkglTestCase_014005_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_014005_2 "r.as_index_array_as_fragment_texture.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_014005, VkglTestCase_014005_1, VkglTestCase_014005_2);

#define VkglTestCase_014006_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_014006_2 ".as_index_array_as_fragment_texture.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_014006, VkglTestCase_014006_1, VkglTestCase_014006_2);

#define VkglTestCase_014007_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_014007_2 ".as_index_array_as_fragment_texture.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_014007, VkglTestCase_014007_1, VkglTestCase_014007_2);

#define VkglTestCase_014008_1 "dEQP-GLES31.functional.texture.texture_buffer.render."
#define VkglTestCase_014008_2 "as_index_array_as_fragment_texture.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_014008, VkglTestCase_014008_1, VkglTestCase_014008_2);

#define VkglTestCase_014009_1 "dEQP-GLES31.functional.texture.texture_buffer.render."
#define VkglTestCase_014009_2 "as_index_array_as_fragment_texture.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_014009, VkglTestCase_014009_1, VkglTestCase_014009_2);
