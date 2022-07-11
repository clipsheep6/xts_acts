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

#define VkglTestCase_025592_1 "dEQP-GLES3.functional.texture.shadow.2d_ar"
#define VkglTestCase_025592_2 "ray.linear.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025592, VkglTestCase_025592_1, VkglTestCase_025592_2);

#define VkglTestCase_025593_1 "dEQP-GLES3.functional.texture.shadow.2d_ar"
#define VkglTestCase_025593_2 "ray.linear.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025593, VkglTestCase_025593_1, VkglTestCase_025593_2);

#define VkglTestCase_025594_1 "dEQP-GLES3.functional.texture.shadow.2d_a"
#define VkglTestCase_025594_2 "rray.linear.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025594, VkglTestCase_025594_1, VkglTestCase_025594_2);

#define VkglTestCase_025595_1 "dEQP-GLES3.functional.texture.shadow.2d_arr"
#define VkglTestCase_025595_2 "ay.linear.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025595, VkglTestCase_025595_1, VkglTestCase_025595_2);

#define VkglTestCase_025596_1 "dEQP-GLES3.functional.texture.shadow.2d_arra"
#define VkglTestCase_025596_2 "y.linear.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025596, VkglTestCase_025596_1, VkglTestCase_025596_2);

#define VkglTestCase_025597_1 "dEQP-GLES3.functional.texture.shadow.2d_arr"
#define VkglTestCase_025597_2 "ay.linear.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025597, VkglTestCase_025597_1, VkglTestCase_025597_2);

#define VkglTestCase_025598_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025598_2 "2d_array.linear.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025598, VkglTestCase_025598_1, VkglTestCase_025598_2);

#define VkglTestCase_025599_1 "dEQP-GLES3.functional.texture.shadow.2"
#define VkglTestCase_025599_2 "d_array.linear.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025599, VkglTestCase_025599_1, VkglTestCase_025599_2);

#define VkglTestCase_025600_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025600_2 "2d_array.linear.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025600, VkglTestCase_025600_1, VkglTestCase_025600_2);

#define VkglTestCase_025601_1 "dEQP-GLES3.functional.texture.shadow.2d"
#define VkglTestCase_025601_2 "_array.linear.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025601, VkglTestCase_025601_1, VkglTestCase_025601_2);

#define VkglTestCase_025602_1 "dEQP-GLES3.functional.texture.shadow.2d"
#define VkglTestCase_025602_2 "_array.linear.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025602, VkglTestCase_025602_1, VkglTestCase_025602_2);

#define VkglTestCase_025603_1 "dEQP-GLES3.functional.texture.shadow.2"
#define VkglTestCase_025603_2 "d_array.linear.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025603, VkglTestCase_025603_1, VkglTestCase_025603_2);

#define VkglTestCase_025604_1 "dEQP-GLES3.functional.texture.shadow.2"
#define VkglTestCase_025604_2 "d_array.linear.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025604, VkglTestCase_025604_1, VkglTestCase_025604_2);

#define VkglTestCase_025605_1 "dEQP-GLES3.functional.texture.shadow.2"
#define VkglTestCase_025605_2 "d_array.linear.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025605, VkglTestCase_025605_1, VkglTestCase_025605_2);

#define VkglTestCase_025606_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025606_2 "2d_array.linear.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025606, VkglTestCase_025606_1, VkglTestCase_025606_2);

#define VkglTestCase_025607_1 "dEQP-GLES3.functional.texture.shadow.2d_"
#define VkglTestCase_025607_2 "array.linear.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025607, VkglTestCase_025607_1, VkglTestCase_025607_2);

#define VkglTestCase_025608_1 "dEQP-GLES3.functional.texture.shadow.2d_"
#define VkglTestCase_025608_2 "array.linear.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025608, VkglTestCase_025608_1, VkglTestCase_025608_2);

#define VkglTestCase_025609_1 "dEQP-GLES3.functional.texture.shadow.2d"
#define VkglTestCase_025609_2 "_array.linear.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025609, VkglTestCase_025609_1, VkglTestCase_025609_2);

#define VkglTestCase_025610_1 "dEQP-GLES3.functional.texture.shadow.2"
#define VkglTestCase_025610_2 "d_array.linear.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025610, VkglTestCase_025610_1, VkglTestCase_025610_2);

#define VkglTestCase_025611_1 "dEQP-GLES3.functional.texture.shadow.2d"
#define VkglTestCase_025611_2 "_array.linear.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025611, VkglTestCase_025611_1, VkglTestCase_025611_2);

#define VkglTestCase_025612_1 "dEQP-GLES3.functional.texture.shadow.2"
#define VkglTestCase_025612_2 "d_array.linear.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025612, VkglTestCase_025612_1, VkglTestCase_025612_2);

#define VkglTestCase_025613_1 "dEQP-GLES3.functional.texture.shadow.2"
#define VkglTestCase_025613_2 "d_array.linear.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025613, VkglTestCase_025613_1, VkglTestCase_025613_2);

#define VkglTestCase_025614_1 "dEQP-GLES3.functional.texture.shadow.2"
#define VkglTestCase_025614_2 "d_array.linear.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025614, VkglTestCase_025614_1, VkglTestCase_025614_2);

#define VkglTestCase_025615_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025615_2 "2d_array.linear.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025615, VkglTestCase_025615_1, VkglTestCase_025615_2);
