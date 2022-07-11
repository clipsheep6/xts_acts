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
#include "../ActsDeqpgles20011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010298_1 "dEQP-GLES2.functional.te"
#define VkglTestCase_010298_2 "xture.size.cube.15x15_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010298, VkglTestCase_010298_1, VkglTestCase_010298_2);

#define VkglTestCase_010299_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010299_2 "re.size.cube.15x15_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010299, VkglTestCase_010299_1, VkglTestCase_010299_2);

#define VkglTestCase_010300_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010300_2 "ure.size.cube.15x15_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010300, VkglTestCase_010300_1, VkglTestCase_010300_2);

#define VkglTestCase_010301_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010301_2 "re.size.cube.15x15_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010301, VkglTestCase_010301_1, VkglTestCase_010301_2);

#define VkglTestCase_010302_1 "dEQP-GLES2.functional.te"
#define VkglTestCase_010302_2 "xture.size.cube.16x16_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010302, VkglTestCase_010302_1, VkglTestCase_010302_2);

#define VkglTestCase_010303_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010303_2 "re.size.cube.16x16_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010303, VkglTestCase_010303_1, VkglTestCase_010303_2);

#define VkglTestCase_010304_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010304_2 "re.size.cube.16x16_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010304, VkglTestCase_010304_1, VkglTestCase_010304_2);

#define VkglTestCase_010305_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010305_2 "size.cube.16x16_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010305, VkglTestCase_010305_1, VkglTestCase_010305_2);

#define VkglTestCase_010306_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010306_2 "ure.size.cube.16x16_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010306, VkglTestCase_010306_1, VkglTestCase_010306_2);

#define VkglTestCase_010307_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010307_2 ".size.cube.16x16_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010307, VkglTestCase_010307_1, VkglTestCase_010307_2);

#define VkglTestCase_010308_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010308_2 "re.size.cube.16x16_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010308, VkglTestCase_010308_1, VkglTestCase_010308_2);

#define VkglTestCase_010309_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010309_2 "size.cube.16x16_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010309, VkglTestCase_010309_1, VkglTestCase_010309_2);

#define VkglTestCase_010310_1 "dEQP-GLES2.functional.te"
#define VkglTestCase_010310_2 "xture.size.cube.64x64_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010310, VkglTestCase_010310_1, VkglTestCase_010310_2);

#define VkglTestCase_010311_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010311_2 "re.size.cube.64x64_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010311, VkglTestCase_010311_1, VkglTestCase_010311_2);

#define VkglTestCase_010312_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010312_2 "re.size.cube.64x64_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010312, VkglTestCase_010312_1, VkglTestCase_010312_2);

#define VkglTestCase_010313_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010313_2 "size.cube.64x64_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010313, VkglTestCase_010313_1, VkglTestCase_010313_2);

#define VkglTestCase_010314_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010314_2 "ure.size.cube.64x64_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010314, VkglTestCase_010314_1, VkglTestCase_010314_2);

#define VkglTestCase_010315_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010315_2 ".size.cube.64x64_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010315, VkglTestCase_010315_1, VkglTestCase_010315_2);

#define VkglTestCase_010316_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010316_2 "re.size.cube.64x64_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010316, VkglTestCase_010316_1, VkglTestCase_010316_2);

#define VkglTestCase_010317_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010317_2 "size.cube.64x64_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010317, VkglTestCase_010317_1, VkglTestCase_010317_2);

#define VkglTestCase_010318_1 "dEQP-GLES2.functional.tex"
#define VkglTestCase_010318_2 "ture.size.cube.128x128_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010318, VkglTestCase_010318_1, VkglTestCase_010318_2);

#define VkglTestCase_010319_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010319_2 "e.size.cube.128x128_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010319, VkglTestCase_010319_1, VkglTestCase_010319_2);

#define VkglTestCase_010320_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010320_2 "e.size.cube.128x128_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010320, VkglTestCase_010320_1, VkglTestCase_010320_2);

#define VkglTestCase_010321_1 "dEQP-GLES2.functional.texture.s"
#define VkglTestCase_010321_2 "ize.cube.128x128_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010321, VkglTestCase_010321_1, VkglTestCase_010321_2);

#define VkglTestCase_010322_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010322_2 "re.size.cube.128x128_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010322, VkglTestCase_010322_1, VkglTestCase_010322_2);

#define VkglTestCase_010323_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010323_2 "size.cube.128x128_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010323, VkglTestCase_010323_1, VkglTestCase_010323_2);

#define VkglTestCase_010324_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010324_2 "e.size.cube.128x128_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010324, VkglTestCase_010324_1, VkglTestCase_010324_2);

#define VkglTestCase_010325_1 "dEQP-GLES2.functional.texture.s"
#define VkglTestCase_010325_2 "ize.cube.128x128_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010325, VkglTestCase_010325_1, VkglTestCase_010325_2);

#define VkglTestCase_010326_1 "dEQP-GLES2.functional.tex"
#define VkglTestCase_010326_2 "ture.size.cube.256x256_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010326, VkglTestCase_010326_1, VkglTestCase_010326_2);

#define VkglTestCase_010327_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010327_2 "e.size.cube.256x256_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010327, VkglTestCase_010327_1, VkglTestCase_010327_2);

#define VkglTestCase_010328_1 "dEQP-GLES2.functional.texture.s"
#define VkglTestCase_010328_2 "ize.cube.256x256_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010328, VkglTestCase_010328_1, VkglTestCase_010328_2);

#define VkglTestCase_010329_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010329_2 "re.size.cube.256x256_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010329, VkglTestCase_010329_1, VkglTestCase_010329_2);

#define VkglTestCase_010330_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010330_2 "size.cube.256x256_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010330, VkglTestCase_010330_1, VkglTestCase_010330_2);

#define VkglTestCase_010331_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010331_2 "e.size.cube.256x256_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010331, VkglTestCase_010331_1, VkglTestCase_010331_2);

#define VkglTestCase_010332_1 "dEQP-GLES2.functional.texture.s"
#define VkglTestCase_010332_2 "ize.cube.256x256_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010332, VkglTestCase_010332_1, VkglTestCase_010332_2);

#define VkglTestCase_010333_1 "dEQP-GLES2.functional.tex"
#define VkglTestCase_010333_2 "ture.size.cube.512x512_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010333, VkglTestCase_010333_1, VkglTestCase_010333_2);

#define VkglTestCase_010334_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010334_2 "e.size.cube.512x512_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010334, VkglTestCase_010334_1, VkglTestCase_010334_2);

#define VkglTestCase_010335_1 "dEQP-GLES2.functional.texture.s"
#define VkglTestCase_010335_2 "ize.cube.512x512_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010335, VkglTestCase_010335_1, VkglTestCase_010335_2);

#define VkglTestCase_010336_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010336_2 "re.size.cube.512x512_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010336, VkglTestCase_010336_1, VkglTestCase_010336_2);

#define VkglTestCase_010337_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010337_2 "size.cube.512x512_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010337, VkglTestCase_010337_1, VkglTestCase_010337_2);

#define VkglTestCase_010338_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010338_2 "e.size.cube.512x512_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010338, VkglTestCase_010338_1, VkglTestCase_010338_2);

#define VkglTestCase_010339_1 "dEQP-GLES2.functional.texture.s"
#define VkglTestCase_010339_2 "ize.cube.512x512_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010339, VkglTestCase_010339_1, VkglTestCase_010339_2);
