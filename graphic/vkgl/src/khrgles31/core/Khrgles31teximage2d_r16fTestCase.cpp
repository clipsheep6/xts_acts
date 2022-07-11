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

#define VkglTestCase_002731_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002731_2 "gemodes.teximage2d.r16f.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002731, VkglTestCase_002731_1, VkglTestCase_002731_2);

#define VkglTestCase_002732_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002732_2 "gemodes.teximage2d.r16f.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002732, VkglTestCase_002732_1, VkglTestCase_002732_2);

#define VkglTestCase_002733_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002733_2 "emodes.teximage2d.r16f.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002733, VkglTestCase_002733_1, VkglTestCase_002733_2);

#define VkglTestCase_002734_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002734_2 "gemodes.teximage2d.r16f.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002734, VkglTestCase_002734_1, VkglTestCase_002734_2);

#define VkglTestCase_002735_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002735_2 "emodes.teximage2d.r16f.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002735, VkglTestCase_002735_1, VkglTestCase_002735_2);

#define VkglTestCase_002736_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002736_2 "emodes.teximage2d.r16f.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002736, VkglTestCase_002736_1, VkglTestCase_002736_2);
