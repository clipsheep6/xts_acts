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

#define VkglTestCase_013089_1 "dEQP-GLES31.functional.texture.gather.basi"
#define VkglTestCase_013089_2 "c.2d.rgba8ui.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013089, VkglTestCase_013089_1, VkglTestCase_013089_2);

#define VkglTestCase_013090_1 "dEQP-GLES31.functional.texture.gather.basic"
#define VkglTestCase_013090_2 ".2d.rgba8ui.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013090, VkglTestCase_013090_1, VkglTestCase_013090_2);

#define VkglTestCase_013091_1 "dEQP-GLES31.functional.texture.gather.basic.2d."
#define VkglTestCase_013091_2 "rgba8ui.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013091, VkglTestCase_013091_1, VkglTestCase_013091_2);

#define VkglTestCase_013158_1 "dEQP-GLES31.functional.texture.gather.basic.2"
#define VkglTestCase_013158_2 "d_array.rgba8ui.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013158, VkglTestCase_013158_1, VkglTestCase_013158_2);

#define VkglTestCase_013159_1 "dEQP-GLES31.functional.texture.gather.basic.2d"
#define VkglTestCase_013159_2 "_array.rgba8ui.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013159, VkglTestCase_013159_1, VkglTestCase_013159_2);

#define VkglTestCase_013160_1 "dEQP-GLES31.functional.texture.gather.basic.2d_arr"
#define VkglTestCase_013160_2 "ay.rgba8ui.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013160, VkglTestCase_013160_1, VkglTestCase_013160_2);

#define VkglTestCase_013233_1 "dEQP-GLES31.functional.texture.gather.basic"
#define VkglTestCase_013233_2 ".cube.rgba8ui.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013233, VkglTestCase_013233_1, VkglTestCase_013233_2);

#define VkglTestCase_013234_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013234_2 "cube.rgba8ui.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013234, VkglTestCase_013234_1, VkglTestCase_013234_2);

#define VkglTestCase_013235_1 "dEQP-GLES31.functional.texture.gather.basic.cube"
#define VkglTestCase_013235_2 ".rgba8ui.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013235, VkglTestCase_013235_1, VkglTestCase_013235_2);

#define VkglTestCase_013293_1 "dEQP-GLES31.functional.texture.gather.offset.min_requ"
#define VkglTestCase_013293_2 "ired_offset.2d.rgba8ui.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013293, VkglTestCase_013293_1, VkglTestCase_013293_2);

#define VkglTestCase_013294_1 "dEQP-GLES31.functional.texture.gather.offset.min_requi"
#define VkglTestCase_013294_2 "red_offset.2d.rgba8ui.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013294, VkglTestCase_013294_1, VkglTestCase_013294_2);

#define VkglTestCase_013295_1 "dEQP-GLES31.functional.texture.gather.offset.min_required"
#define VkglTestCase_013295_2 "_offset.2d.rgba8ui.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013295, VkglTestCase_013295_1, VkglTestCase_013295_2);

#define VkglTestCase_013323_1 "dEQP-GLES31.functional.texture.gather.offset.min_require"
#define VkglTestCase_013323_2 "d_offset.2d_array.rgba8ui.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013323, VkglTestCase_013323_1, VkglTestCase_013323_2);

#define VkglTestCase_013324_1 "dEQP-GLES31.functional.texture.gather.offset.min_required"
#define VkglTestCase_013324_2 "_offset.2d_array.rgba8ui.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013324, VkglTestCase_013324_1, VkglTestCase_013324_2);

#define VkglTestCase_013325_1 "dEQP-GLES31.functional.texture.gather.offset.min_required_of"
#define VkglTestCase_013325_2 "fset.2d_array.rgba8ui.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013325, VkglTestCase_013325_1, VkglTestCase_013325_2);

#define VkglTestCase_013367_1 "dEQP-GLES31.functional.texture.gather.offset.implement"
#define VkglTestCase_013367_2 "ation_offset.2d.rgba8ui.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013367, VkglTestCase_013367_1, VkglTestCase_013367_2);

#define VkglTestCase_013368_1 "dEQP-GLES31.functional.texture.gather.offset.implementa"
#define VkglTestCase_013368_2 "tion_offset.2d.rgba8ui.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013368, VkglTestCase_013368_1, VkglTestCase_013368_2);

#define VkglTestCase_013369_1 "dEQP-GLES31.functional.texture.gather.offset.implementatio"
#define VkglTestCase_013369_2 "n_offset.2d.rgba8ui.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013369, VkglTestCase_013369_1, VkglTestCase_013369_2);

#define VkglTestCase_013436_1 "dEQP-GLES31.functional.texture.gather.offset.implementati"
#define VkglTestCase_013436_2 "on_offset.2d_array.rgba8ui.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013436, VkglTestCase_013436_1, VkglTestCase_013436_2);

#define VkglTestCase_013437_1 "dEQP-GLES31.functional.texture.gather.offset.implementatio"
#define VkglTestCase_013437_2 "n_offset.2d_array.rgba8ui.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013437, VkglTestCase_013437_1, VkglTestCase_013437_2);

#define VkglTestCase_013438_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_o"
#define VkglTestCase_013438_2 "ffset.2d_array.rgba8ui.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013438, VkglTestCase_013438_1, VkglTestCase_013438_2);

#define VkglTestCase_013491_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_"
#define VkglTestCase_013491_2 "required_offset.2d.rgba8ui.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013491, VkglTestCase_013491_1, VkglTestCase_013491_2);

