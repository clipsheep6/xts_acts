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
#include "../ActsDeqpgles30031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030618_1 "dEQP-GLES3.functional"
#define VkglTestCase_030618_2 ".fragment_ops.random.0"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030618, VkglTestCase_030618_1, VkglTestCase_030618_2);

#define VkglTestCase_030619_1 "dEQP-GLES3.functional"
#define VkglTestCase_030619_2 ".fragment_ops.random.1"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030619, VkglTestCase_030619_1, VkglTestCase_030619_2);

#define VkglTestCase_030620_1 "dEQP-GLES3.functional"
#define VkglTestCase_030620_2 ".fragment_ops.random.2"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030620, VkglTestCase_030620_1, VkglTestCase_030620_2);

#define VkglTestCase_030621_1 "dEQP-GLES3.functional"
#define VkglTestCase_030621_2 ".fragment_ops.random.3"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030621, VkglTestCase_030621_1, VkglTestCase_030621_2);

#define VkglTestCase_030622_1 "dEQP-GLES3.functional"
#define VkglTestCase_030622_2 ".fragment_ops.random.4"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030622, VkglTestCase_030622_1, VkglTestCase_030622_2);

#define VkglTestCase_030623_1 "dEQP-GLES3.functional"
#define VkglTestCase_030623_2 ".fragment_ops.random.5"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030623, VkglTestCase_030623_1, VkglTestCase_030623_2);

#define VkglTestCase_030624_1 "dEQP-GLES3.functional"
#define VkglTestCase_030624_2 ".fragment_ops.random.6"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030624, VkglTestCase_030624_1, VkglTestCase_030624_2);

#define VkglTestCase_030625_1 "dEQP-GLES3.functional"
#define VkglTestCase_030625_2 ".fragment_ops.random.7"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030625, VkglTestCase_030625_1, VkglTestCase_030625_2);

#define VkglTestCase_030626_1 "dEQP-GLES3.functional"
#define VkglTestCase_030626_2 ".fragment_ops.random.8"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030626, VkglTestCase_030626_1, VkglTestCase_030626_2);

#define VkglTestCase_030627_1 "dEQP-GLES3.functional"
#define VkglTestCase_030627_2 ".fragment_ops.random.9"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030627, VkglTestCase_030627_1, VkglTestCase_030627_2);

#define VkglTestCase_030628_1 "dEQP-GLES3.functional."
#define VkglTestCase_030628_2 "fragment_ops.random.10"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030628, VkglTestCase_030628_1, VkglTestCase_030628_2);

#define VkglTestCase_030629_1 "dEQP-GLES3.functional."
#define VkglTestCase_030629_2 "fragment_ops.random.11"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030629, VkglTestCase_030629_1, VkglTestCase_030629_2);

#define VkglTestCase_030630_1 "dEQP-GLES3.functional."
#define VkglTestCase_030630_2 "fragment_ops.random.12"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030630, VkglTestCase_030630_1, VkglTestCase_030630_2);

#define VkglTestCase_030631_1 "dEQP-GLES3.functional."
#define VkglTestCase_030631_2 "fragment_ops.random.13"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030631, VkglTestCase_030631_1, VkglTestCase_030631_2);

#define VkglTestCase_030632_1 "dEQP-GLES3.functional."
#define VkglTestCase_030632_2 "fragment_ops.random.14"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030632, VkglTestCase_030632_1, VkglTestCase_030632_2);

#define VkglTestCase_030633_1 "dEQP-GLES3.functional."
#define VkglTestCase_030633_2 "fragment_ops.random.15"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030633, VkglTestCase_030633_1, VkglTestCase_030633_2);

#define VkglTestCase_030634_1 "dEQP-GLES3.functional."
#define VkglTestCase_030634_2 "fragment_ops.random.16"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030634, VkglTestCase_030634_1, VkglTestCase_030634_2);

#define VkglTestCase_030635_1 "dEQP-GLES3.functional."
#define VkglTestCase_030635_2 "fragment_ops.random.17"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030635, VkglTestCase_030635_1, VkglTestCase_030635_2);

#define VkglTestCase_030636_1 "dEQP-GLES3.functional."
#define VkglTestCase_030636_2 "fragment_ops.random.18"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030636, VkglTestCase_030636_1, VkglTestCase_030636_2);

#define VkglTestCase_030637_1 "dEQP-GLES3.functional."
#define VkglTestCase_030637_2 "fragment_ops.random.19"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030637, VkglTestCase_030637_1, VkglTestCase_030637_2);

