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
#include "../ActsDeqpgles20014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013662_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013662_2 "ive_api.shader.create_shader"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013662, VkglTestCase_013662_1, VkglTestCase_013662_2);

#define VkglTestCase_013663_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013663_2 "ive_api.shader.shader_source"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013663, VkglTestCase_013663_1, VkglTestCase_013663_2);

#define VkglTestCase_013664_1 "dEQP-GLES2.functional.negati"
#define VkglTestCase_013664_2 "ve_api.shader.compile_shader"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013664, VkglTestCase_013664_1, VkglTestCase_013664_2);

#define VkglTestCase_013665_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013665_2 "ive_api.shader.delete_shader"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013665, VkglTestCase_013665_1, VkglTestCase_013665_2);

#define VkglTestCase_013666_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013666_2 "ive_api.shader.shader_binary"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013666, VkglTestCase_013666_1, VkglTestCase_013666_2);

#define VkglTestCase_013667_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013667_2 "ive_api.shader.attach_shader"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013667, VkglTestCase_013667_1, VkglTestCase_013667_2);

#define VkglTestCase_013668_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013668_2 "ive_api.shader.detach_shader"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013668, VkglTestCase_013668_1, VkglTestCase_013668_2);

#define VkglTestCase_013669_1 "dEQP-GLES2.functional.negat"
#define VkglTestCase_013669_2 "ive_api.shader.link_program"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013669, VkglTestCase_013669_1, VkglTestCase_013669_2);

#define VkglTestCase_013670_1 "dEQP-GLES2.functional.nega"
#define VkglTestCase_013670_2 "tive_api.shader.use_program"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013670, VkglTestCase_013670_1, VkglTestCase_013670_2);

#define VkglTestCase_013671_1 "dEQP-GLES2.functional.negati"
#define VkglTestCase_013671_2 "ve_api.shader.delete_program"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013671, VkglTestCase_013671_1, VkglTestCase_013671_2);

#define VkglTestCase_013672_1 "dEQP-GLES2.functional.negativ"
#define VkglTestCase_013672_2 "e_api.shader.get_active_attrib"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013672, VkglTestCase_013672_1, VkglTestCase_013672_2);

#define VkglTestCase_013673_1 "dEQP-GLES2.functional.negative"
#define VkglTestCase_013673_2 "_api.shader.get_attrib_location"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013673, VkglTestCase_013673_1, VkglTestCase_013673_2);

#define VkglTestCase_013674_1 "dEQP-GLES2.functional.negative_"
#define VkglTestCase_013674_2 "api.shader.get_uniform_location"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013674, VkglTestCase_013674_1, VkglTestCase_013674_2);

#define VkglTestCase_013675_1 "dEQP-GLES2.functional.negative_"
#define VkglTestCase_013675_2 "api.shader.bind_attrib_location"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013675, VkglTestCase_013675_1, VkglTestCase_013675_2);

#define VkglTestCase_013676_1 "dEQP-GLES2.functional.negative"
#define VkglTestCase_013676_2 "_api.shader.get_active_uniform"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013676, VkglTestCase_013676_1, VkglTestCase_013676_2);

#define VkglTestCase_013677_1 "dEQP-GLES2.functional.negativ"
#define VkglTestCase_013677_2 "e_api.shader.validate_program"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013677, VkglTestCase_013677_1, VkglTestCase_013677_2);

#define VkglTestCase_013678_1 "dEQP-GLES2.functional.negative_a"
#define VkglTestCase_013678_2 "pi.shader.release_shader_compiler"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013678, VkglTestCase_013678_1, VkglTestCase_013678_2);

#define VkglTestCase_013679_1 "dEQP-GLES2.functional.negative_ap"
#define VkglTestCase_013679_2 "i.shader.uniformf_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013679, VkglTestCase_013679_1, VkglTestCase_013679_2);

