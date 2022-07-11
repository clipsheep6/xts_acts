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
#include "../ActsDeqpgles30022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021755_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021755_2 "random.all_features.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021755, VkglTestCase_021755_1, VkglTestCase_021755_2);

#define VkglTestCase_021756_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021756_2 "random.all_features.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021756, VkglTestCase_021756_1, VkglTestCase_021756_2);

#define VkglTestCase_021757_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021757_2 "random.all_features.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021757, VkglTestCase_021757_1, VkglTestCase_021757_2);

#define VkglTestCase_021758_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021758_2 "random.all_features.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021758, VkglTestCase_021758_1, VkglTestCase_021758_2);

#define VkglTestCase_021759_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021759_2 "random.all_features.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021759, VkglTestCase_021759_1, VkglTestCase_021759_2);

#define VkglTestCase_021760_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021760_2 "random.all_features.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021760, VkglTestCase_021760_1, VkglTestCase_021760_2);

#define VkglTestCase_021761_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021761_2 "random.all_features.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021761, VkglTestCase_021761_1, VkglTestCase_021761_2);

#define VkglTestCase_021762_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021762_2 "random.all_features.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021762, VkglTestCase_021762_1, VkglTestCase_021762_2);

#define VkglTestCase_021763_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021763_2 "random.all_features.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021763, VkglTestCase_021763_1, VkglTestCase_021763_2);

#define VkglTestCase_021764_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021764_2 "random.all_features.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021764, VkglTestCase_021764_1, VkglTestCase_021764_2);

#define VkglTestCase_021765_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021765_2 "random.all_features.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021765, VkglTestCase_021765_1, VkglTestCase_021765_2);

#define VkglTestCase_021766_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021766_2 "random.all_features.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021766, VkglTestCase_021766_1, VkglTestCase_021766_2);

#define VkglTestCase_021767_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021767_2 "random.all_features.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021767, VkglTestCase_021767_1, VkglTestCase_021767_2);

#define VkglTestCase_021768_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021768_2 "random.all_features.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021768, VkglTestCase_021768_1, VkglTestCase_021768_2);

#define VkglTestCase_021769_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021769_2 "random.all_features.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021769, VkglTestCase_021769_1, VkglTestCase_021769_2);

#define VkglTestCase_021770_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021770_2 "random.all_features.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021770, VkglTestCase_021770_1, VkglTestCase_021770_2);

#define VkglTestCase_021771_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021771_2 "random.all_features.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021771, VkglTestCase_021771_1, VkglTestCase_021771_2);

#define VkglTestCase_021772_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021772_2 "random.all_features.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021772, VkglTestCase_021772_1, VkglTestCase_021772_2);

#define VkglTestCase_021773_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021773_2 "random.all_features.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021773, VkglTestCase_021773_1, VkglTestCase_021773_2);

#define VkglTestCase_021774_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021774_2 "random.all_features.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021774, VkglTestCase_021774_1, VkglTestCase_021774_2);

#define VkglTestCase_021775_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021775_2 "random.all_features.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021775, VkglTestCase_021775_1, VkglTestCase_021775_2);

#define VkglTestCase_021776_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021776_2 "random.all_features.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021776, VkglTestCase_021776_1, VkglTestCase_021776_2);

#define VkglTestCase_021777_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021777_2 "random.all_features.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021777, VkglTestCase_021777_1, VkglTestCase_021777_2);

#define VkglTestCase_021778_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021778_2 "random.all_features.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021778, VkglTestCase_021778_1, VkglTestCase_021778_2);

#define VkglTestCase_021779_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021779_2 "random.all_features.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021779, VkglTestCase_021779_1, VkglTestCase_021779_2);

#define VkglTestCase_021780_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021780_2 "random.all_features.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021780, VkglTestCase_021780_1, VkglTestCase_021780_2);

#define VkglTestCase_021781_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021781_2 "random.all_features.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021781, VkglTestCase_021781_1, VkglTestCase_021781_2);

#define VkglTestCase_021782_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021782_2 "random.all_features.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021782, VkglTestCase_021782_1, VkglTestCase_021782_2);

#define VkglTestCase_021783_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021783_2 "random.all_features.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021783, VkglTestCase_021783_1, VkglTestCase_021783_2);

#define VkglTestCase_021784_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021784_2 "random.all_features.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021784, VkglTestCase_021784_1, VkglTestCase_021784_2);

#define VkglTestCase_021785_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021785_2 "random.all_features.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021785, VkglTestCase_021785_1, VkglTestCase_021785_2);

#define VkglTestCase_021786_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021786_2 "random.all_features.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021786, VkglTestCase_021786_1, VkglTestCase_021786_2);

#define VkglTestCase_021787_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021787_2 "random.all_features.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021787, VkglTestCase_021787_1, VkglTestCase_021787_2);

#define VkglTestCase_021788_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021788_2 "random.all_features.fragment.50"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021788, VkglTestCase_021788_1, VkglTestCase_021788_2);

#define VkglTestCase_021789_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021789_2 "random.all_features.fragment.51"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021789, VkglTestCase_021789_1, VkglTestCase_021789_2);

