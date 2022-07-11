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
#include "../ActsDeqpgles30027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026271_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026271_2 "on.texsubimage2d_depth.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026271, VkglTestCase_026271_1, VkglTestCase_026271_2);

#define VkglTestCase_026272_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026272_2 "ion.texsubimage2d_depth.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026272, VkglTestCase_026272_1, VkglTestCase_026272_2);

#define VkglTestCase_026273_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026273_2 "ion.texsubimage2d_depth.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026273, VkglTestCase_026273_1, VkglTestCase_026273_2);

#define VkglTestCase_026274_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026274_2 "ion.texsubimage2d_depth.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026274, VkglTestCase_026274_1, VkglTestCase_026274_2);

#define VkglTestCase_026275_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026275_2 "ion.texsubimage2d_depth.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026275, VkglTestCase_026275_1, VkglTestCase_026275_2);
