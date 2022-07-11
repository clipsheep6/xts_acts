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

#define VkglTestCase_003255_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003255_2 "modes.teximage3d.rgb8ui.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003255, VkglTestCase_003255_1, VkglTestCase_003255_2);

#define VkglTestCase_003256_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003256_2 "modes.teximage3d.rgb8ui.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003256, VkglTestCase_003256_1, VkglTestCase_003256_2);

#define VkglTestCase_003257_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003257_2 "odes.teximage3d.rgb8ui.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003257, VkglTestCase_003257_1, VkglTestCase_003257_2);

#define VkglTestCase_003258_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003258_2 "modes.teximage3d.rgb8ui.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003258, VkglTestCase_003258_1, VkglTestCase_003258_2);

#define VkglTestCase_003259_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003259_2 "odes.teximage3d.rgb8ui.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003259, VkglTestCase_003259_1, VkglTestCase_003259_2);

#define VkglTestCase_003260_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003260_2 "odes.teximage3d.rgb8ui.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003260, VkglTestCase_003260_1, VkglTestCase_003260_2);

#define VkglTestCase_003261_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003261_2 "modes.teximage3d.rgb8ui.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003261, VkglTestCase_003261_1, VkglTestCase_003261_2);

#define VkglTestCase_003262_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003262_2 "odes.teximage3d.rgb8ui.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003262, VkglTestCase_003262_1, VkglTestCase_003262_2);

#define VkglTestCase_003263_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003263_2 "odes.teximage3d.rgb8ui.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003263, VkglTestCase_003263_1, VkglTestCase_003263_2);

#define VkglTestCase_003264_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003264_2 "odes.teximage3d.rgb8ui.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003264, VkglTestCase_003264_1, VkglTestCase_003264_2);
