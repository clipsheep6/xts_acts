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
#include "../ActsDeqpgles20009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008632_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008632_2 "andom.scalar_conversion.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008632, VkglTestCase_008632_1, VkglTestCase_008632_2);

#define VkglTestCase_008633_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008633_2 "andom.scalar_conversion.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008633, VkglTestCase_008633_1, VkglTestCase_008633_2);

#define VkglTestCase_008634_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008634_2 "andom.scalar_conversion.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008634, VkglTestCase_008634_1, VkglTestCase_008634_2);

#define VkglTestCase_008635_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008635_2 "andom.scalar_conversion.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008635, VkglTestCase_008635_1, VkglTestCase_008635_2);

#define VkglTestCase_008636_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008636_2 "andom.scalar_conversion.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008636, VkglTestCase_008636_1, VkglTestCase_008636_2);

#define VkglTestCase_008637_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008637_2 "andom.scalar_conversion.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008637, VkglTestCase_008637_1, VkglTestCase_008637_2);

#define VkglTestCase_008638_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008638_2 "andom.scalar_conversion.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008638, VkglTestCase_008638_1, VkglTestCase_008638_2);

#define VkglTestCase_008639_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008639_2 "andom.scalar_conversion.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008639, VkglTestCase_008639_1, VkglTestCase_008639_2);

#define VkglTestCase_008640_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008640_2 "andom.scalar_conversion.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008640, VkglTestCase_008640_1, VkglTestCase_008640_2);

#define VkglTestCase_008641_1 "dEQP-GLES2.functional.shaders.r"
#define VkglTestCase_008641_2 "andom.scalar_conversion.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008641, VkglTestCase_008641_1, VkglTestCase_008641_2);

#define VkglTestCase_008642_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008642_2 "ndom.scalar_conversion.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008642, VkglTestCase_008642_1, VkglTestCase_008642_2);

#define VkglTestCase_008643_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008643_2 "ndom.scalar_conversion.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008643, VkglTestCase_008643_1, VkglTestCase_008643_2);

#define VkglTestCase_008644_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008644_2 "ndom.scalar_conversion.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008644, VkglTestCase_008644_1, VkglTestCase_008644_2);

#define VkglTestCase_008645_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008645_2 "ndom.scalar_conversion.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008645, VkglTestCase_008645_1, VkglTestCase_008645_2);

#define VkglTestCase_008646_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008646_2 "ndom.scalar_conversion.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008646, VkglTestCase_008646_1, VkglTestCase_008646_2);

#define VkglTestCase_008647_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008647_2 "ndom.scalar_conversion.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008647, VkglTestCase_008647_1, VkglTestCase_008647_2);

#define VkglTestCase_008648_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008648_2 "ndom.scalar_conversion.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008648, VkglTestCase_008648_1, VkglTestCase_008648_2);

#define VkglTestCase_008649_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008649_2 "ndom.scalar_conversion.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008649, VkglTestCase_008649_1, VkglTestCase_008649_2);

#define VkglTestCase_008650_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008650_2 "ndom.scalar_conversion.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008650, VkglTestCase_008650_1, VkglTestCase_008650_2);

#define VkglTestCase_008651_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008651_2 "ndom.scalar_conversion.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008651, VkglTestCase_008651_1, VkglTestCase_008651_2);

#define VkglTestCase_008652_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008652_2 "ndom.scalar_conversion.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008652, VkglTestCase_008652_1, VkglTestCase_008652_2);

#define VkglTestCase_008653_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008653_2 "ndom.scalar_conversion.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008653, VkglTestCase_008653_1, VkglTestCase_008653_2);

#define VkglTestCase_008654_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008654_2 "ndom.scalar_conversion.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008654, VkglTestCase_008654_1, VkglTestCase_008654_2);

#define VkglTestCase_008655_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008655_2 "ndom.scalar_conversion.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008655, VkglTestCase_008655_1, VkglTestCase_008655_2);

#define VkglTestCase_008656_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008656_2 "ndom.scalar_conversion.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008656, VkglTestCase_008656_1, VkglTestCase_008656_2);

#define VkglTestCase_008657_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008657_2 "ndom.scalar_conversion.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008657, VkglTestCase_008657_1, VkglTestCase_008657_2);

