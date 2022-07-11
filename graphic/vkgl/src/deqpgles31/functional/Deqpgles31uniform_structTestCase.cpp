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
#include "../ActsDeqpgles310005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004675_1 "dEQP-GLES31.functional.shaders.l"
#define VkglTestCase_004675_2 "inkage.es31.uniform.struct.basic"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004675, VkglTestCase_004675_1, VkglTestCase_004675_2);

#define VkglTestCase_004676_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004676_2 "age.es31.uniform.struct.vertex_only"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004676, VkglTestCase_004676_1, VkglTestCase_004676_2);

#define VkglTestCase_004677_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004677_2 "ge.es31.uniform.struct.fragment_only"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004677, VkglTestCase_004677_1, VkglTestCase_004677_2);

#define VkglTestCase_004678_1 "dEQP-GLES31.functional.shaders.li"
#define VkglTestCase_004678_2 "nkage.es31.uniform.struct.partial"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004678, VkglTestCase_004678_1, VkglTestCase_004678_2);

#define VkglTestCase_004679_1 "dEQP-GLES31.functional.shaders."
#define VkglTestCase_004679_2 "linkage.es31.uniform.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004679, VkglTestCase_004679_1, VkglTestCase_004679_2);

#define VkglTestCase_004680_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004680_2 "e.es31.uniform.struct.vertex_only_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004680, VkglTestCase_004680_1, VkglTestCase_004680_2);

#define VkglTestCase_004681_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004681_2 ".es31.uniform.struct.fragment_only_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004681, VkglTestCase_004681_1, VkglTestCase_004681_2);

#define VkglTestCase_004682_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004682_2 "age.es31.uniform.struct.partial_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004682, VkglTestCase_004682_1, VkglTestCase_004682_2);

#define VkglTestCase_004683_1 "dEQP-GLES31.functional.shaders.lin"
#define VkglTestCase_004683_2 "kage.es31.uniform.struct.vec4_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004683, VkglTestCase_004683_1, VkglTestCase_004683_2);

#define VkglTestCase_004684_1 "dEQP-GLES31.functional.shaders.linkage.e"
#define VkglTestCase_004684_2 "s31.uniform.struct.vertex_only_vec4_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004684, VkglTestCase_004684_1, VkglTestCase_004684_2);

#define VkglTestCase_004685_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004685_2 "31.uniform.struct.fragment_only_vec4_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004685, VkglTestCase_004685_1, VkglTestCase_004685_2);

#define VkglTestCase_004686_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004686_2 ".es31.uniform.struct.partial_vec4_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004686, VkglTestCase_004686_1, VkglTestCase_004686_2);

#define VkglTestCase_004687_1 "dEQP-GLES31.functional.shaders.lin"
#define VkglTestCase_004687_2 "kage.es31.uniform.struct.vec4_float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004687, VkglTestCase_004687_1, VkglTestCase_004687_2);

#define VkglTestCase_004688_1 "dEQP-GLES31.functional.shaders.linkage.e"
#define VkglTestCase_004688_2 "s31.uniform.struct.vertex_only_vec4_float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004688, VkglTestCase_004688_1, VkglTestCase_004688_2);

#define VkglTestCase_004689_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004689_2 "31.uniform.struct.fragment_only_vec4_float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004689, VkglTestCase_004689_1, VkglTestCase_004689_2);

#define VkglTestCase_004690_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004690_2 ".es31.uniform.struct.partial_vec4_float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004690, VkglTestCase_004690_1, VkglTestCase_004690_2);

#define VkglTestCase_004691_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004691_2 "es31.uniform.struct.partial_vec4_struct"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004691, VkglTestCase_004691_1, VkglTestCase_004691_2);

#define VkglTestCase_004692_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004692_2 "31.uniform.struct.partial_vec4_vec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004692, VkglTestCase_004692_1, VkglTestCase_004692_2);

#define VkglTestCase_004693_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004693_2 ".es31.uniform.struct.partial_vec2_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004693, VkglTestCase_004693_1, VkglTestCase_004693_2);

#define VkglTestCase_004694_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004694_2 "e.es31.uniform.struct.partial_vec2_int"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004694, VkglTestCase_004694_1, VkglTestCase_004694_2);

