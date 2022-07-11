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
#include "../ActsDeqpgles30021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020644_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020644_2 "rs.random.swizzle.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020644, VkglTestCase_020644_1, VkglTestCase_020644_2);

#define VkglTestCase_020645_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020645_2 "rs.random.swizzle.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020645, VkglTestCase_020645_1, VkglTestCase_020645_2);

#define VkglTestCase_020646_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020646_2 "rs.random.swizzle.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020646, VkglTestCase_020646_1, VkglTestCase_020646_2);

#define VkglTestCase_020647_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020647_2 "rs.random.swizzle.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020647, VkglTestCase_020647_1, VkglTestCase_020647_2);

#define VkglTestCase_020648_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020648_2 "rs.random.swizzle.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020648, VkglTestCase_020648_1, VkglTestCase_020648_2);

#define VkglTestCase_020649_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020649_2 "rs.random.swizzle.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020649, VkglTestCase_020649_1, VkglTestCase_020649_2);

#define VkglTestCase_020650_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020650_2 "rs.random.swizzle.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020650, VkglTestCase_020650_1, VkglTestCase_020650_2);

#define VkglTestCase_020651_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020651_2 "rs.random.swizzle.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020651, VkglTestCase_020651_1, VkglTestCase_020651_2);

#define VkglTestCase_020652_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020652_2 "rs.random.swizzle.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020652, VkglTestCase_020652_1, VkglTestCase_020652_2);

#define VkglTestCase_020653_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020653_2 "rs.random.swizzle.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020653, VkglTestCase_020653_1, VkglTestCase_020653_2);

#define VkglTestCase_020654_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020654_2 "s.random.swizzle.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020654, VkglTestCase_020654_1, VkglTestCase_020654_2);

#define VkglTestCase_020655_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020655_2 "s.random.swizzle.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020655, VkglTestCase_020655_1, VkglTestCase_020655_2);

#define VkglTestCase_020656_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020656_2 "s.random.swizzle.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020656, VkglTestCase_020656_1, VkglTestCase_020656_2);

#define VkglTestCase_020657_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020657_2 "s.random.swizzle.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020657, VkglTestCase_020657_1, VkglTestCase_020657_2);

#define VkglTestCase_020658_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020658_2 "s.random.swizzle.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020658, VkglTestCase_020658_1, VkglTestCase_020658_2);

#define VkglTestCase_020659_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020659_2 "s.random.swizzle.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020659, VkglTestCase_020659_1, VkglTestCase_020659_2);

#define VkglTestCase_020660_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020660_2 "s.random.swizzle.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020660, VkglTestCase_020660_1, VkglTestCase_020660_2);

#define VkglTestCase_020661_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020661_2 "s.random.swizzle.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020661, VkglTestCase_020661_1, VkglTestCase_020661_2);

#define VkglTestCase_020662_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020662_2 "s.random.swizzle.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020662, VkglTestCase_020662_1, VkglTestCase_020662_2);

#define VkglTestCase_020663_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020663_2 "s.random.swizzle.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020663, VkglTestCase_020663_1, VkglTestCase_020663_2);

#define VkglTestCase_020664_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020664_2 "s.random.swizzle.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020664, VkglTestCase_020664_1, VkglTestCase_020664_2);

#define VkglTestCase_020665_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020665_2 "s.random.swizzle.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020665, VkglTestCase_020665_1, VkglTestCase_020665_2);

#define VkglTestCase_020666_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020666_2 "s.random.swizzle.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020666, VkglTestCase_020666_1, VkglTestCase_020666_2);

#define VkglTestCase_020667_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020667_2 "s.random.swizzle.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020667, VkglTestCase_020667_1, VkglTestCase_020667_2);

#define VkglTestCase_020668_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020668_2 "s.random.swizzle.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020668, VkglTestCase_020668_1, VkglTestCase_020668_2);

#define VkglTestCase_020669_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020669_2 "s.random.swizzle.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020669, VkglTestCase_020669_1, VkglTestCase_020669_2);

#define VkglTestCase_020670_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020670_2 "s.random.swizzle.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020670, VkglTestCase_020670_1, VkglTestCase_020670_2);

#define VkglTestCase_020671_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020671_2 "s.random.swizzle.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020671, VkglTestCase_020671_1, VkglTestCase_020671_2);

#define VkglTestCase_020672_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020672_2 "s.random.swizzle.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020672, VkglTestCase_020672_1, VkglTestCase_020672_2);

#define VkglTestCase_020673_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020673_2 "s.random.swizzle.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020673, VkglTestCase_020673_1, VkglTestCase_020673_2);

#define VkglTestCase_020674_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020674_2 "s.random.swizzle.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020674, VkglTestCase_020674_1, VkglTestCase_020674_2);

#define VkglTestCase_020675_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020675_2 "s.random.swizzle.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020675, VkglTestCase_020675_1, VkglTestCase_020675_2);

#define VkglTestCase_020676_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020676_2 "s.random.swizzle.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020676, VkglTestCase_020676_1, VkglTestCase_020676_2);

#define VkglTestCase_020677_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020677_2 "s.random.swizzle.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020677, VkglTestCase_020677_1, VkglTestCase_020677_2);

#define VkglTestCase_020678_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020678_2 "s.random.swizzle.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020678, VkglTestCase_020678_1, VkglTestCase_020678_2);

#define VkglTestCase_020679_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020679_2 "s.random.swizzle.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020679, VkglTestCase_020679_1, VkglTestCase_020679_2);

#define VkglTestCase_020680_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020680_2 "s.random.swizzle.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020680, VkglTestCase_020680_1, VkglTestCase_020680_2);

#define VkglTestCase_020681_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020681_2 "s.random.swizzle.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020681, VkglTestCase_020681_1, VkglTestCase_020681_2);

#define VkglTestCase_020682_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020682_2 "s.random.swizzle.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020682, VkglTestCase_020682_1, VkglTestCase_020682_2);

#define VkglTestCase_020683_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020683_2 "s.random.swizzle.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020683, VkglTestCase_020683_1, VkglTestCase_020683_2);

#define VkglTestCase_020684_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020684_2 "s.random.swizzle.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020684, VkglTestCase_020684_1, VkglTestCase_020684_2);

#define VkglTestCase_020685_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020685_2 "s.random.swizzle.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020685, VkglTestCase_020685_1, VkglTestCase_020685_2);

#define VkglTestCase_020686_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020686_2 "s.random.swizzle.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020686, VkglTestCase_020686_1, VkglTestCase_020686_2);

#define VkglTestCase_020687_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020687_2 "s.random.swizzle.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020687, VkglTestCase_020687_1, VkglTestCase_020687_2);

#define VkglTestCase_020688_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020688_2 "s.random.swizzle.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020688, VkglTestCase_020688_1, VkglTestCase_020688_2);

#define VkglTestCase_020689_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020689_2 "s.random.swizzle.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020689, VkglTestCase_020689_1, VkglTestCase_020689_2);

#define VkglTestCase_020690_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020690_2 "s.random.swizzle.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020690, VkglTestCase_020690_1, VkglTestCase_020690_2);

#define VkglTestCase_020691_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020691_2 "s.random.swizzle.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020691, VkglTestCase_020691_1, VkglTestCase_020691_2);

#define VkglTestCase_020692_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020692_2 "s.random.swizzle.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020692, VkglTestCase_020692_1, VkglTestCase_020692_2);

#define VkglTestCase_020693_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020693_2 "s.random.swizzle.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020693, VkglTestCase_020693_1, VkglTestCase_020693_2);
