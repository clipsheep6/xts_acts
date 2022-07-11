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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002622_1 "KHR-GLES31.core.texture"
#define VkglTestCase_002622_2 "_cube_map_array.sampling"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002622, VkglTestCase_002622_1, VkglTestCase_002622_2);

#define VkglTestCase_002623_1 "KHR-GLES31.core.texture_cube_ma"
#define VkglTestCase_002623_2 "p_array.color_depth_attachments"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002623, VkglTestCase_002623_1, VkglTestCase_002623_2);

#define VkglTestCase_002624_1 "KHR-GLES31.core.texture_cube_map_array"
#define VkglTestCase_002624_2 ".stencil_attachments_mutable_nonlayered"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002624, VkglTestCase_002624_1, VkglTestCase_002624_2);

#define VkglTestCase_002625_1 "KHR-GLES31.core.texture_cube_map_arra"
#define VkglTestCase_002625_2 "y.stencil_attachments_mutable_layered"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002625, VkglTestCase_002625_1, VkglTestCase_002625_2);

#define VkglTestCase_002626_1 "KHR-GLES31.core.texture_cube_map_array."
#define VkglTestCase_002626_2 "stencil_attachments_immutable_nonlayered"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002626, VkglTestCase_002626_1, VkglTestCase_002626_2);

#define VkglTestCase_002627_1 "KHR-GLES31.core.texture_cube_map_array"
#define VkglTestCase_002627_2 ".stencil_attachments_immutable_layered"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002627, VkglTestCase_002627_1, VkglTestCase_002627_2);

#define VkglTestCase_002628_1 "KHR-GLES31.core.texture_cub"
#define VkglTestCase_002628_2 "e_map_array.tex3D_validation"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002628, VkglTestCase_002628_1, VkglTestCase_002628_2);

#define VkglTestCase_002629_1 "KHR-GLES31.core.texture_"
#define VkglTestCase_002629_2 "cube_map_array.subimage3D"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002629, VkglTestCase_002629_1, VkglTestCase_002629_2);

#define VkglTestCase_002630_1 "KHR-GLES31.core.texture_c"
#define VkglTestCase_002630_2 "ube_map_array.getter_calls"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002630, VkglTestCase_002630_1, VkglTestCase_002630_2);

#define VkglTestCase_002631_1 "KHR-GLES31.core.texture_cube_map_array.gener"
#define VkglTestCase_002631_2 "ate_mip_map_filterable_internalformat_mutable"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002631, VkglTestCase_002631_1, VkglTestCase_002631_2);

#define VkglTestCase_002632_1 "KHR-GLES31.core.texture_cube_map_array.genera"
#define VkglTestCase_002632_2 "te_mip_map_filterable_internalformat_immutable"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002632, VkglTestCase_002632_1, VkglTestCase_002632_2);

#define VkglTestCase_002633_1 "KHR-GLES31.core.texture_cube_map_array.gene"
#define VkglTestCase_002633_2 "rate_mip_map_non_filterable_mutable_storage"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002633, VkglTestCase_002633_1, VkglTestCase_002633_2);

#define VkglTestCase_002634_1 "KHR-GLES31.core.texture_cube_map_array.gener"
#define VkglTestCase_002634_2 "ate_mip_map_non_filterable_immutable_storage"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002634, VkglTestCase_002634_1, VkglTestCase_002634_2);

#define VkglTestCase_002635_1 "KHR-GLES31.core.texture_cube_"
#define VkglTestCase_002635_2 "map_array.image_op_compute_sh"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002635, VkglTestCase_002635_1, VkglTestCase_002635_2);

#define VkglTestCase_002636_1 "KHR-GLES31.core.texture_cube"
#define VkglTestCase_002636_2 "_map_array.image_op_vertex_sh"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002636, VkglTestCase_002636_1, VkglTestCase_002636_2);

#define VkglTestCase_002637_1 "KHR-GLES31.core.texture_cube_"
#define VkglTestCase_002637_2 "map_array.image_op_fragment_sh"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002637, VkglTestCase_002637_1, VkglTestCase_002637_2);

#define VkglTestCase_002638_1 "KHR-GLES31.core.texture_cube_"
#define VkglTestCase_002638_2 "map_array.image_op_geometry_sh"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002638, VkglTestCase_002638_1, VkglTestCase_002638_2);

#define VkglTestCase_002639_1 "KHR-GLES31.core.texture_cube_map_ar"
#define VkglTestCase_002639_2 "ray.image_op_tessellation_control_sh"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002639, VkglTestCase_002639_1, VkglTestCase_002639_2);

#define VkglTestCase_002640_1 "KHR-GLES31.core.texture_cube_map_arra"
#define VkglTestCase_002640_2 "y.image_op_tessellation_evaluation_sh"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002640, VkglTestCase_002640_1, VkglTestCase_002640_2);

#define VkglTestCase_002641_1 "KHR-GLES31.core.texture_cube"
#define VkglTestCase_002641_2 "_map_array.fbo_incompleteness"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002641, VkglTestCase_002641_1, VkglTestCase_002641_2);

#define VkglTestCase_002642_1 "KHR-GLES31.core.texture_cube_m"
#define VkglTestCase_002642_2 "ap_array.texture_size_vertex_sh"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002642, VkglTestCase_002642_1, VkglTestCase_002642_2);

#define VkglTestCase_002643_1 "KHR-GLES31.core.texture_cube_ma"
#define VkglTestCase_002643_2 "p_array.texture_size_geometry_sh"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002643, VkglTestCase_002643_1, VkglTestCase_002643_2);

#define VkglTestCase_002644_1 "KHR-GLES31.core.texture_cube_map_ar"
#define VkglTestCase_002644_2 "ray.texture_size_tesselation_con_sh"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002644, VkglTestCase_002644_1, VkglTestCase_002644_2);

#define VkglTestCase_002645_1 "KHR-GLES31.core.texture_cube_map_a"
#define VkglTestCase_002645_2 "rray.texture_size_tesselation_ev_sh"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002645, VkglTestCase_002645_1, VkglTestCase_002645_2);

#define VkglTestCase_002646_1 "KHR-GLES31.core.texture_cube_ma"
#define VkglTestCase_002646_2 "p_array.texture_size_fragment_sh"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002646, VkglTestCase_002646_1, VkglTestCase_002646_2);

#define VkglTestCase_002647_1 "KHR-GLES31.core.texture_cube_ma"
#define VkglTestCase_002647_2 "p_array.texture_size_compute_sh"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002647, VkglTestCase_002647_1, VkglTestCase_002647_2);
