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
#include "../ActsDeqpgles310016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015719_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015719_2 "re_level.texture_cube_map.samples_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015719, VkglTestCase_015719_1, VkglTestCase_015719_2);

#define VkglTestCase_015720_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015720_2 "ure_level.texture_cube_map.samples_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015720, VkglTestCase_015720_1, VkglTestCase_015720_2);

#define VkglTestCase_015721_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015721_2 ".texture_cube_map.fixed_sample_locations_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015721, VkglTestCase_015721_1, VkglTestCase_015721_2);

#define VkglTestCase_015722_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015722_2 "l.texture_cube_map.fixed_sample_locations_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015722, VkglTestCase_015722_1, VkglTestCase_015722_2);

#define VkglTestCase_015723_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015723_2 "ure_level.texture_cube_map.width_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015723, VkglTestCase_015723_1, VkglTestCase_015723_2);

#define VkglTestCase_015724_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015724_2 "ture_level.texture_cube_map.width_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015724, VkglTestCase_015724_1, VkglTestCase_015724_2);

#define VkglTestCase_015725_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015725_2 "re_level.texture_cube_map.height_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015725, VkglTestCase_015725_1, VkglTestCase_015725_2);

#define VkglTestCase_015726_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015726_2 "ure_level.texture_cube_map.height_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015726, VkglTestCase_015726_1, VkglTestCase_015726_2);

#define VkglTestCase_015727_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015727_2 "ure_level.texture_cube_map.depth_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015727, VkglTestCase_015727_1, VkglTestCase_015727_2);

#define VkglTestCase_015728_1 "dEQP-GLES31.functional.state_query.tex"
#define VkglTestCase_015728_2 "ture_level.texture_cube_map.depth_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015728, VkglTestCase_015728_1, VkglTestCase_015728_2);

#define VkglTestCase_015729_1 "dEQP-GLES31.functional.state_query.texture_l"
#define VkglTestCase_015729_2 "evel.texture_cube_map.internal_format_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015729, VkglTestCase_015729_1, VkglTestCase_015729_2);

#define VkglTestCase_015730_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015730_2 "level.texture_cube_map.internal_format_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015730, VkglTestCase_015730_1, VkglTestCase_015730_2);

#define VkglTestCase_015731_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015731_2 "e_level.texture_cube_map.red_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015731, VkglTestCase_015731_1, VkglTestCase_015731_2);

#define VkglTestCase_015732_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015732_2 "re_level.texture_cube_map.red_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015732, VkglTestCase_015732_1, VkglTestCase_015732_2);

#define VkglTestCase_015733_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015733_2 "_level.texture_cube_map.green_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015733, VkglTestCase_015733_1, VkglTestCase_015733_2);

#define VkglTestCase_015734_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015734_2 "e_level.texture_cube_map.green_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015734, VkglTestCase_015734_1, VkglTestCase_015734_2);

#define VkglTestCase_015735_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015735_2 "e_level.texture_cube_map.blue_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015735, VkglTestCase_015735_1, VkglTestCase_015735_2);

#define VkglTestCase_015736_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015736_2 "re_level.texture_cube_map.blue_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015736, VkglTestCase_015736_1, VkglTestCase_015736_2);

#define VkglTestCase_015737_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015737_2 "_level.texture_cube_map.alpha_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015737, VkglTestCase_015737_1, VkglTestCase_015737_2);

#define VkglTestCase_015738_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015738_2 "e_level.texture_cube_map.alpha_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015738, VkglTestCase_015738_1, VkglTestCase_015738_2);

#define VkglTestCase_015739_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015739_2 "_level.texture_cube_map.depth_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015739, VkglTestCase_015739_1, VkglTestCase_015739_2);

#define VkglTestCase_015740_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015740_2 "e_level.texture_cube_map.depth_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015740, VkglTestCase_015740_1, VkglTestCase_015740_2);

#define VkglTestCase_015741_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015741_2 "level.texture_cube_map.stencil_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015741, VkglTestCase_015741_1, VkglTestCase_015741_2);

#define VkglTestCase_015742_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015742_2 "_level.texture_cube_map.stencil_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015742, VkglTestCase_015742_1, VkglTestCase_015742_2);

#define VkglTestCase_015743_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015743_2 "_level.texture_cube_map.shared_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015743, VkglTestCase_015743_1, VkglTestCase_015743_2);

#define VkglTestCase_015744_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015744_2 "e_level.texture_cube_map.shared_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015744, VkglTestCase_015744_1, VkglTestCase_015744_2);

#define VkglTestCase_015745_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015745_2 "e_level.texture_cube_map.red_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015745, VkglTestCase_015745_1, VkglTestCase_015745_2);

#define VkglTestCase_015746_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015746_2 "re_level.texture_cube_map.red_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015746, VkglTestCase_015746_1, VkglTestCase_015746_2);

#define VkglTestCase_015747_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015747_2 "_level.texture_cube_map.green_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015747, VkglTestCase_015747_1, VkglTestCase_015747_2);

#define VkglTestCase_015748_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015748_2 "e_level.texture_cube_map.green_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015748, VkglTestCase_015748_1, VkglTestCase_015748_2);

#define VkglTestCase_015749_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015749_2 "e_level.texture_cube_map.blue_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015749, VkglTestCase_015749_1, VkglTestCase_015749_2);

#define VkglTestCase_015750_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015750_2 "re_level.texture_cube_map.blue_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015750, VkglTestCase_015750_1, VkglTestCase_015750_2);

#define VkglTestCase_015751_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015751_2 "_level.texture_cube_map.alpha_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015751, VkglTestCase_015751_1, VkglTestCase_015751_2);

#define VkglTestCase_015752_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015752_2 "e_level.texture_cube_map.alpha_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015752, VkglTestCase_015752_1, VkglTestCase_015752_2);

#define VkglTestCase_015753_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015753_2 "_level.texture_cube_map.depth_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015753, VkglTestCase_015753_1, VkglTestCase_015753_2);

#define VkglTestCase_015754_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015754_2 "e_level.texture_cube_map.depth_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015754, VkglTestCase_015754_1, VkglTestCase_015754_2);

#define VkglTestCase_015755_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015755_2 "_level.texture_cube_map.compressed_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015755, VkglTestCase_015755_1, VkglTestCase_015755_2);

#define VkglTestCase_015756_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015756_2 "e_level.texture_cube_map.compressed_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015756, VkglTestCase_015756_1, VkglTestCase_015756_2);

#define VkglTestCase_015757_1 "dEQP-GLES31.functional.state_query.texture_level."
#define VkglTestCase_015757_2 "texture_cube_map.buffer_data_store_binding_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015757, VkglTestCase_015757_1, VkglTestCase_015757_2);

#define VkglTestCase_015758_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015758_2 ".texture_cube_map.buffer_data_store_binding_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015758, VkglTestCase_015758_1, VkglTestCase_015758_2);

#define VkglTestCase_015759_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015759_2 "level.texture_cube_map.buffer_offset_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015759, VkglTestCase_015759_1, VkglTestCase_015759_2);

#define VkglTestCase_015760_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015760_2 "_level.texture_cube_map.buffer_offset_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015760, VkglTestCase_015760_1, VkglTestCase_015760_2);

#define VkglTestCase_015761_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015761_2 "_level.texture_cube_map.buffer_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015761, VkglTestCase_015761_1, VkglTestCase_015761_2);

#define VkglTestCase_015762_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015762_2 "e_level.texture_cube_map.buffer_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015762, VkglTestCase_015762_1, VkglTestCase_015762_2);
