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
#include "../ActsDeqpgles20016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015655_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015655_2 ".fbo.framebuffer_attachment_object"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015655, VkglTestCase_015655_1, VkglTestCase_015655_2);

#define VkglTestCase_015656_1 "dEQP-GLES2.functional.state_query.fbo"
#define VkglTestCase_015656_2 ".framebuffer_attachment_texture_level"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015656, VkglTestCase_015656_1, VkglTestCase_015656_2);

#define VkglTestCase_015657_1 "dEQP-GLES2.functional.state_query.fbo.fra"
#define VkglTestCase_015657_2 "mebuffer_attachment_texture_cube_map_face"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015657, VkglTestCase_015657_1, VkglTestCase_015657_2);