#define VkglTestCase_030638_1 "dEQP-GLES3.functional."
#define VkglTestCase_030638_2 "fragment_ops.random.20"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030638, VkglTestCase_030638_1, VkglTestCase_030638_2);

#define VkglTestCase_030639_1 "dEQP-GLES3.functional."
#define VkglTestCase_030639_2 "fragment_ops.random.21"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030639, VkglTestCase_030639_1, VkglTestCase_030639_2);

#define VkglTestCase_030640_1 "dEQP-GLES3.functional."
#define VkglTestCase_030640_2 "fragment_ops.random.22"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030640, VkglTestCase_030640_1, VkglTestCase_030640_2);

#define VkglTestCase_030641_1 "dEQP-GLES3.functional."
#define VkglTestCase_030641_2 "fragment_ops.random.23"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030641, VkglTestCase_030641_1, VkglTestCase_030641_2);

#define VkglTestCase_030642_1 "dEQP-GLES3.functional."
#define VkglTestCase_030642_2 "fragment_ops.random.24"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030642, VkglTestCase_030642_1, VkglTestCase_030642_2);

#define VkglTestCase_030643_1 "dEQP-GLES3.functional."
#define VkglTestCase_030643_2 "fragment_ops.random.25"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030643, VkglTestCase_030643_1, VkglTestCase_030643_2);

#define VkglTestCase_030644_1 "dEQP-GLES3.functional."
#define VkglTestCase_030644_2 "fragment_ops.random.26"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030644, VkglTestCase_030644_1, VkglTestCase_030644_2);

#define VkglTestCase_030645_1 "dEQP-GLES3.functional."
#define VkglTestCase_030645_2 "fragment_ops.random.27"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030645, VkglTestCase_030645_1, VkglTestCase_030645_2);

#define VkglTestCase_030646_1 "dEQP-GLES3.functional."
#define VkglTestCase_030646_2 "fragment_ops.random.28"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030646, VkglTestCase_030646_1, VkglTestCase_030646_2);

#define VkglTestCase_030647_1 "dEQP-GLES3.functional."
#define VkglTestCase_030647_2 "fragment_ops.random.29"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030647, VkglTestCase_030647_1, VkglTestCase_030647_2);

#define VkglTestCase_030648_1 "dEQP-GLES3.functional."
#define VkglTestCase_030648_2 "fragment_ops.random.30"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030648, VkglTestCase_030648_1, VkglTestCase_030648_2);

#define VkglTestCase_030649_1 "dEQP-GLES3.functional."
#define VkglTestCase_030649_2 "fragment_ops.random.31"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030649, VkglTestCase_030649_1, VkglTestCase_030649_2);

#define VkglTestCase_030650_1 "dEQP-GLES3.functional."
#define VkglTestCase_030650_2 "fragment_ops.random.32"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030650, VkglTestCase_030650_1, VkglTestCase_030650_2);

#define VkglTestCase_030651_1 "dEQP-GLES3.functional."
#define VkglTestCase_030651_2 "fragment_ops.random.33"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030651, VkglTestCase_030651_1, VkglTestCase_030651_2);

#define VkglTestCase_030652_1 "dEQP-GLES3.functional."
#define VkglTestCase_030652_2 "fragment_ops.random.34"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030652, VkglTestCase_030652_1, VkglTestCase_030652_2);

#define VkglTestCase_030653_1 "dEQP-GLES3.functional."
#define VkglTestCase_030653_2 "fragment_ops.random.35"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030653, VkglTestCase_030653_1, VkglTestCase_030653_2);

#define VkglTestCase_030654_1 "dEQP-GLES3.functional."
#define VkglTestCase_030654_2 "fragment_ops.random.36"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030654, VkglTestCase_030654_1, VkglTestCase_030654_2);

#define VkglTestCase_030655_1 "dEQP-GLES3.functional."
#define VkglTestCase_030655_2 "fragment_ops.random.37"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030655, VkglTestCase_030655_1, VkglTestCase_030655_2);

#define VkglTestCase_030656_1 "dEQP-GLES3.functional."
#define VkglTestCase_030656_2 "fragment_ops.random.38"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030656, VkglTestCase_030656_1, VkglTestCase_030656_2);

#define VkglTestCase_030657_1 "dEQP-GLES3.functional."
#define VkglTestCase_030657_2 "fragment_ops.random.39"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030657, VkglTestCase_030657_1, VkglTestCase_030657_2);

