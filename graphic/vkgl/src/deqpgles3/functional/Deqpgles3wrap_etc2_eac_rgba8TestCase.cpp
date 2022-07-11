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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022807_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022807_2 "tc2_eac_rgba8.clamp_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022807, VkglTestCase_022807_1, VkglTestCase_022807_2);

#define VkglTestCase_022808_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022808_2 "tc2_eac_rgba8.clamp_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022808, VkglTestCase_022808_1, VkglTestCase_022808_2);

#define VkglTestCase_022809_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022809_2 "c2_eac_rgba8.clamp_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022809, VkglTestCase_022809_1, VkglTestCase_022809_2);

#define VkglTestCase_022810_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022810_2 "tc2_eac_rgba8.clamp_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022810, VkglTestCase_022810_1, VkglTestCase_022810_2);

#define VkglTestCase_022811_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022811_2 "c2_eac_rgba8.clamp_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022811, VkglTestCase_022811_1, VkglTestCase_022811_2);

#define VkglTestCase_022812_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022812_2 "tc2_eac_rgba8.clamp_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022812, VkglTestCase_022812_1, VkglTestCase_022812_2);

#define VkglTestCase_022813_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022813_2 "c2_eac_rgba8.repeat_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022813, VkglTestCase_022813_1, VkglTestCase_022813_2);

#define VkglTestCase_022814_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022814_2 "tc2_eac_rgba8.repeat_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022814, VkglTestCase_022814_1, VkglTestCase_022814_2);

#define VkglTestCase_022815_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022815_2 "c2_eac_rgba8.repeat_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022815, VkglTestCase_022815_1, VkglTestCase_022815_2);

#define VkglTestCase_022816_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022816_2 "c2_eac_rgba8.repeat_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022816, VkglTestCase_022816_1, VkglTestCase_022816_2);

#define VkglTestCase_022817_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022817_2 "c2_eac_rgba8.repeat_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022817, VkglTestCase_022817_1, VkglTestCase_022817_2);

#define VkglTestCase_022818_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022818_2 "c2_eac_rgba8.repeat_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022818, VkglTestCase_022818_1, VkglTestCase_022818_2);

#define VkglTestCase_022819_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022819_2 "c2_eac_rgba8.mirror_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022819, VkglTestCase_022819_1, VkglTestCase_022819_2);

#define VkglTestCase_022820_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022820_2 "tc2_eac_rgba8.mirror_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022820, VkglTestCase_022820_1, VkglTestCase_022820_2);

#define VkglTestCase_022821_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022821_2 "c2_eac_rgba8.mirror_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022821, VkglTestCase_022821_1, VkglTestCase_022821_2);

#define VkglTestCase_022822_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022822_2 "c2_eac_rgba8.mirror_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022822, VkglTestCase_022822_1, VkglTestCase_022822_2);

#define VkglTestCase_022823_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022823_2 "c2_eac_rgba8.mirror_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022823, VkglTestCase_022823_1, VkglTestCase_022823_2);

#define VkglTestCase_022824_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022824_2 "c2_eac_rgba8.mirror_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022824, VkglTestCase_022824_1, VkglTestCase_022824_2);

#define VkglTestCase_022825_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022825_2 "c2_eac_rgba8.clamp_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022825, VkglTestCase_022825_1, VkglTestCase_022825_2);

#define VkglTestCase_022826_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022826_2 "tc2_eac_rgba8.clamp_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022826, VkglTestCase_022826_1, VkglTestCase_022826_2);

#define VkglTestCase_022827_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022827_2 "c2_eac_rgba8.clamp_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022827, VkglTestCase_022827_1, VkglTestCase_022827_2);

#define VkglTestCase_022828_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022828_2 "c2_eac_rgba8.clamp_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022828, VkglTestCase_022828_1, VkglTestCase_022828_2);

#define VkglTestCase_022829_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022829_2 "c2_eac_rgba8.clamp_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022829, VkglTestCase_022829_1, VkglTestCase_022829_2);

#define VkglTestCase_022830_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022830_2 "c2_eac_rgba8.clamp_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022830, VkglTestCase_022830_1, VkglTestCase_022830_2);

#define VkglTestCase_022831_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022831_2 "c2_eac_rgba8.repeat_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022831, VkglTestCase_022831_1, VkglTestCase_022831_2);

#define VkglTestCase_022832_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022832_2 "c2_eac_rgba8.repeat_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022832, VkglTestCase_022832_1, VkglTestCase_022832_2);

#define VkglTestCase_022833_1 "dEQP-GLES3.functional.texture.wrap.etc"
#define VkglTestCase_022833_2 "2_eac_rgba8.repeat_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022833, VkglTestCase_022833_1, VkglTestCase_022833_2);

#define VkglTestCase_022834_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022834_2 "c2_eac_rgba8.repeat_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022834, VkglTestCase_022834_1, VkglTestCase_022834_2);

#define VkglTestCase_022835_1 "dEQP-GLES3.functional.texture.wrap.etc"
#define VkglTestCase_022835_2 "2_eac_rgba8.repeat_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022835, VkglTestCase_022835_1, VkglTestCase_022835_2);

#define VkglTestCase_022836_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022836_2 "c2_eac_rgba8.repeat_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022836, VkglTestCase_022836_1, VkglTestCase_022836_2);

#define VkglTestCase_022837_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022837_2 "c2_eac_rgba8.mirror_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022837, VkglTestCase_022837_1, VkglTestCase_022837_2);

#define VkglTestCase_022838_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022838_2 "c2_eac_rgba8.mirror_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022838, VkglTestCase_022838_1, VkglTestCase_022838_2);

#define VkglTestCase_022839_1 "dEQP-GLES3.functional.texture.wrap.etc"
#define VkglTestCase_022839_2 "2_eac_rgba8.mirror_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022839, VkglTestCase_022839_1, VkglTestCase_022839_2);

#define VkglTestCase_022840_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022840_2 "c2_eac_rgba8.mirror_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022840, VkglTestCase_022840_1, VkglTestCase_022840_2);

#define VkglTestCase_022841_1 "dEQP-GLES3.functional.texture.wrap.etc"
#define VkglTestCase_022841_2 "2_eac_rgba8.mirror_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022841, VkglTestCase_022841_1, VkglTestCase_022841_2);

#define VkglTestCase_022842_1 "dEQP-GLES3.functional.texture.wrap.et"
#define VkglTestCase_022842_2 "c2_eac_rgba8.mirror_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022842, VkglTestCase_022842_1, VkglTestCase_022842_2);