#define VkglTestCase_008658_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008658_2 "ndom.scalar_conversion.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008658, VkglTestCase_008658_1, VkglTestCase_008658_2);

#define VkglTestCase_008659_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008659_2 "ndom.scalar_conversion.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008659, VkglTestCase_008659_1, VkglTestCase_008659_2);

#define VkglTestCase_008660_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008660_2 "ndom.scalar_conversion.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008660, VkglTestCase_008660_1, VkglTestCase_008660_2);

#define VkglTestCase_008661_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008661_2 "ndom.scalar_conversion.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008661, VkglTestCase_008661_1, VkglTestCase_008661_2);

#define VkglTestCase_008662_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008662_2 "ndom.scalar_conversion.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008662, VkglTestCase_008662_1, VkglTestCase_008662_2);

#define VkglTestCase_008663_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008663_2 "ndom.scalar_conversion.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008663, VkglTestCase_008663_1, VkglTestCase_008663_2);

#define VkglTestCase_008664_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008664_2 "ndom.scalar_conversion.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008664, VkglTestCase_008664_1, VkglTestCase_008664_2);

#define VkglTestCase_008665_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008665_2 "ndom.scalar_conversion.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008665, VkglTestCase_008665_1, VkglTestCase_008665_2);

#define VkglTestCase_008666_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008666_2 "ndom.scalar_conversion.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008666, VkglTestCase_008666_1, VkglTestCase_008666_2);

#define VkglTestCase_008667_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008667_2 "ndom.scalar_conversion.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008667, VkglTestCase_008667_1, VkglTestCase_008667_2);

#define VkglTestCase_008668_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008668_2 "ndom.scalar_conversion.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008668, VkglTestCase_008668_1, VkglTestCase_008668_2);

#define VkglTestCase_008669_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008669_2 "ndom.scalar_conversion.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008669, VkglTestCase_008669_1, VkglTestCase_008669_2);

#define VkglTestCase_008670_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008670_2 "ndom.scalar_conversion.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008670, VkglTestCase_008670_1, VkglTestCase_008670_2);

#define VkglTestCase_008671_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008671_2 "ndom.scalar_conversion.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008671, VkglTestCase_008671_1, VkglTestCase_008671_2);

#define VkglTestCase_008672_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008672_2 "ndom.scalar_conversion.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008672, VkglTestCase_008672_1, VkglTestCase_008672_2);

#define VkglTestCase_008673_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008673_2 "ndom.scalar_conversion.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008673, VkglTestCase_008673_1, VkglTestCase_008673_2);

#define VkglTestCase_008674_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008674_2 "ndom.scalar_conversion.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008674, VkglTestCase_008674_1, VkglTestCase_008674_2);

#define VkglTestCase_008675_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008675_2 "ndom.scalar_conversion.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008675, VkglTestCase_008675_1, VkglTestCase_008675_2);

#define VkglTestCase_008676_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008676_2 "ndom.scalar_conversion.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008676, VkglTestCase_008676_1, VkglTestCase_008676_2);

#define VkglTestCase_008677_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008677_2 "ndom.scalar_conversion.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008677, VkglTestCase_008677_1, VkglTestCase_008677_2);

#define VkglTestCase_008678_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008678_2 "ndom.scalar_conversion.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008678, VkglTestCase_008678_1, VkglTestCase_008678_2);

#define VkglTestCase_008679_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008679_2 "ndom.scalar_conversion.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008679, VkglTestCase_008679_1, VkglTestCase_008679_2);

#define VkglTestCase_008680_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008680_2 "ndom.scalar_conversion.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008680, VkglTestCase_008680_1, VkglTestCase_008680_2);

#define VkglTestCase_008681_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008681_2 "ndom.scalar_conversion.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008681, VkglTestCase_008681_1, VkglTestCase_008681_2);

#define VkglTestCase_008682_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008682_2 "ndom.scalar_conversion.vertex.50"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008682, VkglTestCase_008682_1, VkglTestCase_008682_2);

#define VkglTestCase_008683_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008683_2 "ndom.scalar_conversion.vertex.51"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008683, VkglTestCase_008683_1, VkglTestCase_008683_2);

