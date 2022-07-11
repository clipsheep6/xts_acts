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

#define VkglTestCase_002869_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002869_2 "emodes.teximage2d.rgb32f.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002869, VkglTestCase_002869_1, VkglTestCase_002869_2);

#define VkglTestCase_002870_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002870_2 "emodes.teximage2d.rgb32f.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002870, VkglTestCase_002870_1, VkglTestCase_002870_2);

#define VkglTestCase_002871_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002871_2 "modes.teximage2d.rgb32f.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002871, VkglTestCase_002871_1, VkglTestCase_002871_2);

#define VkglTestCase_002872_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002872_2 "emodes.teximage2d.rgb32f.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002872, VkglTestCase_002872_1, VkglTestCase_002872_2);

#define VkglTestCase_002873_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002873_2 "modes.teximage2d.rgb32f.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002873, VkglTestCase_002873_1, VkglTestCase_002873_2);

#define VkglTestCase_002874_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002874_2 "modes.teximage2d.rgb32f.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002874, VkglTestCase_002874_1, VkglTestCase_002874_2);
