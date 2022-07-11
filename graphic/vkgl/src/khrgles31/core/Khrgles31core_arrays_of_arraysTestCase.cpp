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

#define VkglTestCase_002190_1 "KHR-GLES31.core.arrays_of_arr"
#define VkglTestCase_002190_2 "ays.SizedDeclarationsPrimitive"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002190, VkglTestCase_002190_1, VkglTestCase_002190_2);

#define VkglTestCase_002191_1 "KHR-GLES31.core.arrays_of_array"
#define VkglTestCase_002191_2 "s.SizedDeclarationsStructTypes1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002191, VkglTestCase_002191_1, VkglTestCase_002191_2);

#define VkglTestCase_002192_1 "KHR-GLES31.core.arrays_of_array"
#define VkglTestCase_002192_2 "s.SizedDeclarationsStructTypes2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002192, VkglTestCase_002192_1, VkglTestCase_002192_2);

#define VkglTestCase_002193_1 "KHR-GLES31.core.arrays_of_array"
#define VkglTestCase_002193_2 "s.SizedDeclarationsStructTypes3"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002193, VkglTestCase_002193_1, VkglTestCase_002193_2);

#define VkglTestCase_002194_1 "KHR-GLES31.core.arrays_of_array"
#define VkglTestCase_002194_2 "s.SizedDeclarationsStructTypes4"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002194, VkglTestCase_002194_1, VkglTestCase_002194_2);

#define VkglTestCase_002195_1 "KHR-GLES31.core.arrays_of_arrays"
#define VkglTestCase_002195_2 ".SizedDeclarationsTypenameStyle1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002195, VkglTestCase_002195_1, VkglTestCase_002195_2);

#define VkglTestCase_002196_1 "KHR-GLES31.core.arrays_of_arrays"
#define VkglTestCase_002196_2 ".SizedDeclarationsTypenameStyle2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002196, VkglTestCase_002196_1, VkglTestCase_002196_2);

#define VkglTestCase_002197_1 "KHR-GLES31.core.arrays_of_arrays"
#define VkglTestCase_002197_2 ".SizedDeclarationsTypenameStyle3"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002197, VkglTestCase_002197_1, VkglTestCase_002197_2);

#define VkglTestCase_002198_1 "KHR-GLES31.core.arrays_of_arrays"
#define VkglTestCase_002198_2 ".SizedDeclarationsTypenameStyle4"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002198, VkglTestCase_002198_1, VkglTestCase_002198_2);

#define VkglTestCase_002199_1 "KHR-GLES31.core.arrays_of_arrays"
#define VkglTestCase_002199_2 ".SizedDeclarationsTypenameStyle5"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002199, VkglTestCase_002199_1, VkglTestCase_002199_2);

#define VkglTestCase_002200_1 "KHR-GLES31.core.arrays_of_arrays"
#define VkglTestCase_002200_2 ".SizedDeclarationsFunctionParams"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002200, VkglTestCase_002200_1, VkglTestCase_002200_2);

#define VkglTestCase_002201_1 "KHR-GLES31.core.arrays_of_arrays."
#define VkglTestCase_002201_2 "sized_declarations_invalid_sizes1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002201, VkglTestCase_002201_1, VkglTestCase_002201_2);

#define VkglTestCase_002202_1 "KHR-GLES31.core.arrays_of_arrays."
#define VkglTestCase_002202_2 "sized_declarations_invalid_sizes2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002202, VkglTestCase_002202_1, VkglTestCase_002202_2);

#define VkglTestCase_002203_1 "KHR-GLES31.core.arrays_of_arrays."
#define VkglTestCase_002203_2 "sized_declarations_invalid_sizes3"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002203, VkglTestCase_002203_1, VkglTestCase_002203_2);

#define VkglTestCase_002204_1 "KHR-GLES31.core.arrays_of_arrays."
#define VkglTestCase_002204_2 "sized_declarations_invalid_sizes4"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002204, VkglTestCase_002204_1, VkglTestCase_002204_2);

#define VkglTestCase_002205_1 "KHR-GLES31.core.arrays_of_arrays.Con"
#define VkglTestCase_002205_2 "structorsAndUnsizedDeclConstructors1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002205, VkglTestCase_002205_1, VkglTestCase_002205_2);

#define VkglTestCase_002206_1 "KHR-GLES31.core.arrays_of_arrays.Con"
#define VkglTestCase_002206_2 "structorsAndUnsizedDeclConstructors2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002206, VkglTestCase_002206_1, VkglTestCase_002206_2);

