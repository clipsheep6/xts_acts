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
#include "../ActsDeqpgles30021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020794_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020794_2 ".random.conditionals.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020794, VkglTestCase_020794_1, VkglTestCase_020794_2);

#define VkglTestCase_020795_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020795_2 ".random.conditionals.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020795, VkglTestCase_020795_1, VkglTestCase_020795_2);

#define VkglTestCase_020796_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020796_2 ".random.conditionals.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020796, VkglTestCase_020796_1, VkglTestCase_020796_2);

#define VkglTestCase_020797_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020797_2 ".random.conditionals.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020797, VkglTestCase_020797_1, VkglTestCase_020797_2);

#define VkglTestCase_020798_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020798_2 ".random.conditionals.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020798, VkglTestCase_020798_1, VkglTestCase_020798_2);

#define VkglTestCase_020799_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020799_2 ".random.conditionals.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020799, VkglTestCase_020799_1, VkglTestCase_020799_2);

#define VkglTestCase_020800_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020800_2 ".random.conditionals.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020800, VkglTestCase_020800_1, VkglTestCase_020800_2);

#define VkglTestCase_020801_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020801_2 ".random.conditionals.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020801, VkglTestCase_020801_1, VkglTestCase_020801_2);

#define VkglTestCase_020802_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020802_2 ".random.conditionals.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020802, VkglTestCase_020802_1, VkglTestCase_020802_2);

#define VkglTestCase_020803_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020803_2 ".random.conditionals.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020803, VkglTestCase_020803_1, VkglTestCase_020803_2);

#define VkglTestCase_020804_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020804_2 ".random.conditionals.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020804, VkglTestCase_020804_1, VkglTestCase_020804_2);

#define VkglTestCase_020805_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020805_2 ".random.conditionals.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020805, VkglTestCase_020805_1, VkglTestCase_020805_2);

#define VkglTestCase_020806_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020806_2 ".random.conditionals.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020806, VkglTestCase_020806_1, VkglTestCase_020806_2);

#define VkglTestCase_020807_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020807_2 ".random.conditionals.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020807, VkglTestCase_020807_1, VkglTestCase_020807_2);

#define VkglTestCase_020808_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020808_2 ".random.conditionals.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020808, VkglTestCase_020808_1, VkglTestCase_020808_2);

#define VkglTestCase_020809_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020809_2 ".random.conditionals.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020809, VkglTestCase_020809_1, VkglTestCase_020809_2);

#define VkglTestCase_020810_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020810_2 ".random.conditionals.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020810, VkglTestCase_020810_1, VkglTestCase_020810_2);

#define VkglTestCase_020811_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020811_2 ".random.conditionals.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020811, VkglTestCase_020811_1, VkglTestCase_020811_2);

#define VkglTestCase_020812_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020812_2 ".random.conditionals.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020812, VkglTestCase_020812_1, VkglTestCase_020812_2);

#define VkglTestCase_020813_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020813_2 ".random.conditionals.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020813, VkglTestCase_020813_1, VkglTestCase_020813_2);

#define VkglTestCase_020814_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020814_2 ".random.conditionals.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020814, VkglTestCase_020814_1, VkglTestCase_020814_2);

#define VkglTestCase_020815_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020815_2 ".random.conditionals.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020815, VkglTestCase_020815_1, VkglTestCase_020815_2);

#define VkglTestCase_020816_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020816_2 ".random.conditionals.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020816, VkglTestCase_020816_1, VkglTestCase_020816_2);

#define VkglTestCase_020817_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020817_2 ".random.conditionals.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020817, VkglTestCase_020817_1, VkglTestCase_020817_2);

#define VkglTestCase_020818_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020818_2 ".random.conditionals.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020818, VkglTestCase_020818_1, VkglTestCase_020818_2);

#define VkglTestCase_020819_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020819_2 ".random.conditionals.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020819, VkglTestCase_020819_1, VkglTestCase_020819_2);

