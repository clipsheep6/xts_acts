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
#include "../ActsDeqpgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001547_1 "dEQP-GLES3.functional.shaders.lin"
#define VkglTestCase_001547_2 "kage.varying.interpolation.smooth"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001547, VkglTestCase_001547_1, VkglTestCase_001547_2);

#define VkglTestCase_001548_1 "dEQP-GLES3.functional.shaders.link"
#define VkglTestCase_001548_2 "age.varying.interpolation.centroid"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001548, VkglTestCase_001548_1, VkglTestCase_001548_2);

#define VkglTestCase_001549_1 "dEQP-GLES3.functional.shaders.li"
#define VkglTestCase_001549_2 "nkage.varying.interpolation.flat"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001549, VkglTestCase_001549_1, VkglTestCase_001549_2);