#define VkglTestCase_002207_1 "KHR-GLES31.core.arrays_of_arrays.Constr"
#define VkglTestCase_002207_2 "uctorsAndUnsizedDeclUnsizedConstructors"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002207, VkglTestCase_002207_1, VkglTestCase_002207_2);

#define VkglTestCase_002208_1 "KHR-GLES31.core.arrays_of_arrays"
#define VkglTestCase_002208_2 ".ConstructorsAndUnsizedDeclConst"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002208, VkglTestCase_002208_1, VkglTestCase_002208_2);

#define VkglTestCase_002209_1 "KHR-GLES31.core.arrays_of_arrays.Constr"
#define VkglTestCase_002209_2 "uctorsAndUnsizedDeclInvalidConstructors1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002209, VkglTestCase_002209_1, VkglTestCase_002209_2);

#define VkglTestCase_002210_1 "KHR-GLES31.core.arrays_of_arrays.Constr"
#define VkglTestCase_002210_2 "uctorsAndUnsizedDeclInvalidConstructors2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002210, VkglTestCase_002210_1, VkglTestCase_002210_2);

#define VkglTestCase_002211_1 "KHR-GLES31.core.arrays_of_arrays.Constr"
#define VkglTestCase_002211_2 "uctorsAndUnsizedDeclInvalidConstructors3"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002211, VkglTestCase_002211_1, VkglTestCase_002211_2);

#define VkglTestCase_002212_1 "KHR-GLES31.core.arrays_of_arrays.Constr"
#define VkglTestCase_002212_2 "uctorsAndUnsizedDeclInvalidConstructors4"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002212, VkglTestCase_002212_1, VkglTestCase_002212_2);

#define VkglTestCase_002213_1 "KHR-GLES31.core.arrays_of_arrays.Const"
#define VkglTestCase_002213_2 "ructorsAndUnsizedDeclConstructorSizing1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002213, VkglTestCase_002213_1, VkglTestCase_002213_2);

#define VkglTestCase_002214_1 "KHR-GLES31.core.arrays_of_arrays.Const"
#define VkglTestCase_002214_2 "ructorsAndUnsizedDeclConstructorSizing2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002214, VkglTestCase_002214_1, VkglTestCase_002214_2);

#define VkglTestCase_002215_1 "KHR-GLES31.core.arrays_of_arrays.Const"
#define VkglTestCase_002215_2 "ructorsAndUnsizedDeclStructConstructors"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002215, VkglTestCase_002215_1, VkglTestCase_002215_2);

#define VkglTestCase_002216_1 "KHR-GLES31.core.arrays_of_arrays.Con"
#define VkglTestCase_002216_2 "structorsAndUnsizedDeclUnsizedArrays1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002216, VkglTestCase_002216_1, VkglTestCase_002216_2);

#define VkglTestCase_002217_1 "KHR-GLES31.core.arrays_of_arrays.Con"
#define VkglTestCase_002217_2 "structorsAndUnsizedDeclUnsizedArrays2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002217, VkglTestCase_002217_1, VkglTestCase_002217_2);

#define VkglTestCase_002218_1 "KHR-GLES31.core.arrays_of_arrays.Con"
#define VkglTestCase_002218_2 "structorsAndUnsizedDeclUnsizedArrays3"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002218, VkglTestCase_002218_1, VkglTestCase_002218_2);

#define VkglTestCase_002219_1 "KHR-GLES31.core.arrays_of_arrays.Con"
#define VkglTestCase_002219_2 "structorsAndUnsizedDeclUnsizedArrays4"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002219, VkglTestCase_002219_1, VkglTestCase_002219_2);

#define VkglTestCase_002220_1 "KHR-GLES31.core.arrays_of_a"
#define VkglTestCase_002220_2 "rrays.ExpressionsAssignment1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002220, VkglTestCase_002220_1, VkglTestCase_002220_2);

#define VkglTestCase_002221_1 "KHR-GLES31.core.arrays_of_a"
#define VkglTestCase_002221_2 "rrays.ExpressionsAssignment2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002221, VkglTestCase_002221_1, VkglTestCase_002221_2);

#define VkglTestCase_002222_1 "KHR-GLES31.core.arrays_of_a"
#define VkglTestCase_002222_2 "rrays.ExpressionsAssignment3"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002222, VkglTestCase_002222_1, VkglTestCase_002222_2);

