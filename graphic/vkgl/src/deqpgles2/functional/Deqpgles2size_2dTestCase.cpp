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

#define VkglTestCase_010266_1 "dEQP-GLES2.functional.t"
#define VkglTestCase_010266_2 "exture.size.2d.64x64_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010266, VkglTestCase_010266_1, VkglTestCase_010266_2);

#define VkglTestCase_010267_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010267_2 "ure.size.2d.64x64_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010267, VkglTestCase_010267_1, VkglTestCase_010267_2);

#define VkglTestCase_010268_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010268_2 "ure.size.2d.64x64_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010268, VkglTestCase_010268_1, VkglTestCase_010268_2);

#define VkglTestCase_010269_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010269_2 ".size.2d.64x64_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010269, VkglTestCase_010269_1, VkglTestCase_010269_2);

#define VkglTestCase_010270_1 "dEQP-GLES2.functional.tex"
#define VkglTestCase_010270_2 "ture.size.2d.64x64_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010270, VkglTestCase_010270_1, VkglTestCase_010270_2);

#define VkglTestCase_010271_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010271_2 "e.size.2d.64x64_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010271, VkglTestCase_010271_1, VkglTestCase_010271_2);

#define VkglTestCase_010272_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010272_2 "ure.size.2d.64x64_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010272, VkglTestCase_010272_1, VkglTestCase_010272_2);

#define VkglTestCase_010273_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010273_2 ".size.2d.64x64_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010273, VkglTestCase_010273_1, VkglTestCase_010273_2);

#define VkglTestCase_010274_1 "dEQP-GLES2.functional.t"
#define VkglTestCase_010274_2 "exture.size.2d.65x63_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010274, VkglTestCase_010274_1, VkglTestCase_010274_2);

#define VkglTestCase_010275_1 "dEQP-GLES2.functional.tex"
#define VkglTestCase_010275_2 "ture.size.2d.65x63_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010275, VkglTestCase_010275_1, VkglTestCase_010275_2);

#define VkglTestCase_010276_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010276_2 "ure.size.2d.65x63_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010276, VkglTestCase_010276_1, VkglTestCase_010276_2);

#define VkglTestCase_010277_1 "dEQP-GLES2.functional.te"
#define VkglTestCase_010277_2 "xture.size.2d.512x512_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010277, VkglTestCase_010277_1, VkglTestCase_010277_2);

#define VkglTestCase_010278_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010278_2 "re.size.2d.512x512_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010278, VkglTestCase_010278_1, VkglTestCase_010278_2);

#define VkglTestCase_010279_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010279_2 "size.2d.512x512_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010279, VkglTestCase_010279_1, VkglTestCase_010279_2);

#define VkglTestCase_010280_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010280_2 "ure.size.2d.512x512_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010280, VkglTestCase_010280_1, VkglTestCase_010280_2);

#define VkglTestCase_010281_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010281_2 ".size.2d.512x512_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010281, VkglTestCase_010281_1, VkglTestCase_010281_2);

#define VkglTestCase_010282_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010282_2 "re.size.2d.512x512_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010282, VkglTestCase_010282_1, VkglTestCase_010282_2);

#define VkglTestCase_010283_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010283_2 "size.2d.512x512_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010283, VkglTestCase_010283_1, VkglTestCase_010283_2);

#define VkglTestCase_010284_1 "dEQP-GLES2.functional.tex"
#define VkglTestCase_010284_2 "ture.size.2d.1024x1024_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010284, VkglTestCase_010284_1, VkglTestCase_010284_2);

#define VkglTestCase_010285_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010285_2 "e.size.2d.1024x1024_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010285, VkglTestCase_010285_1, VkglTestCase_010285_2);

#define VkglTestCase_010286_1 "dEQP-GLES2.functional.texture.s"
#define VkglTestCase_010286_2 "ize.2d.1024x1024_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010286, VkglTestCase_010286_1, VkglTestCase_010286_2);

#define VkglTestCase_010287_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010287_2 "re.size.2d.1024x1024_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010287, VkglTestCase_010287_1, VkglTestCase_010287_2);

#define VkglTestCase_010288_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010288_2 "size.2d.1024x1024_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010288, VkglTestCase_010288_1, VkglTestCase_010288_2);

#define VkglTestCase_010289_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010289_2 "e.size.2d.1024x1024_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010289, VkglTestCase_010289_1, VkglTestCase_010289_2);

#define VkglTestCase_010290_1 "dEQP-GLES2.functional.texture.s"
#define VkglTestCase_010290_2 "ize.2d.1024x1024_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010290, VkglTestCase_010290_1, VkglTestCase_010290_2);

#define VkglTestCase_010291_1 "dEQP-GLES2.functional.tex"
#define VkglTestCase_010291_2 "ture.size.2d.2048x2048_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010291, VkglTestCase_010291_1, VkglTestCase_010291_2);

#define VkglTestCase_010292_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010292_2 "e.size.2d.2048x2048_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010292, VkglTestCase_010292_1, VkglTestCase_010292_2);

#define VkglTestCase_010293_1 "dEQP-GLES2.functional.texture.s"
#define VkglTestCase_010293_2 "ize.2d.2048x2048_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010293, VkglTestCase_010293_1, VkglTestCase_010293_2);

#define VkglTestCase_010294_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010294_2 "re.size.2d.2048x2048_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010294, VkglTestCase_010294_1, VkglTestCase_010294_2);

#define VkglTestCase_010295_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010295_2 "size.2d.2048x2048_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010295, VkglTestCase_010295_1, VkglTestCase_010295_2);

#define VkglTestCase_010296_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010296_2 "e.size.2d.2048x2048_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010296, VkglTestCase_010296_1, VkglTestCase_010296_2);

#define VkglTestCase_010297_1 "dEQP-GLES2.functional.texture.s"
#define VkglTestCase_010297_2 "ize.2d.2048x2048_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010297, VkglTestCase_010297_1, VkglTestCase_010297_2);
