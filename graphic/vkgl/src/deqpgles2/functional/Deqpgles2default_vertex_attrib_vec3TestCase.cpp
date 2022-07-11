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
#include "../ActsDeqpgles20017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016429_1 "dEQP-GLES2.functional.default_ve"
#define VkglTestCase_016429_2 "rtex_attrib.vec3.vertex_attrib_1f"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016429, VkglTestCase_016429_1, VkglTestCase_016429_2);

#define VkglTestCase_016430_1 "dEQP-GLES2.functional.default_ve"
#define VkglTestCase_016430_2 "rtex_attrib.vec3.vertex_attrib_4f"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016430, VkglTestCase_016430_1, VkglTestCase_016430_2);

#define VkglTestCase_016431_1 "dEQP-GLES2.functional.default_ver"
#define VkglTestCase_016431_2 "tex_attrib.vec3.vertex_attrib_1fv"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016431, VkglTestCase_016431_1, VkglTestCase_016431_2);

#define VkglTestCase_016432_1 "dEQP-GLES2.functional.default_ver"
#define VkglTestCase_016432_2 "tex_attrib.vec3.vertex_attrib_4fv"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016432, VkglTestCase_016432_1, VkglTestCase_016432_2);