#define VkglTestCase_002223_1 "KHR-GLES31.core.arrays_of_arra"
#define VkglTestCase_002223_2 "ys.ExpressionsTypeRestrictions1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002223, VkglTestCase_002223_1, VkglTestCase_002223_2);

#define VkglTestCase_002224_1 "KHR-GLES31.core.arrays_of_arra"
#define VkglTestCase_002224_2 "ys.ExpressionsTypeRestrictions2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002224, VkglTestCase_002224_1, VkglTestCase_002224_2);

#define VkglTestCase_002225_1 "KHR-GLES31.core.arrays_of_arr"
#define VkglTestCase_002225_2 "ays.ExpressionsIndexingScalar1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002225, VkglTestCase_002225_1, VkglTestCase_002225_2);

#define VkglTestCase_002226_1 "KHR-GLES31.core.arrays_of_arr"
#define VkglTestCase_002226_2 "ays.ExpressionsIndexingScalar2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002226, VkglTestCase_002226_1, VkglTestCase_002226_2);

#define VkglTestCase_002227_1 "KHR-GLES31.core.arrays_of_arr"
#define VkglTestCase_002227_2 "ays.ExpressionsIndexingScalar3"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002227, VkglTestCase_002227_1, VkglTestCase_002227_2);

#define VkglTestCase_002228_1 "KHR-GLES31.core.arrays_of_arr"
#define VkglTestCase_002228_2 "ays.ExpressionsIndexingScalar4"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002228, VkglTestCase_002228_1, VkglTestCase_002228_2);

#define VkglTestCase_002229_1 "KHR-GLES31.core.arrays_of_arr"
#define VkglTestCase_002229_2 "ays.ExpressionsIndexingArray1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002229, VkglTestCase_002229_1, VkglTestCase_002229_2);

#define VkglTestCase_002230_1 "KHR-GLES31.core.arrays_of_arr"
#define VkglTestCase_002230_2 "ays.ExpressionsIndexingArray2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002230, VkglTestCase_002230_1, VkglTestCase_002230_2);

#define VkglTestCase_002231_1 "KHR-GLES31.core.arrays_of_arr"
#define VkglTestCase_002231_2 "ays.ExpressionsIndexingArray3"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002231, VkglTestCase_002231_1, VkglTestCase_002231_2);

#define VkglTestCase_002232_1 "KHR-GLES31.core.arrays_of_arra"
#define VkglTestCase_002232_2 "ys.ExpressionsDynamicIndexing1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002232, VkglTestCase_002232_1, VkglTestCase_002232_2);

#define VkglTestCase_002233_1 "KHR-GLES31.core.arrays_of_arra"
#define VkglTestCase_002233_2 "ys.ExpressionsDynamicIndexing2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002233, VkglTestCase_002233_1, VkglTestCase_002233_2);

#define VkglTestCase_002234_1 "KHR-GLES31.core.arrays_of_"
#define VkglTestCase_002234_2 "arrays.ExpressionsEquality1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002234, VkglTestCase_002234_1, VkglTestCase_002234_2);

#define VkglTestCase_002235_1 "KHR-GLES31.core.arrays_of_"
#define VkglTestCase_002235_2 "arrays.ExpressionsEquality2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002235, VkglTestCase_002235_1, VkglTestCase_002235_2);

#define VkglTestCase_002236_1 "KHR-GLES31.core.arrays_of"
#define VkglTestCase_002236_2 "_arrays.ExpressionsLength1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002236, VkglTestCase_002236_1, VkglTestCase_002236_2);

#define VkglTestCase_002237_1 "KHR-GLES31.core.arrays_of"
#define VkglTestCase_002237_2 "_arrays.ExpressionsLength2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002237, VkglTestCase_002237_1, VkglTestCase_002237_2);

#define VkglTestCase_002238_1 "KHR-GLES31.core.arrays_of"
#define VkglTestCase_002238_2 "_arrays.ExpressionsLength3"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002238, VkglTestCase_002238_1, VkglTestCase_002238_2);

#define VkglTestCase_002239_1 "KHR-GLES31.core.arrays_of_"
#define VkglTestCase_002239_2 "arrays.ExpressionsInvalid1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002239, VkglTestCase_002239_1, VkglTestCase_002239_2);

