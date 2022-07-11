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
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000244_1 "KHR-GLES32.core.texture"
#define VkglTestCase_000244_2 "_cube_map_array.sampling"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000244, VkglTestCase_000244_1, VkglTestCase_000244_2);

#define VkglTestCase_000245_1 "KHR-GLES32.core.texture_cube_ma"
#define VkglTestCase_000245_2 "p_array.color_depth_attachments"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000245, VkglTestCase_000245_1, VkglTestCase_000245_2);

#define VkglTestCase_000246_1 "KHR-GLES32.core.texture_cube_map_array"
#define VkglTestCase_000246_2 ".stencil_attachments_mutable_nonlayered"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000246, VkglTestCase_000246_1, VkglTestCase_000246_2);

#define VkglTestCase_000247_1 "KHR-GLES32.core.texture_cube_map_arra"
#define VkglTestCase_000247_2 "y.stencil_attachments_mutable_layered"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000247, VkglTestCase_000247_1, VkglTestCase_000247_2);

#define VkglTestCase_000248_1 "KHR-GLES32.core.texture_cube_map_array."
#define VkglTestCase_000248_2 "stencil_attachments_immutable_nonlayered"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000248, VkglTestCase_000248_1, VkglTestCase_000248_2);

#define VkglTestCase_000249_1 "KHR-GLES32.core.texture_cube_map_array"
#define VkglTestCase_000249_2 ".stencil_attachments_immutable_layered"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000249, VkglTestCase_000249_1, VkglTestCase_000249_2);

#define VkglTestCase_000250_1 "KHR-GLES32.core.texture_cub"
#define VkglTestCase_000250_2 "e_map_array.tex3D_validation"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000250, VkglTestCase_000250_1, VkglTestCase_000250_2);

#define VkglTestCase_000251_1 "KHR-GLES32.core.texture_"
#define VkglTestCase_000251_2 "cube_map_array.subimage3D"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000251, VkglTestCase_000251_1, VkglTestCase_000251_2);

#define VkglTestCase_000252_1 "KHR-GLES32.core.texture_c"
#define VkglTestCase_000252_2 "ube_map_array.getter_calls"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000252, VkglTestCase_000252_1, VkglTestCase_000252_2);

#define VkglTestCase_000253_1 "KHR-GLES32.core.texture_cube_map_array.gener"
#define VkglTestCase_000253_2 "ate_mip_map_filterable_internalformat_mutable"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000253, VkglTestCase_000253_1, VkglTestCase_000253_2);

#define VkglTestCase_000254_1 "KHR-GLES32.core.texture_cube_map_array.genera"
#define VkglTestCase_000254_2 "te_mip_map_filterable_internalformat_immutable"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000254, VkglTestCase_000254_1, VkglTestCase_000254_2);

#define VkglTestCase_000255_1 "KHR-GLES32.core.texture_cube_map_array.gene"
#define VkglTestCase_000255_2 "rate_mip_map_non_filterable_mutable_storage"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000255, VkglTestCase_000255_1, VkglTestCase_000255_2);

#define VkglTestCase_000256_1 "KHR-GLES32.core.texture_cube_map_array.gener"
#define VkglTestCase_000256_2 "ate_mip_map_non_filterable_immutable_storage"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000256, VkglTestCase_000256_1, VkglTestCase_000256_2);

#define VkglTestCase_000257_1 "KHR-GLES32.core.texture_cube_"
#define VkglTestCase_000257_2 "map_array.image_op_compute_sh"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000257, VkglTestCase_000257_1, VkglTestCase_000257_2);

#define VkglTestCase_000258_1 "KHR-GLES32.core.texture_cube"
#define VkglTestCase_000258_2 "_map_array.image_op_vertex_sh"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000258, VkglTestCase_000258_1, VkglTestCase_000258_2);

#define VkglTestCase_000259_1 "KHR-GLES32.core.texture_cube_"
#define VkglTestCase_000259_2 "map_array.image_op_fragment_sh"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000259, VkglTestCase_000259_1, VkglTestCase_000259_2);

#define VkglTestCase_000260_1 "KHR-GLES32.core.texture_cube_"
#define VkglTestCase_000260_2 "map_array.image_op_geometry_sh"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000260, VkglTestCase_000260_1, VkglTestCase_000260_2);

#define VkglTestCase_000261_1 "KHR-GLES32.core.texture_cube_map_ar"
#define VkglTestCase_000261_2 "ray.image_op_tessellation_control_sh"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000261, VkglTestCase_000261_1, VkglTestCase_000261_2);

#define VkglTestCase_000262_1 "KHR-GLES32.core.texture_cube_map_arra"
#define VkglTestCase_000262_2 "y.image_op_tessellation_evaluation_sh"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000262, VkglTestCase_000262_1, VkglTestCase_000262_2);

#define VkglTestCase_000263_1 "KHR-GLES32.core.texture_cube"
#define VkglTestCase_000263_2 "_map_array.fbo_incompleteness"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000263, VkglTestCase_000263_1, VkglTestCase_000263_2);

#define VkglTestCase_000264_1 "KHR-GLES32.core.texture_cube_m"
#define VkglTestCase_000264_2 "ap_array.texture_size_vertex_sh"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000264, VkglTestCase_000264_1, VkglTestCase_000264_2);

#define VkglTestCase_000265_1 "KHR-GLES32.core.texture_cube_ma"
#define VkglTestCase_000265_2 "p_array.texture_size_geometry_sh"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000265, VkglTestCase_000265_1, VkglTestCase_000265_2);

#define VkglTestCase_000266_1 "KHR-GLES32.core.texture_cube_map_ar"
#define VkglTestCase_000266_2 "ray.texture_size_tesselation_con_sh"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000266, VkglTestCase_000266_1, VkglTestCase_000266_2);

#define VkglTestCase_000267_1 "KHR-GLES32.core.texture_cube_map_a"
#define VkglTestCase_000267_2 "rray.texture_size_tesselation_ev_sh"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000267, VkglTestCase_000267_1, VkglTestCase_000267_2);

#define VkglTestCase_000268_1 "KHR-GLES32.core.texture_cube_ma"
#define VkglTestCase_000268_2 "p_array.texture_size_fragment_sh"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000268, VkglTestCase_000268_1, VkglTestCase_000268_2);

#define VkglTestCase_000269_1 "KHR-GLES32.core.texture_cube_ma"
#define VkglTestCase_000269_2 "p_array.texture_size_compute_sh"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000269, VkglTestCase_000269_1, VkglTestCase_000269_2);

#define VkglTestCase_000270_1 "KHR-GLES32.core.texture_c"
#define VkglTestCase_000270_2 "ube_map_array.etc2_texture"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000270, VkglTestCase_000270_1, VkglTestCase_000270_2);
