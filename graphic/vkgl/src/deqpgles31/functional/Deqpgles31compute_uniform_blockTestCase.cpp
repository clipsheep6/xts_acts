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
#include "../ActsDeqpgles310021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020974,
        "dEQP-GLES31.functional.program_interface_query.unif",
        "orm.referenced_by_shader.compute.uniform_block.float");

static SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020975,
        "dEQP-GLES31.functional.program_interface_query.uniform",
        ".referenced_by_shader.compute.uniform_block.float_array");

static SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020976,
        "dEQP-GLES31.functional.program_interface_query.uniform.",
        "referenced_by_shader.compute.uniform_block.float_struct");

static SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020977,
        "dEQP-GLES31.functional.program_interface_query.uniform.ref",
        "erenced_by_shader.compute.uniform_block.float_array_struct");

static SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020978,
        "dEQP-GLES31.functional.program_interface_query.uniform.ref",
        "erenced_by_shader.compute.uniform_block.float_struct_array");

static SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020979,
        "dEQP-GLES31.functional.program_interface_query.uniform.re",
        "ferenced_by_shader.compute.uniform_block.float_array_array");

static SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020980,
        "dEQP-GLES31.functional.program_interface_query.uniform.ref",
        "erenced_by_shader.compute.uniform_block.float_struct_struct");
