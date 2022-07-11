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

#define VkglTestCase_044311_1 "dEQP-GLES3.functional.default_ver"
#define VkglTestCase_044311_2 "tex_attrib.mat4x3.vertex_attrib_1f"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044311, VkglTestCase_044311_1, VkglTestCase_044311_2);

#define VkglTestCase_044312_1 "dEQP-GLES3.functional.default_ver"
#define VkglTestCase_044312_2 "tex_attrib.mat4x3.vertex_attrib_4f"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044312, VkglTestCase_044312_1, VkglTestCase_044312_2);

#define VkglTestCase_044313_1 "dEQP-GLES3.functional.default_vert"
#define VkglTestCase_044313_2 "ex_attrib.mat4x3.vertex_attrib_1fv"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044313, VkglTestCase_044313_1, VkglTestCase_044313_2);

#define VkglTestCase_044314_1 "dEQP-GLES3.functional.default_vert"
#define VkglTestCase_044314_2 "ex_attrib.mat4x3.vertex_attrib_4fv"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044314, VkglTestCase_044314_1, VkglTestCase_044314_2);
