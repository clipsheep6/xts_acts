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

#define VkglTestCase_003215_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003215_2 "des.teximage3d.rgb8snorm.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003215, VkglTestCase_003215_1, VkglTestCase_003215_2);

#define VkglTestCase_003216_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003216_2 "des.teximage3d.rgb8snorm.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003216, VkglTestCase_003216_1, VkglTestCase_003216_2);

#define VkglTestCase_003217_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003217_2 "des.teximage3d.rgb8snorm.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003217, VkglTestCase_003217_1, VkglTestCase_003217_2);

#define VkglTestCase_003218_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003218_2 "des.teximage3d.rgb8snorm.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003218, VkglTestCase_003218_1, VkglTestCase_003218_2);

#define VkglTestCase_003219_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003219_2 "des.teximage3d.rgb8snorm.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003219, VkglTestCase_003219_1, VkglTestCase_003219_2);

#define VkglTestCase_003220_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003220_2 "es.teximage3d.rgb8snorm.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003220, VkglTestCase_003220_1, VkglTestCase_003220_2);

#define VkglTestCase_003221_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003221_2 "des.teximage3d.rgb8snorm.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003221, VkglTestCase_003221_1, VkglTestCase_003221_2);

#define VkglTestCase_003222_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003222_2 "des.teximage3d.rgb8snorm.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003222, VkglTestCase_003222_1, VkglTestCase_003222_2);

#define VkglTestCase_003223_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003223_2 "es.teximage3d.rgb8snorm.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003223, VkglTestCase_003223_1, VkglTestCase_003223_2);

#define VkglTestCase_003224_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003224_2 "es.teximage3d.rgb8snorm.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003224, VkglTestCase_003224_1, VkglTestCase_003224_2);
