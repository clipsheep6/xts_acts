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

#define VkglTestCase_023378_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023378_2 "feedback_varying.type.separable_geometry.whole_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023378, VkglTestCase_023378_1, VkglTestCase_023378_2);

#define VkglTestCase_023379_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023379_2 "_feedback_varying.type.separable_geometry.whole_array.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023379, VkglTestCase_023379_1, VkglTestCase_023379_2);

#define VkglTestCase_023380_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023380_2 "feedback_varying.type.separable_geometry.whole_array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023380, VkglTestCase_023380_1, VkglTestCase_023380_2);

#define VkglTestCase_023381_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023381_2 "feedback_varying.type.separable_geometry.whole_array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023381, VkglTestCase_023381_1, VkglTestCase_023381_2);

#define VkglTestCase_023382_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023382_2 "feedback_varying.type.separable_geometry.whole_array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023382, VkglTestCase_023382_1, VkglTestCase_023382_2);

#define VkglTestCase_023383_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023383_2 "feedback_varying.type.separable_geometry.whole_array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023383, VkglTestCase_023383_1, VkglTestCase_023383_2);

#define VkglTestCase_023384_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023384_2 "eedback_varying.type.separable_geometry.whole_array.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023384, VkglTestCase_023384_1, VkglTestCase_023384_2);
