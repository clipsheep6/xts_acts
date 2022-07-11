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
#include "../ActsDeqpgles30032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031403_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031403_2 "o.completeness.size.zero"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031403, VkglTestCase_031403_1, VkglTestCase_031403_2);

#define VkglTestCase_031404_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031404_2 "completeness.size.distinct"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031404, VkglTestCase_031404_1, VkglTestCase_031404_2);
