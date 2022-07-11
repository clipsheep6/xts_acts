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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002156_1 "KHR-GLES31.core.program_in"
#define VkglTestCase_002156_2 "terface_query.empty-shaders"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002156, VkglTestCase_002156_1, VkglTestCase_002156_2);

#define VkglTestCase_002157_1 "KHR-GLES31.core.program_int"
#define VkglTestCase_002157_2 "erface_query.simple-shaders"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002157, VkglTestCase_002157_1, VkglTestCase_002157_2);

#define VkglTestCase_002158_1 "KHR-GLES31.core.program_i"
#define VkglTestCase_002158_2 "nterface_query.input-types"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002158, VkglTestCase_002158_1, VkglTestCase_002158_2);

#define VkglTestCase_002159_1 "KHR-GLES31.core.program_int"
#define VkglTestCase_002159_2 "erface_query.input-built-in"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002159, VkglTestCase_002159_1, VkglTestCase_002159_2);

#define VkglTestCase_002160_1 "KHR-GLES31.core.program_in"
#define VkglTestCase_002160_2 "terface_query.input-layout"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002160, VkglTestCase_002160_1, VkglTestCase_002160_2);

#define VkglTestCase_002161_1 "KHR-GLES31.core.program_in"
#define VkglTestCase_002161_2 "terface_query.output-layout"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002161, VkglTestCase_002161_1, VkglTestCase_002161_2);

#define VkglTestCase_002162_1 "KHR-GLES31.core.program_int"
#define VkglTestCase_002162_2 "erface_query.output-built-in"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002162, VkglTestCase_002162_1, VkglTestCase_002162_2);

#define VkglTestCase_002163_1 "KHR-GLES31.core.program_int"
#define VkglTestCase_002163_2 "erface_query.uniform-simple"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002163, VkglTestCase_002163_1, VkglTestCase_002163_2);

#define VkglTestCase_002164_1 "KHR-GLES31.core.program_in"
#define VkglTestCase_002164_2 "terface_query.uniform-types"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002164, VkglTestCase_002164_1, VkglTestCase_002164_2);

#define VkglTestCase_002165_1 "KHR-GLES31.core.program_inter"
#define VkglTestCase_002165_2 "face_query.uniform-block-types"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002165, VkglTestCase_002165_1, VkglTestCase_002165_2);

#define VkglTestCase_002166_1 "KHR-GLES31.core.program_inter"
#define VkglTestCase_002166_2 "face_query.uniform-block-array"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002166, VkglTestCase_002166_1, VkglTestCase_002166_2);

#define VkglTestCase_002167_1 "KHR-GLES31.core.program_interfac"
#define VkglTestCase_002167_2 "e_query.transform-feedback-types"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002167, VkglTestCase_002167_1, VkglTestCase_002167_2);

#define VkglTestCase_002168_1 "KHR-GLES31.core.program_interface_query.t"
#define VkglTestCase_002168_2 "ransform-feedback-types-full-array-capture"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002168, VkglTestCase_002168_1, VkglTestCase_002168_2);

#define VkglTestCase_002169_1 "KHR-GLES31.core.program_int"
#define VkglTestCase_002169_2 "erface_query.atomic-counters"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002169, VkglTestCase_002169_1, VkglTestCase_002169_2);

#define VkglTestCase_002170_1 "KHR-GLES31.core.program_interface"
#define VkglTestCase_002170_2 "_query.atomic-counters-one-buffer"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002170, VkglTestCase_002170_1, VkglTestCase_002170_2);

#define VkglTestCase_002171_1 "KHR-GLES31.core.program_"
#define VkglTestCase_002171_2 "interface_query.ssb-types"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002171, VkglTestCase_002171_1, VkglTestCase_002171_2);

#define VkglTestCase_002172_1 "KHR-GLES31.core.program_i"
#define VkglTestCase_002172_2 "nterface_query.null-length"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002172, VkglTestCase_002172_1, VkglTestCase_002172_2);

#define VkglTestCase_002173_1 "KHR-GLES31.core.program_inte"
#define VkglTestCase_002173_2 "rface_query.arrays-of-arrays"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002173, VkglTestCase_002173_1, VkglTestCase_002173_2);

#define VkglTestCase_002174_1 "KHR-GLES31.core.program_int"
#define VkglTestCase_002174_2 "erface_query.top-level-array"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002174, VkglTestCase_002174_1, VkglTestCase_002174_2);

#define VkglTestCase_002175_1 "KHR-GLES31.core.program_interfac"
#define VkglTestCase_002175_2 "e_query.separate-programs-vertex"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002175, VkglTestCase_002175_1, VkglTestCase_002175_2);

#define VkglTestCase_002176_1 "KHR-GLES31.core.program_interface"
#define VkglTestCase_002176_2 "_query.separate-programs-fragment"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002176, VkglTestCase_002176_1, VkglTestCase_002176_2);

#define VkglTestCase_002177_1 "KHR-GLES31.core.program_in"
#define VkglTestCase_002177_2 "terface_query.uniform-block"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002177, VkglTestCase_002177_1, VkglTestCase_002177_2);

#define VkglTestCase_002178_1 "KHR-GLES31.core.program_i"
#define VkglTestCase_002178_2 "nterface_query.array-names"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002178, VkglTestCase_002178_1, VkglTestCase_002178_2);

#define VkglTestCase_002179_1 "KHR-GLES31.core.program_i"
#define VkglTestCase_002179_2 "nterface_query.buff-length"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002179, VkglTestCase_002179_1, VkglTestCase_002179_2);

#define VkglTestCase_002180_1 "KHR-GLES31.core.program_in"
#define VkglTestCase_002180_2 "terface_query.no-locations"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002180, VkglTestCase_002180_1, VkglTestCase_002180_2);

#define VkglTestCase_002181_1 "KHR-GLES31.core.program_int"
#define VkglTestCase_002181_2 "erface_query.query-not-used"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002181, VkglTestCase_002181_1, VkglTestCase_002181_2);

#define VkglTestCase_002182_1 "KHR-GLES31.core.program_int"
#define VkglTestCase_002182_2 "erface_query.relink-failure"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002182, VkglTestCase_002182_1, VkglTestCase_002182_2);

#define VkglTestCase_002183_1 "KHR-GLES31.core.program_in"
#define VkglTestCase_002183_2 "terface_query.link-failure"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002183, VkglTestCase_002183_1, VkglTestCase_002183_2);

#define VkglTestCase_002184_1 "KHR-GLES31.core.program_int"
#define VkglTestCase_002184_2 "erface_query.compute-shader"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002184, VkglTestCase_002184_1, VkglTestCase_002184_2);

#define VkglTestCase_002185_1 "KHR-GLES31.core.program_in"
#define VkglTestCase_002185_2 "terface_query.invalid-value"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002185, VkglTestCase_002185_1, VkglTestCase_002185_2);

#define VkglTestCase_002186_1 "KHR-GLES31.core.program_inte"
#define VkglTestCase_002186_2 "rface_query.invalid-operation"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002186, VkglTestCase_002186_1, VkglTestCase_002186_2);

#define VkglTestCase_002187_1 "KHR-GLES31.core.program_in"
#define VkglTestCase_002187_2 "terface_query.invalid-enum"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002187, VkglTestCase_002187_1, VkglTestCase_002187_2);
