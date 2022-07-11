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

#define VkglTestCase_025568_1 "dEQP-GLES3.functional.texture.shadow.2d_ar"
#define VkglTestCase_025568_2 "ray.nearest.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025568, VkglTestCase_025568_1, VkglTestCase_025568_2);

#define VkglTestCase_025569_1 "dEQP-GLES3.functional.texture.shadow.2d_arr"
#define VkglTestCase_025569_2 "ay.nearest.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025569, VkglTestCase_025569_1, VkglTestCase_025569_2);

#define VkglTestCase_025570_1 "dEQP-GLES3.functional.texture.shadow.2d_ar"
#define VkglTestCase_025570_2 "ray.nearest.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025570, VkglTestCase_025570_1, VkglTestCase_025570_2);

#define VkglTestCase_025571_1 "dEQP-GLES3.functional.texture.shadow.2d_arra"
#define VkglTestCase_025571_2 "y.nearest.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025571, VkglTestCase_025571_1, VkglTestCase_025571_2);

#define VkglTestCase_025572_1 "dEQP-GLES3.functional.texture.shadow.2d_arra"
#define VkglTestCase_025572_2 "y.nearest.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025572, VkglTestCase_025572_1, VkglTestCase_025572_2);

#define VkglTestCase_025573_1 "dEQP-GLES3.functional.texture.shadow.2d_arr"
#define VkglTestCase_025573_2 "ay.nearest.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025573, VkglTestCase_025573_1, VkglTestCase_025573_2);

#define VkglTestCase_025574_1 "dEQP-GLES3.functional.texture.shadow.2"
#define VkglTestCase_025574_2 "d_array.nearest.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025574, VkglTestCase_025574_1, VkglTestCase_025574_2);

#define VkglTestCase_025575_1 "dEQP-GLES3.functional.texture.shadow.2"
#define VkglTestCase_025575_2 "d_array.nearest.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025575, VkglTestCase_025575_1, VkglTestCase_025575_2);

#define VkglTestCase_025576_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025576_2 "2d_array.nearest.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025576, VkglTestCase_025576_1, VkglTestCase_025576_2);

#define VkglTestCase_025577_1 "dEQP-GLES3.functional.texture.shadow.2d"
#define VkglTestCase_025577_2 "_array.nearest.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025577, VkglTestCase_025577_1, VkglTestCase_025577_2);

#define VkglTestCase_025578_1 "dEQP-GLES3.functional.texture.shadow.2d_"
#define VkglTestCase_025578_2 "array.nearest.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025578, VkglTestCase_025578_1, VkglTestCase_025578_2);

#define VkglTestCase_025579_1 "dEQP-GLES3.functional.texture.shadow.2d"
#define VkglTestCase_025579_2 "_array.nearest.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025579, VkglTestCase_025579_1, VkglTestCase_025579_2);

#define VkglTestCase_025580_1 "dEQP-GLES3.functional.texture.shadow.2"
#define VkglTestCase_025580_2 "d_array.nearest.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025580, VkglTestCase_025580_1, VkglTestCase_025580_2);

#define VkglTestCase_025581_1 "dEQP-GLES3.functional.texture.shadow.2d"
#define VkglTestCase_025581_2 "_array.nearest.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025581, VkglTestCase_025581_1, VkglTestCase_025581_2);

#define VkglTestCase_025582_1 "dEQP-GLES3.functional.texture.shadow.2"
#define VkglTestCase_025582_2 "d_array.nearest.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025582, VkglTestCase_025582_1, VkglTestCase_025582_2);

#define VkglTestCase_025583_1 "dEQP-GLES3.functional.texture.shadow.2d_"
#define VkglTestCase_025583_2 "array.nearest.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025583, VkglTestCase_025583_1, VkglTestCase_025583_2);

#define VkglTestCase_025584_1 "dEQP-GLES3.functional.texture.shadow.2d_a"
#define VkglTestCase_025584_2 "rray.nearest.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025584, VkglTestCase_025584_1, VkglTestCase_025584_2);

#define VkglTestCase_025585_1 "dEQP-GLES3.functional.texture.shadow.2d_"
#define VkglTestCase_025585_2 "array.nearest.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025585, VkglTestCase_025585_1, VkglTestCase_025585_2);

#define VkglTestCase_025586_1 "dEQP-GLES3.functional.texture.shadow.2d"
#define VkglTestCase_025586_2 "_array.nearest.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025586, VkglTestCase_025586_1, VkglTestCase_025586_2);

#define VkglTestCase_025587_1 "dEQP-GLES3.functional.texture.shadow.2d"
#define VkglTestCase_025587_2 "_array.nearest.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025587, VkglTestCase_025587_1, VkglTestCase_025587_2);

#define VkglTestCase_025588_1 "dEQP-GLES3.functional.texture.shadow.2"
#define VkglTestCase_025588_2 "d_array.nearest.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025588, VkglTestCase_025588_1, VkglTestCase_025588_2);

#define VkglTestCase_025589_1 "dEQP-GLES3.functional.texture.shadow.2"
#define VkglTestCase_025589_2 "d_array.nearest.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025589, VkglTestCase_025589_1, VkglTestCase_025589_2);

#define VkglTestCase_025590_1 "dEQP-GLES3.functional.texture.shadow.2d"
#define VkglTestCase_025590_2 "_array.nearest.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025590, VkglTestCase_025590_1, VkglTestCase_025590_2);

#define VkglTestCase_025591_1 "dEQP-GLES3.functional.texture.shadow.2"
#define VkglTestCase_025591_2 "d_array.nearest.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025591, VkglTestCase_025591_1, VkglTestCase_025591_2);
