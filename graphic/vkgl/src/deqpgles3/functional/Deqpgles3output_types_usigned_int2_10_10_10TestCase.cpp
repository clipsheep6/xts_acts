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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033343_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_033343_2 "tput_types.usigned_int2_10_10_10.components4_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033343, VkglTestCase_033343_1, VkglTestCase_033343_2);

#define VkglTestCase_033344_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_033344_2 "put_types.usigned_int2_10_10_10.components4_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033344, VkglTestCase_033344_1, VkglTestCase_033344_2);

#define VkglTestCase_033345_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_033345_2 "tput_types.usigned_int2_10_10_10.components4_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033345, VkglTestCase_033345_1, VkglTestCase_033345_2);

#define VkglTestCase_033346_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_033346_2 "put_types.usigned_int2_10_10_10.components4_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033346, VkglTestCase_033346_1, VkglTestCase_033346_2);

#define VkglTestCase_033347_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute.ou"
#define VkglTestCase_033347_2 "tput_types.usigned_int2_10_10_10.components4_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033347, VkglTestCase_033347_1, VkglTestCase_033347_2);

#define VkglTestCase_033348_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute.out"
#define VkglTestCase_033348_2 "put_types.usigned_int2_10_10_10.components4_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033348, VkglTestCase_033348_1, VkglTestCase_033348_2);
