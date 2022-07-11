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
#include "../ActsDeqpgles30027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026408_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026408_2 "cation.teximage3d_pbo.rgba32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026408, VkglTestCase_026408_1, VkglTestCase_026408_2);

#define VkglTestCase_026409_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026409_2 "ification.teximage3d_pbo.rgba32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026409, VkglTestCase_026409_1, VkglTestCase_026409_2);

#define VkglTestCase_026410_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026410_2 "cation.teximage3d_pbo.rgba32i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026410, VkglTestCase_026410_1, VkglTestCase_026410_2);

#define VkglTestCase_026411_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026411_2 "ification.teximage3d_pbo.rgba32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026411, VkglTestCase_026411_1, VkglTestCase_026411_2);

#define VkglTestCase_026412_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026412_2 "ation.teximage3d_pbo.rgba32ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026412, VkglTestCase_026412_1, VkglTestCase_026412_2);

#define VkglTestCase_026413_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026413_2 "fication.teximage3d_pbo.rgba32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026413, VkglTestCase_026413_1, VkglTestCase_026413_2);

#define VkglTestCase_026414_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026414_2 "cation.teximage3d_pbo.rgba16f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026414, VkglTestCase_026414_1, VkglTestCase_026414_2);

#define VkglTestCase_026415_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026415_2 "ification.teximage3d_pbo.rgba16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026415, VkglTestCase_026415_1, VkglTestCase_026415_2);

#define VkglTestCase_026416_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026416_2 "cation.teximage3d_pbo.rgba16i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026416, VkglTestCase_026416_1, VkglTestCase_026416_2);

#define VkglTestCase_026417_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026417_2 "ification.teximage3d_pbo.rgba16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026417, VkglTestCase_026417_1, VkglTestCase_026417_2);

#define VkglTestCase_026418_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026418_2 "ation.teximage3d_pbo.rgba16ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026418, VkglTestCase_026418_1, VkglTestCase_026418_2);

#define VkglTestCase_026419_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026419_2 "fication.teximage3d_pbo.rgba16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026419, VkglTestCase_026419_1, VkglTestCase_026419_2);

#define VkglTestCase_026420_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026420_2 "ication.teximage3d_pbo.rgba8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026420, VkglTestCase_026420_1, VkglTestCase_026420_2);

#define VkglTestCase_026421_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026421_2 "cification.teximage3d_pbo.rgba8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026421, VkglTestCase_026421_1, VkglTestCase_026421_2);

#define VkglTestCase_026422_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026422_2 "cation.teximage3d_pbo.rgba8i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026422, VkglTestCase_026422_1, VkglTestCase_026422_2);

#define VkglTestCase_026423_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026423_2 "ification.teximage3d_pbo.rgba8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026423, VkglTestCase_026423_1, VkglTestCase_026423_2);

#define VkglTestCase_026424_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026424_2 "cation.teximage3d_pbo.rgba8ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026424, VkglTestCase_026424_1, VkglTestCase_026424_2);

#define VkglTestCase_026425_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026425_2 "ification.teximage3d_pbo.rgba8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026425, VkglTestCase_026425_1, VkglTestCase_026425_2);

#define VkglTestCase_026426_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026426_2 "ion.teximage3d_pbo.srgb8_alpha8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026426, VkglTestCase_026426_1, VkglTestCase_026426_2);

#define VkglTestCase_026427_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026427_2 "cation.teximage3d_pbo.srgb8_alpha8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026427, VkglTestCase_026427_1, VkglTestCase_026427_2);

#define VkglTestCase_026428_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026428_2 "ation.teximage3d_pbo.rgb10_a2_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026428, VkglTestCase_026428_1, VkglTestCase_026428_2);

#define VkglTestCase_026429_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026429_2 "fication.teximage3d_pbo.rgb10_a2_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026429, VkglTestCase_026429_1, VkglTestCase_026429_2);

