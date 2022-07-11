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

#define VkglTestCase_025304_1 "dEQP-GLES3.functional.texture.shadow.2d"
#define VkglTestCase_025304_2 ".linear.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025304, VkglTestCase_025304_1, VkglTestCase_025304_2);

#define VkglTestCase_025305_1 "dEQP-GLES3.functional.texture.shadow.2d"
#define VkglTestCase_025305_2 ".linear.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025305, VkglTestCase_025305_1, VkglTestCase_025305_2);

#define VkglTestCase_025306_1 "dEQP-GLES3.functional.texture.shadow.2"
#define VkglTestCase_025306_2 "d.linear.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025306, VkglTestCase_025306_1, VkglTestCase_025306_2);

#define VkglTestCase_025307_1 "dEQP-GLES3.functional.texture.shadow.2d."
#define VkglTestCase_025307_2 "linear.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025307, VkglTestCase_025307_1, VkglTestCase_025307_2);

#define VkglTestCase_025308_1 "dEQP-GLES3.functional.texture.shadow.2d.l"
#define VkglTestCase_025308_2 "inear.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025308, VkglTestCase_025308_1, VkglTestCase_025308_2);

#define VkglTestCase_025309_1 "dEQP-GLES3.functional.texture.shadow.2d."
#define VkglTestCase_025309_2 "linear.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025309, VkglTestCase_025309_1, VkglTestCase_025309_2);

#define VkglTestCase_025310_1 "dEQP-GLES3.functional.texture.shad"
#define VkglTestCase_025310_2 "ow.2d.linear.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025310, VkglTestCase_025310_1, VkglTestCase_025310_2);

#define VkglTestCase_025311_1 "dEQP-GLES3.functional.texture.shado"
#define VkglTestCase_025311_2 "w.2d.linear.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025311, VkglTestCase_025311_1, VkglTestCase_025311_2);

#define VkglTestCase_025312_1 "dEQP-GLES3.functional.texture.shad"
#define VkglTestCase_025312_2 "ow.2d.linear.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025312, VkglTestCase_025312_1, VkglTestCase_025312_2);

#define VkglTestCase_025313_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025313_2 ".2d.linear.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025313, VkglTestCase_025313_1, VkglTestCase_025313_2);

#define VkglTestCase_025314_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025314_2 ".2d.linear.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025314, VkglTestCase_025314_1, VkglTestCase_025314_2);

#define VkglTestCase_025315_1 "dEQP-GLES3.functional.texture.shado"
#define VkglTestCase_025315_2 "w.2d.linear.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025315, VkglTestCase_025315_1, VkglTestCase_025315_2);

#define VkglTestCase_025316_1 "dEQP-GLES3.functional.texture.shado"
#define VkglTestCase_025316_2 "w.2d.linear.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025316, VkglTestCase_025316_1, VkglTestCase_025316_2);

#define VkglTestCase_025317_1 "dEQP-GLES3.functional.texture.shado"
#define VkglTestCase_025317_2 "w.2d.linear.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025317, VkglTestCase_025317_1, VkglTestCase_025317_2);

#define VkglTestCase_025318_1 "dEQP-GLES3.functional.texture.shad"
#define VkglTestCase_025318_2 "ow.2d.linear.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025318, VkglTestCase_025318_1, VkglTestCase_025318_2);

#define VkglTestCase_025319_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025319_2 "2d.linear.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025319, VkglTestCase_025319_1, VkglTestCase_025319_2);

#define VkglTestCase_025320_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025320_2 "2d.linear.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025320, VkglTestCase_025320_1, VkglTestCase_025320_2);

#define VkglTestCase_025321_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025321_2 ".2d.linear.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025321, VkglTestCase_025321_1, VkglTestCase_025321_2);

#define VkglTestCase_025322_1 "dEQP-GLES3.functional.texture.shado"
#define VkglTestCase_025322_2 "w.2d.linear.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025322, VkglTestCase_025322_1, VkglTestCase_025322_2);

#define VkglTestCase_025323_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025323_2 ".2d.linear.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025323, VkglTestCase_025323_1, VkglTestCase_025323_2);

#define VkglTestCase_025324_1 "dEQP-GLES3.functional.texture.shado"
#define VkglTestCase_025324_2 "w.2d.linear.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025324, VkglTestCase_025324_1, VkglTestCase_025324_2);

#define VkglTestCase_025325_1 "dEQP-GLES3.functional.texture.shado"
#define VkglTestCase_025325_2 "w.2d.linear.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025325, VkglTestCase_025325_1, VkglTestCase_025325_2);

#define VkglTestCase_025326_1 "dEQP-GLES3.functional.texture.shado"
#define VkglTestCase_025326_2 "w.2d.linear.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025326, VkglTestCase_025326_1, VkglTestCase_025326_2);

#define VkglTestCase_025327_1 "dEQP-GLES3.functional.texture.shad"
#define VkglTestCase_025327_2 "ow.2d.linear.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025327, VkglTestCase_025327_1, VkglTestCase_025327_2);
