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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007862_1 "dEQP-GLES31.functional"
#define VkglTestCase_007862_2 ".draw_indirect.random.0"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007862, VkglTestCase_007862_1, VkglTestCase_007862_2);

#define VkglTestCase_007863_1 "dEQP-GLES31.functional"
#define VkglTestCase_007863_2 ".draw_indirect.random.2"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007863, VkglTestCase_007863_1, VkglTestCase_007863_2);

#define VkglTestCase_007864_1 "dEQP-GLES31.functional"
#define VkglTestCase_007864_2 ".draw_indirect.random.3"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007864, VkglTestCase_007864_1, VkglTestCase_007864_2);

#define VkglTestCase_007865_1 "dEQP-GLES31.functional"
#define VkglTestCase_007865_2 ".draw_indirect.random.4"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007865, VkglTestCase_007865_1, VkglTestCase_007865_2);

#define VkglTestCase_007866_1 "dEQP-GLES31.functional"
#define VkglTestCase_007866_2 ".draw_indirect.random.5"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007866, VkglTestCase_007866_1, VkglTestCase_007866_2);

#define VkglTestCase_007867_1 "dEQP-GLES31.functional"
#define VkglTestCase_007867_2 ".draw_indirect.random.6"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007867, VkglTestCase_007867_1, VkglTestCase_007867_2);

#define VkglTestCase_007868_1 "dEQP-GLES31.functional"
#define VkglTestCase_007868_2 ".draw_indirect.random.7"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007868, VkglTestCase_007868_1, VkglTestCase_007868_2);

#define VkglTestCase_007869_1 "dEQP-GLES31.functional"
#define VkglTestCase_007869_2 ".draw_indirect.random.8"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007869, VkglTestCase_007869_1, VkglTestCase_007869_2);

#define VkglTestCase_007870_1 "dEQP-GLES31.functional."
#define VkglTestCase_007870_2 "draw_indirect.random.10"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007870, VkglTestCase_007870_1, VkglTestCase_007870_2);

#define VkglTestCase_007871_1 "dEQP-GLES31.functional."
#define VkglTestCase_007871_2 "draw_indirect.random.11"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007871, VkglTestCase_007871_1, VkglTestCase_007871_2);

#define VkglTestCase_007872_1 "dEQP-GLES31.functional."
#define VkglTestCase_007872_2 "draw_indirect.random.12"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007872, VkglTestCase_007872_1, VkglTestCase_007872_2);

#define VkglTestCase_007873_1 "dEQP-GLES31.functional."
#define VkglTestCase_007873_2 "draw_indirect.random.13"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007873, VkglTestCase_007873_1, VkglTestCase_007873_2);

#define VkglTestCase_007874_1 "dEQP-GLES31.functional."
#define VkglTestCase_007874_2 "draw_indirect.random.14"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007874, VkglTestCase_007874_1, VkglTestCase_007874_2);

#define VkglTestCase_007875_1 "dEQP-GLES31.functional."
#define VkglTestCase_007875_2 "draw_indirect.random.15"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007875, VkglTestCase_007875_1, VkglTestCase_007875_2);

#define VkglTestCase_007876_1 "dEQP-GLES31.functional."
#define VkglTestCase_007876_2 "draw_indirect.random.17"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007876, VkglTestCase_007876_1, VkglTestCase_007876_2);

#define VkglTestCase_007877_1 "dEQP-GLES31.functional."
#define VkglTestCase_007877_2 "draw_indirect.random.18"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007877, VkglTestCase_007877_1, VkglTestCase_007877_2);

#define VkglTestCase_007878_1 "dEQP-GLES31.functional."
#define VkglTestCase_007878_2 "draw_indirect.random.19"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007878, VkglTestCase_007878_1, VkglTestCase_007878_2);

#define VkglTestCase_007879_1 "dEQP-GLES31.functional."
#define VkglTestCase_007879_2 "draw_indirect.random.20"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007879, VkglTestCase_007879_1, VkglTestCase_007879_2);

#define VkglTestCase_007880_1 "dEQP-GLES31.functional."
#define VkglTestCase_007880_2 "draw_indirect.random.21"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007880, VkglTestCase_007880_1, VkglTestCase_007880_2);

#define VkglTestCase_007881_1 "dEQP-GLES31.functional."
#define VkglTestCase_007881_2 "draw_indirect.random.22"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007881, VkglTestCase_007881_1, VkglTestCase_007881_2);

#define VkglTestCase_007882_1 "dEQP-GLES31.functional."
#define VkglTestCase_007882_2 "draw_indirect.random.24"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007882, VkglTestCase_007882_1, VkglTestCase_007882_2);

#define VkglTestCase_007883_1 "dEQP-GLES31.functional."
#define VkglTestCase_007883_2 "draw_indirect.random.25"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007883, VkglTestCase_007883_1, VkglTestCase_007883_2);

#define VkglTestCase_007884_1 "dEQP-GLES31.functional."
#define VkglTestCase_007884_2 "draw_indirect.random.27"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007884, VkglTestCase_007884_1, VkglTestCase_007884_2);

#define VkglTestCase_007885_1 "dEQP-GLES31.functional."
#define VkglTestCase_007885_2 "draw_indirect.random.28"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007885, VkglTestCase_007885_1, VkglTestCase_007885_2);

#define VkglTestCase_007886_1 "dEQP-GLES31.functional."
#define VkglTestCase_007886_2 "draw_indirect.random.29"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007886, VkglTestCase_007886_1, VkglTestCase_007886_2);