#define VkglTestCase_002240_1 "KHR-GLES31.core.arrays_of_"
#define VkglTestCase_002240_2 "arrays.ExpressionsInvalid2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002240, VkglTestCase_002240_1, VkglTestCase_002240_2);

#define VkglTestCase_002241_1 "KHR-GLES31.core.arrays_of_arr"
#define VkglTestCase_002241_2 "ays.InteractionFunctionCalls1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002241, VkglTestCase_002241_1, VkglTestCase_002241_2);

#define VkglTestCase_002242_1 "KHR-GLES31.core.arrays_of_arr"
#define VkglTestCase_002242_2 "ays.InteractionFunctionCalls2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002242, VkglTestCase_002242_1, VkglTestCase_002242_2);

#define VkglTestCase_002243_1 "KHR-GLES31.core.arrays_of_arra"
#define VkglTestCase_002243_2 "ys.InteractionArgumentAliasing1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002243, VkglTestCase_002243_1, VkglTestCase_002243_2);

#define VkglTestCase_002244_1 "KHR-GLES31.core.arrays_of_arra"
#define VkglTestCase_002244_2 "ys.InteractionArgumentAliasing2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002244, VkglTestCase_002244_1, VkglTestCase_002244_2);

#define VkglTestCase_002245_1 "KHR-GLES31.core.arrays_of_arra"
#define VkglTestCase_002245_2 "ys.InteractionArgumentAliasing3"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002245, VkglTestCase_002245_1, VkglTestCase_002245_2);

#define VkglTestCase_002246_1 "KHR-GLES31.core.arrays_of_arra"
#define VkglTestCase_002246_2 "ys.InteractionArgumentAliasing4"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002246, VkglTestCase_002246_1, VkglTestCase_002246_2);

#define VkglTestCase_002247_1 "KHR-GLES31.core.arrays_of_arra"
#define VkglTestCase_002247_2 "ys.InteractionArgumentAliasing5"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002247, VkglTestCase_002247_1, VkglTestCase_002247_2);

#define VkglTestCase_002248_1 "KHR-GLES31.core.arrays_of_arra"
#define VkglTestCase_002248_2 "ys.InteractionArgumentAliasing6"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002248, VkglTestCase_002248_1, VkglTestCase_002248_2);

#define VkglTestCase_002249_1 "KHR-GLES31.core.arrays_of_"
#define VkglTestCase_002249_2 "arrays.InteractionUniforms1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002249, VkglTestCase_002249_1, VkglTestCase_002249_2);

#define VkglTestCase_002250_1 "KHR-GLES31.core.arrays_of_"
#define VkglTestCase_002250_2 "arrays.InteractionUniforms2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002250, VkglTestCase_002250_1, VkglTestCase_002250_2);

#define VkglTestCase_002251_1 "KHR-GLES31.core.arrays_of_arr"
#define VkglTestCase_002251_2 "ays.InteractionUniformBuffers1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002251, VkglTestCase_002251_1, VkglTestCase_002251_2);

#define VkglTestCase_002252_1 "KHR-GLES31.core.arrays_of_arr"
#define VkglTestCase_002252_2 "ays.InteractionUniformBuffers2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002252, VkglTestCase_002252_1, VkglTestCase_002252_2);

#define VkglTestCase_002253_1 "KHR-GLES31.core.arrays_of_arr"
#define VkglTestCase_002253_2 "ays.InteractionUniformBuffers3"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002253, VkglTestCase_002253_1, VkglTestCase_002253_2);

#define VkglTestCase_002254_1 "KHR-GLES31.core.arrays_of_arra"
#define VkglTestCase_002254_2 "ys.InteractionInterfaceArrays1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002254, VkglTestCase_002254_1, VkglTestCase_002254_2);

#define VkglTestCase_002255_1 "KHR-GLES31.core.arrays_of_arra"
#define VkglTestCase_002255_2 "ys.InteractionInterfaceArrays2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002255, VkglTestCase_002255_1, VkglTestCase_002255_2);

#define VkglTestCase_002256_1 "KHR-GLES31.core.arrays_of_arra"
#define VkglTestCase_002256_2 "ys.InteractionInterfaceArrays3"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002256, VkglTestCase_002256_1, VkglTestCase_002256_2);

#define VkglTestCase_002257_1 "KHR-GLES31.core.arrays_of_arra"
#define VkglTestCase_002257_2 "ys.InteractionInterfaceArrays4"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002257, VkglTestCase_002257_1, VkglTestCase_002257_2);
