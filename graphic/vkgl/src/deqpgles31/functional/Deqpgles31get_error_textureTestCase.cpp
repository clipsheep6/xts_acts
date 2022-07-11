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
#include "../ActsDeqpgles310020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019390_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019390_2 "overage.get_error.texture.activetexture"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019390, VkglTestCase_019390_1, VkglTestCase_019390_2);

#define VkglTestCase_019391_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019391_2 "coverage.get_error.texture.bindtexture"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019391, VkglTestCase_019391_1, VkglTestCase_019391_2);

#define VkglTestCase_019392_1 "dEQP-GLES31.functional.debug.negative_coverage.get"
#define VkglTestCase_019392_2 "_error.texture.compressedteximage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019392, VkglTestCase_019392_1, VkglTestCase_019392_2);

#define VkglTestCase_019393_1 "dEQP-GLES31.functional.debug.negative_coverage.get"
#define VkglTestCase_019393_2 "_error.texture.compressedteximage2d_invalid_format"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019393, VkglTestCase_019393_1, VkglTestCase_019393_2);

#define VkglTestCase_019394_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019394_2 "get_error.texture.compressedteximage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019394, VkglTestCase_019394_1, VkglTestCase_019394_2);

#define VkglTestCase_019395_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019395_2 "get_error.texture.compressedteximage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019395, VkglTestCase_019395_1, VkglTestCase_019395_2);

#define VkglTestCase_019396_1 "dEQP-GLES31.functional.debug.negative_coverage.get_"
#define VkglTestCase_019396_2 "error.texture.compressedteximage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019396, VkglTestCase_019396_1, VkglTestCase_019396_2);

#define VkglTestCase_019397_1 "dEQP-GLES31.functional.debug.negative_coverage.get_"
#define VkglTestCase_019397_2 "error.texture.compressedteximage2d_max_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019397, VkglTestCase_019397_1, VkglTestCase_019397_2);

#define VkglTestCase_019398_1 "dEQP-GLES31.functional.debug.negative_coverage.get"
#define VkglTestCase_019398_2 "_error.texture.compressedteximage2d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019398, VkglTestCase_019398_1, VkglTestCase_019398_2);

#define VkglTestCase_019399_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019399_2 "t_error.texture.compressedteximage2d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019399, VkglTestCase_019399_1, VkglTestCase_019399_2);

#define VkglTestCase_019400_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019400_2 "get_error.texture.compressedteximage2d_neg_size"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019400, VkglTestCase_019400_1, VkglTestCase_019400_2);

#define VkglTestCase_019401_1 "dEQP-GLES31.functional.debug.negative_coverage.get_er"
#define VkglTestCase_019401_2 "ror.texture.compressedteximage2d_invalid_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019401, VkglTestCase_019401_1, VkglTestCase_019401_2);

#define VkglTestCase_019402_1 "dEQP-GLES31.functional.debug.negative_coverage.get_er"
#define VkglTestCase_019402_2 "ror.texture.compressedteximage2d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019402, VkglTestCase_019402_1, VkglTestCase_019402_2);

#define VkglTestCase_019403_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019403_2 "get_error.texture.copyteximage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019403, VkglTestCase_019403_1, VkglTestCase_019403_2);

#define VkglTestCase_019404_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019404_2 "get_error.texture.copyteximage2d_invalid_format"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019404, VkglTestCase_019404_1, VkglTestCase_019404_2);

#define VkglTestCase_019405_1 "dEQP-GLES31.functional.debug.negative_coverage.get_e"
#define VkglTestCase_019405_2 "rror.texture.copyteximage2d_inequal_width_height_cube"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019405, VkglTestCase_019405_1, VkglTestCase_019405_2);

#define VkglTestCase_019406_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019406_2 "ge.get_error.texture.copyteximage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019406, VkglTestCase_019406_1, VkglTestCase_019406_2);

#define VkglTestCase_019407_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019407_2 "ge.get_error.texture.copyteximage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019407, VkglTestCase_019407_1, VkglTestCase_019407_2);

#define VkglTestCase_019408_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019408_2 "et_error.texture.copyteximage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019408, VkglTestCase_019408_1, VkglTestCase_019408_2);

#define VkglTestCase_019409_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019409_2 "et_error.texture.copyteximage2d_max_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019409, VkglTestCase_019409_1, VkglTestCase_019409_2);