#define VkglTestCase_020820_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020820_2 ".random.conditionals.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020820, VkglTestCase_020820_1, VkglTestCase_020820_2);

#define VkglTestCase_020821_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020821_2 ".random.conditionals.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020821, VkglTestCase_020821_1, VkglTestCase_020821_2);

#define VkglTestCase_020822_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020822_2 ".random.conditionals.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020822, VkglTestCase_020822_1, VkglTestCase_020822_2);

#define VkglTestCase_020823_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020823_2 ".random.conditionals.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020823, VkglTestCase_020823_1, VkglTestCase_020823_2);

#define VkglTestCase_020824_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020824_2 ".random.conditionals.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020824, VkglTestCase_020824_1, VkglTestCase_020824_2);

#define VkglTestCase_020825_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020825_2 ".random.conditionals.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020825, VkglTestCase_020825_1, VkglTestCase_020825_2);

#define VkglTestCase_020826_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020826_2 ".random.conditionals.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020826, VkglTestCase_020826_1, VkglTestCase_020826_2);

#define VkglTestCase_020827_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020827_2 ".random.conditionals.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020827, VkglTestCase_020827_1, VkglTestCase_020827_2);

#define VkglTestCase_020828_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020828_2 ".random.conditionals.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020828, VkglTestCase_020828_1, VkglTestCase_020828_2);

#define VkglTestCase_020829_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020829_2 ".random.conditionals.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020829, VkglTestCase_020829_1, VkglTestCase_020829_2);

#define VkglTestCase_020830_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020830_2 ".random.conditionals.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020830, VkglTestCase_020830_1, VkglTestCase_020830_2);

#define VkglTestCase_020831_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020831_2 ".random.conditionals.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020831, VkglTestCase_020831_1, VkglTestCase_020831_2);

#define VkglTestCase_020832_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020832_2 ".random.conditionals.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020832, VkglTestCase_020832_1, VkglTestCase_020832_2);

#define VkglTestCase_020833_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020833_2 ".random.conditionals.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020833, VkglTestCase_020833_1, VkglTestCase_020833_2);

#define VkglTestCase_020834_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020834_2 ".random.conditionals.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020834, VkglTestCase_020834_1, VkglTestCase_020834_2);

#define VkglTestCase_020835_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020835_2 ".random.conditionals.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020835, VkglTestCase_020835_1, VkglTestCase_020835_2);

#define VkglTestCase_020836_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020836_2 ".random.conditionals.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020836, VkglTestCase_020836_1, VkglTestCase_020836_2);

#define VkglTestCase_020837_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020837_2 ".random.conditionals.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020837, VkglTestCase_020837_1, VkglTestCase_020837_2);

#define VkglTestCase_020838_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020838_2 ".random.conditionals.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020838, VkglTestCase_020838_1, VkglTestCase_020838_2);

#define VkglTestCase_020839_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020839_2 ".random.conditionals.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020839, VkglTestCase_020839_1, VkglTestCase_020839_2);

#define VkglTestCase_020840_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020840_2 ".random.conditionals.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020840, VkglTestCase_020840_1, VkglTestCase_020840_2);

#define VkglTestCase_020841_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020841_2 ".random.conditionals.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020841, VkglTestCase_020841_1, VkglTestCase_020841_2);

#define VkglTestCase_020842_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020842_2 ".random.conditionals.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020842, VkglTestCase_020842_1, VkglTestCase_020842_2);

#define VkglTestCase_020843_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020843_2 ".random.conditionals.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020843, VkglTestCase_020843_1, VkglTestCase_020843_2);

#define VkglTestCase_020844_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020844_2 ".random.conditionals.vertex.50"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020844, VkglTestCase_020844_1, VkglTestCase_020844_2);

#define VkglTestCase_020845_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020845_2 ".random.conditionals.vertex.51"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020845, VkglTestCase_020845_1, VkglTestCase_020845_2);