#define VkglTestCase_013680_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013680_2 ".shader.uniformf_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013680, VkglTestCase_013680_1, VkglTestCase_013680_2);

#define VkglTestCase_013681_1 "dEQP-GLES2.functional.negative_ap"
#define VkglTestCase_013681_2 "i.shader.uniformf_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013681, VkglTestCase_013681_1, VkglTestCase_013681_2);

#define VkglTestCase_013682_1 "dEQP-GLES2.functional.negative_ap"
#define VkglTestCase_013682_2 "i.shader.uniformfv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013682, VkglTestCase_013682_1, VkglTestCase_013682_2);

#define VkglTestCase_013683_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013683_2 ".shader.uniformfv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013683, VkglTestCase_013683_1, VkglTestCase_013683_2);

#define VkglTestCase_013684_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013684_2 ".shader.uniformfv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013684, VkglTestCase_013684_1, VkglTestCase_013684_2);

#define VkglTestCase_013685_1 "dEQP-GLES2.functional.negative_a"
#define VkglTestCase_013685_2 "pi.shader.uniformfv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013685, VkglTestCase_013685_1, VkglTestCase_013685_2);

#define VkglTestCase_013686_1 "dEQP-GLES2.functional.negative_ap"
#define VkglTestCase_013686_2 "i.shader.uniformi_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013686, VkglTestCase_013686_1, VkglTestCase_013686_2);

#define VkglTestCase_013687_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013687_2 ".shader.uniformi_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013687, VkglTestCase_013687_1, VkglTestCase_013687_2);

#define VkglTestCase_013688_1 "dEQP-GLES2.functional.negative_ap"
#define VkglTestCase_013688_2 "i.shader.uniformi_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013688, VkglTestCase_013688_1, VkglTestCase_013688_2);

#define VkglTestCase_013689_1 "dEQP-GLES2.functional.negative_ap"
#define VkglTestCase_013689_2 "i.shader.uniformiv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013689, VkglTestCase_013689_1, VkglTestCase_013689_2);

#define VkglTestCase_013690_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013690_2 ".shader.uniformiv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013690, VkglTestCase_013690_1, VkglTestCase_013690_2);

#define VkglTestCase_013691_1 "dEQP-GLES2.functional.negative_api"
#define VkglTestCase_013691_2 ".shader.uniformiv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013691, VkglTestCase_013691_1, VkglTestCase_013691_2);

#define VkglTestCase_013692_1 "dEQP-GLES2.functional.negative_a"
#define VkglTestCase_013692_2 "pi.shader.uniformiv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013692, VkglTestCase_013692_1, VkglTestCase_013692_2);

#define VkglTestCase_013693_1 "dEQP-GLES2.functional.negative_api.sh"
#define VkglTestCase_013693_2 "ader.uniform_matrixfv_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013693, VkglTestCase_013693_1, VkglTestCase_013693_2);

#define VkglTestCase_013694_1 "dEQP-GLES2.functional.negative_api.sha"
#define VkglTestCase_013694_2 "der.uniform_matrixfv_incompatible_type"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013694, VkglTestCase_013694_1, VkglTestCase_013694_2);

#define VkglTestCase_013695_1 "dEQP-GLES2.functional.negative_api.sh"
#define VkglTestCase_013695_2 "ader.uniform_matrixfv_invalid_location"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013695, VkglTestCase_013695_1, VkglTestCase_013695_2);

#define VkglTestCase_013696_1 "dEQP-GLES2.functional.negative_api.s"
#define VkglTestCase_013696_2 "hader.uniform_matrixfv_invalid_count"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013696, VkglTestCase_013696_1, VkglTestCase_013696_2);

#define VkglTestCase_013697_1 "dEQP-GLES2.functional.negative_api.sha"
#define VkglTestCase_013697_2 "der.uniform_matrixfv_invalid_transpose"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013697, VkglTestCase_013697_1, VkglTestCase_013697_2);
