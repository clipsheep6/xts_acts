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

#define VkglTestCase_013092_1 "dEQP-GLES31.functional.texture.gather.basic.2"
#define VkglTestCase_013092_2 "d.rgba8ui.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013092, VkglTestCase_013092_1, VkglTestCase_013092_2);

#define VkglTestCase_013093_1 "dEQP-GLES31.functional.texture.gather.basic.2d"
#define VkglTestCase_013093_2 ".rgba8ui.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013093, VkglTestCase_013093_1, VkglTestCase_013093_2);

#define VkglTestCase_013094_1 "dEQP-GLES31.functional.texture.gather.basic.2"
#define VkglTestCase_013094_2 "d.rgba8ui.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013094, VkglTestCase_013094_1, VkglTestCase_013094_2);

#define VkglTestCase_013095_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013095_2 "2d.rgba8ui.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013095, VkglTestCase_013095_1, VkglTestCase_013095_2);

#define VkglTestCase_013096_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013096_2 "2d.rgba8ui.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013096, VkglTestCase_013096_1, VkglTestCase_013096_2);

#define VkglTestCase_013097_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013097_2 "2d.rgba8ui.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013097, VkglTestCase_013097_1, VkglTestCase_013097_2);

#define VkglTestCase_013161_1 "dEQP-GLES31.functional.texture.gather.basic.2d_a"
#define VkglTestCase_013161_2 "rray.rgba8ui.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013161, VkglTestCase_013161_1, VkglTestCase_013161_2);

#define VkglTestCase_013162_1 "dEQP-GLES31.functional.texture.gather.basic.2d_ar"
#define VkglTestCase_013162_2 "ray.rgba8ui.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013162, VkglTestCase_013162_1, VkglTestCase_013162_2);

#define VkglTestCase_013163_1 "dEQP-GLES31.functional.texture.gather.basic.2d_a"
#define VkglTestCase_013163_2 "rray.rgba8ui.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013163, VkglTestCase_013163_1, VkglTestCase_013163_2);

#define VkglTestCase_013164_1 "dEQP-GLES31.functional.texture.gather.basic.2d_"
#define VkglTestCase_013164_2 "array.rgba8ui.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013164, VkglTestCase_013164_1, VkglTestCase_013164_2);

#define VkglTestCase_013165_1 "dEQP-GLES31.functional.texture.gather.basic.2d_"
#define VkglTestCase_013165_2 "array.rgba8ui.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013165, VkglTestCase_013165_1, VkglTestCase_013165_2);

#define VkglTestCase_013166_1 "dEQP-GLES31.functional.texture.gather.basic.2d_"
#define VkglTestCase_013166_2 "array.rgba8ui.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013166, VkglTestCase_013166_1, VkglTestCase_013166_2);

#define VkglTestCase_013242_1 "dEQP-GLES31.functional.texture.gather.basic.cu"
#define VkglTestCase_013242_2 "be.rgba8ui.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013242, VkglTestCase_013242_1, VkglTestCase_013242_2);

#define VkglTestCase_013243_1 "dEQP-GLES31.functional.texture.gather.basic.cub"
#define VkglTestCase_013243_2 "e.rgba8ui.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013243, VkglTestCase_013243_1, VkglTestCase_013243_2);

#define VkglTestCase_013244_1 "dEQP-GLES31.functional.texture.gather.basic.cu"
#define VkglTestCase_013244_2 "be.rgba8ui.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013244, VkglTestCase_013244_1, VkglTestCase_013244_2);

#define VkglTestCase_013245_1 "dEQP-GLES31.functional.texture.gather.basic.c"
#define VkglTestCase_013245_2 "ube.rgba8ui.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013245, VkglTestCase_013245_1, VkglTestCase_013245_2);

#define VkglTestCase_013246_1 "dEQP-GLES31.functional.texture.gather.basic.c"
#define VkglTestCase_013246_2 "ube.rgba8ui.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013246, VkglTestCase_013246_1, VkglTestCase_013246_2);

#define VkglTestCase_013247_1 "dEQP-GLES31.functional.texture.gather.basic.c"
#define VkglTestCase_013247_2 "ube.rgba8ui.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013247, VkglTestCase_013247_1, VkglTestCase_013247_2);

