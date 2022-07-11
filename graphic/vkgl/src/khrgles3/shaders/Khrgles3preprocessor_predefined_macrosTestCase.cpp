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
#include "../ActsKhrgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001032_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001032_2 "predefined_macros.version_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001032, VkglTestCase_001032_1, VkglTestCase_001032_2);

#define VkglTestCase_001033_1 "KHR-GLES3.shaders.preprocessor.p"
#define VkglTestCase_001033_2 "redefined_macros.version_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001033, VkglTestCase_001033_1, VkglTestCase_001033_2);

#define VkglTestCase_001034_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001034_2 "predefined_macros.gl_es_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001034, VkglTestCase_001034_1, VkglTestCase_001034_2);

#define VkglTestCase_001035_1 "KHR-GLES3.shaders.preprocessor.p"
#define VkglTestCase_001035_2 "redefined_macros.gl_es_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001035, VkglTestCase_001035_1, VkglTestCase_001035_2);

#define VkglTestCase_001036_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001036_2 "predefined_macros.gl_es_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001036, VkglTestCase_001036_1, VkglTestCase_001036_2);

#define VkglTestCase_001037_1 "KHR-GLES3.shaders.preprocessor.p"
#define VkglTestCase_001037_2 "redefined_macros.gl_es_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001037, VkglTestCase_001037_1, VkglTestCase_001037_2);

#define VkglTestCase_001038_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001038_2 "predefined_macros.line_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001038, VkglTestCase_001038_1, VkglTestCase_001038_2);

#define VkglTestCase_001039_1 "KHR-GLES3.shaders.preprocessor.p"
#define VkglTestCase_001039_2 "redefined_macros.line_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001039, VkglTestCase_001039_1, VkglTestCase_001039_2);

#define VkglTestCase_001040_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_001040_2 ".predefined_macros.file_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001040, VkglTestCase_001040_1, VkglTestCase_001040_2);

#define VkglTestCase_001041_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001041_2 "predefined_macros.file_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001041, VkglTestCase_001041_1, VkglTestCase_001041_2);

#define VkglTestCase_001042_1 "KHR-GLES3.shaders.preprocessor.p"
#define VkglTestCase_001042_2 "redefined_macros.if_gl_es_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001042, VkglTestCase_001042_1, VkglTestCase_001042_2);

#define VkglTestCase_001043_1 "KHR-GLES3.shaders.preprocessor.pr"
#define VkglTestCase_001043_2 "edefined_macros.if_gl_es_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001043, VkglTestCase_001043_1, VkglTestCase_001043_2);

#define VkglTestCase_001044_1 "KHR-GLES3.shaders.preprocessor.pr"
#define VkglTestCase_001044_2 "edefined_macros.if_version_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001044, VkglTestCase_001044_1, VkglTestCase_001044_2);

#define VkglTestCase_001045_1 "KHR-GLES3.shaders.preprocessor.pre"
#define VkglTestCase_001045_2 "defined_macros.if_version_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001045, VkglTestCase_001045_1, VkglTestCase_001045_2);

#define VkglTestCase_001046_1 "KHR-GLES3.shaders.preprocessor.predefi"
#define VkglTestCase_001046_2 "ned_macros.invalid_token_pasting_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001046, VkglTestCase_001046_1, VkglTestCase_001046_2);

#define VkglTestCase_001047_1 "KHR-GLES3.shaders.preprocessor.predefin"
#define VkglTestCase_001047_2 "ed_macros.invalid_token_pasting_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001047, VkglTestCase_001047_1, VkglTestCase_001047_2);