#define VkglTestCase_021790_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021790_2 "random.all_features.fragment.52"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021790, VkglTestCase_021790_1, VkglTestCase_021790_2);

#define VkglTestCase_021791_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021791_2 "random.all_features.fragment.54"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021791, VkglTestCase_021791_1, VkglTestCase_021791_2);

#define VkglTestCase_021792_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021792_2 "random.all_features.fragment.57"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021792, VkglTestCase_021792_1, VkglTestCase_021792_2);

#define VkglTestCase_021793_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021793_2 "random.all_features.fragment.58"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021793, VkglTestCase_021793_1, VkglTestCase_021793_2);

#define VkglTestCase_021794_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021794_2 "random.all_features.fragment.59"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021794, VkglTestCase_021794_1, VkglTestCase_021794_2);

#define VkglTestCase_021795_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021795_2 "random.all_features.fragment.60"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021795, VkglTestCase_021795_1, VkglTestCase_021795_2);

#define VkglTestCase_021796_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021796_2 "random.all_features.fragment.61"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021796, VkglTestCase_021796_1, VkglTestCase_021796_2);

#define VkglTestCase_021797_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021797_2 "random.all_features.fragment.62"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021797, VkglTestCase_021797_1, VkglTestCase_021797_2);

#define VkglTestCase_021798_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021798_2 "random.all_features.fragment.63"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021798, VkglTestCase_021798_1, VkglTestCase_021798_2);

#define VkglTestCase_021799_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021799_2 "random.all_features.fragment.67"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021799, VkglTestCase_021799_1, VkglTestCase_021799_2);

#define VkglTestCase_021800_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021800_2 "random.all_features.fragment.68"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021800, VkglTestCase_021800_1, VkglTestCase_021800_2);

#define VkglTestCase_021801_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021801_2 "random.all_features.fragment.71"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021801, VkglTestCase_021801_1, VkglTestCase_021801_2);

#define VkglTestCase_021802_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021802_2 "random.all_features.fragment.73"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021802, VkglTestCase_021802_1, VkglTestCase_021802_2);

#define VkglTestCase_021803_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021803_2 "random.all_features.fragment.74"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021803, VkglTestCase_021803_1, VkglTestCase_021803_2);

#define VkglTestCase_021804_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021804_2 "random.all_features.fragment.75"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021804, VkglTestCase_021804_1, VkglTestCase_021804_2);

#define VkglTestCase_021805_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021805_2 "random.all_features.fragment.76"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021805, VkglTestCase_021805_1, VkglTestCase_021805_2);

#define VkglTestCase_021806_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021806_2 "random.all_features.fragment.77"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021806, VkglTestCase_021806_1, VkglTestCase_021806_2);

#define VkglTestCase_021807_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021807_2 "random.all_features.fragment.78"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021807, VkglTestCase_021807_1, VkglTestCase_021807_2);

#define VkglTestCase_021808_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021808_2 "random.all_features.fragment.79"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021808, VkglTestCase_021808_1, VkglTestCase_021808_2);

#define VkglTestCase_021809_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021809_2 "random.all_features.fragment.82"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021809, VkglTestCase_021809_1, VkglTestCase_021809_2);

#define VkglTestCase_021810_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021810_2 "random.all_features.fragment.83"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021810, VkglTestCase_021810_1, VkglTestCase_021810_2);

#define VkglTestCase_021811_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021811_2 "random.all_features.fragment.84"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021811, VkglTestCase_021811_1, VkglTestCase_021811_2);

#define VkglTestCase_021812_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021812_2 "random.all_features.fragment.85"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021812, VkglTestCase_021812_1, VkglTestCase_021812_2);

#define VkglTestCase_021813_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021813_2 "random.all_features.fragment.87"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021813, VkglTestCase_021813_1, VkglTestCase_021813_2);

#define VkglTestCase_021814_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021814_2 "random.all_features.fragment.88"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021814, VkglTestCase_021814_1, VkglTestCase_021814_2);

#define VkglTestCase_021815_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021815_2 "random.all_features.fragment.90"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021815, VkglTestCase_021815_1, VkglTestCase_021815_2);

#define VkglTestCase_021816_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021816_2 "random.all_features.fragment.91"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021816, VkglTestCase_021816_1, VkglTestCase_021816_2);

#define VkglTestCase_021817_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021817_2 "random.all_features.fragment.92"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021817, VkglTestCase_021817_1, VkglTestCase_021817_2);

#define VkglTestCase_021818_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021818_2 "random.all_features.fragment.93"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021818, VkglTestCase_021818_1, VkglTestCase_021818_2);

#define VkglTestCase_021819_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021819_2 "random.all_features.fragment.95"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021819, VkglTestCase_021819_1, VkglTestCase_021819_2);

#define VkglTestCase_021820_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021820_2 "random.all_features.fragment.97"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021820, VkglTestCase_021820_1, VkglTestCase_021820_2);

#define VkglTestCase_021821_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021821_2 "random.all_features.fragment.98"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021821, VkglTestCase_021821_1, VkglTestCase_021821_2);

#define VkglTestCase_021822_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021822_2 "random.all_features.fragment.99"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021822, VkglTestCase_021822_1, VkglTestCase_021822_2);
