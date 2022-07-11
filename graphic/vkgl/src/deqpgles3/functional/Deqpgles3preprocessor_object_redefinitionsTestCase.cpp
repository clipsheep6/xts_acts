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
#include "../ActsDeqpgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000822_1 "dEQP-GLES3.functional.shaders.preprocessor.ob"
#define VkglTestCase_000822_2 "ject_redefinitions.invalid_object_ident_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000822, VkglTestCase_000822_1, VkglTestCase_000822_2);

#define VkglTestCase_000823_1 "dEQP-GLES3.functional.shaders.preprocessor.obj"
#define VkglTestCase_000823_2 "ect_redefinitions.invalid_object_ident_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000823, VkglTestCase_000823_1, VkglTestCase_000823_2);

#define VkglTestCase_000824_1 "dEQP-GLES3.functional.shaders.preprocessor.objec"
#define VkglTestCase_000824_2 "t_redefinitions.invalid_object_whitespace_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000824, VkglTestCase_000824_1, VkglTestCase_000824_2);

#define VkglTestCase_000825_1 "dEQP-GLES3.functional.shaders.preprocessor.object"
#define VkglTestCase_000825_2 "_redefinitions.invalid_object_whitespace_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000825, VkglTestCase_000825_1, VkglTestCase_000825_2);

#define VkglTestCase_000826_1 "dEQP-GLES3.functional.shaders.preprocessor.o"
#define VkglTestCase_000826_2 "bject_redefinitions.invalid_object_op_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000826, VkglTestCase_000826_1, VkglTestCase_000826_2);

#define VkglTestCase_000827_1 "dEQP-GLES3.functional.shaders.preprocessor.ob"
#define VkglTestCase_000827_2 "ject_redefinitions.invalid_object_op_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000827, VkglTestCase_000827_1, VkglTestCase_000827_2);

#define VkglTestCase_000828_1 "dEQP-GLES3.functional.shaders.preprocessor.objec"
#define VkglTestCase_000828_2 "t_redefinitions.invalid_object_floatval_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000828, VkglTestCase_000828_1, VkglTestCase_000828_2);

#define VkglTestCase_000829_1 "dEQP-GLES3.functional.shaders.preprocessor.object"
#define VkglTestCase_000829_2 "_redefinitions.invalid_object_floatval_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000829, VkglTestCase_000829_1, VkglTestCase_000829_2);

#define VkglTestCase_000830_1 "dEQP-GLES3.functional.shaders.preprocessor.objec"
#define VkglTestCase_000830_2 "t_redefinitions.invalid_object_floatval_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000830, VkglTestCase_000830_1, VkglTestCase_000830_2);

#define VkglTestCase_000831_1 "dEQP-GLES3.functional.shaders.preprocessor.object"
#define VkglTestCase_000831_2 "_redefinitions.invalid_object_floatval_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000831, VkglTestCase_000831_1, VkglTestCase_000831_2);

#define VkglTestCase_000832_1 "dEQP-GLES3.functional.shaders.preprocessor.obje"
#define VkglTestCase_000832_2 "ct_redefinitions.invalid_object_intval_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000832, VkglTestCase_000832_1, VkglTestCase_000832_2);

#define VkglTestCase_000833_1 "dEQP-GLES3.functional.shaders.preprocessor.objec"
#define VkglTestCase_000833_2 "t_redefinitions.invalid_object_intval_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000833, VkglTestCase_000833_1, VkglTestCase_000833_2);

#define VkglTestCase_000834_1 "dEQP-GLES3.functional.shaders.preprocessor.obje"
#define VkglTestCase_000834_2 "ct_redefinitions.invalid_object_intval_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000834, VkglTestCase_000834_1, VkglTestCase_000834_2);

#define VkglTestCase_000835_1 "dEQP-GLES3.functional.shaders.preprocessor.objec"
#define VkglTestCase_000835_2 "t_redefinitions.invalid_object_intval_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000835, VkglTestCase_000835_1, VkglTestCase_000835_2);

#define VkglTestCase_000836_1 "dEQP-GLES3.functional.shaders.preprocessor.o"
#define VkglTestCase_000836_2 "bject_redefinitions.redefine_object_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000836, VkglTestCase_000836_1, VkglTestCase_000836_2);

