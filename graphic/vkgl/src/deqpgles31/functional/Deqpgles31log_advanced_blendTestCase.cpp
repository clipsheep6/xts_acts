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

#define VkglTestCase_019313_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019313_2 "e.log.advanced_blend.blend_qualifier_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019313, VkglTestCase_019313_1, VkglTestCase_019313_2);

#define VkglTestCase_019314_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019314_2 "log.advanced_blend.attachment_advanced_equation"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019314, VkglTestCase_019314_1, VkglTestCase_019314_2);
