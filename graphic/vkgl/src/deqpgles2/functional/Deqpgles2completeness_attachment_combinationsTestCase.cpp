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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012935_1 "dEQP-GLES2.functional.fbo.completeness.at"
#define VkglTestCase_012935_2 "tachment_combinations.none_none_none_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012935, VkglTestCase_012935_1, VkglTestCase_012935_2);

#define VkglTestCase_012936_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012936_2 "ttachment_combinations.none_none_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012936, VkglTestCase_012936_1, VkglTestCase_012936_2);

#define VkglTestCase_012937_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012937_2 "ttachment_combinations.none_none_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012937, VkglTestCase_012937_1, VkglTestCase_012937_2);

#define VkglTestCase_012938_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012938_2 "ttachment_combinations.none_none_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012938, VkglTestCase_012938_1, VkglTestCase_012938_2);

#define VkglTestCase_012939_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012939_2 "ttachment_combinations.none_none_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012939, VkglTestCase_012939_1, VkglTestCase_012939_2);

#define VkglTestCase_012940_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012940_2 "ttachment_combinations.none_none_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012940, VkglTestCase_012940_1, VkglTestCase_012940_2);

#define VkglTestCase_012941_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012941_2 "ttachment_combinations.none_none_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012941, VkglTestCase_012941_1, VkglTestCase_012941_2);

#define VkglTestCase_012942_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012942_2 "ttachment_combinations.none_none_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012942, VkglTestCase_012942_1, VkglTestCase_012942_2);

#define VkglTestCase_012943_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012943_2 "ttachment_combinations.none_none_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012943, VkglTestCase_012943_1, VkglTestCase_012943_2);

#define VkglTestCase_012944_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012944_2 "ttachment_combinations.none_rbo_none_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012944, VkglTestCase_012944_1, VkglTestCase_012944_2);

#define VkglTestCase_012945_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012945_2 "ttachment_combinations.none_rbo_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012945, VkglTestCase_012945_1, VkglTestCase_012945_2);

#define VkglTestCase_012946_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012946_2 "ttachment_combinations.none_rbo_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012946, VkglTestCase_012946_1, VkglTestCase_012946_2);

#define VkglTestCase_012947_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012947_2 "ttachment_combinations.none_rbo_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012947, VkglTestCase_012947_1, VkglTestCase_012947_2);

#define VkglTestCase_012948_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012948_2 "attachment_combinations.none_rbo_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012948, VkglTestCase_012948_1, VkglTestCase_012948_2);

#define VkglTestCase_012949_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012949_2 "attachment_combinations.none_rbo_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012949, VkglTestCase_012949_1, VkglTestCase_012949_2);

#define VkglTestCase_012950_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012950_2 "ttachment_combinations.none_rbo_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012950, VkglTestCase_012950_1, VkglTestCase_012950_2);

#define VkglTestCase_012951_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012951_2 "attachment_combinations.none_rbo_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012951, VkglTestCase_012951_1, VkglTestCase_012951_2);

#define VkglTestCase_012952_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012952_2 "attachment_combinations.none_rbo_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012952, VkglTestCase_012952_1, VkglTestCase_012952_2);

#define VkglTestCase_012953_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012953_2 "ttachment_combinations.none_tex_none_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012953, VkglTestCase_012953_1, VkglTestCase_012953_2);

#define VkglTestCase_012954_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012954_2 "ttachment_combinations.none_tex_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012954, VkglTestCase_012954_1, VkglTestCase_012954_2);

#define VkglTestCase_012955_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012955_2 "ttachment_combinations.none_tex_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012955, VkglTestCase_012955_1, VkglTestCase_012955_2);

#define VkglTestCase_012956_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012956_2 "ttachment_combinations.none_tex_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012956, VkglTestCase_012956_1, VkglTestCase_012956_2);

#define VkglTestCase_012957_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012957_2 "attachment_combinations.none_tex_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012957, VkglTestCase_012957_1, VkglTestCase_012957_2);

#define VkglTestCase_012958_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012958_2 "attachment_combinations.none_tex_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012958, VkglTestCase_012958_1, VkglTestCase_012958_2);

#define VkglTestCase_012959_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012959_2 "ttachment_combinations.none_tex_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012959, VkglTestCase_012959_1, VkglTestCase_012959_2);

#define VkglTestCase_012960_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012960_2 "attachment_combinations.none_tex_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012960, VkglTestCase_012960_1, VkglTestCase_012960_2);

#define VkglTestCase_012961_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012961_2 "attachment_combinations.none_tex_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012961, VkglTestCase_012961_1, VkglTestCase_012961_2);

