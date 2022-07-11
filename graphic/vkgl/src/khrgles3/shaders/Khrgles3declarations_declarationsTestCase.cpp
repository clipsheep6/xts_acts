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

#define VkglTestCase_000001_1 "KHR-GLES3.shaders.declarations.decla"
#define VkglTestCase_000001_2 "rations.missing_variable_name_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000001, VkglTestCase_000001_1, VkglTestCase_000001_2);

#define VkglTestCase_000002_1 "KHR-GLES3.shaders.declarations.declar"
#define VkglTestCase_000002_2 "ations.missing_variable_name_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000002, VkglTestCase_000002_1, VkglTestCase_000002_2);

#define VkglTestCase_000003_1 "KHR-GLES3.shaders.declarations.declar"
#define VkglTestCase_000003_2 "ations.comma_preceding_variable_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000003, VkglTestCase_000003_1, VkglTestCase_000003_2);

#define VkglTestCase_000004_1 "KHR-GLES3.shaders.declarations.declara"
#define VkglTestCase_000004_2 "tions.comma_preceding_variable_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000004, VkglTestCase_000004_1, VkglTestCase_000004_2);

#define VkglTestCase_000005_1 "KHR-GLES3.shaders.declarations.declar"
#define VkglTestCase_000005_2 "ations.comma_following_variable_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000005, VkglTestCase_000005_1, VkglTestCase_000005_2);

#define VkglTestCase_000006_1 "KHR-GLES3.shaders.declarations.declara"
#define VkglTestCase_000006_2 "tions.comma_following_variable_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000006, VkglTestCase_000006_1, VkglTestCase_000006_2);

#define VkglTestCase_000007_1 "KHR-GLES3.shaders.declarations.declarati"
#define VkglTestCase_000007_2 "ons.struct_missing_attribute_name_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000007, VkglTestCase_000007_1, VkglTestCase_000007_2);

#define VkglTestCase_000008_1 "KHR-GLES3.shaders.declarations.declaratio"
#define VkglTestCase_000008_2 "ns.struct_missing_attribute_name_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000008, VkglTestCase_000008_1, VkglTestCase_000008_2);

#define VkglTestCase_000009_1 "KHR-GLES3.shaders.declarations.declaratio"
#define VkglTestCase_000009_2 "ns.struct_comma_preceding_attribute_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000009, VkglTestCase_000009_1, VkglTestCase_000009_2);

#define VkglTestCase_000010_1 "KHR-GLES3.shaders.declarations.declaration"
#define VkglTestCase_000010_2 "s.struct_comma_preceding_attribute_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000010, VkglTestCase_000010_1, VkglTestCase_000010_2);
