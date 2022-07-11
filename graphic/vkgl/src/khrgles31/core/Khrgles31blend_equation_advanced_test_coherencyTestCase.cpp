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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001811_1 "KHR-GLES31.core.blend_equation_adv"
#define VkglTestCase_001811_2 "anced.test_coherency.mixedSequence"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001811, VkglTestCase_001811_1, VkglTestCase_001811_2);

#define VkglTestCase_001812_1 "KHR-GLES31.core.blend_equation_adva"
#define VkglTestCase_001812_2 "nced.test_coherency.multiplySequence"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001812, VkglTestCase_001812_1, VkglTestCase_001812_2);
