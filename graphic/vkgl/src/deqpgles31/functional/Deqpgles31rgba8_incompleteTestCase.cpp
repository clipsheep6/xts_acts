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

#define VkglTestCase_013085_1 "dEQP-GLES31.functional.texture.gather.ba"
#define VkglTestCase_013085_2 "sic.2d.rgba8.incomplete.mipmap_incomplete"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013085, VkglTestCase_013085_1, VkglTestCase_013085_2);

#define VkglTestCase_013154_1 "dEQP-GLES31.functional.texture.gather.basic"
#define VkglTestCase_013154_2 ".2d_array.rgba8.incomplete.mipmap_incomplete"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013154, VkglTestCase_013154_1, VkglTestCase_013154_2);

#define VkglTestCase_013229_1 "dEQP-GLES31.functional.texture.gather.bas"
#define VkglTestCase_013229_2 "ic.cube.rgba8.incomplete.mipmap_incomplete"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013229, VkglTestCase_013229_1, VkglTestCase_013229_2);

#define VkglTestCase_013363_1 "dEQP-GLES31.functional.texture.gather.offset.impleme"
#define VkglTestCase_013363_2 "ntation_offset.2d.rgba8.incomplete.mipmap_incomplete"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013363, VkglTestCase_013363_1, VkglTestCase_013363_2);

#define VkglTestCase_013432_1 "dEQP-GLES31.functional.texture.gather.offset.implementa"
#define VkglTestCase_013432_2 "tion_offset.2d_array.rgba8.incomplete.mipmap_incomplete"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013432, VkglTestCase_013432_1, VkglTestCase_013432_2);

#define VkglTestCase_013561_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.imp"
#define VkglTestCase_013561_2 "lementation_offset.2d.rgba8.incomplete.mipmap_incomplete"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013561, VkglTestCase_013561_1, VkglTestCase_013561_2);

#define VkglTestCase_013630_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implem"
#define VkglTestCase_013630_2 "entation_offset.2d_array.rgba8.incomplete.mipmap_incomplete"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013630, VkglTestCase_013630_1, VkglTestCase_013630_2);

#define VkglTestCase_013759_1 "dEQP-GLES31.functional.texture.gather.offsets.implem"
#define VkglTestCase_013759_2 "entation_offset.2d.rgba8.incomplete.mipmap_incomplete"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013759, VkglTestCase_013759_1, VkglTestCase_013759_2);

#define VkglTestCase_013828_1 "dEQP-GLES31.functional.texture.gather.offsets.implement"
#define VkglTestCase_013828_2 "ation_offset.2d_array.rgba8.incomplete.mipmap_incomplete"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013828, VkglTestCase_013828_1, VkglTestCase_013828_2);