#define VkglTestCase_004695_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004695_2 ".es31.uniform.struct.partial_int_float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004695, VkglTestCase_004695_1, VkglTestCase_004695_2);

#define VkglTestCase_004696_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004696_2 ".es31.uniform.struct.partial_bvec2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004696, VkglTestCase_004696_1, VkglTestCase_004696_2);

#define VkglTestCase_004697_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004697_2 ".es31.uniform.struct.partial_ivec2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004697, VkglTestCase_004697_1, VkglTestCase_004697_2);

#define VkglTestCase_004698_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004698_2 "es31.uniform.struct.partial_ivec2_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004698, VkglTestCase_004698_1, VkglTestCase_004698_2);

#define VkglTestCase_004699_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004699_2 "e.es31.uniform.struct.type_conflict_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004699, VkglTestCase_004699_1, VkglTestCase_004699_2);

#define VkglTestCase_004700_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004700_2 "e.es31.uniform.struct.type_conflict_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004700, VkglTestCase_004700_1, VkglTestCase_004700_2);

#define VkglTestCase_004701_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004701_2 "e.es31.uniform.struct.type_conflict_3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004701, VkglTestCase_004701_1, VkglTestCase_004701_2);

#define VkglTestCase_004702_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004702_2 "es31.uniform.struct.precision_conflict_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004702, VkglTestCase_004702_1, VkglTestCase_004702_2);

#define VkglTestCase_004703_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004703_2 "es31.uniform.struct.precision_conflict_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004703, VkglTestCase_004703_1, VkglTestCase_004703_2);

#define VkglTestCase_004704_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004704_2 "es31.uniform.struct.precision_conflict_3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004704, VkglTestCase_004704_1, VkglTestCase_004704_2);

#define VkglTestCase_004705_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004705_2 "es31.uniform.struct.precision_conflict_4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004705, VkglTestCase_004705_1, VkglTestCase_004705_2);

#define VkglTestCase_004706_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004706_2 ".es31.uniform.struct.light_struct_highp"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004706, VkglTestCase_004706_1, VkglTestCase_004706_2);

#define VkglTestCase_004707_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004707_2 "es31.uniform.struct.light_struct_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004707, VkglTestCase_004707_1, VkglTestCase_004707_2);

#define VkglTestCase_004935_1 "dEQP-GLES31.functional.shaders.l"
#define VkglTestCase_004935_2 "inkage.es32.uniform.struct.basic"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004935, VkglTestCase_004935_1, VkglTestCase_004935_2);

#define VkglTestCase_004936_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004936_2 "age.es32.uniform.struct.vertex_only"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004936, VkglTestCase_004936_1, VkglTestCase_004936_2);

#define VkglTestCase_004937_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004937_2 "ge.es32.uniform.struct.fragment_only"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004937, VkglTestCase_004937_1, VkglTestCase_004937_2);

#define VkglTestCase_004938_1 "dEQP-GLES31.functional.shaders.li"
#define VkglTestCase_004938_2 "nkage.es32.uniform.struct.partial"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004938, VkglTestCase_004938_1, VkglTestCase_004938_2);

#define VkglTestCase_004939_1 "dEQP-GLES31.functional.shaders."
#define VkglTestCase_004939_2 "linkage.es32.uniform.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004939, VkglTestCase_004939_1, VkglTestCase_004939_2);

#define VkglTestCase_004940_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004940_2 "e.es32.uniform.struct.vertex_only_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004940, VkglTestCase_004940_1, VkglTestCase_004940_2);

#define VkglTestCase_004941_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004941_2 ".es32.uniform.struct.fragment_only_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004941, VkglTestCase_004941_1, VkglTestCase_004941_2);

#define VkglTestCase_004942_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004942_2 "age.es32.uniform.struct.partial_vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004942, VkglTestCase_004942_1, VkglTestCase_004942_2);

#define VkglTestCase_004943_1 "dEQP-GLES31.functional.shaders.lin"
#define VkglTestCase_004943_2 "kage.es32.uniform.struct.vec4_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004943, VkglTestCase_004943_1, VkglTestCase_004943_2);

#define VkglTestCase_004944_1 "dEQP-GLES31.functional.shaders.linkage.e"
#define VkglTestCase_004944_2 "s32.uniform.struct.vertex_only_vec4_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004944, VkglTestCase_004944_1, VkglTestCase_004944_2);