#define VkglTestCase_030658_1 "dEQP-GLES3.functional."
#define VkglTestCase_030658_2 "fragment_ops.random.40"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030658, VkglTestCase_030658_1, VkglTestCase_030658_2);

#define VkglTestCase_030659_1 "dEQP-GLES3.functional."
#define VkglTestCase_030659_2 "fragment_ops.random.41"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030659, VkglTestCase_030659_1, VkglTestCase_030659_2);

#define VkglTestCase_030660_1 "dEQP-GLES3.functional."
#define VkglTestCase_030660_2 "fragment_ops.random.42"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030660, VkglTestCase_030660_1, VkglTestCase_030660_2);

#define VkglTestCase_030661_1 "dEQP-GLES3.functional."
#define VkglTestCase_030661_2 "fragment_ops.random.43"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030661, VkglTestCase_030661_1, VkglTestCase_030661_2);

#define VkglTestCase_030662_1 "dEQP-GLES3.functional."
#define VkglTestCase_030662_2 "fragment_ops.random.44"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030662, VkglTestCase_030662_1, VkglTestCase_030662_2);

#define VkglTestCase_030663_1 "dEQP-GLES3.functional."
#define VkglTestCase_030663_2 "fragment_ops.random.45"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030663, VkglTestCase_030663_1, VkglTestCase_030663_2);

#define VkglTestCase_030664_1 "dEQP-GLES3.functional."
#define VkglTestCase_030664_2 "fragment_ops.random.46"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030664, VkglTestCase_030664_1, VkglTestCase_030664_2);

#define VkglTestCase_030665_1 "dEQP-GLES3.functional."
#define VkglTestCase_030665_2 "fragment_ops.random.47"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030665, VkglTestCase_030665_1, VkglTestCase_030665_2);

#define VkglTestCase_030666_1 "dEQP-GLES3.functional."
#define VkglTestCase_030666_2 "fragment_ops.random.48"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030666, VkglTestCase_030666_1, VkglTestCase_030666_2);

#define VkglTestCase_030667_1 "dEQP-GLES3.functional."
#define VkglTestCase_030667_2 "fragment_ops.random.49"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030667, VkglTestCase_030667_1, VkglTestCase_030667_2);

#define VkglTestCase_030668_1 "dEQP-GLES3.functional."
#define VkglTestCase_030668_2 "fragment_ops.random.50"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030668, VkglTestCase_030668_1, VkglTestCase_030668_2);

#define VkglTestCase_030669_1 "dEQP-GLES3.functional."
#define VkglTestCase_030669_2 "fragment_ops.random.51"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030669, VkglTestCase_030669_1, VkglTestCase_030669_2);

#define VkglTestCase_030670_1 "dEQP-GLES3.functional."
#define VkglTestCase_030670_2 "fragment_ops.random.52"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030670, VkglTestCase_030670_1, VkglTestCase_030670_2);

#define VkglTestCase_030671_1 "dEQP-GLES3.functional."
#define VkglTestCase_030671_2 "fragment_ops.random.53"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030671, VkglTestCase_030671_1, VkglTestCase_030671_2);

#define VkglTestCase_030672_1 "dEQP-GLES3.functional."
#define VkglTestCase_030672_2 "fragment_ops.random.54"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030672, VkglTestCase_030672_1, VkglTestCase_030672_2);

#define VkglTestCase_030673_1 "dEQP-GLES3.functional."
#define VkglTestCase_030673_2 "fragment_ops.random.55"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030673, VkglTestCase_030673_1, VkglTestCase_030673_2);

#define VkglTestCase_030674_1 "dEQP-GLES3.functional."
#define VkglTestCase_030674_2 "fragment_ops.random.56"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030674, VkglTestCase_030674_1, VkglTestCase_030674_2);

#define VkglTestCase_030675_1 "dEQP-GLES3.functional."
#define VkglTestCase_030675_2 "fragment_ops.random.57"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030675, VkglTestCase_030675_1, VkglTestCase_030675_2);

#define VkglTestCase_030676_1 "dEQP-GLES3.functional."
#define VkglTestCase_030676_2 "fragment_ops.random.58"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030676, VkglTestCase_030676_1, VkglTestCase_030676_2);

#define VkglTestCase_030677_1 "dEQP-GLES3.functional."
#define VkglTestCase_030677_2 "fragment_ops.random.59"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030677, VkglTestCase_030677_1, VkglTestCase_030677_2);

