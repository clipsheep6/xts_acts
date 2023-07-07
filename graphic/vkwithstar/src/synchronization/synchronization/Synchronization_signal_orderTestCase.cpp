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
#include "../SynchronizationBaseFunc.h"
#include "../ActsSynchronization0002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003314, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003315, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003316, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003317, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003318, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003319, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003320, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003321, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003322, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003323, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003324, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003325, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003326, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003327, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003328, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003329, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003330, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003331, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_to_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003332, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_to_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003333, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_to_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003334, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_to_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003335, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_to_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003336, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_to_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003337, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_to_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003338, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_to_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003339, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_to_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003340, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_buffer_to_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003341, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003342, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003343, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003344, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003345, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003346, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003347, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003348, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003349, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003350, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003351, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003352, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003353, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003354, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003355, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003356, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003357, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_to_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003358, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003359, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003360, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003361, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003362, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003363, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003364, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003365, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003366, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003367, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_copy_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003368, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_blit_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003369, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_blit_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003370, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_blit_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003371, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_blit_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003372, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_blit_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003373, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_blit_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003374, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_blit_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003375, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_blit_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003376, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_blit_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003377, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_blit_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003378, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003379, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003380, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003381, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003382, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003383, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003384, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003385, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003386, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003387, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003388, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003389, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003390, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003391, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003392, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003393, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003394, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_vertex_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003395, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003396, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003397, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003398, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003399, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003400, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003401, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003402, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003403, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003404, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003405, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003406, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003407, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003408, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003409, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003410, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003411, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_control_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003412, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003413, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003414, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003415, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003416, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003417, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003418, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003419, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003420, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003421, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003422, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003423, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003424, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003425, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003426, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003427, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003428, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_tess_eval_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003429, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003430, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003431, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003432, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003433, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003434, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003435, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003436, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003437, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003438, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003439, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003440, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003441, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003442, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003443, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003444, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003445, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_geometry_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003446, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003447, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003448, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003449, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003450, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003451, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003452, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003453, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003454, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003455, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003456, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003457, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003458, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003459, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003460, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003461, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003462, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_fragment_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003463, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003464, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003465, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003466, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003467, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003468, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003469, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003470, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003471, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003472, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003473, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003474, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003475, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003476, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003477, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003478, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003479, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003480, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003481, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003482, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003483, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003484, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003485, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003486, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003487, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003488, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003489, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003490, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003491, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003492, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003493, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003494, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003495, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003496, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003497, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_vertex_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003498, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_vertex_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003499, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_vertex_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003500, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_vertex_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003501, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_vertex_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003502, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_vertex_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003503, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_vertex_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003504, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_vertex_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003505, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_vertex_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003506, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_vertex_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003507, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_control_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003508, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_control_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003509, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_control_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003510, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_control_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003511, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_control_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003512, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_control_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003513, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_control_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003514, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_control_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003515, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_control_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003516, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_control_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003517, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_eval_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003518, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_eval_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003519, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_eval_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003520, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_eval_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003521, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_eval_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003522, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_eval_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003523, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_eval_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003524, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_eval_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003525, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_eval_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003526, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_tess_eval_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003527, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_geometry_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003528, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_geometry_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003529, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_geometry_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003530, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_geometry_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003531, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_geometry_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003532, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_geometry_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003533, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_geometry_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003534, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_geometry_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003535, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_geometry_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003536, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_geometry_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003537, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_fragment_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003538, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_fragment_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003539, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_fragment_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003540, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_fragment_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003541, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_fragment_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003542, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_fragment_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003543, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_fragment_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003544, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_fragment_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003545, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_fragment_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003546, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_fragment_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003547, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003548, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003549, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003550, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003551, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003552, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003553, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003554, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003555, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003556, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003557, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003558, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003559, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003560, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003561, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003562, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003563, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003564, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003565, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003566, "dEQP-VK.synchronization.signal_order.binary_semaphore.write_image_compute_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003567, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003568, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003569, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003570, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003571, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003572, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003573, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003574, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003575, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003576, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003577, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003578, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003579, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003580, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003581, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003582, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003583, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003584, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003585, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003586, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003587, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003588, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003589, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003590, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003591, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003592, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003593, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003594, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003595, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003596, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003597, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003598, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003599, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003600, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003601, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003602, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003603, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003604, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003605, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003606, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003607, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003608, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003609, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003610, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003611, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003612, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003613, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003614, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003615, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003616, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003617, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003618, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003619, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003620, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_copy_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003621, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_blit_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003622, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_blit_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003623, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_blit_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003624, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_blit_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003625, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_blit_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003626, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_blit_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003627, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_blit_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003628, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_blit_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003629, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_blit_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003630, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_blit_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003631, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003632, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003633, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003634, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003635, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003636, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003637, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003638, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003639, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003640, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003641, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003642, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003643, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003644, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003645, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003646, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003647, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_vertex_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003648, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003649, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003650, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003651, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003652, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003653, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003654, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003655, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003656, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003657, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003658, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003659, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003660, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003661, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003662, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003663, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003664, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_control_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003665, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003666, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003667, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003668, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003669, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003670, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003671, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003672, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003673, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003674, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003675, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003676, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003677, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003678, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003679, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003680, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003681, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003682, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003683, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003684, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003685, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003686, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003687, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003688, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003689, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003690, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003691, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003692, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003693, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003694, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003695, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003696, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003697, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003698, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_geometry_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003699, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003700, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003701, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003702, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003703, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003704, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003705, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003706, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003707, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003708, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003709, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003710, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003711, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003712, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003713, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003714, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003715, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_fragment_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003716, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003717, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003718, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003719, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003720, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003721, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003722, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003723, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003724, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003725, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003726, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003727, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003728, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003729, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003730, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003731, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003732, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003733, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003734, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003735, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003736, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003737, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003738, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003739, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003740, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003741, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003742, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003743, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003744, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003745, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003746, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003747, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003748, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003749, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003750, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_vertex_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003751, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_vertex_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003752, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_vertex_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003753, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_vertex_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003754, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_vertex_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003755, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_vertex_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003756, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_vertex_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003757, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_vertex_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003758, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_vertex_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003759, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_vertex_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003760, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_control_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003761, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_control_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003762, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_control_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003763, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_control_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003764, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_control_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003765, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_control_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003766, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_control_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003767, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_control_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003768, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_control_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003769, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_control_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003770, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_eval_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003771, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_eval_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003772, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_eval_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003773, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_eval_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003774, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_eval_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003775, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_eval_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003776, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_eval_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003777, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_eval_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003778, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_eval_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003779, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_tess_eval_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003780, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_geometry_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003781, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_geometry_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003782, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_geometry_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003783, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_geometry_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003784, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_geometry_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003785, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_geometry_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003786, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_geometry_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003787, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_geometry_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003788, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_geometry_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003789, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_geometry_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003790, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_fragment_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003791, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_fragment_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003792, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_fragment_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003793, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_fragment_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003794, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_fragment_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003795, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_fragment_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003796, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_fragment_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003797, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_fragment_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003798, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_fragment_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003799, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_fragment_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003800, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003801, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003802, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003803, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003804, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003805, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003806, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003807, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003808, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003809, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003810, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003811, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003812, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003813, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003814, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003815, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003816, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003817, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003818, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003819, "dEQP-VK.synchronization.signal_order.timeline_semaphore.write_image_compute_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003820, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003821, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003822, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003823, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003824, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003825, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003826, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003827, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003828, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003829, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003830, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003831, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003832, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003833, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003834, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003835, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003836, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003837, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003838, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003839, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003840, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003841, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003842, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003843, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003844, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003845, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003846, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003847, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003848, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003849, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003850, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003851, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003852, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003853, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003854, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003855, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003856, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003857, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003858, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003859, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003860, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003861, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003862, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003863, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003864, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003865, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003866, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003867, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003868, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003869, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003870, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003871, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003872, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003873, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_copy_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003874, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_blit_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003875, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_blit_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003876, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_blit_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003877, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_blit_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003878, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_blit_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003879, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_blit_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003880, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_blit_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003881, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_blit_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003882, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_blit_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003883, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_blit_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003884, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003885, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003886, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003887, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003888, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003889, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003890, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003891, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003892, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003893, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003894, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003895, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003896, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003897, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003898, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003899, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003900, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003901, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003902, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003903, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003904, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003905, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003906, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003907, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003908, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003909, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003910, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003911, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003912, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003913, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003914, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003915, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003916, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003917, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003918, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003919, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003920, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003921, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003922, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003923, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003924, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003925, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003926, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003927, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003928, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003929, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003930, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003931, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003932, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003933, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003934, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003935, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003936, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003937, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003938, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003939, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003940, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003941, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003942, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003943, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003944, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003945, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003946, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003947, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003948, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003949, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003950, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003951, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003952, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003953, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003954, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003955, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003956, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003957, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003958, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003959, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003960, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003961, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003962, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003963, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003964, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003965, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003966, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003967, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003968, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003969, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003970, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003971, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003972, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003973, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003974, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003975, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003976, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003977, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003978, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003979, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003980, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003981, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003982, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003983, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003984, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003985, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003986, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003987, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003988, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003989, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003990, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003991, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003992, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003993, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003994, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003995, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003996, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003997, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003998, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003999, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004000, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004001, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004002, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004003, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_vertex_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004004, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_vertex_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004005, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_vertex_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004006, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_vertex_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004007, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_vertex_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004008, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_vertex_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004009, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_vertex_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004010, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_vertex_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004011, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_vertex_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004012, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_vertex_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004013, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_control_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004014, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_control_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004015, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_control_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004016, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_control_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004017, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_control_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004018, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_control_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004019, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_control_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004020, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_control_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004021, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_control_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004022, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_control_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004023, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_eval_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004024, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_eval_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004025, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_eval_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004026, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_eval_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004027, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_eval_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004028, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_eval_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004029, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_eval_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004030, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_eval_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004031, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_eval_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004032, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_tess_eval_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004033, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_geometry_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004034, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_geometry_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004035, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_geometry_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004036, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_geometry_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004037, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_geometry_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004038, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_geometry_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004039, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_geometry_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004040, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_geometry_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004041, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_geometry_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004042, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_geometry_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004043, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_fragment_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004044, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_fragment_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004045, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_fragment_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004046, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_fragment_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004047, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_fragment_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004048, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_fragment_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004049, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_fragment_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004050, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_fragment_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004051, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_fragment_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004052, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_fragment_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004053, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004054, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004055, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004056, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004057, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004058, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004059, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004060, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004061, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004062, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004063, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004064, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004065, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004066, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004067, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004068, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004069, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004070, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004071, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004072, "dEQP-VK.synchronization.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004073, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004074, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004075, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004076, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004077, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004078, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004079, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004080, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004081, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004082, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004083, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004084, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004085, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004086, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004087, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004088, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004089, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004090, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004091, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004092, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004093, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004094, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004095, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004096, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004097, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004098, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004099, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004100, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004101, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004102, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004103, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004104, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004105, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004106, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004107, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004108, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004109, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004110, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004111, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004112, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004113, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004114, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004115, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004116, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004117, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004118, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004119, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004120, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004121, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004122, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004123, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004124, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004125, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004126, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_copy_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004127, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_blit_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004128, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_blit_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004129, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_blit_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004130, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_blit_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004131, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_blit_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004132, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_blit_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004133, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_blit_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004134, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_blit_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004135, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_blit_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004136, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_blit_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004137, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004138, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004139, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004140, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004141, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004142, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004143, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004144, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004145, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004146, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004147, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004148, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004149, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004150, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004151, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004152, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004153, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004154, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004155, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004156, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004157, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004158, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004159, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004160, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004161, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004162, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004163, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004164, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004165, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004166, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004167, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004168, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004169, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004170, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004171, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004172, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004173, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004174, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004175, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004176, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004177, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004178, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004179, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004180, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004181, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004182, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004183, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004184, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004185, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004186, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004187, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004188, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004189, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004190, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004191, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004192, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004193, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004194, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004195, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004196, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004197, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004198, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004199, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004200, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004201, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004202, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004203, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004204, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004205, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004206, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004207, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004208, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004209, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004210, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004211, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004212, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004213, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004214, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004215, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004216, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004217, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004218, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004219, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004220, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004221, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004222, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004223, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004224, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004225, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004226, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004227, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004228, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004229, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004230, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004231, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004232, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004233, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004234, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004235, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004236, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004237, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004238, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004239, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004240, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004241, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004242, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004243, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004244, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004245, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004246, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004247, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004248, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004249, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004250, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004251, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004252, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004253, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004254, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004255, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004256, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_vertex_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004257, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_vertex_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004258, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_vertex_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004259, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_vertex_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004260, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_vertex_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004261, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_vertex_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004262, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_vertex_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004263, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_vertex_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004264, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_vertex_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004265, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_vertex_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004266, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_control_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004267, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_control_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004268, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_control_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004269, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_control_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004270, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_control_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004271, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_control_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004272, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_control_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004273, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_control_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004274, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_control_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004275, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_control_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004276, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004277, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004278, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004279, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004280, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004281, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004282, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004283, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004284, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004285, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004286, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_geometry_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004287, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_geometry_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004288, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_geometry_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004289, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_geometry_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004290, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_geometry_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004291, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_geometry_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004292, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_geometry_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004293, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_geometry_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004294, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_geometry_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004295, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_geometry_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004296, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_fragment_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004297, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_fragment_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004298, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_fragment_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004299, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_fragment_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004300, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_fragment_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004301, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_fragment_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004302, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_fragment_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004303, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_fragment_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004304, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_fragment_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004305, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_fragment_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004306, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004307, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004308, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004309, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004310, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004311, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004312, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004313, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004314, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004315, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004316, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004317, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004318, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004319, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004320, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004321, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004322, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004323, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004324, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC004325, "dEQP-VK.synchronization.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_image_compute_indirect.*");
