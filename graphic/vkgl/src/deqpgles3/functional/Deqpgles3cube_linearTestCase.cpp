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

#define VkglTestCase_025448_1 "dEQP-GLES3.functional.texture.shadow.cub"
#define VkglTestCase_025448_2 "e.linear.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025448, VkglTestCase_025448_1, VkglTestCase_025448_2);

#define VkglTestCase_025449_1 "dEQP-GLES3.functional.texture.shadow.cub"
#define VkglTestCase_025449_2 "e.linear.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025449, VkglTestCase_025449_1, VkglTestCase_025449_2);

#define VkglTestCase_025450_1 "dEQP-GLES3.functional.texture.shadow.cu"
#define VkglTestCase_025450_2 "be.linear.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025450, VkglTestCase_025450_1, VkglTestCase_025450_2);

#define VkglTestCase_025451_1 "dEQP-GLES3.functional.texture.shadow.cube"
#define VkglTestCase_025451_2 ".linear.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025451, VkglTestCase_025451_1, VkglTestCase_025451_2);

#define VkglTestCase_025452_1 "dEQP-GLES3.functional.texture.shadow.cube."
#define VkglTestCase_025452_2 "linear.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025452, VkglTestCase_025452_1, VkglTestCase_025452_2);

#define VkglTestCase_025453_1 "dEQP-GLES3.functional.texture.shadow.cube"
#define VkglTestCase_025453_2 ".linear.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025453, VkglTestCase_025453_1, VkglTestCase_025453_2);

#define VkglTestCase_025454_1 "dEQP-GLES3.functional.texture.shado"
#define VkglTestCase_025454_2 "w.cube.linear.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025454, VkglTestCase_025454_1, VkglTestCase_025454_2);

#define VkglTestCase_025455_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025455_2 ".cube.linear.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025455, VkglTestCase_025455_1, VkglTestCase_025455_2);

#define VkglTestCase_025456_1 "dEQP-GLES3.functional.texture.shado"
#define VkglTestCase_025456_2 "w.cube.linear.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025456, VkglTestCase_025456_1, VkglTestCase_025456_2);

#define VkglTestCase_025457_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025457_2 "cube.linear.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025457, VkglTestCase_025457_1, VkglTestCase_025457_2);

#define VkglTestCase_025458_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025458_2 "cube.linear.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025458, VkglTestCase_025458_1, VkglTestCase_025458_2);

#define VkglTestCase_025459_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025459_2 ".cube.linear.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025459, VkglTestCase_025459_1, VkglTestCase_025459_2);

#define VkglTestCase_025460_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025460_2 ".cube.linear.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025460, VkglTestCase_025460_1, VkglTestCase_025460_2);

#define VkglTestCase_025461_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025461_2 ".cube.linear.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025461, VkglTestCase_025461_1, VkglTestCase_025461_2);

#define VkglTestCase_025462_1 "dEQP-GLES3.functional.texture.shado"
#define VkglTestCase_025462_2 "w.cube.linear.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025462, VkglTestCase_025462_1, VkglTestCase_025462_2);

#define VkglTestCase_025463_1 "dEQP-GLES3.functional.texture.shadow.c"
#define VkglTestCase_025463_2 "ube.linear.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025463, VkglTestCase_025463_1, VkglTestCase_025463_2);

#define VkglTestCase_025464_1 "dEQP-GLES3.functional.texture.shadow.c"
#define VkglTestCase_025464_2 "ube.linear.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025464, VkglTestCase_025464_1, VkglTestCase_025464_2);

#define VkglTestCase_025465_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025465_2 "cube.linear.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025465, VkglTestCase_025465_1, VkglTestCase_025465_2);

#define VkglTestCase_025466_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025466_2 ".cube.linear.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025466, VkglTestCase_025466_1, VkglTestCase_025466_2);

#define VkglTestCase_025467_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025467_2 "cube.linear.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025467, VkglTestCase_025467_1, VkglTestCase_025467_2);

#define VkglTestCase_025468_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025468_2 ".cube.linear.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025468, VkglTestCase_025468_1, VkglTestCase_025468_2);

#define VkglTestCase_025469_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025469_2 ".cube.linear.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025469, VkglTestCase_025469_1, VkglTestCase_025469_2);

#define VkglTestCase_025470_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025470_2 ".cube.linear.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025470, VkglTestCase_025470_1, VkglTestCase_025470_2);

#define VkglTestCase_025471_1 "dEQP-GLES3.functional.texture.shado"
#define VkglTestCase_025471_2 "w.cube.linear.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025471, VkglTestCase_025471_1, VkglTestCase_025471_2);
