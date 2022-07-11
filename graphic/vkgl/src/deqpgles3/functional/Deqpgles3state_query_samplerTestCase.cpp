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
#include "../ActsDeqpgles30044TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_043169_1 "dEQP-GLES3.functional.state_query.sampler."
#define VkglTestCase_043169_2 "sampler_texture_wrap_s_getsamplerparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043169, VkglTestCase_043169_1, VkglTestCase_043169_2);

#define VkglTestCase_043170_1 "dEQP-GLES3.functional.state_query.sampler."
#define VkglTestCase_043170_2 "sampler_texture_wrap_s_getsamplerparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043170, VkglTestCase_043170_1, VkglTestCase_043170_2);

#define VkglTestCase_043171_1 "dEQP-GLES3.functional.state_query.sampler."
#define VkglTestCase_043171_2 "sampler_texture_wrap_t_getsamplerparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043171, VkglTestCase_043171_1, VkglTestCase_043171_2);

#define VkglTestCase_043172_1 "dEQP-GLES3.functional.state_query.sampler."
#define VkglTestCase_043172_2 "sampler_texture_wrap_t_getsamplerparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043172, VkglTestCase_043172_1, VkglTestCase_043172_2);

#define VkglTestCase_043173_1 "dEQP-GLES3.functional.state_query.sampler."
#define VkglTestCase_043173_2 "sampler_texture_wrap_r_getsamplerparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043173, VkglTestCase_043173_1, VkglTestCase_043173_2);

#define VkglTestCase_043174_1 "dEQP-GLES3.functional.state_query.sampler."
#define VkglTestCase_043174_2 "sampler_texture_wrap_r_getsamplerparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043174, VkglTestCase_043174_1, VkglTestCase_043174_2);

#define VkglTestCase_043175_1 "dEQP-GLES3.functional.state_query.sampler.sa"
#define VkglTestCase_043175_2 "mpler_texture_mag_filter_getsamplerparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043175, VkglTestCase_043175_1, VkglTestCase_043175_2);

#define VkglTestCase_043176_1 "dEQP-GLES3.functional.state_query.sampler.sa"
#define VkglTestCase_043176_2 "mpler_texture_mag_filter_getsamplerparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043176, VkglTestCase_043176_1, VkglTestCase_043176_2);

#define VkglTestCase_043177_1 "dEQP-GLES3.functional.state_query.sampler.sa"
#define VkglTestCase_043177_2 "mpler_texture_min_filter_getsamplerparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043177, VkglTestCase_043177_1, VkglTestCase_043177_2);

#define VkglTestCase_043178_1 "dEQP-GLES3.functional.state_query.sampler.sa"
#define VkglTestCase_043178_2 "mpler_texture_min_filter_getsamplerparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043178, VkglTestCase_043178_1, VkglTestCase_043178_2);

#define VkglTestCase_043179_1 "dEQP-GLES3.functional.state_query.sampler.s"
#define VkglTestCase_043179_2 "ampler_texture_min_lod_getsamplerparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043179, VkglTestCase_043179_1, VkglTestCase_043179_2);

#define VkglTestCase_043180_1 "dEQP-GLES3.functional.state_query.sampler.s"
#define VkglTestCase_043180_2 "ampler_texture_min_lod_getsamplerparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043180, VkglTestCase_043180_1, VkglTestCase_043180_2);

#define VkglTestCase_043181_1 "dEQP-GLES3.functional.state_query.sampler.s"
#define VkglTestCase_043181_2 "ampler_texture_max_lod_getsamplerparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043181, VkglTestCase_043181_1, VkglTestCase_043181_2);

#define VkglTestCase_043182_1 "dEQP-GLES3.functional.state_query.sampler.s"
#define VkglTestCase_043182_2 "ampler_texture_max_lod_getsamplerparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043182, VkglTestCase_043182_1, VkglTestCase_043182_2);

#define VkglTestCase_043183_1 "dEQP-GLES3.functional.state_query.sampler.sam"
#define VkglTestCase_043183_2 "pler_texture_compare_mode_getsamplerparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043183, VkglTestCase_043183_1, VkglTestCase_043183_2);

#define VkglTestCase_043184_1 "dEQP-GLES3.functional.state_query.sampler.sam"
#define VkglTestCase_043184_2 "pler_texture_compare_mode_getsamplerparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043184, VkglTestCase_043184_1, VkglTestCase_043184_2);

#define VkglTestCase_043185_1 "dEQP-GLES3.functional.state_query.sampler.sam"
#define VkglTestCase_043185_2 "pler_texture_compare_func_getsamplerparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043185, VkglTestCase_043185_1, VkglTestCase_043185_2);

#define VkglTestCase_043186_1 "dEQP-GLES3.functional.state_query.sampler.sam"
#define VkglTestCase_043186_2 "pler_texture_compare_func_getsamplerparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043186, VkglTestCase_043186_1, VkglTestCase_043186_2);
