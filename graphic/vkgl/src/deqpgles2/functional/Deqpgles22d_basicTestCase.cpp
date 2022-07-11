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
#include "../ActsDeqpgles20011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010603_1 "dEQP-GLES2.functional.texture.mip"
#define VkglTestCase_010603_2 "map.2d.basic.nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010603, VkglTestCase_010603_1, VkglTestCase_010603_2);

#define VkglTestCase_010604_1 "dEQP-GLES2.functional.texture.mipmap.2"
#define VkglTestCase_010604_2 "d.basic.nearest_linear_clamp_non_square"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010604, VkglTestCase_010604_1, VkglTestCase_010604_2);

#define VkglTestCase_010605_1 "dEQP-GLES2.functional.texture.mip"
#define VkglTestCase_010605_2 "map.2d.basic.nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010605, VkglTestCase_010605_1, VkglTestCase_010605_2);

#define VkglTestCase_010606_1 "dEQP-GLES2.functional.texture.mipmap.2d"
#define VkglTestCase_010606_2 ".basic.nearest_linear_repeat_non_square"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010606, VkglTestCase_010606_1, VkglTestCase_010606_2);

#define VkglTestCase_010607_1 "dEQP-GLES2.functional.texture.mip"
#define VkglTestCase_010607_2 "map.2d.basic.nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010607, VkglTestCase_010607_1, VkglTestCase_010607_2);

#define VkglTestCase_010608_1 "dEQP-GLES2.functional.texture.mipmap.2d"
#define VkglTestCase_010608_2 ".basic.nearest_linear_mirror_non_square"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010608, VkglTestCase_010608_1, VkglTestCase_010608_2);

#define VkglTestCase_010609_1 "dEQP-GLES2.functional.texture.mip"
#define VkglTestCase_010609_2 "map.2d.basic.linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010609, VkglTestCase_010609_1, VkglTestCase_010609_2);

#define VkglTestCase_010610_1 "dEQP-GLES2.functional.texture.mipmap.2"
#define VkglTestCase_010610_2 "d.basic.linear_linear_repeat_non_square"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010610, VkglTestCase_010610_1, VkglTestCase_010610_2);
