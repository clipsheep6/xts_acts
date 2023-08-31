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

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002606, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002607, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002608, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002609, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002610, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002611, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002612, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002613, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002614, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002615, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002616, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002617, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002618, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002619, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002620, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002621, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002622, "dEQP-VK.synchronization.cross_instance.suballocated.write_fill_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002623, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002624, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002625, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002626, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002627, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002628, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002629, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002630, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002631, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002632, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002633, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002634, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002635, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002636, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002637, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002638, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002639, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002640, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002641, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002642, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002643, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002644, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002645, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002646, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002647, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002648, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002649, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002650, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002651, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002652, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002653, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002654, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002655, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002656, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002657, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_to_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002658, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_to_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002659, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_to_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002660, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_to_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002661, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_to_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002662, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_to_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002663, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_to_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002664, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_to_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002665, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_to_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002666, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_buffer_to_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002667, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002668, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002669, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002670, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002671, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002672, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002673, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002674, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002675, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002676, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002677, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002678, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002679, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002680, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002681, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002682, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002683, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_to_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002684, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002685, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002686, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002687, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002688, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002689, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002690, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002691, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002692, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002693, "dEQP-VK.synchronization.cross_instance.suballocated.write_copy_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002694, "dEQP-VK.synchronization.cross_instance.suballocated.write_blit_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002695, "dEQP-VK.synchronization.cross_instance.suballocated.write_blit_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002696, "dEQP-VK.synchronization.cross_instance.suballocated.write_blit_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002697, "dEQP-VK.synchronization.cross_instance.suballocated.write_blit_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002698, "dEQP-VK.synchronization.cross_instance.suballocated.write_blit_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002699, "dEQP-VK.synchronization.cross_instance.suballocated.write_blit_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002700, "dEQP-VK.synchronization.cross_instance.suballocated.write_blit_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002701, "dEQP-VK.synchronization.cross_instance.suballocated.write_blit_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002702, "dEQP-VK.synchronization.cross_instance.suballocated.write_blit_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002703, "dEQP-VK.synchronization.cross_instance.suballocated.write_blit_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002704, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002705, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002706, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002707, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002708, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002709, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002710, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002711, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002712, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002713, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002714, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002715, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002716, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002717, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002718, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002719, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002720, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_vertex_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002721, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002722, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002723, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002724, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002725, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002726, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002727, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002728, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002729, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002730, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002731, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002732, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002733, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002734, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002735, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002736, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002737, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_control_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002738, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002739, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002740, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002741, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002742, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002743, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002744, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002745, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002746, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002747, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002748, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002749, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002750, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002751, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002752, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002753, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002754, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_tess_eval_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002755, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002756, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002757, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002758, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002759, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002760, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002761, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002762, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002763, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002764, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002765, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002766, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002767, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002768, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002769, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002770, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002771, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_geometry_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002772, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002773, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002774, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002775, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002776, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002777, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002778, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002779, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002780, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002781, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002782, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002783, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002784, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002785, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002786, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002787, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002788, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_fragment_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002789, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002790, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002791, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002792, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002793, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002794, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002795, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002796, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002797, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002798, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002799, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002800, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002801, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002802, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002803, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002804, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002805, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002806, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002807, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002808, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002809, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002810, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002811, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002812, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002813, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002814, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002815, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002816, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002817, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002818, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002819, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002820, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002821, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002822, "dEQP-VK.synchronization.cross_instance.suballocated.write_ssbo_compute_indirect_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002823, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_vertex_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002824, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_vertex_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002825, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_vertex_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002826, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_vertex_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002827, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_vertex_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002828, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_vertex_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002829, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_vertex_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002830, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_vertex_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002831, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_vertex_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002832, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_vertex_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002833, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_control_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002834, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_control_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002835, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_control_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002836, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_control_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002837, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_control_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002838, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_control_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002839, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_control_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002840, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_control_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002841, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_control_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002842, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_control_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002843, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_eval_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002844, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_eval_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002845, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_eval_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002846, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_eval_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002847, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_eval_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002848, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_eval_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002849, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_eval_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002850, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_eval_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002851, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_eval_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002852, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_tess_eval_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002853, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_geometry_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002854, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_geometry_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002855, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_geometry_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002856, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_geometry_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002857, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_geometry_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002858, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_geometry_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002859, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_geometry_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002860, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_geometry_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002861, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_geometry_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002862, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_geometry_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002863, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_fragment_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002864, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_fragment_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002865, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_fragment_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002866, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_fragment_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002867, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_fragment_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002868, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_fragment_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002869, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_fragment_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002870, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_fragment_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002871, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_fragment_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002872, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_fragment_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002873, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002874, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002875, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002876, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002877, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002878, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002879, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002880, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002881, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002882, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002883, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002884, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002885, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002886, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002887, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002888, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002889, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002890, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002891, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002892, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002893, "dEQP-VK.synchronization.cross_instance.suballocated.write_image_compute_multisample_read_resolve_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002894, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_color_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002895, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_color_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002896, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_color_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002897, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_color_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002898, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_color_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002899, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_color_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002900, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_color_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002901, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_color_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002902, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_color_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002903, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_color_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002904, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_depth_stencil_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002905, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_depth_stencil_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002906, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002907, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002908, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002909, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002910, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002911, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002912, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002913, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002914, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002915, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002916, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002917, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002918, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002919, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002920, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002921, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002922, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002923, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002924, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002925, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002926, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002927, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002928, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002929, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002930, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002931, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002932, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002933, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002934, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002935, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002936, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002937, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002938, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002939, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002940, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002941, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002942, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002943, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002944, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002945, "dEQP-VK.synchronization.cross_instance.suballocated.write_draw_indexed_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002946, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_attachments_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002947, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_attachments_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002948, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_attachments_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002949, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_attachments_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002950, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_attachments_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002951, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_attachments_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002952, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_attachments_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002953, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_attachments_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002954, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_attachments_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002955, "dEQP-VK.synchronization.cross_instance.suballocated.write_clear_attachments_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002956, "dEQP-VK.synchronization.cross_instance.suballocated.write_indirect_buffer_draw_read_indirect_buffer_draw.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002957, "dEQP-VK.synchronization.cross_instance.suballocated.write_indirect_buffer_draw_indexed_read_indirect_buffer_draw_indexed.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002958, "dEQP-VK.synchronization.cross_instance.suballocated.write_indirect_buffer_dispatch_read_indirect_buffer_dispatch.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002959, "dEQP-VK.synchronization.cross_instance.suballocated.write_update_index_buffer_read_index_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002960, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002961, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002962, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002963, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002964, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002965, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002966, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002967, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002968, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002969, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002970, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002971, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002972, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002973, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002974, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002975, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002976, "dEQP-VK.synchronization.cross_instance.dedicated.write_fill_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002977, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002978, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002979, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002980, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002981, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002982, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002983, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002984, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002985, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002986, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002987, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002988, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002989, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002990, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002991, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002992, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002993, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002994, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002995, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002996, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002997, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002998, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002999, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003000, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003001, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003002, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003003, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003004, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003005, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003006, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003007, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003008, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003009, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003010, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003011, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_to_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003012, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_to_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003013, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_to_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003014, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_to_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003015, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_to_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003016, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_to_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003017, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_to_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003018, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_to_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003019, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_to_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003020, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_buffer_to_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003021, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003022, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003023, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003024, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003025, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003026, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003027, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003028, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003029, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003030, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003031, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003032, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003033, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003034, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003035, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003036, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003037, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_to_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003038, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003039, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003040, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003041, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003042, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003043, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003044, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003045, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003046, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003047, "dEQP-VK.synchronization.cross_instance.dedicated.write_copy_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003048, "dEQP-VK.synchronization.cross_instance.dedicated.write_blit_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003049, "dEQP-VK.synchronization.cross_instance.dedicated.write_blit_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003050, "dEQP-VK.synchronization.cross_instance.dedicated.write_blit_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003051, "dEQP-VK.synchronization.cross_instance.dedicated.write_blit_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003052, "dEQP-VK.synchronization.cross_instance.dedicated.write_blit_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003053, "dEQP-VK.synchronization.cross_instance.dedicated.write_blit_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003054, "dEQP-VK.synchronization.cross_instance.dedicated.write_blit_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003055, "dEQP-VK.synchronization.cross_instance.dedicated.write_blit_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003056, "dEQP-VK.synchronization.cross_instance.dedicated.write_blit_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003057, "dEQP-VK.synchronization.cross_instance.dedicated.write_blit_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003058, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003059, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003060, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003061, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003062, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003063, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003064, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003065, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003066, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003067, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003068, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003069, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003070, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003071, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003072, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003073, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003074, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_vertex_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003075, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003076, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003077, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003078, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003079, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003080, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003081, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003082, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003083, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003084, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003085, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003086, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003087, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003088, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003089, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003090, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003091, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_control_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003092, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003093, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003094, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003095, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003096, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003097, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003098, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003099, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003100, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003101, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003102, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003103, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003104, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003105, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003106, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003107, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003108, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_tess_eval_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003109, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003110, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003111, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003112, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003113, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003114, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003115, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003116, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003117, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003118, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003119, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003120, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003121, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003122, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003123, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003124, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003125, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_geometry_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003126, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003127, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003128, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003129, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003130, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003131, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003132, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003133, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003134, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003135, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003136, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003137, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003138, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003139, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003140, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003141, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003142, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_fragment_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003143, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003144, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003145, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003146, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003147, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003148, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003149, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003150, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003151, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003152, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003153, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003154, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003155, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003156, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003157, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003158, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003159, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003160, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003161, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003162, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003163, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003164, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003165, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003166, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003167, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003168, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003169, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003170, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003171, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003172, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003173, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003174, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003175, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003176, "dEQP-VK.synchronization.cross_instance.dedicated.write_ssbo_compute_indirect_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003177, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_vertex_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003178, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_vertex_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003179, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_vertex_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003180, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_vertex_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003181, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_vertex_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003182, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_vertex_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003183, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_vertex_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003184, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_vertex_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003185, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_vertex_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003186, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_vertex_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003187, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_control_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003188, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_control_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003189, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_control_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003190, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_control_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003191, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_control_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003192, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_control_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003193, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_control_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003194, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_control_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003195, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_control_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003196, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_control_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003197, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_eval_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003198, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_eval_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003199, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_eval_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003200, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_eval_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003201, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_eval_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003202, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_eval_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003203, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_eval_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003204, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_eval_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003205, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_eval_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003206, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_tess_eval_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003207, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_geometry_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003208, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_geometry_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003209, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_geometry_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003210, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_geometry_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003211, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_geometry_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003212, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_geometry_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003213, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_geometry_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003214, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_geometry_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003215, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_geometry_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003216, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_geometry_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003217, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_fragment_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003218, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_fragment_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003219, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_fragment_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003220, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_fragment_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003221, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_fragment_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003222, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_fragment_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003223, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_fragment_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003224, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_fragment_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003225, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_fragment_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003226, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_fragment_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003227, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003228, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003229, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003230, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003231, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003232, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003233, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003234, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003235, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003236, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003237, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003238, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003239, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003240, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003241, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003242, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003243, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003244, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003245, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003246, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003247, "dEQP-VK.synchronization.cross_instance.dedicated.write_image_compute_multisample_read_resolve_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003248, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_color_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003249, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_color_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003250, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_color_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003251, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_color_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003252, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_color_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003253, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_color_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003254, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_color_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003255, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_color_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003256, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_color_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003257, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_color_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003258, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_depth_stencil_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003259, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_depth_stencil_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003260, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003261, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003262, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003263, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003264, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003265, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003266, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003267, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003268, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003269, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003270, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003271, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003272, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003273, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003274, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003275, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003276, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003277, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003278, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003279, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003280, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003281, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003282, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003283, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003284, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003285, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003286, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003287, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003288, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003289, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003290, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003291, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003292, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003293, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003294, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003295, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003296, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003297, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003298, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003299, "dEQP-VK.synchronization.cross_instance.dedicated.write_draw_indexed_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003300, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_attachments_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003301, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_attachments_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003302, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_attachments_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003303, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_attachments_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003304, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_attachments_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003305, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_attachments_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003306, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_attachments_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003307, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_attachments_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003308, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_attachments_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003309, "dEQP-VK.synchronization.cross_instance.dedicated.write_clear_attachments_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003310, "dEQP-VK.synchronization.cross_instance.dedicated.write_indirect_buffer_draw_read_indirect_buffer_draw.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003311, "dEQP-VK.synchronization.cross_instance.dedicated.write_indirect_buffer_draw_indexed_read_indirect_buffer_draw_indexed.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003312, "dEQP-VK.synchronization.cross_instance.dedicated.write_indirect_buffer_dispatch_read_indirect_buffer_dispatch.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC003313, "dEQP-VK.synchronization.cross_instance.dedicated.write_update_index_buffer_read_index_input.*");