#define VkglTestCase_026430_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026430_2 "tion.teximage3d_pbo.rgb10_a2ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026430, VkglTestCase_026430_1, VkglTestCase_026430_2);

#define VkglTestCase_026431_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026431_2 "ication.teximage3d_pbo.rgb10_a2ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026431, VkglTestCase_026431_1, VkglTestCase_026431_2);

#define VkglTestCase_026432_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026432_2 "ication.teximage3d_pbo.rgba4_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026432, VkglTestCase_026432_1, VkglTestCase_026432_2);

#define VkglTestCase_026433_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026433_2 "cification.teximage3d_pbo.rgba4_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026433, VkglTestCase_026433_1, VkglTestCase_026433_2);

#define VkglTestCase_026434_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026434_2 "cation.teximage3d_pbo.rgb5_a1_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026434, VkglTestCase_026434_1, VkglTestCase_026434_2);

#define VkglTestCase_026435_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026435_2 "ification.teximage3d_pbo.rgb5_a1_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026435, VkglTestCase_026435_1, VkglTestCase_026435_2);

#define VkglTestCase_026436_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026436_2 "tion.teximage3d_pbo.rgba8_snorm_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026436, VkglTestCase_026436_1, VkglTestCase_026436_2);

#define VkglTestCase_026437_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026437_2 "ication.teximage3d_pbo.rgba8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026437, VkglTestCase_026437_1, VkglTestCase_026437_2);

#define VkglTestCase_026438_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026438_2 "ication.teximage3d_pbo.rgb8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026438, VkglTestCase_026438_1, VkglTestCase_026438_2);

#define VkglTestCase_026439_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026439_2 "cification.teximage3d_pbo.rgb8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026439, VkglTestCase_026439_1, VkglTestCase_026439_2);

#define VkglTestCase_026440_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026440_2 "cation.teximage3d_pbo.rgb565_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026440, VkglTestCase_026440_1, VkglTestCase_026440_2);

#define VkglTestCase_026441_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026441_2 "ification.teximage3d_pbo.rgb565_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026441, VkglTestCase_026441_1, VkglTestCase_026441_2);

#define VkglTestCase_026442_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026442_2 "on.teximage3d_pbo.r11f_g11f_b10f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026442, VkglTestCase_026442_1, VkglTestCase_026442_2);

#define VkglTestCase_026443_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026443_2 "ation.teximage3d_pbo.r11f_g11f_b10f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026443, VkglTestCase_026443_1, VkglTestCase_026443_2);

#define VkglTestCase_026444_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026444_2 "cation.teximage3d_pbo.rgb32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026444, VkglTestCase_026444_1, VkglTestCase_026444_2);

#define VkglTestCase_026445_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026445_2 "ification.teximage3d_pbo.rgb32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026445, VkglTestCase_026445_1, VkglTestCase_026445_2);

#define VkglTestCase_026446_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026446_2 "cation.teximage3d_pbo.rgb32i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026446, VkglTestCase_026446_1, VkglTestCase_026446_2);

#define VkglTestCase_026447_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026447_2 "ification.teximage3d_pbo.rgb32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026447, VkglTestCase_026447_1, VkglTestCase_026447_2);

#define VkglTestCase_026448_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026448_2 "cation.teximage3d_pbo.rgb32ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026448, VkglTestCase_026448_1, VkglTestCase_026448_2);

#define VkglTestCase_026449_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026449_2 "ification.teximage3d_pbo.rgb32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026449, VkglTestCase_026449_1, VkglTestCase_026449_2);

#define VkglTestCase_026450_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026450_2 "cation.teximage3d_pbo.rgb16f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026450, VkglTestCase_026450_1, VkglTestCase_026450_2);

#define VkglTestCase_026451_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026451_2 "ification.teximage3d_pbo.rgb16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026451, VkglTestCase_026451_1, VkglTestCase_026451_2);

#define VkglTestCase_026452_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026452_2 "cation.teximage3d_pbo.rgb16i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026452, VkglTestCase_026452_1, VkglTestCase_026452_2);