#define VkglTestCase_013370_1 "dEQP-GLES31.functional.texture.gather.offset.implementati"
#define VkglTestCase_013370_2 "on_offset.2d.rgba8ui.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013370, VkglTestCase_013370_1, VkglTestCase_013370_2);

#define VkglTestCase_013371_1 "dEQP-GLES31.functional.texture.gather.offset.implementati"
#define VkglTestCase_013371_2 "on_offset.2d.rgba8ui.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013371, VkglTestCase_013371_1, VkglTestCase_013371_2);

#define VkglTestCase_013372_1 "dEQP-GLES31.functional.texture.gather.offset.implementat"
#define VkglTestCase_013372_2 "ion_offset.2d.rgba8ui.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013372, VkglTestCase_013372_1, VkglTestCase_013372_2);

#define VkglTestCase_013373_1 "dEQP-GLES31.functional.texture.gather.offset.implementat"
#define VkglTestCase_013373_2 "ion_offset.2d.rgba8ui.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013373, VkglTestCase_013373_1, VkglTestCase_013373_2);

#define VkglTestCase_013374_1 "dEQP-GLES31.functional.texture.gather.offset.implementat"
#define VkglTestCase_013374_2 "ion_offset.2d.rgba8ui.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013374, VkglTestCase_013374_1, VkglTestCase_013374_2);

#define VkglTestCase_013375_1 "dEQP-GLES31.functional.texture.gather.offset.implementat"
#define VkglTestCase_013375_2 "ion_offset.2d.rgba8ui.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013375, VkglTestCase_013375_1, VkglTestCase_013375_2);

#define VkglTestCase_013439_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_"
#define VkglTestCase_013439_2 "offset.2d_array.rgba8ui.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013439, VkglTestCase_013439_1, VkglTestCase_013439_2);

#define VkglTestCase_013440_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_"
#define VkglTestCase_013440_2 "offset.2d_array.rgba8ui.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013440, VkglTestCase_013440_1, VkglTestCase_013440_2);

#define VkglTestCase_013441_1 "dEQP-GLES31.functional.texture.gather.offset.implementation"
#define VkglTestCase_013441_2 "_offset.2d_array.rgba8ui.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013441, VkglTestCase_013441_1, VkglTestCase_013441_2);

#define VkglTestCase_013442_1 "dEQP-GLES31.functional.texture.gather.offset.implementation"
#define VkglTestCase_013442_2 "_offset.2d_array.rgba8ui.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013442, VkglTestCase_013442_1, VkglTestCase_013442_2);

#define VkglTestCase_013443_1 "dEQP-GLES31.functional.texture.gather.offset.implementation"
#define VkglTestCase_013443_2 "_offset.2d_array.rgba8ui.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013443, VkglTestCase_013443_1, VkglTestCase_013443_2);

#define VkglTestCase_013444_1 "dEQP-GLES31.functional.texture.gather.offset.implementation"
#define VkglTestCase_013444_2 "_offset.2d_array.rgba8ui.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013444, VkglTestCase_013444_1, VkglTestCase_013444_2);

#define VkglTestCase_013568_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implemen"
#define VkglTestCase_013568_2 "tation_offset.2d.rgba8ui.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013568, VkglTestCase_013568_1, VkglTestCase_013568_2);

#define VkglTestCase_013569_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implemen"
#define VkglTestCase_013569_2 "tation_offset.2d.rgba8ui.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013569, VkglTestCase_013569_1, VkglTestCase_013569_2);

#define VkglTestCase_013570_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impleme"
#define VkglTestCase_013570_2 "ntation_offset.2d.rgba8ui.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013570, VkglTestCase_013570_1, VkglTestCase_013570_2);

#define VkglTestCase_013571_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impleme"
#define VkglTestCase_013571_2 "ntation_offset.2d.rgba8ui.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013571, VkglTestCase_013571_1, VkglTestCase_013571_2);

#define VkglTestCase_013572_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impleme"
#define VkglTestCase_013572_2 "ntation_offset.2d.rgba8ui.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013572, VkglTestCase_013572_1, VkglTestCase_013572_2);

#define VkglTestCase_013573_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impleme"
#define VkglTestCase_013573_2 "ntation_offset.2d.rgba8ui.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013573, VkglTestCase_013573_1, VkglTestCase_013573_2);

