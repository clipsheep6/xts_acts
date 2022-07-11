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
#include "../ActsKhrgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000769_1 "KHR-GLES31.core.layout_binding.sampler"
#define VkglTestCase_000769_2 "2D_layout_binding_texture_ComputeShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000769, VkglTestCase_000769_1, VkglTestCase_000769_2);

#define VkglTestCase_000770_1 "KHR-GLES31.core.layout_binding.sampler"
#define VkglTestCase_000770_2 "3D_layout_binding_texture_ComputeShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000770, VkglTestCase_000770_1, VkglTestCase_000770_2);

#define VkglTestCase_000771_1 "KHR-GLES31.core.layout_binding.sampler2DA"
#define VkglTestCase_000771_2 "rray_layout_binding_texture_ComputeShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000771, VkglTestCase_000771_1, VkglTestCase_000771_2);

#define VkglTestCase_000772_1 "KHR-GLES31.core.layout_binding.image2D"
#define VkglTestCase_000772_2 "_layout_binding_imageLoad_ComputeShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000772, VkglTestCase_000772_1, VkglTestCase_000772_2);

#define VkglTestCase_000773_1 "KHR-GLES31.core.layout_binding.atomic_u"
#define VkglTestCase_000773_2 "int_layout_binding_atomic_ComputeShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000773, VkglTestCase_000773_1, VkglTestCase_000773_2);

#define VkglTestCase_000774_1 "KHR-GLES31.core.layout_binding.bloc"
#define VkglTestCase_000774_2 "k_layout_binding_block_ComputeShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000774, VkglTestCase_000774_1, VkglTestCase_000774_2);

#define VkglTestCase_000775_1 "KHR-GLES31.core.layout_binding.buffer_"
#define VkglTestCase_000775_2 "layout_binding_atomicAdd_ComputeShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000775, VkglTestCase_000775_1, VkglTestCase_000775_2);

#define VkglTestCase_000776_1 "KHR-GLES31.core.layout_binding.sampler2"
#define VkglTestCase_000776_2 "D_layout_binding_texture_FragmentShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000776, VkglTestCase_000776_1, VkglTestCase_000776_2);

#define VkglTestCase_000777_1 "KHR-GLES31.core.layout_binding.sampler3"
#define VkglTestCase_000777_2 "D_layout_binding_texture_FragmentShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000777, VkglTestCase_000777_1, VkglTestCase_000777_2);

#define VkglTestCase_000778_1 "KHR-GLES31.core.layout_binding.sampler2DA"
#define VkglTestCase_000778_2 "rray_layout_binding_texture_FragmentShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000778, VkglTestCase_000778_1, VkglTestCase_000778_2);

#define VkglTestCase_000779_1 "KHR-GLES31.core.layout_binding.image2D_"
#define VkglTestCase_000779_2 "layout_binding_imageLoad_FragmentShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000779, VkglTestCase_000779_1, VkglTestCase_000779_2);

#define VkglTestCase_000780_1 "KHR-GLES31.core.layout_binding.atomic_u"
#define VkglTestCase_000780_2 "int_layout_binding_atomic_FragmentShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000780, VkglTestCase_000780_1, VkglTestCase_000780_2);

#define VkglTestCase_000781_1 "KHR-GLES31.core.layout_binding.block"
#define VkglTestCase_000781_2 "_layout_binding_block_FragmentShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000781, VkglTestCase_000781_1, VkglTestCase_000781_2);

#define VkglTestCase_000782_1 "KHR-GLES31.core.layout_binding.buffer_"
#define VkglTestCase_000782_2 "layout_binding_atomicAdd_FragmentShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000782, VkglTestCase_000782_1, VkglTestCase_000782_2);

#define VkglTestCase_000783_1 "KHR-GLES31.core.layout_binding.sampler"
#define VkglTestCase_000783_2 "2D_layout_binding_texture_VertexShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000783, VkglTestCase_000783_1, VkglTestCase_000783_2);

#define VkglTestCase_000784_1 "KHR-GLES31.core.layout_binding.sampler"
#define VkglTestCase_000784_2 "3D_layout_binding_texture_VertexShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000784, VkglTestCase_000784_1, VkglTestCase_000784_2);

#define VkglTestCase_000785_1 "KHR-GLES31.core.layout_binding.sampler2D"
#define VkglTestCase_000785_2 "Array_layout_binding_texture_VertexShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000785, VkglTestCase_000785_1, VkglTestCase_000785_2);

#define VkglTestCase_000786_1 "KHR-GLES31.core.layout_binding.image2D"
#define VkglTestCase_000786_2 "_layout_binding_imageLoad_VertexShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000786, VkglTestCase_000786_1, VkglTestCase_000786_2);

#define VkglTestCase_000787_1 "KHR-GLES31.core.layout_binding.atomic_"
#define VkglTestCase_000787_2 "uint_layout_binding_atomic_VertexShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000787, VkglTestCase_000787_1, VkglTestCase_000787_2);

#define VkglTestCase_000788_1 "KHR-GLES31.core.layout_binding.bloc"
#define VkglTestCase_000788_2 "k_layout_binding_block_VertexShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000788, VkglTestCase_000788_1, VkglTestCase_000788_2);

#define VkglTestCase_000789_1 "KHR-GLES31.core.layout_binding.buffer"
#define VkglTestCase_000789_2 "_layout_binding_atomicAdd_VertexShader"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000789, VkglTestCase_000789_1, VkglTestCase_000789_2);