#define VkglTestCase_026453_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026453_2 "ification.teximage3d_pbo.rgb16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026453, VkglTestCase_026453_1, VkglTestCase_026453_2);

#define VkglTestCase_026454_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026454_2 "cation.teximage3d_pbo.rgb16ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026454, VkglTestCase_026454_1, VkglTestCase_026454_2);

#define VkglTestCase_026455_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026455_2 "ification.teximage3d_pbo.rgb16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026455, VkglTestCase_026455_1, VkglTestCase_026455_2);

#define VkglTestCase_026456_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026456_2 "tion.teximage3d_pbo.rgb8_snorm_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026456, VkglTestCase_026456_1, VkglTestCase_026456_2);

#define VkglTestCase_026457_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026457_2 "ication.teximage3d_pbo.rgb8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026457, VkglTestCase_026457_1, VkglTestCase_026457_2);

#define VkglTestCase_026458_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026458_2 "ication.teximage3d_pbo.rgb8i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026458, VkglTestCase_026458_1, VkglTestCase_026458_2);

#define VkglTestCase_026459_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026459_2 "cification.teximage3d_pbo.rgb8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026459, VkglTestCase_026459_1, VkglTestCase_026459_2);

#define VkglTestCase_026460_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026460_2 "cation.teximage3d_pbo.rgb8ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026460, VkglTestCase_026460_1, VkglTestCase_026460_2);

#define VkglTestCase_026461_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026461_2 "ification.teximage3d_pbo.rgb8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026461, VkglTestCase_026461_1, VkglTestCase_026461_2);

#define VkglTestCase_026462_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026462_2 "ication.teximage3d_pbo.srgb8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026462, VkglTestCase_026462_1, VkglTestCase_026462_2);

#define VkglTestCase_026463_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026463_2 "cification.teximage3d_pbo.srgb8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026463, VkglTestCase_026463_1, VkglTestCase_026463_2);

#define VkglTestCase_026464_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026464_2 "cation.teximage3d_pbo.rgb9_e5_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026464, VkglTestCase_026464_1, VkglTestCase_026464_2);

#define VkglTestCase_026465_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026465_2 "ification.teximage3d_pbo.rgb9_e5_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026465, VkglTestCase_026465_1, VkglTestCase_026465_2);

#define VkglTestCase_026466_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026466_2 "ication.teximage3d_pbo.rg32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026466, VkglTestCase_026466_1, VkglTestCase_026466_2);

#define VkglTestCase_026467_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026467_2 "cification.teximage3d_pbo.rg32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026467, VkglTestCase_026467_1, VkglTestCase_026467_2);

#define VkglTestCase_026468_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026468_2 "ication.teximage3d_pbo.rg32i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026468, VkglTestCase_026468_1, VkglTestCase_026468_2);

#define VkglTestCase_026469_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026469_2 "cification.teximage3d_pbo.rg32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026469, VkglTestCase_026469_1, VkglTestCase_026469_2);

#define VkglTestCase_026470_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026470_2 "cation.teximage3d_pbo.rg32ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026470, VkglTestCase_026470_1, VkglTestCase_026470_2);

#define VkglTestCase_026471_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026471_2 "ification.teximage3d_pbo.rg32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026471, VkglTestCase_026471_1, VkglTestCase_026471_2);

#define VkglTestCase_026472_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026472_2 "ication.teximage3d_pbo.rg16f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026472, VkglTestCase_026472_1, VkglTestCase_026472_2);

#define VkglTestCase_026473_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026473_2 "cification.teximage3d_pbo.rg16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026473, VkglTestCase_026473_1, VkglTestCase_026473_2);

#define VkglTestCase_026474_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026474_2 "ication.teximage3d_pbo.rg16i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026474, VkglTestCase_026474_1, VkglTestCase_026474_2);

#define VkglTestCase_026475_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026475_2 "cification.teximage3d_pbo.rg16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026475, VkglTestCase_026475_1, VkglTestCase_026475_2);

