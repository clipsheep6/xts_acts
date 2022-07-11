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

<<<<<<< HEAD
#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30005TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_004960_1 "dEQP-GLES3.functional.shaders.scoping.i"
#define VkglTestCase_004960_2 "nvalid.redeclare_global_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004960, VkglTestCase_004960_1, VkglTestCase_004960_2);

#define VkglTestCase_004961_1 "dEQP-GLES3.functional.shaders.scoping.in"
#define VkglTestCase_004961_2 "valid.redeclare_global_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004961, VkglTestCase_004961_1, VkglTestCase_004961_2);

#define VkglTestCase_004962_1 "dEQP-GLES3.functional.shaders.scoping."
#define VkglTestCase_004962_2 "invalid.redeclare_local_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004962, VkglTestCase_004962_1, VkglTestCase_004962_2);

#define VkglTestCase_004963_1 "dEQP-GLES3.functional.shaders.scoping.i"
#define VkglTestCase_004963_2 "nvalid.redeclare_local_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004963, VkglTestCase_004963_1, VkglTestCase_004963_2);

#define VkglTestCase_004964_1 "dEQP-GLES3.functional.shaders.scoping.invalid"
#define VkglTestCase_004964_2 ".redeclare_for_init_statement_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004964, VkglTestCase_004964_1, VkglTestCase_004964_2);

#define VkglTestCase_004965_1 "dEQP-GLES3.functional.shaders.scoping.invalid."
#define VkglTestCase_004965_2 "redeclare_for_init_statement_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004965, VkglTestCase_004965_1, VkglTestCase_004965_2);

#define VkglTestCase_004966_1 "dEQP-GLES3.functional.shaders.scoping.inva"
#define VkglTestCase_004966_2 "lid.redeclare_for_condition_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004966, VkglTestCase_004966_1, VkglTestCase_004966_2);

#define VkglTestCase_004967_1 "dEQP-GLES3.functional.shaders.scoping.inval"
#define VkglTestCase_004967_2 "id.redeclare_for_condition_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004967, VkglTestCase_004967_1, VkglTestCase_004967_2);

#define VkglTestCase_004968_1 "dEQP-GLES3.functional.shaders.scoping.invalid.redecla"
#define VkglTestCase_004968_2 "re_for_init_statement_variable_in_for_condition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004968, VkglTestCase_004968_1, VkglTestCase_004968_2);

#define VkglTestCase_004969_1 "dEQP-GLES3.functional.shaders.scoping.invalid.redeclar"
#define VkglTestCase_004969_2 "e_for_init_statement_variable_in_for_condition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004969, VkglTestCase_004969_1, VkglTestCase_004969_2);

#define VkglTestCase_004970_1 "dEQP-GLES3.functional.shaders.scoping.inval"
#define VkglTestCase_004970_2 "id.redeclare_while_condition_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004970, VkglTestCase_004970_1, VkglTestCase_004970_2);

#define VkglTestCase_004971_1 "dEQP-GLES3.functional.shaders.scoping.invali"
#define VkglTestCase_004971_2 "d.redeclare_while_condition_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004971, VkglTestCase_004971_1, VkglTestCase_004971_2);

#define VkglTestCase_004972_1 "dEQP-GLES3.functional.shaders.scopi"
#define VkglTestCase_004972_2 "ng.invalid.redefine_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004972, VkglTestCase_004972_1, VkglTestCase_004972_2);

#define VkglTestCase_004973_1 "dEQP-GLES3.functional.shaders.scopin"
#define VkglTestCase_004973_2 "g.invalid.redefine_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004973, VkglTestCase_004973_1, VkglTestCase_004973_2);

#define VkglTestCase_004974_1 "dEQP-GLES3.functional.shaders.scopi"
#define VkglTestCase_004974_2 "ng.invalid.redeclare_builtin_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004974, VkglTestCase_004974_1, VkglTestCase_004974_2);

