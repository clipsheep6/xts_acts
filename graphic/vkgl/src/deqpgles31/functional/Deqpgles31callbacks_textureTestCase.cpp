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
#include "../ActsDeqpgles310019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018394_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018394_2 "overage.callbacks.texture.activetexture"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018394, VkglTestCase_018394_1, VkglTestCase_018394_2);

#define VkglTestCase_018395_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018395_2 "coverage.callbacks.texture.bindtexture"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018395, VkglTestCase_018395_1, VkglTestCase_018395_2);

#define VkglTestCase_018396_1 "dEQP-GLES31.functional.debug.negative_coverage.cal"
#define VkglTestCase_018396_2 "lbacks.texture.compressedteximage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018396, VkglTestCase_018396_1, VkglTestCase_018396_2);

#define VkglTestCase_018397_1 "dEQP-GLES31.functional.debug.negative_coverage.cal"
#define VkglTestCase_018397_2 "lbacks.texture.compressedteximage2d_invalid_format"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018397, VkglTestCase_018397_1, VkglTestCase_018397_2);

#define VkglTestCase_018398_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018398_2 "callbacks.texture.compressedteximage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018398, VkglTestCase_018398_1, VkglTestCase_018398_2);

#define VkglTestCase_018399_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018399_2 "callbacks.texture.compressedteximage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018399, VkglTestCase_018399_1, VkglTestCase_018399_2);

#define VkglTestCase_018400_1 "dEQP-GLES31.functional.debug.negative_coverage.call"
#define VkglTestCase_018400_2 "backs.texture.compressedteximage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018400, VkglTestCase_018400_1, VkglTestCase_018400_2);

#define VkglTestCase_018401_1 "dEQP-GLES31.functional.debug.negative_coverage.call"
#define VkglTestCase_018401_2 "backs.texture.compressedteximage2d_max_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018401, VkglTestCase_018401_1, VkglTestCase_018401_2);

#define VkglTestCase_018402_1 "dEQP-GLES31.functional.debug.negative_coverage.cal"
#define VkglTestCase_018402_2 "lbacks.texture.compressedteximage2d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018402, VkglTestCase_018402_1, VkglTestCase_018402_2);

#define VkglTestCase_018403_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018403_2 "llbacks.texture.compressedteximage2d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018403, VkglTestCase_018403_1, VkglTestCase_018403_2);

#define VkglTestCase_018404_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018404_2 "callbacks.texture.compressedteximage2d_neg_size"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018404, VkglTestCase_018404_1, VkglTestCase_018404_2);

#define VkglTestCase_018405_1 "dEQP-GLES31.functional.debug.negative_coverage.callba"
#define VkglTestCase_018405_2 "cks.texture.compressedteximage2d_invalid_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018405, VkglTestCase_018405_1, VkglTestCase_018405_2);

#define VkglTestCase_018406_1 "dEQP-GLES31.functional.debug.negative_coverage.callba"
#define VkglTestCase_018406_2 "cks.texture.compressedteximage2d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018406, VkglTestCase_018406_1, VkglTestCase_018406_2);

#define VkglTestCase_018407_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018407_2 "callbacks.texture.copyteximage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018407, VkglTestCase_018407_1, VkglTestCase_018407_2);

#define VkglTestCase_018408_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018408_2 "callbacks.texture.copyteximage2d_invalid_format"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018408, VkglTestCase_018408_1, VkglTestCase_018408_2);

#define VkglTestCase_018409_1 "dEQP-GLES31.functional.debug.negative_coverage.callb"
#define VkglTestCase_018409_2 "acks.texture.copyteximage2d_inequal_width_height_cube"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018409, VkglTestCase_018409_1, VkglTestCase_018409_2);

#define VkglTestCase_018410_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018410_2 "ge.callbacks.texture.copyteximage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018410, VkglTestCase_018410_1, VkglTestCase_018410_2);

#define VkglTestCase_018411_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018411_2 "ge.callbacks.texture.copyteximage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018411, VkglTestCase_018411_1, VkglTestCase_018411_2);

#define VkglTestCase_018412_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018412_2 "allbacks.texture.copyteximage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018412, VkglTestCase_018412_1, VkglTestCase_018412_2);

#define VkglTestCase_018413_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018413_2 "allbacks.texture.copyteximage2d_max_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018413, VkglTestCase_018413_1, VkglTestCase_018413_2);

#define VkglTestCase_018414_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018414_2 "callbacks.texture.copyteximage2d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018414, VkglTestCase_018414_1, VkglTestCase_018414_2);