#define VkglTestCase_026476_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026476_2 "cation.teximage3d_pbo.rg16ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026476, VkglTestCase_026476_1, VkglTestCase_026476_2);

#define VkglTestCase_026477_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026477_2 "ification.teximage3d_pbo.rg16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026477, VkglTestCase_026477_1, VkglTestCase_026477_2);

#define VkglTestCase_026478_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026478_2 "fication.teximage3d_pbo.rg8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026478, VkglTestCase_026478_1, VkglTestCase_026478_2);

#define VkglTestCase_026479_1 "dEQP-GLES3.functional.texture.sp"
#define VkglTestCase_026479_2 "ecification.teximage3d_pbo.rg8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026479, VkglTestCase_026479_1, VkglTestCase_026479_2);

#define VkglTestCase_026480_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026480_2 "ication.teximage3d_pbo.rg8i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026480, VkglTestCase_026480_1, VkglTestCase_026480_2);

#define VkglTestCase_026481_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026481_2 "cification.teximage3d_pbo.rg8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026481, VkglTestCase_026481_1, VkglTestCase_026481_2);

#define VkglTestCase_026482_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026482_2 "ication.teximage3d_pbo.rg8ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026482, VkglTestCase_026482_1, VkglTestCase_026482_2);

#define VkglTestCase_026483_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026483_2 "cification.teximage3d_pbo.rg8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026483, VkglTestCase_026483_1, VkglTestCase_026483_2);

#define VkglTestCase_026484_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026484_2 "ation.teximage3d_pbo.rg8_snorm_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026484, VkglTestCase_026484_1, VkglTestCase_026484_2);

#define VkglTestCase_026485_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026485_2 "fication.teximage3d_pbo.rg8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026485, VkglTestCase_026485_1, VkglTestCase_026485_2);

#define VkglTestCase_026486_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026486_2 "ication.teximage3d_pbo.r32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026486, VkglTestCase_026486_1, VkglTestCase_026486_2);

#define VkglTestCase_026487_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026487_2 "cification.teximage3d_pbo.r32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026487, VkglTestCase_026487_1, VkglTestCase_026487_2);

#define VkglTestCase_026488_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026488_2 "ication.teximage3d_pbo.r32i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026488, VkglTestCase_026488_1, VkglTestCase_026488_2);

#define VkglTestCase_026489_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026489_2 "cification.teximage3d_pbo.r32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026489, VkglTestCase_026489_1, VkglTestCase_026489_2);

#define VkglTestCase_026490_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026490_2 "ication.teximage3d_pbo.r32ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026490, VkglTestCase_026490_1, VkglTestCase_026490_2);

#define VkglTestCase_026491_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026491_2 "cification.teximage3d_pbo.r32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026491, VkglTestCase_026491_1, VkglTestCase_026491_2);

#define VkglTestCase_026492_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026492_2 "ication.teximage3d_pbo.r16f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026492, VkglTestCase_026492_1, VkglTestCase_026492_2);

#define VkglTestCase_026493_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026493_2 "cification.teximage3d_pbo.r16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026493, VkglTestCase_026493_1, VkglTestCase_026493_2);

#define VkglTestCase_026494_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026494_2 "ication.teximage3d_pbo.r16i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026494, VkglTestCase_026494_1, VkglTestCase_026494_2);

#define VkglTestCase_026495_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026495_2 "cification.teximage3d_pbo.r16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026495, VkglTestCase_026495_1, VkglTestCase_026495_2);

#define VkglTestCase_026496_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026496_2 "ication.teximage3d_pbo.r16ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026496, VkglTestCase_026496_1, VkglTestCase_026496_2);

#define VkglTestCase_026497_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026497_2 "cification.teximage3d_pbo.r16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026497, VkglTestCase_026497_1, VkglTestCase_026497_2);

#define VkglTestCase_026498_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026498_2 "fication.teximage3d_pbo.r8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026498, VkglTestCase_026498_1, VkglTestCase_026498_2);

