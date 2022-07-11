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

#define VkglTestCase_013210_1 "dEQP-GLES31.functional.texture.gather.basic.cub"
#define VkglTestCase_013210_2 "e.rgba8.no_corners.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013210, VkglTestCase_013210_1, VkglTestCase_013210_2);

#define VkglTestCase_013211_1 "dEQP-GLES31.functional.texture.gather.basic.cube"
#define VkglTestCase_013211_2 ".rgba8.no_corners.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013211, VkglTestCase_013211_1, VkglTestCase_013211_2);

#define VkglTestCase_013212_1 "dEQP-GLES31.functional.texture.gather.basic.cube.rgb"
#define VkglTestCase_013212_2 "a8.no_corners.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013212, VkglTestCase_013212_1, VkglTestCase_013212_2);

#define VkglTestCase_013236_1 "dEQP-GLES31.functional.texture.gather.basic.cube"
#define VkglTestCase_013236_2 ".rgba8ui.no_corners.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013236, VkglTestCase_013236_1, VkglTestCase_013236_2);

#define VkglTestCase_013237_1 "dEQP-GLES31.functional.texture.gather.basic.cube."
#define VkglTestCase_013237_2 "rgba8ui.no_corners.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013237, VkglTestCase_013237_1, VkglTestCase_013237_2);

#define VkglTestCase_013238_1 "dEQP-GLES31.functional.texture.gather.basic.cube.rgba"
#define VkglTestCase_013238_2 "8ui.no_corners.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013238, VkglTestCase_013238_1, VkglTestCase_013238_2);

#define VkglTestCase_013257_1 "dEQP-GLES31.functional.texture.gather.basic.cube"
#define VkglTestCase_013257_2 ".rgba8i.no_corners.size_pot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013257, VkglTestCase_013257_1, VkglTestCase_013257_2);

#define VkglTestCase_013258_1 "dEQP-GLES31.functional.texture.gather.basic.cube."
#define VkglTestCase_013258_2 "rgba8i.no_corners.size_pot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013258, VkglTestCase_013258_1, VkglTestCase_013258_2);

#define VkglTestCase_013259_1 "dEQP-GLES31.functional.texture.gather.basic.cube.rgb"
#define VkglTestCase_013259_2 "a8i.no_corners.size_pot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013259, VkglTestCase_013259_1, VkglTestCase_013259_2);
