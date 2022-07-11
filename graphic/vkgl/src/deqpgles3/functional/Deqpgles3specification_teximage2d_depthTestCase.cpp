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

#define VkglTestCase_025985_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_025985_2 "tion.teximage2d_depth.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025985, VkglTestCase_025985_1, VkglTestCase_025985_2);

#define VkglTestCase_025986_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_025986_2 "tion.teximage2d_depth.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025986, VkglTestCase_025986_1, VkglTestCase_025986_2);

#define VkglTestCase_025987_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_025987_2 "tion.teximage2d_depth.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025987, VkglTestCase_025987_1, VkglTestCase_025987_2);

#define VkglTestCase_025988_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_025988_2 "tion.teximage2d_depth.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025988, VkglTestCase_025988_1, VkglTestCase_025988_2);

#define VkglTestCase_025989_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025989_2 "ation.teximage2d_depth.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025989, VkglTestCase_025989_1, VkglTestCase_025989_2);