#define VkglTestCase_004975_1 "dEQP-GLES3.functional.shaders.scopin"
#define VkglTestCase_004975_2 "g.invalid.redeclare_builtin_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004975, VkglTestCase_004975_1, VkglTestCase_004975_2);

#define VkglTestCase_004976_1 "dEQP-GLES3.functional.shaders.scop"
#define VkglTestCase_004976_2 "ing.invalid.redefine_builtin_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004976, VkglTestCase_004976_1, VkglTestCase_004976_2);

#define VkglTestCase_004977_1 "dEQP-GLES3.functional.shaders.scopi"
#define VkglTestCase_004977_2 "ng.invalid.redefine_builtin_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004977, VkglTestCase_004977_1, VkglTestCase_004977_2);

#define VkglTestCase_004978_1 "dEQP-GLES3.functional.shaders.scoping."
#define VkglTestCase_004978_2 "invalid.conflict_function_struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004978, VkglTestCase_004978_1, VkglTestCase_004978_2);

#define VkglTestCase_004979_1 "dEQP-GLES3.functional.shaders.scoping.i"
#define VkglTestCase_004979_2 "nvalid.conflict_function_struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004979, VkglTestCase_004979_1, VkglTestCase_004979_2);

#define VkglTestCase_004980_1 "dEQP-GLES3.functional.shaders.scoping.i"
#define VkglTestCase_004980_2 "nvalid.conflict_function_variable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004980, VkglTestCase_004980_1, VkglTestCase_004980_2);

#define VkglTestCase_004981_1 "dEQP-GLES3.functional.shaders.scoping.in"
#define VkglTestCase_004981_2 "valid.conflict_function_variable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004981, VkglTestCase_004981_1, VkglTestCase_004981_2);

#define VkglTestCase_004982_1 "dEQP-GLES3.functional.shaders.scoping.invalid"
#define VkglTestCase_004982_2 ".use_global_variable_before_declaration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004982, VkglTestCase_004982_1, VkglTestCase_004982_2);

#define VkglTestCase_004983_1 "dEQP-GLES3.functional.shaders.scoping.invalid."
#define VkglTestCase_004983_2 "use_global_variable_before_declaration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004983, VkglTestCase_004983_1, VkglTestCase_004983_2);

#define VkglTestCase_004984_1 "dEQP-GLES3.functional.shaders.scoping.invalid"
#define VkglTestCase_004984_2 ".use_local_variable_before_declaration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004984, VkglTestCase_004984_1, VkglTestCase_004984_2);

#define VkglTestCase_004985_1 "dEQP-GLES3.functional.shaders.scoping.invalid."
#define VkglTestCase_004985_2 "use_local_variable_before_declaration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004985, VkglTestCase_004985_1, VkglTestCase_004985_2);

#define VkglTestCase_004986_1 "dEQP-GLES3.functional.shaders.scoping.inval"
#define VkglTestCase_004986_2 "id.use_struct_type_before_declaration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004986, VkglTestCase_004986_1, VkglTestCase_004986_2);

#define VkglTestCase_004987_1 "dEQP-GLES3.functional.shaders.scoping.invali"
#define VkglTestCase_004987_2 "d.use_struct_type_before_declaration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004987, VkglTestCase_004987_1, VkglTestCase_004987_2);

#define VkglTestCase_004988_1 "dEQP-GLES3.functional.shaders.scoping.inva"
#define VkglTestCase_004988_2 "lid.use_function_before_declaration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004988, VkglTestCase_004988_1, VkglTestCase_004988_2);

#define VkglTestCase_004989_1 "dEQP-GLES3.functional.shaders.scoping.inval"
#define VkglTestCase_004989_2 "id.use_function_before_declaration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004989, VkglTestCase_004989_1, VkglTestCase_004989_2);

#define VkglTestCase_004990_1 "dEQP-GLES3.functional.shaders.scoping.invalid"
#define VkglTestCase_004990_2 ".use_variable_from_block_in_outer_scope_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004990, VkglTestCase_004990_1, VkglTestCase_004990_2);

