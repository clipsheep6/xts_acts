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

#define VkglTestCase_003285_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003285_2 "modes.teximage3d.rgb16i.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003285, VkglTestCase_003285_1, VkglTestCase_003285_2);

#define VkglTestCase_003286_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003286_2 "modes.teximage3d.rgb16i.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003286, VkglTestCase_003286_1, VkglTestCase_003286_2);

#define VkglTestCase_003287_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003287_2 "odes.teximage3d.rgb16i.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003287, VkglTestCase_003287_1, VkglTestCase_003287_2);

#define VkglTestCase_003288_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003288_2 "modes.teximage3d.rgb16i.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003288, VkglTestCase_003288_1, VkglTestCase_003288_2);

#define VkglTestCase_003289_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003289_2 "odes.teximage3d.rgb16i.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003289, VkglTestCase_003289_1, VkglTestCase_003289_2);

#define VkglTestCase_003290_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003290_2 "odes.teximage3d.rgb16i.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003290, VkglTestCase_003290_1, VkglTestCase_003290_2);

#define VkglTestCase_003291_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003291_2 "modes.teximage3d.rgb16i.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003291, VkglTestCase_003291_1, VkglTestCase_003291_2);

#define VkglTestCase_003292_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003292_2 "odes.teximage3d.rgb16i.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003292, VkglTestCase_003292_1, VkglTestCase_003292_2);

#define VkglTestCase_003293_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003293_2 "odes.teximage3d.rgb16i.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003293, VkglTestCase_003293_1, VkglTestCase_003293_2);

#define VkglTestCase_003294_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003294_2 "odes.teximage3d.rgb16i.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003294, VkglTestCase_003294_1, VkglTestCase_003294_2);
