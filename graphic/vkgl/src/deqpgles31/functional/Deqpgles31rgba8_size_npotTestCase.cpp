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

#define VkglTestCase_013069_1 "dEQP-GLES31.functional.texture.gather.bas"
#define VkglTestCase_013069_2 "ic.2d.rgba8.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013069, VkglTestCase_013069_1, VkglTestCase_013069_2);

#define VkglTestCase_013070_1 "dEQP-GLES31.functional.texture.gather.basi"
#define VkglTestCase_013070_2 "c.2d.rgba8.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013070, VkglTestCase_013070_1, VkglTestCase_013070_2);

#define VkglTestCase_013071_1 "dEQP-GLES31.functional.texture.gather.basic.2d"
#define VkglTestCase_013071_2 ".rgba8.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013071, VkglTestCase_013071_1, VkglTestCase_013071_2);

#define VkglTestCase_013138_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013138_2 "2d_array.rgba8.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013138, VkglTestCase_013138_1, VkglTestCase_013138_2);

#define VkglTestCase_013139_1 "dEQP-GLES31.functional.texture.gather.basic.2"
#define VkglTestCase_013139_2 "d_array.rgba8.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013139, VkglTestCase_013139_1, VkglTestCase_013139_2);

#define VkglTestCase_013140_1 "dEQP-GLES31.functional.texture.gather.basic.2d_ar"
#define VkglTestCase_013140_2 "ray.rgba8.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013140, VkglTestCase_013140_1, VkglTestCase_013140_2);

#define VkglTestCase_013207_1 "dEQP-GLES31.functional.texture.gather.basi"
#define VkglTestCase_013207_2 "c.cube.rgba8.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013207, VkglTestCase_013207_1, VkglTestCase_013207_2);

#define VkglTestCase_013208_1 "dEQP-GLES31.functional.texture.gather.basic"
#define VkglTestCase_013208_2 ".cube.rgba8.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013208, VkglTestCase_013208_1, VkglTestCase_013208_2);

#define VkglTestCase_013209_1 "dEQP-GLES31.functional.texture.gather.basic.cub"
#define VkglTestCase_013209_2 "e.rgba8.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013209, VkglTestCase_013209_1, VkglTestCase_013209_2);

#define VkglTestCase_013287_1 "dEQP-GLES31.functional.texture.gather.offset.min_req"
#define VkglTestCase_013287_2 "uired_offset.2d.rgba8.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013287, VkglTestCase_013287_1, VkglTestCase_013287_2);

#define VkglTestCase_013288_1 "dEQP-GLES31.functional.texture.gather.offset.min_requ"
#define VkglTestCase_013288_2 "ired_offset.2d.rgba8.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013288, VkglTestCase_013288_1, VkglTestCase_013288_2);

#define VkglTestCase_013289_1 "dEQP-GLES31.functional.texture.gather.offset.min_require"
#define VkglTestCase_013289_2 "d_offset.2d.rgba8.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013289, VkglTestCase_013289_1, VkglTestCase_013289_2);

#define VkglTestCase_013317_1 "dEQP-GLES31.functional.texture.gather.offset.min_requir"
#define VkglTestCase_013317_2 "ed_offset.2d_array.rgba8.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013317, VkglTestCase_013317_1, VkglTestCase_013317_2);

#define VkglTestCase_013318_1 "dEQP-GLES31.functional.texture.gather.offset.min_require"
#define VkglTestCase_013318_2 "d_offset.2d_array.rgba8.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013318, VkglTestCase_013318_1, VkglTestCase_013318_2);

#define VkglTestCase_013319_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_o"
#define VkglTestCase_013319_2 "ffset.2d_array.rgba8.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013319, VkglTestCase_013319_1, VkglTestCase_013319_2);

#define VkglTestCase_013347_1 "dEQP-GLES31.functional.texture.gather.offset.implemen"
#define VkglTestCase_013347_2 "tation_offset.2d.rgba8.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013347, VkglTestCase_013347_1, VkglTestCase_013347_2);

#define VkglTestCase_013348_1 "dEQP-GLES31.functional.texture.gather.offset.implement"
#define VkglTestCase_013348_2 "ation_offset.2d.rgba8.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013348, VkglTestCase_013348_1, VkglTestCase_013348_2);

#define VkglTestCase_013349_1 "dEQP-GLES31.functional.texture.gather.offset.implementati"
#define VkglTestCase_013349_2 "on_offset.2d.rgba8.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013349, VkglTestCase_013349_1, VkglTestCase_013349_2);

#define VkglTestCase_013416_1 "dEQP-GLES31.functional.texture.gather.offset.implementat"
#define VkglTestCase_013416_2 "ion_offset.2d_array.rgba8.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013416, VkglTestCase_013416_1, VkglTestCase_013416_2);

#define VkglTestCase_013417_1 "dEQP-GLES31.functional.texture.gather.offset.implementati"
#define VkglTestCase_013417_2 "on_offset.2d_array.rgba8.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013417, VkglTestCase_013417_1, VkglTestCase_013417_2);

#define VkglTestCase_013418_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_"
#define VkglTestCase_013418_2 "offset.2d_array.rgba8.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013418, VkglTestCase_013418_1, VkglTestCase_013418_2);

#define VkglTestCase_013485_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min"
#define VkglTestCase_013485_2 "_required_offset.2d.rgba8.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013485, VkglTestCase_013485_1, VkglTestCase_013485_2);

