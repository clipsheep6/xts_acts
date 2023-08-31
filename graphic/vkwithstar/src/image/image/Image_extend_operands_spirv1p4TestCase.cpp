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
#include "../ImageBaseFunc.h"
#include "../ActsImage0007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsImage0007TS, TC012187, "dEQP-VK.image.extend_operands_spirv1p4.r32g32b32a32_uint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012188, "dEQP-VK.image.extend_operands_spirv1p4.r32g32b32a32_uint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012189, "dEQP-VK.image.extend_operands_spirv1p4.r16g16b16a16_uint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012190, "dEQP-VK.image.extend_operands_spirv1p4.r16g16b16a16_uint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012191, "dEQP-VK.image.extend_operands_spirv1p4.r8g8b8a8_uint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012192, "dEQP-VK.image.extend_operands_spirv1p4.r8g8b8a8_uint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012193, "dEQP-VK.image.extend_operands_spirv1p4.r32_uint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012194, "dEQP-VK.image.extend_operands_spirv1p4.r32_uint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012195, "dEQP-VK.image.extend_operands_spirv1p4.r32g32b32a32_sint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012196, "dEQP-VK.image.extend_operands_spirv1p4.r32g32b32a32_sint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012197, "dEQP-VK.image.extend_operands_spirv1p4.r16g16b16a16_sint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012198, "dEQP-VK.image.extend_operands_spirv1p4.r16g16b16a16_sint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012199, "dEQP-VK.image.extend_operands_spirv1p4.r8g8b8a8_sint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012200, "dEQP-VK.image.extend_operands_spirv1p4.r8g8b8a8_sint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012201, "dEQP-VK.image.extend_operands_spirv1p4.r32_sint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012202, "dEQP-VK.image.extend_operands_spirv1p4.r32_sint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012203, "dEQP-VK.image.extend_operands_spirv1p4.a2b10g10r10_uint_pack32.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012204, "dEQP-VK.image.extend_operands_spirv1p4.a2b10g10r10_uint_pack32.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012205, "dEQP-VK.image.extend_operands_spirv1p4.r32g32_uint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012206, "dEQP-VK.image.extend_operands_spirv1p4.r32g32_uint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012207, "dEQP-VK.image.extend_operands_spirv1p4.r16g16_uint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012208, "dEQP-VK.image.extend_operands_spirv1p4.r16g16_uint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012209, "dEQP-VK.image.extend_operands_spirv1p4.r16_uint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012210, "dEQP-VK.image.extend_operands_spirv1p4.r16_uint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012211, "dEQP-VK.image.extend_operands_spirv1p4.r8g8_uint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012212, "dEQP-VK.image.extend_operands_spirv1p4.r8g8_uint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012213, "dEQP-VK.image.extend_operands_spirv1p4.r8_uint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012214, "dEQP-VK.image.extend_operands_spirv1p4.r8_uint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012215, "dEQP-VK.image.extend_operands_spirv1p4.r32g32_sint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012216, "dEQP-VK.image.extend_operands_spirv1p4.r32g32_sint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012217, "dEQP-VK.image.extend_operands_spirv1p4.r16g16_sint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012218, "dEQP-VK.image.extend_operands_spirv1p4.r16g16_sint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012219, "dEQP-VK.image.extend_operands_spirv1p4.r16_sint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012220, "dEQP-VK.image.extend_operands_spirv1p4.r16_sint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012221, "dEQP-VK.image.extend_operands_spirv1p4.r8g8_sint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012222, "dEQP-VK.image.extend_operands_spirv1p4.r8g8_sint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012223, "dEQP-VK.image.extend_operands_spirv1p4.r8_sint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012224, "dEQP-VK.image.extend_operands_spirv1p4.r8_sint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012225, "dEQP-VK.image.extend_operands_spirv1p4.r64_sint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012226, "dEQP-VK.image.extend_operands_spirv1p4.r64_sint.write.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012227, "dEQP-VK.image.extend_operands_spirv1p4.r64_uint.read.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012228, "dEQP-VK.image.extend_operands_spirv1p4.r64_uint.write.*");
