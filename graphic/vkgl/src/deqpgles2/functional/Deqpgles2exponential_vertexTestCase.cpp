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
#include "../ActsDeqpgles20010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009632_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009632_2 "s.random.exponential.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009632, VkglTestCase_009632_1, VkglTestCase_009632_2);

#define VkglTestCase_009633_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009633_2 "s.random.exponential.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009633, VkglTestCase_009633_1, VkglTestCase_009633_2);

#define VkglTestCase_009634_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009634_2 "s.random.exponential.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009634, VkglTestCase_009634_1, VkglTestCase_009634_2);

#define VkglTestCase_009635_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009635_2 "s.random.exponential.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009635, VkglTestCase_009635_1, VkglTestCase_009635_2);

#define VkglTestCase_009636_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009636_2 "s.random.exponential.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009636, VkglTestCase_009636_1, VkglTestCase_009636_2);

#define VkglTestCase_009637_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009637_2 "s.random.exponential.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009637, VkglTestCase_009637_1, VkglTestCase_009637_2);

#define VkglTestCase_009638_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009638_2 "s.random.exponential.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009638, VkglTestCase_009638_1, VkglTestCase_009638_2);

#define VkglTestCase_009639_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009639_2 "s.random.exponential.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009639, VkglTestCase_009639_1, VkglTestCase_009639_2);

#define VkglTestCase_009640_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009640_2 "s.random.exponential.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009640, VkglTestCase_009640_1, VkglTestCase_009640_2);

#define VkglTestCase_009641_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009641_2 "s.random.exponential.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009641, VkglTestCase_009641_1, VkglTestCase_009641_2);

#define VkglTestCase_009642_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009642_2 ".random.exponential.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009642, VkglTestCase_009642_1, VkglTestCase_009642_2);

#define VkglTestCase_009643_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009643_2 ".random.exponential.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009643, VkglTestCase_009643_1, VkglTestCase_009643_2);

#define VkglTestCase_009644_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009644_2 ".random.exponential.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009644, VkglTestCase_009644_1, VkglTestCase_009644_2);

#define VkglTestCase_009645_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009645_2 ".random.exponential.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009645, VkglTestCase_009645_1, VkglTestCase_009645_2);

#define VkglTestCase_009646_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009646_2 ".random.exponential.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009646, VkglTestCase_009646_1, VkglTestCase_009646_2);

#define VkglTestCase_009647_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009647_2 ".random.exponential.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009647, VkglTestCase_009647_1, VkglTestCase_009647_2);

#define VkglTestCase_009648_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009648_2 ".random.exponential.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009648, VkglTestCase_009648_1, VkglTestCase_009648_2);

#define VkglTestCase_009649_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009649_2 ".random.exponential.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009649, VkglTestCase_009649_1, VkglTestCase_009649_2);

#define VkglTestCase_009650_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009650_2 ".random.exponential.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009650, VkglTestCase_009650_1, VkglTestCase_009650_2);

#define VkglTestCase_009651_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009651_2 ".random.exponential.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009651, VkglTestCase_009651_1, VkglTestCase_009651_2);

#define VkglTestCase_009652_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009652_2 ".random.exponential.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009652, VkglTestCase_009652_1, VkglTestCase_009652_2);

#define VkglTestCase_009653_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009653_2 ".random.exponential.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009653, VkglTestCase_009653_1, VkglTestCase_009653_2);

#define VkglTestCase_009654_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009654_2 ".random.exponential.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009654, VkglTestCase_009654_1, VkglTestCase_009654_2);

#define VkglTestCase_009655_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009655_2 ".random.exponential.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009655, VkglTestCase_009655_1, VkglTestCase_009655_2);

#define VkglTestCase_009656_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009656_2 ".random.exponential.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009656, VkglTestCase_009656_1, VkglTestCase_009656_2);

