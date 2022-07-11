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
#include "../ActsDeqpgles30006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005951_1 "dEQP-GLES3.functional.shaders.indexing.va"
#define VkglTestCase_005951_2 "rying_array.float_static_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005951, VkglTestCase_005951_1, VkglTestCase_005951_2);

#define VkglTestCase_005952_1 "dEQP-GLES3.functional.shaders.indexing.var"
#define VkglTestCase_005952_2 "ying_array.float_static_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005952, VkglTestCase_005952_1, VkglTestCase_005952_2);

#define VkglTestCase_005953_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005953_2 "ng_array.float_static_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005953, VkglTestCase_005953_1, VkglTestCase_005953_2);

#define VkglTestCase_005954_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005954_2 "ng_array.float_static_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005954, VkglTestCase_005954_1, VkglTestCase_005954_2);

#define VkglTestCase_005955_1 "dEQP-GLES3.functional.shaders.indexing.var"
#define VkglTestCase_005955_2 "ying_array.float_dynamic_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005955, VkglTestCase_005955_1, VkglTestCase_005955_2);

#define VkglTestCase_005956_1 "dEQP-GLES3.functional.shaders.indexing.var"
#define VkglTestCase_005956_2 "ying_array.float_dynamic_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005956, VkglTestCase_005956_1, VkglTestCase_005956_2);

#define VkglTestCase_005957_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005957_2 "ng_array.float_dynamic_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005957, VkglTestCase_005957_1, VkglTestCase_005957_2);

#define VkglTestCase_005958_1 "dEQP-GLES3.functional.shaders.indexing.varyin"
#define VkglTestCase_005958_2 "g_array.float_dynamic_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005958, VkglTestCase_005958_1, VkglTestCase_005958_2);

#define VkglTestCase_005959_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005959_2 "ng_array.float_static_loop_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005959, VkglTestCase_005959_1, VkglTestCase_005959_2);

#define VkglTestCase_005960_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005960_2 "ng_array.float_static_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005960, VkglTestCase_005960_1, VkglTestCase_005960_2);

#define VkglTestCase_005961_1 "dEQP-GLES3.functional.shaders.indexing.varying"
#define VkglTestCase_005961_2 "_array.float_static_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005961, VkglTestCase_005961_1, VkglTestCase_005961_2);

#define VkglTestCase_005962_1 "dEQP-GLES3.functional.shaders.indexing.varying_"
#define VkglTestCase_005962_2 "array.float_static_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005962, VkglTestCase_005962_1, VkglTestCase_005962_2);

#define VkglTestCase_005963_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005963_2 "ng_array.float_dynamic_loop_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005963, VkglTestCase_005963_1, VkglTestCase_005963_2);

#define VkglTestCase_005964_1 "dEQP-GLES3.functional.shaders.indexing.varyin"
#define VkglTestCase_005964_2 "g_array.float_dynamic_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005964, VkglTestCase_005964_1, VkglTestCase_005964_2);

#define VkglTestCase_005965_1 "dEQP-GLES3.functional.shaders.indexing.varying_"
#define VkglTestCase_005965_2 "array.float_dynamic_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005965, VkglTestCase_005965_1, VkglTestCase_005965_2);

#define VkglTestCase_005966_1 "dEQP-GLES3.functional.shaders.indexing.varying_"
#define VkglTestCase_005966_2 "array.float_dynamic_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005966, VkglTestCase_005966_1, VkglTestCase_005966_2);

#define VkglTestCase_005967_1 "dEQP-GLES3.functional.shaders.indexing.va"
#define VkglTestCase_005967_2 "rying_array.vec2_static_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005967, VkglTestCase_005967_1, VkglTestCase_005967_2);

#define VkglTestCase_005968_1 "dEQP-GLES3.functional.shaders.indexing.va"
#define VkglTestCase_005968_2 "rying_array.vec2_static_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005968, VkglTestCase_005968_1, VkglTestCase_005968_2);

#define VkglTestCase_005969_1 "dEQP-GLES3.functional.shaders.indexing.vary"
#define VkglTestCase_005969_2 "ing_array.vec2_static_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005969, VkglTestCase_005969_1, VkglTestCase_005969_2);

#define VkglTestCase_005970_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005970_2 "ng_array.vec2_static_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005970, VkglTestCase_005970_1, VkglTestCase_005970_2);

#define VkglTestCase_005971_1 "dEQP-GLES3.functional.shaders.indexing.va"
#define VkglTestCase_005971_2 "rying_array.vec2_dynamic_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005971, VkglTestCase_005971_1, VkglTestCase_005971_2);

