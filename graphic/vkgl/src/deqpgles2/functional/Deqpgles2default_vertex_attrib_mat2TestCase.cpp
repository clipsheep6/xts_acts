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

#define VkglTestCase_016441_1 "dEQP-GLES2.functional.default_ve"
#define VkglTestCase_016441_2 "rtex_attrib.mat2.vertex_attrib_1f"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016441, VkglTestCase_016441_1, VkglTestCase_016441_2);

#define VkglTestCase_016442_1 "dEQP-GLES2.functional.default_ve"
#define VkglTestCase_016442_2 "rtex_attrib.mat2.vertex_attrib_4f"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016442, VkglTestCase_016442_1, VkglTestCase_016442_2);

#define VkglTestCase_016443_1 "dEQP-GLES2.functional.default_ver"
#define VkglTestCase_016443_2 "tex_attrib.mat2.vertex_attrib_1fv"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016443, VkglTestCase_016443_1, VkglTestCase_016443_2);

#define VkglTestCase_016444_1 "dEQP-GLES2.functional.default_ver"
#define VkglTestCase_016444_2 "tex_attrib.mat2.vertex_attrib_4fv"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016444, VkglTestCase_016444_1, VkglTestCase_016444_2);
