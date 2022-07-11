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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024217_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024217_2 "be.combinations.nearest_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024217, VkglTestCase_024217_1, VkglTestCase_024217_2);

#define VkglTestCase_024218_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024218_2 "e.combinations.nearest_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024218, VkglTestCase_024218_1, VkglTestCase_024218_2);

#define VkglTestCase_024219_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024219_2 "e.combinations.nearest_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024219, VkglTestCase_024219_1, VkglTestCase_024219_2);

#define VkglTestCase_024220_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024220_2 "e.combinations.nearest_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024220, VkglTestCase_024220_1, VkglTestCase_024220_2);

#define VkglTestCase_024221_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024221_2 "e.combinations.nearest_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024221, VkglTestCase_024221_1, VkglTestCase_024221_2);

#define VkglTestCase_024222_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024222_2 "e.combinations.nearest_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024222, VkglTestCase_024222_1, VkglTestCase_024222_2);

#define VkglTestCase_024223_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024223_2 "e.combinations.nearest_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024223, VkglTestCase_024223_1, VkglTestCase_024223_2);

#define VkglTestCase_024224_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024224_2 "e.combinations.nearest_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024224, VkglTestCase_024224_1, VkglTestCase_024224_2);

#define VkglTestCase_024225_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024225_2 "e.combinations.nearest_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024225, VkglTestCase_024225_1, VkglTestCase_024225_2);

#define VkglTestCase_024226_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024226_2 "be.combinations.nearest_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024226, VkglTestCase_024226_1, VkglTestCase_024226_2);

#define VkglTestCase_024227_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024227_2 "be.combinations.nearest_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024227, VkglTestCase_024227_1, VkglTestCase_024227_2);

#define VkglTestCase_024228_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024228_2 "be.combinations.nearest_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024228, VkglTestCase_024228_1, VkglTestCase_024228_2);

#define VkglTestCase_024229_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024229_2 "be.combinations.nearest_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024229, VkglTestCase_024229_1, VkglTestCase_024229_2);

#define VkglTestCase_024230_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024230_2 "e.combinations.nearest_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024230, VkglTestCase_024230_1, VkglTestCase_024230_2);

#define VkglTestCase_024231_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024231_2 "e.combinations.nearest_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024231, VkglTestCase_024231_1, VkglTestCase_024231_2);

#define VkglTestCase_024232_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024232_2 "be.combinations.nearest_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024232, VkglTestCase_024232_1, VkglTestCase_024232_2);

#define VkglTestCase_024233_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024233_2 "e.combinations.nearest_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024233, VkglTestCase_024233_1, VkglTestCase_024233_2);

#define VkglTestCase_024234_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024234_2 "e.combinations.nearest_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024234, VkglTestCase_024234_1, VkglTestCase_024234_2);

#define VkglTestCase_024235_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024235_2 "be.combinations.linear_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024235, VkglTestCase_024235_1, VkglTestCase_024235_2);

#define VkglTestCase_024236_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024236_2 "be.combinations.linear_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024236, VkglTestCase_024236_1, VkglTestCase_024236_2);

#define VkglTestCase_024237_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024237_2 "be.combinations.linear_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024237, VkglTestCase_024237_1, VkglTestCase_024237_2);

#define VkglTestCase_024238_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024238_2 "be.combinations.linear_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024238, VkglTestCase_024238_1, VkglTestCase_024238_2);

#define VkglTestCase_024239_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024239_2 "e.combinations.linear_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024239, VkglTestCase_024239_1, VkglTestCase_024239_2);

#define VkglTestCase_024240_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024240_2 "e.combinations.linear_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024240, VkglTestCase_024240_1, VkglTestCase_024240_2);

#define VkglTestCase_024241_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024241_2 "be.combinations.linear_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024241, VkglTestCase_024241_1, VkglTestCase_024241_2);

#define VkglTestCase_024242_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024242_2 "e.combinations.linear_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024242, VkglTestCase_024242_1, VkglTestCase_024242_2);

#define VkglTestCase_024243_1 "dEQP-GLES3.functional.texture.filtering.cub"
#define VkglTestCase_024243_2 "e.combinations.linear_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024243, VkglTestCase_024243_1, VkglTestCase_024243_2);

#define VkglTestCase_024244_1 "dEQP-GLES3.functional.texture.filtering.c"
#define VkglTestCase_024244_2 "ube.combinations.linear_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024244, VkglTestCase_024244_1, VkglTestCase_024244_2);

#define VkglTestCase_024245_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024245_2 "be.combinations.linear_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024245, VkglTestCase_024245_1, VkglTestCase_024245_2);