#define VkglTestCase_019410_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019410_2 "get_error.texture.copyteximage2d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019410, VkglTestCase_019410_1, VkglTestCase_019410_2);

#define VkglTestCase_019411_1 "dEQP-GLES31.functional.debug.negative_coverage.get_"
#define VkglTestCase_019411_2 "error.texture.copyteximage2d_incomplete_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019411, VkglTestCase_019411_1, VkglTestCase_019411_2);

#define VkglTestCase_019412_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019412_2 "et_error.texture.copytexsubimage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019412, VkglTestCase_019412_1, VkglTestCase_019412_2);

#define VkglTestCase_019413_1 "dEQP-GLES31.functional.debug.negative_coverage.get_"
#define VkglTestCase_019413_2 "error.texture.copytexsubimage2d_read_buffer_is_none"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019413, VkglTestCase_019413_1, VkglTestCase_019413_2);

#define VkglTestCase_019414_1 "dEQP-GLES31.functional.debug.negative_coverage.get_e"
#define VkglTestCase_019414_2 "rror.texture.copytexsubimage2d_texture_internalformat"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019414, VkglTestCase_019414_1, VkglTestCase_019414_2);

#define VkglTestCase_019415_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019415_2 ".get_error.texture.copytexsubimage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019415, VkglTestCase_019415_1, VkglTestCase_019415_2);

#define VkglTestCase_019416_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019416_2 ".get_error.texture.copytexsubimage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019416, VkglTestCase_019416_1, VkglTestCase_019416_2);

#define VkglTestCase_019417_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019417_2 ".get_error.texture.copytexsubimage2d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019417, VkglTestCase_019417_1, VkglTestCase_019417_2);

#define VkglTestCase_019418_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019418_2 "et_error.texture.copytexsubimage2d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019418, VkglTestCase_019418_1, VkglTestCase_019418_2);

#define VkglTestCase_019419_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019419_2 "t_error.texture.copytexsubimage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019419, VkglTestCase_019419_1, VkglTestCase_019419_2);

#define VkglTestCase_019420_1 "dEQP-GLES31.functional.debug.negative_coverage.get_e"
#define VkglTestCase_019420_2 "rror.texture.copytexsubimage2d_incomplete_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019420, VkglTestCase_019420_1, VkglTestCase_019420_2);

#define VkglTestCase_019421_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019421_2 "overage.get_error.texture.deletetextures"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019421, VkglTestCase_019421_1, VkglTestCase_019421_2);

#define VkglTestCase_019422_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019422_2 "overage.get_error.texture.generatemipmap"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019422, VkglTestCase_019422_1, VkglTestCase_019422_2);

#define VkglTestCase_019423_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019423_2 "coverage.get_error.texture.gentextures"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019423, VkglTestCase_019423_1, VkglTestCase_019423_2);

#define VkglTestCase_019424_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019424_2 "coverage.get_error.texture.pixelstorei"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019424, VkglTestCase_019424_1, VkglTestCase_019424_2);

#define VkglTestCase_019425_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019425_2 "_coverage.get_error.texture.teximage2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019425, VkglTestCase_019425_1, VkglTestCase_019425_2);

#define VkglTestCase_019426_1 "dEQP-GLES31.functional.debug.negative_coverage.get"
#define VkglTestCase_019426_2 "_error.texture.teximage2d_inequal_width_height_cube"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019426, VkglTestCase_019426_1, VkglTestCase_019426_2);

#define VkglTestCase_019427_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019427_2 "rage.get_error.texture.teximage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019427, VkglTestCase_019427_1, VkglTestCase_019427_2);

#define VkglTestCase_019428_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019428_2 "rage.get_error.texture.teximage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019428, VkglTestCase_019428_1, VkglTestCase_019428_2);

#define VkglTestCase_019429_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019429_2 ".get_error.texture.teximage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019429, VkglTestCase_019429_1, VkglTestCase_019429_2);

#define VkglTestCase_019430_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019430_2 ".get_error.texture.teximage2d_max_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019430, VkglTestCase_019430_1, VkglTestCase_019430_2);

#define VkglTestCase_019431_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019431_2 "e.get_error.texture.teximage2d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019431, VkglTestCase_019431_1, VkglTestCase_019431_2);

#define VkglTestCase_019432_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019432_2 "et_error.texture.teximage2d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019432, VkglTestCase_019432_1, VkglTestCase_019432_2);

#define VkglTestCase_019433_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019433_2 "overage.get_error.texture.texsubimage2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019433, VkglTestCase_019433_1, VkglTestCase_019433_2);