#define VkglTestCase_005972_1 "dEQP-GLES3.functional.shaders.indexing.var"
#define VkglTestCase_005972_2 "ying_array.vec2_dynamic_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005972, VkglTestCase_005972_1, VkglTestCase_005972_2);

#define VkglTestCase_005973_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005973_2 "ng_array.vec2_dynamic_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005973, VkglTestCase_005973_1, VkglTestCase_005973_2);

#define VkglTestCase_005974_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005974_2 "ng_array.vec2_dynamic_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005974, VkglTestCase_005974_1, VkglTestCase_005974_2);

#define VkglTestCase_005975_1 "dEQP-GLES3.functional.shaders.indexing.vary"
#define VkglTestCase_005975_2 "ing_array.vec2_static_loop_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005975, VkglTestCase_005975_1, VkglTestCase_005975_2);

#define VkglTestCase_005976_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005976_2 "ng_array.vec2_static_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005976, VkglTestCase_005976_1, VkglTestCase_005976_2);

#define VkglTestCase_005977_1 "dEQP-GLES3.functional.shaders.indexing.varying"
#define VkglTestCase_005977_2 "_array.vec2_static_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005977, VkglTestCase_005977_1, VkglTestCase_005977_2);

#define VkglTestCase_005978_1 "dEQP-GLES3.functional.shaders.indexing.varying"
#define VkglTestCase_005978_2 "_array.vec2_static_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005978, VkglTestCase_005978_1, VkglTestCase_005978_2);

#define VkglTestCase_005979_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005979_2 "ng_array.vec2_dynamic_loop_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005979, VkglTestCase_005979_1, VkglTestCase_005979_2);

#define VkglTestCase_005980_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005980_2 "ng_array.vec2_dynamic_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005980, VkglTestCase_005980_1, VkglTestCase_005980_2);

#define VkglTestCase_005981_1 "dEQP-GLES3.functional.shaders.indexing.varying"
#define VkglTestCase_005981_2 "_array.vec2_dynamic_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005981, VkglTestCase_005981_1, VkglTestCase_005981_2);

#define VkglTestCase_005982_1 "dEQP-GLES3.functional.shaders.indexing.varying_"
#define VkglTestCase_005982_2 "array.vec2_dynamic_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005982, VkglTestCase_005982_1, VkglTestCase_005982_2);

#define VkglTestCase_005983_1 "dEQP-GLES3.functional.shaders.indexing.va"
#define VkglTestCase_005983_2 "rying_array.vec3_static_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005983, VkglTestCase_005983_1, VkglTestCase_005983_2);

#define VkglTestCase_005984_1 "dEQP-GLES3.functional.shaders.indexing.va"
#define VkglTestCase_005984_2 "rying_array.vec3_static_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005984, VkglTestCase_005984_1, VkglTestCase_005984_2);

#define VkglTestCase_005985_1 "dEQP-GLES3.functional.shaders.indexing.vary"
#define VkglTestCase_005985_2 "ing_array.vec3_static_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005985, VkglTestCase_005985_1, VkglTestCase_005985_2);

#define VkglTestCase_005986_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005986_2 "ng_array.vec3_static_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005986, VkglTestCase_005986_1, VkglTestCase_005986_2);

#define VkglTestCase_005987_1 "dEQP-GLES3.functional.shaders.indexing.va"
#define VkglTestCase_005987_2 "rying_array.vec3_dynamic_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005987, VkglTestCase_005987_1, VkglTestCase_005987_2);

#define VkglTestCase_005988_1 "dEQP-GLES3.functional.shaders.indexing.var"
#define VkglTestCase_005988_2 "ying_array.vec3_dynamic_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005988, VkglTestCase_005988_1, VkglTestCase_005988_2);

#define VkglTestCase_005989_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005989_2 "ng_array.vec3_dynamic_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005989, VkglTestCase_005989_1, VkglTestCase_005989_2);

#define VkglTestCase_005990_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005990_2 "ng_array.vec3_dynamic_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005990, VkglTestCase_005990_1, VkglTestCase_005990_2);

#define VkglTestCase_005991_1 "dEQP-GLES3.functional.shaders.indexing.vary"
#define VkglTestCase_005991_2 "ing_array.vec3_static_loop_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005991, VkglTestCase_005991_1, VkglTestCase_005991_2);

#define VkglTestCase_005992_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005992_2 "ng_array.vec3_static_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005992, VkglTestCase_005992_1, VkglTestCase_005992_2);

#define VkglTestCase_005993_1 "dEQP-GLES3.functional.shaders.indexing.varying"
#define VkglTestCase_005993_2 "_array.vec3_static_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005993, VkglTestCase_005993_1, VkglTestCase_005993_2);

