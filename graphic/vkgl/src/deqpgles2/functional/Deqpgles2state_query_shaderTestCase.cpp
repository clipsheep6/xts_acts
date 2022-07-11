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
#include "../ActsDeqpgles20016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015662_1 "dEQP-GLES2.functional.stat"
#define VkglTestCase_015662_2 "e_query.shader.shader_type"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015662, VkglTestCase_015662_1, VkglTestCase_015662_2);

#define VkglTestCase_015663_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015663_2 "ry.shader.shader_compile_status"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015663, VkglTestCase_015663_1, VkglTestCase_015663_2);

#define VkglTestCase_015664_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015664_2 "ry.shader.shader_info_log_length"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015664, VkglTestCase_015664_1, VkglTestCase_015664_2);

#define VkglTestCase_015665_1 "dEQP-GLES2.functional.state_qu"
#define VkglTestCase_015665_2 "ery.shader.shader_source_length"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015665, VkglTestCase_015665_1, VkglTestCase_015665_2);

#define VkglTestCase_015666_1 "dEQP-GLES2.functional.state"
#define VkglTestCase_015666_2 "_query.shader.delete_status"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015666, VkglTestCase_015666_1, VkglTestCase_015666_2);

#define VkglTestCase_015667_1 "dEQP-GLES2.functional.state_query.s"
#define VkglTestCase_015667_2 "hader.current_vertex_attrib_initial"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015667, VkglTestCase_015667_1, VkglTestCase_015667_2);

#define VkglTestCase_015668_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015668_2 "shader.current_vertex_attrib_float"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015668, VkglTestCase_015668_1, VkglTestCase_015668_2);

#define VkglTestCase_015669_1 "dEQP-GLES2.functional.state_query.sha"
#define VkglTestCase_015669_2 "der.current_vertex_attrib_float_to_int"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015669, VkglTestCase_015669_1, VkglTestCase_015669_2);

#define VkglTestCase_015670_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015670_2 "y.shader.program_info_log_length"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015670, VkglTestCase_015670_1, VkglTestCase_015670_2);

#define VkglTestCase_015671_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015671_2 "y.shader.program_validate_status"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015671, VkglTestCase_015671_1, VkglTestCase_015671_2);

#define VkglTestCase_015672_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015672_2 "y.shader.program_attached_shaders"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015672, VkglTestCase_015672_1, VkglTestCase_015672_2);

#define VkglTestCase_015673_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015673_2 "shader.program_active_uniform_name"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015673, VkglTestCase_015673_1, VkglTestCase_015673_2);

#define VkglTestCase_015674_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015674_2 "shader.program_active_uniform_types"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015674, VkglTestCase_015674_1, VkglTestCase_015674_2);

#define VkglTestCase_015675_1 "dEQP-GLES2.functional.state_q"
#define VkglTestCase_015675_2 "uery.shader.active_attributes"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015675, VkglTestCase_015675_1, VkglTestCase_015675_2);

#define VkglTestCase_015676_1 "dEQP-GLES2.functional.state_q"
#define VkglTestCase_015676_2 "uery.shader.vertex_attrib_size"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015676, VkglTestCase_015676_1, VkglTestCase_015676_2);

#define VkglTestCase_015677_1 "dEQP-GLES2.functional.state_q"
#define VkglTestCase_015677_2 "uery.shader.vertex_attrib_type"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015677, VkglTestCase_015677_1, VkglTestCase_015677_2);

#define VkglTestCase_015678_1 "dEQP-GLES2.functional.state_qu"
#define VkglTestCase_015678_2 "ery.shader.vertex_attrib_stride"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015678, VkglTestCase_015678_1, VkglTestCase_015678_2);

#define VkglTestCase_015679_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015679_2 "y.shader.vertex_attrib_normalized"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015679, VkglTestCase_015679_1, VkglTestCase_015679_2);

#define VkglTestCase_015680_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015680_2 "shader.vertex_attrib_array_enabled"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015680, VkglTestCase_015680_1, VkglTestCase_015680_2);