#define VkglTestCase_004991_1 "dEQP-GLES3.functional.shaders.scoping.invalid."
#define VkglTestCase_004991_2 "use_variable_from_block_in_outer_scope_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004991, VkglTestCase_004991_1, VkglTestCase_004991_2);

#define VkglTestCase_004992_1 "dEQP-GLES3.functional.shaders.scoping.invali"
#define VkglTestCase_004992_2 "d.use_variable_from_if_in_outer_scope_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004992, VkglTestCase_004992_1, VkglTestCase_004992_2);

#define VkglTestCase_004993_1 "dEQP-GLES3.functional.shaders.scoping.invalid"
#define VkglTestCase_004993_2 ".use_variable_from_if_in_outer_scope_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004993, VkglTestCase_004993_1, VkglTestCase_004993_2);

#define VkglTestCase_004994_1 "dEQP-GLES3.functional.shaders.scoping.invalid"
#define VkglTestCase_004994_2 ".use_variable_from_else_in_outer_scope_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004994, VkglTestCase_004994_1, VkglTestCase_004994_2);

#define VkglTestCase_004995_1 "dEQP-GLES3.functional.shaders.scoping.invalid."
#define VkglTestCase_004995_2 "use_variable_from_else_in_outer_scope_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004995, VkglTestCase_004995_1, VkglTestCase_004995_2);

#define VkglTestCase_004996_1 "dEQP-GLES3.functional.shaders.scoping.in"
#define VkglTestCase_004996_2 "valid.use_variable_from_if_in_else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004996, VkglTestCase_004996_1, VkglTestCase_004996_2);

#define VkglTestCase_004997_1 "dEQP-GLES3.functional.shaders.scoping.inv"
#define VkglTestCase_004997_2 "alid.use_variable_from_if_in_else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004997, VkglTestCase_004997_1, VkglTestCase_004997_2);

#define VkglTestCase_004998_1 "dEQP-GLES3.functional.shaders.scoping.invalid.use_va"
#define VkglTestCase_004998_2 "riable_from_for_init_statement_in_outer_scope_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004998, VkglTestCase_004998_1, VkglTestCase_004998_2);

#define VkglTestCase_004999_1 "dEQP-GLES3.functional.shaders.scoping.invalid.use_var"
#define VkglTestCase_004999_2 "iable_from_for_init_statement_in_outer_scope_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004999, VkglTestCase_004999_1, VkglTestCase_004999_2);

#define VkglTestCase_005000_1 "dEQP-GLES3.functional.shaders.scoping.invalid.use_"
#define VkglTestCase_005000_2 "variable_from_while_condition_in_outer_scope_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_005000, VkglTestCase_005000_1, VkglTestCase_005000_2);

#define VkglTestCase_005001_1 "dEQP-GLES3.functional.shaders.scoping.invalid.use_v"
#define VkglTestCase_005001_2 "ariable_from_while_condition_in_outer_scope_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_005001, VkglTestCase_005001_1, VkglTestCase_005001_2);

#define VkglTestCase_005002_1 "dEQP-GLES3.functional.shaders.scoping.invalid.use"
#define VkglTestCase_005002_2 "_parameter_names_from_function_declaration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_005002, VkglTestCase_005002_1, VkglTestCase_005002_2);

#define VkglTestCase_005003_1 "dEQP-GLES3.functional.shaders.scoping.invalid.use_"
#define VkglTestCase_005003_2 "parameter_names_from_function_declaration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_005003, VkglTestCase_005003_1, VkglTestCase_005003_2);

#define VkglTestCase_005004_1 "dEQP-GLES3.functional.shaders.scoping.invalid."
#define VkglTestCase_005004_2 "variable_not_visible_in_own_initializer_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_005004, VkglTestCase_005004_1, VkglTestCase_005004_2);

#define VkglTestCase_005005_1 "dEQP-GLES3.functional.shaders.scoping.invalid.v"
#define VkglTestCase_005005_2 "ariable_not_visible_in_own_initializer_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_005005, VkglTestCase_005005_1, VkglTestCase_005005_2);

