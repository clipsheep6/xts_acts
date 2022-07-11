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
#include "../ActsDeqpgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000397_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000397_2 "unctions.common.ceil.float_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000397, VkglTestCase_000397_1, VkglTestCase_000397_2);

#define VkglTestCase_000398_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000398_2 "ctions.common.ceil.float_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000398, VkglTestCase_000398_1, VkglTestCase_000398_2);

#define VkglTestCase_000399_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000399_2 "unctions.common.ceil.float_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000399, VkglTestCase_000399_1, VkglTestCase_000399_2);

#define VkglTestCase_000400_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000400_2 "functions.common.ceil.float_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000400, VkglTestCase_000400_1, VkglTestCase_000400_2);

#define VkglTestCase_000401_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000401_2 "nctions.common.ceil.float_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000401, VkglTestCase_000401_1, VkglTestCase_000401_2);

#define VkglTestCase_000402_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000402_2 "tions.common.ceil.float_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000402, VkglTestCase_000402_1, VkglTestCase_000402_2);

#define VkglTestCase_000403_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000403_2 "ctions.common.ceil.float_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000403, VkglTestCase_000403_1, VkglTestCase_000403_2);

#define VkglTestCase_000404_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000404_2 "nctions.common.ceil.float_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000404, VkglTestCase_000404_1, VkglTestCase_000404_2);

#define VkglTestCase_000405_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000405_2 "unctions.common.ceil.float_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000405, VkglTestCase_000405_1, VkglTestCase_000405_2);

#define VkglTestCase_000406_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000406_2 "ctions.common.ceil.float_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000406, VkglTestCase_000406_1, VkglTestCase_000406_2);

#define VkglTestCase_000407_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000407_2 "nctions.common.ceil.float_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000407, VkglTestCase_000407_1, VkglTestCase_000407_2);

#define VkglTestCase_000408_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000408_2 "unctions.common.ceil.float_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000408, VkglTestCase_000408_1, VkglTestCase_000408_2);

#define VkglTestCase_000409_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000409_2 "functions.common.ceil.vec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000409, VkglTestCase_000409_1, VkglTestCase_000409_2);

#define VkglTestCase_000410_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000410_2 "nctions.common.ceil.vec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000410, VkglTestCase_000410_1, VkglTestCase_000410_2);

#define VkglTestCase_000411_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000411_2 "unctions.common.ceil.vec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000411, VkglTestCase_000411_1, VkglTestCase_000411_2);

#define VkglTestCase_000412_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000412_2 "functions.common.ceil.vec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000412, VkglTestCase_000412_1, VkglTestCase_000412_2);

#define VkglTestCase_000413_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000413_2 "nctions.common.ceil.vec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000413, VkglTestCase_000413_1, VkglTestCase_000413_2);

#define VkglTestCase_000414_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000414_2 "tions.common.ceil.vec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000414, VkglTestCase_000414_1, VkglTestCase_000414_2);

#define VkglTestCase_000415_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000415_2 "nctions.common.ceil.vec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000415, VkglTestCase_000415_1, VkglTestCase_000415_2);

#define VkglTestCase_000416_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000416_2 "unctions.common.ceil.vec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000416, VkglTestCase_000416_1, VkglTestCase_000416_2);

#define VkglTestCase_000417_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000417_2 "unctions.common.ceil.vec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000417, VkglTestCase_000417_1, VkglTestCase_000417_2);

#define VkglTestCase_000418_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000418_2 "ctions.common.ceil.vec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000418, VkglTestCase_000418_1, VkglTestCase_000418_2);

#define VkglTestCase_000419_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000419_2 "unctions.common.ceil.vec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000419, VkglTestCase_000419_1, VkglTestCase_000419_2);

#define VkglTestCase_000420_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000420_2 "functions.common.ceil.vec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000420, VkglTestCase_000420_1, VkglTestCase_000420_2);

#define VkglTestCase_000421_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000421_2 "functions.common.ceil.vec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000421, VkglTestCase_000421_1, VkglTestCase_000421_2);

#define VkglTestCase_000422_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000422_2 "nctions.common.ceil.vec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000422, VkglTestCase_000422_1, VkglTestCase_000422_2);

#define VkglTestCase_000423_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000423_2 "unctions.common.ceil.vec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000423, VkglTestCase_000423_1, VkglTestCase_000423_2);

#define VkglTestCase_000424_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000424_2 "functions.common.ceil.vec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000424, VkglTestCase_000424_1, VkglTestCase_000424_2);

#define VkglTestCase_000425_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000425_2 "nctions.common.ceil.vec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000425, VkglTestCase_000425_1, VkglTestCase_000425_2);

#define VkglTestCase_000426_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000426_2 "tions.common.ceil.vec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000426, VkglTestCase_000426_1, VkglTestCase_000426_2);

#define VkglTestCase_000427_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000427_2 "nctions.common.ceil.vec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000427, VkglTestCase_000427_1, VkglTestCase_000427_2);

#define VkglTestCase_000428_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000428_2 "unctions.common.ceil.vec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000428, VkglTestCase_000428_1, VkglTestCase_000428_2);

#define VkglTestCase_000429_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000429_2 "unctions.common.ceil.vec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000429, VkglTestCase_000429_1, VkglTestCase_000429_2);

#define VkglTestCase_000430_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000430_2 "ctions.common.ceil.vec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000430, VkglTestCase_000430_1, VkglTestCase_000430_2);

#define VkglTestCase_000431_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000431_2 "unctions.common.ceil.vec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000431, VkglTestCase_000431_1, VkglTestCase_000431_2);

#define VkglTestCase_000432_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000432_2 "functions.common.ceil.vec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000432, VkglTestCase_000432_1, VkglTestCase_000432_2);

#define VkglTestCase_000433_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000433_2 "functions.common.ceil.vec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000433, VkglTestCase_000433_1, VkglTestCase_000433_2);

#define VkglTestCase_000434_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000434_2 "nctions.common.ceil.vec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000434, VkglTestCase_000434_1, VkglTestCase_000434_2);

#define VkglTestCase_000435_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000435_2 "unctions.common.ceil.vec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000435, VkglTestCase_000435_1, VkglTestCase_000435_2);

#define VkglTestCase_000436_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000436_2 "functions.common.ceil.vec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000436, VkglTestCase_000436_1, VkglTestCase_000436_2);

#define VkglTestCase_000437_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000437_2 "nctions.common.ceil.vec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000437, VkglTestCase_000437_1, VkglTestCase_000437_2);

#define VkglTestCase_000438_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000438_2 "tions.common.ceil.vec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000438, VkglTestCase_000438_1, VkglTestCase_000438_2);

#define VkglTestCase_000439_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000439_2 "nctions.common.ceil.vec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000439, VkglTestCase_000439_1, VkglTestCase_000439_2);

#define VkglTestCase_000440_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000440_2 "unctions.common.ceil.vec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000440, VkglTestCase_000440_1, VkglTestCase_000440_2);

#define VkglTestCase_000441_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000441_2 "unctions.common.ceil.vec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000441, VkglTestCase_000441_1, VkglTestCase_000441_2);

#define VkglTestCase_000442_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000442_2 "ctions.common.ceil.vec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000442, VkglTestCase_000442_1, VkglTestCase_000442_2);

#define VkglTestCase_000443_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000443_2 "unctions.common.ceil.vec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000443, VkglTestCase_000443_1, VkglTestCase_000443_2);

#define VkglTestCase_000444_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000444_2 "functions.common.ceil.vec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000444, VkglTestCase_000444_1, VkglTestCase_000444_2);