#define VkglTestCase_020846_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020846_2 ".random.conditionals.vertex.52"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020846, VkglTestCase_020846_1, VkglTestCase_020846_2);

#define VkglTestCase_020847_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020847_2 ".random.conditionals.vertex.53"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020847, VkglTestCase_020847_1, VkglTestCase_020847_2);

#define VkglTestCase_020848_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020848_2 ".random.conditionals.vertex.54"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020848, VkglTestCase_020848_1, VkglTestCase_020848_2);

#define VkglTestCase_020849_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020849_2 ".random.conditionals.vertex.55"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020849, VkglTestCase_020849_1, VkglTestCase_020849_2);

#define VkglTestCase_020850_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020850_2 ".random.conditionals.vertex.56"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020850, VkglTestCase_020850_1, VkglTestCase_020850_2);

#define VkglTestCase_020851_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020851_2 ".random.conditionals.vertex.57"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020851, VkglTestCase_020851_1, VkglTestCase_020851_2);

#define VkglTestCase_020852_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020852_2 ".random.conditionals.vertex.58"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020852, VkglTestCase_020852_1, VkglTestCase_020852_2);

#define VkglTestCase_020853_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020853_2 ".random.conditionals.vertex.59"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020853, VkglTestCase_020853_1, VkglTestCase_020853_2);

#define VkglTestCase_020854_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020854_2 ".random.conditionals.vertex.60"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020854, VkglTestCase_020854_1, VkglTestCase_020854_2);

#define VkglTestCase_020855_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020855_2 ".random.conditionals.vertex.61"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020855, VkglTestCase_020855_1, VkglTestCase_020855_2);

#define VkglTestCase_020856_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020856_2 ".random.conditionals.vertex.62"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020856, VkglTestCase_020856_1, VkglTestCase_020856_2);

#define VkglTestCase_020857_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020857_2 ".random.conditionals.vertex.63"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020857, VkglTestCase_020857_1, VkglTestCase_020857_2);

#define VkglTestCase_020858_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020858_2 ".random.conditionals.vertex.64"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020858, VkglTestCase_020858_1, VkglTestCase_020858_2);

#define VkglTestCase_020859_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020859_2 ".random.conditionals.vertex.65"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020859, VkglTestCase_020859_1, VkglTestCase_020859_2);

#define VkglTestCase_020860_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020860_2 ".random.conditionals.vertex.66"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020860, VkglTestCase_020860_1, VkglTestCase_020860_2);

#define VkglTestCase_020861_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020861_2 ".random.conditionals.vertex.67"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020861, VkglTestCase_020861_1, VkglTestCase_020861_2);

#define VkglTestCase_020862_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020862_2 ".random.conditionals.vertex.68"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020862, VkglTestCase_020862_1, VkglTestCase_020862_2);

#define VkglTestCase_020863_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020863_2 ".random.conditionals.vertex.69"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020863, VkglTestCase_020863_1, VkglTestCase_020863_2);

#define VkglTestCase_020864_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020864_2 ".random.conditionals.vertex.70"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020864, VkglTestCase_020864_1, VkglTestCase_020864_2);

#define VkglTestCase_020865_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020865_2 ".random.conditionals.vertex.71"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020865, VkglTestCase_020865_1, VkglTestCase_020865_2);

#define VkglTestCase_020866_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020866_2 ".random.conditionals.vertex.72"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020866, VkglTestCase_020866_1, VkglTestCase_020866_2);

#define VkglTestCase_020867_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020867_2 ".random.conditionals.vertex.73"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020867, VkglTestCase_020867_1, VkglTestCase_020867_2);

#define VkglTestCase_020868_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020868_2 ".random.conditionals.vertex.74"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020868, VkglTestCase_020868_1, VkglTestCase_020868_2);

#define VkglTestCase_020869_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020869_2 ".random.conditionals.vertex.75"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020869, VkglTestCase_020869_1, VkglTestCase_020869_2);