#define VkglTestCase_005006_1 "dEQP-GLES3.functional.shaders.scoping.invalid."
#define VkglTestCase_005006_2 "local_variable_hides_function_parameter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_005006, VkglTestCase_005006_1, VkglTestCase_005006_2);

#define VkglTestCase_005007_1 "dEQP-GLES3.functional.shaders.scoping.invalid.l"
#define VkglTestCase_005007_2 "ocal_variable_hides_function_parameter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_005007, VkglTestCase_005007_1, VkglTestCase_005007_2);
=======
static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004960, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004960 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.i"
        "nvalid.redeclare_global_variable_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004960 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004960 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004961, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004961 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.in"
        "valid.redeclare_global_variable_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004961 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004961 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004962, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004962 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping."
        "invalid.redeclare_local_variable_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004962 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004962 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.i"
        "nvalid.redeclare_local_variable_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004963 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid"
        ".redeclare_for_init_statement_variable_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004964 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid."
        "redeclare_for_init_statement_variable_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004965 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.inva"
        "lid.redeclare_for_condition_variable_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004966 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.inval"
        "id.redeclare_for_condition_variable_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004967 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid.redecla"
        "re_for_init_statement_variable_in_for_condition_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004968 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid.redeclar"
        "e_for_init_statement_variable_in_for_condition_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004969 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.inval"
        "id.redeclare_while_condition_variable_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004970 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invali"
        "d.redeclare_while_condition_variable_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004971 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scopi"
        "ng.invalid.redefine_function_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004972 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scopin"
        "g.invalid.redefine_function_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004973 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scopi"
        "ng.invalid.redeclare_builtin_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004974 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scopin"
        "g.invalid.redeclare_builtin_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004975 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scop"
        "ing.invalid.redefine_builtin_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004976 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scopi"
        "ng.invalid.redefine_builtin_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004977 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping."
        "invalid.conflict_function_struct_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004978 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.i"
        "nvalid.conflict_function_struct_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004979 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.i"
        "nvalid.conflict_function_variable_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004980 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.in"
        "valid.conflict_function_variable_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004981 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid"
        ".use_global_variable_before_declaration_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004982 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid."
        "use_global_variable_before_declaration_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004983 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid"
        ".use_local_variable_before_declaration_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004984 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid."
        "use_local_variable_before_declaration_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004985 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.inval"
        "id.use_struct_type_before_declaration_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004986 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invali"
        "d.use_struct_type_before_declaration_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004987 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.inva"
        "lid.use_function_before_declaration_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004988 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.inval"
        "id.use_function_before_declaration_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004989 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid"
        ".use_variable_from_block_in_outer_scope_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004990 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid."
        "use_variable_from_block_in_outer_scope_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004991 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invali"
        "d.use_variable_from_if_in_outer_scope_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004992 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid"
        ".use_variable_from_if_in_outer_scope_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004993 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid"
        ".use_variable_from_else_in_outer_scope_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004994 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid."
        "use_variable_from_else_in_outer_scope_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004995 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.in"
        "valid.use_variable_from_if_in_else_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004996 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.inv"
        "alid.use_variable_from_if_in_else_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004997 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid.use_va"
        "riable_from_for_init_statement_in_outer_scope_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004998 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid.use_var"
        "iable_from_for_init_statement_in_outer_scope_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004999 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_005000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid.use_"
        "variable_from_while_condition_in_outer_scope_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005000 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_005001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid.use_v"
        "ariable_from_while_condition_in_outer_scope_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005001 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_005002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid.use"
        "_parameter_names_from_function_declaration_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005002 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_005003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid.use_"
        "parameter_names_from_function_declaration_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005003 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_005004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid."
        "variable_not_visible_in_own_initializer_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005004 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_005005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid.v"
        "ariable_not_visible_in_own_initializer_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005005 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_005006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid."
        "local_variable_hides_function_parameter_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005006 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_005007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.scoping.invalid.l"
        "ocal_variable_hides_function_parameter_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005007 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
