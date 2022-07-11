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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000984_1 "KHR-GLES3.shaders.preprocessor.function_re"
#define VkglTestCase_000984_2 "definitions.function_redefinition_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000984, VkglTestCase_000984_1, VkglTestCase_000984_2);

#define VkglTestCase_000985_1 "KHR-GLES3.shaders.preprocessor.function_red"
#define VkglTestCase_000985_2 "efinitions.function_redefinition_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000985, VkglTestCase_000985_1, VkglTestCase_000985_2);

#define VkglTestCase_000986_1 "KHR-GLES3.shaders.preprocessor.function_re"
#define VkglTestCase_000986_2 "definitions.function_redefinition_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000986, VkglTestCase_000986_1, VkglTestCase_000986_2);

#define VkglTestCase_000987_1 "KHR-GLES3.shaders.preprocessor.function_red"
#define VkglTestCase_000987_2 "efinitions.function_redefinition_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000987, VkglTestCase_000987_1, VkglTestCase_000987_2);

#define VkglTestCase_000988_1 "KHR-GLES3.shaders.preprocessor.function_re"
#define VkglTestCase_000988_2 "definitions.function_redefinition_3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000988, VkglTestCase_000988_1, VkglTestCase_000988_2);

#define VkglTestCase_000989_1 "KHR-GLES3.shaders.preprocessor.function_red"
#define VkglTestCase_000989_2 "efinitions.function_redefinition_3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000989, VkglTestCase_000989_1, VkglTestCase_000989_2);

#define VkglTestCase_000990_1 "KHR-GLES3.shaders.preprocessor.function_redefinit"
#define VkglTestCase_000990_2 "ions.invalid_function_redefinition_param_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000990, VkglTestCase_000990_1, VkglTestCase_000990_2);

#define VkglTestCase_000991_1 "KHR-GLES3.shaders.preprocessor.function_redefiniti"
#define VkglTestCase_000991_2 "ons.invalid_function_redefinition_param_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000991, VkglTestCase_000991_1, VkglTestCase_000991_2);

#define VkglTestCase_000992_1 "KHR-GLES3.shaders.preprocessor.function_redefinit"
#define VkglTestCase_000992_2 "ions.invalid_function_redefinition_param_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000992, VkglTestCase_000992_1, VkglTestCase_000992_2);

#define VkglTestCase_000993_1 "KHR-GLES3.shaders.preprocessor.function_redefiniti"
#define VkglTestCase_000993_2 "ons.invalid_function_redefinition_param_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000993, VkglTestCase_000993_1, VkglTestCase_000993_2);

#define VkglTestCase_000994_1 "KHR-GLES3.shaders.preprocessor.function_redefinit"
#define VkglTestCase_000994_2 "ions.invalid_function_redefinition_param_3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000994, VkglTestCase_000994_1, VkglTestCase_000994_2);

#define VkglTestCase_000995_1 "KHR-GLES3.shaders.preprocessor.function_redefiniti"
#define VkglTestCase_000995_2 "ons.invalid_function_redefinition_param_3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000995, VkglTestCase_000995_1, VkglTestCase_000995_2);
