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

#define VkglTestCase_025616_1 "dEQP-GLES3.functional.texture.shadow.2d_array.near"
#define VkglTestCase_025616_2 "est_mipmap_nearest.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025616, VkglTestCase_025616_1, VkglTestCase_025616_2);

#define VkglTestCase_025617_1 "dEQP-GLES3.functional.texture.shadow.2d_array.near"
#define VkglTestCase_025617_2 "est_mipmap_nearest.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025617, VkglTestCase_025617_1, VkglTestCase_025617_2);

#define VkglTestCase_025618_1 "dEQP-GLES3.functional.texture.shadow.2d_array.nea"
#define VkglTestCase_025618_2 "rest_mipmap_nearest.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025618, VkglTestCase_025618_1, VkglTestCase_025618_2);

#define VkglTestCase_025619_1 "dEQP-GLES3.functional.texture.shadow.2d_array.neare"
#define VkglTestCase_025619_2 "st_mipmap_nearest.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025619, VkglTestCase_025619_1, VkglTestCase_025619_2);

#define VkglTestCase_025620_1 "dEQP-GLES3.functional.texture.shadow.2d_array.neares"
#define VkglTestCase_025620_2 "t_mipmap_nearest.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025620, VkglTestCase_025620_1, VkglTestCase_025620_2);

#define VkglTestCase_025621_1 "dEQP-GLES3.functional.texture.shadow.2d_array.neare"
#define VkglTestCase_025621_2 "st_mipmap_nearest.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025621, VkglTestCase_025621_1, VkglTestCase_025621_2);

#define VkglTestCase_025622_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025622_2 ".nearest_mipmap_nearest.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025622, VkglTestCase_025622_1, VkglTestCase_025622_2);

#define VkglTestCase_025623_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025623_2 "nearest_mipmap_nearest.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025623, VkglTestCase_025623_1, VkglTestCase_025623_2);

#define VkglTestCase_025624_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025624_2 ".nearest_mipmap_nearest.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025624, VkglTestCase_025624_1, VkglTestCase_025624_2);

#define VkglTestCase_025625_1 "dEQP-GLES3.functional.texture.shadow.2d_array.n"
#define VkglTestCase_025625_2 "earest_mipmap_nearest.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025625, VkglTestCase_025625_1, VkglTestCase_025625_2);

#define VkglTestCase_025626_1 "dEQP-GLES3.functional.texture.shadow.2d_array.n"
#define VkglTestCase_025626_2 "earest_mipmap_nearest.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025626, VkglTestCase_025626_1, VkglTestCase_025626_2);

#define VkglTestCase_025627_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025627_2 "nearest_mipmap_nearest.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025627, VkglTestCase_025627_1, VkglTestCase_025627_2);

#define VkglTestCase_025628_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025628_2 "nearest_mipmap_nearest.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025628, VkglTestCase_025628_1, VkglTestCase_025628_2);

#define VkglTestCase_025629_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025629_2 "nearest_mipmap_nearest.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025629, VkglTestCase_025629_1, VkglTestCase_025629_2);

#define VkglTestCase_025630_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025630_2 ".nearest_mipmap_nearest.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025630, VkglTestCase_025630_1, VkglTestCase_025630_2);

#define VkglTestCase_025631_1 "dEQP-GLES3.functional.texture.shadow.2d_array.ne"
#define VkglTestCase_025631_2 "arest_mipmap_nearest.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025631, VkglTestCase_025631_1, VkglTestCase_025631_2);

#define VkglTestCase_025632_1 "dEQP-GLES3.functional.texture.shadow.2d_array.ne"
#define VkglTestCase_025632_2 "arest_mipmap_nearest.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025632, VkglTestCase_025632_1, VkglTestCase_025632_2);

#define VkglTestCase_025633_1 "dEQP-GLES3.functional.texture.shadow.2d_array.n"
#define VkglTestCase_025633_2 "earest_mipmap_nearest.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025633, VkglTestCase_025633_1, VkglTestCase_025633_2);

#define VkglTestCase_025634_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025634_2 "nearest_mipmap_nearest.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025634, VkglTestCase_025634_1, VkglTestCase_025634_2);

#define VkglTestCase_025635_1 "dEQP-GLES3.functional.texture.shadow.2d_array.n"
#define VkglTestCase_025635_2 "earest_mipmap_nearest.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025635, VkglTestCase_025635_1, VkglTestCase_025635_2);

#define VkglTestCase_025636_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025636_2 "nearest_mipmap_nearest.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025636, VkglTestCase_025636_1, VkglTestCase_025636_2);

#define VkglTestCase_025637_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025637_2 "nearest_mipmap_nearest.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025637, VkglTestCase_025637_1, VkglTestCase_025637_2);

#define VkglTestCase_025638_1 "dEQP-GLES3.functional.texture.shadow.2d_array."
#define VkglTestCase_025638_2 "nearest_mipmap_nearest.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025638, VkglTestCase_025638_1, VkglTestCase_025638_2);

#define VkglTestCase_025639_1 "dEQP-GLES3.functional.texture.shadow.2d_array"
#define VkglTestCase_025639_2 ".nearest_mipmap_nearest.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025639, VkglTestCase_025639_1, VkglTestCase_025639_2);