#define VkglTestCase_026499_1 "dEQP-GLES3.functional.texture.sp"
#define VkglTestCase_026499_2 "ecification.teximage3d_pbo.r8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026499, VkglTestCase_026499_1, VkglTestCase_026499_2);

#define VkglTestCase_026500_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026500_2 "fication.teximage3d_pbo.r8i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026500, VkglTestCase_026500_1, VkglTestCase_026500_2);

#define VkglTestCase_026501_1 "dEQP-GLES3.functional.texture.sp"
#define VkglTestCase_026501_2 "ecification.teximage3d_pbo.r8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026501, VkglTestCase_026501_1, VkglTestCase_026501_2);

#define VkglTestCase_026502_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026502_2 "ication.teximage3d_pbo.r8ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026502, VkglTestCase_026502_1, VkglTestCase_026502_2);

#define VkglTestCase_026503_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026503_2 "cification.teximage3d_pbo.r8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026503, VkglTestCase_026503_1, VkglTestCase_026503_2);

#define VkglTestCase_026504_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026504_2 "ation.teximage3d_pbo.r8_snorm_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026504, VkglTestCase_026504_1, VkglTestCase_026504_2);

#define VkglTestCase_026505_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026505_2 "fication.teximage3d_pbo.r8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026505, VkglTestCase_026505_1, VkglTestCase_026505_2);

#define VkglTestCase_026506_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026506_2 "tion.teximage3d_pbo.rgb8_offset_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026506, VkglTestCase_026506_1, VkglTestCase_026506_2);

#define VkglTestCase_026507_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026507_2 "ication.teximage3d_pbo.rgb8_offset_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026507, VkglTestCase_026507_1, VkglTestCase_026507_2);

#define VkglTestCase_026508_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026508_2 "on.teximage3d_pbo.rgb8_alignment_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026508, VkglTestCase_026508_1, VkglTestCase_026508_2);

#define VkglTestCase_026509_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026509_2 "ation.teximage3d_pbo.rgb8_alignment_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026509, VkglTestCase_026509_1, VkglTestCase_026509_2);

#define VkglTestCase_026510_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026510_2 "n.teximage3d_pbo.rgb8_image_height_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026510, VkglTestCase_026510_1, VkglTestCase_026510_2);

#define VkglTestCase_026511_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026511_2 "tion.teximage3d_pbo.rgb8_image_height_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026511, VkglTestCase_026511_1, VkglTestCase_026511_2);

#define VkglTestCase_026512_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026512_2 "on.teximage3d_pbo.rgb8_row_length_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026512, VkglTestCase_026512_1, VkglTestCase_026512_2);

#define VkglTestCase_026513_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026513_2 "ation.teximage3d_pbo.rgb8_row_length_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026513, VkglTestCase_026513_1, VkglTestCase_026513_2);

#define VkglTestCase_026514_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026514_2 "n.teximage3d_pbo.rgb8_skip_images_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026514, VkglTestCase_026514_1, VkglTestCase_026514_2);

#define VkglTestCase_026515_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026515_2 "tion.teximage3d_pbo.rgb8_skip_images_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026515, VkglTestCase_026515_1, VkglTestCase_026515_2);

#define VkglTestCase_026516_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026516_2 "on.teximage3d_pbo.rgb8_skip_rows_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026516, VkglTestCase_026516_1, VkglTestCase_026516_2);

#define VkglTestCase_026517_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026517_2 "ation.teximage3d_pbo.rgb8_skip_rows_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026517, VkglTestCase_026517_1, VkglTestCase_026517_2);

#define VkglTestCase_026518_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026518_2 "n.teximage3d_pbo.rgb8_skip_pixels_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026518, VkglTestCase_026518_1, VkglTestCase_026518_2);

#define VkglTestCase_026519_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026519_2 "tion.teximage3d_pbo.rgb8_skip_pixels_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026519, VkglTestCase_026519_1, VkglTestCase_026519_2);