#define VkglTestCase_018415_1 "dEQP-GLES31.functional.debug.negative_coverage.call"
#define VkglTestCase_018415_2 "backs.texture.copyteximage2d_incomplete_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018415, VkglTestCase_018415_1, VkglTestCase_018415_2);

#define VkglTestCase_018416_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018416_2 "allbacks.texture.copytexsubimage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018416, VkglTestCase_018416_1, VkglTestCase_018416_2);

#define VkglTestCase_018417_1 "dEQP-GLES31.functional.debug.negative_coverage.call"
#define VkglTestCase_018417_2 "backs.texture.copytexsubimage2d_read_buffer_is_none"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018417, VkglTestCase_018417_1, VkglTestCase_018417_2);

#define VkglTestCase_018418_1 "dEQP-GLES31.functional.debug.negative_coverage.callb"
#define VkglTestCase_018418_2 "acks.texture.copytexsubimage2d_texture_internalformat"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018418, VkglTestCase_018418_1, VkglTestCase_018418_2);

#define VkglTestCase_018419_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018419_2 ".callbacks.texture.copytexsubimage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018419, VkglTestCase_018419_1, VkglTestCase_018419_2);

#define VkglTestCase_018420_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018420_2 ".callbacks.texture.copytexsubimage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018420, VkglTestCase_018420_1, VkglTestCase_018420_2);

#define VkglTestCase_018421_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018421_2 ".callbacks.texture.copytexsubimage2d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018421, VkglTestCase_018421_1, VkglTestCase_018421_2);

#define VkglTestCase_018422_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018422_2 "allbacks.texture.copytexsubimage2d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018422, VkglTestCase_018422_1, VkglTestCase_018422_2);

#define VkglTestCase_018423_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018423_2 "llbacks.texture.copytexsubimage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018423, VkglTestCase_018423_1, VkglTestCase_018423_2);

#define VkglTestCase_018424_1 "dEQP-GLES31.functional.debug.negative_coverage.callb"
#define VkglTestCase_018424_2 "acks.texture.copytexsubimage2d_incomplete_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018424, VkglTestCase_018424_1, VkglTestCase_018424_2);

#define VkglTestCase_018425_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018425_2 "overage.callbacks.texture.deletetextures"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018425, VkglTestCase_018425_1, VkglTestCase_018425_2);

#define VkglTestCase_018426_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018426_2 "overage.callbacks.texture.generatemipmap"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018426, VkglTestCase_018426_1, VkglTestCase_018426_2);

#define VkglTestCase_018427_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018427_2 "coverage.callbacks.texture.gentextures"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018427, VkglTestCase_018427_1, VkglTestCase_018427_2);

#define VkglTestCase_018428_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018428_2 "coverage.callbacks.texture.pixelstorei"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018428, VkglTestCase_018428_1, VkglTestCase_018428_2);

#define VkglTestCase_018429_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018429_2 "_coverage.callbacks.texture.teximage2d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018429, VkglTestCase_018429_1, VkglTestCase_018429_2);

#define VkglTestCase_018430_1 "dEQP-GLES31.functional.debug.negative_coverage.cal"
#define VkglTestCase_018430_2 "lbacks.texture.teximage2d_inequal_width_height_cube"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018430, VkglTestCase_018430_1, VkglTestCase_018430_2);

#define VkglTestCase_018431_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018431_2 "rage.callbacks.texture.teximage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018431, VkglTestCase_018431_1, VkglTestCase_018431_2);

#define VkglTestCase_018432_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018432_2 "rage.callbacks.texture.teximage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018432, VkglTestCase_018432_1, VkglTestCase_018432_2);

#define VkglTestCase_018433_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018433_2 ".callbacks.texture.teximage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018433, VkglTestCase_018433_1, VkglTestCase_018433_2);

#define VkglTestCase_018434_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018434_2 ".callbacks.texture.teximage2d_max_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018434, VkglTestCase_018434_1, VkglTestCase_018434_2);

#define VkglTestCase_018435_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018435_2 "e.callbacks.texture.teximage2d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018435, VkglTestCase_018435_1, VkglTestCase_018435_2);

#define VkglTestCase_018436_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018436_2 "allbacks.texture.teximage2d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018436, VkglTestCase_018436_1, VkglTestCase_018436_2);

#define VkglTestCase_018437_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018437_2 "overage.callbacks.texture.texsubimage2d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018437, VkglTestCase_018437_1, VkglTestCase_018437_2);

