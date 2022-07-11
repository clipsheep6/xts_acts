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

#define VkglTestCase_044263_1 "dEQP-GLES3.functional.default_ve"
#define VkglTestCase_044263_2 "rtex_attrib.vec3.vertex_attrib_1f"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044263, VkglTestCase_044263_1, VkglTestCase_044263_2);

#define VkglTestCase_044264_1 "dEQP-GLES3.functional.default_ve"
#define VkglTestCase_044264_2 "rtex_attrib.vec3.vertex_attrib_4f"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044264, VkglTestCase_044264_1, VkglTestCase_044264_2);

#define VkglTestCase_044265_1 "dEQP-GLES3.functional.default_ver"
#define VkglTestCase_044265_2 "tex_attrib.vec3.vertex_attrib_1fv"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044265, VkglTestCase_044265_1, VkglTestCase_044265_2);

#define VkglTestCase_044266_1 "dEQP-GLES3.functional.default_ver"
#define VkglTestCase_044266_2 "tex_attrib.vec3.vertex_attrib_4fv"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044266, VkglTestCase_044266_1, VkglTestCase_044266_2);