#define VkglTestCase_008684_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008684_2 "ndom.scalar_conversion.vertex.52"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008684, VkglTestCase_008684_1, VkglTestCase_008684_2);

#define VkglTestCase_008685_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008685_2 "ndom.scalar_conversion.vertex.53"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008685, VkglTestCase_008685_1, VkglTestCase_008685_2);

#define VkglTestCase_008686_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008686_2 "ndom.scalar_conversion.vertex.54"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008686, VkglTestCase_008686_1, VkglTestCase_008686_2);

#define VkglTestCase_008687_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008687_2 "ndom.scalar_conversion.vertex.55"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008687, VkglTestCase_008687_1, VkglTestCase_008687_2);

#define VkglTestCase_008688_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008688_2 "ndom.scalar_conversion.vertex.56"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008688, VkglTestCase_008688_1, VkglTestCase_008688_2);

#define VkglTestCase_008689_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008689_2 "ndom.scalar_conversion.vertex.57"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008689, VkglTestCase_008689_1, VkglTestCase_008689_2);

#define VkglTestCase_008690_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008690_2 "ndom.scalar_conversion.vertex.58"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008690, VkglTestCase_008690_1, VkglTestCase_008690_2);

#define VkglTestCase_008691_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008691_2 "ndom.scalar_conversion.vertex.59"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008691, VkglTestCase_008691_1, VkglTestCase_008691_2);

#define VkglTestCase_008692_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008692_2 "ndom.scalar_conversion.vertex.60"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008692, VkglTestCase_008692_1, VkglTestCase_008692_2);

#define VkglTestCase_008693_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008693_2 "ndom.scalar_conversion.vertex.61"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008693, VkglTestCase_008693_1, VkglTestCase_008693_2);

#define VkglTestCase_008694_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008694_2 "ndom.scalar_conversion.vertex.62"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008694, VkglTestCase_008694_1, VkglTestCase_008694_2);

#define VkglTestCase_008695_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008695_2 "ndom.scalar_conversion.vertex.63"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008695, VkglTestCase_008695_1, VkglTestCase_008695_2);

#define VkglTestCase_008696_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008696_2 "ndom.scalar_conversion.vertex.64"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008696, VkglTestCase_008696_1, VkglTestCase_008696_2);

#define VkglTestCase_008697_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008697_2 "ndom.scalar_conversion.vertex.65"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008697, VkglTestCase_008697_1, VkglTestCase_008697_2);

#define VkglTestCase_008698_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008698_2 "ndom.scalar_conversion.vertex.66"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008698, VkglTestCase_008698_1, VkglTestCase_008698_2);

#define VkglTestCase_008699_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008699_2 "ndom.scalar_conversion.vertex.67"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008699, VkglTestCase_008699_1, VkglTestCase_008699_2);

#define VkglTestCase_008700_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008700_2 "ndom.scalar_conversion.vertex.68"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008700, VkglTestCase_008700_1, VkglTestCase_008700_2);

#define VkglTestCase_008701_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008701_2 "ndom.scalar_conversion.vertex.69"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008701, VkglTestCase_008701_1, VkglTestCase_008701_2);

#define VkglTestCase_008702_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008702_2 "ndom.scalar_conversion.vertex.70"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008702, VkglTestCase_008702_1, VkglTestCase_008702_2);

#define VkglTestCase_008703_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008703_2 "ndom.scalar_conversion.vertex.71"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008703, VkglTestCase_008703_1, VkglTestCase_008703_2);

#define VkglTestCase_008704_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008704_2 "ndom.scalar_conversion.vertex.72"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008704, VkglTestCase_008704_1, VkglTestCase_008704_2);

#define VkglTestCase_008705_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008705_2 "ndom.scalar_conversion.vertex.73"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008705, VkglTestCase_008705_1, VkglTestCase_008705_2);

#define VkglTestCase_008706_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008706_2 "ndom.scalar_conversion.vertex.74"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008706, VkglTestCase_008706_1, VkglTestCase_008706_2);

#define VkglTestCase_008707_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008707_2 "ndom.scalar_conversion.vertex.75"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008707, VkglTestCase_008707_1, VkglTestCase_008707_2);

