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

#define VkglTestCase_013593_1 "dEQP-GLES2.functional.shader_api."
#define VkglTestCase_013593_2 "compile_link.compile_vertex_shader"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013593, VkglTestCase_013593_1, VkglTestCase_013593_2);

#define VkglTestCase_013594_1 "dEQP-GLES2.functional.shader_api.c"
#define VkglTestCase_013594_2 "ompile_link.compile_fragment_shader"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013594, VkglTestCase_013594_1, VkglTestCase_013594_2);

#define VkglTestCase_013595_1 "dEQP-GLES2.functional.shader_api."
#define VkglTestCase_013595_2 "compile_link.link_vertex_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013595, VkglTestCase_013595_1, VkglTestCase_013595_2);
