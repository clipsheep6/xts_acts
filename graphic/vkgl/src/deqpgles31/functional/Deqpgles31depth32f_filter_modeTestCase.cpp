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

#define VkglTestCase_013128_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013128_2 "2d.depth32f.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013128, VkglTestCase_013128_1, VkglTestCase_013128_2);

#define VkglTestCase_013129_1 "dEQP-GLES31.functional.texture.gather.basic.2d.depth"
#define VkglTestCase_013129_2 "32f.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013129, VkglTestCase_013129_1, VkglTestCase_013129_2);

#define VkglTestCase_013130_1 "dEQP-GLES31.functional.texture.gather.basic.2d.depth"
#define VkglTestCase_013130_2 "32f.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013130, VkglTestCase_013130_1, VkglTestCase_013130_2);

#define VkglTestCase_013131_1 "dEQP-GLES31.functional.texture.gather.basic.2d.depth"
#define VkglTestCase_013131_2 "32f.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013131, VkglTestCase_013131_1, VkglTestCase_013131_2);

#define VkglTestCase_013132_1 "dEQP-GLES31.functional.texture.gather.basic.2d.dept"
#define VkglTestCase_013132_2 "h32f.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013132, VkglTestCase_013132_1, VkglTestCase_013132_2);

#define VkglTestCase_013197_1 "dEQP-GLES31.functional.texture.gather.basic.2d_"
#define VkglTestCase_013197_2 "array.depth32f.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013197, VkglTestCase_013197_1, VkglTestCase_013197_2);

#define VkglTestCase_013198_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array.de"
#define VkglTestCase_013198_2 "pth32f.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013198, VkglTestCase_013198_1, VkglTestCase_013198_2);

#define VkglTestCase_013199_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array.de"
#define VkglTestCase_013199_2 "pth32f.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013199, VkglTestCase_013199_1, VkglTestCase_013199_2);

#define VkglTestCase_013200_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array.de"
#define VkglTestCase_013200_2 "pth32f.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013200, VkglTestCase_013200_1, VkglTestCase_013200_2);

#define VkglTestCase_013201_1 "dEQP-GLES31.functional.texture.gather.basic.2d_array.d"
#define VkglTestCase_013201_2 "epth32f.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013201, VkglTestCase_013201_1, VkglTestCase_013201_2);

#define VkglTestCase_013406_1 "dEQP-GLES31.functional.texture.gather.offset.implementat"
#define VkglTestCase_013406_2 "ion_offset.2d.depth32f.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013406, VkglTestCase_013406_1, VkglTestCase_013406_2);

#define VkglTestCase_013407_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offs"
#define VkglTestCase_013407_2 "et.2d.depth32f.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013407, VkglTestCase_013407_1, VkglTestCase_013407_2);

#define VkglTestCase_013408_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_off"
#define VkglTestCase_013408_2 "set.2d.depth32f.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013408, VkglTestCase_013408_1, VkglTestCase_013408_2);

#define VkglTestCase_013409_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_off"
#define VkglTestCase_013409_2 "set.2d.depth32f.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013409, VkglTestCase_013409_1, VkglTestCase_013409_2);

#define VkglTestCase_013410_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_off"
#define VkglTestCase_013410_2 "set.2d.depth32f.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013410, VkglTestCase_013410_1, VkglTestCase_013410_2);

#define VkglTestCase_013475_1 "dEQP-GLES31.functional.texture.gather.offset.implementation"
#define VkglTestCase_013475_2 "_offset.2d_array.depth32f.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013475, VkglTestCase_013475_1, VkglTestCase_013475_2);

#define VkglTestCase_013476_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offset."
#define VkglTestCase_013476_2 "2d_array.depth32f.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013476, VkglTestCase_013476_1, VkglTestCase_013476_2);

#define VkglTestCase_013477_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offset"
#define VkglTestCase_013477_2 ".2d_array.depth32f.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013477, VkglTestCase_013477_1, VkglTestCase_013477_2);

#define VkglTestCase_013478_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offset"
#define VkglTestCase_013478_2 ".2d_array.depth32f.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013478, VkglTestCase_013478_1, VkglTestCase_013478_2);

#define VkglTestCase_013479_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_offset"
#define VkglTestCase_013479_2 ".2d_array.depth32f.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013479, VkglTestCase_013479_1, VkglTestCase_013479_2);