#define VkglTestCase_018438_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018438_2 "ge.callbacks.texture.texsubimage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018438, VkglTestCase_018438_1, VkglTestCase_018438_2);

#define VkglTestCase_018439_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018439_2 "ge.callbacks.texture.texsubimage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018439, VkglTestCase_018439_1, VkglTestCase_018439_2);

#define VkglTestCase_018440_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018440_2 "ge.callbacks.texture.texsubimage2d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018440, VkglTestCase_018440_1, VkglTestCase_018440_2);

#define VkglTestCase_018441_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018441_2 ".callbacks.texture.texsubimage2d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018441, VkglTestCase_018441_1, VkglTestCase_018441_2);

#define VkglTestCase_018442_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018442_2 "callbacks.texture.texsubimage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018442, VkglTestCase_018442_1, VkglTestCase_018442_2);

#define VkglTestCase_018443_1 "dEQP-GLES31.functional.debug.negative_coverage.cal"
#define VkglTestCase_018443_2 "lbacks.texture.texsubimage2d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018443, VkglTestCase_018443_1, VkglTestCase_018443_2);

#define VkglTestCase_018444_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018444_2 "overage.callbacks.texture.texparameteri"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018444, VkglTestCase_018444_1, VkglTestCase_018444_2);

#define VkglTestCase_018445_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018445_2 "overage.callbacks.texture.texparameterf"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018445, VkglTestCase_018445_1, VkglTestCase_018445_2);

#define VkglTestCase_018446_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018446_2 "overage.callbacks.texture.texparameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018446, VkglTestCase_018446_1, VkglTestCase_018446_2);

#define VkglTestCase_018447_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018447_2 "overage.callbacks.texture.texparameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018447, VkglTestCase_018447_1, VkglTestCase_018447_2);

#define VkglTestCase_018448_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018448_2 "verage.callbacks.texture.texparameterIiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018448, VkglTestCase_018448_1, VkglTestCase_018448_2);

#define VkglTestCase_018449_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018449_2 "verage.callbacks.texture.texparameterIuiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018449, VkglTestCase_018449_1, VkglTestCase_018449_2);

#define VkglTestCase_018450_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018450_2 "ge.callbacks.texture.compressedtexsubimage2d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018450, VkglTestCase_018450_1, VkglTestCase_018450_2);

#define VkglTestCase_018451_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018451_2 "llbacks.texture.compressedtexsubimage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018451, VkglTestCase_018451_1, VkglTestCase_018451_2);

#define VkglTestCase_018452_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018452_2 "llbacks.texture.compressedtexsubimage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018452, VkglTestCase_018452_1, VkglTestCase_018452_2);

#define VkglTestCase_018453_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018453_2 "llbacks.texture.compressedtexsubimage2d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018453, VkglTestCase_018453_1, VkglTestCase_018453_2);

#define VkglTestCase_018454_1 "dEQP-GLES31.functional.debug.negative_coverage.call"
#define VkglTestCase_018454_2 "backs.texture.compressedtexsubimage2d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018454, VkglTestCase_018454_1, VkglTestCase_018454_2);

#define VkglTestCase_018455_1 "dEQP-GLES31.functional.debug.negative_coverage.callb"
#define VkglTestCase_018455_2 "acks.texture.compressedtexsubimage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018455, VkglTestCase_018455_1, VkglTestCase_018455_2);

#define VkglTestCase_018456_1 "dEQP-GLES31.functional.debug.negative_coverage.cal"
#define VkglTestCase_018456_2 "lbacks.texture.compressedtexsubimage2d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018456, VkglTestCase_018456_1, VkglTestCase_018456_2);

#define VkglTestCase_018457_1 "dEQP-GLES31.functional.debug.negative_coverage.callback"
#define VkglTestCase_018457_2 "s.texture.compressedtexsubimage2d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018457, VkglTestCase_018457_1, VkglTestCase_018457_2);

#define VkglTestCase_018458_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018458_2 "_coverage.callbacks.texture.teximage3d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018458, VkglTestCase_018458_1, VkglTestCase_018458_2);

#define VkglTestCase_018459_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018459_2 "rage.callbacks.texture.teximage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018459, VkglTestCase_018459_1, VkglTestCase_018459_2);

#define VkglTestCase_018460_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018460_2 "rage.callbacks.texture.teximage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018460, VkglTestCase_018460_1, VkglTestCase_018460_2);

#define VkglTestCase_018461_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018461_2 "llbacks.texture.teximage3d_neg_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018461, VkglTestCase_018461_1, VkglTestCase_018461_2);

