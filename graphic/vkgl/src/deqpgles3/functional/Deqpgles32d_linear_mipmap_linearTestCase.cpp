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
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025400_1 "dEQP-GLES3.functional.texture.shadow.2d.linear"
#define VkglTestCase_025400_2 "_mipmap_linear.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025400, VkglTestCase_025400_1, VkglTestCase_025400_2);

#define VkglTestCase_025401_1 "dEQP-GLES3.functional.texture.shadow.2d.linear"
#define VkglTestCase_025401_2 "_mipmap_linear.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025401, VkglTestCase_025401_1, VkglTestCase_025401_2);

#define VkglTestCase_025402_1 "dEQP-GLES3.functional.texture.shadow.2d.linea"
#define VkglTestCase_025402_2 "r_mipmap_linear.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025402, VkglTestCase_025402_1, VkglTestCase_025402_2);

#define VkglTestCase_025403_1 "dEQP-GLES3.functional.texture.shadow.2d.linear_"
#define VkglTestCase_025403_2 "mipmap_linear.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025403, VkglTestCase_025403_1, VkglTestCase_025403_2);

#define VkglTestCase_025404_1 "dEQP-GLES3.functional.texture.shadow.2d.linear_m"
#define VkglTestCase_025404_2 "ipmap_linear.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025404, VkglTestCase_025404_1, VkglTestCase_025404_2);

#define VkglTestCase_025405_1 "dEQP-GLES3.functional.texture.shadow.2d.linear_"
#define VkglTestCase_025405_2 "mipmap_linear.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025405, VkglTestCase_025405_1, VkglTestCase_025405_2);

#define VkglTestCase_025406_1 "dEQP-GLES3.functional.texture.shadow.2d.l"
#define VkglTestCase_025406_2 "inear_mipmap_linear.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025406, VkglTestCase_025406_1, VkglTestCase_025406_2);

#define VkglTestCase_025407_1 "dEQP-GLES3.functional.texture.shadow.2d.li"
#define VkglTestCase_025407_2 "near_mipmap_linear.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025407, VkglTestCase_025407_1, VkglTestCase_025407_2);

#define VkglTestCase_025408_1 "dEQP-GLES3.functional.texture.shadow.2d.l"
#define VkglTestCase_025408_2 "inear_mipmap_linear.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025408, VkglTestCase_025408_1, VkglTestCase_025408_2);

#define VkglTestCase_025409_1 "dEQP-GLES3.functional.texture.shadow.2d.lin"
#define VkglTestCase_025409_2 "ear_mipmap_linear.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025409, VkglTestCase_025409_1, VkglTestCase_025409_2);

#define VkglTestCase_025410_1 "dEQP-GLES3.functional.texture.shadow.2d.lin"
#define VkglTestCase_025410_2 "ear_mipmap_linear.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025410, VkglTestCase_025410_1, VkglTestCase_025410_2);

#define VkglTestCase_025411_1 "dEQP-GLES3.functional.texture.shadow.2d.li"
#define VkglTestCase_025411_2 "near_mipmap_linear.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025411, VkglTestCase_025411_1, VkglTestCase_025411_2);

#define VkglTestCase_025412_1 "dEQP-GLES3.functional.texture.shadow.2d.li"
#define VkglTestCase_025412_2 "near_mipmap_linear.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025412, VkglTestCase_025412_1, VkglTestCase_025412_2);

#define VkglTestCase_025413_1 "dEQP-GLES3.functional.texture.shadow.2d.li"
#define VkglTestCase_025413_2 "near_mipmap_linear.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025413, VkglTestCase_025413_1, VkglTestCase_025413_2);

#define VkglTestCase_025414_1 "dEQP-GLES3.functional.texture.shadow.2d.l"
#define VkglTestCase_025414_2 "inear_mipmap_linear.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025414, VkglTestCase_025414_1, VkglTestCase_025414_2);

#define VkglTestCase_025415_1 "dEQP-GLES3.functional.texture.shadow.2d.line"
#define VkglTestCase_025415_2 "ar_mipmap_linear.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025415, VkglTestCase_025415_1, VkglTestCase_025415_2);

#define VkglTestCase_025416_1 "dEQP-GLES3.functional.texture.shadow.2d.line"
#define VkglTestCase_025416_2 "ar_mipmap_linear.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025416, VkglTestCase_025416_1, VkglTestCase_025416_2);

#define VkglTestCase_025417_1 "dEQP-GLES3.functional.texture.shadow.2d.lin"
#define VkglTestCase_025417_2 "ear_mipmap_linear.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025417, VkglTestCase_025417_1, VkglTestCase_025417_2);

#define VkglTestCase_025418_1 "dEQP-GLES3.functional.texture.shadow.2d.li"
#define VkglTestCase_025418_2 "near_mipmap_linear.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025418, VkglTestCase_025418_1, VkglTestCase_025418_2);

#define VkglTestCase_025419_1 "dEQP-GLES3.functional.texture.shadow.2d.lin"
#define VkglTestCase_025419_2 "ear_mipmap_linear.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025419, VkglTestCase_025419_1, VkglTestCase_025419_2);

#define VkglTestCase_025420_1 "dEQP-GLES3.functional.texture.shadow.2d.li"
#define VkglTestCase_025420_2 "near_mipmap_linear.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025420, VkglTestCase_025420_1, VkglTestCase_025420_2);

#define VkglTestCase_025421_1 "dEQP-GLES3.functional.texture.shadow.2d.li"
#define VkglTestCase_025421_2 "near_mipmap_linear.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025421, VkglTestCase_025421_1, VkglTestCase_025421_2);

#define VkglTestCase_025422_1 "dEQP-GLES3.functional.texture.shadow.2d.li"
#define VkglTestCase_025422_2 "near_mipmap_linear.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025422, VkglTestCase_025422_1, VkglTestCase_025422_2);

#define VkglTestCase_025423_1 "dEQP-GLES3.functional.texture.shadow.2d.l"
#define VkglTestCase_025423_2 "inear_mipmap_linear.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025423, VkglTestCase_025423_1, VkglTestCase_025423_2);
