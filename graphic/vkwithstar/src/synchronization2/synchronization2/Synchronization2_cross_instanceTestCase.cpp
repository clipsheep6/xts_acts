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

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001010, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001011, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001012, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001013, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001014, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001015, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001016, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001017, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001018, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001019, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001020, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001021, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001022, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001023, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001024, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001025, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001026, "dEQP-VK.synchronization2.cross_instance.suballocated.write_fill_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001027, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001028, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001029, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001030, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001031, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001032, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001033, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001034, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001035, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001036, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001037, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001038, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001039, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001040, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001041, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001042, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001043, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001044, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001045, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001046, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001047, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001048, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001049, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001050, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001051, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001052, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001053, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001054, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001055, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001056, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001057, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001058, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001059, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001060, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001061, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_to_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001062, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_to_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001063, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_to_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001064, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_to_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001065, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_to_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001066, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_to_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001067, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_to_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001068, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_to_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001069, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_to_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001070, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_buffer_to_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001071, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001072, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001073, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001074, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001075, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001076, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001077, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001078, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001079, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001080, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001081, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001082, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001083, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001084, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001085, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001086, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001087, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_to_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001088, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001089, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001090, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001091, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001092, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001093, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001094, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001095, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001096, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001097, "dEQP-VK.synchronization2.cross_instance.suballocated.write_copy_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001098, "dEQP-VK.synchronization2.cross_instance.suballocated.write_blit_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001099, "dEQP-VK.synchronization2.cross_instance.suballocated.write_blit_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001100, "dEQP-VK.synchronization2.cross_instance.suballocated.write_blit_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001101, "dEQP-VK.synchronization2.cross_instance.suballocated.write_blit_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001102, "dEQP-VK.synchronization2.cross_instance.suballocated.write_blit_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001103, "dEQP-VK.synchronization2.cross_instance.suballocated.write_blit_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001104, "dEQP-VK.synchronization2.cross_instance.suballocated.write_blit_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001105, "dEQP-VK.synchronization2.cross_instance.suballocated.write_blit_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001106, "dEQP-VK.synchronization2.cross_instance.suballocated.write_blit_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001107, "dEQP-VK.synchronization2.cross_instance.suballocated.write_blit_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001108, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001109, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001110, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001111, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001112, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001113, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001114, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001115, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001116, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001117, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001118, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001119, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001120, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001121, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001122, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001123, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001124, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_vertex_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001125, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001126, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001127, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001128, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001129, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001130, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001131, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001132, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001133, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001134, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001135, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001136, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001137, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001138, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001139, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001140, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001141, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_control_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001142, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001143, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001144, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001145, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001146, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001147, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001148, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001149, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001150, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001151, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001152, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001153, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001154, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001155, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001156, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001157, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001158, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_tess_eval_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001159, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001160, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001161, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001162, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001163, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001164, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001165, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001166, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001167, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001168, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001169, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001170, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001171, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001172, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001173, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001174, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001175, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_geometry_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001176, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001177, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001178, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001179, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001180, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001181, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001182, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001183, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001184, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001185, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001186, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001187, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001188, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001189, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001190, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001191, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001192, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_fragment_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001193, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001194, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001195, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001196, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001197, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001198, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001199, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001200, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001201, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001202, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001203, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001204, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001205, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001206, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001207, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001208, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001209, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001210, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001211, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001212, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001213, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001214, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001215, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001216, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001217, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001218, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001219, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001220, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001221, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001222, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001223, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001224, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001225, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001226, "dEQP-VK.synchronization2.cross_instance.suballocated.write_ssbo_compute_indirect_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001227, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_vertex_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001228, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_vertex_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001229, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_vertex_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001230, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_vertex_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001231, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_vertex_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001232, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_vertex_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001233, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_vertex_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001234, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_vertex_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001235, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_vertex_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001236, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_vertex_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001237, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_control_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001238, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_control_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001239, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_control_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001240, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_control_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001241, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_control_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001242, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_control_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001243, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_control_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001244, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_control_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001245, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_control_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001246, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_control_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001247, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_eval_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001248, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_eval_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001249, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_eval_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001250, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_eval_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001251, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_eval_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001252, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_eval_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001253, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_eval_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001254, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_eval_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001255, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_eval_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001256, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_tess_eval_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001257, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_geometry_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001258, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_geometry_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001259, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_geometry_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001260, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_geometry_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001261, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_geometry_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001262, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_geometry_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001263, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_geometry_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001264, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_geometry_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001265, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_geometry_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001266, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_geometry_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001267, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_fragment_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001268, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_fragment_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001269, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_fragment_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001270, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_fragment_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001271, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_fragment_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001272, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_fragment_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001273, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_fragment_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001274, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_fragment_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001275, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_fragment_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001276, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_fragment_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001277, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001278, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001279, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001280, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001281, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001282, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001283, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001284, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001285, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001286, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001287, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001288, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001289, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001290, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001291, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001292, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001293, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001294, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001295, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001296, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001297, "dEQP-VK.synchronization2.cross_instance.suballocated.write_image_compute_multisample_read_resolve_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001298, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_color_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001299, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_color_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001300, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_color_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001301, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_color_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001302, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_color_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001303, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_color_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001304, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_color_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001305, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_color_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001306, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_color_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001307, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_color_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001308, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_depth_stencil_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001309, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_depth_stencil_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001310, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001311, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001312, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001313, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001314, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001315, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001316, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001317, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001318, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001319, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001320, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001321, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001322, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001323, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001324, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001325, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001326, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001327, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001328, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001329, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001330, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001331, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001332, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001333, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001334, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001335, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001336, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001337, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001338, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001339, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001340, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001341, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001342, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001343, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001344, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001345, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001346, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001347, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001348, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001349, "dEQP-VK.synchronization2.cross_instance.suballocated.write_draw_indexed_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001350, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_attachments_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001351, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_attachments_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001352, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_attachments_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001353, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_attachments_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001354, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_attachments_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001355, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_attachments_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001356, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_attachments_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001357, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_attachments_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001358, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_attachments_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001359, "dEQP-VK.synchronization2.cross_instance.suballocated.write_clear_attachments_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001360, "dEQP-VK.synchronization2.cross_instance.suballocated.write_indirect_buffer_draw_read_indirect_buffer_draw.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001361, "dEQP-VK.synchronization2.cross_instance.suballocated.write_indirect_buffer_draw_indexed_read_indirect_buffer_draw_indexed.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001362, "dEQP-VK.synchronization2.cross_instance.suballocated.write_indirect_buffer_dispatch_read_indirect_buffer_dispatch.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001363, "dEQP-VK.synchronization2.cross_instance.suballocated.write_update_index_buffer_read_index_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001364, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001365, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001366, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001367, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001368, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001369, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001370, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001371, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001372, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001373, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001374, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001375, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001376, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001377, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001378, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001379, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001380, "dEQP-VK.synchronization2.cross_instance.dedicated.write_fill_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001381, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001382, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001383, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001384, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001385, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001386, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001387, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001388, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001389, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001390, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001391, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001392, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001393, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001394, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001395, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001396, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001397, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001398, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001399, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001400, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001401, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001402, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001403, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001404, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001405, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001406, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001407, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001408, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001409, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001410, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001411, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001412, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001413, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001414, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001415, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_to_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001416, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_to_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001417, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_to_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001418, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_to_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001419, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_to_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001420, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_to_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001421, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_to_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001422, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_to_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001423, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_to_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001424, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_buffer_to_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001425, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001426, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001427, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001428, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001429, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001430, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001431, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001432, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001433, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001434, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001435, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001436, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001437, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001438, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001439, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001440, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001441, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_to_buffer_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001442, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001443, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001444, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001445, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001446, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001447, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001448, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001449, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001450, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001451, "dEQP-VK.synchronization2.cross_instance.dedicated.write_copy_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001452, "dEQP-VK.synchronization2.cross_instance.dedicated.write_blit_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001453, "dEQP-VK.synchronization2.cross_instance.dedicated.write_blit_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001454, "dEQP-VK.synchronization2.cross_instance.dedicated.write_blit_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001455, "dEQP-VK.synchronization2.cross_instance.dedicated.write_blit_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001456, "dEQP-VK.synchronization2.cross_instance.dedicated.write_blit_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001457, "dEQP-VK.synchronization2.cross_instance.dedicated.write_blit_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001458, "dEQP-VK.synchronization2.cross_instance.dedicated.write_blit_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001459, "dEQP-VK.synchronization2.cross_instance.dedicated.write_blit_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001460, "dEQP-VK.synchronization2.cross_instance.dedicated.write_blit_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001461, "dEQP-VK.synchronization2.cross_instance.dedicated.write_blit_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001462, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001463, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001464, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001465, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001466, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001467, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001468, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001469, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001470, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001471, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001472, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001473, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001474, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001475, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001476, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001477, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001478, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_vertex_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001479, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001480, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001481, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001482, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001483, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001484, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001485, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001486, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001487, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001488, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001489, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001490, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001491, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001492, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001493, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001494, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001495, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_control_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001496, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001497, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001498, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001499, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001500, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001501, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001502, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001503, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001504, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001505, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001506, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001507, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001508, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001509, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001510, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001511, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001512, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_tess_eval_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001513, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001514, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001515, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001516, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001517, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001518, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001519, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001520, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001521, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001522, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001523, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001524, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001525, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001526, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001527, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001528, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001529, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_geometry_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001530, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001531, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001532, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001533, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001534, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001535, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001536, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001537, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001538, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001539, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001540, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001541, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001542, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001543, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001544, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001545, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001546, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_fragment_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001547, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001548, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001549, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001550, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001551, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001552, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001553, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001554, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001555, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001556, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001557, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001558, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001559, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001560, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001561, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001562, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001563, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001564, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_copy_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001565, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_copy_buffer_to_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001566, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_ubo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001567, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_ubo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001568, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_ubo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001569, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_ubo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001570, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_ubo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001571, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_ubo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001572, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_ubo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001573, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_ssbo_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001574, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_ssbo_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001575, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_ssbo_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001576, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_ssbo_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001577, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_ssbo_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001578, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_ssbo_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001579, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_ssbo_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001580, "dEQP-VK.synchronization2.cross_instance.dedicated.write_ssbo_compute_indirect_read_vertex_input.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001581, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_vertex_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001582, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_vertex_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001583, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_vertex_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001584, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_vertex_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001585, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_vertex_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001586, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_vertex_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001587, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_vertex_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001588, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_vertex_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001589, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_vertex_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001590, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_vertex_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001591, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_control_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001592, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_control_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001593, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_control_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001594, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_control_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001595, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_control_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001596, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_control_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001597, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_control_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001598, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_control_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001599, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_control_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001600, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_control_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001601, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_eval_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001602, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_eval_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001603, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_eval_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001604, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_eval_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001605, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_eval_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001606, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_eval_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001607, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_eval_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001608, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_eval_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001609, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_eval_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001610, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_tess_eval_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001611, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_geometry_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001612, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_geometry_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001613, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_geometry_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001614, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_geometry_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001615, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_geometry_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001616, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_geometry_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001617, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_geometry_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001618, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_geometry_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001619, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_geometry_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001620, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_geometry_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001621, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_fragment_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001622, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_fragment_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001623, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_fragment_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001624, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_fragment_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001625, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_fragment_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001626, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_fragment_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001627, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_fragment_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001628, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_fragment_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001629, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_fragment_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001630, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_fragment_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001631, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001632, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001633, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001634, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001635, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001636, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001637, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001638, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001639, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001640, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001641, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001642, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001643, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001644, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001645, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001646, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001647, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001648, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001649, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001650, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001651, "dEQP-VK.synchronization2.cross_instance.dedicated.write_image_compute_multisample_read_resolve_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001652, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_color_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001653, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_color_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001654, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_color_image_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001655, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_color_image_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001656, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_color_image_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001657, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_color_image_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001658, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_color_image_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001659, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_color_image_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001660, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_color_image_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001661, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_color_image_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001662, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_depth_stencil_image_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001663, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_depth_stencil_image_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001664, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001665, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001666, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001667, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001668, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001669, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001670, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001671, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001672, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001673, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001674, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001675, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001676, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001677, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001678, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001679, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001680, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001681, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001682, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001683, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001684, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001685, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001686, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001687, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001688, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001689, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001690, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001691, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001692, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001693, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001694, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_indirect_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001695, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_indirect_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001696, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_indirect_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001697, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_indirect_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001698, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_indirect_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001699, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_indirect_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001700, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_indirect_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001701, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_indirect_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001702, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_indirect_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001703, "dEQP-VK.synchronization2.cross_instance.dedicated.write_draw_indexed_indirect_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001704, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_attachments_read_copy_image_to_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001705, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_attachments_read_copy_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001706, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_attachments_read_blit_image.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001707, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_attachments_read_image_vertex.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001708, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_attachments_read_image_tess_control.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001709, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_attachments_read_image_tess_eval.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001710, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_attachments_read_image_geometry.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001711, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_attachments_read_image_fragment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001712, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_attachments_read_image_compute.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001713, "dEQP-VK.synchronization2.cross_instance.dedicated.write_clear_attachments_read_image_compute_indirect.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001714, "dEQP-VK.synchronization2.cross_instance.dedicated.write_indirect_buffer_draw_read_indirect_buffer_draw.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001715, "dEQP-VK.synchronization2.cross_instance.dedicated.write_indirect_buffer_draw_indexed_read_indirect_buffer_draw_indexed.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001716, "dEQP-VK.synchronization2.cross_instance.dedicated.write_indirect_buffer_dispatch_read_indirect_buffer_dispatch.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001717, "dEQP-VK.synchronization2.cross_instance.dedicated.write_update_index_buffer_read_index_input.*");