#define VkglTestCase_008708_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008708_2 "ndom.scalar_conversion.vertex.76"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008708, VkglTestCase_008708_1, VkglTestCase_008708_2);

#define VkglTestCase_008709_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008709_2 "ndom.scalar_conversion.vertex.77"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008709, VkglTestCase_008709_1, VkglTestCase_008709_2);

#define VkglTestCase_008710_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008710_2 "ndom.scalar_conversion.vertex.78"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008710, VkglTestCase_008710_1, VkglTestCase_008710_2);

#define VkglTestCase_008711_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008711_2 "ndom.scalar_conversion.vertex.79"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008711, VkglTestCase_008711_1, VkglTestCase_008711_2);

#define VkglTestCase_008712_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008712_2 "ndom.scalar_conversion.vertex.80"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008712, VkglTestCase_008712_1, VkglTestCase_008712_2);

#define VkglTestCase_008713_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008713_2 "ndom.scalar_conversion.vertex.81"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008713, VkglTestCase_008713_1, VkglTestCase_008713_2);

#define VkglTestCase_008714_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008714_2 "ndom.scalar_conversion.vertex.82"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008714, VkglTestCase_008714_1, VkglTestCase_008714_2);

#define VkglTestCase_008715_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008715_2 "ndom.scalar_conversion.vertex.83"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008715, VkglTestCase_008715_1, VkglTestCase_008715_2);

#define VkglTestCase_008716_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008716_2 "ndom.scalar_conversion.vertex.84"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008716, VkglTestCase_008716_1, VkglTestCase_008716_2);

#define VkglTestCase_008717_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008717_2 "ndom.scalar_conversion.vertex.85"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008717, VkglTestCase_008717_1, VkglTestCase_008717_2);

#define VkglTestCase_008718_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008718_2 "ndom.scalar_conversion.vertex.86"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008718, VkglTestCase_008718_1, VkglTestCase_008718_2);

#define VkglTestCase_008719_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008719_2 "ndom.scalar_conversion.vertex.87"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008719, VkglTestCase_008719_1, VkglTestCase_008719_2);

#define VkglTestCase_008720_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008720_2 "ndom.scalar_conversion.vertex.88"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008720, VkglTestCase_008720_1, VkglTestCase_008720_2);

#define VkglTestCase_008721_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008721_2 "ndom.scalar_conversion.vertex.89"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008721, VkglTestCase_008721_1, VkglTestCase_008721_2);

#define VkglTestCase_008722_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008722_2 "ndom.scalar_conversion.vertex.90"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008722, VkglTestCase_008722_1, VkglTestCase_008722_2);

#define VkglTestCase_008723_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008723_2 "ndom.scalar_conversion.vertex.91"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008723, VkglTestCase_008723_1, VkglTestCase_008723_2);

#define VkglTestCase_008724_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008724_2 "ndom.scalar_conversion.vertex.92"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008724, VkglTestCase_008724_1, VkglTestCase_008724_2);

#define VkglTestCase_008725_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008725_2 "ndom.scalar_conversion.vertex.93"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008725, VkglTestCase_008725_1, VkglTestCase_008725_2);

#define VkglTestCase_008726_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008726_2 "ndom.scalar_conversion.vertex.94"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008726, VkglTestCase_008726_1, VkglTestCase_008726_2);

#define VkglTestCase_008727_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008727_2 "ndom.scalar_conversion.vertex.95"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008727, VkglTestCase_008727_1, VkglTestCase_008727_2);

#define VkglTestCase_008728_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008728_2 "ndom.scalar_conversion.vertex.96"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008728, VkglTestCase_008728_1, VkglTestCase_008728_2);

#define VkglTestCase_008729_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008729_2 "ndom.scalar_conversion.vertex.97"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008729, VkglTestCase_008729_1, VkglTestCase_008729_2);

#define VkglTestCase_008730_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008730_2 "ndom.scalar_conversion.vertex.98"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008730, VkglTestCase_008730_1, VkglTestCase_008730_2);

#define VkglTestCase_008731_1 "dEQP-GLES2.functional.shaders.ra"
#define VkglTestCase_008731_2 "ndom.scalar_conversion.vertex.99"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008731, VkglTestCase_008731_1, VkglTestCase_008731_2);