#define VkglTestCase_005994_1 "dEQP-GLES3.functional.shaders.indexing.varying"
#define VkglTestCase_005994_2 "_array.vec3_static_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005994, VkglTestCase_005994_1, VkglTestCase_005994_2);

#define VkglTestCase_005995_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005995_2 "ng_array.vec3_dynamic_loop_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005995, VkglTestCase_005995_1, VkglTestCase_005995_2);

#define VkglTestCase_005996_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_005996_2 "ng_array.vec3_dynamic_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005996, VkglTestCase_005996_1, VkglTestCase_005996_2);

#define VkglTestCase_005997_1 "dEQP-GLES3.functional.shaders.indexing.varying"
#define VkglTestCase_005997_2 "_array.vec3_dynamic_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005997, VkglTestCase_005997_1, VkglTestCase_005997_2);

#define VkglTestCase_005998_1 "dEQP-GLES3.functional.shaders.indexing.varying_"
#define VkglTestCase_005998_2 "array.vec3_dynamic_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005998, VkglTestCase_005998_1, VkglTestCase_005998_2);

#define VkglTestCase_005999_1 "dEQP-GLES3.functional.shaders.indexing.va"
#define VkglTestCase_005999_2 "rying_array.vec4_static_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005999, VkglTestCase_005999_1, VkglTestCase_005999_2);

#define VkglTestCase_006000_1 "dEQP-GLES3.functional.shaders.indexing.va"
#define VkglTestCase_006000_2 "rying_array.vec4_static_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_006000, VkglTestCase_006000_1, VkglTestCase_006000_2);

#define VkglTestCase_006001_1 "dEQP-GLES3.functional.shaders.indexing.vary"
#define VkglTestCase_006001_2 "ing_array.vec4_static_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_006001, VkglTestCase_006001_1, VkglTestCase_006001_2);

#define VkglTestCase_006002_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_006002_2 "ng_array.vec4_static_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_006002, VkglTestCase_006002_1, VkglTestCase_006002_2);

#define VkglTestCase_006003_1 "dEQP-GLES3.functional.shaders.indexing.va"
#define VkglTestCase_006003_2 "rying_array.vec4_dynamic_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_006003, VkglTestCase_006003_1, VkglTestCase_006003_2);

#define VkglTestCase_006004_1 "dEQP-GLES3.functional.shaders.indexing.var"
#define VkglTestCase_006004_2 "ying_array.vec4_dynamic_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_006004, VkglTestCase_006004_1, VkglTestCase_006004_2);

#define VkglTestCase_006005_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_006005_2 "ng_array.vec4_dynamic_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_006005, VkglTestCase_006005_1, VkglTestCase_006005_2);

#define VkglTestCase_006006_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_006006_2 "ng_array.vec4_dynamic_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_006006, VkglTestCase_006006_1, VkglTestCase_006006_2);

#define VkglTestCase_006007_1 "dEQP-GLES3.functional.shaders.indexing.vary"
#define VkglTestCase_006007_2 "ing_array.vec4_static_loop_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_006007, VkglTestCase_006007_1, VkglTestCase_006007_2);

#define VkglTestCase_006008_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_006008_2 "ng_array.vec4_static_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_006008, VkglTestCase_006008_1, VkglTestCase_006008_2);

#define VkglTestCase_006009_1 "dEQP-GLES3.functional.shaders.indexing.varying"
#define VkglTestCase_006009_2 "_array.vec4_static_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_006009, VkglTestCase_006009_1, VkglTestCase_006009_2);

#define VkglTestCase_006010_1 "dEQP-GLES3.functional.shaders.indexing.varying"
#define VkglTestCase_006010_2 "_array.vec4_static_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_006010, VkglTestCase_006010_1, VkglTestCase_006010_2);

#define VkglTestCase_006011_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_006011_2 "ng_array.vec4_dynamic_loop_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_006011, VkglTestCase_006011_1, VkglTestCase_006011_2);

#define VkglTestCase_006012_1 "dEQP-GLES3.functional.shaders.indexing.varyi"
#define VkglTestCase_006012_2 "ng_array.vec4_dynamic_loop_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_006012, VkglTestCase_006012_1, VkglTestCase_006012_2);

#define VkglTestCase_006013_1 "dEQP-GLES3.functional.shaders.indexing.varying"
#define VkglTestCase_006013_2 "_array.vec4_dynamic_loop_write_static_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_006013, VkglTestCase_006013_1, VkglTestCase_006013_2);

#define VkglTestCase_006014_1 "dEQP-GLES3.functional.shaders.indexing.varying_"
#define VkglTestCase_006014_2 "array.vec4_dynamic_loop_write_dynamic_loop_read"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_006014, VkglTestCase_006014_1, VkglTestCase_006014_2);