#define VkglTestCase_019434_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019434_2 "ge.get_error.texture.texsubimage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019434, VkglTestCase_019434_1, VkglTestCase_019434_2);

#define VkglTestCase_019435_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019435_2 "ge.get_error.texture.texsubimage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019435, VkglTestCase_019435_1, VkglTestCase_019435_2);

#define VkglTestCase_019436_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019436_2 "ge.get_error.texture.texsubimage2d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019436, VkglTestCase_019436_1, VkglTestCase_019436_2);

#define VkglTestCase_019437_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019437_2 ".get_error.texture.texsubimage2d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019437, VkglTestCase_019437_1, VkglTestCase_019437_2);

#define VkglTestCase_019438_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019438_2 "get_error.texture.texsubimage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019438, VkglTestCase_019438_1, VkglTestCase_019438_2);

#define VkglTestCase_019439_1 "dEQP-GLES31.functional.debug.negative_coverage.get"
#define VkglTestCase_019439_2 "_error.texture.texsubimage2d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019439, VkglTestCase_019439_1, VkglTestCase_019439_2);

#define VkglTestCase_019440_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019440_2 "overage.get_error.texture.texparameteri"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019440, VkglTestCase_019440_1, VkglTestCase_019440_2);

#define VkglTestCase_019441_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019441_2 "overage.get_error.texture.texparameterf"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019441, VkglTestCase_019441_1, VkglTestCase_019441_2);

#define VkglTestCase_019442_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019442_2 "overage.get_error.texture.texparameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019442, VkglTestCase_019442_1, VkglTestCase_019442_2);

#define VkglTestCase_019443_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019443_2 "overage.get_error.texture.texparameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019443, VkglTestCase_019443_1, VkglTestCase_019443_2);

#define VkglTestCase_019444_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019444_2 "verage.get_error.texture.texparameterIiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019444, VkglTestCase_019444_1, VkglTestCase_019444_2);

#define VkglTestCase_019445_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019445_2 "verage.get_error.texture.texparameterIuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019445, VkglTestCase_019445_1, VkglTestCase_019445_2);

#define VkglTestCase_019446_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019446_2 "ge.get_error.texture.compressedtexsubimage2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019446, VkglTestCase_019446_1, VkglTestCase_019446_2);

#define VkglTestCase_019447_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019447_2 "t_error.texture.compressedtexsubimage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019447, VkglTestCase_019447_1, VkglTestCase_019447_2);

#define VkglTestCase_019448_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019448_2 "t_error.texture.compressedtexsubimage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019448, VkglTestCase_019448_1, VkglTestCase_019448_2);

#define VkglTestCase_019449_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019449_2 "t_error.texture.compressedtexsubimage2d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019449, VkglTestCase_019449_1, VkglTestCase_019449_2);

#define VkglTestCase_019450_1 "dEQP-GLES31.functional.debug.negative_coverage.get_"
#define VkglTestCase_019450_2 "error.texture.compressedtexsubimage2d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019450, VkglTestCase_019450_1, VkglTestCase_019450_2);

#define VkglTestCase_019451_1 "dEQP-GLES31.functional.debug.negative_coverage.get_e"
#define VkglTestCase_019451_2 "rror.texture.compressedtexsubimage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019451, VkglTestCase_019451_1, VkglTestCase_019451_2);

#define VkglTestCase_019452_1 "dEQP-GLES31.functional.debug.negative_coverage.get"
#define VkglTestCase_019452_2 "_error.texture.compressedtexsubimage2d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019452, VkglTestCase_019452_1, VkglTestCase_019452_2);

#define VkglTestCase_019453_1 "dEQP-GLES31.functional.debug.negative_coverage.get_erro"
#define VkglTestCase_019453_2 "r.texture.compressedtexsubimage2d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019453, VkglTestCase_019453_1, VkglTestCase_019453_2);

#define VkglTestCase_019454_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019454_2 "_coverage.get_error.texture.teximage3d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019454, VkglTestCase_019454_1, VkglTestCase_019454_2);

#define VkglTestCase_019455_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019455_2 "rage.get_error.texture.teximage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019455, VkglTestCase_019455_1, VkglTestCase_019455_2);

#define VkglTestCase_019456_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019456_2 "rage.get_error.texture.teximage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019456, VkglTestCase_019456_1, VkglTestCase_019456_2);