#define VkglTestCase_030678_1 "dEQP-GLES3.functional."
#define VkglTestCase_030678_2 "fragment_ops.random.60"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030678, VkglTestCase_030678_1, VkglTestCase_030678_2);

#define VkglTestCase_030679_1 "dEQP-GLES3.functional."
#define VkglTestCase_030679_2 "fragment_ops.random.61"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030679, VkglTestCase_030679_1, VkglTestCase_030679_2);

#define VkglTestCase_030680_1 "dEQP-GLES3.functional."
#define VkglTestCase_030680_2 "fragment_ops.random.62"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030680, VkglTestCase_030680_1, VkglTestCase_030680_2);

#define VkglTestCase_030681_1 "dEQP-GLES3.functional."
#define VkglTestCase_030681_2 "fragment_ops.random.63"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030681, VkglTestCase_030681_1, VkglTestCase_030681_2);

#define VkglTestCase_030682_1 "dEQP-GLES3.functional."
#define VkglTestCase_030682_2 "fragment_ops.random.64"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030682, VkglTestCase_030682_1, VkglTestCase_030682_2);

#define VkglTestCase_030683_1 "dEQP-GLES3.functional."
#define VkglTestCase_030683_2 "fragment_ops.random.65"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030683, VkglTestCase_030683_1, VkglTestCase_030683_2);

#define VkglTestCase_030684_1 "dEQP-GLES3.functional."
#define VkglTestCase_030684_2 "fragment_ops.random.66"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030684, VkglTestCase_030684_1, VkglTestCase_030684_2);

#define VkglTestCase_030685_1 "dEQP-GLES3.functional."
#define VkglTestCase_030685_2 "fragment_ops.random.67"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030685, VkglTestCase_030685_1, VkglTestCase_030685_2);

#define VkglTestCase_030686_1 "dEQP-GLES3.functional."
#define VkglTestCase_030686_2 "fragment_ops.random.68"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030686, VkglTestCase_030686_1, VkglTestCase_030686_2);

#define VkglTestCase_030687_1 "dEQP-GLES3.functional."
#define VkglTestCase_030687_2 "fragment_ops.random.69"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030687, VkglTestCase_030687_1, VkglTestCase_030687_2);

#define VkglTestCase_030688_1 "dEQP-GLES3.functional."
#define VkglTestCase_030688_2 "fragment_ops.random.70"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030688, VkglTestCase_030688_1, VkglTestCase_030688_2);

#define VkglTestCase_030689_1 "dEQP-GLES3.functional."
#define VkglTestCase_030689_2 "fragment_ops.random.71"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030689, VkglTestCase_030689_1, VkglTestCase_030689_2);

#define VkglTestCase_030690_1 "dEQP-GLES3.functional."
#define VkglTestCase_030690_2 "fragment_ops.random.72"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030690, VkglTestCase_030690_1, VkglTestCase_030690_2);

#define VkglTestCase_030691_1 "dEQP-GLES3.functional."
#define VkglTestCase_030691_2 "fragment_ops.random.73"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030691, VkglTestCase_030691_1, VkglTestCase_030691_2);

#define VkglTestCase_030692_1 "dEQP-GLES3.functional."
#define VkglTestCase_030692_2 "fragment_ops.random.74"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030692, VkglTestCase_030692_1, VkglTestCase_030692_2);

#define VkglTestCase_030693_1 "dEQP-GLES3.functional."
#define VkglTestCase_030693_2 "fragment_ops.random.75"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030693, VkglTestCase_030693_1, VkglTestCase_030693_2);

#define VkglTestCase_030694_1 "dEQP-GLES3.functional."
#define VkglTestCase_030694_2 "fragment_ops.random.76"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030694, VkglTestCase_030694_1, VkglTestCase_030694_2);

#define VkglTestCase_030695_1 "dEQP-GLES3.functional."
#define VkglTestCase_030695_2 "fragment_ops.random.77"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030695, VkglTestCase_030695_1, VkglTestCase_030695_2);

#define VkglTestCase_030696_1 "dEQP-GLES3.functional."
#define VkglTestCase_030696_2 "fragment_ops.random.78"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030696, VkglTestCase_030696_1, VkglTestCase_030696_2);

#define VkglTestCase_030697_1 "dEQP-GLES3.functional."
#define VkglTestCase_030697_2 "fragment_ops.random.79"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030697, VkglTestCase_030697_1, VkglTestCase_030697_2);

