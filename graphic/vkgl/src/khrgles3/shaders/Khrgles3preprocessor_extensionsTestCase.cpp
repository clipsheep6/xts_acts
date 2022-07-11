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

#define VkglTestCase_001214_1 "KHR-GLES3.shaders.preproces"
#define VkglTestCase_001214_2 "sor.extensions.basic_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001214, VkglTestCase_001214_1, VkglTestCase_001214_2);

#define VkglTestCase_001215_1 "KHR-GLES3.shaders.preprocess"
#define VkglTestCase_001215_2 "or.extensions.basic_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001215, VkglTestCase_001215_1, VkglTestCase_001215_2);

#define VkglTestCase_001216_1 "KHR-GLES3.shaders.preprocesso"
#define VkglTestCase_001216_2 "r.extensions.macro_exp_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001216, VkglTestCase_001216_1, VkglTestCase_001216_2);

#define VkglTestCase_001217_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_001217_2 ".extensions.macro_exp_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001217, VkglTestCase_001217_1, VkglTestCase_001217_2);

#define VkglTestCase_001218_1 "KHR-GLES3.shaders.preprocessor.exte"
#define VkglTestCase_001218_2 "nsions.missing_extension_name_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001218, VkglTestCase_001218_1, VkglTestCase_001218_2);

#define VkglTestCase_001219_1 "KHR-GLES3.shaders.preprocessor.exten"
#define VkglTestCase_001219_2 "sions.missing_extension_name_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001219, VkglTestCase_001219_1, VkglTestCase_001219_2);

#define VkglTestCase_001220_1 "KHR-GLES3.shaders.preprocessor.exte"
#define VkglTestCase_001220_2 "nsions.invalid_extension_name_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001220, VkglTestCase_001220_1, VkglTestCase_001220_2);

#define VkglTestCase_001221_1 "KHR-GLES3.shaders.preprocessor.exten"
#define VkglTestCase_001221_2 "sions.invalid_extension_name_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001221, VkglTestCase_001221_1, VkglTestCase_001221_2);

#define VkglTestCase_001222_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001222_2 "extensions.missing_colon_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001222, VkglTestCase_001222_1, VkglTestCase_001222_2);

#define VkglTestCase_001223_1 "KHR-GLES3.shaders.preprocessor.e"
#define VkglTestCase_001223_2 "xtensions.missing_colon_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001223, VkglTestCase_001223_1, VkglTestCase_001223_2);

#define VkglTestCase_001224_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001224_2 "extensions.expected_colon_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001224, VkglTestCase_001224_1, VkglTestCase_001224_2);

#define VkglTestCase_001225_1 "KHR-GLES3.shaders.preprocessor.e"
#define VkglTestCase_001225_2 "xtensions.expected_colon_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001225, VkglTestCase_001225_1, VkglTestCase_001225_2);

#define VkglTestCase_001226_1 "KHR-GLES3.shaders.preprocessor.e"
#define VkglTestCase_001226_2 "xtensions.missing_behavior_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001226, VkglTestCase_001226_1, VkglTestCase_001226_2);

#define VkglTestCase_001227_1 "KHR-GLES3.shaders.preprocessor.ex"
#define VkglTestCase_001227_2 "tensions.missing_behavior_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001227, VkglTestCase_001227_1, VkglTestCase_001227_2);

#define VkglTestCase_001228_1 "KHR-GLES3.shaders.preprocessor.ex"
#define VkglTestCase_001228_2 "tensions.invalid_behavior_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001228, VkglTestCase_001228_1, VkglTestCase_001228_2);

#define VkglTestCase_001229_1 "KHR-GLES3.shaders.preprocessor.ext"
#define VkglTestCase_001229_2 "ensions.invalid_behavior_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001229, VkglTestCase_001229_1, VkglTestCase_001229_2);

#define VkglTestCase_001230_1 "KHR-GLES3.shaders.preprocessor.ex"
#define VkglTestCase_001230_2 "tensions.invalid_behavior_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001230, VkglTestCase_001230_1, VkglTestCase_001230_2);

#define VkglTestCase_001231_1 "KHR-GLES3.shaders.preprocessor.ext"
#define VkglTestCase_001231_2 "ensions.invalid_behavior_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001231, VkglTestCase_001231_1, VkglTestCase_001231_2);

#define VkglTestCase_001232_1 "KHR-GLES3.shaders.preprocessor.ex"
#define VkglTestCase_001232_2 "tensions.invalid_behavior_3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001232, VkglTestCase_001232_1, VkglTestCase_001232_2);

#define VkglTestCase_001233_1 "KHR-GLES3.shaders.preprocessor.ext"
#define VkglTestCase_001233_2 "ensions.invalid_behavior_3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001233, VkglTestCase_001233_1, VkglTestCase_001233_2);

#define VkglTestCase_001234_1 "KHR-GLES3.shaders.preprocessor.ext"
#define VkglTestCase_001234_2 "ensions.invalid_char_in_name_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001234, VkglTestCase_001234_1, VkglTestCase_001234_2);

#define VkglTestCase_001235_1 "KHR-GLES3.shaders.preprocessor.exte"
#define VkglTestCase_001235_2 "nsions.invalid_char_in_name_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001235, VkglTestCase_001235_1, VkglTestCase_001235_2);

#define VkglTestCase_001236_1 "KHR-GLES3.shaders.preprocessor.exten"
#define VkglTestCase_001236_2 "sions.invalid_char_in_behavior_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001236, VkglTestCase_001236_1, VkglTestCase_001236_2);

#define VkglTestCase_001237_1 "KHR-GLES3.shaders.preprocessor.extens"
#define VkglTestCase_001237_2 "ions.invalid_char_in_behavior_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001237, VkglTestCase_001237_1, VkglTestCase_001237_2);

#define VkglTestCase_001238_1 "KHR-GLES3.shaders.preprocessor.ext"
#define VkglTestCase_001238_2 "ensions.unterminated_comment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001238, VkglTestCase_001238_1, VkglTestCase_001238_2);

#define VkglTestCase_001239_1 "KHR-GLES3.shaders.preprocessor.exte"
#define VkglTestCase_001239_2 "nsions.unterminated_comment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001239, VkglTestCase_001239_1, VkglTestCase_001239_2);

#define VkglTestCase_001240_1 "KHR-GLES3.shaders.preprocessor.extensio"
#define VkglTestCase_001240_2 "ns.after_non_preprocessing_tokens_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001240, VkglTestCase_001240_1, VkglTestCase_001240_2);

#define VkglTestCase_001241_1 "KHR-GLES3.shaders.preprocessor.extension"
#define VkglTestCase_001241_2 "s.after_non_preprocessing_tokens_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001241, VkglTestCase_001241_1, VkglTestCase_001241_2);
