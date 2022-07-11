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

#define VkglTestCase_002881_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002881_2 "emodes.teximage2d.rgb8i.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002881, VkglTestCase_002881_1, VkglTestCase_002881_2);

#define VkglTestCase_002882_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002882_2 "emodes.teximage2d.rgb8i.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002882, VkglTestCase_002882_1, VkglTestCase_002882_2);

#define VkglTestCase_002883_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002883_2 "emodes.teximage2d.rgb8i.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002883, VkglTestCase_002883_1, VkglTestCase_002883_2);

#define VkglTestCase_002884_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002884_2 "emodes.teximage2d.rgb8i.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002884, VkglTestCase_002884_1, VkglTestCase_002884_2);

#define VkglTestCase_002885_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002885_2 "emodes.teximage2d.rgb8i.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002885, VkglTestCase_002885_1, VkglTestCase_002885_2);

#define VkglTestCase_002886_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002886_2 "modes.teximage2d.rgb8i.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002886, VkglTestCase_002886_1, VkglTestCase_002886_2);
