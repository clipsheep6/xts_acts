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
#include "../UboBaseFunc.h"
#include "../ActsUbo0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001304, "dEQP-VK.ubo.random.scalar_types.0.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001305, "dEQP-VK.ubo.random.scalar_types.1.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001306, "dEQP-VK.ubo.random.scalar_types.2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001307, "dEQP-VK.ubo.random.scalar_types.3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001308, "dEQP-VK.ubo.random.scalar_types.4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001309, "dEQP-VK.ubo.random.scalar_types.5.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001310, "dEQP-VK.ubo.random.scalar_types.6.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001311, "dEQP-VK.ubo.random.scalar_types.7.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001312, "dEQP-VK.ubo.random.scalar_types.8.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001313, "dEQP-VK.ubo.random.scalar_types.9.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001314, "dEQP-VK.ubo.random.scalar_types.10.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001315, "dEQP-VK.ubo.random.scalar_types.11.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001316, "dEQP-VK.ubo.random.scalar_types.12.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001317, "dEQP-VK.ubo.random.scalar_types.13.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001318, "dEQP-VK.ubo.random.scalar_types.14.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001319, "dEQP-VK.ubo.random.scalar_types.15.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001320, "dEQP-VK.ubo.random.scalar_types.16.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001321, "dEQP-VK.ubo.random.scalar_types.17.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001322, "dEQP-VK.ubo.random.scalar_types.18.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001323, "dEQP-VK.ubo.random.scalar_types.19.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001324, "dEQP-VK.ubo.random.scalar_types.20.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001325, "dEQP-VK.ubo.random.scalar_types.21.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001326, "dEQP-VK.ubo.random.scalar_types.22.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001327, "dEQP-VK.ubo.random.scalar_types.23.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001328, "dEQP-VK.ubo.random.scalar_types.24.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001329, "dEQP-VK.ubo.random.vector_types.0.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001330, "dEQP-VK.ubo.random.vector_types.1.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001331, "dEQP-VK.ubo.random.vector_types.2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001332, "dEQP-VK.ubo.random.vector_types.3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001333, "dEQP-VK.ubo.random.vector_types.4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001334, "dEQP-VK.ubo.random.vector_types.5.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001335, "dEQP-VK.ubo.random.vector_types.6.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001336, "dEQP-VK.ubo.random.vector_types.7.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001337, "dEQP-VK.ubo.random.vector_types.8.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001338, "dEQP-VK.ubo.random.vector_types.9.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001339, "dEQP-VK.ubo.random.vector_types.10.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001340, "dEQP-VK.ubo.random.vector_types.11.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001341, "dEQP-VK.ubo.random.vector_types.12.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001342, "dEQP-VK.ubo.random.vector_types.13.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001343, "dEQP-VK.ubo.random.vector_types.14.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001344, "dEQP-VK.ubo.random.vector_types.15.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001345, "dEQP-VK.ubo.random.vector_types.16.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001346, "dEQP-VK.ubo.random.vector_types.17.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001347, "dEQP-VK.ubo.random.vector_types.18.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001348, "dEQP-VK.ubo.random.vector_types.19.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001349, "dEQP-VK.ubo.random.vector_types.20.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001350, "dEQP-VK.ubo.random.vector_types.21.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001351, "dEQP-VK.ubo.random.vector_types.22.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001352, "dEQP-VK.ubo.random.vector_types.23.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001353, "dEQP-VK.ubo.random.vector_types.24.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001354, "dEQP-VK.ubo.random.basic_types.0.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001355, "dEQP-VK.ubo.random.basic_types.1.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001356, "dEQP-VK.ubo.random.basic_types.2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001357, "dEQP-VK.ubo.random.basic_types.3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001358, "dEQP-VK.ubo.random.basic_types.4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001359, "dEQP-VK.ubo.random.basic_types.5.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001360, "dEQP-VK.ubo.random.basic_types.6.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001361, "dEQP-VK.ubo.random.basic_types.7.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001362, "dEQP-VK.ubo.random.basic_types.8.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001363, "dEQP-VK.ubo.random.basic_types.9.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001364, "dEQP-VK.ubo.random.basic_types.10.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001365, "dEQP-VK.ubo.random.basic_types.11.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001366, "dEQP-VK.ubo.random.basic_types.12.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001367, "dEQP-VK.ubo.random.basic_types.13.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001368, "dEQP-VK.ubo.random.basic_types.14.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001369, "dEQP-VK.ubo.random.basic_types.15.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001370, "dEQP-VK.ubo.random.basic_types.16.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001371, "dEQP-VK.ubo.random.basic_types.17.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001372, "dEQP-VK.ubo.random.basic_types.18.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001373, "dEQP-VK.ubo.random.basic_types.19.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001374, "dEQP-VK.ubo.random.basic_types.20.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001375, "dEQP-VK.ubo.random.basic_types.21.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001376, "dEQP-VK.ubo.random.basic_types.22.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001377, "dEQP-VK.ubo.random.basic_types.23.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001378, "dEQP-VK.ubo.random.basic_types.24.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001379, "dEQP-VK.ubo.random.basic_arrays.0.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001380, "dEQP-VK.ubo.random.basic_arrays.1.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001381, "dEQP-VK.ubo.random.basic_arrays.2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001382, "dEQP-VK.ubo.random.basic_arrays.3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001383, "dEQP-VK.ubo.random.basic_arrays.4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001384, "dEQP-VK.ubo.random.basic_arrays.5.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001385, "dEQP-VK.ubo.random.basic_arrays.6.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001386, "dEQP-VK.ubo.random.basic_arrays.7.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001387, "dEQP-VK.ubo.random.basic_arrays.8.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001388, "dEQP-VK.ubo.random.basic_arrays.9.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001389, "dEQP-VK.ubo.random.basic_arrays.10.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001390, "dEQP-VK.ubo.random.basic_arrays.11.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001391, "dEQP-VK.ubo.random.basic_arrays.12.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001392, "dEQP-VK.ubo.random.basic_arrays.13.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001393, "dEQP-VK.ubo.random.basic_arrays.14.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001394, "dEQP-VK.ubo.random.basic_arrays.15.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001395, "dEQP-VK.ubo.random.basic_arrays.16.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001396, "dEQP-VK.ubo.random.basic_arrays.17.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001397, "dEQP-VK.ubo.random.basic_arrays.18.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001398, "dEQP-VK.ubo.random.basic_arrays.19.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001399, "dEQP-VK.ubo.random.basic_arrays.20.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001400, "dEQP-VK.ubo.random.basic_arrays.21.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001401, "dEQP-VK.ubo.random.basic_arrays.22.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001402, "dEQP-VK.ubo.random.basic_arrays.23.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001403, "dEQP-VK.ubo.random.basic_arrays.24.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001404, "dEQP-VK.ubo.random.basic_instance_arrays.0.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001405, "dEQP-VK.ubo.random.basic_instance_arrays.1.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001406, "dEQP-VK.ubo.random.basic_instance_arrays.2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001407, "dEQP-VK.ubo.random.basic_instance_arrays.3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001408, "dEQP-VK.ubo.random.basic_instance_arrays.4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001409, "dEQP-VK.ubo.random.basic_instance_arrays.5.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001410, "dEQP-VK.ubo.random.basic_instance_arrays.6.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001411, "dEQP-VK.ubo.random.basic_instance_arrays.7.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001412, "dEQP-VK.ubo.random.basic_instance_arrays.8.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001413, "dEQP-VK.ubo.random.basic_instance_arrays.9.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001414, "dEQP-VK.ubo.random.basic_instance_arrays.10.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001415, "dEQP-VK.ubo.random.basic_instance_arrays.11.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001416, "dEQP-VK.ubo.random.basic_instance_arrays.12.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001417, "dEQP-VK.ubo.random.basic_instance_arrays.13.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001418, "dEQP-VK.ubo.random.basic_instance_arrays.14.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001419, "dEQP-VK.ubo.random.basic_instance_arrays.15.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001420, "dEQP-VK.ubo.random.basic_instance_arrays.16.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001421, "dEQP-VK.ubo.random.basic_instance_arrays.17.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001422, "dEQP-VK.ubo.random.basic_instance_arrays.18.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001423, "dEQP-VK.ubo.random.basic_instance_arrays.19.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001424, "dEQP-VK.ubo.random.basic_instance_arrays.20.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001425, "dEQP-VK.ubo.random.basic_instance_arrays.21.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001426, "dEQP-VK.ubo.random.basic_instance_arrays.22.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001427, "dEQP-VK.ubo.random.basic_instance_arrays.23.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001428, "dEQP-VK.ubo.random.basic_instance_arrays.24.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001429, "dEQP-VK.ubo.random.nested_structs.0.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001430, "dEQP-VK.ubo.random.nested_structs.1.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001431, "dEQP-VK.ubo.random.nested_structs.2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001432, "dEQP-VK.ubo.random.nested_structs.3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001433, "dEQP-VK.ubo.random.nested_structs.4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001434, "dEQP-VK.ubo.random.nested_structs.5.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001435, "dEQP-VK.ubo.random.nested_structs.6.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001436, "dEQP-VK.ubo.random.nested_structs.7.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001437, "dEQP-VK.ubo.random.nested_structs.8.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001438, "dEQP-VK.ubo.random.nested_structs.9.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001439, "dEQP-VK.ubo.random.nested_structs.10.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001440, "dEQP-VK.ubo.random.nested_structs.11.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001441, "dEQP-VK.ubo.random.nested_structs.12.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001442, "dEQP-VK.ubo.random.nested_structs.13.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001443, "dEQP-VK.ubo.random.nested_structs.14.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001444, "dEQP-VK.ubo.random.nested_structs.15.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001445, "dEQP-VK.ubo.random.nested_structs.16.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001446, "dEQP-VK.ubo.random.nested_structs.17.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001447, "dEQP-VK.ubo.random.nested_structs.18.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001448, "dEQP-VK.ubo.random.nested_structs.19.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001449, "dEQP-VK.ubo.random.nested_structs.20.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001450, "dEQP-VK.ubo.random.nested_structs.21.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001451, "dEQP-VK.ubo.random.nested_structs.22.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001452, "dEQP-VK.ubo.random.nested_structs.23.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001453, "dEQP-VK.ubo.random.nested_structs.24.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001454, "dEQP-VK.ubo.random.nested_structs_arrays.0.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001455, "dEQP-VK.ubo.random.nested_structs_arrays.1.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001456, "dEQP-VK.ubo.random.nested_structs_arrays.2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001457, "dEQP-VK.ubo.random.nested_structs_arrays.3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001458, "dEQP-VK.ubo.random.nested_structs_arrays.4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001459, "dEQP-VK.ubo.random.nested_structs_arrays.5.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001460, "dEQP-VK.ubo.random.nested_structs_arrays.6.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001461, "dEQP-VK.ubo.random.nested_structs_arrays.7.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001462, "dEQP-VK.ubo.random.nested_structs_arrays.8.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001463, "dEQP-VK.ubo.random.nested_structs_arrays.9.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001464, "dEQP-VK.ubo.random.nested_structs_arrays.10.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001465, "dEQP-VK.ubo.random.nested_structs_arrays.11.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001466, "dEQP-VK.ubo.random.nested_structs_arrays.12.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001467, "dEQP-VK.ubo.random.nested_structs_arrays.13.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001468, "dEQP-VK.ubo.random.nested_structs_arrays.14.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001469, "dEQP-VK.ubo.random.nested_structs_arrays.15.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001470, "dEQP-VK.ubo.random.nested_structs_arrays.16.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001471, "dEQP-VK.ubo.random.nested_structs_arrays.17.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001472, "dEQP-VK.ubo.random.nested_structs_arrays.18.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001473, "dEQP-VK.ubo.random.nested_structs_arrays.19.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001474, "dEQP-VK.ubo.random.nested_structs_arrays.20.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001475, "dEQP-VK.ubo.random.nested_structs_arrays.21.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001476, "dEQP-VK.ubo.random.nested_structs_arrays.22.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001477, "dEQP-VK.ubo.random.nested_structs_arrays.23.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001478, "dEQP-VK.ubo.random.nested_structs_arrays.24.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001479, "dEQP-VK.ubo.random.nested_structs_instance_arrays.0.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001480, "dEQP-VK.ubo.random.nested_structs_instance_arrays.1.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001481, "dEQP-VK.ubo.random.nested_structs_instance_arrays.2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001482, "dEQP-VK.ubo.random.nested_structs_instance_arrays.3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001483, "dEQP-VK.ubo.random.nested_structs_instance_arrays.4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001484, "dEQP-VK.ubo.random.nested_structs_instance_arrays.5.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001485, "dEQP-VK.ubo.random.nested_structs_instance_arrays.6.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001486, "dEQP-VK.ubo.random.nested_structs_instance_arrays.7.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001487, "dEQP-VK.ubo.random.nested_structs_instance_arrays.8.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001488, "dEQP-VK.ubo.random.nested_structs_instance_arrays.9.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001489, "dEQP-VK.ubo.random.nested_structs_instance_arrays.10.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001490, "dEQP-VK.ubo.random.nested_structs_instance_arrays.11.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001491, "dEQP-VK.ubo.random.nested_structs_instance_arrays.12.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001492, "dEQP-VK.ubo.random.nested_structs_instance_arrays.13.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001493, "dEQP-VK.ubo.random.nested_structs_instance_arrays.14.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001494, "dEQP-VK.ubo.random.nested_structs_instance_arrays.15.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001495, "dEQP-VK.ubo.random.nested_structs_instance_arrays.16.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001496, "dEQP-VK.ubo.random.nested_structs_instance_arrays.17.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001497, "dEQP-VK.ubo.random.nested_structs_instance_arrays.18.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001498, "dEQP-VK.ubo.random.nested_structs_instance_arrays.19.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001499, "dEQP-VK.ubo.random.nested_structs_instance_arrays.20.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001500, "dEQP-VK.ubo.random.nested_structs_instance_arrays.21.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001501, "dEQP-VK.ubo.random.nested_structs_instance_arrays.22.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001502, "dEQP-VK.ubo.random.nested_structs_instance_arrays.23.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001503, "dEQP-VK.ubo.random.nested_structs_instance_arrays.24.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001504, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.0.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001505, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.1.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001506, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001507, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001508, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001509, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.5.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001510, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.6.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001511, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.7.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001512, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.8.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001513, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.9.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001514, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.10.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001515, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.11.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001516, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.12.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001517, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.13.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001518, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.14.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001519, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.15.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001520, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.16.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001521, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.17.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001522, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.18.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001523, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.19.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001524, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.20.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001525, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.21.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001526, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.22.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001527, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.23.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001528, "dEQP-VK.ubo.random.nested_structs_arrays_instance_arrays.24.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001529, "dEQP-VK.ubo.random.all_per_block_buffers.0.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001530, "dEQP-VK.ubo.random.all_per_block_buffers.1.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001531, "dEQP-VK.ubo.random.all_per_block_buffers.2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001532, "dEQP-VK.ubo.random.all_per_block_buffers.3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001533, "dEQP-VK.ubo.random.all_per_block_buffers.4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001534, "dEQP-VK.ubo.random.all_per_block_buffers.5.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001535, "dEQP-VK.ubo.random.all_per_block_buffers.6.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001536, "dEQP-VK.ubo.random.all_per_block_buffers.7.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001537, "dEQP-VK.ubo.random.all_per_block_buffers.8.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001538, "dEQP-VK.ubo.random.all_per_block_buffers.9.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001539, "dEQP-VK.ubo.random.all_per_block_buffers.10.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001540, "dEQP-VK.ubo.random.all_per_block_buffers.11.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001541, "dEQP-VK.ubo.random.all_per_block_buffers.12.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001542, "dEQP-VK.ubo.random.all_per_block_buffers.13.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001543, "dEQP-VK.ubo.random.all_per_block_buffers.14.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001544, "dEQP-VK.ubo.random.all_per_block_buffers.15.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001545, "dEQP-VK.ubo.random.all_per_block_buffers.16.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001546, "dEQP-VK.ubo.random.all_per_block_buffers.17.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001547, "dEQP-VK.ubo.random.all_per_block_buffers.18.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001548, "dEQP-VK.ubo.random.all_per_block_buffers.19.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001549, "dEQP-VK.ubo.random.all_per_block_buffers.20.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001550, "dEQP-VK.ubo.random.all_per_block_buffers.21.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001551, "dEQP-VK.ubo.random.all_per_block_buffers.22.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001552, "dEQP-VK.ubo.random.all_per_block_buffers.23.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001553, "dEQP-VK.ubo.random.all_per_block_buffers.24.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001554, "dEQP-VK.ubo.random.all_per_block_buffers.25.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001555, "dEQP-VK.ubo.random.all_per_block_buffers.26.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001556, "dEQP-VK.ubo.random.all_per_block_buffers.27.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001557, "dEQP-VK.ubo.random.all_per_block_buffers.28.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001558, "dEQP-VK.ubo.random.all_per_block_buffers.29.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001559, "dEQP-VK.ubo.random.all_per_block_buffers.30.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001560, "dEQP-VK.ubo.random.all_per_block_buffers.31.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001561, "dEQP-VK.ubo.random.all_per_block_buffers.32.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001562, "dEQP-VK.ubo.random.all_per_block_buffers.33.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001563, "dEQP-VK.ubo.random.all_per_block_buffers.34.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001564, "dEQP-VK.ubo.random.all_per_block_buffers.35.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001565, "dEQP-VK.ubo.random.all_per_block_buffers.36.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001566, "dEQP-VK.ubo.random.all_per_block_buffers.37.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001567, "dEQP-VK.ubo.random.all_per_block_buffers.38.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001568, "dEQP-VK.ubo.random.all_per_block_buffers.39.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001569, "dEQP-VK.ubo.random.all_per_block_buffers.40.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001570, "dEQP-VK.ubo.random.all_per_block_buffers.41.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001571, "dEQP-VK.ubo.random.all_per_block_buffers.42.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001572, "dEQP-VK.ubo.random.all_per_block_buffers.43.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001573, "dEQP-VK.ubo.random.all_per_block_buffers.44.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001574, "dEQP-VK.ubo.random.all_per_block_buffers.45.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001575, "dEQP-VK.ubo.random.all_per_block_buffers.46.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001576, "dEQP-VK.ubo.random.all_per_block_buffers.47.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001577, "dEQP-VK.ubo.random.all_per_block_buffers.48.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001578, "dEQP-VK.ubo.random.all_per_block_buffers.49.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001579, "dEQP-VK.ubo.random.all_shared_buffer.0.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001580, "dEQP-VK.ubo.random.all_shared_buffer.1.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001581, "dEQP-VK.ubo.random.all_shared_buffer.2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001582, "dEQP-VK.ubo.random.all_shared_buffer.3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001583, "dEQP-VK.ubo.random.all_shared_buffer.4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001584, "dEQP-VK.ubo.random.all_shared_buffer.5.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001585, "dEQP-VK.ubo.random.all_shared_buffer.6.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001586, "dEQP-VK.ubo.random.all_shared_buffer.7.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001587, "dEQP-VK.ubo.random.all_shared_buffer.8.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001588, "dEQP-VK.ubo.random.all_shared_buffer.9.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001589, "dEQP-VK.ubo.random.all_shared_buffer.10.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001590, "dEQP-VK.ubo.random.all_shared_buffer.11.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001591, "dEQP-VK.ubo.random.all_shared_buffer.12.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001592, "dEQP-VK.ubo.random.all_shared_buffer.13.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001593, "dEQP-VK.ubo.random.all_shared_buffer.14.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001594, "dEQP-VK.ubo.random.all_shared_buffer.15.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001595, "dEQP-VK.ubo.random.all_shared_buffer.16.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001596, "dEQP-VK.ubo.random.all_shared_buffer.17.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001597, "dEQP-VK.ubo.random.all_shared_buffer.18.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001598, "dEQP-VK.ubo.random.all_shared_buffer.19.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001599, "dEQP-VK.ubo.random.all_shared_buffer.20.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001600, "dEQP-VK.ubo.random.all_shared_buffer.21.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001601, "dEQP-VK.ubo.random.all_shared_buffer.22.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001602, "dEQP-VK.ubo.random.all_shared_buffer.23.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001603, "dEQP-VK.ubo.random.all_shared_buffer.24.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001604, "dEQP-VK.ubo.random.all_shared_buffer.25.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001605, "dEQP-VK.ubo.random.all_shared_buffer.26.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001606, "dEQP-VK.ubo.random.all_shared_buffer.27.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001607, "dEQP-VK.ubo.random.all_shared_buffer.28.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001608, "dEQP-VK.ubo.random.all_shared_buffer.29.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001609, "dEQP-VK.ubo.random.all_shared_buffer.30.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001610, "dEQP-VK.ubo.random.all_shared_buffer.31.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001611, "dEQP-VK.ubo.random.all_shared_buffer.32.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001612, "dEQP-VK.ubo.random.all_shared_buffer.33.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001613, "dEQP-VK.ubo.random.all_shared_buffer.34.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001614, "dEQP-VK.ubo.random.all_shared_buffer.35.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001615, "dEQP-VK.ubo.random.all_shared_buffer.36.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001616, "dEQP-VK.ubo.random.all_shared_buffer.37.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001617, "dEQP-VK.ubo.random.all_shared_buffer.38.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001618, "dEQP-VK.ubo.random.all_shared_buffer.39.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001619, "dEQP-VK.ubo.random.all_shared_buffer.40.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001620, "dEQP-VK.ubo.random.all_shared_buffer.41.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001621, "dEQP-VK.ubo.random.all_shared_buffer.42.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001622, "dEQP-VK.ubo.random.all_shared_buffer.43.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001623, "dEQP-VK.ubo.random.all_shared_buffer.44.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001624, "dEQP-VK.ubo.random.all_shared_buffer.45.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001625, "dEQP-VK.ubo.random.all_shared_buffer.46.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001626, "dEQP-VK.ubo.random.all_shared_buffer.47.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001627, "dEQP-VK.ubo.random.all_shared_buffer.48.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001628, "dEQP-VK.ubo.random.all_shared_buffer.49.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001629, "dEQP-VK.ubo.random.all_out_of_order_offsets.0.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001630, "dEQP-VK.ubo.random.all_out_of_order_offsets.1.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001631, "dEQP-VK.ubo.random.all_out_of_order_offsets.2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001632, "dEQP-VK.ubo.random.all_out_of_order_offsets.3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001633, "dEQP-VK.ubo.random.all_out_of_order_offsets.4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001634, "dEQP-VK.ubo.random.all_out_of_order_offsets.5.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001635, "dEQP-VK.ubo.random.all_out_of_order_offsets.6.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001636, "dEQP-VK.ubo.random.all_out_of_order_offsets.7.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001637, "dEQP-VK.ubo.random.all_out_of_order_offsets.8.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001638, "dEQP-VK.ubo.random.all_out_of_order_offsets.9.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001639, "dEQP-VK.ubo.random.all_out_of_order_offsets.10.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001640, "dEQP-VK.ubo.random.all_out_of_order_offsets.11.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001641, "dEQP-VK.ubo.random.all_out_of_order_offsets.12.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001642, "dEQP-VK.ubo.random.all_out_of_order_offsets.13.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001643, "dEQP-VK.ubo.random.all_out_of_order_offsets.14.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001644, "dEQP-VK.ubo.random.all_out_of_order_offsets.15.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001645, "dEQP-VK.ubo.random.all_out_of_order_offsets.16.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001646, "dEQP-VK.ubo.random.all_out_of_order_offsets.17.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001647, "dEQP-VK.ubo.random.all_out_of_order_offsets.18.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001648, "dEQP-VK.ubo.random.all_out_of_order_offsets.19.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001649, "dEQP-VK.ubo.random.all_out_of_order_offsets.20.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001650, "dEQP-VK.ubo.random.all_out_of_order_offsets.21.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001651, "dEQP-VK.ubo.random.all_out_of_order_offsets.22.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001652, "dEQP-VK.ubo.random.all_out_of_order_offsets.23.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001653, "dEQP-VK.ubo.random.all_out_of_order_offsets.24.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001654, "dEQP-VK.ubo.random.all_out_of_order_offsets.25.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001655, "dEQP-VK.ubo.random.all_out_of_order_offsets.26.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001656, "dEQP-VK.ubo.random.all_out_of_order_offsets.27.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001657, "dEQP-VK.ubo.random.all_out_of_order_offsets.28.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001658, "dEQP-VK.ubo.random.all_out_of_order_offsets.29.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001659, "dEQP-VK.ubo.random.all_out_of_order_offsets.30.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001660, "dEQP-VK.ubo.random.all_out_of_order_offsets.31.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001661, "dEQP-VK.ubo.random.all_out_of_order_offsets.32.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001662, "dEQP-VK.ubo.random.all_out_of_order_offsets.33.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001663, "dEQP-VK.ubo.random.all_out_of_order_offsets.34.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001664, "dEQP-VK.ubo.random.all_out_of_order_offsets.35.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001665, "dEQP-VK.ubo.random.all_out_of_order_offsets.36.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001666, "dEQP-VK.ubo.random.all_out_of_order_offsets.37.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001667, "dEQP-VK.ubo.random.all_out_of_order_offsets.38.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001668, "dEQP-VK.ubo.random.all_out_of_order_offsets.39.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001669, "dEQP-VK.ubo.random.all_out_of_order_offsets.40.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001670, "dEQP-VK.ubo.random.all_out_of_order_offsets.41.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001671, "dEQP-VK.ubo.random.all_out_of_order_offsets.42.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001672, "dEQP-VK.ubo.random.all_out_of_order_offsets.43.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001673, "dEQP-VK.ubo.random.all_out_of_order_offsets.44.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001674, "dEQP-VK.ubo.random.all_out_of_order_offsets.45.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001675, "dEQP-VK.ubo.random.all_out_of_order_offsets.46.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001676, "dEQP-VK.ubo.random.all_out_of_order_offsets.47.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001677, "dEQP-VK.ubo.random.all_out_of_order_offsets.48.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001678, "dEQP-VK.ubo.random.all_out_of_order_offsets.49.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001679, "dEQP-VK.ubo.random.scalar.0.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001680, "dEQP-VK.ubo.random.scalar.1.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001681, "dEQP-VK.ubo.random.scalar.2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001682, "dEQP-VK.ubo.random.scalar.3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001683, "dEQP-VK.ubo.random.scalar.4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001684, "dEQP-VK.ubo.random.scalar.5.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001685, "dEQP-VK.ubo.random.scalar.6.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001686, "dEQP-VK.ubo.random.scalar.7.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001687, "dEQP-VK.ubo.random.scalar.8.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001688, "dEQP-VK.ubo.random.scalar.9.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001689, "dEQP-VK.ubo.random.scalar.10.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001690, "dEQP-VK.ubo.random.scalar.11.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001691, "dEQP-VK.ubo.random.scalar.12.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001692, "dEQP-VK.ubo.random.scalar.13.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001693, "dEQP-VK.ubo.random.scalar.14.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001694, "dEQP-VK.ubo.random.scalar.15.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001695, "dEQP-VK.ubo.random.scalar.16.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001696, "dEQP-VK.ubo.random.scalar.17.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001697, "dEQP-VK.ubo.random.scalar.18.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001698, "dEQP-VK.ubo.random.scalar.19.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001699, "dEQP-VK.ubo.random.scalar.20.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001700, "dEQP-VK.ubo.random.scalar.21.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001701, "dEQP-VK.ubo.random.scalar.22.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001702, "dEQP-VK.ubo.random.scalar.23.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001703, "dEQP-VK.ubo.random.scalar.24.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001704, "dEQP-VK.ubo.random.scalar.25.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001705, "dEQP-VK.ubo.random.scalar.26.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001706, "dEQP-VK.ubo.random.scalar.27.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001707, "dEQP-VK.ubo.random.scalar.28.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001708, "dEQP-VK.ubo.random.scalar.29.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001709, "dEQP-VK.ubo.random.scalar.30.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001710, "dEQP-VK.ubo.random.scalar.31.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001711, "dEQP-VK.ubo.random.scalar.32.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001712, "dEQP-VK.ubo.random.scalar.33.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001713, "dEQP-VK.ubo.random.scalar.34.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001714, "dEQP-VK.ubo.random.scalar.35.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001715, "dEQP-VK.ubo.random.scalar.36.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001716, "dEQP-VK.ubo.random.scalar.37.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001717, "dEQP-VK.ubo.random.scalar.38.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001718, "dEQP-VK.ubo.random.scalar.39.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001719, "dEQP-VK.ubo.random.scalar.40.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001720, "dEQP-VK.ubo.random.scalar.41.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001721, "dEQP-VK.ubo.random.scalar.42.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001722, "dEQP-VK.ubo.random.scalar.43.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001723, "dEQP-VK.ubo.random.scalar.44.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001724, "dEQP-VK.ubo.random.scalar.45.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001725, "dEQP-VK.ubo.random.scalar.46.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001726, "dEQP-VK.ubo.random.scalar.47.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001727, "dEQP-VK.ubo.random.scalar.48.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001728, "dEQP-VK.ubo.random.scalar.49.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001729, "dEQP-VK.ubo.random.scalar.50.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001730, "dEQP-VK.ubo.random.scalar.51.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001731, "dEQP-VK.ubo.random.scalar.52.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001732, "dEQP-VK.ubo.random.scalar.53.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001733, "dEQP-VK.ubo.random.scalar.54.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001734, "dEQP-VK.ubo.random.scalar.55.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001735, "dEQP-VK.ubo.random.scalar.56.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001736, "dEQP-VK.ubo.random.scalar.57.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001737, "dEQP-VK.ubo.random.scalar.58.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001738, "dEQP-VK.ubo.random.scalar.59.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001739, "dEQP-VK.ubo.random.scalar.60.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001740, "dEQP-VK.ubo.random.scalar.61.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001741, "dEQP-VK.ubo.random.scalar.62.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001742, "dEQP-VK.ubo.random.scalar.63.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001743, "dEQP-VK.ubo.random.scalar.64.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001744, "dEQP-VK.ubo.random.scalar.65.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001745, "dEQP-VK.ubo.random.scalar.66.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001746, "dEQP-VK.ubo.random.scalar.67.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001747, "dEQP-VK.ubo.random.scalar.68.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001748, "dEQP-VK.ubo.random.scalar.69.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001749, "dEQP-VK.ubo.random.scalar.70.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001750, "dEQP-VK.ubo.random.scalar.71.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001751, "dEQP-VK.ubo.random.scalar.72.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001752, "dEQP-VK.ubo.random.scalar.73.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001753, "dEQP-VK.ubo.random.scalar.74.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001754, "dEQP-VK.ubo.random.scalar.75.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001755, "dEQP-VK.ubo.random.scalar.76.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001756, "dEQP-VK.ubo.random.scalar.77.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001757, "dEQP-VK.ubo.random.scalar.78.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001758, "dEQP-VK.ubo.random.scalar.79.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001759, "dEQP-VK.ubo.random.scalar.80.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001760, "dEQP-VK.ubo.random.scalar.81.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001761, "dEQP-VK.ubo.random.scalar.82.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001762, "dEQP-VK.ubo.random.scalar.83.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001763, "dEQP-VK.ubo.random.scalar.84.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001764, "dEQP-VK.ubo.random.scalar.85.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001765, "dEQP-VK.ubo.random.scalar.86.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001766, "dEQP-VK.ubo.random.scalar.87.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001767, "dEQP-VK.ubo.random.scalar.88.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001768, "dEQP-VK.ubo.random.scalar.89.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001769, "dEQP-VK.ubo.random.scalar.90.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001770, "dEQP-VK.ubo.random.scalar.91.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001771, "dEQP-VK.ubo.random.scalar.92.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001772, "dEQP-VK.ubo.random.scalar.93.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001773, "dEQP-VK.ubo.random.scalar.94.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001774, "dEQP-VK.ubo.random.scalar.95.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001775, "dEQP-VK.ubo.random.scalar.96.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001776, "dEQP-VK.ubo.random.scalar.97.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001777, "dEQP-VK.ubo.random.scalar.98.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001778, "dEQP-VK.ubo.random.scalar.99.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001779, "dEQP-VK.ubo.random.descriptor_indexing.0.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001780, "dEQP-VK.ubo.random.descriptor_indexing.1.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001781, "dEQP-VK.ubo.random.descriptor_indexing.2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001782, "dEQP-VK.ubo.random.descriptor_indexing.3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001783, "dEQP-VK.ubo.random.descriptor_indexing.4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001784, "dEQP-VK.ubo.random.descriptor_indexing.5.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001785, "dEQP-VK.ubo.random.descriptor_indexing.6.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001786, "dEQP-VK.ubo.random.descriptor_indexing.7.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001787, "dEQP-VK.ubo.random.descriptor_indexing.8.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001788, "dEQP-VK.ubo.random.descriptor_indexing.9.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001789, "dEQP-VK.ubo.random.descriptor_indexing.10.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001790, "dEQP-VK.ubo.random.descriptor_indexing.11.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001791, "dEQP-VK.ubo.random.descriptor_indexing.12.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001792, "dEQP-VK.ubo.random.descriptor_indexing.13.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001793, "dEQP-VK.ubo.random.descriptor_indexing.14.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001794, "dEQP-VK.ubo.random.descriptor_indexing.15.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001795, "dEQP-VK.ubo.random.descriptor_indexing.16.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001796, "dEQP-VK.ubo.random.descriptor_indexing.17.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001797, "dEQP-VK.ubo.random.descriptor_indexing.18.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001798, "dEQP-VK.ubo.random.descriptor_indexing.19.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001799, "dEQP-VK.ubo.random.descriptor_indexing.20.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001800, "dEQP-VK.ubo.random.descriptor_indexing.21.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001801, "dEQP-VK.ubo.random.descriptor_indexing.22.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001802, "dEQP-VK.ubo.random.descriptor_indexing.23.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001803, "dEQP-VK.ubo.random.descriptor_indexing.24.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001804, "dEQP-VK.ubo.random.descriptor_indexing.25.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001805, "dEQP-VK.ubo.random.descriptor_indexing.26.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001806, "dEQP-VK.ubo.random.descriptor_indexing.27.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001807, "dEQP-VK.ubo.random.descriptor_indexing.28.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001808, "dEQP-VK.ubo.random.descriptor_indexing.29.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001809, "dEQP-VK.ubo.random.descriptor_indexing.30.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001810, "dEQP-VK.ubo.random.descriptor_indexing.31.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001811, "dEQP-VK.ubo.random.descriptor_indexing.32.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001812, "dEQP-VK.ubo.random.descriptor_indexing.33.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001813, "dEQP-VK.ubo.random.descriptor_indexing.34.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001814, "dEQP-VK.ubo.random.descriptor_indexing.35.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001815, "dEQP-VK.ubo.random.descriptor_indexing.36.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001816, "dEQP-VK.ubo.random.descriptor_indexing.37.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001817, "dEQP-VK.ubo.random.descriptor_indexing.38.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001818, "dEQP-VK.ubo.random.descriptor_indexing.39.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001819, "dEQP-VK.ubo.random.descriptor_indexing.40.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001820, "dEQP-VK.ubo.random.descriptor_indexing.41.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001821, "dEQP-VK.ubo.random.descriptor_indexing.42.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001822, "dEQP-VK.ubo.random.descriptor_indexing.43.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001823, "dEQP-VK.ubo.random.descriptor_indexing.44.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001824, "dEQP-VK.ubo.random.descriptor_indexing.45.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001825, "dEQP-VK.ubo.random.descriptor_indexing.46.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001826, "dEQP-VK.ubo.random.descriptor_indexing.47.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001827, "dEQP-VK.ubo.random.descriptor_indexing.48.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001828, "dEQP-VK.ubo.random.descriptor_indexing.49.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001829, "dEQP-VK.ubo.random.16bit.scalar_types.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001830, "dEQP-VK.ubo.random.16bit.vector_types.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001831, "dEQP-VK.ubo.random.16bit.basic_types.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001832, "dEQP-VK.ubo.random.16bit.basic_arrays.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001833, "dEQP-VK.ubo.random.16bit.basic_instance_arrays.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001834, "dEQP-VK.ubo.random.16bit.nested_structs.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001835, "dEQP-VK.ubo.random.16bit.nested_structs_arrays.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001836, "dEQP-VK.ubo.random.16bit.nested_structs_instance_arrays.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001837, "dEQP-VK.ubo.random.16bit.nested_structs_arrays_instance_arrays.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001838, "dEQP-VK.ubo.random.16bit.all_per_block_buffers.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001839, "dEQP-VK.ubo.random.16bit.all_shared_buffer.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001840, "dEQP-VK.ubo.random.16bit.all_out_of_order_offsets.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001841, "dEQP-VK.ubo.random.16bit.scalar.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001842, "dEQP-VK.ubo.random.16bit.descriptor_indexing.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001843, "dEQP-VK.ubo.random.8bit.scalar_types.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001844, "dEQP-VK.ubo.random.8bit.vector_types.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001845, "dEQP-VK.ubo.random.8bit.basic_types.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001846, "dEQP-VK.ubo.random.8bit.basic_arrays.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001847, "dEQP-VK.ubo.random.8bit.basic_instance_arrays.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001848, "dEQP-VK.ubo.random.8bit.nested_structs.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001849, "dEQP-VK.ubo.random.8bit.nested_structs_arrays.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001850, "dEQP-VK.ubo.random.8bit.nested_structs_instance_arrays.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001851, "dEQP-VK.ubo.random.8bit.nested_structs_arrays_instance_arrays.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001852, "dEQP-VK.ubo.random.8bit.all_per_block_buffers.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001853, "dEQP-VK.ubo.random.8bit.all_shared_buffer.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001854, "dEQP-VK.ubo.random.8bit.all_out_of_order_offsets.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001855, "dEQP-VK.ubo.random.8bit.scalar.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001856, "dEQP-VK.ubo.random.8bit.descriptor_indexing.*");
