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

#define VkglTestCase_003265_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003265_2 "modes.teximage3d.rgb8i.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003265, VkglTestCase_003265_1, VkglTestCase_003265_2);

#define VkglTestCase_003266_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003266_2 "modes.teximage3d.rgb8i.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003266, VkglTestCase_003266_1, VkglTestCase_003266_2);

#define VkglTestCase_003267_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003267_2 "modes.teximage3d.rgb8i.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003267, VkglTestCase_003267_1, VkglTestCase_003267_2);

#define VkglTestCase_003268_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003268_2 "modes.teximage3d.rgb8i.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003268, VkglTestCase_003268_1, VkglTestCase_003268_2);

#define VkglTestCase_003269_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003269_2 "modes.teximage3d.rgb8i.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003269, VkglTestCase_003269_1, VkglTestCase_003269_2);

#define VkglTestCase_003270_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003270_2 "odes.teximage3d.rgb8i.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003270, VkglTestCase_003270_1, VkglTestCase_003270_2);

#define VkglTestCase_003271_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003271_2 "modes.teximage3d.rgb8i.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003271, VkglTestCase_003271_1, VkglTestCase_003271_2);

#define VkglTestCase_003272_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003272_2 "modes.teximage3d.rgb8i.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003272, VkglTestCase_003272_1, VkglTestCase_003272_2);

#define VkglTestCase_003273_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003273_2 "odes.teximage3d.rgb8i.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003273, VkglTestCase_003273_1, VkglTestCase_003273_2);

#define VkglTestCase_003274_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003274_2 "odes.teximage3d.rgb8i.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003274, VkglTestCase_003274_1, VkglTestCase_003274_2);