#define VkglTestCase_013637_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementat"
#define VkglTestCase_013637_2 "ion_offset.2d_array.rgba8ui.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013637, VkglTestCase_013637_1, VkglTestCase_013637_2);

#define VkglTestCase_013638_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementat"
#define VkglTestCase_013638_2 "ion_offset.2d_array.rgba8ui.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013638, VkglTestCase_013638_1, VkglTestCase_013638_2);

#define VkglTestCase_013639_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementa"
#define VkglTestCase_013639_2 "tion_offset.2d_array.rgba8ui.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013639, VkglTestCase_013639_1, VkglTestCase_013639_2);

#define VkglTestCase_013640_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementa"
#define VkglTestCase_013640_2 "tion_offset.2d_array.rgba8ui.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013640, VkglTestCase_013640_1, VkglTestCase_013640_2);

#define VkglTestCase_013641_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementa"
#define VkglTestCase_013641_2 "tion_offset.2d_array.rgba8ui.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013641, VkglTestCase_013641_1, VkglTestCase_013641_2);

#define VkglTestCase_013642_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementa"
#define VkglTestCase_013642_2 "tion_offset.2d_array.rgba8ui.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013642, VkglTestCase_013642_1, VkglTestCase_013642_2);

#define VkglTestCase_013766_1 "dEQP-GLES31.functional.texture.gather.offsets.implementat"
#define VkglTestCase_013766_2 "ion_offset.2d.rgba8ui.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013766, VkglTestCase_013766_1, VkglTestCase_013766_2);

#define VkglTestCase_013767_1 "dEQP-GLES31.functional.texture.gather.offsets.implementati"
#define VkglTestCase_013767_2 "on_offset.2d.rgba8ui.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013767, VkglTestCase_013767_1, VkglTestCase_013767_2);

#define VkglTestCase_013768_1 "dEQP-GLES31.functional.texture.gather.offsets.implementat"
#define VkglTestCase_013768_2 "ion_offset.2d.rgba8ui.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013768, VkglTestCase_013768_1, VkglTestCase_013768_2);

#define VkglTestCase_013769_1 "dEQP-GLES31.functional.texture.gather.offsets.implementa"
#define VkglTestCase_013769_2 "tion_offset.2d.rgba8ui.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013769, VkglTestCase_013769_1, VkglTestCase_013769_2);

#define VkglTestCase_013770_1 "dEQP-GLES31.functional.texture.gather.offsets.implementa"
#define VkglTestCase_013770_2 "tion_offset.2d.rgba8ui.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013770, VkglTestCase_013770_1, VkglTestCase_013770_2);

#define VkglTestCase_013771_1 "dEQP-GLES31.functional.texture.gather.offsets.implementa"
#define VkglTestCase_013771_2 "tion_offset.2d.rgba8ui.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013771, VkglTestCase_013771_1, VkglTestCase_013771_2);

#define VkglTestCase_013835_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation"
#define VkglTestCase_013835_2 "_offset.2d_array.rgba8ui.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013835, VkglTestCase_013835_1, VkglTestCase_013835_2);

#define VkglTestCase_013836_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_"
#define VkglTestCase_013836_2 "offset.2d_array.rgba8ui.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013836, VkglTestCase_013836_1, VkglTestCase_013836_2);

#define VkglTestCase_013837_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation"
#define VkglTestCase_013837_2 "_offset.2d_array.rgba8ui.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013837, VkglTestCase_013837_1, VkglTestCase_013837_2);

#define VkglTestCase_013838_1 "dEQP-GLES31.functional.texture.gather.offsets.implementatio"
#define VkglTestCase_013838_2 "n_offset.2d_array.rgba8ui.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013838, VkglTestCase_013838_1, VkglTestCase_013838_2);

#define VkglTestCase_013839_1 "dEQP-GLES31.functional.texture.gather.offsets.implementatio"
#define VkglTestCase_013839_2 "n_offset.2d_array.rgba8ui.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013839, VkglTestCase_013839_1, VkglTestCase_013839_2);

#define VkglTestCase_013840_1 "dEQP-GLES31.functional.texture.gather.offsets.implementatio"
#define VkglTestCase_013840_2 "n_offset.2d_array.rgba8ui.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013840, VkglTestCase_013840_1, VkglTestCase_013840_2);