#define VkglTestCase_013604_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impleme"
#define VkglTestCase_013604_2 "ntation_offset.2d.depth32f.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013604, VkglTestCase_013604_1, VkglTestCase_013604_2);

#define VkglTestCase_013605_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_"
#define VkglTestCase_013605_2 "offset.2d.depth32f.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013605, VkglTestCase_013605_1, VkglTestCase_013605_2);

#define VkglTestCase_013606_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation"
#define VkglTestCase_013606_2 "_offset.2d.depth32f.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013606, VkglTestCase_013606_1, VkglTestCase_013606_2);

#define VkglTestCase_013607_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation"
#define VkglTestCase_013607_2 "_offset.2d.depth32f.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013607, VkglTestCase_013607_1, VkglTestCase_013607_2);

#define VkglTestCase_013608_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation"
#define VkglTestCase_013608_2 "_offset.2d.depth32f.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013608, VkglTestCase_013608_1, VkglTestCase_013608_2);

#define VkglTestCase_013673_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementa"
#define VkglTestCase_013673_2 "tion_offset.2d_array.depth32f.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013673, VkglTestCase_013673_1, VkglTestCase_013673_2);

#define VkglTestCase_013674_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_off"
#define VkglTestCase_013674_2 "set.2d_array.depth32f.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013674, VkglTestCase_013674_1, VkglTestCase_013674_2);

#define VkglTestCase_013675_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_of"
#define VkglTestCase_013675_2 "fset.2d_array.depth32f.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013675, VkglTestCase_013675_1, VkglTestCase_013675_2);

#define VkglTestCase_013676_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_of"
#define VkglTestCase_013676_2 "fset.2d_array.depth32f.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013676, VkglTestCase_013676_1, VkglTestCase_013676_2);

#define VkglTestCase_013677_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementation_of"
#define VkglTestCase_013677_2 "fset.2d_array.depth32f.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013677, VkglTestCase_013677_1, VkglTestCase_013677_2);

#define VkglTestCase_013802_1 "dEQP-GLES31.functional.texture.gather.offsets.implementa"
#define VkglTestCase_013802_2 "tion_offset.2d.depth32f.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013802, VkglTestCase_013802_1, VkglTestCase_013802_2);

#define VkglTestCase_013803_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_off"
#define VkglTestCase_013803_2 "set.2d.depth32f.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013803, VkglTestCase_013803_1, VkglTestCase_013803_2);

#define VkglTestCase_013804_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_off"
#define VkglTestCase_013804_2 "set.2d.depth32f.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013804, VkglTestCase_013804_1, VkglTestCase_013804_2);

#define VkglTestCase_013805_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_off"
#define VkglTestCase_013805_2 "set.2d.depth32f.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013805, VkglTestCase_013805_1, VkglTestCase_013805_2);

#define VkglTestCase_013806_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_of"
#define VkglTestCase_013806_2 "fset.2d.depth32f.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013806, VkglTestCase_013806_1, VkglTestCase_013806_2);

#define VkglTestCase_013871_1 "dEQP-GLES31.functional.texture.gather.offsets.implementatio"
#define VkglTestCase_013871_2 "n_offset.2d_array.depth32f.filter_mode.min_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013871, VkglTestCase_013871_1, VkglTestCase_013871_2);

#define VkglTestCase_013872_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offset"
#define VkglTestCase_013872_2 ".2d_array.depth32f.filter_mode.min_nearest_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013872, VkglTestCase_013872_1, VkglTestCase_013872_2);

#define VkglTestCase_013873_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offset"
#define VkglTestCase_013873_2 ".2d_array.depth32f.filter_mode.min_nearest_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013873, VkglTestCase_013873_1, VkglTestCase_013873_2);

#define VkglTestCase_013874_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offset"
#define VkglTestCase_013874_2 ".2d_array.depth32f.filter_mode.min_linear_mipmap_nearest_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013874, VkglTestCase_013874_1, VkglTestCase_013874_2);

#define VkglTestCase_013875_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation_offse"
#define VkglTestCase_013875_2 "t.2d_array.depth32f.filter_mode.min_linear_mipmap_linear_mag_linear"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013875, VkglTestCase_013875_1, VkglTestCase_013875_2);
