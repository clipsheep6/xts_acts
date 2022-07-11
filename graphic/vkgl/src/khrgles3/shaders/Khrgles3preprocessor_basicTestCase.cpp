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

#define VkglTestCase_000878_1 "KHR-GLES3.shaders.preprocesso"
#define VkglTestCase_000878_2 "r.basic.correct_phases_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000878, VkglTestCase_000878_1, VkglTestCase_000878_2);

#define VkglTestCase_000879_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_000879_2 ".basic.correct_phases_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000879, VkglTestCase_000879_1, VkglTestCase_000879_2);

#define VkglTestCase_000880_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_000880_2 "basic.invalid_identifier_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000880, VkglTestCase_000880_1, VkglTestCase_000880_2);

#define VkglTestCase_000881_1 "KHR-GLES3.shaders.preprocessor.b"
#define VkglTestCase_000881_2 "asic.invalid_identifier_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000881, VkglTestCase_000881_1, VkglTestCase_000881_2);

#define VkglTestCase_000882_1 "KHR-GLES3.shaders.preprocesso"
#define VkglTestCase_000882_2 "r.basic.null_directive_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000882, VkglTestCase_000882_1, VkglTestCase_000882_2);

#define VkglTestCase_000883_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_000883_2 ".basic.null_directive_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000883, VkglTestCase_000883_1, VkglTestCase_000883_2);

#define VkglTestCase_000884_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_000884_2 ".basic.invalid_directive_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000884, VkglTestCase_000884_1, VkglTestCase_000884_2);

#define VkglTestCase_000885_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_000885_2 "basic.invalid_directive_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000885, VkglTestCase_000885_1, VkglTestCase_000885_2);

#define VkglTestCase_000886_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_000886_2 "basic.missing_identifier_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000886, VkglTestCase_000886_1, VkglTestCase_000886_2);

#define VkglTestCase_000887_1 "KHR-GLES3.shaders.preprocessor.b"
#define VkglTestCase_000887_2 "asic.missing_identifier_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000887, VkglTestCase_000887_1, VkglTestCase_000887_2);

#define VkglTestCase_000888_1 "KHR-GLES3.shaders.preprocess"
#define VkglTestCase_000888_2 "or.basic.empty_object_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000888, VkglTestCase_000888_1, VkglTestCase_000888_2);

#define VkglTestCase_000889_1 "KHR-GLES3.shaders.preprocesso"
#define VkglTestCase_000889_2 "r.basic.empty_object_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000889, VkglTestCase_000889_1, VkglTestCase_000889_2);

#define VkglTestCase_000890_1 "KHR-GLES3.shaders.preprocesso"
#define VkglTestCase_000890_2 "r.basic.empty_function_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000890, VkglTestCase_000890_1, VkglTestCase_000890_2);

#define VkglTestCase_000891_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_000891_2 ".basic.empty_function_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000891, VkglTestCase_000891_1, VkglTestCase_000891_2);

#define VkglTestCase_000892_1 "KHR-GLES3.shaders.preprocesso"
#define VkglTestCase_000892_2 "r.basic.empty_directive_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000892, VkglTestCase_000892_1, VkglTestCase_000892_2);

#define VkglTestCase_000893_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_000893_2 ".basic.empty_directive_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000893, VkglTestCase_000893_1, VkglTestCase_000893_2);