#define VkglTestCase_012962_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012962_2 "ttachment_combinations.rbo_none_none_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012962, VkglTestCase_012962_1, VkglTestCase_012962_2);

#define VkglTestCase_012963_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012963_2 "ttachment_combinations.rbo_none_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012963, VkglTestCase_012963_1, VkglTestCase_012963_2);

#define VkglTestCase_012964_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012964_2 "ttachment_combinations.rbo_none_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012964, VkglTestCase_012964_1, VkglTestCase_012964_2);

#define VkglTestCase_012965_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012965_2 "ttachment_combinations.rbo_none_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012965, VkglTestCase_012965_1, VkglTestCase_012965_2);

#define VkglTestCase_012966_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012966_2 "attachment_combinations.rbo_none_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012966, VkglTestCase_012966_1, VkglTestCase_012966_2);

#define VkglTestCase_012967_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012967_2 "attachment_combinations.rbo_none_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012967, VkglTestCase_012967_1, VkglTestCase_012967_2);

#define VkglTestCase_012968_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012968_2 "ttachment_combinations.rbo_none_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012968, VkglTestCase_012968_1, VkglTestCase_012968_2);

#define VkglTestCase_012969_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012969_2 "attachment_combinations.rbo_none_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012969, VkglTestCase_012969_1, VkglTestCase_012969_2);

#define VkglTestCase_012970_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012970_2 "attachment_combinations.rbo_none_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012970, VkglTestCase_012970_1, VkglTestCase_012970_2);

#define VkglTestCase_012971_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012971_2 "ttachment_combinations.rbo_rbo_none_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012971, VkglTestCase_012971_1, VkglTestCase_012971_2);

#define VkglTestCase_012972_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012972_2 "attachment_combinations.rbo_rbo_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012972, VkglTestCase_012972_1, VkglTestCase_012972_2);

#define VkglTestCase_012973_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012973_2 "attachment_combinations.rbo_rbo_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012973, VkglTestCase_012973_1, VkglTestCase_012973_2);

#define VkglTestCase_012974_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012974_2 "attachment_combinations.rbo_rbo_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012974, VkglTestCase_012974_1, VkglTestCase_012974_2);

#define VkglTestCase_012975_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012975_2 "attachment_combinations.rbo_rbo_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012975, VkglTestCase_012975_1, VkglTestCase_012975_2);

#define VkglTestCase_012976_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012976_2 "attachment_combinations.rbo_rbo_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012976, VkglTestCase_012976_1, VkglTestCase_012976_2);

#define VkglTestCase_012977_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012977_2 "attachment_combinations.rbo_rbo_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012977, VkglTestCase_012977_1, VkglTestCase_012977_2);

#define VkglTestCase_012978_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012978_2 "attachment_combinations.rbo_rbo_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012978, VkglTestCase_012978_1, VkglTestCase_012978_2);

#define VkglTestCase_012979_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012979_2 "attachment_combinations.rbo_rbo_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012979, VkglTestCase_012979_1, VkglTestCase_012979_2);

#define VkglTestCase_012980_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012980_2 "ttachment_combinations.rbo_tex_none_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012980, VkglTestCase_012980_1, VkglTestCase_012980_2);

#define VkglTestCase_012981_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012981_2 "attachment_combinations.rbo_tex_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012981, VkglTestCase_012981_1, VkglTestCase_012981_2);

#define VkglTestCase_012982_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012982_2 "attachment_combinations.rbo_tex_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012982, VkglTestCase_012982_1, VkglTestCase_012982_2);

#define VkglTestCase_012983_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012983_2 "attachment_combinations.rbo_tex_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012983, VkglTestCase_012983_1, VkglTestCase_012983_2);

#define VkglTestCase_012984_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012984_2 "attachment_combinations.rbo_tex_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012984, VkglTestCase_012984_1, VkglTestCase_012984_2);

#define VkglTestCase_012985_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012985_2 "attachment_combinations.rbo_tex_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012985, VkglTestCase_012985_1, VkglTestCase_012985_2);

#define VkglTestCase_012986_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012986_2 "attachment_combinations.rbo_tex_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012986, VkglTestCase_012986_1, VkglTestCase_012986_2);

#define VkglTestCase_012987_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012987_2 "attachment_combinations.rbo_tex_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012987, VkglTestCase_012987_1, VkglTestCase_012987_2);

#define VkglTestCase_012988_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012988_2 "attachment_combinations.rbo_tex_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012988, VkglTestCase_012988_1, VkglTestCase_012988_2);

#define VkglTestCase_012989_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012989_2 "ttachment_combinations.tex_none_none_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012989, VkglTestCase_012989_1, VkglTestCase_012989_2);