#define VkglTestCase_007887_1 "dEQP-GLES31.functional."
#define VkglTestCase_007887_2 "draw_indirect.random.30"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007887, VkglTestCase_007887_1, VkglTestCase_007887_2);

#define VkglTestCase_007888_1 "dEQP-GLES31.functional."
#define VkglTestCase_007888_2 "draw_indirect.random.31"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007888, VkglTestCase_007888_1, VkglTestCase_007888_2);

#define VkglTestCase_007889_1 "dEQP-GLES31.functional."
#define VkglTestCase_007889_2 "draw_indirect.random.32"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007889, VkglTestCase_007889_1, VkglTestCase_007889_2);

#define VkglTestCase_007890_1 "dEQP-GLES31.functional."
#define VkglTestCase_007890_2 "draw_indirect.random.35"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007890, VkglTestCase_007890_1, VkglTestCase_007890_2);

#define VkglTestCase_007891_1 "dEQP-GLES31.functional."
#define VkglTestCase_007891_2 "draw_indirect.random.36"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007891, VkglTestCase_007891_1, VkglTestCase_007891_2);

#define VkglTestCase_007892_1 "dEQP-GLES31.functional."
#define VkglTestCase_007892_2 "draw_indirect.random.37"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007892, VkglTestCase_007892_1, VkglTestCase_007892_2);

#define VkglTestCase_007893_1 "dEQP-GLES31.functional."
#define VkglTestCase_007893_2 "draw_indirect.random.38"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007893, VkglTestCase_007893_1, VkglTestCase_007893_2);

#define VkglTestCase_007894_1 "dEQP-GLES31.functional."
#define VkglTestCase_007894_2 "draw_indirect.random.39"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007894, VkglTestCase_007894_1, VkglTestCase_007894_2);

#define VkglTestCase_007895_1 "dEQP-GLES31.functional."
#define VkglTestCase_007895_2 "draw_indirect.random.40"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007895, VkglTestCase_007895_1, VkglTestCase_007895_2);

#define VkglTestCase_007896_1 "dEQP-GLES31.functional."
#define VkglTestCase_007896_2 "draw_indirect.random.42"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007896, VkglTestCase_007896_1, VkglTestCase_007896_2);

#define VkglTestCase_007897_1 "dEQP-GLES31.functional."
#define VkglTestCase_007897_2 "draw_indirect.random.43"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007897, VkglTestCase_007897_1, VkglTestCase_007897_2);

#define VkglTestCase_007898_1 "dEQP-GLES31.functional."
#define VkglTestCase_007898_2 "draw_indirect.random.44"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007898, VkglTestCase_007898_1, VkglTestCase_007898_2);

#define VkglTestCase_007899_1 "dEQP-GLES31.functional."
#define VkglTestCase_007899_2 "draw_indirect.random.45"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007899, VkglTestCase_007899_1, VkglTestCase_007899_2);

#define VkglTestCase_007900_1 "dEQP-GLES31.functional."
#define VkglTestCase_007900_2 "draw_indirect.random.46"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007900, VkglTestCase_007900_1, VkglTestCase_007900_2);

#define VkglTestCase_007901_1 "dEQP-GLES31.functional."
#define VkglTestCase_007901_2 "draw_indirect.random.47"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007901, VkglTestCase_007901_1, VkglTestCase_007901_2);

#define VkglTestCase_007902_1 "dEQP-GLES31.functional."
#define VkglTestCase_007902_2 "draw_indirect.random.48"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007902, VkglTestCase_007902_1, VkglTestCase_007902_2);

#define VkglTestCase_007903_1 "dEQP-GLES31.functional."
#define VkglTestCase_007903_2 "draw_indirect.random.49"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007903, VkglTestCase_007903_1, VkglTestCase_007903_2);

#define VkglTestCase_007904_1 "dEQP-GLES31.functional."
#define VkglTestCase_007904_2 "draw_indirect.random.50"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007904, VkglTestCase_007904_1, VkglTestCase_007904_2);

#define VkglTestCase_007905_1 "dEQP-GLES31.functional."
#define VkglTestCase_007905_2 "draw_indirect.random.51"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007905, VkglTestCase_007905_1, VkglTestCase_007905_2);

#define VkglTestCase_007906_1 "dEQP-GLES31.functional."
#define VkglTestCase_007906_2 "draw_indirect.random.52"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007906, VkglTestCase_007906_1, VkglTestCase_007906_2);

#define VkglTestCase_007907_1 "dEQP-GLES31.functional."
#define VkglTestCase_007907_2 "draw_indirect.random.53"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007907, VkglTestCase_007907_1, VkglTestCase_007907_2);

#define VkglTestCase_007908_1 "dEQP-GLES31.functional."
#define VkglTestCase_007908_2 "draw_indirect.random.54"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007908, VkglTestCase_007908_1, VkglTestCase_007908_2);

#define VkglTestCase_007909_1 "dEQP-GLES31.functional."
#define VkglTestCase_007909_2 "draw_indirect.random.55"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007909, VkglTestCase_007909_1, VkglTestCase_007909_2);

#define VkglTestCase_007910_1 "dEQP-GLES31.functional."
#define VkglTestCase_007910_2 "draw_indirect.random.56"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007910, VkglTestCase_007910_1, VkglTestCase_007910_2);

#define VkglTestCase_007911_1 "dEQP-GLES31.functional."
#define VkglTestCase_007911_2 "draw_indirect.random.57"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007911, VkglTestCase_007911_1, VkglTestCase_007911_2);

#define VkglTestCase_007912_1 "dEQP-GLES31.functional."
#define VkglTestCase_007912_2 "draw_indirect.random.61"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007912, VkglTestCase_007912_1, VkglTestCase_007912_2);
