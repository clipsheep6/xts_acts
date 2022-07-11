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
#include "../ActsDeqpgles30042TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_041869_1 "dEQP-GLES3.functional.shader_api."
#define VkglTestCase_041869_2 "compile_link.compile_vertex_shader"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041869, VkglTestCase_041869_1, VkglTestCase_041869_2);

#define VkglTestCase_041870_1 "dEQP-GLES3.functional.shader_api.c"
#define VkglTestCase_041870_2 "ompile_link.compile_fragment_shader"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041870, VkglTestCase_041870_1, VkglTestCase_041870_2);

#define VkglTestCase_041871_1 "dEQP-GLES3.functional.shader_api."
#define VkglTestCase_041871_2 "compile_link.link_vertex_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041871, VkglTestCase_041871_1, VkglTestCase_041871_2);