#define VkglTestCase_009657_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009657_2 ".random.exponential.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009657, VkglTestCase_009657_1, VkglTestCase_009657_2);

#define VkglTestCase_009658_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009658_2 ".random.exponential.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009658, VkglTestCase_009658_1, VkglTestCase_009658_2);

#define VkglTestCase_009659_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009659_2 ".random.exponential.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009659, VkglTestCase_009659_1, VkglTestCase_009659_2);

#define VkglTestCase_009660_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009660_2 ".random.exponential.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009660, VkglTestCase_009660_1, VkglTestCase_009660_2);

#define VkglTestCase_009661_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009661_2 ".random.exponential.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009661, VkglTestCase_009661_1, VkglTestCase_009661_2);

#define VkglTestCase_009662_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009662_2 ".random.exponential.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009662, VkglTestCase_009662_1, VkglTestCase_009662_2);

#define VkglTestCase_009663_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009663_2 ".random.exponential.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009663, VkglTestCase_009663_1, VkglTestCase_009663_2);

#define VkglTestCase_009664_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009664_2 ".random.exponential.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009664, VkglTestCase_009664_1, VkglTestCase_009664_2);

#define VkglTestCase_009665_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009665_2 ".random.exponential.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009665, VkglTestCase_009665_1, VkglTestCase_009665_2);

#define VkglTestCase_009666_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009666_2 ".random.exponential.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009666, VkglTestCase_009666_1, VkglTestCase_009666_2);

#define VkglTestCase_009667_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009667_2 ".random.exponential.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009667, VkglTestCase_009667_1, VkglTestCase_009667_2);

#define VkglTestCase_009668_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009668_2 ".random.exponential.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009668, VkglTestCase_009668_1, VkglTestCase_009668_2);

#define VkglTestCase_009669_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009669_2 ".random.exponential.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009669, VkglTestCase_009669_1, VkglTestCase_009669_2);

#define VkglTestCase_009670_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009670_2 ".random.exponential.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009670, VkglTestCase_009670_1, VkglTestCase_009670_2);

#define VkglTestCase_009671_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009671_2 ".random.exponential.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009671, VkglTestCase_009671_1, VkglTestCase_009671_2);

#define VkglTestCase_009672_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009672_2 ".random.exponential.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009672, VkglTestCase_009672_1, VkglTestCase_009672_2);

#define VkglTestCase_009673_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009673_2 ".random.exponential.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009673, VkglTestCase_009673_1, VkglTestCase_009673_2);

#define VkglTestCase_009674_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009674_2 ".random.exponential.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009674, VkglTestCase_009674_1, VkglTestCase_009674_2);

#define VkglTestCase_009675_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009675_2 ".random.exponential.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009675, VkglTestCase_009675_1, VkglTestCase_009675_2);

#define VkglTestCase_009676_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009676_2 ".random.exponential.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009676, VkglTestCase_009676_1, VkglTestCase_009676_2);

#define VkglTestCase_009677_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009677_2 ".random.exponential.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009677, VkglTestCase_009677_1, VkglTestCase_009677_2);

#define VkglTestCase_009678_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009678_2 ".random.exponential.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009678, VkglTestCase_009678_1, VkglTestCase_009678_2);

#define VkglTestCase_009679_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009679_2 ".random.exponential.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009679, VkglTestCase_009679_1, VkglTestCase_009679_2);

#define VkglTestCase_009680_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009680_2 ".random.exponential.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009680, VkglTestCase_009680_1, VkglTestCase_009680_2);

#define VkglTestCase_009681_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009681_2 ".random.exponential.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009681, VkglTestCase_009681_1, VkglTestCase_009681_2);

#define VkglTestCase_009682_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009682_2 ".random.exponential.vertex.50"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009682, VkglTestCase_009682_1, VkglTestCase_009682_2);

#define VkglTestCase_009683_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009683_2 ".random.exponential.vertex.51"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009683, VkglTestCase_009683_1, VkglTestCase_009683_2);

