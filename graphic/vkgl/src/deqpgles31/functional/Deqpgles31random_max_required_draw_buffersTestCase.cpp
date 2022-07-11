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
#include "../ActsDeqpgles310038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037679_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037679_2 "exed.random.max_required_draw_buffers.0"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037679, VkglTestCase_037679_1, VkglTestCase_037679_2);

#define VkglTestCase_037680_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037680_2 "exed.random.max_required_draw_buffers.1"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037680, VkglTestCase_037680_1, VkglTestCase_037680_2);

#define VkglTestCase_037681_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037681_2 "exed.random.max_required_draw_buffers.2"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037681, VkglTestCase_037681_1, VkglTestCase_037681_2);

#define VkglTestCase_037682_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037682_2 "exed.random.max_required_draw_buffers.3"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037682, VkglTestCase_037682_1, VkglTestCase_037682_2);

#define VkglTestCase_037683_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037683_2 "exed.random.max_required_draw_buffers.4"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037683, VkglTestCase_037683_1, VkglTestCase_037683_2);

#define VkglTestCase_037684_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037684_2 "exed.random.max_required_draw_buffers.5"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037684, VkglTestCase_037684_1, VkglTestCase_037684_2);

#define VkglTestCase_037685_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037685_2 "exed.random.max_required_draw_buffers.6"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037685, VkglTestCase_037685_1, VkglTestCase_037685_2);

#define VkglTestCase_037686_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037686_2 "exed.random.max_required_draw_buffers.7"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037686, VkglTestCase_037686_1, VkglTestCase_037686_2);

#define VkglTestCase_037687_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037687_2 "exed.random.max_required_draw_buffers.8"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037687, VkglTestCase_037687_1, VkglTestCase_037687_2);

#define VkglTestCase_037688_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037688_2 "exed.random.max_required_draw_buffers.9"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037688, VkglTestCase_037688_1, VkglTestCase_037688_2);

#define VkglTestCase_037689_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037689_2 "exed.random.max_required_draw_buffers.10"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037689, VkglTestCase_037689_1, VkglTestCase_037689_2);

#define VkglTestCase_037690_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037690_2 "exed.random.max_required_draw_buffers.11"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037690, VkglTestCase_037690_1, VkglTestCase_037690_2);

#define VkglTestCase_037691_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037691_2 "exed.random.max_required_draw_buffers.12"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037691, VkglTestCase_037691_1, VkglTestCase_037691_2);

#define VkglTestCase_037692_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037692_2 "exed.random.max_required_draw_buffers.13"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037692, VkglTestCase_037692_1, VkglTestCase_037692_2);

#define VkglTestCase_037693_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037693_2 "exed.random.max_required_draw_buffers.14"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037693, VkglTestCase_037693_1, VkglTestCase_037693_2);

#define VkglTestCase_037694_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037694_2 "exed.random.max_required_draw_buffers.15"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037694, VkglTestCase_037694_1, VkglTestCase_037694_2);

#define VkglTestCase_037695_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037695_2 "exed.random.max_required_draw_buffers.16"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037695, VkglTestCase_037695_1, VkglTestCase_037695_2);

#define VkglTestCase_037696_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037696_2 "exed.random.max_required_draw_buffers.17"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037696, VkglTestCase_037696_1, VkglTestCase_037696_2);

#define VkglTestCase_037697_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037697_2 "exed.random.max_required_draw_buffers.18"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037697, VkglTestCase_037697_1, VkglTestCase_037697_2);

#define VkglTestCase_037698_1 "dEQP-GLES31.functional.draw_buffers_ind"
#define VkglTestCase_037698_2 "exed.random.max_required_draw_buffers.19"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037698, VkglTestCase_037698_1, VkglTestCase_037698_2);