#define VkglTestCase_019457_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019457_2 "t_error.texture.teximage3d_neg_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019457, VkglTestCase_019457_1, VkglTestCase_019457_2);

#define VkglTestCase_019458_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019458_2 "t_error.texture.teximage3d_max_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019458, VkglTestCase_019458_1, VkglTestCase_019458_2);

#define VkglTestCase_019459_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019459_2 "e.get_error.texture.teximage3d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019459, VkglTestCase_019459_1, VkglTestCase_019459_2);

#define VkglTestCase_019460_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019460_2 "et_error.texture.teximage3d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019460, VkglTestCase_019460_1, VkglTestCase_019460_2);

#define VkglTestCase_019461_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019461_2 "overage.get_error.texture.texsubimage3d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019461, VkglTestCase_019461_1, VkglTestCase_019461_2);

#define VkglTestCase_019462_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019462_2 "ge.get_error.texture.texsubimage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019462, VkglTestCase_019462_1, VkglTestCase_019462_2);

#define VkglTestCase_019463_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019463_2 "ge.get_error.texture.texsubimage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019463, VkglTestCase_019463_1, VkglTestCase_019463_2);

#define VkglTestCase_019464_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019464_2 "ge.get_error.texture.texsubimage3d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019464, VkglTestCase_019464_1, VkglTestCase_019464_2);

#define VkglTestCase_019465_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019465_2 ".get_error.texture.texsubimage3d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019465, VkglTestCase_019465_1, VkglTestCase_019465_2);

#define VkglTestCase_019466_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019466_2 "get_error.texture.texsubimage3d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019466, VkglTestCase_019466_1, VkglTestCase_019466_2);

#define VkglTestCase_019467_1 "dEQP-GLES31.functional.debug.negative_coverage.get"
#define VkglTestCase_019467_2 "_error.texture.texsubimage3d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019467, VkglTestCase_019467_1, VkglTestCase_019467_2);

#define VkglTestCase_019468_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019468_2 "erage.get_error.texture.copytexsubimage3d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019468, VkglTestCase_019468_1, VkglTestCase_019468_2);

#define VkglTestCase_019469_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019469_2 ".get_error.texture.copytexsubimage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019469, VkglTestCase_019469_1, VkglTestCase_019469_2);

#define VkglTestCase_019470_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019470_2 ".get_error.texture.copytexsubimage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019470, VkglTestCase_019470_1, VkglTestCase_019470_2);

#define VkglTestCase_019471_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019471_2 ".get_error.texture.copytexsubimage3d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019471, VkglTestCase_019471_1, VkglTestCase_019471_2);

#define VkglTestCase_019472_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019472_2 "et_error.texture.copytexsubimage3d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019472, VkglTestCase_019472_1, VkglTestCase_019472_2);

#define VkglTestCase_019473_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019473_2 "t_error.texture.copytexsubimage3d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019473, VkglTestCase_019473_1, VkglTestCase_019473_2);

#define VkglTestCase_019474_1 "dEQP-GLES31.functional.debug.negative_coverage.get_e"
#define VkglTestCase_019474_2 "rror.texture.copytexsubimage3d_incomplete_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019474, VkglTestCase_019474_1, VkglTestCase_019474_2);

#define VkglTestCase_019475_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019475_2 "rage.get_error.texture.compressedteximage3d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019475, VkglTestCase_019475_1, VkglTestCase_019475_2);

#define VkglTestCase_019476_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019476_2 "get_error.texture.compressedteximage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019476, VkglTestCase_019476_1, VkglTestCase_019476_2);

#define VkglTestCase_019477_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019477_2 "get_error.texture.compressedteximage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019477, VkglTestCase_019477_1, VkglTestCase_019477_2);

#define VkglTestCase_019478_1 "dEQP-GLES31.functional.debug.negative_coverage.get_err"
#define VkglTestCase_019478_2 "or.texture.compressedteximage3d_neg_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019478, VkglTestCase_019478_1, VkglTestCase_019478_2);

#define VkglTestCase_019479_1 "dEQP-GLES31.functional.debug.negative_coverage.get_err"
#define VkglTestCase_019479_2 "or.texture.compressedteximage3d_max_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019479, VkglTestCase_019479_1, VkglTestCase_019479_2);

#define VkglTestCase_019480_1 "dEQP-GLES31.functional.debug.negative_coverage.get"
#define VkglTestCase_019480_2 "_error.texture.compressedteximage3d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019480, VkglTestCase_019480_1, VkglTestCase_019480_2);