#define VkglTestCase_018462_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018462_2 "llbacks.texture.teximage3d_max_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018462, VkglTestCase_018462_1, VkglTestCase_018462_2);

#define VkglTestCase_018463_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018463_2 "e.callbacks.texture.teximage3d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018463, VkglTestCase_018463_1, VkglTestCase_018463_2);

#define VkglTestCase_018464_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018464_2 "allbacks.texture.teximage3d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018464, VkglTestCase_018464_1, VkglTestCase_018464_2);

#define VkglTestCase_018465_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018465_2 "overage.callbacks.texture.texsubimage3d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018465, VkglTestCase_018465_1, VkglTestCase_018465_2);

#define VkglTestCase_018466_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018466_2 "ge.callbacks.texture.texsubimage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018466, VkglTestCase_018466_1, VkglTestCase_018466_2);

#define VkglTestCase_018467_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018467_2 "ge.callbacks.texture.texsubimage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018467, VkglTestCase_018467_1, VkglTestCase_018467_2);

#define VkglTestCase_018468_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018468_2 "ge.callbacks.texture.texsubimage3d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018468, VkglTestCase_018468_1, VkglTestCase_018468_2);

#define VkglTestCase_018469_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018469_2 ".callbacks.texture.texsubimage3d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018469, VkglTestCase_018469_1, VkglTestCase_018469_2);

#define VkglTestCase_018470_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018470_2 "callbacks.texture.texsubimage3d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018470, VkglTestCase_018470_1, VkglTestCase_018470_2);

#define VkglTestCase_018471_1 "dEQP-GLES31.functional.debug.negative_coverage.cal"
#define VkglTestCase_018471_2 "lbacks.texture.texsubimage3d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018471, VkglTestCase_018471_1, VkglTestCase_018471_2);

#define VkglTestCase_018472_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018472_2 "erage.callbacks.texture.copytexsubimage3d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018472, VkglTestCase_018472_1, VkglTestCase_018472_2);

#define VkglTestCase_018473_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018473_2 ".callbacks.texture.copytexsubimage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018473, VkglTestCase_018473_1, VkglTestCase_018473_2);

#define VkglTestCase_018474_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018474_2 ".callbacks.texture.copytexsubimage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018474, VkglTestCase_018474_1, VkglTestCase_018474_2);

#define VkglTestCase_018475_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018475_2 ".callbacks.texture.copytexsubimage3d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018475, VkglTestCase_018475_1, VkglTestCase_018475_2);

#define VkglTestCase_018476_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018476_2 "allbacks.texture.copytexsubimage3d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018476, VkglTestCase_018476_1, VkglTestCase_018476_2);

#define VkglTestCase_018477_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018477_2 "llbacks.texture.copytexsubimage3d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018477, VkglTestCase_018477_1, VkglTestCase_018477_2);

#define VkglTestCase_018478_1 "dEQP-GLES31.functional.debug.negative_coverage.callb"
#define VkglTestCase_018478_2 "acks.texture.copytexsubimage3d_incomplete_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018478, VkglTestCase_018478_1, VkglTestCase_018478_2);

#define VkglTestCase_018479_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018479_2 "rage.callbacks.texture.compressedteximage3d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018479, VkglTestCase_018479_1, VkglTestCase_018479_2);

#define VkglTestCase_018480_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018480_2 "callbacks.texture.compressedteximage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018480, VkglTestCase_018480_1, VkglTestCase_018480_2);

#define VkglTestCase_018481_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018481_2 "callbacks.texture.compressedteximage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018481, VkglTestCase_018481_1, VkglTestCase_018481_2);

#define VkglTestCase_018482_1 "dEQP-GLES31.functional.debug.negative_coverage.callbac"
#define VkglTestCase_018482_2 "ks.texture.compressedteximage3d_neg_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018482, VkglTestCase_018482_1, VkglTestCase_018482_2);

#define VkglTestCase_018483_1 "dEQP-GLES31.functional.debug.negative_coverage.callbac"
#define VkglTestCase_018483_2 "ks.texture.compressedteximage3d_max_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018483, VkglTestCase_018483_1, VkglTestCase_018483_2);

#define VkglTestCase_018484_1 "dEQP-GLES31.functional.debug.negative_coverage.cal"
#define VkglTestCase_018484_2 "lbacks.texture.compressedteximage3d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018484, VkglTestCase_018484_1, VkglTestCase_018484_2);

#define VkglTestCase_018485_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018485_2 "llbacks.texture.compressedteximage3d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018485, VkglTestCase_018485_1, VkglTestCase_018485_2);

