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
#include "../Synchronization2BaseFunc.h"
#include "../ActsSynchronization20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001718, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001719, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001720, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001721, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001722, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001723, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001724, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001725, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001726, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001727, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001728, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001729, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001730, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001731, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001732, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001733, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001734, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001735, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_to_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001736, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_to_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001737, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_to_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001738, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_to_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001739, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_to_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001740, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_to_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001741, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_to_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001742, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_to_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001743, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_to_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001744, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_buffer_to_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001745, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001746, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001747, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001748, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001749, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001750, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001751, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001752, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001753, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001754, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001755, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001756, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001757, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001758, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001759, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001760, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001761, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_to_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001762, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001763, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001764, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001765, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001766, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001767, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001768, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001769, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001770, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001771, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_copy_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001772, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_blit_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001773, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_blit_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001774, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_blit_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001775, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_blit_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001776, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_blit_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001777, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_blit_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001778, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_blit_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001779, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_blit_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001780, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_blit_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001781, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_blit_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001782, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001783, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001784, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001785, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001786, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001787, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001788, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001789, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001790, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001791, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001792, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001793, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001794, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001795, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001796, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001797, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001798, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_vertex_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001799, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001800, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001801, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001802, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001803, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001804, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001805, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001806, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001807, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001808, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001809, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001810, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001811, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001812, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001813, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001814, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001815, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_control_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001816, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001817, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001818, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001819, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001820, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001821, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001822, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001823, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001824, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001825, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001826, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001827, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001828, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001829, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001830, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001831, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001832, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_tess_eval_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001833, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001834, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001835, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001836, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001837, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001838, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001839, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001840, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001841, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001842, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001843, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001844, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001845, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001846, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001847, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001848, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001849, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_geometry_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001850, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001851, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001852, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001853, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001854, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001855, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001856, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001857, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001858, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001859, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001860, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001861, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001862, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001863, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001864, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001865, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001866, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_fragment_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001867, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001868, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001869, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001870, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001871, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001872, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001873, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001874, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001875, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001876, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001877, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001878, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001879, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001880, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001881, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001882, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001883, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001884, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001885, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001886, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001887, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001888, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001889, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001890, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001891, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001892, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001893, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001894, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001895, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001896, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001897, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001898, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001899, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001900, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_ssbo_compute_indirect_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001901, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_vertex_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001902, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_vertex_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001903, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_vertex_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001904, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_vertex_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001905, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_vertex_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001906, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_vertex_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001907, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_vertex_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001908, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_vertex_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001909, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_vertex_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001910, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_vertex_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001911, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_control_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001912, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_control_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001913, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_control_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001914, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_control_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001915, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_control_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001916, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_control_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001917, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_control_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001918, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_control_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001919, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_control_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001920, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_control_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001921, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_eval_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001922, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_eval_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001923, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_eval_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001924, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_eval_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001925, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_eval_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001926, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_eval_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001927, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_eval_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001928, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_eval_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001929, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_eval_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001930, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_tess_eval_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001931, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_geometry_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001932, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_geometry_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001933, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_geometry_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001934, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_geometry_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001935, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_geometry_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001936, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_geometry_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001937, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_geometry_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001938, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_geometry_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001939, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_geometry_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001940, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_geometry_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001941, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_fragment_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001942, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_fragment_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001943, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_fragment_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001944, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_fragment_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001945, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_fragment_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001946, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_fragment_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001947, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_fragment_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001948, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_fragment_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001949, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_fragment_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001950, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_fragment_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001951, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001952, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001953, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001954, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001955, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001956, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001957, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001958, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001959, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001960, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001961, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001962, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001963, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001964, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001965, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001966, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001967, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001968, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001969, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001970, "dEQP-VK.synchronization2.signal_order.binary_semaphore.write_image_compute_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001971, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001972, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001973, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001974, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001975, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001976, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001977, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001978, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001979, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001980, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001981, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001982, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001983, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001984, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001985, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001986, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001987, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001988, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001989, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001990, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001991, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001992, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001993, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001994, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001995, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001996, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001997, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_buffer_to_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001998, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001999, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002000, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002001, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002002, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002003, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002004, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002005, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002006, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002007, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002008, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002009, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002010, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002011, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002012, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002013, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002014, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_to_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002015, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002016, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002017, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002018, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002019, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002020, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002021, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002022, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002023, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002024, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_copy_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002025, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_blit_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002026, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_blit_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002027, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_blit_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002028, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_blit_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002029, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_blit_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002030, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_blit_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002031, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_blit_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002032, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_blit_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002033, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_blit_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002034, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_blit_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002035, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002036, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002037, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002038, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002039, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002040, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002041, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002042, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002043, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002044, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002045, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002046, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002047, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002048, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002049, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002050, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002051, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_vertex_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002052, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002053, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002054, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002055, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002056, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002057, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002058, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002059, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002060, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002061, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002062, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002063, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002064, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002065, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002066, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002067, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002068, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_control_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002069, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002070, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002071, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002072, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002073, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002074, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002075, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002076, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002077, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002078, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002079, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002080, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002081, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002082, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002083, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002084, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002085, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_tess_eval_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002086, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002087, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002088, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002089, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002090, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002091, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002092, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002093, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002094, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002095, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002096, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002097, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002098, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002099, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002100, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002101, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002102, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_geometry_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002103, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002104, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002105, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002106, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002107, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002108, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002109, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002110, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002111, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002112, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002113, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002114, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002115, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002116, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002117, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002118, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002119, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_fragment_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002120, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002121, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002122, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002123, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002124, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002125, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002126, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002127, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002128, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002129, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002130, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002131, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002132, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002133, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002134, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002135, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002136, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002137, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002138, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002139, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002140, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002141, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002142, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002143, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002144, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002145, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002146, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002147, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002148, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002149, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002150, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002151, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002152, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002153, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_ssbo_compute_indirect_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002154, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_vertex_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002155, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_vertex_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002156, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_vertex_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002157, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_vertex_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002158, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_vertex_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002159, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_vertex_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002160, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_vertex_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002161, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_vertex_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002162, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_vertex_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002163, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_vertex_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002164, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_control_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002165, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_control_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002166, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_control_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002167, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_control_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002168, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_control_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002169, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_control_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002170, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_control_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002171, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_control_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002172, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_control_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002173, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_control_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002174, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_eval_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002175, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_eval_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002176, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_eval_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002177, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_eval_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002178, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_eval_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002179, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_eval_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002180, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_eval_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002181, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_eval_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002182, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_eval_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002183, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_tess_eval_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002184, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_geometry_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002185, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_geometry_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002186, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_geometry_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002187, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_geometry_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002188, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_geometry_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002189, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_geometry_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002190, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_geometry_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002191, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_geometry_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002192, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_geometry_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002193, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_geometry_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002194, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_fragment_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002195, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_fragment_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002196, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_fragment_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002197, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_fragment_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002198, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_fragment_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002199, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_fragment_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002200, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_fragment_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002201, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_fragment_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002202, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_fragment_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002203, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_fragment_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002204, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002205, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002206, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002207, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002208, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002209, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002210, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002211, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002212, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002213, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002214, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002215, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002216, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002217, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002218, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002219, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002220, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002221, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002222, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002223, "dEQP-VK.synchronization2.signal_order.timeline_semaphore.write_image_compute_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002224, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002225, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002226, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002227, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002228, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002229, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002230, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002231, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002232, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002233, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002234, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002235, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002236, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002237, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002238, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002239, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002240, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002241, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002242, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002243, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002244, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002245, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002246, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002247, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002248, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002249, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002250, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_buffer_to_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002251, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002252, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002253, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002254, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002255, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002256, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002257, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002258, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002259, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002260, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002261, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002262, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002263, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002264, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002265, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002266, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002267, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_to_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002268, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002269, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002270, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002271, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002272, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002273, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002274, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002275, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002276, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002277, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_copy_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002278, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_blit_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002279, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_blit_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002280, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_blit_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002281, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_blit_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002282, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_blit_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002283, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_blit_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002284, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_blit_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002285, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_blit_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002286, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_blit_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002287, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_blit_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002288, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002289, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002290, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002291, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002292, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002293, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002294, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002295, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002296, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002297, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002298, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002299, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002300, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002301, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002302, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002303, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002304, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_vertex_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002305, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002306, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002307, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002308, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002309, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002310, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002311, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002312, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002313, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002314, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002315, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002316, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002317, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002318, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002319, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002320, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002321, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_control_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002322, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002323, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002324, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002325, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002326, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002327, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002328, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002329, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002330, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002331, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002332, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002333, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002334, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002335, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002336, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002337, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002338, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_tess_eval_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002339, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002340, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002341, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002342, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002343, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002344, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002345, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002346, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002347, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002348, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002349, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002350, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002351, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002352, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002353, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002354, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002355, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_geometry_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002356, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002357, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002358, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002359, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002360, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002361, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002362, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002363, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002364, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002365, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002366, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002367, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002368, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002369, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002370, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002371, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002372, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_fragment_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002373, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002374, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002375, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002376, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002377, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002378, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002379, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002380, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002381, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002382, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002383, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002384, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002385, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002386, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002387, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002388, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002389, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002390, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002391, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002392, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002393, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002394, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002395, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002396, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002397, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002398, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002399, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002400, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002401, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002402, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002403, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002404, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002405, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002406, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_ssbo_compute_indirect_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002407, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_vertex_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002408, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_vertex_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002409, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_vertex_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002410, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_vertex_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002411, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_vertex_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002412, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_vertex_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002413, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_vertex_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002414, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_vertex_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002415, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_vertex_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002416, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_vertex_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002417, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_control_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002418, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_control_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002419, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_control_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002420, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_control_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002421, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_control_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002422, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_control_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002423, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_control_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002424, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_control_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002425, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_control_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002426, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_control_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002427, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_eval_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002428, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_eval_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002429, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_eval_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002430, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_eval_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002431, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_eval_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002432, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_eval_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002433, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_eval_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002434, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_eval_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002435, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_eval_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002436, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_tess_eval_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002437, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_geometry_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002438, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_geometry_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002439, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_geometry_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002440, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_geometry_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002441, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_geometry_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002442, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_geometry_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002443, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_geometry_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002444, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_geometry_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002445, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_geometry_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002446, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_geometry_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002447, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_fragment_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002448, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_fragment_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002449, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_fragment_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002450, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_fragment_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002451, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_fragment_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002452, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_fragment_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002453, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_fragment_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002454, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_fragment_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002455, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_fragment_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002456, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_fragment_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002457, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002458, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002459, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002460, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002461, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002462, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002463, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002464, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002465, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002466, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002467, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002468, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002469, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002470, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002471, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002472, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002473, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002474, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002475, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002476, "dEQP-VK.synchronization2.signal_order.shared_binary_semaphore.write_image_compute_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002477, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002478, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002479, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002480, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002481, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002482, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002483, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002484, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002485, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002486, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002487, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002488, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002489, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002490, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002491, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002492, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002493, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002494, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002495, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002496, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002497, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002498, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002499, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002500, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002501, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002502, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002503, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_buffer_to_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002504, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002505, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002506, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002507, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002508, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002509, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002510, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002511, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002512, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002513, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002514, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002515, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002516, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002517, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002518, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002519, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002520, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_to_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002521, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002522, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002523, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002524, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002525, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002526, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002527, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002528, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002529, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002530, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_copy_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002531, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_blit_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002532, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_blit_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002533, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_blit_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002534, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_blit_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002535, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_blit_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002536, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_blit_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002537, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_blit_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002538, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_blit_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002539, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_blit_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002540, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_blit_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002541, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002542, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002543, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002544, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002545, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002546, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002547, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002548, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002549, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002550, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002551, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002552, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002553, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002554, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002555, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002556, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002557, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_vertex_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002558, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002559, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002560, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002561, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002562, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002563, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002564, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002565, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002566, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002567, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002568, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002569, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002570, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002571, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002572, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002573, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002574, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_control_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002575, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002576, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002577, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002578, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002579, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002580, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002581, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002582, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002583, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002584, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002585, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002586, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002587, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002588, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002589, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002590, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002591, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_tess_eval_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002592, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002593, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002594, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002595, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002596, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002597, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002598, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002599, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002600, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002601, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002602, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002603, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002604, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002605, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002606, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002607, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002608, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_geometry_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002609, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002610, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002611, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002612, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002613, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002614, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002615, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002616, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002617, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002618, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002619, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002620, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002621, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002622, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002623, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002624, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002625, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_fragment_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002626, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002627, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002628, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002629, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002630, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002631, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002632, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002633, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002634, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002635, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002636, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002637, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002638, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002639, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002640, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002641, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002642, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002643, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002644, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002645, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002646, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002647, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002648, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002649, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002650, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002651, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002652, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002653, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002654, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002655, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002656, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002657, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002658, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002659, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_ssbo_compute_indirect_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002660, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_vertex_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002661, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_vertex_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002662, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_vertex_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002663, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_vertex_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002664, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_vertex_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002665, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_vertex_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002666, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_vertex_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002667, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_vertex_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002668, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_vertex_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002669, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_vertex_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002670, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_control_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002671, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_control_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002672, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_control_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002673, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_control_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002674, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_control_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002675, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_control_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002676, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_control_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002677, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_control_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002678, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_control_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002679, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_control_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002680, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002681, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002682, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002683, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002684, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002685, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002686, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002687, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002688, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002689, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_tess_eval_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002690, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_geometry_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002691, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_geometry_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002692, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_geometry_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002693, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_geometry_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002694, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_geometry_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002695, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_geometry_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002696, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_geometry_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002697, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_geometry_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002698, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_geometry_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002699, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_geometry_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002700, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_fragment_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002701, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_fragment_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002702, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_fragment_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002703, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_fragment_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002704, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_fragment_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002705, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_fragment_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002706, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_fragment_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002707, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_fragment_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002708, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_fragment_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002709, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_fragment_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002710, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002711, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002712, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002713, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002714, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002715, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002716, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002717, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002718, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002719, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002720, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002721, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002722, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002723, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002724, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002725, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002726, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002727, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002728, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC002729, "dEQP-VK.synchronization2.signal_order.shared_timeline_semaphore.write_image_compute_indirect_read_image_compute_indirect.*");