#define VkglTestCase_013492_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_r"
#define VkglTestCase_013492_2 "equired_offset.2d.rgba8ui.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013492, VkglTestCase_013492_1, VkglTestCase_013492_2);

#define VkglTestCase_013493_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_requ"
#define VkglTestCase_013493_2 "ired_offset.2d.rgba8ui.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013493, VkglTestCase_013493_1, VkglTestCase_013493_2);

#define VkglTestCase_013521_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_req"
#define VkglTestCase_013521_2 "uired_offset.2d_array.rgba8ui.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013521, VkglTestCase_013521_1, VkglTestCase_013521_2);

#define VkglTestCase_013522_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_requ"
#define VkglTestCase_013522_2 "ired_offset.2d_array.rgba8ui.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013522, VkglTestCase_013522_1, VkglTestCase_013522_2);

#define VkglTestCase_013523_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.min_require"
#define VkglTestCase_013523_2 "d_offset.2d_array.rgba8ui.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013523, VkglTestCase_013523_1, VkglTestCase_013523_2);

#define VkglTestCase_013565_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.imple"
#define VkglTestCase_013565_2 "mentation_offset.2d.rgba8ui.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013565, VkglTestCase_013565_1, VkglTestCase_013565_2);

#define VkglTestCase_013566_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implem"
#define VkglTestCase_013566_2 "entation_offset.2d.rgba8ui.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013566, VkglTestCase_013566_1, VkglTestCase_013566_2);

#define VkglTestCase_013567_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implement"
#define VkglTestCase_013567_2 "ation_offset.2d.rgba8ui.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013567, VkglTestCase_013567_1, VkglTestCase_013567_2);

#define VkglTestCase_013634_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implemen"
#define VkglTestCase_013634_2 "tation_offset.2d_array.rgba8ui.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013634, VkglTestCase_013634_1, VkglTestCase_013634_2);

#define VkglTestCase_013635_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implement"
#define VkglTestCase_013635_2 "ation_offset.2d_array.rgba8ui.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013635, VkglTestCase_013635_1, VkglTestCase_013635_2);

#define VkglTestCase_013636_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementati"
#define VkglTestCase_013636_2 "on_offset.2d_array.rgba8ui.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013636, VkglTestCase_013636_1, VkglTestCase_013636_2);

#define VkglTestCase_013689_1 "dEQP-GLES31.functional.texture.gather.offsets.min_req"
#define VkglTestCase_013689_2 "uired_offset.2d.rgba8ui.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013689, VkglTestCase_013689_1, VkglTestCase_013689_2);

#define VkglTestCase_013690_1 "dEQP-GLES31.functional.texture.gather.offsets.min_requ"
#define VkglTestCase_013690_2 "ired_offset.2d.rgba8ui.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013690, VkglTestCase_013690_1, VkglTestCase_013690_2);

#define VkglTestCase_013691_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required"
#define VkglTestCase_013691_2 "_offset.2d.rgba8ui.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013691, VkglTestCase_013691_1, VkglTestCase_013691_2);

#define VkglTestCase_013719_1 "dEQP-GLES31.functional.texture.gather.offsets.min_requir"
#define VkglTestCase_013719_2 "ed_offset.2d_array.rgba8ui.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013719, VkglTestCase_013719_1, VkglTestCase_013719_2);

#define VkglTestCase_013720_1 "dEQP-GLES31.functional.texture.gather.offsets.min_require"
#define VkglTestCase_013720_2 "d_offset.2d_array.rgba8ui.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013720, VkglTestCase_013720_1, VkglTestCase_013720_2);

#define VkglTestCase_013721_1 "dEQP-GLES31.functional.texture.gather.offsets.min_required_of"
#define VkglTestCase_013721_2 "fset.2d_array.rgba8ui.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013721, VkglTestCase_013721_1, VkglTestCase_013721_2);

#define VkglTestCase_013763_1 "dEQP-GLES31.functional.texture.gather.offsets.implemen"
#define VkglTestCase_013763_2 "tation_offset.2d.rgba8ui.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013763, VkglTestCase_013763_1, VkglTestCase_013763_2);

#define VkglTestCase_013764_1 "dEQP-GLES31.functional.texture.gather.offsets.implement"
#define VkglTestCase_013764_2 "ation_offset.2d.rgba8ui.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013764, VkglTestCase_013764_1, VkglTestCase_013764_2);

#define VkglTestCase_013765_1 "dEQP-GLES31.functional.texture.gather.offsets.implementatio"
#define VkglTestCase_013765_2 "n_offset.2d.rgba8ui.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013765, VkglTestCase_013765_1, VkglTestCase_013765_2);

#define VkglTestCase_013832_1 "dEQP-GLES31.functional.texture.gather.offsets.implementat"
#define VkglTestCase_013832_2 "ion_offset.2d_array.rgba8ui.size_npot.clamp_to_edge_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013832, VkglTestCase_013832_1, VkglTestCase_013832_2);

#define VkglTestCase_013833_1 "dEQP-GLES31.functional.texture.gather.offsets.implementati"
#define VkglTestCase_013833_2 "on_offset.2d_array.rgba8ui.size_npot.repeat_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013833, VkglTestCase_013833_1, VkglTestCase_013833_2);

#define VkglTestCase_013834_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_o"
#define VkglTestCase_013834_2 "ffset.2d_array.rgba8ui.size_npot.mirrored_repeat_clamp_to_edge"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013834, VkglTestCase_013834_1, VkglTestCase_013834_2);
