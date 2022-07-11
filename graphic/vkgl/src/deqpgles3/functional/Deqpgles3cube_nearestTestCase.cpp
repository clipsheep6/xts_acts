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

#define VkglTestCase_025424_1 "dEQP-GLES3.functional.texture.shadow.cub"
#define VkglTestCase_025424_2 "e.nearest.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025424, VkglTestCase_025424_1, VkglTestCase_025424_2);

#define VkglTestCase_025425_1 "dEQP-GLES3.functional.texture.shadow.cube"
#define VkglTestCase_025425_2 ".nearest.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025425, VkglTestCase_025425_1, VkglTestCase_025425_2);

#define VkglTestCase_025426_1 "dEQP-GLES3.functional.texture.shadow.cub"
#define VkglTestCase_025426_2 "e.nearest.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025426, VkglTestCase_025426_1, VkglTestCase_025426_2);

#define VkglTestCase_025427_1 "dEQP-GLES3.functional.texture.shadow.cube."
#define VkglTestCase_025427_2 "nearest.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025427, VkglTestCase_025427_1, VkglTestCase_025427_2);

#define VkglTestCase_025428_1 "dEQP-GLES3.functional.texture.shadow.cube."
#define VkglTestCase_025428_2 "nearest.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025428, VkglTestCase_025428_1, VkglTestCase_025428_2);

#define VkglTestCase_025429_1 "dEQP-GLES3.functional.texture.shadow.cube"
#define VkglTestCase_025429_2 ".nearest.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025429, VkglTestCase_025429_1, VkglTestCase_025429_2);

#define VkglTestCase_025430_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025430_2 ".cube.nearest.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025430, VkglTestCase_025430_1, VkglTestCase_025430_2);

#define VkglTestCase_025431_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025431_2 ".cube.nearest.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025431, VkglTestCase_025431_1, VkglTestCase_025431_2);

#define VkglTestCase_025432_1 "dEQP-GLES3.functional.texture.shado"
#define VkglTestCase_025432_2 "w.cube.nearest.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025432, VkglTestCase_025432_1, VkglTestCase_025432_2);

#define VkglTestCase_025433_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025433_2 "cube.nearest.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025433, VkglTestCase_025433_1, VkglTestCase_025433_2);

#define VkglTestCase_025434_1 "dEQP-GLES3.functional.texture.shadow.c"
#define VkglTestCase_025434_2 "ube.nearest.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025434, VkglTestCase_025434_1, VkglTestCase_025434_2);

#define VkglTestCase_025435_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025435_2 "cube.nearest.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025435, VkglTestCase_025435_1, VkglTestCase_025435_2);

#define VkglTestCase_025436_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025436_2 ".cube.nearest.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025436, VkglTestCase_025436_1, VkglTestCase_025436_2);

#define VkglTestCase_025437_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025437_2 "cube.nearest.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025437, VkglTestCase_025437_1, VkglTestCase_025437_2);

#define VkglTestCase_025438_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025438_2 ".cube.nearest.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025438, VkglTestCase_025438_1, VkglTestCase_025438_2);

#define VkglTestCase_025439_1 "dEQP-GLES3.functional.texture.shadow.c"
#define VkglTestCase_025439_2 "ube.nearest.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025439, VkglTestCase_025439_1, VkglTestCase_025439_2);

#define VkglTestCase_025440_1 "dEQP-GLES3.functional.texture.shadow.cu"
#define VkglTestCase_025440_2 "be.nearest.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025440, VkglTestCase_025440_1, VkglTestCase_025440_2);

#define VkglTestCase_025441_1 "dEQP-GLES3.functional.texture.shadow.c"
#define VkglTestCase_025441_2 "ube.nearest.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025441, VkglTestCase_025441_1, VkglTestCase_025441_2);

#define VkglTestCase_025442_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025442_2 "cube.nearest.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025442, VkglTestCase_025442_1, VkglTestCase_025442_2);

#define VkglTestCase_025443_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025443_2 "cube.nearest.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025443, VkglTestCase_025443_1, VkglTestCase_025443_2);

#define VkglTestCase_025444_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025444_2 ".cube.nearest.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025444, VkglTestCase_025444_1, VkglTestCase_025444_2);

#define VkglTestCase_025445_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025445_2 ".cube.nearest.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025445, VkglTestCase_025445_1, VkglTestCase_025445_2);

#define VkglTestCase_025446_1 "dEQP-GLES3.functional.texture.shadow."
#define VkglTestCase_025446_2 "cube.nearest.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025446, VkglTestCase_025446_1, VkglTestCase_025446_2);

#define VkglTestCase_025447_1 "dEQP-GLES3.functional.texture.shadow"
#define VkglTestCase_025447_2 ".cube.nearest.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025447, VkglTestCase_025447_1, VkglTestCase_025447_2);
