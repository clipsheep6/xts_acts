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

#define VkglTestCase_010625_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010625_2 ".mipmap.2d.generate.a8_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010625, VkglTestCase_010625_1, VkglTestCase_010625_2);

#define VkglTestCase_010626_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010626_2 ".mipmap.2d.generate.a8_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010626, VkglTestCase_010626_1, VkglTestCase_010626_2);

#define VkglTestCase_010627_1 "dEQP-GLES2.functional.texture.mipma"
#define VkglTestCase_010627_2 "p.2d.generate.a8_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010627, VkglTestCase_010627_1, VkglTestCase_010627_2);

#define VkglTestCase_010628_1 "dEQP-GLES2.functional.texture.mipm"
#define VkglTestCase_010628_2 "ap.2d.generate.a8_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010628, VkglTestCase_010628_1, VkglTestCase_010628_2);

#define VkglTestCase_010629_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010629_2 ".mipmap.2d.generate.l8_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010629, VkglTestCase_010629_1, VkglTestCase_010629_2);

#define VkglTestCase_010630_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010630_2 ".mipmap.2d.generate.l8_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010630, VkglTestCase_010630_1, VkglTestCase_010630_2);

#define VkglTestCase_010631_1 "dEQP-GLES2.functional.texture.mipma"
#define VkglTestCase_010631_2 "p.2d.generate.l8_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010631, VkglTestCase_010631_1, VkglTestCase_010631_2);

#define VkglTestCase_010632_1 "dEQP-GLES2.functional.texture.mipm"
#define VkglTestCase_010632_2 "ap.2d.generate.l8_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010632, VkglTestCase_010632_1, VkglTestCase_010632_2);

#define VkglTestCase_010633_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010633_2 "mipmap.2d.generate.la88_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010633, VkglTestCase_010633_1, VkglTestCase_010633_2);

#define VkglTestCase_010634_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010634_2 "mipmap.2d.generate.la88_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010634, VkglTestCase_010634_1, VkglTestCase_010634_2);

#define VkglTestCase_010635_1 "dEQP-GLES2.functional.texture.mipmap"
#define VkglTestCase_010635_2 ".2d.generate.la88_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010635, VkglTestCase_010635_1, VkglTestCase_010635_2);

#define VkglTestCase_010636_1 "dEQP-GLES2.functional.texture.mipma"
#define VkglTestCase_010636_2 "p.2d.generate.la88_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010636, VkglTestCase_010636_1, VkglTestCase_010636_2);

#define VkglTestCase_010637_1 "dEQP-GLES2.functional.texture.m"
#define VkglTestCase_010637_2 "ipmap.2d.generate.rgb565_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010637, VkglTestCase_010637_1, VkglTestCase_010637_2);

#define VkglTestCase_010638_1 "dEQP-GLES2.functional.texture.m"
#define VkglTestCase_010638_2 "ipmap.2d.generate.rgb565_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010638, VkglTestCase_010638_1, VkglTestCase_010638_2);

#define VkglTestCase_010639_1 "dEQP-GLES2.functional.texture.mipmap."
#define VkglTestCase_010639_2 "2d.generate.rgb565_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010639, VkglTestCase_010639_1, VkglTestCase_010639_2);

#define VkglTestCase_010640_1 "dEQP-GLES2.functional.texture.mipmap"
#define VkglTestCase_010640_2 ".2d.generate.rgb565_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010640, VkglTestCase_010640_1, VkglTestCase_010640_2);

#define VkglTestCase_010641_1 "dEQP-GLES2.functional.texture.m"
#define VkglTestCase_010641_2 "ipmap.2d.generate.rgb888_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010641, VkglTestCase_010641_1, VkglTestCase_010641_2);

#define VkglTestCase_010642_1 "dEQP-GLES2.functional.texture.m"
#define VkglTestCase_010642_2 "ipmap.2d.generate.rgb888_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010642, VkglTestCase_010642_1, VkglTestCase_010642_2);

#define VkglTestCase_010643_1 "dEQP-GLES2.functional.texture.mipmap."
#define VkglTestCase_010643_2 "2d.generate.rgb888_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010643, VkglTestCase_010643_1, VkglTestCase_010643_2);

#define VkglTestCase_010644_1 "dEQP-GLES2.functional.texture.mipmap"
#define VkglTestCase_010644_2 ".2d.generate.rgb888_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010644, VkglTestCase_010644_1, VkglTestCase_010644_2);

#define VkglTestCase_010645_1 "dEQP-GLES2.functional.texture.mi"
#define VkglTestCase_010645_2 "pmap.2d.generate.rgba4444_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010645, VkglTestCase_010645_1, VkglTestCase_010645_2);

#define VkglTestCase_010646_1 "dEQP-GLES2.functional.texture.mi"
#define VkglTestCase_010646_2 "pmap.2d.generate.rgba4444_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010646, VkglTestCase_010646_1, VkglTestCase_010646_2);

#define VkglTestCase_010647_1 "dEQP-GLES2.functional.texture.mipmap.2"
#define VkglTestCase_010647_2 "d.generate.rgba4444_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010647, VkglTestCase_010647_1, VkglTestCase_010647_2);

#define VkglTestCase_010648_1 "dEQP-GLES2.functional.texture.mipmap."
#define VkglTestCase_010648_2 "2d.generate.rgba4444_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010648, VkglTestCase_010648_1, VkglTestCase_010648_2);

#define VkglTestCase_010649_1 "dEQP-GLES2.functional.texture.mi"
#define VkglTestCase_010649_2 "pmap.2d.generate.rgba5551_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010649, VkglTestCase_010649_1, VkglTestCase_010649_2);

#define VkglTestCase_010650_1 "dEQP-GLES2.functional.texture.mi"
#define VkglTestCase_010650_2 "pmap.2d.generate.rgba5551_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010650, VkglTestCase_010650_1, VkglTestCase_010650_2);

#define VkglTestCase_010651_1 "dEQP-GLES2.functional.texture.mipmap.2"
#define VkglTestCase_010651_2 "d.generate.rgba5551_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010651, VkglTestCase_010651_1, VkglTestCase_010651_2);

#define VkglTestCase_010652_1 "dEQP-GLES2.functional.texture.mipmap."
#define VkglTestCase_010652_2 "2d.generate.rgba5551_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010652, VkglTestCase_010652_1, VkglTestCase_010652_2);

#define VkglTestCase_010653_1 "dEQP-GLES2.functional.texture.mi"
#define VkglTestCase_010653_2 "pmap.2d.generate.rgba8888_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010653, VkglTestCase_010653_1, VkglTestCase_010653_2);

#define VkglTestCase_010654_1 "dEQP-GLES2.functional.texture.mi"
#define VkglTestCase_010654_2 "pmap.2d.generate.rgba8888_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010654, VkglTestCase_010654_1, VkglTestCase_010654_2);

#define VkglTestCase_010655_1 "dEQP-GLES2.functional.texture.mipmap.2"
#define VkglTestCase_010655_2 "d.generate.rgba8888_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010655, VkglTestCase_010655_1, VkglTestCase_010655_2);

#define VkglTestCase_010656_1 "dEQP-GLES2.functional.texture.mipmap."
#define VkglTestCase_010656_2 "2d.generate.rgba8888_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010656, VkglTestCase_010656_1, VkglTestCase_010656_2);
