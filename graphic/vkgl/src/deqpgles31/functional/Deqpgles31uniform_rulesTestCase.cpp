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

#define VkglTestCase_004493_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004493_2 "31.geometry.uniform.rules.type_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004493, VkglTestCase_004493_1, VkglTestCase_004493_2);

#define VkglTestCase_004494_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004494_2 "31.geometry.uniform.rules.type_mismatch_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004494, VkglTestCase_004494_1, VkglTestCase_004494_2);

#define VkglTestCase_004495_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004495_2 "31.geometry.uniform.rules.type_mismatch_3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004495, VkglTestCase_004495_1, VkglTestCase_004495_2);

#define VkglTestCase_004496_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004496_2 "1.geometry.uniform.rules.precision_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004496, VkglTestCase_004496_1, VkglTestCase_004496_2);

#define VkglTestCase_004497_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004497_2 ".geometry.uniform.rules.struct_partial_usage"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004497, VkglTestCase_004497_1, VkglTestCase_004497_2);

#define VkglTestCase_004580_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004580_2 ".tessellation.uniform.rules.type_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004580, VkglTestCase_004580_1, VkglTestCase_004580_2);

#define VkglTestCase_004581_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004581_2 ".tessellation.uniform.rules.type_mismatch_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004581, VkglTestCase_004581_1, VkglTestCase_004581_2);

#define VkglTestCase_004582_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004582_2 ".tessellation.uniform.rules.type_mismatch_3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004582, VkglTestCase_004582_1, VkglTestCase_004582_2);

#define VkglTestCase_004583_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004583_2 ".tessellation.uniform.rules.type_mismatch_4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004583, VkglTestCase_004583_1, VkglTestCase_004583_2);

#define VkglTestCase_004584_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004584_2 ".tessellation.uniform.rules.type_mismatch_5"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004584, VkglTestCase_004584_1, VkglTestCase_004584_2);

#define VkglTestCase_004585_1 "dEQP-GLES31.functional.shaders.linkage.es31.t"
#define VkglTestCase_004585_2 "essellation.uniform.rules.precision_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004585, VkglTestCase_004585_1, VkglTestCase_004585_2);

#define VkglTestCase_004586_1 "dEQP-GLES31.functional.shaders.linkage.es31.t"
#define VkglTestCase_004586_2 "essellation.uniform.rules.precision_mismatch_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004586, VkglTestCase_004586_1, VkglTestCase_004586_2);

#define VkglTestCase_004587_1 "dEQP-GLES31.functional.shaders.linkage.es31.t"
#define VkglTestCase_004587_2 "essellation.uniform.rules.struct_partial_usage"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004587, VkglTestCase_004587_1, VkglTestCase_004587_2);

#define VkglTestCase_004647_1 "dEQP-GLES31.functional.shaders.linkage.es31.tes"
#define VkglTestCase_004647_2 "sellation_geometry.uniform.rules.type_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004647, VkglTestCase_004647_1, VkglTestCase_004647_2);

#define VkglTestCase_004648_1 "dEQP-GLES31.functional.shaders.linkage.es31.tessel"
#define VkglTestCase_004648_2 "lation_geometry.uniform.rules.precision_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004648, VkglTestCase_004648_1, VkglTestCase_004648_2);

#define VkglTestCase_004649_1 "dEQP-GLES31.functional.shaders.linkage.es31.tessel"
#define VkglTestCase_004649_2 "lation_geometry.uniform.rules.struct_partial_usage"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004649, VkglTestCase_004649_1, VkglTestCase_004649_2);

#define VkglTestCase_004764_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004764_2 "32.geometry.uniform.rules.type_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004764, VkglTestCase_004764_1, VkglTestCase_004764_2);

#define VkglTestCase_004765_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004765_2 "32.geometry.uniform.rules.type_mismatch_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004765, VkglTestCase_004765_1, VkglTestCase_004765_2);

#define VkglTestCase_004766_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004766_2 "32.geometry.uniform.rules.type_mismatch_3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004766, VkglTestCase_004766_1, VkglTestCase_004766_2);

#define VkglTestCase_004767_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004767_2 "2.geometry.uniform.rules.precision_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004767, VkglTestCase_004767_1, VkglTestCase_004767_2);

#define VkglTestCase_004768_1 "dEQP-GLES31.functional.shaders.linkage.es32"
#define VkglTestCase_004768_2 ".geometry.uniform.rules.struct_partial_usage"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004768, VkglTestCase_004768_1, VkglTestCase_004768_2);

#define VkglTestCase_004846_1 "dEQP-GLES31.functional.shaders.linkage.es32"
#define VkglTestCase_004846_2 ".tessellation.uniform.rules.type_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004846, VkglTestCase_004846_1, VkglTestCase_004846_2);

#define VkglTestCase_004847_1 "dEQP-GLES31.functional.shaders.linkage.es32"
#define VkglTestCase_004847_2 ".tessellation.uniform.rules.type_mismatch_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004847, VkglTestCase_004847_1, VkglTestCase_004847_2);

#define VkglTestCase_004848_1 "dEQP-GLES31.functional.shaders.linkage.es32"
#define VkglTestCase_004848_2 ".tessellation.uniform.rules.type_mismatch_3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004848, VkglTestCase_004848_1, VkglTestCase_004848_2);

#define VkglTestCase_004849_1 "dEQP-GLES31.functional.shaders.linkage.es32"
#define VkglTestCase_004849_2 ".tessellation.uniform.rules.type_mismatch_4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004849, VkglTestCase_004849_1, VkglTestCase_004849_2);

#define VkglTestCase_004850_1 "dEQP-GLES31.functional.shaders.linkage.es32"
#define VkglTestCase_004850_2 ".tessellation.uniform.rules.type_mismatch_5"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004850, VkglTestCase_004850_1, VkglTestCase_004850_2);

#define VkglTestCase_004851_1 "dEQP-GLES31.functional.shaders.linkage.es32.t"
#define VkglTestCase_004851_2 "essellation.uniform.rules.precision_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004851, VkglTestCase_004851_1, VkglTestCase_004851_2);

#define VkglTestCase_004852_1 "dEQP-GLES31.functional.shaders.linkage.es32.t"
#define VkglTestCase_004852_2 "essellation.uniform.rules.precision_mismatch_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004852, VkglTestCase_004852_1, VkglTestCase_004852_2);

#define VkglTestCase_004853_1 "dEQP-GLES31.functional.shaders.linkage.es32.t"
#define VkglTestCase_004853_2 "essellation.uniform.rules.struct_partial_usage"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004853, VkglTestCase_004853_1, VkglTestCase_004853_2);

#define VkglTestCase_004907_1 "dEQP-GLES31.functional.shaders.linkage.es32.tes"
#define VkglTestCase_004907_2 "sellation_geometry.uniform.rules.type_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004907, VkglTestCase_004907_1, VkglTestCase_004907_2);

#define VkglTestCase_004908_1 "dEQP-GLES31.functional.shaders.linkage.es32.tessel"
#define VkglTestCase_004908_2 "lation_geometry.uniform.rules.precision_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004908, VkglTestCase_004908_1, VkglTestCase_004908_2);

#define VkglTestCase_004909_1 "dEQP-GLES31.functional.shaders.linkage.es32.tessel"
#define VkglTestCase_004909_2 "lation_geometry.uniform.rules.struct_partial_usage"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004909, VkglTestCase_004909_1, VkglTestCase_004909_2);