#define VkglTestCase_015681_1 "dEQP-GLES2.functional.state_query.sha"
#define VkglTestCase_015681_2 "der.vertex_attrib_array_buffer_binding"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015681, VkglTestCase_015681_1, VkglTestCase_015681_2);

#define VkglTestCase_015682_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015682_2 "ry.shader.vertex_attrib_pointerv"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015682, VkglTestCase_015682_1, VkglTestCase_015682_2);

#define VkglTestCase_015683_1 "dEQP-GLES2.functional.state_qu"
#define VkglTestCase_015683_2 "ery.shader.uniform_value_float"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015683, VkglTestCase_015683_1, VkglTestCase_015683_2);

#define VkglTestCase_015684_1 "dEQP-GLES2.functional.state_q"
#define VkglTestCase_015684_2 "uery.shader.uniform_value_int"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015684, VkglTestCase_015684_1, VkglTestCase_015684_2);

#define VkglTestCase_015685_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015685_2 "ry.shader.uniform_value_boolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015685, VkglTestCase_015685_1, VkglTestCase_015685_2);

#define VkglTestCase_015686_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015686_2 "ry.shader.uniform_value_sampler"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015686, VkglTestCase_015686_1, VkglTestCase_015686_2);

#define VkglTestCase_015687_1 "dEQP-GLES2.functional.state_qu"
#define VkglTestCase_015687_2 "ery.shader.uniform_value_array"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015687, VkglTestCase_015687_1, VkglTestCase_015687_2);

#define VkglTestCase_015688_1 "dEQP-GLES2.functional.state_qu"
#define VkglTestCase_015688_2 "ery.shader.uniform_value_matrix"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015688, VkglTestCase_015688_1, VkglTestCase_015688_2);

#define VkglTestCase_015689_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015689_2 "shader.precision_vertex_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015689, VkglTestCase_015689_1, VkglTestCase_015689_2);

#define VkglTestCase_015690_1 "dEQP-GLES2.functional.state_query.s"
#define VkglTestCase_015690_2 "hader.precision_vertex_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015690, VkglTestCase_015690_1, VkglTestCase_015690_2);

#define VkglTestCase_015691_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015691_2 "shader.precision_vertex_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015691, VkglTestCase_015691_1, VkglTestCase_015691_2);

#define VkglTestCase_015692_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015692_2 ".shader.precision_vertex_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015692, VkglTestCase_015692_1, VkglTestCase_015692_2);

#define VkglTestCase_015693_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015693_2 "shader.precision_vertex_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015693, VkglTestCase_015693_1, VkglTestCase_015693_2);

#define VkglTestCase_015694_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015694_2 ".shader.precision_vertex_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015694, VkglTestCase_015694_1, VkglTestCase_015694_2);

#define VkglTestCase_015695_1 "dEQP-GLES2.functional.state_query.s"
#define VkglTestCase_015695_2 "hader.precision_fragment_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015695, VkglTestCase_015695_1, VkglTestCase_015695_2);

#define VkglTestCase_015696_1 "dEQP-GLES2.functional.state_query.sh"
#define VkglTestCase_015696_2 "ader.precision_fragment_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015696, VkglTestCase_015696_1, VkglTestCase_015696_2);

#define VkglTestCase_015697_1 "dEQP-GLES2.functional.state_query.s"
#define VkglTestCase_015697_2 "hader.precision_fragment_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015697, VkglTestCase_015697_1, VkglTestCase_015697_2);

#define VkglTestCase_015698_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015698_2 "shader.precision_fragment_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015698, VkglTestCase_015698_1, VkglTestCase_015698_2);

#define VkglTestCase_015699_1 "dEQP-GLES2.functional.state_query.s"
#define VkglTestCase_015699_2 "hader.precision_fragment_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015699, VkglTestCase_015699_1, VkglTestCase_015699_2);

#define VkglTestCase_015700_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015700_2 "shader.precision_fragment_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015700, VkglTestCase_015700_1, VkglTestCase_015700_2);
