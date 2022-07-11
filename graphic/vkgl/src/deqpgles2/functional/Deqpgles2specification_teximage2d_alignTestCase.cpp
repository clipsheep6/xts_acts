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

#define VkglTestCase_010725_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010725_2 "fication.teximage2d_align.2d_l8_4_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010725, VkglTestCase_010725_1, VkglTestCase_010725_2);

#define VkglTestCase_010726_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010726_2 "fication.teximage2d_align.2d_l8_63_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010726, VkglTestCase_010726_1, VkglTestCase_010726_2);

#define VkglTestCase_010727_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010727_2 "fication.teximage2d_align.2d_l8_63_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010727, VkglTestCase_010727_1, VkglTestCase_010727_2);

#define VkglTestCase_010728_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010728_2 "fication.teximage2d_align.2d_l8_63_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010728, VkglTestCase_010728_1, VkglTestCase_010728_2);

#define VkglTestCase_010729_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010729_2 "fication.teximage2d_align.2d_l8_63_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010729, VkglTestCase_010729_1, VkglTestCase_010729_2);

#define VkglTestCase_010730_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010730_2 "ation.teximage2d_align.2d_rgba4444_51_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010730, VkglTestCase_010730_1, VkglTestCase_010730_2);

#define VkglTestCase_010731_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010731_2 "ation.teximage2d_align.2d_rgba4444_51_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010731, VkglTestCase_010731_1, VkglTestCase_010731_2);

#define VkglTestCase_010732_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010732_2 "ation.teximage2d_align.2d_rgba4444_51_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010732, VkglTestCase_010732_1, VkglTestCase_010732_2);

#define VkglTestCase_010733_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010733_2 "ation.teximage2d_align.2d_rgba4444_51_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010733, VkglTestCase_010733_1, VkglTestCase_010733_2);

#define VkglTestCase_010734_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010734_2 "cation.teximage2d_align.2d_rgb888_39_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010734, VkglTestCase_010734_1, VkglTestCase_010734_2);

#define VkglTestCase_010735_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010735_2 "cation.teximage2d_align.2d_rgb888_39_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010735, VkglTestCase_010735_1, VkglTestCase_010735_2);

#define VkglTestCase_010736_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010736_2 "cation.teximage2d_align.2d_rgb888_39_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010736, VkglTestCase_010736_1, VkglTestCase_010736_2);

#define VkglTestCase_010737_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010737_2 "cation.teximage2d_align.2d_rgb888_39_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010737, VkglTestCase_010737_1, VkglTestCase_010737_2);

#define VkglTestCase_010738_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010738_2 "ation.teximage2d_align.2d_rgba8888_47_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010738, VkglTestCase_010738_1, VkglTestCase_010738_2);

#define VkglTestCase_010739_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010739_2 "ation.teximage2d_align.2d_rgba8888_47_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010739, VkglTestCase_010739_1, VkglTestCase_010739_2);

#define VkglTestCase_010740_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010740_2 "ation.teximage2d_align.2d_rgba8888_47_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010740, VkglTestCase_010740_1, VkglTestCase_010740_2);

#define VkglTestCase_010741_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010741_2 "ation.teximage2d_align.2d_rgba8888_47_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010741, VkglTestCase_010741_1, VkglTestCase_010741_2);

#define VkglTestCase_010742_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010742_2 "ication.teximage2d_align.cube_l8_4_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010742, VkglTestCase_010742_1, VkglTestCase_010742_2);

#define VkglTestCase_010743_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010743_2 "ication.teximage2d_align.cube_l8_63_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010743, VkglTestCase_010743_1, VkglTestCase_010743_2);

#define VkglTestCase_010744_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010744_2 "ication.teximage2d_align.cube_l8_63_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010744, VkglTestCase_010744_1, VkglTestCase_010744_2);

#define VkglTestCase_010745_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010745_2 "ication.teximage2d_align.cube_l8_63_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010745, VkglTestCase_010745_1, VkglTestCase_010745_2);

#define VkglTestCase_010746_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010746_2 "ication.teximage2d_align.cube_l8_63_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010746, VkglTestCase_010746_1, VkglTestCase_010746_2);

#define VkglTestCase_010747_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010747_2 "tion.teximage2d_align.cube_rgba4444_51_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010747, VkglTestCase_010747_1, VkglTestCase_010747_2);

#define VkglTestCase_010748_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010748_2 "tion.teximage2d_align.cube_rgba4444_51_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010748, VkglTestCase_010748_1, VkglTestCase_010748_2);

#define VkglTestCase_010749_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010749_2 "tion.teximage2d_align.cube_rgba4444_51_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010749, VkglTestCase_010749_1, VkglTestCase_010749_2);

#define VkglTestCase_010750_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010750_2 "tion.teximage2d_align.cube_rgba4444_51_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010750, VkglTestCase_010750_1, VkglTestCase_010750_2);

#define VkglTestCase_010751_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010751_2 "ation.teximage2d_align.cube_rgb888_39_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010751, VkglTestCase_010751_1, VkglTestCase_010751_2);

#define VkglTestCase_010752_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010752_2 "ation.teximage2d_align.cube_rgb888_39_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010752, VkglTestCase_010752_1, VkglTestCase_010752_2);

#define VkglTestCase_010753_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010753_2 "ation.teximage2d_align.cube_rgb888_39_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010753, VkglTestCase_010753_1, VkglTestCase_010753_2);

#define VkglTestCase_010754_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010754_2 "ation.teximage2d_align.cube_rgb888_39_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010754, VkglTestCase_010754_1, VkglTestCase_010754_2);

#define VkglTestCase_010755_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010755_2 "tion.teximage2d_align.cube_rgba8888_47_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010755, VkglTestCase_010755_1, VkglTestCase_010755_2);

#define VkglTestCase_010756_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010756_2 "tion.teximage2d_align.cube_rgba8888_47_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010756, VkglTestCase_010756_1, VkglTestCase_010756_2);

#define VkglTestCase_010757_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010757_2 "tion.teximage2d_align.cube_rgba8888_47_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010757, VkglTestCase_010757_1, VkglTestCase_010757_2);

#define VkglTestCase_010758_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010758_2 "tion.teximage2d_align.cube_rgba8888_47_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010758, VkglTestCase_010758_1, VkglTestCase_010758_2);
