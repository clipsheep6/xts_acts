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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019966_1 "dEQP-GLES31.functiona"
#define VkglTestCase_019966_2 "l.fbo.color.tex2d.r16"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019966, VkglTestCase_019966_1, VkglTestCase_019966_2);

#define VkglTestCase_019967_1 "dEQP-GLES31.functiona"
#define VkglTestCase_019967_2 "l.fbo.color.tex2d.rg16"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019967, VkglTestCase_019967_1, VkglTestCase_019967_2);

#define VkglTestCase_019968_1 "dEQP-GLES31.functional"
#define VkglTestCase_019968_2 ".fbo.color.tex2d.rgba16"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019968, VkglTestCase_019968_1, VkglTestCase_019968_2);
