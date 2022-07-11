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
#include "../ActsDeqpgles30020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019459_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019459_2 ".precision.matrixcompmult.mediump_fragment.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019459, VkglTestCase_019459_1, VkglTestCase_019459_2);

#define VkglTestCase_019460_1 "dEQP-GLES3.functional.shaders.builtin_functions."
#define VkglTestCase_019460_2 "precision.matrixcompmult.mediump_fragment.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019460, VkglTestCase_019460_1, VkglTestCase_019460_2);

#define VkglTestCase_019461_1 "dEQP-GLES3.functional.shaders.builtin_functions."
#define VkglTestCase_019461_2 "precision.matrixcompmult.mediump_fragment.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019461, VkglTestCase_019461_1, VkglTestCase_019461_2);

#define VkglTestCase_019462_1 "dEQP-GLES3.functional.shaders.builtin_functions."
#define VkglTestCase_019462_2 "precision.matrixcompmult.mediump_fragment.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019462, VkglTestCase_019462_1, VkglTestCase_019462_2);

#define VkglTestCase_019463_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019463_2 ".precision.matrixcompmult.mediump_fragment.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019463, VkglTestCase_019463_1, VkglTestCase_019463_2);

#define VkglTestCase_019464_1 "dEQP-GLES3.functional.shaders.builtin_functions."
#define VkglTestCase_019464_2 "precision.matrixcompmult.mediump_fragment.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019464, VkglTestCase_019464_1, VkglTestCase_019464_2);

#define VkglTestCase_019465_1 "dEQP-GLES3.functional.shaders.builtin_functions."
#define VkglTestCase_019465_2 "precision.matrixcompmult.mediump_fragment.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019465, VkglTestCase_019465_1, VkglTestCase_019465_2);

#define VkglTestCase_019466_1 "dEQP-GLES3.functional.shaders.builtin_functions."
#define VkglTestCase_019466_2 "precision.matrixcompmult.mediump_fragment.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019466, VkglTestCase_019466_1, VkglTestCase_019466_2);

#define VkglTestCase_019467_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019467_2 ".precision.matrixcompmult.mediump_fragment.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019467, VkglTestCase_019467_1, VkglTestCase_019467_2);
