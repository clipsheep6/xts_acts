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
#include "../ActsDeqpgles310005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004110_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31.single_statement"
#define VkglTestCase_004110_2 "_multiple_declarations.implicit_constructor.float_2_dimensions_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004110, VkglTestCase_004110_1, VkglTestCase_004110_2);

#define VkglTestCase_004111_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31.single_statement_"
#define VkglTestCase_004111_2 "multiple_declarations.implicit_constructor.float_2_dimensions_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004111, VkglTestCase_004111_1, VkglTestCase_004111_2);

#define VkglTestCase_004112_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31.single_statemen"
#define VkglTestCase_004112_2 "t_multiple_declarations.implicit_constructor.int_3_dimensions_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004112, VkglTestCase_004112_1, VkglTestCase_004112_2);

#define VkglTestCase_004113_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31.single_statement"
#define VkglTestCase_004113_2 "_multiple_declarations.implicit_constructor.int_3_dimensions_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004113, VkglTestCase_004113_1, VkglTestCase_004113_2);

#define VkglTestCase_004402_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32.single_statement"
#define VkglTestCase_004402_2 "_multiple_declarations.implicit_constructor.float_2_dimensions_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004402, VkglTestCase_004402_1, VkglTestCase_004402_2);

#define VkglTestCase_004403_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32.single_statement_"
#define VkglTestCase_004403_2 "multiple_declarations.implicit_constructor.float_2_dimensions_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004403, VkglTestCase_004403_1, VkglTestCase_004403_2);

#define VkglTestCase_004404_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32.single_statemen"
#define VkglTestCase_004404_2 "t_multiple_declarations.implicit_constructor.int_3_dimensions_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004404, VkglTestCase_004404_1, VkglTestCase_004404_2);

#define VkglTestCase_004405_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32.single_statement"
#define VkglTestCase_004405_2 "_multiple_declarations.implicit_constructor.int_3_dimensions_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004405, VkglTestCase_004405_1, VkglTestCase_004405_2);
