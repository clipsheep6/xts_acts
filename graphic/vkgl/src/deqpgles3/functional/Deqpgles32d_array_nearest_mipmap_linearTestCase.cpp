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

#define VkglTestCase_025664_1 "dEQP-GLES3.functional.texture.shadow.2d_array.nea"
#define VkglTestCase_025664_2 "rest_mipmap_linear.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025664, VkglTestCase_025664_1, VkglTestCase_025664_2);

#define VkglTestCase_025665_1 "dEQP-GLES3.functional.texture.shadow.2d_array.near"
#define VkglTestCase_025665_2 "est_mipmap_linear.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025665, VkglTestCase_025665_1, VkglTestCase_025665_2);

#define VkglTestCase_025666_1 "dEQP-GLES3.functional.texture.shadow.2d_array.nea"
#define VkglTestCase_025666_2 "rest_mipmap_linear.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025666, VkglTestCase_025666_1, VkglTestCase_025666_2);

#define VkglTestCase_025667_1 "dEQP-GLES3.functional.texture.shadow.2d_array.neare"
#define VkglTestCase_025667_2 "st_mipmap_linear.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025667, VkglTestCase_025667_1, VkglTestCase_025667_2);

#define VkglTestCase_025668_1 "dEQP-GLES3.functional.texture.shadow.2d_array.neare"
#define VkglTestCase_025668_2 "st_mipmap_linear.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025668, VkglTestCase_025668_1, VkglTestCase_025668_2);

#define VkglTestCase_025669_1 "dEQP-GLES3.functional.texture.shadow.2d_array.near"
#define VkglTestCase_025669_2 "est_mipmap_linear.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025669, VkglTestCase_025669_1, VkglTestCase_025669_2);

#define VkglTestCase_025670_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025670_2 ".nearest_mipmap_linear.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025670, VkglTestCase_025670_1, VkglTestCase_025670_2);

#define VkglTestCase_025671_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025671_2 ".nearest_mipmap_linear.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025671, VkglTestCase_025671_1, VkglTestCase_025671_2);

#define VkglTestCase_025672_1 "dEQP-GLES3.functional.texture.shadow.2d_arra"
#define VkglTestCase_025672_2 "y.nearest_mipmap_linear.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025672, VkglTestCase_025672_1, VkglTestCase_025672_2);

#define VkglTestCase_025673_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025673_2 "nearest_mipmap_linear.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025673, VkglTestCase_025673_1, VkglTestCase_025673_2);

#define VkglTestCase_025674_1 "dEQP-GLES3.functional.texture.shadow.2d_array.n"
#define VkglTestCase_025674_2 "earest_mipmap_linear.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025674, VkglTestCase_025674_1, VkglTestCase_025674_2);

#define VkglTestCase_025675_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025675_2 "nearest_mipmap_linear.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025675, VkglTestCase_025675_1, VkglTestCase_025675_2);

#define VkglTestCase_025676_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025676_2 ".nearest_mipmap_linear.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025676, VkglTestCase_025676_1, VkglTestCase_025676_2);

#define VkglTestCase_025677_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025677_2 "nearest_mipmap_linear.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025677, VkglTestCase_025677_1, VkglTestCase_025677_2);

#define VkglTestCase_025678_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025678_2 ".nearest_mipmap_linear.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025678, VkglTestCase_025678_1, VkglTestCase_025678_2);

#define VkglTestCase_025679_1 "dEQP-GLES3.functional.texture.shadow.2d_array.n"
#define VkglTestCase_025679_2 "earest_mipmap_linear.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025679, VkglTestCase_025679_1, VkglTestCase_025679_2);

#define VkglTestCase_025680_1 "dEQP-GLES3.functional.texture.shadow.2d_array.ne"
#define VkglTestCase_025680_2 "arest_mipmap_linear.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025680, VkglTestCase_025680_1, VkglTestCase_025680_2);

#define VkglTestCase_025681_1 "dEQP-GLES3.functional.texture.shadow.2d_array.n"
#define VkglTestCase_025681_2 "earest_mipmap_linear.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025681, VkglTestCase_025681_1, VkglTestCase_025681_2);

#define VkglTestCase_025682_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025682_2 "nearest_mipmap_linear.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025682, VkglTestCase_025682_1, VkglTestCase_025682_2);

#define VkglTestCase_025683_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025683_2 "nearest_mipmap_linear.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025683, VkglTestCase_025683_1, VkglTestCase_025683_2);

#define VkglTestCase_025684_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025684_2 ".nearest_mipmap_linear.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025684, VkglTestCase_025684_1, VkglTestCase_025684_2);

#define VkglTestCase_025685_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025685_2 ".nearest_mipmap_linear.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025685, VkglTestCase_025685_1, VkglTestCase_025685_2);

#define VkglTestCase_025686_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025686_2 "nearest_mipmap_linear.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025686, VkglTestCase_025686_1, VkglTestCase_025686_2);

#define VkglTestCase_025687_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025687_2 ".nearest_mipmap_linear.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025687, VkglTestCase_025687_1, VkglTestCase_025687_2);
