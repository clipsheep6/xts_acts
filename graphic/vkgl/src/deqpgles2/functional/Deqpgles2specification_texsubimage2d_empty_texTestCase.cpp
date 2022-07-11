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

#define VkglTestCase_010785_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010785_2 "ication.texsubimage2d_empty_tex.a8_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010785, VkglTestCase_010785_1, VkglTestCase_010785_2);

#define VkglTestCase_010786_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010786_2 "cation.texsubimage2d_empty_tex.a8_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010786, VkglTestCase_010786_1, VkglTestCase_010786_2);

#define VkglTestCase_010787_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010787_2 "ication.texsubimage2d_empty_tex.l8_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010787, VkglTestCase_010787_1, VkglTestCase_010787_2);

#define VkglTestCase_010788_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010788_2 "cation.texsubimage2d_empty_tex.l8_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010788, VkglTestCase_010788_1, VkglTestCase_010788_2);

#define VkglTestCase_010789_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010789_2 "cation.texsubimage2d_empty_tex.la88_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010789, VkglTestCase_010789_1, VkglTestCase_010789_2);

#define VkglTestCase_010790_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010790_2 "ation.texsubimage2d_empty_tex.la88_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010790, VkglTestCase_010790_1, VkglTestCase_010790_2);

#define VkglTestCase_010791_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010791_2 "ation.texsubimage2d_empty_tex.rgb565_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010791, VkglTestCase_010791_1, VkglTestCase_010791_2);

#define VkglTestCase_010792_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010792_2 "tion.texsubimage2d_empty_tex.rgb565_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010792, VkglTestCase_010792_1, VkglTestCase_010792_2);

#define VkglTestCase_010793_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010793_2 "ation.texsubimage2d_empty_tex.rgb888_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010793, VkglTestCase_010793_1, VkglTestCase_010793_2);

#define VkglTestCase_010794_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010794_2 "tion.texsubimage2d_empty_tex.rgb888_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010794, VkglTestCase_010794_1, VkglTestCase_010794_2);

#define VkglTestCase_010795_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010795_2 "tion.texsubimage2d_empty_tex.rgba4444_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010795, VkglTestCase_010795_1, VkglTestCase_010795_2);

#define VkglTestCase_010796_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010796_2 "ion.texsubimage2d_empty_tex.rgba4444_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010796, VkglTestCase_010796_1, VkglTestCase_010796_2);

#define VkglTestCase_010797_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010797_2 "tion.texsubimage2d_empty_tex.rgba5551_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010797, VkglTestCase_010797_1, VkglTestCase_010797_2);

#define VkglTestCase_010798_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010798_2 "ion.texsubimage2d_empty_tex.rgba5551_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010798, VkglTestCase_010798_1, VkglTestCase_010798_2);

#define VkglTestCase_010799_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010799_2 "tion.texsubimage2d_empty_tex.rgba8888_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010799, VkglTestCase_010799_1, VkglTestCase_010799_2);

#define VkglTestCase_010800_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010800_2 "ion.texsubimage2d_empty_tex.rgba8888_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010800, VkglTestCase_010800_1, VkglTestCase_010800_2);

#define VkglTestCase_010801_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010801_2 "tion.texsubimage2d_empty_tex.rgba16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010801, VkglTestCase_010801_1, VkglTestCase_010801_2);

#define VkglTestCase_010802_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010802_2 "ion.texsubimage2d_empty_tex.rgba16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010802, VkglTestCase_010802_1, VkglTestCase_010802_2);

#define VkglTestCase_010803_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010803_2 "ation.texsubimage2d_empty_tex.rgb16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010803, VkglTestCase_010803_1, VkglTestCase_010803_2);

#define VkglTestCase_010804_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010804_2 "tion.texsubimage2d_empty_tex.rgb16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010804, VkglTestCase_010804_1, VkglTestCase_010804_2);

#define VkglTestCase_010805_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010805_2 "ation.texsubimage2d_empty_tex.la16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010805, VkglTestCase_010805_1, VkglTestCase_010805_2);

#define VkglTestCase_010806_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010806_2 "tion.texsubimage2d_empty_tex.la16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010806, VkglTestCase_010806_1, VkglTestCase_010806_2);

#define VkglTestCase_010807_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010807_2 "cation.texsubimage2d_empty_tex.l16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010807, VkglTestCase_010807_1, VkglTestCase_010807_2);

#define VkglTestCase_010808_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010808_2 "ation.texsubimage2d_empty_tex.l16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010808, VkglTestCase_010808_1, VkglTestCase_010808_2);

#define VkglTestCase_010809_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010809_2 "cation.texsubimage2d_empty_tex.a16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010809, VkglTestCase_010809_1, VkglTestCase_010809_2);

#define VkglTestCase_010810_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010810_2 "ation.texsubimage2d_empty_tex.a16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010810, VkglTestCase_010810_1, VkglTestCase_010810_2);
