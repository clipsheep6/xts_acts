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
#include "../ActsDeqpgles310022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021859_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_021859_2 ".program_input.location.separable_tess_eval.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021859, VkglTestCase_021859_1, VkglTestCase_021859_2);

#define VkglTestCase_021860_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_021860_2 "input.location.separable_tess_eval.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021860, VkglTestCase_021860_1, VkglTestCase_021860_2);

#define VkglTestCase_021861_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_021861_2 "ogram_input.location.separable_tess_eval.patch_var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021861, VkglTestCase_021861_1, VkglTestCase_021861_2);

#define VkglTestCase_021862_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_021862_2 "ut.location.separable_tess_eval.patch_var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021862, VkglTestCase_021862_1, VkglTestCase_021862_2);

#define VkglTestCase_021863_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_021863_2 "m_input.location.separable_tess_eval.patch_var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021863, VkglTestCase_021863_1, VkglTestCase_021863_2);

#define VkglTestCase_021864_1 "dEQP-GLES31.functional.program_interface_query.program_input.l"
#define VkglTestCase_021864_2 "ocation.separable_tess_eval.patch_var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021864, VkglTestCase_021864_1, VkglTestCase_021864_2);

#define VkglTestCase_021865_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_021865_2 "am_input.location.separable_tess_eval.patch_var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021865, VkglTestCase_021865_1, VkglTestCase_021865_2);

#define VkglTestCase_021866_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_021866_2 "location.separable_tess_eval.patch_var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021866, VkglTestCase_021866_1, VkglTestCase_021866_2);

#define VkglTestCase_022459_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022459_2 "program_output.location.separable_tess_eval.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022459, VkglTestCase_022459_1, VkglTestCase_022459_2);

#define VkglTestCase_022460_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022460_2 "utput.location.separable_tess_eval.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022460, VkglTestCase_022460_1, VkglTestCase_022460_2);

#define VkglTestCase_022461_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022461_2 "gram_output.location.separable_tess_eval.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022461, VkglTestCase_022461_1, VkglTestCase_022461_2);

#define VkglTestCase_022462_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022462_2 "ut.location.separable_tess_eval.var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022462, VkglTestCase_022462_1, VkglTestCase_022462_2);

#define VkglTestCase_022463_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022463_2 "gram_output.location.separable_tess_eval.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022463, VkglTestCase_022463_1, VkglTestCase_022463_2);

#define VkglTestCase_022464_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022464_2 "ut.location.separable_tess_eval.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022464, VkglTestCase_022464_1, VkglTestCase_022464_2);
