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

#define VkglTestCase_000894_1 "KHR-GLES3.shaders.preprocessor.defini"
#define VkglTestCase_000894_2 "tions.define_value_and_function_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000894, VkglTestCase_000894_1, VkglTestCase_000894_2);

#define VkglTestCase_000895_1 "KHR-GLES3.shaders.preprocessor.definit"
#define VkglTestCase_000895_2 "ions.define_value_and_function_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000895, VkglTestCase_000895_1, VkglTestCase_000895_2);

#define VkglTestCase_000896_1 "KHR-GLES3.shaders.preprocessor.definitio"
#define VkglTestCase_000896_2 "ns.undefine_object_invalid_syntax_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000896, VkglTestCase_000896_1, VkglTestCase_000896_2);

#define VkglTestCase_000897_1 "KHR-GLES3.shaders.preprocessor.definition"
#define VkglTestCase_000897_2 "s.undefine_object_invalid_syntax_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000897, VkglTestCase_000897_1, VkglTestCase_000897_2);

#define VkglTestCase_000898_1 "KHR-GLES3.shaders.preprocessor.defini"
#define VkglTestCase_000898_2 "tions.undefine_invalid_object_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000898, VkglTestCase_000898_1, VkglTestCase_000898_2);

#define VkglTestCase_000899_1 "KHR-GLES3.shaders.preprocessor.definit"
#define VkglTestCase_000899_2 "ions.undefine_invalid_object_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000899, VkglTestCase_000899_1, VkglTestCase_000899_2);

#define VkglTestCase_000900_1 "KHR-GLES3.shaders.preprocessor.defini"
#define VkglTestCase_000900_2 "tions.undefine_invalid_object_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000900, VkglTestCase_000900_1, VkglTestCase_000900_2);

#define VkglTestCase_000901_1 "KHR-GLES3.shaders.preprocessor.definit"
#define VkglTestCase_000901_2 "ions.undefine_invalid_object_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000901, VkglTestCase_000901_1, VkglTestCase_000901_2);

#define VkglTestCase_000902_1 "KHR-GLES3.shaders.preprocessor.defini"
#define VkglTestCase_000902_2 "tions.undefine_invalid_object_3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000902, VkglTestCase_000902_1, VkglTestCase_000902_2);

#define VkglTestCase_000903_1 "KHR-GLES3.shaders.preprocessor.definit"
#define VkglTestCase_000903_2 "ions.undefine_invalid_object_3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000903, VkglTestCase_000903_1, VkglTestCase_000903_2);

#define VkglTestCase_000904_1 "KHR-GLES3.shaders.preprocessor.defini"
#define VkglTestCase_000904_2 "tions.undefine_invalid_object_4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000904, VkglTestCase_000904_1, VkglTestCase_000904_2);

#define VkglTestCase_000905_1 "KHR-GLES3.shaders.preprocessor.definit"
#define VkglTestCase_000905_2 "ions.undefine_invalid_object_4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000905, VkglTestCase_000905_1, VkglTestCase_000905_2);

#define VkglTestCase_000906_1 "KHR-GLES3.shaders.preprocessor.de"
#define VkglTestCase_000906_2 "finitions.undefine_function_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000906, VkglTestCase_000906_1, VkglTestCase_000906_2);

#define VkglTestCase_000907_1 "KHR-GLES3.shaders.preprocessor.def"
#define VkglTestCase_000907_2 "initions.undefine_function_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000907, VkglTestCase_000907_1, VkglTestCase_000907_2);
