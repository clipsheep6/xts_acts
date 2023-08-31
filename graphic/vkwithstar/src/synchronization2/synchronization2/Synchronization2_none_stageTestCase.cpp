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

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000770, "dEQP-VK.synchronization2.none_stage.transfer_dst_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000771, "dEQP-VK.synchronization2.none_stage.transfer_dst_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000772, "dEQP-VK.synchronization2.none_stage.transfer_dst_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000773, "dEQP-VK.synchronization2.none_stage.transfer_dst_to_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000774, "dEQP-VK.synchronization2.none_stage.transfer_dst_to_depth_read_stencil_attachment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000775, "dEQP-VK.synchronization2.none_stage.transfer_dst_to_depth_attachment_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000776, "dEQP-VK.synchronization2.none_stage.transfer_dst_to_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000777, "dEQP-VK.synchronization2.none_stage.transfer_dst_to_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000778, "dEQP-VK.synchronization2.none_stage.transfer_dst_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000779, "dEQP-VK.synchronization2.none_stage.transfer_dst_to_generic_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000780, "dEQP-VK.synchronization2.none_stage.transfer_dst_to_generic_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000781, "dEQP-VK.synchronization2.none_stage.transfer_dst_to_generic_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000782, "dEQP-VK.synchronization2.none_stage.general_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000783, "dEQP-VK.synchronization2.none_stage.general_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000784, "dEQP-VK.synchronization2.none_stage.general_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000785, "dEQP-VK.synchronization2.none_stage.general_to_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000786, "dEQP-VK.synchronization2.none_stage.general_to_depth_read_stencil_attachment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000787, "dEQP-VK.synchronization2.none_stage.general_to_depth_attachment_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000788, "dEQP-VK.synchronization2.none_stage.general_to_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000789, "dEQP-VK.synchronization2.none_stage.general_to_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000790, "dEQP-VK.synchronization2.none_stage.general_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000791, "dEQP-VK.synchronization2.none_stage.general_to_generic_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000792, "dEQP-VK.synchronization2.none_stage.general_to_generic_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000793, "dEQP-VK.synchronization2.none_stage.general_to_generic_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000794, "dEQP-VK.synchronization2.none_stage.color_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000795, "dEQP-VK.synchronization2.none_stage.color_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000796, "dEQP-VK.synchronization2.none_stage.color_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000797, "dEQP-VK.synchronization2.none_stage.color_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000798, "dEQP-VK.synchronization2.none_stage.depth_stencil_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000799, "dEQP-VK.synchronization2.none_stage.depth_stencil_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000800, "dEQP-VK.synchronization2.none_stage.depth_stencil_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000801, "dEQP-VK.synchronization2.none_stage.depth_stencil_attachment_to_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000802, "dEQP-VK.synchronization2.none_stage.depth_stencil_attachment_to_depth_read_stencil_attachment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000803, "dEQP-VK.synchronization2.none_stage.depth_stencil_attachment_to_depth_attachment_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000804, "dEQP-VK.synchronization2.none_stage.depth_stencil_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000805, "dEQP-VK.synchronization2.none_stage.depth_stencil_attachment_to_generic_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000806, "dEQP-VK.synchronization2.none_stage.depth_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000807, "dEQP-VK.synchronization2.none_stage.depth_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000808, "dEQP-VK.synchronization2.none_stage.depth_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000809, "dEQP-VK.synchronization2.none_stage.depth_attachment_to_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000810, "dEQP-VK.synchronization2.none_stage.depth_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000811, "dEQP-VK.synchronization2.none_stage.depth_attachment_to_generic_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000812, "dEQP-VK.synchronization2.none_stage.stencil_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000813, "dEQP-VK.synchronization2.none_stage.stencil_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000814, "dEQP-VK.synchronization2.none_stage.stencil_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000815, "dEQP-VK.synchronization2.none_stage.stencil_attachment_to_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000816, "dEQP-VK.synchronization2.none_stage.stencil_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000817, "dEQP-VK.synchronization2.none_stage.stencil_attachment_to_generic_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000818, "dEQP-VK.synchronization2.none_stage.generic_color_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000819, "dEQP-VK.synchronization2.none_stage.generic_color_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000820, "dEQP-VK.synchronization2.none_stage.generic_color_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000821, "dEQP-VK.synchronization2.none_stage.generic_color_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000822, "dEQP-VK.synchronization2.none_stage.generic_depth_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000823, "dEQP-VK.synchronization2.none_stage.generic_depth_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000824, "dEQP-VK.synchronization2.none_stage.generic_depth_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000825, "dEQP-VK.synchronization2.none_stage.generic_depth_attachment_to_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000826, "dEQP-VK.synchronization2.none_stage.generic_depth_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000827, "dEQP-VK.synchronization2.none_stage.generic_depth_attachment_to_generic_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000828, "dEQP-VK.synchronization2.none_stage.generic_stencil_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000829, "dEQP-VK.synchronization2.none_stage.generic_stencil_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000830, "dEQP-VK.synchronization2.none_stage.generic_stencil_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000831, "dEQP-VK.synchronization2.none_stage.generic_stencil_attachment_to_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000832, "dEQP-VK.synchronization2.none_stage.generic_stencil_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000833, "dEQP-VK.synchronization2.none_stage.generic_stencil_attachment_to_generic_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000834, "dEQP-VK.synchronization2.none_stage.generic_depth_stencil_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000835, "dEQP-VK.synchronization2.none_stage.generic_depth_stencil_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000836, "dEQP-VK.synchronization2.none_stage.generic_depth_stencil_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000837, "dEQP-VK.synchronization2.none_stage.generic_depth_stencil_attachment_to_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000838, "dEQP-VK.synchronization2.none_stage.generic_depth_stencil_attachment_to_depth_read_stencil_attachment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000839, "dEQP-VK.synchronization2.none_stage.generic_depth_stencil_attachment_to_depth_attachment_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000840, "dEQP-VK.synchronization2.none_stage.generic_depth_stencil_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000841, "dEQP-VK.synchronization2.none_stage.generic_depth_stencil_attachment_to_generic_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000842, "dEQP-VK.synchronization2.none_stage.old_access_transfer_dst_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000843, "dEQP-VK.synchronization2.none_stage.old_access_transfer_dst_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000844, "dEQP-VK.synchronization2.none_stage.old_access_transfer_dst_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000845, "dEQP-VK.synchronization2.none_stage.old_access_transfer_dst_to_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000846, "dEQP-VK.synchronization2.none_stage.old_access_transfer_dst_to_depth_read_stencil_attachment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000847, "dEQP-VK.synchronization2.none_stage.old_access_transfer_dst_to_depth_attachment_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000848, "dEQP-VK.synchronization2.none_stage.old_access_transfer_dst_to_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000849, "dEQP-VK.synchronization2.none_stage.old_access_transfer_dst_to_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000850, "dEQP-VK.synchronization2.none_stage.old_access_transfer_dst_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000851, "dEQP-VK.synchronization2.none_stage.old_access_transfer_dst_to_generic_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000852, "dEQP-VK.synchronization2.none_stage.old_access_transfer_dst_to_generic_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000853, "dEQP-VK.synchronization2.none_stage.old_access_transfer_dst_to_generic_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000854, "dEQP-VK.synchronization2.none_stage.old_access_general_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000855, "dEQP-VK.synchronization2.none_stage.old_access_general_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000856, "dEQP-VK.synchronization2.none_stage.old_access_general_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000857, "dEQP-VK.synchronization2.none_stage.old_access_general_to_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000858, "dEQP-VK.synchronization2.none_stage.old_access_general_to_depth_read_stencil_attachment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000859, "dEQP-VK.synchronization2.none_stage.old_access_general_to_depth_attachment_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000860, "dEQP-VK.synchronization2.none_stage.old_access_general_to_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000861, "dEQP-VK.synchronization2.none_stage.old_access_general_to_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000862, "dEQP-VK.synchronization2.none_stage.old_access_general_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000863, "dEQP-VK.synchronization2.none_stage.old_access_general_to_generic_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000864, "dEQP-VK.synchronization2.none_stage.old_access_general_to_generic_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000865, "dEQP-VK.synchronization2.none_stage.old_access_general_to_generic_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000866, "dEQP-VK.synchronization2.none_stage.old_access_color_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000867, "dEQP-VK.synchronization2.none_stage.old_access_color_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000868, "dEQP-VK.synchronization2.none_stage.old_access_color_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000869, "dEQP-VK.synchronization2.none_stage.old_access_color_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000870, "dEQP-VK.synchronization2.none_stage.old_access_depth_stencil_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000871, "dEQP-VK.synchronization2.none_stage.old_access_depth_stencil_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000872, "dEQP-VK.synchronization2.none_stage.old_access_depth_stencil_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000873, "dEQP-VK.synchronization2.none_stage.old_access_depth_stencil_attachment_to_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000874, "dEQP-VK.synchronization2.none_stage.old_access_depth_stencil_attachment_to_depth_read_stencil_attachment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000875, "dEQP-VK.synchronization2.none_stage.old_access_depth_stencil_attachment_to_depth_attachment_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000876, "dEQP-VK.synchronization2.none_stage.old_access_depth_stencil_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000877, "dEQP-VK.synchronization2.none_stage.old_access_depth_stencil_attachment_to_generic_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000878, "dEQP-VK.synchronization2.none_stage.old_access_depth_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000879, "dEQP-VK.synchronization2.none_stage.old_access_depth_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000880, "dEQP-VK.synchronization2.none_stage.old_access_depth_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000881, "dEQP-VK.synchronization2.none_stage.old_access_depth_attachment_to_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000882, "dEQP-VK.synchronization2.none_stage.old_access_depth_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000883, "dEQP-VK.synchronization2.none_stage.old_access_depth_attachment_to_generic_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000884, "dEQP-VK.synchronization2.none_stage.old_access_stencil_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000885, "dEQP-VK.synchronization2.none_stage.old_access_stencil_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000886, "dEQP-VK.synchronization2.none_stage.old_access_stencil_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000887, "dEQP-VK.synchronization2.none_stage.old_access_stencil_attachment_to_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000888, "dEQP-VK.synchronization2.none_stage.old_access_stencil_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000889, "dEQP-VK.synchronization2.none_stage.old_access_stencil_attachment_to_generic_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000890, "dEQP-VK.synchronization2.none_stage.old_access_generic_color_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000891, "dEQP-VK.synchronization2.none_stage.old_access_generic_color_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000892, "dEQP-VK.synchronization2.none_stage.old_access_generic_color_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000893, "dEQP-VK.synchronization2.none_stage.old_access_generic_color_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000894, "dEQP-VK.synchronization2.none_stage.old_access_generic_depth_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000895, "dEQP-VK.synchronization2.none_stage.old_access_generic_depth_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000896, "dEQP-VK.synchronization2.none_stage.old_access_generic_depth_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000897, "dEQP-VK.synchronization2.none_stage.old_access_generic_depth_attachment_to_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000898, "dEQP-VK.synchronization2.none_stage.old_access_generic_depth_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000899, "dEQP-VK.synchronization2.none_stage.old_access_generic_depth_attachment_to_generic_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000900, "dEQP-VK.synchronization2.none_stage.old_access_generic_stencil_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000901, "dEQP-VK.synchronization2.none_stage.old_access_generic_stencil_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000902, "dEQP-VK.synchronization2.none_stage.old_access_generic_stencil_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000903, "dEQP-VK.synchronization2.none_stage.old_access_generic_stencil_attachment_to_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000904, "dEQP-VK.synchronization2.none_stage.old_access_generic_stencil_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000905, "dEQP-VK.synchronization2.none_stage.old_access_generic_stencil_attachment_to_generic_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000906, "dEQP-VK.synchronization2.none_stage.old_access_generic_depth_stencil_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000907, "dEQP-VK.synchronization2.none_stage.old_access_generic_depth_stencil_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000908, "dEQP-VK.synchronization2.none_stage.old_access_generic_depth_stencil_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000909, "dEQP-VK.synchronization2.none_stage.old_access_generic_depth_stencil_attachment_to_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000910, "dEQP-VK.synchronization2.none_stage.old_access_generic_depth_stencil_attachment_to_depth_read_stencil_attachment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000911, "dEQP-VK.synchronization2.none_stage.old_access_generic_depth_stencil_attachment_to_depth_attachment_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000912, "dEQP-VK.synchronization2.none_stage.old_access_generic_depth_stencil_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000913, "dEQP-VK.synchronization2.none_stage.old_access_generic_depth_stencil_attachment_to_generic_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000914, "dEQP-VK.synchronization2.none_stage.legacy_transfer_dst_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000915, "dEQP-VK.synchronization2.none_stage.legacy_transfer_dst_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000916, "dEQP-VK.synchronization2.none_stage.legacy_transfer_dst_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000917, "dEQP-VK.synchronization2.none_stage.legacy_transfer_dst_to_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000918, "dEQP-VK.synchronization2.none_stage.legacy_transfer_dst_to_depth_read_stencil_attachment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000919, "dEQP-VK.synchronization2.none_stage.legacy_transfer_dst_to_depth_attachment_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000920, "dEQP-VK.synchronization2.none_stage.legacy_transfer_dst_to_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000921, "dEQP-VK.synchronization2.none_stage.legacy_transfer_dst_to_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000922, "dEQP-VK.synchronization2.none_stage.legacy_transfer_dst_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000923, "dEQP-VK.synchronization2.none_stage.legacy_transfer_dst_to_generic_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000924, "dEQP-VK.synchronization2.none_stage.legacy_transfer_dst_to_generic_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000925, "dEQP-VK.synchronization2.none_stage.legacy_transfer_dst_to_generic_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000926, "dEQP-VK.synchronization2.none_stage.legacy_general_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000927, "dEQP-VK.synchronization2.none_stage.legacy_general_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000928, "dEQP-VK.synchronization2.none_stage.legacy_general_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000929, "dEQP-VK.synchronization2.none_stage.legacy_general_to_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000930, "dEQP-VK.synchronization2.none_stage.legacy_general_to_depth_read_stencil_attachment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000931, "dEQP-VK.synchronization2.none_stage.legacy_general_to_depth_attachment_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000932, "dEQP-VK.synchronization2.none_stage.legacy_general_to_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000933, "dEQP-VK.synchronization2.none_stage.legacy_general_to_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000934, "dEQP-VK.synchronization2.none_stage.legacy_general_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000935, "dEQP-VK.synchronization2.none_stage.legacy_general_to_generic_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000936, "dEQP-VK.synchronization2.none_stage.legacy_general_to_generic_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000937, "dEQP-VK.synchronization2.none_stage.legacy_general_to_generic_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000938, "dEQP-VK.synchronization2.none_stage.legacy_color_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000939, "dEQP-VK.synchronization2.none_stage.legacy_color_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000940, "dEQP-VK.synchronization2.none_stage.legacy_color_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000941, "dEQP-VK.synchronization2.none_stage.legacy_color_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000942, "dEQP-VK.synchronization2.none_stage.legacy_depth_stencil_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000943, "dEQP-VK.synchronization2.none_stage.legacy_depth_stencil_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000944, "dEQP-VK.synchronization2.none_stage.legacy_depth_stencil_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000945, "dEQP-VK.synchronization2.none_stage.legacy_depth_stencil_attachment_to_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000946, "dEQP-VK.synchronization2.none_stage.legacy_depth_stencil_attachment_to_depth_read_stencil_attachment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000947, "dEQP-VK.synchronization2.none_stage.legacy_depth_stencil_attachment_to_depth_attachment_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000948, "dEQP-VK.synchronization2.none_stage.legacy_depth_stencil_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000949, "dEQP-VK.synchronization2.none_stage.legacy_depth_stencil_attachment_to_generic_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000950, "dEQP-VK.synchronization2.none_stage.legacy_depth_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000951, "dEQP-VK.synchronization2.none_stage.legacy_depth_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000952, "dEQP-VK.synchronization2.none_stage.legacy_depth_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000953, "dEQP-VK.synchronization2.none_stage.legacy_depth_attachment_to_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000954, "dEQP-VK.synchronization2.none_stage.legacy_depth_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000955, "dEQP-VK.synchronization2.none_stage.legacy_depth_attachment_to_generic_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000956, "dEQP-VK.synchronization2.none_stage.legacy_stencil_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000957, "dEQP-VK.synchronization2.none_stage.legacy_stencil_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000958, "dEQP-VK.synchronization2.none_stage.legacy_stencil_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000959, "dEQP-VK.synchronization2.none_stage.legacy_stencil_attachment_to_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000960, "dEQP-VK.synchronization2.none_stage.legacy_stencil_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000961, "dEQP-VK.synchronization2.none_stage.legacy_stencil_attachment_to_generic_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000962, "dEQP-VK.synchronization2.none_stage.legacy_generic_color_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000963, "dEQP-VK.synchronization2.none_stage.legacy_generic_color_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000964, "dEQP-VK.synchronization2.none_stage.legacy_generic_color_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000965, "dEQP-VK.synchronization2.none_stage.legacy_generic_color_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000966, "dEQP-VK.synchronization2.none_stage.legacy_generic_depth_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000967, "dEQP-VK.synchronization2.none_stage.legacy_generic_depth_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000968, "dEQP-VK.synchronization2.none_stage.legacy_generic_depth_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000969, "dEQP-VK.synchronization2.none_stage.legacy_generic_depth_attachment_to_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000970, "dEQP-VK.synchronization2.none_stage.legacy_generic_depth_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000971, "dEQP-VK.synchronization2.none_stage.legacy_generic_depth_attachment_to_generic_depth_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000972, "dEQP-VK.synchronization2.none_stage.legacy_generic_stencil_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000973, "dEQP-VK.synchronization2.none_stage.legacy_generic_stencil_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000974, "dEQP-VK.synchronization2.none_stage.legacy_generic_stencil_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000975, "dEQP-VK.synchronization2.none_stage.legacy_generic_stencil_attachment_to_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000976, "dEQP-VK.synchronization2.none_stage.legacy_generic_stencil_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000977, "dEQP-VK.synchronization2.none_stage.legacy_generic_stencil_attachment_to_generic_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000978, "dEQP-VK.synchronization2.none_stage.legacy_generic_depth_stencil_attachment_to_transfer_src.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000979, "dEQP-VK.synchronization2.none_stage.legacy_generic_depth_stencil_attachment_to_general.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000980, "dEQP-VK.synchronization2.none_stage.legacy_generic_depth_stencil_attachment_to_shader_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000981, "dEQP-VK.synchronization2.none_stage.legacy_generic_depth_stencil_attachment_to_depth_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000982, "dEQP-VK.synchronization2.none_stage.legacy_generic_depth_stencil_attachment_to_depth_read_stencil_attachment.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000983, "dEQP-VK.synchronization2.none_stage.legacy_generic_depth_stencil_attachment_to_depth_attachment_stencil_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000984, "dEQP-VK.synchronization2.none_stage.legacy_generic_depth_stencil_attachment_to_generic_color_read.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000985, "dEQP-VK.synchronization2.none_stage.legacy_generic_depth_stencil_attachment_to_generic_depth_stencil_read.*");
