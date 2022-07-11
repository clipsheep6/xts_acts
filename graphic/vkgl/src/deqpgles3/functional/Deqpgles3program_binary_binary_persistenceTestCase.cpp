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
#include "../ActsDeqpgles30042TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_041906_1 "dEQP-GLES3.functional.shader_api.program_bi"
#define VkglTestCase_041906_2 "nary.binary_persistence.detach_shader_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041906, VkglTestCase_041906_1, VkglTestCase_041906_2);

#define VkglTestCase_041907_1 "dEQP-GLES3.functional.shader_api.program_bin"
#define VkglTestCase_041907_2 "ary.binary_persistence.detach_shader_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041907, VkglTestCase_041907_1, VkglTestCase_041907_2);

#define VkglTestCase_041908_1 "dEQP-GLES3.functional.shader_api.program_bin"
#define VkglTestCase_041908_2 "ary.binary_persistence.reattach_shader_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041908, VkglTestCase_041908_1, VkglTestCase_041908_2);

#define VkglTestCase_041909_1 "dEQP-GLES3.functional.shader_api.program_bina"
#define VkglTestCase_041909_2 "ry.binary_persistence.reattach_shader_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041909, VkglTestCase_041909_1, VkglTestCase_041909_2);

#define VkglTestCase_041910_1 "dEQP-GLES3.functional.shader_api.program_bi"
#define VkglTestCase_041910_2 "nary.binary_persistence.delete_shader_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041910, VkglTestCase_041910_1, VkglTestCase_041910_2);

#define VkglTestCase_041911_1 "dEQP-GLES3.functional.shader_api.program_bin"
#define VkglTestCase_041911_2 "ary.binary_persistence.delete_shader_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041911, VkglTestCase_041911_1, VkglTestCase_041911_2);

#define VkglTestCase_041912_1 "dEQP-GLES3.functional.shader_api.program_bin"
#define VkglTestCase_041912_2 "ary.binary_persistence.replace_shader_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041912, VkglTestCase_041912_1, VkglTestCase_041912_2);

#define VkglTestCase_041913_1 "dEQP-GLES3.functional.shader_api.program_bina"
#define VkglTestCase_041913_2 "ry.binary_persistence.replace_shader_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041913, VkglTestCase_041913_1, VkglTestCase_041913_2);

#define VkglTestCase_041914_1 "dEQP-GLES3.functional.shader_api.program_bina"
#define VkglTestCase_041914_2 "ry.binary_persistence.recompile_shader_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041914, VkglTestCase_041914_1, VkglTestCase_041914_2);

#define VkglTestCase_041915_1 "dEQP-GLES3.functional.shader_api.program_binar"
#define VkglTestCase_041915_2 "y.binary_persistence.recompile_shader_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041915, VkglTestCase_041915_1, VkglTestCase_041915_2);

#define VkglTestCase_041916_1 "dEQP-GLES3.functional.shader_api.program_bin"
#define VkglTestCase_041916_2 "ary.binary_persistence.replace_source_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041916, VkglTestCase_041916_1, VkglTestCase_041916_2);

#define VkglTestCase_041917_1 "dEQP-GLES3.functional.shader_api.program_bina"
#define VkglTestCase_041917_2 "ry.binary_persistence.replace_source_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041917, VkglTestCase_041917_1, VkglTestCase_041917_2);