#define VkglTestCase_000837_1 "dEQP-GLES3.functional.shaders.preprocessor.ob"
#define VkglTestCase_000837_2 "ject_redefinitions.redefine_object_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000837, VkglTestCase_000837_1, VkglTestCase_000837_2);

#define VkglTestCase_000838_1 "dEQP-GLES3.functional.shaders.preprocessor.obj"
#define VkglTestCase_000838_2 "ect_redefinitions.redefine_object_ifdef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000838, VkglTestCase_000838_1, VkglTestCase_000838_2);

#define VkglTestCase_000839_1 "dEQP-GLES3.functional.shaders.preprocessor.obje"
#define VkglTestCase_000839_2 "ct_redefinitions.redefine_object_ifdef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000839, VkglTestCase_000839_1, VkglTestCase_000839_2);

#define VkglTestCase_000840_1 "dEQP-GLES3.functional.shaders.preprocessor.object"
#define VkglTestCase_000840_2 "_redefinitions.redefine_object_undef_ifdef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000840, VkglTestCase_000840_1, VkglTestCase_000840_2);

#define VkglTestCase_000841_1 "dEQP-GLES3.functional.shaders.preprocessor.object_"
#define VkglTestCase_000841_2 "redefinitions.redefine_object_undef_ifdef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000841, VkglTestCase_000841_1, VkglTestCase_000841_2);

#define VkglTestCase_000842_1 "dEQP-GLES3.functional.shaders.preprocessor.obj"
#define VkglTestCase_000842_2 "ect_redefinitions.redefine_object_ifndef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000842, VkglTestCase_000842_1, VkglTestCase_000842_2);

#define VkglTestCase_000843_1 "dEQP-GLES3.functional.shaders.preprocessor.obje"
#define VkglTestCase_000843_2 "ct_redefinitions.redefine_object_ifndef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000843, VkglTestCase_000843_1, VkglTestCase_000843_2);

#define VkglTestCase_000844_1 "dEQP-GLES3.functional.shaders.preprocessor.objec"
#define VkglTestCase_000844_2 "t_redefinitions.redefine_object_defined_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000844, VkglTestCase_000844_1, VkglTestCase_000844_2);

#define VkglTestCase_000845_1 "dEQP-GLES3.functional.shaders.preprocessor.object"
#define VkglTestCase_000845_2 "_redefinitions.redefine_object_defined_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000845, VkglTestCase_000845_1, VkglTestCase_000845_2);

#define VkglTestCase_000846_1 "dEQP-GLES3.functional.shaders.preprocessor.objec"
#define VkglTestCase_000846_2 "t_redefinitions.redefine_object_defined_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000846, VkglTestCase_000846_1, VkglTestCase_000846_2);

#define VkglTestCase_000847_1 "dEQP-GLES3.functional.shaders.preprocessor.object"
#define VkglTestCase_000847_2 "_redefinitions.redefine_object_defined_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000847, VkglTestCase_000847_1, VkglTestCase_000847_2);

#define VkglTestCase_000848_1 "dEQP-GLES3.functional.shaders.preprocessor.obje"
#define VkglTestCase_000848_2 "ct_redefinitions.redefine_object_comment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000848, VkglTestCase_000848_1, VkglTestCase_000848_2);

#define VkglTestCase_000849_1 "dEQP-GLES3.functional.shaders.preprocessor.objec"
#define VkglTestCase_000849_2 "t_redefinitions.redefine_object_comment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000849, VkglTestCase_000849_1, VkglTestCase_000849_2);

#define VkglTestCase_000850_1 "dEQP-GLES3.functional.shaders.preprocessor.object_re"
#define VkglTestCase_000850_2 "definitions.redefine_object_multiline_comment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000850, VkglTestCase_000850_1, VkglTestCase_000850_2);

#define VkglTestCase_000851_1 "dEQP-GLES3.functional.shaders.preprocessor.object_red"
#define VkglTestCase_000851_2 "efinitions.redefine_object_multiline_comment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000851, VkglTestCase_000851_1, VkglTestCase_000851_2);
