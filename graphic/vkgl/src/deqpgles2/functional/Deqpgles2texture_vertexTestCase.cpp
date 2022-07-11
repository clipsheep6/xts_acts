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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009832_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_009832_2 "ers.random.texture.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009832, VkglTestCase_009832_1, VkglTestCase_009832_2);

#define VkglTestCase_009833_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_009833_2 "ers.random.texture.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009833, VkglTestCase_009833_1, VkglTestCase_009833_2);

#define VkglTestCase_009834_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_009834_2 "ers.random.texture.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009834, VkglTestCase_009834_1, VkglTestCase_009834_2);

#define VkglTestCase_009835_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_009835_2 "ers.random.texture.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009835, VkglTestCase_009835_1, VkglTestCase_009835_2);

#define VkglTestCase_009836_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_009836_2 "ers.random.texture.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009836, VkglTestCase_009836_1, VkglTestCase_009836_2);

#define VkglTestCase_009837_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_009837_2 "ers.random.texture.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009837, VkglTestCase_009837_1, VkglTestCase_009837_2);

#define VkglTestCase_009838_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_009838_2 "ers.random.texture.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009838, VkglTestCase_009838_1, VkglTestCase_009838_2);

#define VkglTestCase_009839_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_009839_2 "ers.random.texture.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009839, VkglTestCase_009839_1, VkglTestCase_009839_2);

#define VkglTestCase_009840_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_009840_2 "ers.random.texture.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009840, VkglTestCase_009840_1, VkglTestCase_009840_2);

#define VkglTestCase_009841_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_009841_2 "ers.random.texture.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009841, VkglTestCase_009841_1, VkglTestCase_009841_2);

#define VkglTestCase_009842_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009842_2 "rs.random.texture.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009842, VkglTestCase_009842_1, VkglTestCase_009842_2);

#define VkglTestCase_009843_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009843_2 "rs.random.texture.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009843, VkglTestCase_009843_1, VkglTestCase_009843_2);

#define VkglTestCase_009844_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009844_2 "rs.random.texture.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009844, VkglTestCase_009844_1, VkglTestCase_009844_2);

#define VkglTestCase_009845_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009845_2 "rs.random.texture.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009845, VkglTestCase_009845_1, VkglTestCase_009845_2);

#define VkglTestCase_009846_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009846_2 "rs.random.texture.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009846, VkglTestCase_009846_1, VkglTestCase_009846_2);

#define VkglTestCase_009847_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009847_2 "rs.random.texture.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009847, VkglTestCase_009847_1, VkglTestCase_009847_2);

#define VkglTestCase_009848_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009848_2 "rs.random.texture.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009848, VkglTestCase_009848_1, VkglTestCase_009848_2);

#define VkglTestCase_009849_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009849_2 "rs.random.texture.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009849, VkglTestCase_009849_1, VkglTestCase_009849_2);

#define VkglTestCase_009850_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009850_2 "rs.random.texture.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009850, VkglTestCase_009850_1, VkglTestCase_009850_2);

#define VkglTestCase_009851_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009851_2 "rs.random.texture.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009851, VkglTestCase_009851_1, VkglTestCase_009851_2);

#define VkglTestCase_009852_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009852_2 "rs.random.texture.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009852, VkglTestCase_009852_1, VkglTestCase_009852_2);

#define VkglTestCase_009853_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009853_2 "rs.random.texture.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009853, VkglTestCase_009853_1, VkglTestCase_009853_2);

#define VkglTestCase_009854_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009854_2 "rs.random.texture.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009854, VkglTestCase_009854_1, VkglTestCase_009854_2);

#define VkglTestCase_009855_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009855_2 "rs.random.texture.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009855, VkglTestCase_009855_1, VkglTestCase_009855_2);

#define VkglTestCase_009856_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009856_2 "rs.random.texture.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009856, VkglTestCase_009856_1, VkglTestCase_009856_2);

#define VkglTestCase_009857_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009857_2 "rs.random.texture.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009857, VkglTestCase_009857_1, VkglTestCase_009857_2);

#define VkglTestCase_009858_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009858_2 "rs.random.texture.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009858, VkglTestCase_009858_1, VkglTestCase_009858_2);

#define VkglTestCase_009859_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009859_2 "rs.random.texture.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009859, VkglTestCase_009859_1, VkglTestCase_009859_2);

#define VkglTestCase_009860_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009860_2 "rs.random.texture.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009860, VkglTestCase_009860_1, VkglTestCase_009860_2);

#define VkglTestCase_009861_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009861_2 "rs.random.texture.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009861, VkglTestCase_009861_1, VkglTestCase_009861_2);

#define VkglTestCase_009862_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009862_2 "rs.random.texture.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009862, VkglTestCase_009862_1, VkglTestCase_009862_2);

#define VkglTestCase_009863_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009863_2 "rs.random.texture.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009863, VkglTestCase_009863_1, VkglTestCase_009863_2);

#define VkglTestCase_009864_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009864_2 "rs.random.texture.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009864, VkglTestCase_009864_1, VkglTestCase_009864_2);

#define VkglTestCase_009865_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009865_2 "rs.random.texture.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009865, VkglTestCase_009865_1, VkglTestCase_009865_2);

#define VkglTestCase_009866_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009866_2 "rs.random.texture.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009866, VkglTestCase_009866_1, VkglTestCase_009866_2);

#define VkglTestCase_009867_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009867_2 "rs.random.texture.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009867, VkglTestCase_009867_1, VkglTestCase_009867_2);

#define VkglTestCase_009868_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009868_2 "rs.random.texture.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009868, VkglTestCase_009868_1, VkglTestCase_009868_2);

#define VkglTestCase_009869_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009869_2 "rs.random.texture.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009869, VkglTestCase_009869_1, VkglTestCase_009869_2);

#define VkglTestCase_009870_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009870_2 "rs.random.texture.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009870, VkglTestCase_009870_1, VkglTestCase_009870_2);

#define VkglTestCase_009871_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009871_2 "rs.random.texture.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009871, VkglTestCase_009871_1, VkglTestCase_009871_2);

#define VkglTestCase_009872_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009872_2 "rs.random.texture.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009872, VkglTestCase_009872_1, VkglTestCase_009872_2);

#define VkglTestCase_009873_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009873_2 "rs.random.texture.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009873, VkglTestCase_009873_1, VkglTestCase_009873_2);

#define VkglTestCase_009874_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009874_2 "rs.random.texture.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009874, VkglTestCase_009874_1, VkglTestCase_009874_2);

#define VkglTestCase_009875_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009875_2 "rs.random.texture.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009875, VkglTestCase_009875_1, VkglTestCase_009875_2);

#define VkglTestCase_009876_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009876_2 "rs.random.texture.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009876, VkglTestCase_009876_1, VkglTestCase_009876_2);

#define VkglTestCase_009877_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009877_2 "rs.random.texture.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009877, VkglTestCase_009877_1, VkglTestCase_009877_2);

#define VkglTestCase_009878_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009878_2 "rs.random.texture.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009878, VkglTestCase_009878_1, VkglTestCase_009878_2);

#define VkglTestCase_009879_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009879_2 "rs.random.texture.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009879, VkglTestCase_009879_1, VkglTestCase_009879_2);

#define VkglTestCase_009880_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009880_2 "rs.random.texture.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009880, VkglTestCase_009880_1, VkglTestCase_009880_2);

#define VkglTestCase_009881_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009881_2 "rs.random.texture.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009881, VkglTestCase_009881_1, VkglTestCase_009881_2);
