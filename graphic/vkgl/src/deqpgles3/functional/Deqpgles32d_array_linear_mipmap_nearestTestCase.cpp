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

#define VkglTestCase_025640_1 "dEQP-GLES3.functional.texture.shadow.2d_array.lin"
#define VkglTestCase_025640_2 "ear_mipmap_nearest.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025640, VkglTestCase_025640_1, VkglTestCase_025640_2);

#define VkglTestCase_025641_1 "dEQP-GLES3.functional.texture.shadow.2d_array.line"
#define VkglTestCase_025641_2 "ar_mipmap_nearest.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025641, VkglTestCase_025641_1, VkglTestCase_025641_2);

#define VkglTestCase_025642_1 "dEQP-GLES3.functional.texture.shadow.2d_array.lin"
#define VkglTestCase_025642_2 "ear_mipmap_nearest.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025642, VkglTestCase_025642_1, VkglTestCase_025642_2);

#define VkglTestCase_025643_1 "dEQP-GLES3.functional.texture.shadow.2d_array.linea"
#define VkglTestCase_025643_2 "r_mipmap_nearest.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025643, VkglTestCase_025643_1, VkglTestCase_025643_2);

#define VkglTestCase_025644_1 "dEQP-GLES3.functional.texture.shadow.2d_array.linea"
#define VkglTestCase_025644_2 "r_mipmap_nearest.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025644, VkglTestCase_025644_1, VkglTestCase_025644_2);

#define VkglTestCase_025645_1 "dEQP-GLES3.functional.texture.shadow.2d_array.line"
#define VkglTestCase_025645_2 "ar_mipmap_nearest.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025645, VkglTestCase_025645_1, VkglTestCase_025645_2);

#define VkglTestCase_025646_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025646_2 ".linear_mipmap_nearest.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025646, VkglTestCase_025646_1, VkglTestCase_025646_2);

#define VkglTestCase_025647_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025647_2 ".linear_mipmap_nearest.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025647, VkglTestCase_025647_1, VkglTestCase_025647_2);

#define VkglTestCase_025648_1 "dEQP-GLES3.functional.texture.shadow.2d_arra"
#define VkglTestCase_025648_2 "y.linear_mipmap_nearest.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025648, VkglTestCase_025648_1, VkglTestCase_025648_2);

#define VkglTestCase_025649_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025649_2 "linear_mipmap_nearest.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025649, VkglTestCase_025649_1, VkglTestCase_025649_2);

#define VkglTestCase_025650_1 "dEQP-GLES3.functional.texture.shadow.2d_array.l"
#define VkglTestCase_025650_2 "inear_mipmap_nearest.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025650, VkglTestCase_025650_1, VkglTestCase_025650_2);

#define VkglTestCase_025651_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025651_2 "linear_mipmap_nearest.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025651, VkglTestCase_025651_1, VkglTestCase_025651_2);

#define VkglTestCase_025652_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025652_2 ".linear_mipmap_nearest.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025652, VkglTestCase_025652_1, VkglTestCase_025652_2);

#define VkglTestCase_025653_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025653_2 "linear_mipmap_nearest.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025653, VkglTestCase_025653_1, VkglTestCase_025653_2);

#define VkglTestCase_025654_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025654_2 ".linear_mipmap_nearest.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025654, VkglTestCase_025654_1, VkglTestCase_025654_2);

#define VkglTestCase_025655_1 "dEQP-GLES3.functional.texture.shadow.2d_array.l"
#define VkglTestCase_025655_2 "inear_mipmap_nearest.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025655, VkglTestCase_025655_1, VkglTestCase_025655_2);

#define VkglTestCase_025656_1 "dEQP-GLES3.functional.texture.shadow.2d_array.li"
#define VkglTestCase_025656_2 "near_mipmap_nearest.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025656, VkglTestCase_025656_1, VkglTestCase_025656_2);

#define VkglTestCase_025657_1 "dEQP-GLES3.functional.texture.shadow.2d_array.l"
#define VkglTestCase_025657_2 "inear_mipmap_nearest.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025657, VkglTestCase_025657_1, VkglTestCase_025657_2);

#define VkglTestCase_025658_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025658_2 "linear_mipmap_nearest.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025658, VkglTestCase_025658_1, VkglTestCase_025658_2);

#define VkglTestCase_025659_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025659_2 "linear_mipmap_nearest.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025659, VkglTestCase_025659_1, VkglTestCase_025659_2);

#define VkglTestCase_025660_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025660_2 ".linear_mipmap_nearest.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025660, VkglTestCase_025660_1, VkglTestCase_025660_2);

#define VkglTestCase_025661_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025661_2 ".linear_mipmap_nearest.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025661, VkglTestCase_025661_1, VkglTestCase_025661_2);

#define VkglTestCase_025662_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025662_2 "linear_mipmap_nearest.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025662, VkglTestCase_025662_1, VkglTestCase_025662_2);

#define VkglTestCase_025663_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025663_2 ".linear_mipmap_nearest.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025663, VkglTestCase_025663_1, VkglTestCase_025663_2);
