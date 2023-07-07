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
#include "../TextureBaseFunc.h"
#include "../ActsTexture0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000522, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000523, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000524, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000525, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000526, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000527, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000528, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000529, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000530, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000531, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000532, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000533, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000534, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000535, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000536, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000537, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000538, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000539, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000540, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000541, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000542, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000543, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000544, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000545, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000546, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000547, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000548, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000549, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000550, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000551, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000552, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000553, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000554, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000555, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000556, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000557, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000558, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000559, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000560, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000561, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000562, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000563, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000564, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000565, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000566, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000567, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000568, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000569, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000570, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000571, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000572, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000573, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000574, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000575, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000576, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000577, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000578, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000579, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000580, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000581, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000582, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000583, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000584, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000585, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000586, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000587, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000588, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000589, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000590, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000591, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000592, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000593, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000594, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000595, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000596, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000597, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000598, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000599, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000600, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000601, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000602, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000603, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000604, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000605, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000606, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000607, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000608, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000609, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000610, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000611, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000612, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000613, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000614, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000615, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000616, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000617, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000618, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000619, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000620, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000621, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000622, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000623, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000624, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000625, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000626, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000627, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000628, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000629, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000630, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000631, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000632, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000633, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000634, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000635, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000636, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000637, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000638, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000639, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000640, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000641, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000642, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000643, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000644, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000645, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000646, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000647, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000648, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000649, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000650, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000651, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000652, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000653, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000654, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000655, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000656, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000657, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000658, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000659, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000660, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000661, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000662, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000663, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000664, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000665, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000666, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000667, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000668, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000669, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000670, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000671, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000672, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000673, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000674, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000675, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000676, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000677, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000678, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000679, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000680, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000681, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000682, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000683, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000684, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000685, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000686, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000687, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000688, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000689, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000690, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000691, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000692, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000693, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000694, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000695, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000696, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000697, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000698, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000699, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000700, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000701, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000702, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000703, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000704, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000705, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000706, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000707, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000708, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000709, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000710, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000711, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000712, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000713, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000714, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000715, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000716, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000717, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000718, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000719, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000720, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000721, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000722, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000723, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000724, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000725, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000726, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000727, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000728, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000729, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000730, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000731, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000732, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000733, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000734, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000735, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000736, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000737, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000738, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000739, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000740, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000741, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000742, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000743, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000744, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000745, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000746, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000747, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000748, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000749, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000750, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000751, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000752, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000753, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000754, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000755, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000756, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000757, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000758, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000759, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000760, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000761, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000762, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000763, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000764, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000765, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000766, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000767, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000768, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000769, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000770, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000771, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000772, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000773, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000774, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000775, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000776, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000777, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000778, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000779, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000780, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000781, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000782, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000783, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000784, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000785, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000786, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000787, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000788, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000789, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000790, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000791, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000792, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000793, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000794, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000795, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000796, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000797, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000798, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000799, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000800, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000801, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000802, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000803, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000804, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000805, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000806, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000807, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000808, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000809, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000810, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000811, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000812, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000813, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000814, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000815, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000816, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000817, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000818, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000819, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000820, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000821, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000822, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000823, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000824, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000825, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000826, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000827, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000828, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000829, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000830, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000831, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000832, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000833, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000834, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000835, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000836, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000837, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000838, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000839, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000840, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000841, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000842, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000843, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000844, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000845, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000846, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000847, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000848, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000849, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000850, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000851, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000852, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000853, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000854, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000855, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000856, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000857, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000858, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000859, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000860, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000861, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000862, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000863, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000864, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000865, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000866, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000867, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000868, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000869, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000870, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000871, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000872, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000873, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000874, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000875, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000876, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000877, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000878, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000879, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000880, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000881, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000882, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000883, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000884, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000885, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000886, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000887, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000888, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000889, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000890, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000891, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000892, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000893, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000894, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000895, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000896, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000897, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000898, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000899, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000900, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000901, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000902, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000903, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000904, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000905, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000906, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000907, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000908, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000909, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000910, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000911, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000912, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000913, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000914, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000915, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000916, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000917, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000918, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000919, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000920, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000921, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000922, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000923, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000924, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000925, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000926, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000927, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000928, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000929, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000930, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000931, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000932, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000933, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000934, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000935, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000936, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000937, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000938, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000939, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000940, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000941, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000942, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000943, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000944, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000945, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000946, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000947, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000948, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000949, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000950, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000951, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000952, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000953, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000954, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000955, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000956, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000957, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000958, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000959, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000960, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000961, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000962, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000963, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000964, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000965, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000966, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000967, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000968, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000969, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000970, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000971, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000972, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000973, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000974, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000975, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000976, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000977, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000978, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000979, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000980, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000981, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000982, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000983, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000984, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000985, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000986, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000987, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000988, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000989, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000990, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000991, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000992, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000993, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000994, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000995, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000996, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000997, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000998, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000999, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001000, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001001, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001002, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001003, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001004, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001005, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001006, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001007, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001008, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001009, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001010, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001011, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001012, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001013, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001014, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001015, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001016, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001017, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001018, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001019, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001020, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001021, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001022, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001023, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001024, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001025, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001026, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001027, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001028, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001029, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001030, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001031, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001032, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001033, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001034, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001035, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001036, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001037, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001038, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001039, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001040, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001041, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001042, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001043, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001044, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001045, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001046, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001047, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001048, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001049, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001050, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001051, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001052, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001053, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001054, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001055, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001056, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001057, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001058, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001059, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001060, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001061, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001062, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001063, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001064, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001065, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001066, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001067, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001068, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001069, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001070, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001071, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001072, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001073, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001074, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001075, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001076, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001077, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001078, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001079, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001080, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001081, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001082, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001083, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001084, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001085, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001086, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001087, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001088, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001089, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001090, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001091, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001092, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001093, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001094, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001095, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001096, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001097, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001098, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001099, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001100, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001101, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001102, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001103, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001104, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001105, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001106, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001107, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001108, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001109, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001110, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001111, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001112, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001113, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001114, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001115, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001116, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001117, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001118, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001119, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001120, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001121, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001122, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001123, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001124, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001125, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001126, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001127, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001128, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001129, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001130, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001131, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001132, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001133, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001134, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001135, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001136, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001137, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001138, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001139, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001140, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001141, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001142, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001143, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001144, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001145, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001146, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001147, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001148, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001149, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001150, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001151, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001152, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001153, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001154, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001155, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001156, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001157, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001158, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001159, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001160, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001161, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001162, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001163, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001164, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001165, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001166, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001167, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001168, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001169, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001170, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001171, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001172, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001173, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001174, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001175, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001176, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001177, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001178, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001179, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001180, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001181, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001182, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001183, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001184, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001185, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001186, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001187, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001188, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001189, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001190, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001191, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001192, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001193, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001194, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001195, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001196, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001197, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001198, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001199, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001200, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001201, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001202, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001203, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001204, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001205, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001206, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001207, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001208, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001209, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001210, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001211, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001212, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001213, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001214, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001215, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001216, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001217, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001218, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001219, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001220, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001221, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001222, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001223, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001224, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001225, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001226, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001227, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001228, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001229, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001230, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001231, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001232, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001233, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001234, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001235, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001236, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001237, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001238, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001239, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001240, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001241, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001242, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001243, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001244, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001245, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001246, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001247, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001248, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001249, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001250, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001251, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001252, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001253, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001254, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001255, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001256, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001257, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001258, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001259, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001260, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001261, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001262, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001263, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001264, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001265, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001266, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001267, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001268, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001269, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001270, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001271, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001272, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001273, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001274, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001275, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001276, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001277, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001278, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001279, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001280, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001281, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001282, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001283, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001284, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001285, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001286, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001287, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001288, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001289, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001290, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001291, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001292, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001293, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001294, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001295, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001296, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001297, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001298, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001299, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001300, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001301, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001302, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001303, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001304, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001305, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001306, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001307, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001308, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001309, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001310, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001311, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001312, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001313, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001314, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001315, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001316, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001317, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001318, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001319, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001320, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001321, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001322, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001323, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001324, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001325, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001326, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001327, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001328, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001329, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001330, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001331, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001332, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001333, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001334, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001335, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001336, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001337, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001338, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001339, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001340, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001341, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001342, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001343, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001344, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001345, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001346, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001347, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001348, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001349, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001350, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001351, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001352, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001353, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001354, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001355, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001356, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001357, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001358, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001359, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001360, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001361, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001362, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001363, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001364, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001365, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001366, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001367, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001368, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001369, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001370, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001371, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001372, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001373, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001374, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001375, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001376, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001377, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001378, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001379, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001380, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001381, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001382, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001383, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001384, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001385, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001386, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001387, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001388, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001389, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001390, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001391, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001392, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001393, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001394, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001395, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001396, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001397, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001398, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001399, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001400, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001401, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001402, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001403, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001404, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001405, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001406, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001407, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001408, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001409, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001410, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001411, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001412, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001413, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001414, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001415, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001416, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001417, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001418, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001419, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001420, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001421, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001422, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001423, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001424, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001425, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001426, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001427, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001428, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001429, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001430, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001431, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001432, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001433, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001434, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001435, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001436, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001437, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001438, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001439, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001440, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001441, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001442, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001443, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001444, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001445, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001446, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001447, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001448, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001449, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001450, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001451, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001452, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001453, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001454, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001455, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001456, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001457, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001458, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001459, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001460, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001461, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001462, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001463, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001464, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001465, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001466, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001467, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001468, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001469, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001470, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001471, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001472, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001473, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001474, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001475, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001476, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001477, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001478, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001479, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001480, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001481, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001482, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001483, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001484, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001485, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001486, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001487, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001488, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001489, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001490, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001491, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001492, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001493, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001494, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001495, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001496, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001497, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001498, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001499, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001500, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001501, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001502, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001503, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001504, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001505, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001506, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001507, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001508, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001509, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001510, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001511, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001512, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001513, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001514, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001515, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001516, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001517, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001518, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001519, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001520, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001521, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001522, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001523, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001524, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001525, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001526, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001527, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001528, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001529, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001530, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001531, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001532, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001533, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001534, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001535, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001536, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001537, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001538, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001539, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001540, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001541, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001542, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001543, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001544, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001545, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001546, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001547, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001548, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001549, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001550, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001551, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001552, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001553, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001554, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001555, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001556, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001557, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001558, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001559, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001560, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001561, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001562, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001563, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001564, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001565, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001566, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001567, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001568, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001569, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001570, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001571, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001572, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001573, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001574, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001575, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001576, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001577, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001578, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001579, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001580, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001581, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001582, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001583, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001584, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001585, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001586, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001587, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001588, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001589, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001590, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001591, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001592, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001593, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001594, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001595, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001596, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001597, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001598, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001599, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001600, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001601, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001602, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001603, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001604, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001605, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001606, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001607, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001608, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001609, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001610, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001611, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001612, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001613, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001614, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001615, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001616, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001617, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001618, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001619, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001620, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001621, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001622, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001623, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001624, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001625, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001626, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001627, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001628, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001629, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001630, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001631, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001632, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001633, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001634, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001635, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001636, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001637, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001638, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001639, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001640, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001641, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001642, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001643, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001644, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001645, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001646, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001647, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001648, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001649, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001650, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001651, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001652, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001653, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001654, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001655, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001656, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001657, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001658, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001659, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001660, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001661, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001662, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001663, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001664, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001665, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001666, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001667, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001668, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001669, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001670, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001671, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001672, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001673, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001674, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001675, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001676, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001677, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001678, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001679, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001680, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001681, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001682, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001683, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001684, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001685, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001686, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001687, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001688, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001689, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001690, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001691, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001692, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001693, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001694, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001695, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001696, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001697, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001698, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001699, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001700, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001701, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001702, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001703, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001704, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001705, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001706, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001707, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001708, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001709, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001710, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001711, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001712, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001713, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001714, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001715, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001716, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001717, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001718, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001719, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001720, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001721, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001722, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001723, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001724, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001725, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001726, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001727, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001728, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001729, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001730, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001731, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001732, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001733, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001734, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001735, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001736, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001737, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001738, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001739, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001740, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001741, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001742, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001743, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001744, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001745, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001746, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001747, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001748, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001749, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001750, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001751, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001752, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001753, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001754, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001755, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001756, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001757, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001758, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001759, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001760, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001761, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001762, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001763, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001764, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001765, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001766, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001767, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001768, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001769, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001770, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001771, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001772, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001773, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001774, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001775, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001776, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001777, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001778, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001779, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001780, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001781, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001782, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001783, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001784, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001785, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001786, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001787, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001788, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001789, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001790, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001791, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001792, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001793, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001794, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001795, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001796, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001797, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001798, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001799, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001800, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001801, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001802, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001803, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001804, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001805, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001806, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001807, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001808, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001809, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001810, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001811, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001812, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001813, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001814, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001815, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001816, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001817, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001818, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001819, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001820, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001821, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001822, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001823, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001824, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001825, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001826, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001827, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001828, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001829, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001830, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001831, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001832, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001833, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001834, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001835, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001836, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001837, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001838, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001839, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001840, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001841, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001842, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001843, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001844, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001845, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001846, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001847, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001848, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001849, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001850, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001851, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001852, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001853, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001854, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001855, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001856, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001857, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001858, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001859, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001860, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001861, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001862, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001863, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001864, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001865, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001866, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001867, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001868, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001869, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001870, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001871, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001872, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001873, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001874, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001875, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001876, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001877, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001878, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001879, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001880, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001881, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001882, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001883, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001884, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001885, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001886, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001887, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001888, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001889, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001890, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001891, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001892, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001893, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001894, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001895, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001896, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001897, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001898, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001899, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001900, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001901, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001902, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001903, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001904, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001905, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001906, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001907, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001908, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001909, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001910, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001911, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001912, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001913, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001914, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001915, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001916, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001917, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001918, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001919, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001920, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001921, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001922, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001923, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001924, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001925, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001926, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001927, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001928, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001929, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001930, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001931, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001932, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001933, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001934, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001935, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001936, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001937, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001938, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001939, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001940, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001941, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001942, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001943, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001944, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001945, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001946, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001947, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001948, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001949, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001950, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001951, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001952, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001953, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001954, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001955, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001956, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001957, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001958, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001959, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001960, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001961, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001962, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001963, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001964, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001965, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001966, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001967, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001968, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001969, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001970, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001971, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001972, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001973, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001974, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001975, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001976, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001977, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001978, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001979, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001980, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001981, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001982, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001983, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001984, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001985, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001986, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001987, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001988, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001989, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001990, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001991, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001992, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001993, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001994, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001995, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001996, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001997, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001998, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC001999, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002000, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002001, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002002, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002003, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002004, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002005, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002006, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002007, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002008, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002009, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002010, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002011, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002012, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002013, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002014, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002015, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002016, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002017, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002018, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002019, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002020, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002021, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002022, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002023, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002024, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002025, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002026, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002027, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002028, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002029, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002030, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002031, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002032, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002033, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002034, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002035, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002036, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002037, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002038, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002039, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002040, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002041, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002042, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002043, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002044, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002045, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002046, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002047, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002048, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002049, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002050, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002051, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002052, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002053, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002054, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002055, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002056, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002057, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002058, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002059, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002060, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002061, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002062, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002063, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002064, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002065, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002066, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002067, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002068, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002069, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002070, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002071, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002072, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002073, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002074, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002075, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002076, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002077, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002078, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002079, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002080, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002081, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002082, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002083, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002084, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002085, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002086, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002087, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002088, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002089, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002090, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002091, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002092, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002093, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002094, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002095, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002096, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002097, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002098, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002099, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002100, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002101, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002102, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002103, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002104, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002105, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002106, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002107, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002108, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002109, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002110, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002111, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002112, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002113, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002114, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002115, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002116, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002117, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002118, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002119, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002120, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002121, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002122, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002123, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002124, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002125, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002126, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002127, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002128, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002129, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002130, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002131, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002132, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002133, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002134, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002135, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002136, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002137, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002138, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002139, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002140, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002141, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002142, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002143, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002144, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002145, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002146, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002147, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002148, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002149, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002150, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002151, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002152, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002153, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002154, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002155, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002156, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002157, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002158, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002159, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002160, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002161, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002162, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002163, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002164, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002165, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002166, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002167, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002168, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002169, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002170, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002171, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002172, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002173, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002174, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002175, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002176, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002177, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002178, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002179, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002180, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002181, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002182, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002183, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002184, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002185, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002186, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002187, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002188, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002189, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002190, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002191, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002192, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002193, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002194, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002195, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002196, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002197, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002198, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002199, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002200, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002201, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002202, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002203, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002204, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002205, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002206, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002207, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002208, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002209, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002210, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002211, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002212, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002213, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002214, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002215, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002216, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002217, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002218, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002219, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002220, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002221, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002222, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002223, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002224, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002225, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002226, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002227, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002228, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002229, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002230, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002231, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002232, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002233, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002234, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002235, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002236, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002237, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002238, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002239, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002240, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002241, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002242, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002243, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002244, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002245, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002246, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002247, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002248, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002249, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002250, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002251, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002252, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002253, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002254, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002255, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002256, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002257, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002258, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002259, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002260, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002261, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002262, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002263, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002264, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002265, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002266, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002267, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002268, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002269, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002270, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002271, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002272, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002273, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002274, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002275, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002276, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002277, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002278, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002279, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002280, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002281, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002282, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002283, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002284, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002285, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002286, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002287, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002288, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002289, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002290, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002291, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002292, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002293, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002294, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002295, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002296, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002297, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002298, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002299, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002300, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002301, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002302, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002303, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002304, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002305, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002306, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002307, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002308, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002309, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002310, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002311, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002312, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002313, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002314, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002315, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002316, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002317, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002318, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002319, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002320, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002321, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002322, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002323, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002324, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002325, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002326, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002327, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002328, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002329, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002330, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002331, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002332, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002333, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002334, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002335, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002336, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002337, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002338, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002339, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002340, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002341, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002342, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002343, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002344, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002345, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002346, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002347, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002348, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002349, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002350, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002351, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002352, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002353, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002354, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002355, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002356, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002357, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002358, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002359, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002360, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002361, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002362, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002363, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002364, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002365, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002366, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002367, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002368, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002369, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002370, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002371, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002372, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002373, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002374, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002375, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002376, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002377, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002378, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002379, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002380, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002381, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002382, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002383, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002384, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002385, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002386, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002387, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002388, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002389, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002390, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002391, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002392, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002393, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002394, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002395, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002396, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002397, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002398, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002399, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002400, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002401, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002402, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002403, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002404, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002405, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002406, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002407, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002408, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002409, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002410, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002411, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002412, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002413, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002414, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002415, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002416, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002417, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002418, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002419, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002420, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002421, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002422, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002423, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002424, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002425, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002426, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002427, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002428, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002429, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002430, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002431, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002432, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002433, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002434, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002435, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002436, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002437, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002438, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002439, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002440, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002441, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002442, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002443, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002444, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002445, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002446, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002447, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002448, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002449, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002450, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002451, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002452, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002453, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002454, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002455, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002456, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002457, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002458, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002459, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002460, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002461, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002462, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002463, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002464, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002465, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002466, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002467, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002468, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002469, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002470, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002471, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002472, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002473, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002474, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002475, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002476, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002477, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002478, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002479, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002480, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002481, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002482, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002483, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002484, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002485, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002486, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002487, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002488, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002489, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002490, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002491, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002492, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002493, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002494, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002495, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002496, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002497, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002498, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002499, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002500, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002501, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002502, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002503, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002504, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002505, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002506, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002507, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002508, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002509, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002510, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002511, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002512, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002513, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002514, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002515, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002516, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002517, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002518, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002519, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002520, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002521, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002522, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002523, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002524, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002525, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002526, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002527, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002528, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002529, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002530, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002531, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002532, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002533, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002534, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002535, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002536, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002537, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002538, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002539, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002540, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002541, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002542, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002543, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002544, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002545, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002546, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002547, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002548, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002549, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002550, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002551, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002552, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002553, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002554, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002555, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002556, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002557, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002558, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002559, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002560, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002561, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002562, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002563, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002564, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002565, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002566, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002567, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002568, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002569, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002570, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002571, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002572, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002573, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002574, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002575, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002576, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002577, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002578, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002579, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002580, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002581, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002582, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002583, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002584, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002585, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002586, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002587, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002588, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002589, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002590, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002591, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002592, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002593, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002594, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002595, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002596, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002597, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002598, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002599, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002600, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002601, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002602, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002603, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002604, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002605, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002606, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002607, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002608, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002609, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002610, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002611, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002612, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002613, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002614, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002615, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002616, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002617, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002618, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002619, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002620, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002621, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002622, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002623, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002624, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002625, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002626, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002627, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002628, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002629, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002630, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002631, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002632, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002633, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002634, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002635, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002636, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002637, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002638, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002639, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002640, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002641, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002642, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002643, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002644, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002645, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002646, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002647, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002648, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002649, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002650, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002651, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002652, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002653, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002654, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002655, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002656, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002657, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002658, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002659, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002660, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002661, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002662, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002663, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_pot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002664, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002665, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002666, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002667, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002668, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002669, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002670, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002671, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002672, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002673, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002674, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002675, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002676, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002677, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002678, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002679, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002680, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002681, "dEQP-VK.texture.swizzle.component_mapping.r4g4_unorm_pack8_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002682, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002683, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002684, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002685, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002686, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002687, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002688, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002689, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002690, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002691, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002692, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002693, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002694, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002695, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002696, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002697, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002698, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002699, "dEQP-VK.texture.swizzle.component_mapping.r4g4b4a4_unorm_pack16_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002700, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002701, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002702, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002703, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002704, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002705, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002706, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002707, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002708, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002709, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002710, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002711, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002712, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002713, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002714, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002715, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002716, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002717, "dEQP-VK.texture.swizzle.component_mapping.r5g6b5_unorm_pack16_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002718, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002719, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002720, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002721, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002722, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002723, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002724, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002725, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002726, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002727, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002728, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002729, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002730, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002731, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002732, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002733, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002734, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002735, "dEQP-VK.texture.swizzle.component_mapping.r5g5b5a1_unorm_pack16_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002736, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002737, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002738, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002739, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002740, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002741, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002742, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002743, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002744, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002745, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002746, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002747, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002748, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002749, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002750, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002751, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002752, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002753, "dEQP-VK.texture.swizzle.component_mapping.r8_unorm_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002754, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002755, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002756, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002757, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002758, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002759, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002760, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002761, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002762, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002763, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002764, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002765, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002766, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002767, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002768, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002769, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002770, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002771, "dEQP-VK.texture.swizzle.component_mapping.r8_snorm_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002772, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002773, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002774, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002775, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002776, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002777, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002778, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002779, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002780, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002781, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002782, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002783, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002784, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002785, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002786, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002787, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002788, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002789, "dEQP-VK.texture.swizzle.component_mapping.r8_uscaled_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002790, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002791, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002792, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002793, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002794, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002795, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002796, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002797, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002798, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002799, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002800, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002801, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002802, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002803, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002804, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002805, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002806, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002807, "dEQP-VK.texture.swizzle.component_mapping.r8_sscaled_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002808, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002809, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002810, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002811, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002812, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002813, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002814, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002815, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002816, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002817, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002818, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002819, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002820, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002821, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002822, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002823, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002824, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002825, "dEQP-VK.texture.swizzle.component_mapping.r8_uint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002826, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002827, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002828, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002829, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002830, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002831, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002832, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002833, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002834, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002835, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002836, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002837, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002838, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002839, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002840, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002841, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002842, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002843, "dEQP-VK.texture.swizzle.component_mapping.r8_sint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002844, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002845, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002846, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002847, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002848, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002849, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002850, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002851, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002852, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002853, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002854, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002855, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002856, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002857, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002858, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002859, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002860, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002861, "dEQP-VK.texture.swizzle.component_mapping.r8_srgb_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002862, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002863, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002864, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002865, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002866, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002867, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002868, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002869, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002870, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002871, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002872, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002873, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002874, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002875, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002876, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002877, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002878, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002879, "dEQP-VK.texture.swizzle.component_mapping.r8g8_unorm_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002880, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002881, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002882, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002883, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002884, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002885, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002886, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002887, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002888, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002889, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002890, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002891, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002892, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002893, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002894, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002895, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002896, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002897, "dEQP-VK.texture.swizzle.component_mapping.r8g8_snorm_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002898, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002899, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002900, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002901, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002902, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002903, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002904, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002905, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002906, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002907, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002908, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002909, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002910, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002911, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002912, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002913, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002914, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002915, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uscaled_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002916, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002917, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002918, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002919, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002920, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002921, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002922, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002923, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002924, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002925, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002926, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002927, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002928, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002929, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002930, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002931, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002932, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002933, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sscaled_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002934, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002935, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002936, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002937, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002938, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002939, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002940, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002941, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002942, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002943, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002944, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002945, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002946, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002947, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002948, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002949, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002950, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002951, "dEQP-VK.texture.swizzle.component_mapping.r8g8_uint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002952, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002953, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002954, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002955, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002956, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002957, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002958, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002959, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002960, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002961, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002962, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002963, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002964, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002965, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002966, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002967, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002968, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002969, "dEQP-VK.texture.swizzle.component_mapping.r8g8_sint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002970, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002971, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002972, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002973, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002974, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002975, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002976, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002977, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002978, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002979, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002980, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002981, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002982, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002983, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002984, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002985, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002986, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002987, "dEQP-VK.texture.swizzle.component_mapping.r8g8_srgb_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002988, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002989, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002990, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002991, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002992, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002993, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002994, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002995, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002996, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002997, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002998, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC002999, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003000, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003001, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003002, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003003, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003004, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003005, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_unorm_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003006, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003007, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003008, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003009, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003010, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003011, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003012, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003013, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003014, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003015, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003016, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003017, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003018, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003019, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003020, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003021, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003022, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003023, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_snorm_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003024, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003025, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003026, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003027, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003028, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003029, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003030, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003031, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003032, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003033, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003034, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003035, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003036, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003037, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003038, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003039, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003040, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003041, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uscaled_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003042, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003043, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003044, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003045, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003046, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003047, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003048, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003049, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003050, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003051, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003052, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003053, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003054, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003055, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003056, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003057, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003058, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003059, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sscaled_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003060, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003061, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003062, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003063, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003064, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003065, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003066, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003067, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003068, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003069, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003070, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003071, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003072, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003073, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003074, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003075, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003076, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003077, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_uint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003078, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003079, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003080, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003081, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003082, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003083, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003084, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003085, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003086, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003087, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003088, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003089, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003090, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003091, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003092, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003093, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003094, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003095, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_sint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003096, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003097, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003098, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003099, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003100, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003101, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003102, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003103, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003104, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003105, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003106, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003107, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003108, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003109, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003110, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003111, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003112, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003113, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8_srgb_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003114, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003115, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003116, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003117, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003118, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003119, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003120, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003121, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003122, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003123, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003124, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003125, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003126, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003127, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003128, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003129, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003130, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003131, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_unorm_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003132, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003133, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003134, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003135, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003136, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003137, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003138, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003139, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003140, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003141, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003142, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003143, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003144, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003145, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003146, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003147, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003148, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003149, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_snorm_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003150, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003151, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003152, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003153, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003154, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003155, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003156, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003157, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003158, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003159, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003160, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003161, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003162, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003163, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003164, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003165, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003166, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003167, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uscaled_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003168, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003169, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003170, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003171, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003172, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003173, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003174, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003175, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003176, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003177, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003178, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003179, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003180, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003181, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003182, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003183, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003184, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003185, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sscaled_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003186, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003187, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003188, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003189, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003190, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003191, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003192, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003193, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003194, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003195, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003196, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003197, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003198, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003199, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003200, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003201, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003202, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003203, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_uint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003204, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003205, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003206, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003207, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003208, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003209, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003210, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003211, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003212, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003213, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003214, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003215, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003216, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003217, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003218, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003219, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003220, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003221, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_sint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003222, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003223, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003224, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003225, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003226, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003227, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003228, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003229, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003230, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003231, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003232, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003233, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003234, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003235, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003236, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003237, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003238, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003239, "dEQP-VK.texture.swizzle.component_mapping.r8g8b8a8_srgb_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003240, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003241, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003242, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003243, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003244, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003245, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003246, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003247, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003248, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003249, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003250, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003251, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003252, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003253, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003254, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003255, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003256, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003257, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_unorm_pack32_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003258, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003259, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003260, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003261, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003262, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003263, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003264, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003265, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003266, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003267, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003268, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003269, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003270, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003271, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003272, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003273, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003274, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003275, "dEQP-VK.texture.swizzle.component_mapping.a2r10g10b10_uint_pack32_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003276, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003277, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003278, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003279, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003280, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003281, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003282, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003283, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003284, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003285, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003286, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003287, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003288, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003289, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003290, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003291, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003292, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003293, "dEQP-VK.texture.swizzle.component_mapping.a2b10g10r10_uscaled_pack32_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003294, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003295, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003296, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003297, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003298, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003299, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003300, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003301, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003302, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003303, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003304, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003305, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003306, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003307, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003308, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003309, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003310, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003311, "dEQP-VK.texture.swizzle.component_mapping.r16_unorm_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003312, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003313, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003314, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003315, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003316, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003317, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003318, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003319, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003320, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003321, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003322, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003323, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003324, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003325, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003326, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003327, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003328, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003329, "dEQP-VK.texture.swizzle.component_mapping.r16_snorm_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003330, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003331, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003332, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003333, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003334, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003335, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003336, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003337, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003338, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003339, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003340, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003341, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003342, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003343, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003344, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003345, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003346, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003347, "dEQP-VK.texture.swizzle.component_mapping.r16_uscaled_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003348, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003349, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003350, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003351, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003352, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003353, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003354, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003355, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003356, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003357, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003358, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003359, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003360, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003361, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003362, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003363, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003364, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003365, "dEQP-VK.texture.swizzle.component_mapping.r16_sscaled_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003366, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003367, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003368, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003369, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003370, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003371, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003372, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003373, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003374, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003375, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003376, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003377, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003378, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003379, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003380, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003381, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003382, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003383, "dEQP-VK.texture.swizzle.component_mapping.r16_uint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003384, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003385, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003386, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003387, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003388, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003389, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003390, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003391, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003392, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003393, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003394, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003395, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003396, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003397, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003398, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003399, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003400, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003401, "dEQP-VK.texture.swizzle.component_mapping.r16_sint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003402, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003403, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003404, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003405, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003406, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003407, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003408, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003409, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003410, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003411, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003412, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003413, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003414, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003415, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003416, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003417, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003418, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003419, "dEQP-VK.texture.swizzle.component_mapping.r16_sfloat_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003420, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003421, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003422, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003423, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003424, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003425, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003426, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003427, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003428, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003429, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003430, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003431, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003432, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003433, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003434, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003435, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003436, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003437, "dEQP-VK.texture.swizzle.component_mapping.r16g16_unorm_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003438, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003439, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003440, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003441, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003442, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003443, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003444, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003445, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003446, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003447, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003448, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003449, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003450, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003451, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003452, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003453, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003454, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003455, "dEQP-VK.texture.swizzle.component_mapping.r16g16_snorm_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003456, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003457, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003458, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003459, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003460, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003461, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003462, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003463, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003464, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003465, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003466, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003467, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003468, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003469, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003470, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003471, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003472, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003473, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uscaled_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003474, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003475, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003476, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003477, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003478, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003479, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003480, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003481, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003482, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003483, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003484, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003485, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003486, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003487, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003488, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003489, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003490, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003491, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sscaled_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003492, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003493, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003494, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003495, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003496, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003497, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003498, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003499, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003500, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003501, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003502, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003503, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003504, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003505, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003506, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003507, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003508, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003509, "dEQP-VK.texture.swizzle.component_mapping.r16g16_uint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003510, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003511, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003512, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003513, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003514, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003515, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003516, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003517, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003518, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003519, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003520, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003521, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003522, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003523, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003524, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003525, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003526, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003527, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003528, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003529, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003530, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003531, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003532, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003533, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003534, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003535, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003536, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003537, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003538, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003539, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003540, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003541, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003542, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003543, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003544, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003545, "dEQP-VK.texture.swizzle.component_mapping.r16g16_sfloat_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003546, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003547, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003548, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003549, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003550, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003551, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003552, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003553, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003554, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003555, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003556, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003557, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003558, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003559, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003560, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003561, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003562, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003563, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_unorm_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003564, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003565, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003566, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003567, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003568, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003569, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003570, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003571, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003572, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003573, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003574, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003575, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003576, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003577, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003578, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003579, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003580, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003581, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_snorm_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003582, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003583, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003584, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003585, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003586, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003587, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003588, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003589, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003590, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003591, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003592, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003593, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003594, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003595, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003596, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003597, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003598, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003599, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uscaled_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003600, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003601, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003602, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003603, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003604, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003605, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003606, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003607, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003608, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003609, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003610, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003611, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003612, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003613, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003614, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003615, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003616, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003617, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sscaled_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003618, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003619, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003620, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003621, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003622, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003623, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003624, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003625, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003626, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003627, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003628, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003629, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003630, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003631, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003632, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003633, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003634, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003635, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_uint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003636, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003637, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003638, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003639, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003640, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003641, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003642, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003643, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003644, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003645, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003646, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003647, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003648, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003649, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003650, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003651, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003652, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003653, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003654, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003655, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003656, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003657, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003658, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003659, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003660, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003661, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003662, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003663, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003664, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003665, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003666, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003667, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003668, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003669, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003670, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003671, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16_sfloat_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003672, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003673, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003674, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003675, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003676, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003677, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003678, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003679, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003680, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003681, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003682, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003683, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003684, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003685, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003686, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003687, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003688, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003689, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_unorm_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003690, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003691, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003692, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003693, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003694, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003695, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003696, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003697, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003698, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003699, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003700, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003701, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003702, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003703, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003704, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003705, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003706, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003707, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_snorm_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003708, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003709, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003710, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003711, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003712, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003713, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003714, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003715, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003716, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003717, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003718, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003719, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003720, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003721, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003722, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003723, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003724, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003725, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uscaled_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003726, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003727, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003728, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003729, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003730, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003731, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003732, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003733, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003734, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003735, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003736, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003737, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003738, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003739, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003740, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003741, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003742, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003743, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sscaled_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003744, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003745, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003746, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003747, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003748, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003749, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003750, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003751, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003752, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003753, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003754, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003755, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003756, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003757, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003758, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003759, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003760, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003761, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_uint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003762, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003763, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003764, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003765, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003766, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003767, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003768, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003769, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003770, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003771, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003772, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003773, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003774, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003775, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003776, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003777, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003778, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003779, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003780, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003781, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003782, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003783, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003784, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003785, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003786, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003787, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003788, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003789, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003790, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003791, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003792, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003793, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003794, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003795, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003796, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003797, "dEQP-VK.texture.swizzle.component_mapping.r16g16b16a16_sfloat_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003798, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003799, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003800, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003801, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003802, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003803, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003804, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003805, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003806, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003807, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003808, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003809, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003810, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003811, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003812, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003813, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003814, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003815, "dEQP-VK.texture.swizzle.component_mapping.r32_uint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003816, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003817, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003818, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003819, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003820, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003821, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003822, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003823, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003824, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003825, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003826, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003827, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003828, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003829, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003830, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003831, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003832, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003833, "dEQP-VK.texture.swizzle.component_mapping.r32_sint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003834, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003835, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003836, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003837, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003838, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003839, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003840, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003841, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003842, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003843, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003844, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003845, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003846, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003847, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003848, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003849, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003850, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003851, "dEQP-VK.texture.swizzle.component_mapping.r32_sfloat_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003852, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003853, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003854, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003855, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003856, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003857, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003858, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003859, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003860, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003861, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003862, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003863, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003864, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003865, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003866, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003867, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003868, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003869, "dEQP-VK.texture.swizzle.component_mapping.r32g32_uint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003870, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003871, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003872, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003873, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003874, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003875, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003876, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003877, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003878, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003879, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003880, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003881, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003882, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003883, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003884, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003885, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003886, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003887, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003888, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003889, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003890, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003891, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003892, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003893, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003894, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003895, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003896, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003897, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003898, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003899, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003900, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003901, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003902, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003903, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003904, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003905, "dEQP-VK.texture.swizzle.component_mapping.r32g32_sfloat_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003906, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003907, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003908, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003909, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003910, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003911, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003912, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003913, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003914, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003915, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003916, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003917, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003918, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003919, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003920, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003921, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003922, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003923, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_uint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003924, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003925, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003926, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003927, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003928, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003929, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003930, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003931, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003932, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003933, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003934, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003935, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003936, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003937, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003938, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003939, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003940, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003941, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003942, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003943, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003944, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003945, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003946, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003947, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003948, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003949, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003950, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003951, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003952, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003953, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003954, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003955, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003956, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003957, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003958, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003959, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32_sfloat_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003960, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003961, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003962, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003963, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003964, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003965, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003966, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003967, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003968, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003969, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003970, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003971, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003972, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003973, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003974, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003975, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003976, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003977, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_uint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003978, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003979, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003980, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003981, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003982, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003983, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003984, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003985, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003986, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003987, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003988, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003989, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003990, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003991, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003992, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003993, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003994, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003995, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sint_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003996, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003997, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003998, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC003999, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004000, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004001, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004002, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004003, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004004, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004005, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004006, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004007, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004008, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004009, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004010, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004011, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004012, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004013, "dEQP-VK.texture.swizzle.component_mapping.r32g32b32a32_sfloat_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004014, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004015, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004016, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004017, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004018, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004019, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004020, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004021, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004022, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004023, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004024, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004025, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004026, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004027, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004028, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004029, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004030, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004031, "dEQP-VK.texture.swizzle.component_mapping.b10g11r11_ufloat_pack32_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004032, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004033, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004034, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004035, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004036, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004037, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004038, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004039, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004040, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004041, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004042, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004043, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004044, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004045, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004046, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004047, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004048, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004049, "dEQP-VK.texture.swizzle.component_mapping.e5b9g9r9_ufloat_pack32_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004050, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004051, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004052, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004053, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004054, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004055, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004056, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004057, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004058, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004059, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004060, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004061, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004062, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004063, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004064, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004065, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004066, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004067, "dEQP-VK.texture.swizzle.component_mapping.b4g4r4a4_unorm_pack16_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004068, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004069, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004070, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004071, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004072, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004073, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004074, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004075, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004076, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004077, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004078, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004079, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004080, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004081, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004082, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004083, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004084, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004085, "dEQP-VK.texture.swizzle.component_mapping.b5g5r5a1_unorm_pack16_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004086, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004087, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004088, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004089, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004090, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004091, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004092, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004093, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004094, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004095, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004096, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004097, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004098, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004099, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004100, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004101, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004102, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004103, "dEQP-VK.texture.swizzle.component_mapping.a4r4g4b4_unorm_pack16_ext_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004104, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004105, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004106, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004107, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004108, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004109, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004110, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004111, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004112, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004113, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004114, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004115, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004116, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004117, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004118, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004119, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004120, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004121, "dEQP-VK.texture.swizzle.component_mapping.a4b4g4r4_unorm_pack16_ext_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004122, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004123, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004124, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004125, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004126, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004127, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004128, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004129, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004130, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004131, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004132, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004133, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004134, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004135, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004136, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004137, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004138, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004139, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004140, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004141, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004142, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004143, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004144, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004145, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004146, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004147, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004148, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004149, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004150, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004151, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004152, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004153, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004154, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004155, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004156, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004157, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004158, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004159, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004160, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004161, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004162, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004163, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004164, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004165, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004166, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004167, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004168, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004169, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004170, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004171, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004172, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004173, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004174, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004175, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004176, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004177, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004178, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004179, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004180, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004181, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004182, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004183, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004184, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004185, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004186, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004187, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004188, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004189, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004190, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004191, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004192, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004193, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a1_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004194, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004195, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004196, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004197, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004198, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004199, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004200, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004201, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004202, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004203, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004204, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004205, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004206, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004207, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004208, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004209, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004210, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004211, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004212, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004213, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004214, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004215, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004216, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004217, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004218, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004219, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004220, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004221, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004222, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004223, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004224, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004225, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004226, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004227, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004228, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004229, "dEQP-VK.texture.swizzle.component_mapping.etc2_r8g8b8a8_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004230, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004231, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004232, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004233, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004234, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004235, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004236, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004237, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004238, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004239, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004240, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004241, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004242, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004243, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004244, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004245, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004246, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004247, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004248, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004249, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004250, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004251, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004252, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004253, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004254, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004255, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004256, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004257, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004258, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004259, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004260, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004261, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004262, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004263, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004264, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004265, "dEQP-VK.texture.swizzle.component_mapping.eac_r11_snorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004266, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004267, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004268, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004269, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004270, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004271, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004272, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004273, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004274, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004275, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004276, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004277, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004278, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004279, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004280, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004281, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004282, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004283, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004284, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004285, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004286, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004287, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004288, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004289, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004290, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004291, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004292, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004293, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004294, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004295, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004296, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004297, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004298, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004299, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004300, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004301, "dEQP-VK.texture.swizzle.component_mapping.eac_r11g11_snorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004302, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004303, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004304, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004305, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004306, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004307, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004308, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004309, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004310, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004311, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004312, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004313, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004314, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004315, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004316, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004317, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004318, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004319, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004320, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004321, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004322, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004323, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004324, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004325, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004326, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004327, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004328, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004329, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004330, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004331, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004332, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004333, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004334, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004335, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004336, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004337, "dEQP-VK.texture.swizzle.component_mapping.astc_4x4_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004338, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004339, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004340, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004341, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004342, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004343, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004344, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004345, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004346, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004347, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004348, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004349, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004350, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004351, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004352, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004353, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004354, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004355, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004356, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004357, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004358, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004359, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004360, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004361, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004362, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004363, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004364, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004365, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004366, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004367, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004368, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004369, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004370, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004371, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004372, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004373, "dEQP-VK.texture.swizzle.component_mapping.astc_5x4_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004374, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004375, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004376, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004377, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004378, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004379, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004380, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004381, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004382, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004383, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004384, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004385, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004386, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004387, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004388, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004389, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004390, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004391, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004392, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004393, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004394, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004395, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004396, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004397, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004398, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004399, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004400, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004401, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004402, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004403, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004404, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004405, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004406, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004407, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004408, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004409, "dEQP-VK.texture.swizzle.component_mapping.astc_5x5_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004410, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004411, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004412, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004413, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004414, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004415, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004416, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004417, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004418, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004419, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004420, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004421, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004422, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004423, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004424, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004425, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004426, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004427, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004428, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004429, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004430, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004431, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004432, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004433, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004434, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004435, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004436, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004437, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004438, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004439, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004440, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004441, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004442, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004443, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004444, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004445, "dEQP-VK.texture.swizzle.component_mapping.astc_6x5_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004446, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004447, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004448, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004449, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004450, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004451, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004452, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004453, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004454, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004455, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004456, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004457, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004458, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004459, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004460, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004461, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004462, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004463, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004464, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004465, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004466, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004467, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004468, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004469, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004470, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004471, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004472, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004473, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004474, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004475, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004476, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004477, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004478, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004479, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004480, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004481, "dEQP-VK.texture.swizzle.component_mapping.astc_6x6_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004482, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004483, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004484, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004485, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004486, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004487, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004488, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004489, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004490, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004491, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004492, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004493, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004494, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004495, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004496, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004497, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004498, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004499, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004500, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004501, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004502, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004503, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004504, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004505, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004506, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004507, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004508, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004509, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004510, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004511, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004512, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004513, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004514, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004515, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004516, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004517, "dEQP-VK.texture.swizzle.component_mapping.astc_8x5_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004518, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004519, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004520, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004521, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004522, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004523, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004524, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004525, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004526, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004527, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004528, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004529, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004530, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004531, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004532, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004533, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004534, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004535, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004536, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004537, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004538, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004539, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004540, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004541, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004542, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004543, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004544, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004545, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004546, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004547, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004548, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004549, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004550, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004551, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004552, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004553, "dEQP-VK.texture.swizzle.component_mapping.astc_8x6_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004554, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004555, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004556, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004557, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004558, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004559, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004560, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004561, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004562, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004563, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004564, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004565, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004566, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004567, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004568, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004569, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004570, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004571, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004572, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004573, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004574, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004575, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004576, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004577, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004578, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004579, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004580, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004581, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004582, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004583, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004584, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004585, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004586, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004587, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004588, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004589, "dEQP-VK.texture.swizzle.component_mapping.astc_8x8_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004590, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004591, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004592, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004593, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004594, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004595, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004596, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004597, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004598, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004599, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004600, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004601, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004602, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004603, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004604, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004605, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004606, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004607, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004608, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004609, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004610, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004611, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004612, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004613, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004614, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004615, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004616, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004617, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004618, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004619, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004620, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004621, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004622, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004623, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004624, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004625, "dEQP-VK.texture.swizzle.component_mapping.astc_10x5_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004626, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004627, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004628, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004629, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004630, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004631, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004632, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004633, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004634, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004635, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004636, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004637, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004638, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004639, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004640, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004641, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004642, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004643, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004644, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004645, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004646, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004647, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004648, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004649, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004650, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004651, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004652, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004653, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004654, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004655, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004656, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004657, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004658, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004659, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004660, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004661, "dEQP-VK.texture.swizzle.component_mapping.astc_10x6_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004662, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004663, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004664, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004665, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004666, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004667, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004668, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004669, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004670, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004671, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004672, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004673, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004674, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004675, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004676, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004677, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004678, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004679, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004680, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004681, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004682, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004683, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004684, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004685, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004686, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004687, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004688, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004689, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004690, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004691, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004692, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004693, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004694, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004695, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004696, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004697, "dEQP-VK.texture.swizzle.component_mapping.astc_10x8_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004698, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004699, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004700, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004701, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004702, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004703, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004704, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004705, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004706, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004707, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004708, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004709, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004710, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004711, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004712, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004713, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004714, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004715, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004716, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004717, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004718, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004719, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004720, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004721, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004722, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004723, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004724, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004725, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004726, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004727, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004728, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004729, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004730, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004731, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004732, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004733, "dEQP-VK.texture.swizzle.component_mapping.astc_10x10_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004734, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004735, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004736, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004737, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004738, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004739, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004740, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004741, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004742, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004743, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004744, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004745, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004746, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004747, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004748, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004749, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004750, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004751, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004752, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004753, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004754, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004755, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004756, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004757, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004758, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004759, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004760, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004761, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004762, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004763, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004764, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004765, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004766, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004767, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004768, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004769, "dEQP-VK.texture.swizzle.component_mapping.astc_12x10_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004770, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004771, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004772, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004773, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004774, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004775, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004776, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004777, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004778, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004779, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004780, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004781, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004782, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004783, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004784, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004785, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004786, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004787, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_unorm_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004788, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004789, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004790, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004791, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004792, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004793, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004794, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004795, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004796, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004797, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_sparse_zzzz.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004798, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_sparse_oooo.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004799, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_sparse_rrrr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004800, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_sparse_gggg.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004801, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_sparse_bbbb.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004802, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_sparse_aaaa.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004803, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_sparse_rgba.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004804, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_sparse_iiii.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004805, "dEQP-VK.texture.swizzle.component_mapping.astc_12x12_srgb_block_2d_npot_sparse_abgr.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004806, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4_unorm_pack8_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004807, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4_unorm_pack8_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004808, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4_unorm_pack8_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004809, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4_unorm_pack8_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004810, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4_unorm_pack8_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004811, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4_unorm_pack8_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004812, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4b4a4_unorm_pack16_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004813, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4b4a4_unorm_pack16_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004814, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4b4a4_unorm_pack16_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004815, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4b4a4_unorm_pack16_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004816, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4b4a4_unorm_pack16_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004817, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4b4a4_unorm_pack16_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004818, "dEQP-VK.texture.swizzle.texture_coordinate.r5g6b5_unorm_pack16_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004819, "dEQP-VK.texture.swizzle.texture_coordinate.r5g6b5_unorm_pack16_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004820, "dEQP-VK.texture.swizzle.texture_coordinate.r5g6b5_unorm_pack16_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004821, "dEQP-VK.texture.swizzle.texture_coordinate.r5g6b5_unorm_pack16_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004822, "dEQP-VK.texture.swizzle.texture_coordinate.r5g6b5_unorm_pack16_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004823, "dEQP-VK.texture.swizzle.texture_coordinate.r5g6b5_unorm_pack16_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004824, "dEQP-VK.texture.swizzle.texture_coordinate.r5g5b5a1_unorm_pack16_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004825, "dEQP-VK.texture.swizzle.texture_coordinate.r5g5b5a1_unorm_pack16_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004826, "dEQP-VK.texture.swizzle.texture_coordinate.r5g5b5a1_unorm_pack16_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004827, "dEQP-VK.texture.swizzle.texture_coordinate.r5g5b5a1_unorm_pack16_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004828, "dEQP-VK.texture.swizzle.texture_coordinate.r5g5b5a1_unorm_pack16_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004829, "dEQP-VK.texture.swizzle.texture_coordinate.r5g5b5a1_unorm_pack16_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004830, "dEQP-VK.texture.swizzle.texture_coordinate.r8_unorm_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004831, "dEQP-VK.texture.swizzle.texture_coordinate.r8_unorm_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004832, "dEQP-VK.texture.swizzle.texture_coordinate.r8_unorm_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004833, "dEQP-VK.texture.swizzle.texture_coordinate.r8_unorm_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004834, "dEQP-VK.texture.swizzle.texture_coordinate.r8_unorm_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004835, "dEQP-VK.texture.swizzle.texture_coordinate.r8_unorm_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004836, "dEQP-VK.texture.swizzle.texture_coordinate.r8_snorm_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004837, "dEQP-VK.texture.swizzle.texture_coordinate.r8_snorm_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004838, "dEQP-VK.texture.swizzle.texture_coordinate.r8_snorm_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004839, "dEQP-VK.texture.swizzle.texture_coordinate.r8_snorm_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004840, "dEQP-VK.texture.swizzle.texture_coordinate.r8_snorm_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004841, "dEQP-VK.texture.swizzle.texture_coordinate.r8_snorm_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004842, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uscaled_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004843, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uscaled_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004844, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uscaled_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004845, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uscaled_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004846, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uscaled_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004847, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uscaled_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004848, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sscaled_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004849, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sscaled_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004850, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sscaled_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004851, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sscaled_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004852, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sscaled_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004853, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sscaled_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004854, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004855, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004856, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004857, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004858, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004859, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004860, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004861, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004862, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004863, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004864, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004865, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004866, "dEQP-VK.texture.swizzle.texture_coordinate.r8_srgb_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004867, "dEQP-VK.texture.swizzle.texture_coordinate.r8_srgb_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004868, "dEQP-VK.texture.swizzle.texture_coordinate.r8_srgb_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004869, "dEQP-VK.texture.swizzle.texture_coordinate.r8_srgb_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004870, "dEQP-VK.texture.swizzle.texture_coordinate.r8_srgb_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004871, "dEQP-VK.texture.swizzle.texture_coordinate.r8_srgb_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004872, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_unorm_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004873, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_unorm_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004874, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_unorm_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004875, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_unorm_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004876, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_unorm_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004877, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_unorm_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004878, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_snorm_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004879, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_snorm_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004880, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_snorm_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004881, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_snorm_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004882, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_snorm_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004883, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_snorm_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004884, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uscaled_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004885, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uscaled_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004886, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uscaled_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004887, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uscaled_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004888, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uscaled_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004889, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uscaled_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004890, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sscaled_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004891, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sscaled_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004892, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sscaled_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004893, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sscaled_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004894, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sscaled_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004895, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sscaled_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004896, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004897, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004898, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004899, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004900, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004901, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004902, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004903, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004904, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004905, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004906, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004907, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004908, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_srgb_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004909, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_srgb_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004910, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_srgb_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004911, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_srgb_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004912, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_srgb_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004913, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_srgb_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004914, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_unorm_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004915, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_unorm_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004916, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_unorm_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004917, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_unorm_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004918, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_unorm_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004919, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_unorm_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004920, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_snorm_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004921, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_snorm_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004922, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_snorm_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004923, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_snorm_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004924, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_snorm_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004925, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_snorm_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004926, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uscaled_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004927, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uscaled_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004928, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uscaled_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004929, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uscaled_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004930, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uscaled_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004931, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uscaled_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004932, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sscaled_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004933, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sscaled_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004934, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sscaled_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004935, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sscaled_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004936, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sscaled_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004937, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sscaled_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004938, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004939, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004940, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004941, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004942, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004943, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004944, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004945, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004946, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004947, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004948, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004949, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004950, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_srgb_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004951, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_srgb_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004952, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_srgb_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004953, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_srgb_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004954, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_srgb_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004955, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_srgb_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004956, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_unorm_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004957, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_unorm_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004958, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_unorm_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004959, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_unorm_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004960, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_unorm_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004961, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_unorm_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004962, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_snorm_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004963, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_snorm_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004964, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_snorm_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004965, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_snorm_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004966, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_snorm_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004967, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_snorm_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004968, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uscaled_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004969, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uscaled_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004970, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uscaled_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004971, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uscaled_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004972, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uscaled_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004973, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uscaled_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004974, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sscaled_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004975, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sscaled_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004976, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sscaled_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004977, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sscaled_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004978, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sscaled_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004979, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sscaled_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004980, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004981, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004982, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004983, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004984, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004985, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004986, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004987, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004988, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004989, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004990, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004991, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004992, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_srgb_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004993, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_srgb_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004994, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_srgb_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004995, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_srgb_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004996, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_srgb_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004997, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_srgb_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004998, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_unorm_pack32_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC004999, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_unorm_pack32_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005000, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_unorm_pack32_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005001, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_unorm_pack32_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005002, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_unorm_pack32_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005003, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_unorm_pack32_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005004, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_uint_pack32_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005005, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_uint_pack32_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005006, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_uint_pack32_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005007, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_uint_pack32_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005008, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_uint_pack32_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005009, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_uint_pack32_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005010, "dEQP-VK.texture.swizzle.texture_coordinate.a2b10g10r10_uscaled_pack32_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005011, "dEQP-VK.texture.swizzle.texture_coordinate.a2b10g10r10_uscaled_pack32_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005012, "dEQP-VK.texture.swizzle.texture_coordinate.a2b10g10r10_uscaled_pack32_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005013, "dEQP-VK.texture.swizzle.texture_coordinate.a2b10g10r10_uscaled_pack32_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005014, "dEQP-VK.texture.swizzle.texture_coordinate.a2b10g10r10_uscaled_pack32_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005015, "dEQP-VK.texture.swizzle.texture_coordinate.a2b10g10r10_uscaled_pack32_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005016, "dEQP-VK.texture.swizzle.texture_coordinate.r16_unorm_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005017, "dEQP-VK.texture.swizzle.texture_coordinate.r16_unorm_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005018, "dEQP-VK.texture.swizzle.texture_coordinate.r16_unorm_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005019, "dEQP-VK.texture.swizzle.texture_coordinate.r16_unorm_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005020, "dEQP-VK.texture.swizzle.texture_coordinate.r16_unorm_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005021, "dEQP-VK.texture.swizzle.texture_coordinate.r16_unorm_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005022, "dEQP-VK.texture.swizzle.texture_coordinate.r16_snorm_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005023, "dEQP-VK.texture.swizzle.texture_coordinate.r16_snorm_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005024, "dEQP-VK.texture.swizzle.texture_coordinate.r16_snorm_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005025, "dEQP-VK.texture.swizzle.texture_coordinate.r16_snorm_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005026, "dEQP-VK.texture.swizzle.texture_coordinate.r16_snorm_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005027, "dEQP-VK.texture.swizzle.texture_coordinate.r16_snorm_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005028, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uscaled_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005029, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uscaled_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005030, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uscaled_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005031, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uscaled_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005032, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uscaled_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005033, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uscaled_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005034, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sscaled_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005035, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sscaled_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005036, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sscaled_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005037, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sscaled_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005038, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sscaled_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005039, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sscaled_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005040, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005041, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005042, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005043, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005044, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005045, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005046, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005047, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005048, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005049, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005050, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005051, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005052, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sfloat_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005053, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sfloat_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005054, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sfloat_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005055, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sfloat_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005056, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sfloat_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005057, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sfloat_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005058, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_unorm_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005059, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_unorm_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005060, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_unorm_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005061, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_unorm_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005062, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_unorm_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005063, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_unorm_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005064, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_snorm_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005065, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_snorm_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005066, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_snorm_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005067, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_snorm_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005068, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_snorm_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005069, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_snorm_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005070, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uscaled_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005071, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uscaled_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005072, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uscaled_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005073, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uscaled_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005074, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uscaled_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005075, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uscaled_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005076, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sscaled_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005077, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sscaled_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005078, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sscaled_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005079, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sscaled_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005080, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sscaled_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005081, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sscaled_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005082, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005083, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005084, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005085, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005086, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005087, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005088, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005089, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005090, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005091, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005092, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005093, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005094, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sfloat_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005095, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sfloat_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005096, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sfloat_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005097, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sfloat_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005098, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sfloat_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005099, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sfloat_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005100, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_unorm_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005101, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_unorm_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005102, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_unorm_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005103, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_unorm_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005104, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_unorm_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005105, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_unorm_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005106, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_snorm_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005107, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_snorm_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005108, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_snorm_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005109, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_snorm_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005110, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_snorm_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005111, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_snorm_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005112, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uscaled_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005113, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uscaled_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005114, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uscaled_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005115, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uscaled_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005116, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uscaled_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005117, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uscaled_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005118, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sscaled_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005119, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sscaled_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005120, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sscaled_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005121, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sscaled_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005122, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sscaled_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005123, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sscaled_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005124, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005125, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005126, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005127, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005128, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005129, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005130, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005131, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005132, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005133, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005134, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005135, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005136, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sfloat_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005137, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sfloat_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005138, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sfloat_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005139, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sfloat_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005140, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sfloat_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005141, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sfloat_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005142, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_unorm_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005143, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_unorm_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005144, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_unorm_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005145, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_unorm_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005146, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_unorm_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005147, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_unorm_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005148, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_snorm_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005149, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_snorm_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005150, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_snorm_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005151, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_snorm_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005152, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_snorm_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005153, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_snorm_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005154, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uscaled_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005155, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uscaled_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005156, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uscaled_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005157, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uscaled_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005158, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uscaled_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005159, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uscaled_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005160, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sscaled_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005161, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sscaled_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005162, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sscaled_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005163, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sscaled_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005164, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sscaled_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005165, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sscaled_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005166, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005167, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005168, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005169, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005170, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005171, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005172, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005173, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005174, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005175, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005176, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005177, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005178, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sfloat_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005179, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sfloat_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005180, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sfloat_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005181, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sfloat_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005182, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sfloat_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005183, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sfloat_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005184, "dEQP-VK.texture.swizzle.texture_coordinate.r32_uint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005185, "dEQP-VK.texture.swizzle.texture_coordinate.r32_uint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005186, "dEQP-VK.texture.swizzle.texture_coordinate.r32_uint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005187, "dEQP-VK.texture.swizzle.texture_coordinate.r32_uint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005188, "dEQP-VK.texture.swizzle.texture_coordinate.r32_uint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005189, "dEQP-VK.texture.swizzle.texture_coordinate.r32_uint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005190, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005191, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005192, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005193, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005194, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005195, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005196, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sfloat_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005197, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sfloat_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005198, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sfloat_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005199, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sfloat_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005200, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sfloat_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005201, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sfloat_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005202, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_uint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005203, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_uint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005204, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_uint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005205, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_uint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005206, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_uint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005207, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_uint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005208, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005209, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005210, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005211, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005212, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005213, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005214, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sfloat_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005215, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sfloat_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005216, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sfloat_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005217, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sfloat_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005218, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sfloat_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005219, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sfloat_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005220, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_uint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005221, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_uint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005222, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_uint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005223, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_uint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005224, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_uint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005225, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_uint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005226, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005227, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005228, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005229, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005230, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005231, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005232, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sfloat_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005233, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sfloat_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005234, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sfloat_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005235, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sfloat_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005236, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sfloat_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005237, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sfloat_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005238, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_uint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005239, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_uint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005240, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_uint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005241, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_uint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005242, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_uint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005243, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_uint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005244, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sint_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005245, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sint_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005246, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sint_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005247, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sint_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005248, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sint_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005249, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sint_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005250, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sfloat_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005251, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sfloat_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005252, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sfloat_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005253, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sfloat_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005254, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sfloat_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005255, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sfloat_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005256, "dEQP-VK.texture.swizzle.texture_coordinate.b10g11r11_ufloat_pack32_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005257, "dEQP-VK.texture.swizzle.texture_coordinate.b10g11r11_ufloat_pack32_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005258, "dEQP-VK.texture.swizzle.texture_coordinate.b10g11r11_ufloat_pack32_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005259, "dEQP-VK.texture.swizzle.texture_coordinate.b10g11r11_ufloat_pack32_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005260, "dEQP-VK.texture.swizzle.texture_coordinate.b10g11r11_ufloat_pack32_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005261, "dEQP-VK.texture.swizzle.texture_coordinate.b10g11r11_ufloat_pack32_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005262, "dEQP-VK.texture.swizzle.texture_coordinate.e5b9g9r9_ufloat_pack32_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005263, "dEQP-VK.texture.swizzle.texture_coordinate.e5b9g9r9_ufloat_pack32_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005264, "dEQP-VK.texture.swizzle.texture_coordinate.e5b9g9r9_ufloat_pack32_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005265, "dEQP-VK.texture.swizzle.texture_coordinate.e5b9g9r9_ufloat_pack32_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005266, "dEQP-VK.texture.swizzle.texture_coordinate.e5b9g9r9_ufloat_pack32_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005267, "dEQP-VK.texture.swizzle.texture_coordinate.e5b9g9r9_ufloat_pack32_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005268, "dEQP-VK.texture.swizzle.texture_coordinate.b4g4r4a4_unorm_pack16_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005269, "dEQP-VK.texture.swizzle.texture_coordinate.b4g4r4a4_unorm_pack16_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005270, "dEQP-VK.texture.swizzle.texture_coordinate.b4g4r4a4_unorm_pack16_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005271, "dEQP-VK.texture.swizzle.texture_coordinate.b4g4r4a4_unorm_pack16_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005272, "dEQP-VK.texture.swizzle.texture_coordinate.b4g4r4a4_unorm_pack16_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005273, "dEQP-VK.texture.swizzle.texture_coordinate.b4g4r4a4_unorm_pack16_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005274, "dEQP-VK.texture.swizzle.texture_coordinate.b5g5r5a1_unorm_pack16_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005275, "dEQP-VK.texture.swizzle.texture_coordinate.b5g5r5a1_unorm_pack16_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005276, "dEQP-VK.texture.swizzle.texture_coordinate.b5g5r5a1_unorm_pack16_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005277, "dEQP-VK.texture.swizzle.texture_coordinate.b5g5r5a1_unorm_pack16_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005278, "dEQP-VK.texture.swizzle.texture_coordinate.b5g5r5a1_unorm_pack16_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005279, "dEQP-VK.texture.swizzle.texture_coordinate.b5g5r5a1_unorm_pack16_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005280, "dEQP-VK.texture.swizzle.texture_coordinate.a4r4g4b4_unorm_pack16_ext_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005281, "dEQP-VK.texture.swizzle.texture_coordinate.a4r4g4b4_unorm_pack16_ext_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005282, "dEQP-VK.texture.swizzle.texture_coordinate.a4r4g4b4_unorm_pack16_ext_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005283, "dEQP-VK.texture.swizzle.texture_coordinate.a4r4g4b4_unorm_pack16_ext_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005284, "dEQP-VK.texture.swizzle.texture_coordinate.a4r4g4b4_unorm_pack16_ext_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005285, "dEQP-VK.texture.swizzle.texture_coordinate.a4r4g4b4_unorm_pack16_ext_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005286, "dEQP-VK.texture.swizzle.texture_coordinate.a4b4g4r4_unorm_pack16_ext_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005287, "dEQP-VK.texture.swizzle.texture_coordinate.a4b4g4r4_unorm_pack16_ext_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005288, "dEQP-VK.texture.swizzle.texture_coordinate.a4b4g4r4_unorm_pack16_ext_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005289, "dEQP-VK.texture.swizzle.texture_coordinate.a4b4g4r4_unorm_pack16_ext_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005290, "dEQP-VK.texture.swizzle.texture_coordinate.a4b4g4r4_unorm_pack16_ext_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005291, "dEQP-VK.texture.swizzle.texture_coordinate.a4b4g4r4_unorm_pack16_ext_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005292, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005293, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005294, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005295, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005296, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005297, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005298, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005299, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005300, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005301, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005302, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005303, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005304, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005305, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005306, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005307, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005308, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005309, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005310, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005311, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005312, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005313, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005314, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005315, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005316, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005317, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005318, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005319, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005320, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005321, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005322, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005323, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005324, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005325, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005326, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005327, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005328, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005329, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005330, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005331, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005332, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005333, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005334, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_snorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005335, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_snorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005336, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_snorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005337, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_snorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005338, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_snorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005339, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_snorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005340, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005341, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005342, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005343, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005344, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005345, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005346, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_snorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005347, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_snorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005348, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_snorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005349, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_snorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005350, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_snorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005351, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_snorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005352, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005353, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005354, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005355, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005356, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005357, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005358, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005359, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005360, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005361, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005362, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005363, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005364, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005365, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005366, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005367, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005368, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005369, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005370, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005371, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005372, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005373, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005374, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005375, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005376, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005377, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005378, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005379, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005380, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005381, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005382, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005383, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005384, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005385, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005386, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005387, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005388, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005389, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005390, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005391, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005392, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005393, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005394, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005395, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005396, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005397, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005398, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005399, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005400, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005401, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005402, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005403, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005404, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005405, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005406, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005407, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005408, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005409, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005410, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005411, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005412, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005413, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005414, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005415, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005416, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005417, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005418, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005419, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005420, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005421, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005422, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005423, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005424, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005425, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005426, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005427, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005428, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005429, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005430, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005431, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005432, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005433, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005434, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005435, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005436, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005437, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005438, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005439, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005440, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005441, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005442, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005443, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005444, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005445, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005446, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005447, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005448, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005449, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005450, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005451, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005452, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005453, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005454, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005455, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005456, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005457, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005458, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005459, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005460, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005461, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005462, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005463, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005464, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005465, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005466, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005467, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005468, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005469, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005470, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005471, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005472, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005473, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005474, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005475, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005476, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005477, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005478, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005479, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005480, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005481, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005482, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005483, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005484, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005485, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005486, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005487, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005488, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005489, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005490, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005491, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005492, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005493, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005494, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005495, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005496, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005497, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005498, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005499, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005500, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005501, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005502, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005503, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005504, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005505, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005506, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005507, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005508, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_unorm_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005509, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_unorm_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005510, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_unorm_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005511, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_unorm_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005512, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_unorm_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005513, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_unorm_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005514, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_srgb_block_2d_pot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005515, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_srgb_block_2d_pot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005516, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_srgb_block_2d_pot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005517, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_srgb_block_2d_pot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005518, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_srgb_block_2d_pot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005519, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_srgb_block_2d_pot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005520, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4_unorm_pack8_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005521, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4_unorm_pack8_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005522, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4_unorm_pack8_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005523, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4_unorm_pack8_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005524, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4_unorm_pack8_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005525, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4_unorm_pack8_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005526, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4b4a4_unorm_pack16_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005527, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4b4a4_unorm_pack16_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005528, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4b4a4_unorm_pack16_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005529, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4b4a4_unorm_pack16_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005530, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4b4a4_unorm_pack16_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005531, "dEQP-VK.texture.swizzle.texture_coordinate.r4g4b4a4_unorm_pack16_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005532, "dEQP-VK.texture.swizzle.texture_coordinate.r5g6b5_unorm_pack16_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005533, "dEQP-VK.texture.swizzle.texture_coordinate.r5g6b5_unorm_pack16_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005534, "dEQP-VK.texture.swizzle.texture_coordinate.r5g6b5_unorm_pack16_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005535, "dEQP-VK.texture.swizzle.texture_coordinate.r5g6b5_unorm_pack16_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005536, "dEQP-VK.texture.swizzle.texture_coordinate.r5g6b5_unorm_pack16_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005537, "dEQP-VK.texture.swizzle.texture_coordinate.r5g6b5_unorm_pack16_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005538, "dEQP-VK.texture.swizzle.texture_coordinate.r5g5b5a1_unorm_pack16_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005539, "dEQP-VK.texture.swizzle.texture_coordinate.r5g5b5a1_unorm_pack16_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005540, "dEQP-VK.texture.swizzle.texture_coordinate.r5g5b5a1_unorm_pack16_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005541, "dEQP-VK.texture.swizzle.texture_coordinate.r5g5b5a1_unorm_pack16_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005542, "dEQP-VK.texture.swizzle.texture_coordinate.r5g5b5a1_unorm_pack16_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005543, "dEQP-VK.texture.swizzle.texture_coordinate.r5g5b5a1_unorm_pack16_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005544, "dEQP-VK.texture.swizzle.texture_coordinate.r8_unorm_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005545, "dEQP-VK.texture.swizzle.texture_coordinate.r8_unorm_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005546, "dEQP-VK.texture.swizzle.texture_coordinate.r8_unorm_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005547, "dEQP-VK.texture.swizzle.texture_coordinate.r8_unorm_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005548, "dEQP-VK.texture.swizzle.texture_coordinate.r8_unorm_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005549, "dEQP-VK.texture.swizzle.texture_coordinate.r8_unorm_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005550, "dEQP-VK.texture.swizzle.texture_coordinate.r8_snorm_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005551, "dEQP-VK.texture.swizzle.texture_coordinate.r8_snorm_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005552, "dEQP-VK.texture.swizzle.texture_coordinate.r8_snorm_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005553, "dEQP-VK.texture.swizzle.texture_coordinate.r8_snorm_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005554, "dEQP-VK.texture.swizzle.texture_coordinate.r8_snorm_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005555, "dEQP-VK.texture.swizzle.texture_coordinate.r8_snorm_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005556, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uscaled_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005557, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uscaled_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005558, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uscaled_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005559, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uscaled_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005560, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uscaled_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005561, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uscaled_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005562, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sscaled_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005563, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sscaled_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005564, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sscaled_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005565, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sscaled_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005566, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sscaled_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005567, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sscaled_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005568, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005569, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005570, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005571, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005572, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005573, "dEQP-VK.texture.swizzle.texture_coordinate.r8_uint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005574, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005575, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005576, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005577, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005578, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005579, "dEQP-VK.texture.swizzle.texture_coordinate.r8_sint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005580, "dEQP-VK.texture.swizzle.texture_coordinate.r8_srgb_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005581, "dEQP-VK.texture.swizzle.texture_coordinate.r8_srgb_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005582, "dEQP-VK.texture.swizzle.texture_coordinate.r8_srgb_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005583, "dEQP-VK.texture.swizzle.texture_coordinate.r8_srgb_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005584, "dEQP-VK.texture.swizzle.texture_coordinate.r8_srgb_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005585, "dEQP-VK.texture.swizzle.texture_coordinate.r8_srgb_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005586, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_unorm_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005587, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_unorm_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005588, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_unorm_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005589, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_unorm_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005590, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_unorm_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005591, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_unorm_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005592, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_snorm_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005593, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_snorm_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005594, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_snorm_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005595, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_snorm_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005596, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_snorm_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005597, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_snorm_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005598, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uscaled_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005599, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uscaled_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005600, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uscaled_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005601, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uscaled_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005602, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uscaled_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005603, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uscaled_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005604, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sscaled_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005605, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sscaled_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005606, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sscaled_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005607, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sscaled_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005608, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sscaled_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005609, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sscaled_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005610, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005611, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005612, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005613, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005614, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005615, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_uint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005616, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005617, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005618, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005619, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005620, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005621, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_sint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005622, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_srgb_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005623, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_srgb_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005624, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_srgb_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005625, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_srgb_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005626, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_srgb_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005627, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8_srgb_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005628, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_unorm_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005629, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_unorm_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005630, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_unorm_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005631, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_unorm_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005632, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_unorm_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005633, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_unorm_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005634, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_snorm_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005635, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_snorm_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005636, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_snorm_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005637, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_snorm_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005638, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_snorm_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005639, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_snorm_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005640, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uscaled_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005641, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uscaled_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005642, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uscaled_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005643, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uscaled_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005644, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uscaled_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005645, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uscaled_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005646, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sscaled_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005647, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sscaled_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005648, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sscaled_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005649, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sscaled_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005650, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sscaled_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005651, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sscaled_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005652, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005653, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005654, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005655, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005656, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005657, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_uint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005658, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005659, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005660, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005661, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005662, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005663, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_sint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005664, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_srgb_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005665, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_srgb_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005666, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_srgb_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005667, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_srgb_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005668, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_srgb_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005669, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8_srgb_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005670, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_unorm_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005671, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_unorm_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005672, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_unorm_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005673, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_unorm_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005674, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_unorm_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005675, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_unorm_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005676, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_snorm_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005677, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_snorm_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005678, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_snorm_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005679, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_snorm_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005680, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_snorm_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005681, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_snorm_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005682, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uscaled_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005683, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uscaled_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005684, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uscaled_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005685, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uscaled_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005686, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uscaled_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005687, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uscaled_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005688, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sscaled_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005689, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sscaled_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005690, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sscaled_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005691, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sscaled_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005692, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sscaled_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005693, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sscaled_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005694, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005695, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005696, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005697, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005698, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005699, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_uint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005700, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005701, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005702, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005703, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005704, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005705, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_sint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005706, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_srgb_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005707, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_srgb_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005708, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_srgb_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005709, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_srgb_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005710, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_srgb_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005711, "dEQP-VK.texture.swizzle.texture_coordinate.r8g8b8a8_srgb_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005712, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_unorm_pack32_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005713, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_unorm_pack32_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005714, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_unorm_pack32_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005715, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_unorm_pack32_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005716, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_unorm_pack32_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005717, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_unorm_pack32_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005718, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_uint_pack32_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005719, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_uint_pack32_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005720, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_uint_pack32_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005721, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_uint_pack32_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005722, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_uint_pack32_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005723, "dEQP-VK.texture.swizzle.texture_coordinate.a2r10g10b10_uint_pack32_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005724, "dEQP-VK.texture.swizzle.texture_coordinate.a2b10g10r10_uscaled_pack32_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005725, "dEQP-VK.texture.swizzle.texture_coordinate.a2b10g10r10_uscaled_pack32_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005726, "dEQP-VK.texture.swizzle.texture_coordinate.a2b10g10r10_uscaled_pack32_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005727, "dEQP-VK.texture.swizzle.texture_coordinate.a2b10g10r10_uscaled_pack32_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005728, "dEQP-VK.texture.swizzle.texture_coordinate.a2b10g10r10_uscaled_pack32_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005729, "dEQP-VK.texture.swizzle.texture_coordinate.a2b10g10r10_uscaled_pack32_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005730, "dEQP-VK.texture.swizzle.texture_coordinate.r16_unorm_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005731, "dEQP-VK.texture.swizzle.texture_coordinate.r16_unorm_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005732, "dEQP-VK.texture.swizzle.texture_coordinate.r16_unorm_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005733, "dEQP-VK.texture.swizzle.texture_coordinate.r16_unorm_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005734, "dEQP-VK.texture.swizzle.texture_coordinate.r16_unorm_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005735, "dEQP-VK.texture.swizzle.texture_coordinate.r16_unorm_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005736, "dEQP-VK.texture.swizzle.texture_coordinate.r16_snorm_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005737, "dEQP-VK.texture.swizzle.texture_coordinate.r16_snorm_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005738, "dEQP-VK.texture.swizzle.texture_coordinate.r16_snorm_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005739, "dEQP-VK.texture.swizzle.texture_coordinate.r16_snorm_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005740, "dEQP-VK.texture.swizzle.texture_coordinate.r16_snorm_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005741, "dEQP-VK.texture.swizzle.texture_coordinate.r16_snorm_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005742, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uscaled_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005743, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uscaled_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005744, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uscaled_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005745, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uscaled_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005746, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uscaled_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005747, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uscaled_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005748, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sscaled_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005749, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sscaled_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005750, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sscaled_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005751, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sscaled_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005752, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sscaled_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005753, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sscaled_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005754, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005755, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005756, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005757, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005758, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005759, "dEQP-VK.texture.swizzle.texture_coordinate.r16_uint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005760, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005761, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005762, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005763, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005764, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005765, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005766, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sfloat_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005767, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sfloat_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005768, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sfloat_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005769, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sfloat_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005770, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sfloat_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005771, "dEQP-VK.texture.swizzle.texture_coordinate.r16_sfloat_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005772, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_unorm_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005773, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_unorm_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005774, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_unorm_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005775, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_unorm_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005776, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_unorm_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005777, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_unorm_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005778, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_snorm_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005779, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_snorm_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005780, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_snorm_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005781, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_snorm_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005782, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_snorm_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005783, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_snorm_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005784, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uscaled_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005785, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uscaled_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005786, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uscaled_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005787, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uscaled_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005788, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uscaled_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005789, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uscaled_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005790, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sscaled_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005791, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sscaled_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005792, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sscaled_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005793, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sscaled_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005794, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sscaled_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005795, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sscaled_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005796, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005797, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005798, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005799, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005800, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005801, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_uint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005802, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005803, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005804, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005805, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005806, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005807, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005808, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sfloat_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005809, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sfloat_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005810, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sfloat_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005811, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sfloat_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005812, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sfloat_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005813, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16_sfloat_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005814, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_unorm_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005815, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_unorm_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005816, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_unorm_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005817, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_unorm_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005818, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_unorm_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005819, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_unorm_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005820, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_snorm_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005821, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_snorm_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005822, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_snorm_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005823, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_snorm_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005824, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_snorm_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005825, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_snorm_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005826, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uscaled_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005827, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uscaled_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005828, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uscaled_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005829, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uscaled_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005830, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uscaled_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005831, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uscaled_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005832, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sscaled_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005833, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sscaled_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005834, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sscaled_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005835, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sscaled_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005836, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sscaled_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005837, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sscaled_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005838, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005839, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005840, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005841, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005842, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005843, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_uint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005844, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005845, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005846, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005847, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005848, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005849, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005850, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sfloat_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005851, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sfloat_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005852, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sfloat_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005853, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sfloat_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005854, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sfloat_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005855, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16_sfloat_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005856, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_unorm_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005857, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_unorm_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005858, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_unorm_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005859, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_unorm_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005860, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_unorm_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005861, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_unorm_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005862, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_snorm_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005863, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_snorm_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005864, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_snorm_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005865, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_snorm_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005866, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_snorm_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005867, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_snorm_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005868, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uscaled_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005869, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uscaled_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005870, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uscaled_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005871, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uscaled_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005872, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uscaled_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005873, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uscaled_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005874, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sscaled_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005875, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sscaled_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005876, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sscaled_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005877, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sscaled_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005878, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sscaled_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005879, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sscaled_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005880, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005881, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005882, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005883, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005884, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005885, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_uint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005886, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005887, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005888, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005889, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005890, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005891, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005892, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sfloat_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005893, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sfloat_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005894, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sfloat_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005895, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sfloat_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005896, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sfloat_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005897, "dEQP-VK.texture.swizzle.texture_coordinate.r16g16b16a16_sfloat_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005898, "dEQP-VK.texture.swizzle.texture_coordinate.r32_uint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005899, "dEQP-VK.texture.swizzle.texture_coordinate.r32_uint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005900, "dEQP-VK.texture.swizzle.texture_coordinate.r32_uint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005901, "dEQP-VK.texture.swizzle.texture_coordinate.r32_uint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005902, "dEQP-VK.texture.swizzle.texture_coordinate.r32_uint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005903, "dEQP-VK.texture.swizzle.texture_coordinate.r32_uint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005904, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005905, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005906, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005907, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005908, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005909, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005910, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sfloat_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005911, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sfloat_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005912, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sfloat_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005913, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sfloat_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005914, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sfloat_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005915, "dEQP-VK.texture.swizzle.texture_coordinate.r32_sfloat_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005916, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_uint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005917, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_uint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005918, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_uint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005919, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_uint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005920, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_uint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005921, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_uint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005922, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005923, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005924, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005925, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005926, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005927, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005928, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sfloat_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005929, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sfloat_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005930, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sfloat_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005931, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sfloat_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005932, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sfloat_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005933, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32_sfloat_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005934, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_uint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005935, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_uint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005936, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_uint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005937, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_uint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005938, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_uint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005939, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_uint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005940, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005941, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005942, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005943, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005944, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005945, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005946, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sfloat_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005947, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sfloat_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005948, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sfloat_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005949, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sfloat_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005950, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sfloat_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005951, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32_sfloat_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005952, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_uint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005953, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_uint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005954, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_uint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005955, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_uint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005956, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_uint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005957, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_uint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005958, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sint_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005959, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sint_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005960, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sint_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005961, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sint_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005962, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sint_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005963, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sint_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005964, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sfloat_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005965, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sfloat_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005966, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sfloat_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005967, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sfloat_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005968, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sfloat_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005969, "dEQP-VK.texture.swizzle.texture_coordinate.r32g32b32a32_sfloat_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005970, "dEQP-VK.texture.swizzle.texture_coordinate.b10g11r11_ufloat_pack32_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005971, "dEQP-VK.texture.swizzle.texture_coordinate.b10g11r11_ufloat_pack32_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005972, "dEQP-VK.texture.swizzle.texture_coordinate.b10g11r11_ufloat_pack32_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005973, "dEQP-VK.texture.swizzle.texture_coordinate.b10g11r11_ufloat_pack32_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005974, "dEQP-VK.texture.swizzle.texture_coordinate.b10g11r11_ufloat_pack32_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005975, "dEQP-VK.texture.swizzle.texture_coordinate.b10g11r11_ufloat_pack32_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005976, "dEQP-VK.texture.swizzle.texture_coordinate.e5b9g9r9_ufloat_pack32_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005977, "dEQP-VK.texture.swizzle.texture_coordinate.e5b9g9r9_ufloat_pack32_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005978, "dEQP-VK.texture.swizzle.texture_coordinate.e5b9g9r9_ufloat_pack32_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005979, "dEQP-VK.texture.swizzle.texture_coordinate.e5b9g9r9_ufloat_pack32_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005980, "dEQP-VK.texture.swizzle.texture_coordinate.e5b9g9r9_ufloat_pack32_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005981, "dEQP-VK.texture.swizzle.texture_coordinate.e5b9g9r9_ufloat_pack32_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005982, "dEQP-VK.texture.swizzle.texture_coordinate.b4g4r4a4_unorm_pack16_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005983, "dEQP-VK.texture.swizzle.texture_coordinate.b4g4r4a4_unorm_pack16_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005984, "dEQP-VK.texture.swizzle.texture_coordinate.b4g4r4a4_unorm_pack16_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005985, "dEQP-VK.texture.swizzle.texture_coordinate.b4g4r4a4_unorm_pack16_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005986, "dEQP-VK.texture.swizzle.texture_coordinate.b4g4r4a4_unorm_pack16_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005987, "dEQP-VK.texture.swizzle.texture_coordinate.b4g4r4a4_unorm_pack16_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005988, "dEQP-VK.texture.swizzle.texture_coordinate.b5g5r5a1_unorm_pack16_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005989, "dEQP-VK.texture.swizzle.texture_coordinate.b5g5r5a1_unorm_pack16_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005990, "dEQP-VK.texture.swizzle.texture_coordinate.b5g5r5a1_unorm_pack16_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005991, "dEQP-VK.texture.swizzle.texture_coordinate.b5g5r5a1_unorm_pack16_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005992, "dEQP-VK.texture.swizzle.texture_coordinate.b5g5r5a1_unorm_pack16_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005993, "dEQP-VK.texture.swizzle.texture_coordinate.b5g5r5a1_unorm_pack16_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005994, "dEQP-VK.texture.swizzle.texture_coordinate.a4r4g4b4_unorm_pack16_ext_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005995, "dEQP-VK.texture.swizzle.texture_coordinate.a4r4g4b4_unorm_pack16_ext_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005996, "dEQP-VK.texture.swizzle.texture_coordinate.a4r4g4b4_unorm_pack16_ext_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005997, "dEQP-VK.texture.swizzle.texture_coordinate.a4r4g4b4_unorm_pack16_ext_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005998, "dEQP-VK.texture.swizzle.texture_coordinate.a4r4g4b4_unorm_pack16_ext_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC005999, "dEQP-VK.texture.swizzle.texture_coordinate.a4r4g4b4_unorm_pack16_ext_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006000, "dEQP-VK.texture.swizzle.texture_coordinate.a4b4g4r4_unorm_pack16_ext_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006001, "dEQP-VK.texture.swizzle.texture_coordinate.a4b4g4r4_unorm_pack16_ext_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006002, "dEQP-VK.texture.swizzle.texture_coordinate.a4b4g4r4_unorm_pack16_ext_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006003, "dEQP-VK.texture.swizzle.texture_coordinate.a4b4g4r4_unorm_pack16_ext_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006004, "dEQP-VK.texture.swizzle.texture_coordinate.a4b4g4r4_unorm_pack16_ext_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006005, "dEQP-VK.texture.swizzle.texture_coordinate.a4b4g4r4_unorm_pack16_ext_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006006, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006007, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006008, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006009, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006010, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006011, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006012, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006013, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006014, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006015, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006016, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006017, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8_srgb_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006018, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006019, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006020, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006021, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006022, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006023, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006024, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006025, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006026, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006027, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006028, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006029, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a1_srgb_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006030, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006031, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006032, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006033, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006034, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006035, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006036, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006037, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006038, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006039, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006040, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006041, "dEQP-VK.texture.swizzle.texture_coordinate.etc2_r8g8b8a8_srgb_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006042, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006043, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006044, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006045, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006046, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006047, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006048, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_snorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006049, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_snorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006050, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_snorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006051, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_snorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006052, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_snorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006053, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11_snorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006054, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006055, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006056, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006057, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006058, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006059, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006060, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_snorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006061, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_snorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006062, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_snorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006063, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_snorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006064, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_snorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006065, "dEQP-VK.texture.swizzle.texture_coordinate.eac_r11g11_snorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006066, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006067, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006068, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006069, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006070, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006071, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006072, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006073, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006074, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006075, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006076, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006077, "dEQP-VK.texture.swizzle.texture_coordinate.astc_4x4_srgb_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006078, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006079, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006080, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006081, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006082, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006083, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006084, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006085, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006086, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006087, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006088, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006089, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x4_srgb_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006090, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006091, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006092, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006093, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006094, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006095, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006096, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006097, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006098, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006099, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006100, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006101, "dEQP-VK.texture.swizzle.texture_coordinate.astc_5x5_srgb_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006102, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006103, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006104, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006105, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006106, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006107, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006108, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006109, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006110, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006111, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006112, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006113, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x5_srgb_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006114, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006115, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006116, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006117, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006118, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006119, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006120, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006121, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006122, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006123, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006124, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006125, "dEQP-VK.texture.swizzle.texture_coordinate.astc_6x6_srgb_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006126, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006127, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006128, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006129, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006130, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006131, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006132, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006133, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006134, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006135, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006136, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006137, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x5_srgb_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006138, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006139, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006140, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006141, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006142, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006143, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006144, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006145, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006146, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006147, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006148, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006149, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x6_srgb_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006150, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006151, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006152, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006153, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006154, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006155, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006156, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006157, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006158, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006159, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006160, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006161, "dEQP-VK.texture.swizzle.texture_coordinate.astc_8x8_srgb_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006162, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006163, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006164, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006165, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006166, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006167, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006168, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006169, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006170, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006171, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006172, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006173, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x5_srgb_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006174, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006175, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006176, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006177, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006178, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006179, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006180, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006181, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006182, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006183, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006184, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006185, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x6_srgb_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006186, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006187, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006188, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006189, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006190, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006191, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006192, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006193, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006194, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006195, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006196, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006197, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x8_srgb_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006198, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006199, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006200, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006201, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006202, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006203, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006204, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006205, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006206, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006207, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006208, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006209, "dEQP-VK.texture.swizzle.texture_coordinate.astc_10x10_srgb_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006210, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006211, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006212, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006213, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006214, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006215, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006216, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006217, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006218, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006219, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006220, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006221, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x10_srgb_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006222, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_unorm_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006223, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_unorm_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006224, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_unorm_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006225, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_unorm_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006226, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_unorm_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006227, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_unorm_block_2d_npot_sparse_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006228, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_srgb_block_2d_npot_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006229, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_srgb_block_2d_npot_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006230, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_srgb_block_2d_npot_yy.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006231, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_srgb_block_2d_npot_sparse_yx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006232, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_srgb_block_2d_npot_sparse_xx.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC006233, "dEQP-VK.texture.swizzle.texture_coordinate.astc_12x12_srgb_block_2d_npot_sparse_yy.*");
