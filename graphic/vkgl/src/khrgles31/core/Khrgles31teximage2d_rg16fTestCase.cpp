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
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002791_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002791_2 "emodes.teximage2d.rg16f.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002791, VkglTestCase_002791_1, VkglTestCase_002791_2);

#define VkglTestCase_002792_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002792_2 "emodes.teximage2d.rg16f.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002792, VkglTestCase_002792_1, VkglTestCase_002792_2);

#define VkglTestCase_002793_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002793_2 "emodes.teximage2d.rg16f.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002793, VkglTestCase_002793_1, VkglTestCase_002793_2);

#define VkglTestCase_002794_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002794_2 "emodes.teximage2d.rg16f.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002794, VkglTestCase_002794_1, VkglTestCase_002794_2);

#define VkglTestCase_002795_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002795_2 "emodes.teximage2d.rg16f.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002795, VkglTestCase_002795_1, VkglTestCase_002795_2);

#define VkglTestCase_002796_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002796_2 "modes.teximage2d.rg16f.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002796, VkglTestCase_002796_1, VkglTestCase_002796_2);
