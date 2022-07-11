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
#include "../KhrglesextBaseFunc.h"
#include "../ActsKhrglesext0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000216_1 "KHR-GLESEXT.texture_c"
#define VkglTestCase_000216_2 "ube_map_array.sampling"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000216, VkglTestCase_000216_1, VkglTestCase_000216_2);

#define VkglTestCase_000217_1 "KHR-GLESEXT.texture_cube_map_"
#define VkglTestCase_000217_2 "array.color_depth_attachments"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000217, VkglTestCase_000217_1, VkglTestCase_000217_2);

#define VkglTestCase_000218_1 "KHR-GLESEXT.texture_cube_map_array.s"
#define VkglTestCase_000218_2 "tencil_attachments_mutable_nonlayered"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000218, VkglTestCase_000218_1, VkglTestCase_000218_2);

#define VkglTestCase_000219_1 "KHR-GLESEXT.texture_cube_map_array."
#define VkglTestCase_000219_2 "stencil_attachments_mutable_layered"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000219, VkglTestCase_000219_1, VkglTestCase_000219_2);

#define VkglTestCase_000220_1 "KHR-GLESEXT.texture_cube_map_array.st"
#define VkglTestCase_000220_2 "encil_attachments_immutable_nonlayered"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000220, VkglTestCase_000220_1, VkglTestCase_000220_2);

#define VkglTestCase_000221_1 "KHR-GLESEXT.texture_cube_map_array.s"
#define VkglTestCase_000221_2 "tencil_attachments_immutable_layered"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000221, VkglTestCase_000221_1, VkglTestCase_000221_2);

#define VkglTestCase_000222_1 "KHR-GLESEXT.texture_cube_"
#define VkglTestCase_000222_2 "map_array.tex3D_validation"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000222, VkglTestCase_000222_1, VkglTestCase_000222_2);

#define VkglTestCase_000223_1 "KHR-GLESEXT.texture_cu"
#define VkglTestCase_000223_2 "be_map_array.subimage3D"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000223, VkglTestCase_000223_1, VkglTestCase_000223_2);

#define VkglTestCase_000224_1 "KHR-GLESEXT.texture_cub"
#define VkglTestCase_000224_2 "e_map_array.getter_calls"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000224, VkglTestCase_000224_1, VkglTestCase_000224_2);

#define VkglTestCase_000225_1 "KHR-GLESEXT.texture_cube_map_array.generat"
#define VkglTestCase_000225_2 "e_mip_map_filterable_internalformat_mutable"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000225, VkglTestCase_000225_1, VkglTestCase_000225_2);

#define VkglTestCase_000226_1 "KHR-GLESEXT.texture_cube_map_array.generate"
#define VkglTestCase_000226_2 "_mip_map_filterable_internalformat_immutable"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000226, VkglTestCase_000226_1, VkglTestCase_000226_2);

#define VkglTestCase_000227_1 "KHR-GLESEXT.texture_cube_map_array.genera"
#define VkglTestCase_000227_2 "te_mip_map_non_filterable_mutable_storage"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000227, VkglTestCase_000227_1, VkglTestCase_000227_2);

#define VkglTestCase_000228_1 "KHR-GLESEXT.texture_cube_map_array.generat"
#define VkglTestCase_000228_2 "e_mip_map_non_filterable_immutable_storage"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000228, VkglTestCase_000228_1, VkglTestCase_000228_2);

#define VkglTestCase_000229_1 "KHR-GLESEXT.texture_cube_ma"
#define VkglTestCase_000229_2 "p_array.image_op_compute_sh"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000229, VkglTestCase_000229_1, VkglTestCase_000229_2);

#define VkglTestCase_000230_1 "KHR-GLESEXT.texture_cube_m"
#define VkglTestCase_000230_2 "ap_array.image_op_vertex_sh"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000230, VkglTestCase_000230_1, VkglTestCase_000230_2);

#define VkglTestCase_000231_1 "KHR-GLESEXT.texture_cube_ma"
#define VkglTestCase_000231_2 "p_array.image_op_fragment_sh"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000231, VkglTestCase_000231_1, VkglTestCase_000231_2);

#define VkglTestCase_000232_1 "KHR-GLESEXT.texture_cube_ma"
#define VkglTestCase_000232_2 "p_array.image_op_geometry_sh"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000232, VkglTestCase_000232_1, VkglTestCase_000232_2);

#define VkglTestCase_000233_1 "KHR-GLESEXT.texture_cube_map_arra"
#define VkglTestCase_000233_2 "y.image_op_tessellation_control_sh"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000233, VkglTestCase_000233_1, VkglTestCase_000233_2);

#define VkglTestCase_000234_1 "KHR-GLESEXT.texture_cube_map_array."
#define VkglTestCase_000234_2 "image_op_tessellation_evaluation_sh"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000234, VkglTestCase_000234_1, VkglTestCase_000234_2);

#define VkglTestCase_000235_1 "KHR-GLESEXT.texture_cube_m"
#define VkglTestCase_000235_2 "ap_array.fbo_incompleteness"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000235, VkglTestCase_000235_1, VkglTestCase_000235_2);

#define VkglTestCase_000236_1 "KHR-GLESEXT.texture_cube_map"
#define VkglTestCase_000236_2 "_array.texture_size_vertex_sh"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000236, VkglTestCase_000236_1, VkglTestCase_000236_2);

#define VkglTestCase_000237_1 "KHR-GLESEXT.texture_cube_map_"
#define VkglTestCase_000237_2 "array.texture_size_geometry_sh"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000237, VkglTestCase_000237_1, VkglTestCase_000237_2);

#define VkglTestCase_000238_1 "KHR-GLESEXT.texture_cube_map_arra"
#define VkglTestCase_000238_2 "y.texture_size_tesselation_con_sh"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000238, VkglTestCase_000238_1, VkglTestCase_000238_2);

#define VkglTestCase_000239_1 "KHR-GLESEXT.texture_cube_map_arr"
#define VkglTestCase_000239_2 "ay.texture_size_tesselation_ev_sh"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000239, VkglTestCase_000239_1, VkglTestCase_000239_2);

#define VkglTestCase_000240_1 "KHR-GLESEXT.texture_cube_map_"
#define VkglTestCase_000240_2 "array.texture_size_fragment_sh"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000240, VkglTestCase_000240_1, VkglTestCase_000240_2);

#define VkglTestCase_000241_1 "KHR-GLESEXT.texture_cube_map_"
#define VkglTestCase_000241_2 "array.texture_size_compute_sh"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000241, VkglTestCase_000241_1, VkglTestCase_000241_2);