#define VkglTestCase_019481_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019481_2 "t_error.texture.compressedteximage3d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019481, VkglTestCase_019481_1, VkglTestCase_019481_2);

#define VkglTestCase_019482_1 "dEQP-GLES31.functional.debug.negative_coverage.get_er"
#define VkglTestCase_019482_2 "ror.texture.compressedteximage3d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019482, VkglTestCase_019482_1, VkglTestCase_019482_2);

#define VkglTestCase_019483_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019483_2 "ge.get_error.texture.compressedtexsubimage3d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019483, VkglTestCase_019483_1, VkglTestCase_019483_2);

#define VkglTestCase_019484_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019484_2 "t_error.texture.compressedtexsubimage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019484, VkglTestCase_019484_1, VkglTestCase_019484_2);

#define VkglTestCase_019485_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019485_2 "t_error.texture.compressedtexsubimage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019485, VkglTestCase_019485_1, VkglTestCase_019485_2);

#define VkglTestCase_019486_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019486_2 "t_error.texture.compressedtexsubimage3d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019486, VkglTestCase_019486_1, VkglTestCase_019486_2);

#define VkglTestCase_019487_1 "dEQP-GLES31.functional.debug.negative_coverage.get_"
#define VkglTestCase_019487_2 "error.texture.compressedtexsubimage3d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019487, VkglTestCase_019487_1, VkglTestCase_019487_2);

#define VkglTestCase_019488_1 "dEQP-GLES31.functional.debug.negative_coverage.get_erro"
#define VkglTestCase_019488_2 "r.texture.compressedtexsubimage3d_neg_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019488, VkglTestCase_019488_1, VkglTestCase_019488_2);

#define VkglTestCase_019489_1 "dEQP-GLES31.functional.debug.negative_coverage.get"
#define VkglTestCase_019489_2 "_error.texture.compressedtexsubimage3d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019489, VkglTestCase_019489_1, VkglTestCase_019489_2);

#define VkglTestCase_019490_1 "dEQP-GLES31.functional.debug.negative_coverage.get_erro"
#define VkglTestCase_019490_2 "r.texture.compressedtexsubimage3d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019490, VkglTestCase_019490_1, VkglTestCase_019490_2);

#define VkglTestCase_019491_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019491_2 "coverage.get_error.texture.texstorage2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019491, VkglTestCase_019491_1, VkglTestCase_019491_2);

#define VkglTestCase_019492_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019492_2 ".get_error.texture.texstorage2d_invalid_binding"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019492, VkglTestCase_019492_1, VkglTestCase_019492_2);

#define VkglTestCase_019493_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019493_2 ".get_error.texture.texstorage2d_invalid_levels"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019493, VkglTestCase_019493_1, VkglTestCase_019493_2);

#define VkglTestCase_019494_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019494_2 "coverage.get_error.texture.texstorage3d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019494, VkglTestCase_019494_1, VkglTestCase_019494_2);

#define VkglTestCase_019495_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019495_2 ".get_error.texture.texstorage3d_invalid_binding"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019495, VkglTestCase_019495_1, VkglTestCase_019495_2);

#define VkglTestCase_019496_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019496_2 ".get_error.texture.texstorage3d_invalid_levels"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019496, VkglTestCase_019496_1, VkglTestCase_019496_2);

#define VkglTestCase_019497_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019497_2 "e.get_error.texture.srgb_decode_texparameteri"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019497, VkglTestCase_019497_1, VkglTestCase_019497_2);

#define VkglTestCase_019498_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019498_2 "e.get_error.texture.srgb_decode_texparameterf"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019498, VkglTestCase_019498_1, VkglTestCase_019498_2);

#define VkglTestCase_019499_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019499_2 "e.get_error.texture.srgb_decode_texparameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019499, VkglTestCase_019499_1, VkglTestCase_019499_2);

#define VkglTestCase_019500_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019500_2 "e.get_error.texture.srgb_decode_texparameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019500, VkglTestCase_019500_1, VkglTestCase_019500_2);

#define VkglTestCase_019501_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019501_2 ".get_error.texture.srgb_decode_texparameterIiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019501, VkglTestCase_019501_1, VkglTestCase_019501_2);

#define VkglTestCase_019502_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019502_2 ".get_error.texture.srgb_decode_texparameterIuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019502, VkglTestCase_019502_1, VkglTestCase_019502_2);
