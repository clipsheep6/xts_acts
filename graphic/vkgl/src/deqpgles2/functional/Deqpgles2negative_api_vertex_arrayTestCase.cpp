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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013863_1 "dEQP-GLES2.functional.negative"
#define VkglTestCase_013863_2 "_api.vertex_array.vertex_attrib"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013863, VkglTestCase_013863_1, VkglTestCase_013863_2);

#define VkglTestCase_013864_1 "dEQP-GLES2.functional.negative_"
#define VkglTestCase_013864_2 "api.vertex_array.vertex_attribv"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013864, VkglTestCase_013864_1, VkglTestCase_013864_2);

#define VkglTestCase_013865_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013865_2 ".vertex_array.vertex_attrib_pointer"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013865, VkglTestCase_013865_1, VkglTestCase_013865_2);

#define VkglTestCase_013866_1 "dEQP-GLES2.functional.negative_api.ve"
#define VkglTestCase_013866_2 "rtex_array.enable_vertex_attrib_array"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013866, VkglTestCase_013866_1, VkglTestCase_013866_2);

#define VkglTestCase_013867_1 "dEQP-GLES2.functional.negative_api.ve"
#define VkglTestCase_013867_2 "rtex_array.disable_vertex_attrib_array"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013867, VkglTestCase_013867_1, VkglTestCase_013867_2);

#define VkglTestCase_013868_1 "dEQP-GLES2.functional.negativ"
#define VkglTestCase_013868_2 "e_api.vertex_array.draw_arrays"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013868, VkglTestCase_013868_1, VkglTestCase_013868_2);

#define VkglTestCase_013869_1 "dEQP-GLES2.functional.negative_api.ve"
#define VkglTestCase_013869_2 "rtex_array.draw_arrays_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013869, VkglTestCase_013869_1, VkglTestCase_013869_2);

#define VkglTestCase_013870_1 "dEQP-GLES2.functional.negative_api.verte"
#define VkglTestCase_013870_2 "x_array.draw_arrays_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013870, VkglTestCase_013870_1, VkglTestCase_013870_2);

#define VkglTestCase_013871_1 "dEQP-GLES2.functional.negative"
#define VkglTestCase_013871_2 "_api.vertex_array.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013871, VkglTestCase_013871_1, VkglTestCase_013871_2);

#define VkglTestCase_013872_1 "dEQP-GLES2.functional.negative_api.ver"
#define VkglTestCase_013872_2 "tex_array.draw_elements_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013872, VkglTestCase_013872_1, VkglTestCase_013872_2);

#define VkglTestCase_013873_1 "dEQP-GLES2.functional.negative_api.vertex"
#define VkglTestCase_013873_2 "_array.draw_elements_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013873, VkglTestCase_013873_1, VkglTestCase_013873_2);
