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
#include "../ActsDeqpgles30045TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_044295_1 "dEQP-GLES3.functional.default_ver"
#define VkglTestCase_044295_2 "tex_attrib.mat3x4.vertex_attrib_1f"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044295, VkglTestCase_044295_1, VkglTestCase_044295_2);

#define VkglTestCase_044296_1 "dEQP-GLES3.functional.default_ver"
#define VkglTestCase_044296_2 "tex_attrib.mat3x4.vertex_attrib_4f"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044296, VkglTestCase_044296_1, VkglTestCase_044296_2);

#define VkglTestCase_044297_1 "dEQP-GLES3.functional.default_vert"
#define VkglTestCase_044297_2 "ex_attrib.mat3x4.vertex_attrib_1fv"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044297, VkglTestCase_044297_1, VkglTestCase_044297_2);

#define VkglTestCase_044298_1 "dEQP-GLES3.functional.default_vert"
#define VkglTestCase_044298_2 "ex_attrib.mat3x4.vertex_attrib_4fv"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044298, VkglTestCase_044298_1, VkglTestCase_044298_2);
