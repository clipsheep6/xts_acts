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

#define VkglTestCase_002863_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002863_2 "emodes.teximage2d.rgb16f.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002863, VkglTestCase_002863_1, VkglTestCase_002863_2);

#define VkglTestCase_002864_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002864_2 "emodes.teximage2d.rgb16f.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002864, VkglTestCase_002864_1, VkglTestCase_002864_2);

#define VkglTestCase_002865_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002865_2 "modes.teximage2d.rgb16f.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002865, VkglTestCase_002865_1, VkglTestCase_002865_2);

#define VkglTestCase_002866_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002866_2 "emodes.teximage2d.rgb16f.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002866, VkglTestCase_002866_1, VkglTestCase_002866_2);

#define VkglTestCase_002867_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002867_2 "modes.teximage2d.rgb16f.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002867, VkglTestCase_002867_1, VkglTestCase_002867_2);

#define VkglTestCase_002868_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002868_2 "modes.teximage2d.rgb16f.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002868, VkglTestCase_002868_1, VkglTestCase_002868_2);