#define VkglTestCase_024246_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024246_2 "be.combinations.linear_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024246, VkglTestCase_024246_1, VkglTestCase_024246_2);

#define VkglTestCase_024247_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024247_2 "be.combinations.linear_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024247, VkglTestCase_024247_1, VkglTestCase_024247_2);

#define VkglTestCase_024248_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024248_2 "be.combinations.linear_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024248, VkglTestCase_024248_1, VkglTestCase_024248_2);

#define VkglTestCase_024249_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024249_2 "be.combinations.linear_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024249, VkglTestCase_024249_1, VkglTestCase_024249_2);

#define VkglTestCase_024250_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024250_2 "be.combinations.linear_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024250, VkglTestCase_024250_1, VkglTestCase_024250_2);

#define VkglTestCase_024251_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024251_2 "be.combinations.linear_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024251, VkglTestCase_024251_1, VkglTestCase_024251_2);

#define VkglTestCase_024252_1 "dEQP-GLES3.functional.texture.filtering.cu"
#define VkglTestCase_024252_2 "be.combinations.linear_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024252, VkglTestCase_024252_1, VkglTestCase_024252_2);

#define VkglTestCase_024253_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024253_2 "nations.nearest_mipmap_nearest_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024253, VkglTestCase_024253_1, VkglTestCase_024253_2);

#define VkglTestCase_024254_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024254_2 "nations.nearest_mipmap_nearest_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024254, VkglTestCase_024254_1, VkglTestCase_024254_2);

#define VkglTestCase_024255_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024255_2 "nations.nearest_mipmap_nearest_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024255, VkglTestCase_024255_1, VkglTestCase_024255_2);

#define VkglTestCase_024256_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024256_2 "nations.nearest_mipmap_nearest_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024256, VkglTestCase_024256_1, VkglTestCase_024256_2);

#define VkglTestCase_024257_1 "dEQP-GLES3.functional.texture.filtering.cube.combin"
#define VkglTestCase_024257_2 "ations.nearest_mipmap_nearest_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024257, VkglTestCase_024257_1, VkglTestCase_024257_2);

#define VkglTestCase_024258_1 "dEQP-GLES3.functional.texture.filtering.cube.combin"
#define VkglTestCase_024258_2 "ations.nearest_mipmap_nearest_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024258, VkglTestCase_024258_1, VkglTestCase_024258_2);

#define VkglTestCase_024259_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024259_2 "nations.nearest_mipmap_nearest_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024259, VkglTestCase_024259_1, VkglTestCase_024259_2);

#define VkglTestCase_024260_1 "dEQP-GLES3.functional.texture.filtering.cube.combin"
#define VkglTestCase_024260_2 "ations.nearest_mipmap_nearest_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024260, VkglTestCase_024260_1, VkglTestCase_024260_2);

#define VkglTestCase_024261_1 "dEQP-GLES3.functional.texture.filtering.cube.combin"
#define VkglTestCase_024261_2 "ations.nearest_mipmap_nearest_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024261, VkglTestCase_024261_1, VkglTestCase_024261_2);

#define VkglTestCase_024262_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024262_2 "inations.nearest_mipmap_nearest_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024262, VkglTestCase_024262_1, VkglTestCase_024262_2);

#define VkglTestCase_024263_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024263_2 "nations.nearest_mipmap_nearest_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024263, VkglTestCase_024263_1, VkglTestCase_024263_2);

#define VkglTestCase_024264_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024264_2 "nations.nearest_mipmap_nearest_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024264, VkglTestCase_024264_1, VkglTestCase_024264_2);

#define VkglTestCase_024265_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024265_2 "nations.nearest_mipmap_nearest_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024265, VkglTestCase_024265_1, VkglTestCase_024265_2);

#define VkglTestCase_024266_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024266_2 "nations.nearest_mipmap_nearest_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024266, VkglTestCase_024266_1, VkglTestCase_024266_2);

#define VkglTestCase_024267_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024267_2 "nations.nearest_mipmap_nearest_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024267, VkglTestCase_024267_1, VkglTestCase_024267_2);

#define VkglTestCase_024268_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024268_2 "nations.nearest_mipmap_nearest_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024268, VkglTestCase_024268_1, VkglTestCase_024268_2);

#define VkglTestCase_024269_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024269_2 "nations.nearest_mipmap_nearest_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024269, VkglTestCase_024269_1, VkglTestCase_024269_2);

#define VkglTestCase_024270_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024270_2 "nations.nearest_mipmap_nearest_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024270, VkglTestCase_024270_1, VkglTestCase_024270_2);