#define VkglTestCase_004945_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004945_2 "32.uniform.struct.fragment_only_vec4_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004945, VkglTestCase_004945_1, VkglTestCase_004945_2);

#define VkglTestCase_004946_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004946_2 ".es32.uniform.struct.partial_vec4_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004946, VkglTestCase_004946_1, VkglTestCase_004946_2);

#define VkglTestCase_004947_1 "dEQP-GLES31.functional.shaders.lin"
#define VkglTestCase_004947_2 "kage.es32.uniform.struct.vec4_float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004947, VkglTestCase_004947_1, VkglTestCase_004947_2);

#define VkglTestCase_004948_1 "dEQP-GLES31.functional.shaders.linkage.e"
#define VkglTestCase_004948_2 "s32.uniform.struct.vertex_only_vec4_float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004948, VkglTestCase_004948_1, VkglTestCase_004948_2);

#define VkglTestCase_004949_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004949_2 "32.uniform.struct.fragment_only_vec4_float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004949, VkglTestCase_004949_1, VkglTestCase_004949_2);

#define VkglTestCase_004950_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004950_2 ".es32.uniform.struct.partial_vec4_float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004950, VkglTestCase_004950_1, VkglTestCase_004950_2);

#define VkglTestCase_004951_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004951_2 "es32.uniform.struct.partial_vec4_struct"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004951, VkglTestCase_004951_1, VkglTestCase_004951_2);

#define VkglTestCase_004952_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004952_2 "32.uniform.struct.partial_vec4_vec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004952, VkglTestCase_004952_1, VkglTestCase_004952_2);

#define VkglTestCase_004953_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004953_2 ".es32.uniform.struct.partial_vec2_vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004953, VkglTestCase_004953_1, VkglTestCase_004953_2);

#define VkglTestCase_004954_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004954_2 "e.es32.uniform.struct.partial_vec2_int"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004954, VkglTestCase_004954_1, VkglTestCase_004954_2);

#define VkglTestCase_004955_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004955_2 ".es32.uniform.struct.partial_int_float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004955, VkglTestCase_004955_1, VkglTestCase_004955_2);

#define VkglTestCase_004956_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004956_2 ".es32.uniform.struct.partial_bvec2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004956, VkglTestCase_004956_1, VkglTestCase_004956_2);

#define VkglTestCase_004957_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004957_2 ".es32.uniform.struct.partial_ivec2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004957, VkglTestCase_004957_1, VkglTestCase_004957_2);

#define VkglTestCase_004958_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004958_2 "es32.uniform.struct.partial_ivec2_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004958, VkglTestCase_004958_1, VkglTestCase_004958_2);

#define VkglTestCase_004959_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004959_2 "e.es32.uniform.struct.type_conflict_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004959, VkglTestCase_004959_1, VkglTestCase_004959_2);

#define VkglTestCase_004960_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004960_2 "e.es32.uniform.struct.type_conflict_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004960, VkglTestCase_004960_1, VkglTestCase_004960_2);

#define VkglTestCase_004961_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004961_2 "e.es32.uniform.struct.type_conflict_3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004961, VkglTestCase_004961_1, VkglTestCase_004961_2);

#define VkglTestCase_004962_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004962_2 "es32.uniform.struct.precision_conflict_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004962, VkglTestCase_004962_1, VkglTestCase_004962_2);

#define VkglTestCase_004963_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004963_2 "es32.uniform.struct.precision_conflict_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004963, VkglTestCase_004963_1, VkglTestCase_004963_2);

#define VkglTestCase_004964_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004964_2 "es32.uniform.struct.precision_conflict_3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004964, VkglTestCase_004964_1, VkglTestCase_004964_2);

#define VkglTestCase_004965_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004965_2 "es32.uniform.struct.precision_conflict_4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004965, VkglTestCase_004965_1, VkglTestCase_004965_2);

#define VkglTestCase_004966_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004966_2 ".es32.uniform.struct.light_struct_highp"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004966, VkglTestCase_004966_1, VkglTestCase_004966_2);

#define VkglTestCase_004967_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004967_2 "es32.uniform.struct.light_struct_mediump"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004967, VkglTestCase_004967_1, VkglTestCase_004967_2);
