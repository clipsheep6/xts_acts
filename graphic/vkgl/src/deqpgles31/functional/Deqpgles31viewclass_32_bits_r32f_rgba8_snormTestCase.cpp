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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026680,
        "dEQP-GLES31.functional.copy_image.non_compressed.view",
        "class_32_bits.r32f_rgba8_snorm.texture2d_to_texture2d");

static SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026681,
        "dEQP-GLES31.functional.copy_image.non_compressed.view",
        "class_32_bits.r32f_rgba8_snorm.texture2d_to_texture3d");

static SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026682,
        "dEQP-GLES31.functional.copy_image.non_compressed.vie",
        "wclass_32_bits.r32f_rgba8_snorm.texture2d_to_cubemap");

static SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026683,
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla",
        "ss_32_bits.r32f_rgba8_snorm.texture2d_to_texture2d_array");

static SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026684,
        "dEQP-GLES31.functional.copy_image.non_compressed.view",
        "class_32_bits.r32f_rgba8_snorm.texture3d_to_texture2d");

static SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026685,
        "dEQP-GLES31.functional.copy_image.non_compressed.view",
        "class_32_bits.r32f_rgba8_snorm.texture3d_to_texture3d");

static SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026686,
        "dEQP-GLES31.functional.copy_image.non_compressed.vie",
        "wclass_32_bits.r32f_rgba8_snorm.texture3d_to_cubemap");

static SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026687,
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla",
        "ss_32_bits.r32f_rgba8_snorm.texture3d_to_texture2d_array");

static SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026688,
        "dEQP-GLES31.functional.copy_image.non_compressed.vie",
        "wclass_32_bits.r32f_rgba8_snorm.cubemap_to_texture2d");

static SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026689,
        "dEQP-GLES31.functional.copy_image.non_compressed.vie",
        "wclass_32_bits.r32f_rgba8_snorm.cubemap_to_texture3d");

static SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026690,
        "dEQP-GLES31.functional.copy_image.non_compressed.vi",
        "ewclass_32_bits.r32f_rgba8_snorm.cubemap_to_cubemap");

static SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026691,
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl",
        "ass_32_bits.r32f_rgba8_snorm.cubemap_to_texture2d_array");

static SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026692,
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla",
        "ss_32_bits.r32f_rgba8_snorm.texture2d_array_to_texture2d");

static SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026693,
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcla",
        "ss_32_bits.r32f_rgba8_snorm.texture2d_array_to_texture3d");

static SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026694,
        "dEQP-GLES31.functional.copy_image.non_compressed.viewcl",
        "ass_32_bits.r32f_rgba8_snorm.texture2d_array_to_cubemap");

static SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026695,
        "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_",
        "32_bits.r32f_rgba8_snorm.texture2d_array_to_texture2d_array");
