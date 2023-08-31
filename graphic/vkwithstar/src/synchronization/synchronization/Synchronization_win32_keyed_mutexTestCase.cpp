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
#include "../ActsSynchronization0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000778, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_copy_buffer.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000779, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_copy_buffer.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000780, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_copy_buffer_to_image.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000781, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_copy_buffer_to_image.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000782, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_ubo_vertex.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000783, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_ssbo_vertex.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000784, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_ssbo_tess_control.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000785, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_ssbo_tess_control.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000786, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_ssbo_tess_eval.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000787, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_ssbo_tess_eval.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000788, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_ssbo_geometry.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000789, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_ssbo_geometry.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000790, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_ssbo_fragment.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000791, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_ssbo_fragment.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000792, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_ssbo_compute.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000793, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_ssbo_compute.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000794, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_ssbo_compute_indirect.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000795, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_ssbo_compute_indirect.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000796, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_vertex_input.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000797, "dEQP-VK.synchronization.win32_keyed_mutex.write_fill_buffer_read_vertex_input.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000798, "dEQP-VK.synchronization.win32_keyed_mutex.write_update_buffer_read_copy_buffer.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000799, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_copy_buffer.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000800, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_copy_buffer_to_image.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000801, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_copy_buffer_to_image.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000802, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_ubo_vertex.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000803, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_ssbo_vertex.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000804, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_ssbo_tess_control.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000805, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_ssbo_tess_control.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000806, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_ssbo_tess_eval.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000807, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_ssbo_tess_eval.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000808, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_ssbo_geometry.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000809, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_ssbo_geometry.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000810, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_ssbo_fragment.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000811, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_ssbo_fragment.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000812, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_ssbo_compute.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000813, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_ssbo_compute.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000814, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_ssbo_compute_indirect.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000815, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_ssbo_compute_indirect.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000816, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_vertex_input.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000817, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_read_vertex_input.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000818, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image_to_buffer.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000819, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image_to_buffer.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000820, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image_to_buffer.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000821, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image_to_buffer.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000822, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000823, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000824, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000825, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000826, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000827, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000828, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000829, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000830, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000831, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000832, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000833, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000834, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000835, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000836, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000837, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_copy_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000838, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_blit_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000839, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_blit_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000840, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_blit_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000841, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_blit_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000842, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_blit_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000843, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_blit_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000844, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_blit_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000845, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_blit_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000846, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_blit_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000847, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_blit_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000848, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_vertex.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000849, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_vertex.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000850, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_vertex.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000851, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_vertex.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000852, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_vertex.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000853, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_vertex.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000854, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_vertex.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000855, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_vertex.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000856, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_vertex.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000857, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_vertex.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000858, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_control.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000859, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_control.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000860, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_control.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000861, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_control.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000862, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_control.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000863, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_control.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000864, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_control.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000865, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_control.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000866, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000867, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000868, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_eval.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000869, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_eval.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000870, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_eval.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000871, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_eval.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000872, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000873, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000874, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_eval.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000875, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_eval.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000876, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000877, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000878, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_geometry.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000879, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_geometry.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000880, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_geometry.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000881, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_geometry.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000882, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_geometry.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000883, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_geometry.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000884, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_geometry.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000885, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_geometry.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000886, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_geometry.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000887, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_geometry.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000888, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_fragment.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000889, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_fragment.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000890, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_fragment.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000891, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_fragment.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000892, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_fragment.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000893, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_fragment.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000894, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_fragment.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000895, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_fragment.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000896, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_fragment.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000897, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_fragment.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000898, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000899, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000900, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000901, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000902, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000903, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000904, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000905, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000906, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000907, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000908, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute_indirect.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000909, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute_indirect.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000910, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute_indirect.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000911, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute_indirect.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000912, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000913, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000914, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000915, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000916, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000917, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_buffer_to_image_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000918, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_copy_buffer.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000919, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_copy_buffer.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000920, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_copy_buffer_to_image.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000921, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_copy_buffer_to_image.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000922, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_ubo_vertex.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000923, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_ssbo_vertex.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000924, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_ssbo_tess_control.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000925, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_ssbo_tess_control.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000926, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_ssbo_tess_eval.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000927, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_ssbo_tess_eval.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000928, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_ssbo_geometry.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000929, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_ssbo_geometry.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000930, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_ssbo_fragment.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000931, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_ssbo_fragment.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000932, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_ssbo_compute.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000933, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_ssbo_compute.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000934, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_ssbo_compute_indirect.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000935, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_ssbo_compute_indirect.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000936, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_vertex_input.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000937, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_to_buffer_read_vertex_input.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000938, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image_to_buffer.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000939, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image_to_buffer.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000940, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image_to_buffer.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000941, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image_to_buffer.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000942, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000943, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000944, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000945, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000946, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000947, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000948, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000949, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000950, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000951, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000952, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000953, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000954, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000955, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000956, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000957, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_copy_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000958, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_blit_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000959, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_blit_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000960, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_blit_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000961, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_blit_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000962, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_blit_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000963, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_blit_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000964, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_blit_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000965, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_blit_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000966, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_blit_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000967, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_blit_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000968, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_vertex.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000969, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_vertex.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000970, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_vertex.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000971, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_vertex.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000972, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_vertex.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000973, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_vertex.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000974, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_vertex.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000975, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_vertex.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000976, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_vertex.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000977, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_vertex.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000978, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_control.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000979, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_control.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000980, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_control.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000981, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_control.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000982, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_control.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000983, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_control.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000984, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_control.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000985, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_control.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000986, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000987, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000988, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_eval.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000989, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_eval.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000990, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_eval.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000991, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_eval.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000992, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000993, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000994, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_eval.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000995, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_eval.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000996, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000997, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000998, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_geometry.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC000999, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_geometry.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001000, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_geometry.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001001, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_geometry.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001002, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_geometry.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001003, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_geometry.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001004, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_geometry.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001005, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_geometry.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001006, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_geometry.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001007, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_geometry.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001008, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_fragment.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001009, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_fragment.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001010, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_fragment.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001011, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_fragment.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001012, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_fragment.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001013, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_fragment.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001014, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_fragment.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001015, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_fragment.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001016, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_fragment.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001017, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_fragment.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001018, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001019, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001020, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001021, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001022, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001023, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001024, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001025, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001026, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001027, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001028, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute_indirect.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001029, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute_indirect.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001030, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute_indirect.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001031, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute_indirect.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001032, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001033, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001034, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001035, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001036, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001037, "dEQP-VK.synchronization.win32_keyed_mutex.write_copy_image_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001038, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image_to_buffer.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001039, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image_to_buffer.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001040, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image_to_buffer.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001041, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image_to_buffer.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001042, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001043, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001044, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001045, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001046, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001047, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001048, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001049, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001050, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001051, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001052, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001053, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001054, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001055, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001056, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001057, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_copy_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001058, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_blit_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001059, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_blit_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001060, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_blit_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001061, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_blit_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001062, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_blit_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001063, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_blit_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001064, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_blit_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001065, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_blit_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001066, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_blit_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001067, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_blit_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001068, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_vertex.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001069, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_vertex.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001070, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_vertex.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001071, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_vertex.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001072, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_vertex.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001073, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_vertex.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001074, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_vertex.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001075, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_vertex.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001076, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_vertex.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001077, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_vertex.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001078, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_control.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001079, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_control.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001080, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_control.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001081, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_control.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001082, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_control.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001083, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_control.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001084, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_control.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001085, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_control.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001086, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001087, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001088, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_eval.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001089, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_eval.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001090, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_eval.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001091, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_eval.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001092, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001093, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001094, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_eval.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001095, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_eval.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001096, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001097, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001098, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_geometry.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001099, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_geometry.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001100, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_geometry.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001101, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_geometry.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001102, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_geometry.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001103, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_geometry.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001104, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_geometry.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001105, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_geometry.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001106, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_geometry.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001107, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_geometry.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001108, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_fragment.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001109, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_fragment.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001110, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_fragment.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001111, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_fragment.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001112, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_fragment.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001113, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_fragment.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001114, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_fragment.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001115, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_fragment.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001116, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_fragment.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001117, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_fragment.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001118, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001119, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001120, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001121, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001122, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001123, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001124, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001125, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001126, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001127, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001128, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute_indirect.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001129, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute_indirect.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001130, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute_indirect.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001131, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute_indirect.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001132, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001133, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001134, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001135, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001136, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001137, "dEQP-VK.synchronization.win32_keyed_mutex.write_blit_image_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001138, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_copy_buffer.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001139, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_copy_buffer.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001140, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_copy_buffer_to_image.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001141, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_copy_buffer_to_image.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001142, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_ubo_vertex.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001143, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_ssbo_vertex.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001144, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_ssbo_tess_control.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001145, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_ssbo_tess_control.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001146, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_ssbo_tess_eval.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001147, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_ssbo_tess_eval.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001148, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_ssbo_geometry.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001149, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_ssbo_geometry.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001150, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_ssbo_fragment.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001151, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_ssbo_fragment.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001152, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_ssbo_compute.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001153, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_ssbo_compute.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001154, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_ssbo_compute_indirect.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001155, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_ssbo_compute_indirect.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001156, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_vertex_input.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001157, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_vertex_read_vertex_input.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001158, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_copy_buffer.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001159, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_copy_buffer.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001160, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_copy_buffer_to_image.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001161, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_copy_buffer_to_image.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001162, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_ubo_vertex.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001163, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_ssbo_vertex.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001164, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_ssbo_tess_control.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001165, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_ssbo_tess_control.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001166, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_ssbo_tess_eval.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001167, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_ssbo_tess_eval.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001168, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_ssbo_geometry.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001169, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_ssbo_geometry.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001170, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_ssbo_fragment.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001171, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_ssbo_fragment.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001172, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_ssbo_compute.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001173, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_ssbo_compute.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001174, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_ssbo_compute_indirect.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001175, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_ssbo_compute_indirect.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001176, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_vertex_input.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001177, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_control_read_vertex_input.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001178, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_copy_buffer.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001179, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_copy_buffer.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001180, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_copy_buffer_to_image.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001181, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_copy_buffer_to_image.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001182, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_ubo_vertex.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001183, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_ssbo_vertex.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001184, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_ssbo_tess_control.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001185, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_ssbo_tess_control.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001186, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_ssbo_tess_eval.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001187, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_ssbo_tess_eval.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001188, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_ssbo_geometry.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001189, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_ssbo_geometry.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001190, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_ssbo_fragment.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001191, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_ssbo_fragment.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001192, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_ssbo_compute.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001193, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_ssbo_compute.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001194, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_ssbo_compute_indirect.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001195, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_ssbo_compute_indirect.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001196, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_vertex_input.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001197, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_tess_eval_read_vertex_input.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001198, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_copy_buffer.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001199, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_copy_buffer.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001200, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_copy_buffer_to_image.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001201, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_copy_buffer_to_image.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001202, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_ubo_vertex.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001203, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_ssbo_vertex.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001204, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_ssbo_tess_control.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001205, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_ssbo_tess_control.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001206, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_ssbo_tess_eval.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001207, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_ssbo_tess_eval.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001208, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_ssbo_geometry.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001209, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_ssbo_geometry.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001210, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_ssbo_fragment.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001211, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_ssbo_fragment.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001212, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_ssbo_compute.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001213, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_ssbo_compute.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001214, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_ssbo_compute_indirect.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001215, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_ssbo_compute_indirect.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001216, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_vertex_input.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001217, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_geometry_read_vertex_input.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001218, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_copy_buffer.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001219, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_copy_buffer.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001220, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_copy_buffer_to_image.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001221, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_copy_buffer_to_image.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001222, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_ubo_vertex.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001223, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_ssbo_vertex.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001224, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_ssbo_tess_control.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001225, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_ssbo_tess_control.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001226, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_ssbo_tess_eval.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001227, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_ssbo_tess_eval.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001228, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_ssbo_geometry.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001229, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_ssbo_geometry.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001230, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_ssbo_fragment.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001231, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_ssbo_fragment.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001232, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_ssbo_compute.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001233, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_ssbo_compute.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001234, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_ssbo_compute_indirect.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001235, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_ssbo_compute_indirect.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001236, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_vertex_input.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001237, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_fragment_read_vertex_input.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001238, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_copy_buffer.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001239, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_copy_buffer.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001240, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_copy_buffer_to_image.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001241, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_copy_buffer_to_image.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001242, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_ubo_vertex.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001243, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_ssbo_vertex.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001244, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_ssbo_tess_control.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001245, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_ssbo_tess_control.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001246, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_ssbo_tess_eval.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001247, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_ssbo_tess_eval.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001248, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_ssbo_geometry.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001249, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_ssbo_geometry.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001250, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_ssbo_fragment.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001251, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_ssbo_fragment.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001252, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_ssbo_compute.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001253, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_ssbo_compute.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001254, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_ssbo_compute_indirect.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001255, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_ssbo_compute_indirect.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001256, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_vertex_input.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001257, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_read_vertex_input.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001258, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_copy_buffer.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001259, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_copy_buffer.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001260, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_copy_buffer_to_image.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001261, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_copy_buffer_to_image.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001262, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_ubo_vertex.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001263, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_ssbo_vertex.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001264, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_ssbo_tess_control.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001265, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_ssbo_tess_control.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001266, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_ssbo_tess_eval.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001267, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_ssbo_tess_eval.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001268, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_ssbo_geometry.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001269, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_ssbo_geometry.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001270, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_ssbo_fragment.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001271, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_ssbo_fragment.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001272, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_ssbo_compute.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001273, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_ssbo_compute.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001274, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_ssbo_compute_indirect.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001275, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_ssbo_compute_indirect.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001276, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_vertex_input.buffer_16384_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001277, "dEQP-VK.synchronization.win32_keyed_mutex.write_ssbo_compute_indirect_read_vertex_input.buffer_262144_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001278, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image_to_buffer.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001279, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image_to_buffer.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001280, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image_to_buffer.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001281, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image_to_buffer.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001282, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001283, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001284, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001285, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001286, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001287, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001288, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001289, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001290, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001291, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001292, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001293, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001294, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001295, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001296, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001297, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_copy_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001298, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_blit_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001299, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_blit_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001300, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_blit_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001301, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_blit_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001302, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_blit_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001303, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_blit_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001304, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_blit_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001305, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_blit_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001306, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_blit_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001307, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_blit_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001308, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_vertex.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001309, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_vertex.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001310, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_vertex.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001311, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_vertex.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001312, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_vertex.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001313, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_vertex.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001314, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_vertex.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001315, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_vertex.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001316, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_vertex.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001317, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_vertex.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001318, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_control.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001319, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_control.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001320, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_control.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001321, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_control.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001322, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_control.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001323, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_control.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001324, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_control.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001325, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_control.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001326, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001327, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001328, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_eval.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001329, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_eval.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001330, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_eval.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001331, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_eval.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001332, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001333, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001334, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_eval.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001335, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_eval.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001336, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001337, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001338, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_geometry.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001339, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_geometry.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001340, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_geometry.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001341, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_geometry.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001342, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_geometry.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001343, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_geometry.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001344, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_geometry.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001345, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_geometry.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001346, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_geometry.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001347, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_geometry.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001348, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_fragment.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001349, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_fragment.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001350, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_fragment.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001351, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_fragment.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001352, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_fragment.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001353, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_fragment.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001354, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_fragment.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001355, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_fragment.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001356, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_fragment.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001357, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_fragment.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001358, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001359, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001360, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001361, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001362, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001363, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001364, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001365, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001366, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001367, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001368, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute_indirect.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001369, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute_indirect.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001370, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute_indirect.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001371, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute_indirect.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001372, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001373, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001374, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001375, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001376, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001377, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_vertex_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001378, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image_to_buffer.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001379, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image_to_buffer.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001380, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image_to_buffer.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001381, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image_to_buffer.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001382, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001383, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001384, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001385, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001386, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001387, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001388, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001389, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001390, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001391, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001392, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001393, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001394, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001395, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001396, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001397, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_copy_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001398, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_blit_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001399, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_blit_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001400, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_blit_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001401, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_blit_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001402, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_blit_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001403, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_blit_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001404, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_blit_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001405, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_blit_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001406, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_blit_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001407, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_blit_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001408, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_vertex.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001409, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_vertex.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001410, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_vertex.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001411, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_vertex.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001412, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_vertex.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001413, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_vertex.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001414, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_vertex.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001415, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_vertex.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001416, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_vertex.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001417, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_vertex.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001418, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_control.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001419, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_control.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001420, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_control.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001421, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_control.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001422, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_control.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001423, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_control.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001424, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_control.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001425, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_control.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001426, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001427, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001428, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_eval.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001429, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_eval.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001430, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_eval.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001431, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_eval.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001432, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001433, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001434, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_eval.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001435, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_eval.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001436, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001437, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001438, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_geometry.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001439, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_geometry.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001440, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_geometry.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001441, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_geometry.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001442, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_geometry.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001443, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_geometry.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001444, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_geometry.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001445, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_geometry.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001446, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_geometry.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001447, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_geometry.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001448, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_fragment.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001449, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_fragment.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001450, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_fragment.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001451, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_fragment.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001452, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_fragment.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001453, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_fragment.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001454, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_fragment.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001455, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_fragment.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001456, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_fragment.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001457, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_fragment.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001458, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001459, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001460, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001461, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001462, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001463, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001464, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001465, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001466, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001467, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001468, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute_indirect.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001469, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute_indirect.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001470, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute_indirect.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001471, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute_indirect.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001472, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001473, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001474, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001475, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001476, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001477, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_control_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001478, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image_to_buffer.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001479, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image_to_buffer.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001480, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image_to_buffer.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001481, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image_to_buffer.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001482, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001483, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001484, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001485, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001486, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001487, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001488, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001489, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001490, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001491, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001492, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001493, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001494, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001495, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001496, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001497, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_copy_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001498, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_blit_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001499, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_blit_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001500, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_blit_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001501, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_blit_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001502, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_blit_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001503, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_blit_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001504, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_blit_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001505, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_blit_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001506, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_blit_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001507, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_blit_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001508, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_vertex.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001509, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_vertex.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001510, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_vertex.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001511, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_vertex.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001512, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_vertex.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001513, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_vertex.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001514, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_vertex.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001515, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_vertex.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001516, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_vertex.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001517, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_vertex.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001518, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_control.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001519, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_control.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001520, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_control.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001521, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_control.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001522, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_control.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001523, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_control.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001524, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_control.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001525, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_control.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001526, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001527, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001528, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_eval.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001529, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_eval.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001530, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_eval.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001531, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_eval.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001532, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001533, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001534, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_eval.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001535, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_eval.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001536, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001537, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001538, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_geometry.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001539, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_geometry.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001540, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_geometry.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001541, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_geometry.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001542, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_geometry.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001543, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_geometry.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001544, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_geometry.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001545, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_geometry.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001546, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_geometry.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001547, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_geometry.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001548, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_fragment.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001549, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_fragment.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001550, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_fragment.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001551, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_fragment.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001552, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_fragment.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001553, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_fragment.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001554, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_fragment.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001555, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_fragment.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001556, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_fragment.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001557, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_fragment.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001558, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001559, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001560, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001561, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001562, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001563, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001564, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001565, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001566, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001567, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001568, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute_indirect.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001569, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute_indirect.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001570, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute_indirect.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001571, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute_indirect.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001572, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001573, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001574, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001575, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001576, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001577, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_tess_eval_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001578, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image_to_buffer.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001579, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image_to_buffer.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001580, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image_to_buffer.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001581, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image_to_buffer.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001582, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001583, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001584, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001585, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001586, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001587, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001588, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001589, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001590, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001591, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001592, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001593, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001594, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001595, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001596, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001597, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_copy_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001598, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_blit_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001599, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_blit_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001600, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_blit_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001601, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_blit_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001602, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_blit_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001603, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_blit_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001604, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_blit_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001605, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_blit_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001606, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_blit_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001607, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_blit_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001608, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_vertex.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001609, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_vertex.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001610, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_vertex.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001611, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_vertex.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001612, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_vertex.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001613, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_vertex.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001614, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_vertex.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001615, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_vertex.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001616, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_vertex.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001617, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_vertex.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001618, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_control.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001619, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_control.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001620, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_control.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001621, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_control.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001622, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_control.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001623, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_control.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001624, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_control.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001625, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_control.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001626, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001627, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001628, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_eval.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001629, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_eval.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001630, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_eval.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001631, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_eval.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001632, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001633, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001634, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_eval.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001635, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_eval.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001636, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001637, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001638, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_geometry.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001639, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_geometry.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001640, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_geometry.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001641, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_geometry.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001642, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_geometry.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001643, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_geometry.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001644, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_geometry.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001645, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_geometry.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001646, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_geometry.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001647, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_geometry.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001648, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_fragment.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001649, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_fragment.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001650, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_fragment.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001651, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_fragment.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001652, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_fragment.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001653, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_fragment.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001654, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_fragment.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001655, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_fragment.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001656, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_fragment.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001657, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_fragment.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001658, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001659, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001660, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001661, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001662, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001663, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001664, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001665, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001666, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001667, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001668, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute_indirect.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001669, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute_indirect.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001670, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute_indirect.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001671, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute_indirect.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001672, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001673, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001674, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001675, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001676, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001677, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_geometry_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001678, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image_to_buffer.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001679, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image_to_buffer.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001680, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image_to_buffer.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001681, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image_to_buffer.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001682, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001683, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001684, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001685, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001686, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001687, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001688, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001689, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001690, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001691, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001692, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001693, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001694, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001695, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001696, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001697, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_copy_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001698, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_blit_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001699, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_blit_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001700, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_blit_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001701, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_blit_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001702, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_blit_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001703, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_blit_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001704, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_blit_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001705, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_blit_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001706, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_blit_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001707, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_blit_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001708, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_vertex.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001709, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_vertex.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001710, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_vertex.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001711, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_vertex.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001712, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_vertex.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001713, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_vertex.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001714, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_vertex.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001715, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_vertex.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001716, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_vertex.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001717, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_vertex.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001718, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_control.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001719, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_control.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001720, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_control.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001721, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_control.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001722, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_control.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001723, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_control.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001724, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_control.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001725, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_control.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001726, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001727, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001728, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_eval.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001729, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_eval.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001730, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_eval.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001731, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_eval.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001732, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001733, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001734, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_eval.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001735, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_eval.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001736, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001737, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001738, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_geometry.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001739, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_geometry.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001740, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_geometry.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001741, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_geometry.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001742, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_geometry.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001743, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_geometry.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001744, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_geometry.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001745, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_geometry.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001746, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_geometry.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001747, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_geometry.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001748, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_fragment.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001749, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_fragment.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001750, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_fragment.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001751, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_fragment.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001752, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_fragment.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001753, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_fragment.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001754, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_fragment.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001755, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_fragment.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001756, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_fragment.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001757, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_fragment.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001758, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001759, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001760, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001761, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001762, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001763, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001764, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001765, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001766, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001767, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001768, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute_indirect.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001769, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute_indirect.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001770, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute_indirect.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001771, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute_indirect.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001772, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001773, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001774, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001775, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001776, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001777, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_fragment_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001778, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image_to_buffer.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001779, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image_to_buffer.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001780, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image_to_buffer.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001781, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image_to_buffer.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001782, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001783, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001784, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001785, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001786, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001787, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001788, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001789, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001790, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001791, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001792, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001793, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001794, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001795, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001796, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001797, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_copy_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001798, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_blit_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001799, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_blit_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001800, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_blit_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001801, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_blit_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001802, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_blit_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001803, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_blit_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001804, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_blit_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001805, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_blit_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001806, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_blit_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001807, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_blit_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001808, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_vertex.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001809, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_vertex.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001810, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_vertex.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001811, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_vertex.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001812, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_vertex.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001813, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_vertex.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001814, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_vertex.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001815, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_vertex.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001816, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_vertex.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001817, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_vertex.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001818, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_control.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001819, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_control.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001820, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_control.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001821, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_control.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001822, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_control.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001823, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_control.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001824, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_control.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001825, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_control.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001826, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001827, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001828, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_eval.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001829, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_eval.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001830, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_eval.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001831, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_eval.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001832, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001833, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001834, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_eval.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001835, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_eval.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001836, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001837, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001838, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_geometry.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001839, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_geometry.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001840, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_geometry.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001841, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_geometry.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001842, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_geometry.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001843, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_geometry.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001844, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_geometry.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001845, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_geometry.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001846, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_geometry.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001847, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_geometry.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001848, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_fragment.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001849, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_fragment.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001850, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_fragment.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001851, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_fragment.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001852, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_fragment.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001853, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_fragment.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001854, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_fragment.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001855, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_fragment.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001856, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_fragment.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001857, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_fragment.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001858, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001859, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001860, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001861, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001862, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001863, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001864, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001865, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001866, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001867, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001868, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute_indirect.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001869, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute_indirect.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001870, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute_indirect.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001871, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute_indirect.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001872, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001873, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001874, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001875, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001876, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001877, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001878, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image_to_buffer.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001879, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image_to_buffer.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001880, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image_to_buffer.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001881, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image_to_buffer.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001882, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001883, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001884, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001885, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001886, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001887, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001888, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001889, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001890, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001891, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001892, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001893, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001894, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001895, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001896, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001897, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_copy_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001898, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_blit_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001899, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_blit_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001900, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_blit_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001901, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_blit_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001902, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_blit_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001903, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_blit_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001904, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_blit_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001905, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_blit_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001906, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_blit_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001907, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_blit_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001908, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_vertex.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001909, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_vertex.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001910, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_vertex.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001911, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_vertex.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001912, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_vertex.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001913, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_vertex.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001914, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_vertex.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001915, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_vertex.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001916, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_vertex.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001917, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_vertex.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001918, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_control.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001919, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_control.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001920, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_control.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001921, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_control.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001922, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_control.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001923, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_control.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001924, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_control.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001925, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_control.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001926, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001927, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001928, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_eval.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001929, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_eval.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001930, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_eval.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001931, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_eval.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001932, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001933, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001934, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_eval.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001935, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_eval.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001936, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001937, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001938, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_geometry.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001939, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_geometry.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001940, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_geometry.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001941, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_geometry.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001942, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_geometry.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001943, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_geometry.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001944, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_geometry.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001945, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_geometry.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001946, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_geometry.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001947, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_geometry.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001948, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_fragment.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001949, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_fragment.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001950, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_fragment.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001951, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_fragment.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001952, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_fragment.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001953, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_fragment.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001954, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_fragment.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001955, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_fragment.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001956, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_fragment.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001957, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_fragment.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001958, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001959, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001960, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001961, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001962, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001963, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001964, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001965, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001966, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001967, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001968, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute_indirect.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001969, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute_indirect.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001970, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute_indirect.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001971, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute_indirect.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001972, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001973, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001974, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001975, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001976, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001977, "dEQP-VK.synchronization.win32_keyed_mutex.write_image_compute_indirect_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001978, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image_to_buffer.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001979, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image_to_buffer.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001980, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image_to_buffer.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001981, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image_to_buffer.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001982, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001983, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001984, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001985, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001986, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001987, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001988, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001989, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001990, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001991, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001992, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001993, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001994, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001995, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001996, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001997, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_copy_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001998, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_blit_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC001999, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_blit_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002000, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_blit_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002001, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_blit_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002002, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_blit_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002003, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_blit_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002004, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_blit_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002005, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_blit_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002006, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_blit_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002007, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_blit_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002008, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_vertex.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002009, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_vertex.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002010, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_vertex.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002011, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_vertex.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002012, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_vertex.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002013, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_vertex.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002014, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_vertex.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002015, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_vertex.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002016, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_vertex.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002017, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_vertex.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002018, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_control.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002019, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_control.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002020, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_control.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002021, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_control.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002022, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_control.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002023, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_control.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002024, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_control.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002025, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_control.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002026, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002027, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002028, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_eval.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002029, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_eval.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002030, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_eval.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002031, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_eval.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002032, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002033, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002034, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_eval.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002035, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_eval.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002036, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002037, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002038, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_geometry.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002039, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_geometry.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002040, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_geometry.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002041, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_geometry.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002042, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_geometry.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002043, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_geometry.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002044, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_geometry.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002045, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_geometry.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002046, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_geometry.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002047, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_geometry.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002048, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_fragment.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002049, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_fragment.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002050, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_fragment.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002051, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_fragment.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002052, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_fragment.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002053, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_fragment.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002054, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_fragment.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002055, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_fragment.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002056, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_fragment.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002057, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_fragment.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002058, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002059, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002060, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002061, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002062, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002063, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002064, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002065, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002066, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002067, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002068, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute_indirect.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002069, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute_indirect.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002070, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute_indirect.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002071, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute_indirect.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002072, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002073, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002074, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002075, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002076, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002077, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_color_image_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002078, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image_to_buffer.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002079, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image_to_buffer.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002080, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image_to_buffer.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002081, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image_to_buffer.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002082, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002083, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002084, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002085, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002086, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002087, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002088, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002089, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002090, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002091, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002092, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002093, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002094, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002095, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002096, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002097, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_copy_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002098, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_blit_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002099, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_blit_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002100, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_blit_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002101, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_blit_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002102, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_blit_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002103, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_blit_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002104, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_blit_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002105, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_blit_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002106, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_blit_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002107, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_blit_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002108, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_vertex.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002109, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_vertex.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002110, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_vertex.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002111, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_vertex.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002112, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_vertex.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002113, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_vertex.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002114, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_vertex.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002115, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_vertex.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002116, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_vertex.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002117, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_vertex.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002118, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_control.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002119, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_control.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002120, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_control.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002121, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_control.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002122, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_control.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002123, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_control.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002124, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_control.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002125, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_control.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002126, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002127, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002128, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_eval.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002129, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_eval.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002130, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_eval.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002131, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_eval.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002132, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002133, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002134, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_eval.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002135, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_eval.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002136, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002137, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002138, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_geometry.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002139, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_geometry.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002140, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_geometry.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002141, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_geometry.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002142, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_geometry.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002143, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_geometry.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002144, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_geometry.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002145, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_geometry.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002146, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_geometry.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002147, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_geometry.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002148, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_fragment.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002149, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_fragment.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002150, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_fragment.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002151, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_fragment.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002152, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_fragment.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002153, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_fragment.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002154, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_fragment.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002155, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_fragment.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002156, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_fragment.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002157, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_fragment.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002158, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002159, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002160, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002161, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002162, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002163, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002164, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002165, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002166, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002167, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002168, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute_indirect.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002169, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute_indirect.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002170, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute_indirect.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002171, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute_indirect.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002172, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002173, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002174, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002175, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002176, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002177, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002178, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image_to_buffer.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002179, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image_to_buffer.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002180, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image_to_buffer.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002181, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image_to_buffer.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002182, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002183, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002184, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002185, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002186, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002187, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002188, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002189, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002190, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002191, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002192, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002193, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002194, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002195, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002196, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002197, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_copy_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002198, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_blit_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002199, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_blit_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002200, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_blit_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002201, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_blit_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002202, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_blit_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002203, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_blit_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002204, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_blit_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002205, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_blit_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002206, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_blit_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002207, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_blit_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002208, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_vertex.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002209, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_vertex.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002210, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_vertex.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002211, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_vertex.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002212, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_vertex.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002213, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_vertex.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002214, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_vertex.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002215, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_vertex.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002216, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_vertex.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002217, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_vertex.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002218, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_control.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002219, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_control.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002220, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_control.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002221, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_control.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002222, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_control.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002223, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_control.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002224, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_control.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002225, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_control.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002226, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002227, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002228, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_eval.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002229, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_eval.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002230, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_eval.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002231, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_eval.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002232, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002233, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002234, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_eval.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002235, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_eval.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002236, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002237, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002238, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_geometry.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002239, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_geometry.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002240, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_geometry.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002241, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_geometry.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002242, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_geometry.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002243, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_geometry.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002244, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_geometry.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002245, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_geometry.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002246, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_geometry.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002247, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_geometry.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002248, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_fragment.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002249, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_fragment.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002250, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_fragment.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002251, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_fragment.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002252, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_fragment.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002253, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_fragment.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002254, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_fragment.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002255, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_fragment.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002256, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_fragment.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002257, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_fragment.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002258, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002259, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002260, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002261, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002262, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002263, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002264, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002265, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002266, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002267, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002268, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute_indirect.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002269, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute_indirect.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002270, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute_indirect.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002271, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute_indirect.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002272, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002273, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002274, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002275, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002276, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002277, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002278, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image_to_buffer.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002279, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image_to_buffer.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002280, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image_to_buffer.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002281, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image_to_buffer.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002282, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002283, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002284, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002285, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002286, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002287, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002288, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002289, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002290, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002291, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002292, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002293, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002294, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002295, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002296, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002297, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_copy_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002298, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_blit_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002299, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_blit_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002300, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_blit_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002301, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_blit_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002302, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_blit_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002303, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_blit_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002304, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_blit_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002305, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_blit_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002306, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_blit_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002307, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_blit_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002308, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_vertex.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002309, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_vertex.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002310, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_vertex.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002311, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_vertex.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002312, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_vertex.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002313, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_vertex.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002314, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_vertex.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002315, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_vertex.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002316, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_vertex.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002317, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_vertex.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002318, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_control.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002319, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_control.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002320, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_control.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002321, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_control.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002322, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_control.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002323, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_control.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002324, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_control.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002325, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_control.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002326, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002327, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002328, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_eval.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002329, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_eval.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002330, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_eval.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002331, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_eval.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002332, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002333, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002334, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_eval.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002335, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_eval.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002336, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002337, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002338, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_geometry.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002339, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_geometry.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002340, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_geometry.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002341, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_geometry.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002342, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_geometry.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002343, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_geometry.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002344, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_geometry.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002345, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_geometry.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002346, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_geometry.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002347, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_geometry.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002348, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_fragment.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002349, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_fragment.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002350, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_fragment.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002351, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_fragment.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002352, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_fragment.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002353, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_fragment.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002354, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_fragment.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002355, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_fragment.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002356, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_fragment.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002357, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_fragment.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002358, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002359, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002360, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002361, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002362, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002363, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002364, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002365, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002366, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002367, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002368, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute_indirect.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002369, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute_indirect.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002370, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute_indirect.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002371, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute_indirect.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002372, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002373, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002374, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002375, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002376, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002377, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indirect_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002378, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image_to_buffer.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002379, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image_to_buffer.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002380, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image_to_buffer.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002381, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image_to_buffer.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002382, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002383, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002384, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002385, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002386, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002387, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002388, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002389, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002390, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002391, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002392, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002393, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002394, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002395, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002396, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002397, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_copy_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002398, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_blit_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002399, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_blit_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002400, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_blit_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002401, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_blit_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002402, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_blit_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002403, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_blit_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002404, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_blit_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002405, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_blit_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002406, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_blit_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002407, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_blit_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002408, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_vertex.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002409, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_vertex.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002410, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_vertex.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002411, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_vertex.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002412, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_vertex.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002413, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_vertex.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002414, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_vertex.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002415, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_vertex.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002416, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_vertex.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002417, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_vertex.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002418, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_control.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002419, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_control.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002420, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_control.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002421, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_control.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002422, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_control.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002423, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_control.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002424, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_control.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002425, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_control.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002426, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002427, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002428, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_eval.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002429, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_eval.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002430, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_eval.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002431, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_eval.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002432, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002433, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002434, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_eval.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002435, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_eval.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002436, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002437, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002438, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_geometry.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002439, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_geometry.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002440, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_geometry.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002441, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_geometry.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002442, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_geometry.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002443, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_geometry.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002444, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_geometry.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002445, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_geometry.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002446, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_geometry.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002447, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_geometry.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002448, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_fragment.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002449, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_fragment.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002450, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_fragment.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002451, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_fragment.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002452, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_fragment.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002453, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_fragment.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002454, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_fragment.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002455, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_fragment.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002456, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_fragment.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002457, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_fragment.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002458, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002459, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002460, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002461, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002462, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002463, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002464, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002465, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002466, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002467, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002468, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute_indirect.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002469, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute_indirect.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002470, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute_indirect.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002471, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute_indirect.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002472, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002473, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002474, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002475, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002476, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002477, "dEQP-VK.synchronization.win32_keyed_mutex.write_draw_indexed_indirect_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002478, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image_to_buffer.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002479, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image_to_buffer.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002480, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image_to_buffer.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002481, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image_to_buffer.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002482, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002483, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image_to_buffer.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002484, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002485, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image_to_buffer.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002486, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002487, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image_to_buffer.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002488, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002489, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002490, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002491, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002492, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002493, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002494, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002495, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002496, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002497, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_copy_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002498, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_blit_image.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002499, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_blit_image.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002500, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_blit_image.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002501, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_blit_image.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002502, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_blit_image.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002503, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_blit_image.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002504, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_blit_image.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002505, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_blit_image.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002506, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_blit_image.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002507, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_blit_image.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002508, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_vertex.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002509, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_vertex.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002510, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_vertex.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002511, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_vertex.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002512, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_vertex.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002513, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_vertex.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002514, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_vertex.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002515, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_vertex.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002516, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_vertex.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002517, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_vertex.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002518, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_control.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002519, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_control.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002520, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_control.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002521, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_control.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002522, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_control.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002523, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_control.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002524, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_control.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002525, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_control.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002526, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002527, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_control.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002528, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_eval.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002529, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_eval.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002530, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_eval.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002531, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_eval.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002532, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002533, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_eval.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002534, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_eval.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002535, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_eval.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002536, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002537, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_tess_eval.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002538, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_geometry.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002539, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_geometry.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002540, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_geometry.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002541, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_geometry.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002542, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_geometry.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002543, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_geometry.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002544, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_geometry.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002545, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_geometry.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002546, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_geometry.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002547, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_geometry.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002548, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_fragment.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002549, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_fragment.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002550, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_fragment.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002551, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_fragment.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002552, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_fragment.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002553, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_fragment.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002554, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_fragment.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002555, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_fragment.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002556, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_fragment.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002557, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_fragment.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002558, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002559, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002560, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002561, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002562, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002563, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002564, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002565, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002566, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002567, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute.image_128x128_r32g32b32a32_sfloat_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002568, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute_indirect.image_128x128_r8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002569, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute_indirect.image_128x128_r8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002570, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute_indirect.image_128x128_r16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002571, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute_indirect.image_128x128_r16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002572, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002573, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute_indirect.image_128x128_r8g8b8a8_unorm_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002574, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002575, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute_indirect.image_128x128_r16g16b16a16_uint_kmt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002576, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_nt.*");

static SHRINK_HWTEST_F(ActsSynchronization0001TS, TC002577, "dEQP-VK.synchronization.win32_keyed_mutex.write_clear_attachments_read_image_compute_indirect.image_128x128_r32g32b32a32_sfloat_kmt.*");
