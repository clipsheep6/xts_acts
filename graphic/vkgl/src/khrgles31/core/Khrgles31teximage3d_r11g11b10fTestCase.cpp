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
#include "../ActsKhrgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003225_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003225_2 "des.teximage3d.r11g11b10f.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003225, VkglTestCase_003225_1, VkglTestCase_003225_2);

#define VkglTestCase_003226_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003226_2 "des.teximage3d.r11g11b10f.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003226, VkglTestCase_003226_1, VkglTestCase_003226_2);

#define VkglTestCase_003227_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003227_2 "es.teximage3d.r11g11b10f.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003227, VkglTestCase_003227_1, VkglTestCase_003227_2);

#define VkglTestCase_003228_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003228_2 "des.teximage3d.r11g11b10f.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003228, VkglTestCase_003228_1, VkglTestCase_003228_2);

#define VkglTestCase_003229_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003229_2 "es.teximage3d.r11g11b10f.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003229, VkglTestCase_003229_1, VkglTestCase_003229_2);

#define VkglTestCase_003230_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003230_2 "es.teximage3d.r11g11b10f.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003230, VkglTestCase_003230_1, VkglTestCase_003230_2);

#define VkglTestCase_003231_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003231_2 "des.teximage3d.r11g11b10f.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003231, VkglTestCase_003231_1, VkglTestCase_003231_2);

#define VkglTestCase_003232_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003232_2 "es.teximage3d.r11g11b10f.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003232, VkglTestCase_003232_1, VkglTestCase_003232_2);

#define VkglTestCase_003233_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003233_2 "es.teximage3d.r11g11b10f.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003233, VkglTestCase_003233_1, VkglTestCase_003233_2);

#define VkglTestCase_003234_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003234_2 "es.teximage3d.r11g11b10f.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003234, VkglTestCase_003234_1, VkglTestCase_003234_2);