#define VkglTestCase_024271_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024271_2 "inations.linear_mipmap_nearest_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024271, VkglTestCase_024271_1, VkglTestCase_024271_2);

#define VkglTestCase_024272_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024272_2 "nations.linear_mipmap_nearest_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024272, VkglTestCase_024272_1, VkglTestCase_024272_2);

#define VkglTestCase_024273_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024273_2 "nations.linear_mipmap_nearest_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024273, VkglTestCase_024273_1, VkglTestCase_024273_2);

#define VkglTestCase_024274_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024274_2 "nations.linear_mipmap_nearest_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024274, VkglTestCase_024274_1, VkglTestCase_024274_2);

#define VkglTestCase_024275_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024275_2 "nations.linear_mipmap_nearest_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024275, VkglTestCase_024275_1, VkglTestCase_024275_2);

#define VkglTestCase_024276_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024276_2 "nations.linear_mipmap_nearest_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024276, VkglTestCase_024276_1, VkglTestCase_024276_2);

#define VkglTestCase_024277_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024277_2 "nations.linear_mipmap_nearest_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024277, VkglTestCase_024277_1, VkglTestCase_024277_2);

#define VkglTestCase_024278_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024278_2 "nations.linear_mipmap_nearest_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024278, VkglTestCase_024278_1, VkglTestCase_024278_2);

#define VkglTestCase_024279_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024279_2 "nations.linear_mipmap_nearest_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024279, VkglTestCase_024279_1, VkglTestCase_024279_2);

#define VkglTestCase_024280_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024280_2 "inations.linear_mipmap_nearest_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024280, VkglTestCase_024280_1, VkglTestCase_024280_2);

#define VkglTestCase_024281_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024281_2 "inations.linear_mipmap_nearest_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024281, VkglTestCase_024281_1, VkglTestCase_024281_2);

#define VkglTestCase_024282_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024282_2 "inations.linear_mipmap_nearest_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024282, VkglTestCase_024282_1, VkglTestCase_024282_2);

#define VkglTestCase_024283_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024283_2 "inations.linear_mipmap_nearest_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024283, VkglTestCase_024283_1, VkglTestCase_024283_2);

#define VkglTestCase_024284_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024284_2 "nations.linear_mipmap_nearest_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024284, VkglTestCase_024284_1, VkglTestCase_024284_2);

#define VkglTestCase_024285_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024285_2 "nations.linear_mipmap_nearest_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024285, VkglTestCase_024285_1, VkglTestCase_024285_2);

#define VkglTestCase_024286_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024286_2 "inations.linear_mipmap_nearest_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024286, VkglTestCase_024286_1, VkglTestCase_024286_2);

#define VkglTestCase_024287_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024287_2 "nations.linear_mipmap_nearest_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024287, VkglTestCase_024287_1, VkglTestCase_024287_2);

#define VkglTestCase_024288_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024288_2 "nations.linear_mipmap_nearest_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024288, VkglTestCase_024288_1, VkglTestCase_024288_2);

#define VkglTestCase_024289_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024289_2 "inations.nearest_mipmap_linear_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024289, VkglTestCase_024289_1, VkglTestCase_024289_2);

#define VkglTestCase_024290_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024290_2 "nations.nearest_mipmap_linear_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024290, VkglTestCase_024290_1, VkglTestCase_024290_2);

#define VkglTestCase_024291_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024291_2 "nations.nearest_mipmap_linear_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024291, VkglTestCase_024291_1, VkglTestCase_024291_2);

#define VkglTestCase_024292_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024292_2 "nations.nearest_mipmap_linear_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024292, VkglTestCase_024292_1, VkglTestCase_024292_2);

#define VkglTestCase_024293_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024293_2 "nations.nearest_mipmap_linear_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024293, VkglTestCase_024293_1, VkglTestCase_024293_2);

#define VkglTestCase_024294_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024294_2 "nations.nearest_mipmap_linear_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024294, VkglTestCase_024294_1, VkglTestCase_024294_2);

#define VkglTestCase_024295_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024295_2 "nations.nearest_mipmap_linear_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024295, VkglTestCase_024295_1, VkglTestCase_024295_2);

#define VkglTestCase_024296_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024296_2 "nations.nearest_mipmap_linear_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024296, VkglTestCase_024296_1, VkglTestCase_024296_2);

#define VkglTestCase_024297_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024297_2 "nations.nearest_mipmap_linear_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024297, VkglTestCase_024297_1, VkglTestCase_024297_2);

#define VkglTestCase_024298_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024298_2 "inations.nearest_mipmap_linear_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024298, VkglTestCase_024298_1, VkglTestCase_024298_2);

