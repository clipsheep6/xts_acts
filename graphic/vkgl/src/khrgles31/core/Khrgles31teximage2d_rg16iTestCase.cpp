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

#define VkglTestCase_002821_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002821_2 "emodes.teximage2d.rg16i.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002821, VkglTestCase_002821_1, VkglTestCase_002821_2);

#define VkglTestCase_002822_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002822_2 "emodes.teximage2d.rg16i.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002822, VkglTestCase_002822_1, VkglTestCase_002822_2);

#define VkglTestCase_002823_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002823_2 "emodes.teximage2d.rg16i.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002823, VkglTestCase_002823_1, VkglTestCase_002823_2);

#define VkglTestCase_002824_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002824_2 "emodes.teximage2d.rg16i.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002824, VkglTestCase_002824_1, VkglTestCase_002824_2);

#define VkglTestCase_002825_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002825_2 "emodes.teximage2d.rg16i.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002825, VkglTestCase_002825_1, VkglTestCase_002825_2);

#define VkglTestCase_002826_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002826_2 "modes.teximage2d.rg16i.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002826, VkglTestCase_002826_1, VkglTestCase_002826_2);