#define VkglTestCase_009684_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009684_2 ".random.exponential.vertex.52"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009684, VkglTestCase_009684_1, VkglTestCase_009684_2);

#define VkglTestCase_009685_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009685_2 ".random.exponential.vertex.53"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009685, VkglTestCase_009685_1, VkglTestCase_009685_2);

#define VkglTestCase_009686_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009686_2 ".random.exponential.vertex.54"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009686, VkglTestCase_009686_1, VkglTestCase_009686_2);

#define VkglTestCase_009687_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009687_2 ".random.exponential.vertex.55"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009687, VkglTestCase_009687_1, VkglTestCase_009687_2);

#define VkglTestCase_009688_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009688_2 ".random.exponential.vertex.56"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009688, VkglTestCase_009688_1, VkglTestCase_009688_2);

#define VkglTestCase_009689_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009689_2 ".random.exponential.vertex.57"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009689, VkglTestCase_009689_1, VkglTestCase_009689_2);

#define VkglTestCase_009690_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009690_2 ".random.exponential.vertex.58"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009690, VkglTestCase_009690_1, VkglTestCase_009690_2);

#define VkglTestCase_009691_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009691_2 ".random.exponential.vertex.59"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009691, VkglTestCase_009691_1, VkglTestCase_009691_2);

#define VkglTestCase_009692_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009692_2 ".random.exponential.vertex.60"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009692, VkglTestCase_009692_1, VkglTestCase_009692_2);

#define VkglTestCase_009693_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009693_2 ".random.exponential.vertex.61"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009693, VkglTestCase_009693_1, VkglTestCase_009693_2);

#define VkglTestCase_009694_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009694_2 ".random.exponential.vertex.62"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009694, VkglTestCase_009694_1, VkglTestCase_009694_2);

#define VkglTestCase_009695_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009695_2 ".random.exponential.vertex.63"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009695, VkglTestCase_009695_1, VkglTestCase_009695_2);

#define VkglTestCase_009696_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009696_2 ".random.exponential.vertex.64"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009696, VkglTestCase_009696_1, VkglTestCase_009696_2);

#define VkglTestCase_009697_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009697_2 ".random.exponential.vertex.65"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009697, VkglTestCase_009697_1, VkglTestCase_009697_2);

#define VkglTestCase_009698_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009698_2 ".random.exponential.vertex.66"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009698, VkglTestCase_009698_1, VkglTestCase_009698_2);

#define VkglTestCase_009699_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009699_2 ".random.exponential.vertex.67"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009699, VkglTestCase_009699_1, VkglTestCase_009699_2);

#define VkglTestCase_009700_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009700_2 ".random.exponential.vertex.68"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009700, VkglTestCase_009700_1, VkglTestCase_009700_2);

#define VkglTestCase_009701_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009701_2 ".random.exponential.vertex.69"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009701, VkglTestCase_009701_1, VkglTestCase_009701_2);

#define VkglTestCase_009702_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009702_2 ".random.exponential.vertex.70"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009702, VkglTestCase_009702_1, VkglTestCase_009702_2);

#define VkglTestCase_009703_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009703_2 ".random.exponential.vertex.71"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009703, VkglTestCase_009703_1, VkglTestCase_009703_2);

#define VkglTestCase_009704_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009704_2 ".random.exponential.vertex.72"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009704, VkglTestCase_009704_1, VkglTestCase_009704_2);

#define VkglTestCase_009705_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009705_2 ".random.exponential.vertex.73"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009705, VkglTestCase_009705_1, VkglTestCase_009705_2);

#define VkglTestCase_009706_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009706_2 ".random.exponential.vertex.74"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009706, VkglTestCase_009706_1, VkglTestCase_009706_2);

#define VkglTestCase_009707_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009707_2 ".random.exponential.vertex.75"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009707, VkglTestCase_009707_1, VkglTestCase_009707_2);

