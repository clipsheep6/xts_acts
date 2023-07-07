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

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000003, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000004, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000005, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000006, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000007, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000008, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000009, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000010, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000011, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000012, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000013, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000014, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000015, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000016, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000017, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000018, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000019, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000020, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_to_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000021, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_to_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000022, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_to_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000023, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_to_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000024, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_to_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000025, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_to_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000026, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_to_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000027, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_to_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000028, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_to_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000029, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_buffer_to_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000030, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000031, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000032, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000033, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000034, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000035, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000036, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000037, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000038, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000039, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000040, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000041, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000042, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000043, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000044, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000045, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000046, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_to_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000047, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000048, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000049, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000050, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000051, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000052, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000053, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000054, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000055, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000056, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_copy_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000057, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_blit_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000058, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_blit_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000059, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_blit_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000060, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_blit_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000061, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_blit_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000062, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_blit_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000063, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_blit_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000064, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_blit_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000065, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_blit_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000066, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_blit_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000067, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000068, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000069, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000070, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000071, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000072, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000073, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000074, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000075, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000076, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000077, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000078, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000079, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000080, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000081, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000082, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000083, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_vertex_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000084, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000085, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000086, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000087, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000088, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000089, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000090, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000091, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000092, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000093, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000094, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000095, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000096, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000097, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000098, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000099, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000100, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_control_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000101, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000102, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000103, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000104, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000105, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000106, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000107, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000108, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000109, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000110, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000111, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000112, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000113, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000114, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000115, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000116, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000117, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_tess_eval_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000118, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000119, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000120, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000121, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000122, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000123, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000124, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000125, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000126, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000127, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000128, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000129, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000130, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000131, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000132, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000133, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000134, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_geometry_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000135, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000136, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000137, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000138, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000139, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000140, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000141, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000142, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000143, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000144, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000145, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000146, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000147, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000148, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000149, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000150, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000151, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_fragment_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000152, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000153, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000154, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000155, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000156, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000157, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000158, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000159, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000160, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000161, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000162, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000163, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000164, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000165, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000166, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000167, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000168, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000169, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000170, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000171, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000172, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000173, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000174, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000175, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000176, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000177, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000178, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000179, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000180, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000181, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000182, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000183, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000184, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000185, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_ssbo_compute_indirect_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000186, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_vertex_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000187, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_vertex_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000188, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_vertex_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000189, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_vertex_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000190, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_vertex_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000191, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_vertex_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000192, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_vertex_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000193, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_vertex_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000194, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_vertex_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000195, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_vertex_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000196, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_control_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000197, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_control_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000198, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_control_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000199, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_control_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000200, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_control_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000201, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_control_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000202, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_control_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000203, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_control_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000204, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_control_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000205, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_control_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000206, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_eval_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000207, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_eval_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000208, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_eval_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000209, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_eval_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000210, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_eval_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000211, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_eval_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000212, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_eval_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000213, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_eval_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000214, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_eval_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000215, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_tess_eval_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000216, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_geometry_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000217, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_geometry_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000218, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_geometry_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000219, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_geometry_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000220, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_geometry_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000221, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_geometry_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000222, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_geometry_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000223, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_geometry_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000224, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_geometry_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000225, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_geometry_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000226, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_fragment_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000227, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_fragment_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000228, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_fragment_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000229, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_fragment_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000230, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_fragment_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000231, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_fragment_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000232, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_fragment_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000233, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_fragment_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000234, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_fragment_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000235, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_fragment_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000236, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000237, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000238, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000239, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000240, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000241, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000242, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000243, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000244, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000245, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000246, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000247, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000248, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000249, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000250, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000251, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000252, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000253, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000254, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000255, "dEQP-VK.synchronization2.timeline_semaphore.device_host.write_image_compute_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000256, "dEQP-VK.synchronization2.timeline_semaphore.device_host.misc.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000257, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000258, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000259, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000260, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000261, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000262, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000263, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000264, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000265, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000266, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000267, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000268, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000269, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000270, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000271, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000272, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000273, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000274, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_to_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000275, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_to_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000276, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_to_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000277, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_to_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000278, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_to_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000279, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_to_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000280, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_to_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000281, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_to_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000282, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_to_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000283, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_buffer_to_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000284, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000285, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000286, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000287, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000288, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000289, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000290, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000291, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000292, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000293, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000294, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000295, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000296, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000297, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000298, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000299, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000300, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_to_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000301, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000302, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000303, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000304, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000305, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000306, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000307, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000308, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000309, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000310, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_copy_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000311, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_blit_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000312, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_blit_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000313, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_blit_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000314, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_blit_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000315, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_blit_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000316, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_blit_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000317, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_blit_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000318, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_blit_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000319, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_blit_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000320, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_blit_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000321, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000322, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000323, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000324, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000325, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000326, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000327, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000328, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000329, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000330, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000331, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000332, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000333, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000334, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000335, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000336, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000337, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_vertex_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000338, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000339, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000340, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000341, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000342, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000343, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000344, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000345, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000346, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000347, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000348, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000349, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000350, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000351, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000352, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000353, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000354, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_control_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000355, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000356, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000357, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000358, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000359, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000360, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000361, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000362, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000363, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000364, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000365, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000366, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000367, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000368, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000369, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000370, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000371, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_tess_eval_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000372, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000373, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000374, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000375, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000376, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000377, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000378, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000379, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000380, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000381, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000382, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000383, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000384, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000385, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000386, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000387, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000388, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_geometry_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000389, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000390, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000391, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000392, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000393, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000394, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000395, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000396, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000397, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000398, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000399, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000400, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000401, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000402, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000403, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000404, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000405, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_fragment_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000406, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000407, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000408, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000409, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000410, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000411, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000412, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000413, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000414, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000415, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000416, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000417, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000418, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000419, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000420, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000421, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000422, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000423, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000424, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000425, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000426, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000427, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000428, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000429, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000430, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000431, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000432, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000433, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000434, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000435, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000436, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000437, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000438, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000439, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_ssbo_compute_indirect_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000440, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_vertex_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000441, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_vertex_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000442, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_vertex_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000443, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_vertex_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000444, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_vertex_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000445, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_vertex_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000446, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_vertex_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000447, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_vertex_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000448, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_vertex_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000449, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_vertex_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000450, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_control_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000451, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_control_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000452, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_control_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000453, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_control_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000454, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_control_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000455, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_control_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000456, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_control_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000457, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_control_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000458, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_control_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000459, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_control_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000460, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_eval_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000461, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_eval_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000462, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_eval_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000463, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_eval_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000464, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_eval_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000465, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_eval_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000466, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_eval_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000467, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_eval_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000468, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_eval_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000469, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_tess_eval_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000470, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_geometry_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000471, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_geometry_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000472, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_geometry_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000473, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_geometry_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000474, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_geometry_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000475, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_geometry_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000476, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_geometry_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000477, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_geometry_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000478, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_geometry_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000479, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_geometry_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000480, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_fragment_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000481, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_fragment_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000482, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_fragment_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000483, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_fragment_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000484, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_fragment_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000485, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_fragment_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000486, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_fragment_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000487, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_fragment_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000488, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_fragment_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000489, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_fragment_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000490, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000491, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000492, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000493, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000494, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000495, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000496, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000497, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000498, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000499, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000500, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000501, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000502, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000503, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000504, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000505, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000506, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000507, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000508, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000509, "dEQP-VK.synchronization2.timeline_semaphore.one_to_n.write_image_compute_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000510, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000511, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000512, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000513, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000514, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000515, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000516, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000517, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000518, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000519, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000520, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000521, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000522, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000523, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000524, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000525, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000526, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000527, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_to_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000528, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_to_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000529, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_to_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000530, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_to_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000531, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_to_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000532, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_to_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000533, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_to_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000534, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_to_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000535, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_to_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000536, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_buffer_to_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000537, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000538, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000539, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000540, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000541, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000542, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000543, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000544, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000545, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000546, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000547, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000548, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000549, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000550, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000551, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000552, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000553, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_to_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000554, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000555, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000556, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000557, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000558, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000559, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000560, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000561, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000562, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000563, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_copy_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000564, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_blit_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000565, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_blit_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000566, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_blit_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000567, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_blit_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000568, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_blit_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000569, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_blit_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000570, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_blit_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000571, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_blit_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000572, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_blit_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000573, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_blit_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000574, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000575, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000576, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000577, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000578, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000579, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000580, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000581, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000582, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000583, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000584, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000585, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000586, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000587, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000588, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000589, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000590, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_vertex_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000591, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000592, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000593, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000594, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000595, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000596, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000597, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000598, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000599, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000600, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000601, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000602, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000603, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000604, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000605, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000606, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000607, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_control_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000608, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000609, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000610, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000611, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000612, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000613, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000614, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000615, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000616, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000617, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000618, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000619, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000620, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000621, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000622, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000623, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000624, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_tess_eval_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000625, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000626, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000627, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000628, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000629, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000630, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000631, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000632, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000633, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000634, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000635, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000636, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000637, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000638, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000639, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000640, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000641, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_geometry_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000642, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000643, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000644, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000645, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000646, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000647, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000648, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000649, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000650, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000651, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000652, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000653, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000654, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000655, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000656, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000657, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000658, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_fragment_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000659, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000660, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000661, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000662, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000663, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000664, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000665, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000666, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000667, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000668, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000669, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000670, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000671, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000672, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000673, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000674, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000675, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000676, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000677, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000678, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000679, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000680, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000681, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000682, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000683, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000684, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000685, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000686, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000687, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000688, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000689, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000690, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000691, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000692, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_ssbo_compute_indirect_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000693, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_vertex_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000694, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_vertex_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000695, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_vertex_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000696, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_vertex_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000697, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_vertex_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000698, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_vertex_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000699, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_vertex_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000700, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_vertex_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000701, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_vertex_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000702, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_vertex_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000703, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_control_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000704, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_control_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000705, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_control_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000706, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_control_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000707, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_control_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000708, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_control_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000709, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_control_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000710, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_control_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000711, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_control_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000712, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_control_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000713, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_eval_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000714, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_eval_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000715, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_eval_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000716, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_eval_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000717, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_eval_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000718, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_eval_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000719, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_eval_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000720, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_eval_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000721, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_eval_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000722, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_tess_eval_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000723, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_geometry_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000724, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_geometry_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000725, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_geometry_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000726, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_geometry_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000727, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_geometry_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000728, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_geometry_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000729, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_geometry_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000730, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_geometry_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000731, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_geometry_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000732, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_geometry_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000733, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_fragment_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000734, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_fragment_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000735, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_fragment_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000736, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_fragment_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000737, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_fragment_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000738, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_fragment_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000739, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_fragment_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000740, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_fragment_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000741, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_fragment_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000742, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_fragment_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000743, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000744, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000745, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000746, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000747, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000748, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000749, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000750, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000751, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000752, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000753, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000754, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000755, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000756, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000757, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000758, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000759, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000760, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000761, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000762, "dEQP-VK.synchronization2.timeline_semaphore.wait_before_signal.write_image_compute_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000763, "dEQP-VK.synchronization2.timeline_semaphore.wait.all_signal_from_device.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000764, "dEQP-VK.synchronization2.timeline_semaphore.wait.one_signal_from_device.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000765, "dEQP-VK.synchronization2.timeline_semaphore.wait.all_signal_from_host.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000766, "dEQP-VK.synchronization2.timeline_semaphore.wait.one_signal_from_host.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000767, "dEQP-VK.synchronization2.timeline_semaphore.wait.host_wait_before_signal.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000768, "dEQP-VK.synchronization2.timeline_semaphore.wait.poll_signal_from_device.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000769, "dEQP-VK.synchronization2.timeline_semaphore.wait.poll_signal_from_host.*");