#define VkglTestCase_013486_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_"
#define VkglTestCase_013486_2 "required_offset.2d.rgba8.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013486, VkglTestCase_013486_1, VkglTestCase_013486_2);

#define VkglTestCase_013487_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_req"
#define VkglTestCase_013487_2 "uired_offset.2d.rgba8.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013487, VkglTestCase_013487_1, VkglTestCase_013487_2);

#define VkglTestCase_013515_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_re"
#define VkglTestCase_013515_2 "quired_offset.2d_array.rgba8.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013515, VkglTestCase_013515_1, VkglTestCase_013515_2);

#define VkglTestCase_013516_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_req"
#define VkglTestCase_013516_2 "uired_offset.2d_array.rgba8.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013516, VkglTestCase_013516_1, VkglTestCase_013516_2);

#define VkglTestCase_013517_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_requir"
#define VkglTestCase_013517_2 "ed_offset.2d_array.rgba8.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013517, VkglTestCase_013517_1, VkglTestCase_013517_2);

#define VkglTestCase_013545_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impl"
#define VkglTestCase_013545_2 "ementation_offset.2d.rgba8.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013545, VkglTestCase_013545_1, VkglTestCase_013545_2);

#define VkglTestCase_013546_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.imple"
#define VkglTestCase_013546_2 "mentation_offset.2d.rgba8.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013546, VkglTestCase_013546_1, VkglTestCase_013546_2);

#define VkglTestCase_013547_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implemen"
#define VkglTestCase_013547_2 "tation_offset.2d.rgba8.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013547, VkglTestCase_013547_1, VkglTestCase_013547_2);

#define VkglTestCase_013614_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impleme"
#define VkglTestCase_013614_2 "ntation_offset.2d_array.rgba8.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013614, VkglTestCase_013614_1, VkglTestCase_013614_2);

#define VkglTestCase_013615_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implemen"
#define VkglTestCase_013615_2 "tation_offset.2d_array.rgba8.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013615, VkglTestCase_013615_1, VkglTestCase_013615_2);

#define VkglTestCase_013616_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementat"
#define VkglTestCase_013616_2 "ion_offset.2d_array.rgba8.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013616, VkglTestCase_013616_1, VkglTestCase_013616_2);

#define VkglTestCase_013683_1 "dEQP-GLES31.functional.texture.gather.offsets.min_re"
#define VkglTestCase_013683_2 "quired_offset.2d.rgba8.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013683, VkglTestCase_013683_1, VkglTestCase_013683_2);

#define VkglTestCase_013684_1 "dEQP-GLES31.functional.texture.gather.offsets.min_req"
#define VkglTestCase_013684_2 "uired_offset.2d.rgba8.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013684, VkglTestCase_013684_1, VkglTestCase_013684_2);

#define VkglTestCase_013685_1 "dEQP-GLES31.functional.texture.gather.offsets.min_require"
#define VkglTestCase_013685_2 "d_offset.2d.rgba8.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013685, VkglTestCase_013685_1, VkglTestCase_013685_2);

#define VkglTestCase_013713_1 "dEQP-GLES31.functional.texture.gather.offsets.min_requi"
#define VkglTestCase_013713_2 "red_offset.2d_array.rgba8.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013713, VkglTestCase_013713_1, VkglTestCase_013713_2);

#define VkglTestCase_013714_1 "dEQP-GLES31.functional.texture.gather.offsets.min_requir"
#define VkglTestCase_013714_2 "ed_offset.2d_array.rgba8.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013714, VkglTestCase_013714_1, VkglTestCase_013714_2);

#define VkglTestCase_013715_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_o"
#define VkglTestCase_013715_2 "ffset.2d_array.rgba8.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013715, VkglTestCase_013715_1, VkglTestCase_013715_2);

#define VkglTestCase_013743_1 "dEQP-GLES31.functional.texture.gather.offsets.impleme"
#define VkglTestCase_013743_2 "ntation_offset.2d.rgba8.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013743, VkglTestCase_013743_1, VkglTestCase_013743_2);

#define VkglTestCase_013744_1 "dEQP-GLES31.functional.texture.gather.offsets.implemen"
#define VkglTestCase_013744_2 "tation_offset.2d.rgba8.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013744, VkglTestCase_013744_1, VkglTestCase_013744_2);

#define VkglTestCase_013745_1 "dEQP-GLES31.functional.texture.gather.offsets.implementati"
#define VkglTestCase_013745_2 "on_offset.2d.rgba8.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013745, VkglTestCase_013745_1, VkglTestCase_013745_2);

#define VkglTestCase_013812_1 "dEQP-GLES31.functional.texture.gather.offsets.implementa"
#define VkglTestCase_013812_2 "tion_offset.2d_array.rgba8.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013812, VkglTestCase_013812_1, VkglTestCase_013812_2);

#define VkglTestCase_013813_1 "dEQP-GLES31.functional.texture.gather.offsets.implementat"
#define VkglTestCase_013813_2 "ion_offset.2d_array.rgba8.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013813, VkglTestCase_013813_1, VkglTestCase_013813_2);

#define VkglTestCase_013814_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_"
#define VkglTestCase_013814_2 "offset.2d_array.rgba8.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013814, VkglTestCase_013814_1, VkglTestCase_013814_2);
