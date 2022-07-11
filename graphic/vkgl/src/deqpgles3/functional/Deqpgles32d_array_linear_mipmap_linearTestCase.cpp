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

#define VkglTestCase_025688_1 "dEQP-GLES3.functional.texture.shadow.2d_array.lin"
#define VkglTestCase_025688_2 "ear_mipmap_linear.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025688, VkglTestCase_025688_1, VkglTestCase_025688_2);

#define VkglTestCase_025689_1 "dEQP-GLES3.functional.texture.shadow.2d_array.lin"
#define VkglTestCase_025689_2 "ear_mipmap_linear.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025689, VkglTestCase_025689_1, VkglTestCase_025689_2);

#define VkglTestCase_025690_1 "dEQP-GLES3.functional.texture.shadow.2d_array.li"
#define VkglTestCase_025690_2 "near_mipmap_linear.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025690, VkglTestCase_025690_1, VkglTestCase_025690_2);

#define VkglTestCase_025691_1 "dEQP-GLES3.functional.texture.shadow.2d_array.line"
#define VkglTestCase_025691_2 "ar_mipmap_linear.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025691, VkglTestCase_025691_1, VkglTestCase_025691_2);

#define VkglTestCase_025692_1 "dEQP-GLES3.functional.texture.shadow.2d_array.linea"
#define VkglTestCase_025692_2 "r_mipmap_linear.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025692, VkglTestCase_025692_1, VkglTestCase_025692_2);

#define VkglTestCase_025693_1 "dEQP-GLES3.functional.texture.shadow.2d_array.line"
#define VkglTestCase_025693_2 "ar_mipmap_linear.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025693, VkglTestCase_025693_1, VkglTestCase_025693_2);

#define VkglTestCase_025694_1 "dEQP-GLES3.functional.texture.shadow.2d_arra"
#define VkglTestCase_025694_2 "y.linear_mipmap_linear.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025694, VkglTestCase_025694_1, VkglTestCase_025694_2);

#define VkglTestCase_025695_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025695_2 ".linear_mipmap_linear.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025695, VkglTestCase_025695_1, VkglTestCase_025695_2);

#define VkglTestCase_025696_1 "dEQP-GLES3.functional.texture.shadow.2d_arra"
#define VkglTestCase_025696_2 "y.linear_mipmap_linear.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025696, VkglTestCase_025696_1, VkglTestCase_025696_2);

#define VkglTestCase_025697_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025697_2 "linear_mipmap_linear.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025697, VkglTestCase_025697_1, VkglTestCase_025697_2);

#define VkglTestCase_025698_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025698_2 "linear_mipmap_linear.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025698, VkglTestCase_025698_1, VkglTestCase_025698_2);

#define VkglTestCase_025699_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025699_2 ".linear_mipmap_linear.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025699, VkglTestCase_025699_1, VkglTestCase_025699_2);

#define VkglTestCase_025700_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025700_2 ".linear_mipmap_linear.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025700, VkglTestCase_025700_1, VkglTestCase_025700_2);

#define VkglTestCase_025701_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025701_2 ".linear_mipmap_linear.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025701, VkglTestCase_025701_1, VkglTestCase_025701_2);

#define VkglTestCase_025702_1 "dEQP-GLES3.functional.texture.shadow.2d_arra"
#define VkglTestCase_025702_2 "y.linear_mipmap_linear.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025702, VkglTestCase_025702_1, VkglTestCase_025702_2);

#define VkglTestCase_025703_1 "dEQP-GLES3.functional.texture.shadow.2d_array.l"
#define VkglTestCase_025703_2 "inear_mipmap_linear.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025703, VkglTestCase_025703_1, VkglTestCase_025703_2);

#define VkglTestCase_025704_1 "dEQP-GLES3.functional.texture.shadow.2d_array.l"
#define VkglTestCase_025704_2 "inear_mipmap_linear.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025704, VkglTestCase_025704_1, VkglTestCase_025704_2);

#define VkglTestCase_025705_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025705_2 "linear_mipmap_linear.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025705, VkglTestCase_025705_1, VkglTestCase_025705_2);

#define VkglTestCase_025706_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025706_2 ".linear_mipmap_linear.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025706, VkglTestCase_025706_1, VkglTestCase_025706_2);

#define VkglTestCase_025707_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025707_2 "linear_mipmap_linear.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025707, VkglTestCase_025707_1, VkglTestCase_025707_2);

#define VkglTestCase_025708_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025708_2 ".linear_mipmap_linear.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025708, VkglTestCase_025708_1, VkglTestCase_025708_2);

#define VkglTestCase_025709_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025709_2 ".linear_mipmap_linear.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025709, VkglTestCase_025709_1, VkglTestCase_025709_2);

#define VkglTestCase_025710_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025710_2 ".linear_mipmap_linear.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025710, VkglTestCase_025710_1, VkglTestCase_025710_2);

#define VkglTestCase_025711_1 "dEQP-GLES3.functional.texture.shadow.2d_arra"
#define VkglTestCase_025711_2 "y.linear_mipmap_linear.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025711, VkglTestCase_025711_1, VkglTestCase_025711_2);
