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

#define VkglTestCase_002719_1 "KHR-GLES31.core.pixelstor"
#define VkglTestCase_002719_2 "agemodes.teximage2d.r8.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002719, VkglTestCase_002719_1, VkglTestCase_002719_2);

#define VkglTestCase_002720_1 "KHR-GLES31.core.pixelstor"
#define VkglTestCase_002720_2 "agemodes.teximage2d.r8.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002720, VkglTestCase_002720_1, VkglTestCase_002720_2);

#define VkglTestCase_002721_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002721_2 "gemodes.teximage2d.r8.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002721, VkglTestCase_002721_1, VkglTestCase_002721_2);

#define VkglTestCase_002722_1 "KHR-GLES31.core.pixelstor"
#define VkglTestCase_002722_2 "agemodes.teximage2d.r8.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002722, VkglTestCase_002722_1, VkglTestCase_002722_2);

#define VkglTestCase_002723_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002723_2 "gemodes.teximage2d.r8.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002723, VkglTestCase_002723_1, VkglTestCase_002723_2);

#define VkglTestCase_002724_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002724_2 "gemodes.teximage2d.r8.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002724, VkglTestCase_002724_1, VkglTestCase_002724_2);