#define VkglTestCase_012990_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012990_2 "ttachment_combinations.tex_none_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012990, VkglTestCase_012990_1, VkglTestCase_012990_2);

#define VkglTestCase_012991_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012991_2 "ttachment_combinations.tex_none_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012991, VkglTestCase_012991_1, VkglTestCase_012991_2);

#define VkglTestCase_012992_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012992_2 "ttachment_combinations.tex_none_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012992, VkglTestCase_012992_1, VkglTestCase_012992_2);

#define VkglTestCase_012993_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012993_2 "attachment_combinations.tex_none_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012993, VkglTestCase_012993_1, VkglTestCase_012993_2);

#define VkglTestCase_012994_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012994_2 "attachment_combinations.tex_none_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012994, VkglTestCase_012994_1, VkglTestCase_012994_2);

#define VkglTestCase_012995_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012995_2 "ttachment_combinations.tex_none_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012995, VkglTestCase_012995_1, VkglTestCase_012995_2);

#define VkglTestCase_012996_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012996_2 "attachment_combinations.tex_none_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012996, VkglTestCase_012996_1, VkglTestCase_012996_2);

#define VkglTestCase_012997_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012997_2 "attachment_combinations.tex_none_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012997, VkglTestCase_012997_1, VkglTestCase_012997_2);

#define VkglTestCase_012998_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_012998_2 "ttachment_combinations.tex_rbo_none_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012998, VkglTestCase_012998_1, VkglTestCase_012998_2);

#define VkglTestCase_012999_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012999_2 "attachment_combinations.tex_rbo_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012999, VkglTestCase_012999_1, VkglTestCase_012999_2);

#define VkglTestCase_013000_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_013000_2 "attachment_combinations.tex_rbo_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013000, VkglTestCase_013000_1, VkglTestCase_013000_2);

#define VkglTestCase_013001_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_013001_2 "attachment_combinations.tex_rbo_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013001, VkglTestCase_013001_1, VkglTestCase_013001_2);

#define VkglTestCase_013002_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_013002_2 "attachment_combinations.tex_rbo_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013002, VkglTestCase_013002_1, VkglTestCase_013002_2);

#define VkglTestCase_013003_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_013003_2 "attachment_combinations.tex_rbo_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013003, VkglTestCase_013003_1, VkglTestCase_013003_2);

#define VkglTestCase_013004_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_013004_2 "attachment_combinations.tex_rbo_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013004, VkglTestCase_013004_1, VkglTestCase_013004_2);

#define VkglTestCase_013005_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_013005_2 "attachment_combinations.tex_rbo_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013005, VkglTestCase_013005_1, VkglTestCase_013005_2);

#define VkglTestCase_013006_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_013006_2 "attachment_combinations.tex_rbo_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013006, VkglTestCase_013006_1, VkglTestCase_013006_2);

#define VkglTestCase_013007_1 "dEQP-GLES2.functional.fbo.completeness.a"
#define VkglTestCase_013007_2 "ttachment_combinations.tex_tex_none_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013007, VkglTestCase_013007_1, VkglTestCase_013007_2);

#define VkglTestCase_013008_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_013008_2 "attachment_combinations.tex_tex_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013008, VkglTestCase_013008_1, VkglTestCase_013008_2);

#define VkglTestCase_013009_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_013009_2 "attachment_combinations.tex_tex_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013009, VkglTestCase_013009_1, VkglTestCase_013009_2);

#define VkglTestCase_013010_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_013010_2 "attachment_combinations.tex_tex_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013010, VkglTestCase_013010_1, VkglTestCase_013010_2);

#define VkglTestCase_013011_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_013011_2 "attachment_combinations.tex_tex_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013011, VkglTestCase_013011_1, VkglTestCase_013011_2);

#define VkglTestCase_013012_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_013012_2 "attachment_combinations.tex_tex_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013012, VkglTestCase_013012_1, VkglTestCase_013012_2);

#define VkglTestCase_013013_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_013013_2 "attachment_combinations.tex_tex_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013013, VkglTestCase_013013_1, VkglTestCase_013013_2);

#define VkglTestCase_013014_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_013014_2 "attachment_combinations.tex_tex_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013014, VkglTestCase_013014_1, VkglTestCase_013014_2);

#define VkglTestCase_013015_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_013015_2 "attachment_combinations.tex_tex_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013015, VkglTestCase_013015_1, VkglTestCase_013015_2);

#define VkglTestCase_013016_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_013016_2 "attachment_combinations.exists_supported"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_013016, VkglTestCase_013016_1, VkglTestCase_013016_2);
