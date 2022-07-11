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

#define VkglTestCase_001078_1 "KHR-GLES3.shaders.preprocessor.undefined_ide"
#define VkglTestCase_001078_2 "ntifiers.valid_undefined_identifier_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001078, VkglTestCase_001078_1, VkglTestCase_001078_2);

#define VkglTestCase_001079_1 "KHR-GLES3.shaders.preprocessor.undefined_iden"
#define VkglTestCase_001079_2 "tifiers.valid_undefined_identifier_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001079, VkglTestCase_001079_1, VkglTestCase_001079_2);

#define VkglTestCase_001080_1 "KHR-GLES3.shaders.preprocessor.undefined_ide"
#define VkglTestCase_001080_2 "ntifiers.valid_undefined_identifier_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001080, VkglTestCase_001080_1, VkglTestCase_001080_2);

#define VkglTestCase_001081_1 "KHR-GLES3.shaders.preprocessor.undefined_iden"
#define VkglTestCase_001081_2 "tifiers.valid_undefined_identifier_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001081, VkglTestCase_001081_1, VkglTestCase_001081_2);

#define VkglTestCase_001082_1 "KHR-GLES3.shaders.preprocessor.undefined_"
#define VkglTestCase_001082_2 "identifiers.undefined_identifier_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001082, VkglTestCase_001082_1, VkglTestCase_001082_2);

#define VkglTestCase_001083_1 "KHR-GLES3.shaders.preprocessor.undefined_i"
#define VkglTestCase_001083_2 "dentifiers.undefined_identifier_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001083, VkglTestCase_001083_1, VkglTestCase_001083_2);

#define VkglTestCase_001084_1 "KHR-GLES3.shaders.preprocessor.undefined_"
#define VkglTestCase_001084_2 "identifiers.undefined_identifier_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001084, VkglTestCase_001084_1, VkglTestCase_001084_2);

#define VkglTestCase_001085_1 "KHR-GLES3.shaders.preprocessor.undefined_i"
#define VkglTestCase_001085_2 "dentifiers.undefined_identifier_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001085, VkglTestCase_001085_1, VkglTestCase_001085_2);

#define VkglTestCase_001086_1 "KHR-GLES3.shaders.preprocessor.undefined_"
#define VkglTestCase_001086_2 "identifiers.undefined_identifier_3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001086, VkglTestCase_001086_1, VkglTestCase_001086_2);

#define VkglTestCase_001087_1 "KHR-GLES3.shaders.preprocessor.undefined_i"
#define VkglTestCase_001087_2 "dentifiers.undefined_identifier_3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001087, VkglTestCase_001087_1, VkglTestCase_001087_2);

#define VkglTestCase_001088_1 "KHR-GLES3.shaders.preprocessor.undefined_"
#define VkglTestCase_001088_2 "identifiers.undefined_identifier_4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001088, VkglTestCase_001088_1, VkglTestCase_001088_2);

#define VkglTestCase_001089_1 "KHR-GLES3.shaders.preprocessor.undefined_i"
#define VkglTestCase_001089_2 "dentifiers.undefined_identifier_4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001089, VkglTestCase_001089_1, VkglTestCase_001089_2);

#define VkglTestCase_001090_1 "KHR-GLES3.shaders.preprocessor.undefined_"
#define VkglTestCase_001090_2 "identifiers.undefined_identifier_5_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001090, VkglTestCase_001090_1, VkglTestCase_001090_2);

#define VkglTestCase_001091_1 "KHR-GLES3.shaders.preprocessor.undefined_i"
#define VkglTestCase_001091_2 "dentifiers.undefined_identifier_5_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001091, VkglTestCase_001091_1, VkglTestCase_001091_2);

#define VkglTestCase_001092_1 "KHR-GLES3.shaders.preprocessor.undefined_"
#define VkglTestCase_001092_2 "identifiers.undefined_identifier_6_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001092, VkglTestCase_001092_1, VkglTestCase_001092_2);

#define VkglTestCase_001093_1 "KHR-GLES3.shaders.preprocessor.undefined_i"
#define VkglTestCase_001093_2 "dentifiers.undefined_identifier_6_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001093, VkglTestCase_001093_1, VkglTestCase_001093_2);

#define VkglTestCase_001094_1 "KHR-GLES3.shaders.preprocessor.undefined_"
#define VkglTestCase_001094_2 "identifiers.undefined_identifier_7_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001094, VkglTestCase_001094_1, VkglTestCase_001094_2);

#define VkglTestCase_001095_1 "KHR-GLES3.shaders.preprocessor.undefined_i"
#define VkglTestCase_001095_2 "dentifiers.undefined_identifier_7_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001095, VkglTestCase_001095_1, VkglTestCase_001095_2);

#define VkglTestCase_001096_1 "KHR-GLES3.shaders.preprocessor.undefined_"
#define VkglTestCase_001096_2 "identifiers.undefined_identifier_8_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001096, VkglTestCase_001096_1, VkglTestCase_001096_2);

#define VkglTestCase_001097_1 "KHR-GLES3.shaders.preprocessor.undefined_i"
#define VkglTestCase_001097_2 "dentifiers.undefined_identifier_8_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001097, VkglTestCase_001097_1, VkglTestCase_001097_2);

#define VkglTestCase_001098_1 "KHR-GLES3.shaders.preprocessor.undefined_"
#define VkglTestCase_001098_2 "identifiers.undefined_identifier_9_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001098, VkglTestCase_001098_1, VkglTestCase_001098_2);

#define VkglTestCase_001099_1 "KHR-GLES3.shaders.preprocessor.undefined_i"
#define VkglTestCase_001099_2 "dentifiers.undefined_identifier_9_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001099, VkglTestCase_001099_1, VkglTestCase_001099_2);

#define VkglTestCase_001100_1 "KHR-GLES3.shaders.preprocessor.undefined_"
#define VkglTestCase_001100_2 "identifiers.undefined_identifier_10_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001100, VkglTestCase_001100_1, VkglTestCase_001100_2);

#define VkglTestCase_001101_1 "KHR-GLES3.shaders.preprocessor.undefined_i"
#define VkglTestCase_001101_2 "dentifiers.undefined_identifier_10_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001101, VkglTestCase_001101_1, VkglTestCase_001101_2);

#define VkglTestCase_001102_1 "KHR-GLES3.shaders.preprocessor.undefined_"
#define VkglTestCase_001102_2 "identifiers.undefined_identifier_11_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001102, VkglTestCase_001102_1, VkglTestCase_001102_2);

#define VkglTestCase_001103_1 "KHR-GLES3.shaders.preprocessor.undefined_i"
#define VkglTestCase_001103_2 "dentifiers.undefined_identifier_11_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001103, VkglTestCase_001103_1, VkglTestCase_001103_2);

#define VkglTestCase_001104_1 "KHR-GLES3.shaders.preprocessor.undefined_"
#define VkglTestCase_001104_2 "identifiers.undefined_identifier_12_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001104, VkglTestCase_001104_1, VkglTestCase_001104_2);

#define VkglTestCase_001105_1 "KHR-GLES3.shaders.preprocessor.undefined_i"
#define VkglTestCase_001105_2 "dentifiers.undefined_identifier_12_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001105, VkglTestCase_001105_1, VkglTestCase_001105_2);