#define VkglTestCase_018486_1 "dEQP-GLES31.functional.debug.negative_coverage.callba"
#define VkglTestCase_018486_2 "cks.texture.compressedteximage3d_invalid_width_height"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018486, VkglTestCase_018486_1, VkglTestCase_018486_2);

#define VkglTestCase_018487_1 "dEQP-GLES31.functional.debug.negative_coverage.callba"
#define VkglTestCase_018487_2 "cks.texture.compressedteximage3d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018487, VkglTestCase_018487_1, VkglTestCase_018487_2);

#define VkglTestCase_018488_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018488_2 "ge.callbacks.texture.compressedtexsubimage3d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018488, VkglTestCase_018488_1, VkglTestCase_018488_2);

#define VkglTestCase_018489_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018489_2 "llbacks.texture.compressedtexsubimage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018489, VkglTestCase_018489_1, VkglTestCase_018489_2);

#define VkglTestCase_018490_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018490_2 "llbacks.texture.compressedtexsubimage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018490, VkglTestCase_018490_1, VkglTestCase_018490_2);

#define VkglTestCase_018491_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018491_2 "llbacks.texture.compressedtexsubimage3d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018491, VkglTestCase_018491_1, VkglTestCase_018491_2);

#define VkglTestCase_018492_1 "dEQP-GLES31.functional.debug.negative_coverage.call"
#define VkglTestCase_018492_2 "backs.texture.compressedtexsubimage3d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018492, VkglTestCase_018492_1, VkglTestCase_018492_2);

#define VkglTestCase_018493_1 "dEQP-GLES31.functional.debug.negative_coverage.callback"
#define VkglTestCase_018493_2 "s.texture.compressedtexsubimage3d_neg_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018493, VkglTestCase_018493_1, VkglTestCase_018493_2);

#define VkglTestCase_018494_1 "dEQP-GLES31.functional.debug.negative_coverage.cal"
#define VkglTestCase_018494_2 "lbacks.texture.compressedtexsubimage3d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018494, VkglTestCase_018494_1, VkglTestCase_018494_2);

#define VkglTestCase_018495_1 "dEQP-GLES31.functional.debug.negative_coverage.callback"
#define VkglTestCase_018495_2 "s.texture.compressedtexsubimage3d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018495, VkglTestCase_018495_1, VkglTestCase_018495_2);

#define VkglTestCase_018496_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018496_2 "coverage.callbacks.texture.texstorage2d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018496, VkglTestCase_018496_1, VkglTestCase_018496_2);

#define VkglTestCase_018497_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018497_2 ".callbacks.texture.texstorage2d_invalid_binding"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018497, VkglTestCase_018497_1, VkglTestCase_018497_2);

#define VkglTestCase_018498_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018498_2 ".callbacks.texture.texstorage2d_invalid_levels"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018498, VkglTestCase_018498_1, VkglTestCase_018498_2);

#define VkglTestCase_018499_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018499_2 "coverage.callbacks.texture.texstorage3d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018499, VkglTestCase_018499_1, VkglTestCase_018499_2);

#define VkglTestCase_018500_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018500_2 ".callbacks.texture.texstorage3d_invalid_binding"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018500, VkglTestCase_018500_1, VkglTestCase_018500_2);

#define VkglTestCase_018501_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018501_2 ".callbacks.texture.texstorage3d_invalid_levels"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018501, VkglTestCase_018501_1, VkglTestCase_018501_2);

#define VkglTestCase_018502_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018502_2 "e.callbacks.texture.srgb_decode_texparameteri"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018502, VkglTestCase_018502_1, VkglTestCase_018502_2);

#define VkglTestCase_018503_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018503_2 "e.callbacks.texture.srgb_decode_texparameterf"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018503, VkglTestCase_018503_1, VkglTestCase_018503_2);

#define VkglTestCase_018504_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018504_2 "e.callbacks.texture.srgb_decode_texparameteriv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018504, VkglTestCase_018504_1, VkglTestCase_018504_2);

#define VkglTestCase_018505_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018505_2 "e.callbacks.texture.srgb_decode_texparameterfv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018505, VkglTestCase_018505_1, VkglTestCase_018505_2);

#define VkglTestCase_018506_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018506_2 ".callbacks.texture.srgb_decode_texparameterIiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018506, VkglTestCase_018506_1, VkglTestCase_018506_2);

#define VkglTestCase_018507_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018507_2 ".callbacks.texture.srgb_decode_texparameterIuiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018507, VkglTestCase_018507_1, VkglTestCase_018507_2);
