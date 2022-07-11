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

#define VkglTestCase_001778_1 "KHR-GLES31.core.blend_equation_advanced.ext"
#define VkglTestCase_001778_2 "ension_directive.extension_directive_disable"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001778, VkglTestCase_001778_1, VkglTestCase_001778_2);

#define VkglTestCase_001779_1 "KHR-GLES31.core.blend_equation_advanced.ext"
#define VkglTestCase_001779_2 "ension_directive.extension_directive_enable"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001779, VkglTestCase_001779_1, VkglTestCase_001779_2);

#define VkglTestCase_001780_1 "KHR-GLES31.core.blend_equation_advanced.ex"
#define VkglTestCase_001780_2 "tension_directive.extension_directive_warn"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001780, VkglTestCase_001780_1, VkglTestCase_001780_2);
