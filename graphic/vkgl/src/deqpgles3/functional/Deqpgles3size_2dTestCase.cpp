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

#define VkglTestCase_022369_1 "dEQP-GLES3.functional.t"
#define VkglTestCase_022369_2 "exture.size.2d.64x64_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022369, VkglTestCase_022369_1, VkglTestCase_022369_2);

#define VkglTestCase_022370_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_022370_2 "ure.size.2d.64x64_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022370, VkglTestCase_022370_1, VkglTestCase_022370_2);

#define VkglTestCase_022371_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_022371_2 "ure.size.2d.64x64_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022371, VkglTestCase_022371_1, VkglTestCase_022371_2);

#define VkglTestCase_022372_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022372_2 ".size.2d.64x64_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022372, VkglTestCase_022372_1, VkglTestCase_022372_2);

#define VkglTestCase_022373_1 "dEQP-GLES3.functional.tex"
#define VkglTestCase_022373_2 "ture.size.2d.64x64_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022373, VkglTestCase_022373_1, VkglTestCase_022373_2);

#define VkglTestCase_022374_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022374_2 "e.size.2d.64x64_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022374, VkglTestCase_022374_1, VkglTestCase_022374_2);

#define VkglTestCase_022375_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_022375_2 "ure.size.2d.64x64_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022375, VkglTestCase_022375_1, VkglTestCase_022375_2);

#define VkglTestCase_022376_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022376_2 ".size.2d.64x64_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022376, VkglTestCase_022376_1, VkglTestCase_022376_2);

#define VkglTestCase_022377_1 "dEQP-GLES3.functional.t"
#define VkglTestCase_022377_2 "exture.size.2d.65x63_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022377, VkglTestCase_022377_1, VkglTestCase_022377_2);

#define VkglTestCase_022378_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_022378_2 "ure.size.2d.65x63_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022378, VkglTestCase_022378_1, VkglTestCase_022378_2);

#define VkglTestCase_022379_1 "dEQP-GLES3.functional.tex"
#define VkglTestCase_022379_2 "ture.size.2d.65x63_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022379, VkglTestCase_022379_1, VkglTestCase_022379_2);

#define VkglTestCase_022380_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_022380_2 "ure.size.2d.65x63_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022380, VkglTestCase_022380_1, VkglTestCase_022380_2);

#define VkglTestCase_022381_1 "dEQP-GLES3.functional.te"
#define VkglTestCase_022381_2 "xture.size.2d.512x512_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022381, VkglTestCase_022381_1, VkglTestCase_022381_2);

#define VkglTestCase_022382_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022382_2 "re.size.2d.512x512_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022382, VkglTestCase_022382_1, VkglTestCase_022382_2);

#define VkglTestCase_022383_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022383_2 "re.size.2d.512x512_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022383, VkglTestCase_022383_1, VkglTestCase_022383_2);

#define VkglTestCase_022384_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022384_2 "size.2d.512x512_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022384, VkglTestCase_022384_1, VkglTestCase_022384_2);

#define VkglTestCase_022385_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_022385_2 "ure.size.2d.512x512_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022385, VkglTestCase_022385_1, VkglTestCase_022385_2);

#define VkglTestCase_022386_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022386_2 ".size.2d.512x512_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022386, VkglTestCase_022386_1, VkglTestCase_022386_2);

#define VkglTestCase_022387_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022387_2 "re.size.2d.512x512_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022387, VkglTestCase_022387_1, VkglTestCase_022387_2);

#define VkglTestCase_022388_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022388_2 "size.2d.512x512_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022388, VkglTestCase_022388_1, VkglTestCase_022388_2);

#define VkglTestCase_022389_1 "dEQP-GLES3.functional.tex"
#define VkglTestCase_022389_2 "ture.size.2d.1024x1024_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022389, VkglTestCase_022389_1, VkglTestCase_022389_2);

#define VkglTestCase_022390_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022390_2 "e.size.2d.1024x1024_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022390, VkglTestCase_022390_1, VkglTestCase_022390_2);

#define VkglTestCase_022391_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022391_2 "e.size.2d.1024x1024_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022391, VkglTestCase_022391_1, VkglTestCase_022391_2);

#define VkglTestCase_022392_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_022392_2 "ize.2d.1024x1024_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022392, VkglTestCase_022392_1, VkglTestCase_022392_2);

#define VkglTestCase_022393_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022393_2 "re.size.2d.1024x1024_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022393, VkglTestCase_022393_1, VkglTestCase_022393_2);

#define VkglTestCase_022394_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022394_2 "size.2d.1024x1024_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022394, VkglTestCase_022394_1, VkglTestCase_022394_2);

#define VkglTestCase_022395_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022395_2 "e.size.2d.1024x1024_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022395, VkglTestCase_022395_1, VkglTestCase_022395_2);

#define VkglTestCase_022396_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_022396_2 "ize.2d.1024x1024_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022396, VkglTestCase_022396_1, VkglTestCase_022396_2);

#define VkglTestCase_022397_1 "dEQP-GLES3.functional.tex"
#define VkglTestCase_022397_2 "ture.size.2d.2048x2048_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022397, VkglTestCase_022397_1, VkglTestCase_022397_2);

#define VkglTestCase_022398_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022398_2 "e.size.2d.2048x2048_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022398, VkglTestCase_022398_1, VkglTestCase_022398_2);

#define VkglTestCase_022399_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022399_2 "e.size.2d.2048x2048_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022399, VkglTestCase_022399_1, VkglTestCase_022399_2);

#define VkglTestCase_022400_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_022400_2 "ize.2d.2048x2048_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022400, VkglTestCase_022400_1, VkglTestCase_022400_2);

#define VkglTestCase_022401_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022401_2 "re.size.2d.2048x2048_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022401, VkglTestCase_022401_1, VkglTestCase_022401_2);

#define VkglTestCase_022402_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022402_2 "size.2d.2048x2048_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022402, VkglTestCase_022402_1, VkglTestCase_022402_2);

#define VkglTestCase_022403_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022403_2 "e.size.2d.2048x2048_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022403, VkglTestCase_022403_1, VkglTestCase_022403_2);

#define VkglTestCase_022404_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_022404_2 "ize.2d.2048x2048_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022404, VkglTestCase_022404_1, VkglTestCase_022404_2);
