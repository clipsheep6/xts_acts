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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023349_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023349_2 "eedback_varying.type.separable_tess_eval.whole_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023349, VkglTestCase_023349_1, VkglTestCase_023349_2);

#define VkglTestCase_023350_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023350_2 "feedback_varying.type.separable_tess_eval.whole_array.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023350, VkglTestCase_023350_1, VkglTestCase_023350_2);

#define VkglTestCase_023351_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023351_2 "feedback_varying.type.separable_tess_eval.whole_array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023351, VkglTestCase_023351_1, VkglTestCase_023351_2);

#define VkglTestCase_023352_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023352_2 "feedback_varying.type.separable_tess_eval.whole_array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023352, VkglTestCase_023352_1, VkglTestCase_023352_2);

#define VkglTestCase_023353_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023353_2 "eedback_varying.type.separable_tess_eval.whole_array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023353, VkglTestCase_023353_1, VkglTestCase_023353_2);

#define VkglTestCase_023354_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023354_2 "eedback_varying.type.separable_tess_eval.whole_array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023354, VkglTestCase_023354_1, VkglTestCase_023354_2);

#define VkglTestCase_023355_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023355_2 "eedback_varying.type.separable_tess_eval.whole_array.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023355, VkglTestCase_023355_1, VkglTestCase_023355_2);