#define VkglTestCase_024299_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024299_2 "inations.nearest_mipmap_linear_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024299, VkglTestCase_024299_1, VkglTestCase_024299_2);

#define VkglTestCase_024300_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024300_2 "inations.nearest_mipmap_linear_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024300, VkglTestCase_024300_1, VkglTestCase_024300_2);

#define VkglTestCase_024301_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024301_2 "inations.nearest_mipmap_linear_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024301, VkglTestCase_024301_1, VkglTestCase_024301_2);

#define VkglTestCase_024302_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024302_2 "nations.nearest_mipmap_linear_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024302, VkglTestCase_024302_1, VkglTestCase_024302_2);

#define VkglTestCase_024303_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024303_2 "nations.nearest_mipmap_linear_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024303, VkglTestCase_024303_1, VkglTestCase_024303_2);

#define VkglTestCase_024304_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024304_2 "inations.nearest_mipmap_linear_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024304, VkglTestCase_024304_1, VkglTestCase_024304_2);

#define VkglTestCase_024305_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024305_2 "nations.nearest_mipmap_linear_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024305, VkglTestCase_024305_1, VkglTestCase_024305_2);

#define VkglTestCase_024306_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024306_2 "nations.nearest_mipmap_linear_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024306, VkglTestCase_024306_1, VkglTestCase_024306_2);

#define VkglTestCase_024307_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024307_2 "inations.linear_mipmap_linear_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024307, VkglTestCase_024307_1, VkglTestCase_024307_2);

#define VkglTestCase_024308_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024308_2 "inations.linear_mipmap_linear_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024308, VkglTestCase_024308_1, VkglTestCase_024308_2);

#define VkglTestCase_024309_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024309_2 "inations.linear_mipmap_linear_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024309, VkglTestCase_024309_1, VkglTestCase_024309_2);

#define VkglTestCase_024310_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024310_2 "inations.linear_mipmap_linear_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024310, VkglTestCase_024310_1, VkglTestCase_024310_2);

#define VkglTestCase_024311_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024311_2 "nations.linear_mipmap_linear_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024311, VkglTestCase_024311_1, VkglTestCase_024311_2);

#define VkglTestCase_024312_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024312_2 "nations.linear_mipmap_linear_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024312, VkglTestCase_024312_1, VkglTestCase_024312_2);

#define VkglTestCase_024313_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024313_2 "inations.linear_mipmap_linear_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024313, VkglTestCase_024313_1, VkglTestCase_024313_2);

#define VkglTestCase_024314_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024314_2 "nations.linear_mipmap_linear_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024314, VkglTestCase_024314_1, VkglTestCase_024314_2);

#define VkglTestCase_024315_1 "dEQP-GLES3.functional.texture.filtering.cube.combi"
#define VkglTestCase_024315_2 "nations.linear_mipmap_linear_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024315, VkglTestCase_024315_1, VkglTestCase_024315_2);

#define VkglTestCase_024316_1 "dEQP-GLES3.functional.texture.filtering.cube.com"
#define VkglTestCase_024316_2 "binations.linear_mipmap_linear_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024316, VkglTestCase_024316_1, VkglTestCase_024316_2);

#define VkglTestCase_024317_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024317_2 "inations.linear_mipmap_linear_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024317, VkglTestCase_024317_1, VkglTestCase_024317_2);

#define VkglTestCase_024318_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024318_2 "inations.linear_mipmap_linear_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024318, VkglTestCase_024318_1, VkglTestCase_024318_2);

#define VkglTestCase_024319_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024319_2 "inations.linear_mipmap_linear_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024319, VkglTestCase_024319_1, VkglTestCase_024319_2);

#define VkglTestCase_024320_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024320_2 "inations.linear_mipmap_linear_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024320, VkglTestCase_024320_1, VkglTestCase_024320_2);

#define VkglTestCase_024321_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024321_2 "inations.linear_mipmap_linear_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024321, VkglTestCase_024321_1, VkglTestCase_024321_2);

#define VkglTestCase_024322_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024322_2 "inations.linear_mipmap_linear_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024322, VkglTestCase_024322_1, VkglTestCase_024322_2);

#define VkglTestCase_024323_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024323_2 "inations.linear_mipmap_linear_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024323, VkglTestCase_024323_1, VkglTestCase_024323_2);

#define VkglTestCase_024324_1 "dEQP-GLES3.functional.texture.filtering.cube.comb"
#define VkglTestCase_024324_2 "inations.linear_mipmap_linear_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024324, VkglTestCase_024324_1, VkglTestCase_024324_2);
