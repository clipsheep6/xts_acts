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
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025990_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_025990_2 "on.teximage2d_depth_pbo.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025990, VkglTestCase_025990_1, VkglTestCase_025990_2);

#define VkglTestCase_025991_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_025991_2 "on.teximage2d_depth_pbo.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025991, VkglTestCase_025991_1, VkglTestCase_025991_2);

#define VkglTestCase_025992_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_025992_2 "on.teximage2d_depth_pbo.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025992, VkglTestCase_025992_1, VkglTestCase_025992_2);

#define VkglTestCase_025993_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_025993_2 "on.teximage2d_depth_pbo.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025993, VkglTestCase_025993_1, VkglTestCase_025993_2);

#define VkglTestCase_025994_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_025994_2 "ion.teximage2d_depth_pbo.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025994, VkglTestCase_025994_1, VkglTestCase_025994_2);