#define VkglTestCase_030698_1 "dEQP-GLES3.functional."
#define VkglTestCase_030698_2 "fragment_ops.random.80"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030698, VkglTestCase_030698_1, VkglTestCase_030698_2);

#define VkglTestCase_030699_1 "dEQP-GLES3.functional."
#define VkglTestCase_030699_2 "fragment_ops.random.81"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030699, VkglTestCase_030699_1, VkglTestCase_030699_2);

#define VkglTestCase_030700_1 "dEQP-GLES3.functional."
#define VkglTestCase_030700_2 "fragment_ops.random.82"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030700, VkglTestCase_030700_1, VkglTestCase_030700_2);

#define VkglTestCase_030701_1 "dEQP-GLES3.functional."
#define VkglTestCase_030701_2 "fragment_ops.random.83"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030701, VkglTestCase_030701_1, VkglTestCase_030701_2);

#define VkglTestCase_030702_1 "dEQP-GLES3.functional."
#define VkglTestCase_030702_2 "fragment_ops.random.84"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030702, VkglTestCase_030702_1, VkglTestCase_030702_2);

#define VkglTestCase_030703_1 "dEQP-GLES3.functional."
#define VkglTestCase_030703_2 "fragment_ops.random.85"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030703, VkglTestCase_030703_1, VkglTestCase_030703_2);

#define VkglTestCase_030704_1 "dEQP-GLES3.functional."
#define VkglTestCase_030704_2 "fragment_ops.random.86"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030704, VkglTestCase_030704_1, VkglTestCase_030704_2);

#define VkglTestCase_030705_1 "dEQP-GLES3.functional."
#define VkglTestCase_030705_2 "fragment_ops.random.87"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030705, VkglTestCase_030705_1, VkglTestCase_030705_2);

#define VkglTestCase_030706_1 "dEQP-GLES3.functional."
#define VkglTestCase_030706_2 "fragment_ops.random.88"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030706, VkglTestCase_030706_1, VkglTestCase_030706_2);

#define VkglTestCase_030707_1 "dEQP-GLES3.functional."
#define VkglTestCase_030707_2 "fragment_ops.random.89"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030707, VkglTestCase_030707_1, VkglTestCase_030707_2);

#define VkglTestCase_030708_1 "dEQP-GLES3.functional."
#define VkglTestCase_030708_2 "fragment_ops.random.90"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030708, VkglTestCase_030708_1, VkglTestCase_030708_2);

#define VkglTestCase_030709_1 "dEQP-GLES3.functional."
#define VkglTestCase_030709_2 "fragment_ops.random.91"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030709, VkglTestCase_030709_1, VkglTestCase_030709_2);

#define VkglTestCase_030710_1 "dEQP-GLES3.functional."
#define VkglTestCase_030710_2 "fragment_ops.random.92"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030710, VkglTestCase_030710_1, VkglTestCase_030710_2);

#define VkglTestCase_030711_1 "dEQP-GLES3.functional."
#define VkglTestCase_030711_2 "fragment_ops.random.93"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030711, VkglTestCase_030711_1, VkglTestCase_030711_2);

#define VkglTestCase_030712_1 "dEQP-GLES3.functional."
#define VkglTestCase_030712_2 "fragment_ops.random.94"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030712, VkglTestCase_030712_1, VkglTestCase_030712_2);

#define VkglTestCase_030713_1 "dEQP-GLES3.functional."
#define VkglTestCase_030713_2 "fragment_ops.random.95"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030713, VkglTestCase_030713_1, VkglTestCase_030713_2);

#define VkglTestCase_030714_1 "dEQP-GLES3.functional."
#define VkglTestCase_030714_2 "fragment_ops.random.96"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030714, VkglTestCase_030714_1, VkglTestCase_030714_2);

#define VkglTestCase_030715_1 "dEQP-GLES3.functional."
#define VkglTestCase_030715_2 "fragment_ops.random.97"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030715, VkglTestCase_030715_1, VkglTestCase_030715_2);

#define VkglTestCase_030716_1 "dEQP-GLES3.functional."
#define VkglTestCase_030716_2 "fragment_ops.random.98"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030716, VkglTestCase_030716_1, VkglTestCase_030716_2);

#define VkglTestCase_030717_1 "dEQP-GLES3.functional."
#define VkglTestCase_030717_2 "fragment_ops.random.99"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030717, VkglTestCase_030717_1, VkglTestCase_030717_2);