#define VkglTestCase_009708_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009708_2 ".random.exponential.vertex.76"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009708, VkglTestCase_009708_1, VkglTestCase_009708_2);

#define VkglTestCase_009709_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009709_2 ".random.exponential.vertex.77"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009709, VkglTestCase_009709_1, VkglTestCase_009709_2);

#define VkglTestCase_009710_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009710_2 ".random.exponential.vertex.78"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009710, VkglTestCase_009710_1, VkglTestCase_009710_2);

#define VkglTestCase_009711_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009711_2 ".random.exponential.vertex.79"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009711, VkglTestCase_009711_1, VkglTestCase_009711_2);

#define VkglTestCase_009712_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009712_2 ".random.exponential.vertex.80"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009712, VkglTestCase_009712_1, VkglTestCase_009712_2);

#define VkglTestCase_009713_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009713_2 ".random.exponential.vertex.81"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009713, VkglTestCase_009713_1, VkglTestCase_009713_2);

#define VkglTestCase_009714_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009714_2 ".random.exponential.vertex.82"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009714, VkglTestCase_009714_1, VkglTestCase_009714_2);

#define VkglTestCase_009715_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009715_2 ".random.exponential.vertex.83"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009715, VkglTestCase_009715_1, VkglTestCase_009715_2);

#define VkglTestCase_009716_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009716_2 ".random.exponential.vertex.84"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009716, VkglTestCase_009716_1, VkglTestCase_009716_2);

#define VkglTestCase_009717_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009717_2 ".random.exponential.vertex.85"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009717, VkglTestCase_009717_1, VkglTestCase_009717_2);

#define VkglTestCase_009718_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009718_2 ".random.exponential.vertex.86"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009718, VkglTestCase_009718_1, VkglTestCase_009718_2);

#define VkglTestCase_009719_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009719_2 ".random.exponential.vertex.87"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009719, VkglTestCase_009719_1, VkglTestCase_009719_2);

#define VkglTestCase_009720_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009720_2 ".random.exponential.vertex.88"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009720, VkglTestCase_009720_1, VkglTestCase_009720_2);

#define VkglTestCase_009721_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009721_2 ".random.exponential.vertex.89"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009721, VkglTestCase_009721_1, VkglTestCase_009721_2);

#define VkglTestCase_009722_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009722_2 ".random.exponential.vertex.90"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009722, VkglTestCase_009722_1, VkglTestCase_009722_2);

#define VkglTestCase_009723_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009723_2 ".random.exponential.vertex.91"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009723, VkglTestCase_009723_1, VkglTestCase_009723_2);

#define VkglTestCase_009724_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009724_2 ".random.exponential.vertex.92"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009724, VkglTestCase_009724_1, VkglTestCase_009724_2);

#define VkglTestCase_009725_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009725_2 ".random.exponential.vertex.93"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009725, VkglTestCase_009725_1, VkglTestCase_009725_2);

#define VkglTestCase_009726_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009726_2 ".random.exponential.vertex.94"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009726, VkglTestCase_009726_1, VkglTestCase_009726_2);

#define VkglTestCase_009727_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009727_2 ".random.exponential.vertex.95"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009727, VkglTestCase_009727_1, VkglTestCase_009727_2);

#define VkglTestCase_009728_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009728_2 ".random.exponential.vertex.96"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009728, VkglTestCase_009728_1, VkglTestCase_009728_2);

#define VkglTestCase_009729_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009729_2 ".random.exponential.vertex.97"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009729, VkglTestCase_009729_1, VkglTestCase_009729_2);

#define VkglTestCase_009730_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009730_2 ".random.exponential.vertex.98"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009730, VkglTestCase_009730_1, VkglTestCase_009730_2);

#define VkglTestCase_009731_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009731_2 ".random.exponential.vertex.99"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009731, VkglTestCase_009731_1, VkglTestCase_009731_2);