#define VkglTestCase_020870_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020870_2 ".random.conditionals.vertex.76"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020870, VkglTestCase_020870_1, VkglTestCase_020870_2);

#define VkglTestCase_020871_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020871_2 ".random.conditionals.vertex.77"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020871, VkglTestCase_020871_1, VkglTestCase_020871_2);

#define VkglTestCase_020872_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020872_2 ".random.conditionals.vertex.78"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020872, VkglTestCase_020872_1, VkglTestCase_020872_2);

#define VkglTestCase_020873_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020873_2 ".random.conditionals.vertex.79"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020873, VkglTestCase_020873_1, VkglTestCase_020873_2);

#define VkglTestCase_020874_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020874_2 ".random.conditionals.vertex.80"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020874, VkglTestCase_020874_1, VkglTestCase_020874_2);

#define VkglTestCase_020875_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020875_2 ".random.conditionals.vertex.81"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020875, VkglTestCase_020875_1, VkglTestCase_020875_2);

#define VkglTestCase_020876_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020876_2 ".random.conditionals.vertex.82"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020876, VkglTestCase_020876_1, VkglTestCase_020876_2);

#define VkglTestCase_020877_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020877_2 ".random.conditionals.vertex.83"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020877, VkglTestCase_020877_1, VkglTestCase_020877_2);

#define VkglTestCase_020878_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020878_2 ".random.conditionals.vertex.84"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020878, VkglTestCase_020878_1, VkglTestCase_020878_2);

#define VkglTestCase_020879_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020879_2 ".random.conditionals.vertex.85"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020879, VkglTestCase_020879_1, VkglTestCase_020879_2);

#define VkglTestCase_020880_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020880_2 ".random.conditionals.vertex.86"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020880, VkglTestCase_020880_1, VkglTestCase_020880_2);

#define VkglTestCase_020881_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020881_2 ".random.conditionals.vertex.87"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020881, VkglTestCase_020881_1, VkglTestCase_020881_2);

#define VkglTestCase_020882_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020882_2 ".random.conditionals.vertex.88"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020882, VkglTestCase_020882_1, VkglTestCase_020882_2);

#define VkglTestCase_020883_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020883_2 ".random.conditionals.vertex.89"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020883, VkglTestCase_020883_1, VkglTestCase_020883_2);

#define VkglTestCase_020884_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020884_2 ".random.conditionals.vertex.90"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020884, VkglTestCase_020884_1, VkglTestCase_020884_2);

#define VkglTestCase_020885_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020885_2 ".random.conditionals.vertex.91"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020885, VkglTestCase_020885_1, VkglTestCase_020885_2);

#define VkglTestCase_020886_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020886_2 ".random.conditionals.vertex.92"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020886, VkglTestCase_020886_1, VkglTestCase_020886_2);

#define VkglTestCase_020887_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020887_2 ".random.conditionals.vertex.93"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020887, VkglTestCase_020887_1, VkglTestCase_020887_2);

#define VkglTestCase_020888_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020888_2 ".random.conditionals.vertex.94"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020888, VkglTestCase_020888_1, VkglTestCase_020888_2);

#define VkglTestCase_020889_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020889_2 ".random.conditionals.vertex.95"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020889, VkglTestCase_020889_1, VkglTestCase_020889_2);

#define VkglTestCase_020890_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020890_2 ".random.conditionals.vertex.96"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020890, VkglTestCase_020890_1, VkglTestCase_020890_2);

#define VkglTestCase_020891_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020891_2 ".random.conditionals.vertex.97"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020891, VkglTestCase_020891_1, VkglTestCase_020891_2);

#define VkglTestCase_020892_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020892_2 ".random.conditionals.vertex.98"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020892, VkglTestCase_020892_1, VkglTestCase_020892_2);

#define VkglTestCase_020893_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_020893_2 ".random.conditionals.vertex.99"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020893, VkglTestCase_020893_1, VkglTestCase_020893_2);
