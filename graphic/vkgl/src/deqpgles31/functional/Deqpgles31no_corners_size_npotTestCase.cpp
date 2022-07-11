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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013213_1 "dEQP-GLES31.functional.texture.gather.basic.cube"
#define VkglTestCase_013213_2 ".rgba8.no_corners.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013213, VkglTestCase_013213_1, VkglTestCase_013213_2);

#define VkglTestCase_013214_1 "dEQP-GLES31.functional.texture.gather.basic.cube."
#define VkglTestCase_013214_2 "rgba8.no_corners.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013214, VkglTestCase_013214_1, VkglTestCase_013214_2);

#define VkglTestCase_013215_1 "dEQP-GLES31.functional.texture.gather.basic.cube.rgb"
#define VkglTestCase_013215_2 "a8.no_corners.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013215, VkglTestCase_013215_1, VkglTestCase_013215_2);

#define VkglTestCase_013239_1 "dEQP-GLES31.functional.texture.gather.basic.cube."
#define VkglTestCase_013239_2 "rgba8ui.no_corners.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013239, VkglTestCase_013239_1, VkglTestCase_013239_2);

#define VkglTestCase_013240_1 "dEQP-GLES31.functional.texture.gather.basic.cube.r"
#define VkglTestCase_013240_2 "gba8ui.no_corners.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013240, VkglTestCase_013240_1, VkglTestCase_013240_2);

#define VkglTestCase_013241_1 "dEQP-GLES31.functional.texture.gather.basic.cube.rgba"
#define VkglTestCase_013241_2 "8ui.no_corners.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013241, VkglTestCase_013241_1, VkglTestCase_013241_2);

#define VkglTestCase_013260_1 "dEQP-GLES31.functional.texture.gather.basic.cube"
#define VkglTestCase_013260_2 ".rgba8i.no_corners.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013260, VkglTestCase_013260_1, VkglTestCase_013260_2);

#define VkglTestCase_013261_1 "dEQP-GLES31.functional.texture.gather.basic.cube."
#define VkglTestCase_013261_2 "rgba8i.no_corners.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013261, VkglTestCase_013261_1, VkglTestCase_013261_2);

#define VkglTestCase_013262_1 "dEQP-GLES31.functional.texture.gather.basic.cube.rgba"
#define VkglTestCase_013262_2 "8i.no_corners.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013262, VkglTestCase_013262_1, VkglTestCase_013262_2);
