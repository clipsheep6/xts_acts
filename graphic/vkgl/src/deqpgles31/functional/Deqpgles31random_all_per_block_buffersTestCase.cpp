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
#include "../ActsDeqpgles310011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010239_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010239_2 "ut.random.all_per_block_buffers.0"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010239, VkglTestCase_010239_1, VkglTestCase_010239_2);

#define VkglTestCase_010240_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010240_2 "ut.random.all_per_block_buffers.1"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010240, VkglTestCase_010240_1, VkglTestCase_010240_2);

#define VkglTestCase_010241_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010241_2 "ut.random.all_per_block_buffers.2"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010241, VkglTestCase_010241_1, VkglTestCase_010241_2);

#define VkglTestCase_010242_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010242_2 "ut.random.all_per_block_buffers.3"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010242, VkglTestCase_010242_1, VkglTestCase_010242_2);

#define VkglTestCase_010243_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010243_2 "ut.random.all_per_block_buffers.4"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010243, VkglTestCase_010243_1, VkglTestCase_010243_2);

#define VkglTestCase_010244_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010244_2 "ut.random.all_per_block_buffers.5"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010244, VkglTestCase_010244_1, VkglTestCase_010244_2);

#define VkglTestCase_010245_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010245_2 "ut.random.all_per_block_buffers.6"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010245, VkglTestCase_010245_1, VkglTestCase_010245_2);

#define VkglTestCase_010246_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010246_2 "ut.random.all_per_block_buffers.7"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010246, VkglTestCase_010246_1, VkglTestCase_010246_2);

#define VkglTestCase_010247_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010247_2 "ut.random.all_per_block_buffers.8"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010247, VkglTestCase_010247_1, VkglTestCase_010247_2);

#define VkglTestCase_010248_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010248_2 "ut.random.all_per_block_buffers.9"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010248, VkglTestCase_010248_1, VkglTestCase_010248_2);

#define VkglTestCase_010249_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010249_2 "t.random.all_per_block_buffers.10"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010249, VkglTestCase_010249_1, VkglTestCase_010249_2);

#define VkglTestCase_010250_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010250_2 "t.random.all_per_block_buffers.11"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010250, VkglTestCase_010250_1, VkglTestCase_010250_2);

#define VkglTestCase_010251_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010251_2 "t.random.all_per_block_buffers.12"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010251, VkglTestCase_010251_1, VkglTestCase_010251_2);

#define VkglTestCase_010252_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010252_2 "t.random.all_per_block_buffers.13"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010252, VkglTestCase_010252_1, VkglTestCase_010252_2);

#define VkglTestCase_010253_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010253_2 "t.random.all_per_block_buffers.14"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010253, VkglTestCase_010253_1, VkglTestCase_010253_2);

#define VkglTestCase_010254_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010254_2 "t.random.all_per_block_buffers.15"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010254, VkglTestCase_010254_1, VkglTestCase_010254_2);

#define VkglTestCase_010255_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010255_2 "t.random.all_per_block_buffers.16"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010255, VkglTestCase_010255_1, VkglTestCase_010255_2);

#define VkglTestCase_010256_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010256_2 "t.random.all_per_block_buffers.17"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010256, VkglTestCase_010256_1, VkglTestCase_010256_2);

#define VkglTestCase_010257_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010257_2 "t.random.all_per_block_buffers.18"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010257, VkglTestCase_010257_1, VkglTestCase_010257_2);

#define VkglTestCase_010258_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010258_2 "t.random.all_per_block_buffers.19"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010258, VkglTestCase_010258_1, VkglTestCase_010258_2);

#define VkglTestCase_010259_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010259_2 "t.random.all_per_block_buffers.20"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010259, VkglTestCase_010259_1, VkglTestCase_010259_2);

#define VkglTestCase_010260_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010260_2 "t.random.all_per_block_buffers.21"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010260, VkglTestCase_010260_1, VkglTestCase_010260_2);

#define VkglTestCase_010261_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010261_2 "t.random.all_per_block_buffers.22"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010261, VkglTestCase_010261_1, VkglTestCase_010261_2);

#define VkglTestCase_010262_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010262_2 "t.random.all_per_block_buffers.23"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010262, VkglTestCase_010262_1, VkglTestCase_010262_2);

#define VkglTestCase_010263_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010263_2 "t.random.all_per_block_buffers.24"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010263, VkglTestCase_010263_1, VkglTestCase_010263_2);

#define VkglTestCase_010264_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010264_2 "t.random.all_per_block_buffers.25"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010264, VkglTestCase_010264_1, VkglTestCase_010264_2);

#define VkglTestCase_010265_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010265_2 "t.random.all_per_block_buffers.26"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010265, VkglTestCase_010265_1, VkglTestCase_010265_2);

#define VkglTestCase_010266_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010266_2 "t.random.all_per_block_buffers.27"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010266, VkglTestCase_010266_1, VkglTestCase_010266_2);

#define VkglTestCase_010267_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010267_2 "t.random.all_per_block_buffers.28"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010267, VkglTestCase_010267_1, VkglTestCase_010267_2);

#define VkglTestCase_010268_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010268_2 "t.random.all_per_block_buffers.29"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010268, VkglTestCase_010268_1, VkglTestCase_010268_2);

#define VkglTestCase_010269_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010269_2 "t.random.all_per_block_buffers.30"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010269, VkglTestCase_010269_1, VkglTestCase_010269_2);

#define VkglTestCase_010270_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010270_2 "t.random.all_per_block_buffers.31"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010270, VkglTestCase_010270_1, VkglTestCase_010270_2);

#define VkglTestCase_010271_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010271_2 "t.random.all_per_block_buffers.32"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010271, VkglTestCase_010271_1, VkglTestCase_010271_2);

#define VkglTestCase_010272_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010272_2 "t.random.all_per_block_buffers.33"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010272, VkglTestCase_010272_1, VkglTestCase_010272_2);

#define VkglTestCase_010273_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010273_2 "t.random.all_per_block_buffers.34"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010273, VkglTestCase_010273_1, VkglTestCase_010273_2);

#define VkglTestCase_010274_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010274_2 "t.random.all_per_block_buffers.35"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010274, VkglTestCase_010274_1, VkglTestCase_010274_2);

#define VkglTestCase_010275_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010275_2 "t.random.all_per_block_buffers.36"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010275, VkglTestCase_010275_1, VkglTestCase_010275_2);

#define VkglTestCase_010276_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010276_2 "t.random.all_per_block_buffers.37"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010276, VkglTestCase_010276_1, VkglTestCase_010276_2);

#define VkglTestCase_010277_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010277_2 "t.random.all_per_block_buffers.38"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010277, VkglTestCase_010277_1, VkglTestCase_010277_2);

#define VkglTestCase_010278_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010278_2 "t.random.all_per_block_buffers.39"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010278, VkglTestCase_010278_1, VkglTestCase_010278_2);

#define VkglTestCase_010279_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010279_2 "t.random.all_per_block_buffers.40"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010279, VkglTestCase_010279_1, VkglTestCase_010279_2);

#define VkglTestCase_010280_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010280_2 "t.random.all_per_block_buffers.41"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010280, VkglTestCase_010280_1, VkglTestCase_010280_2);

#define VkglTestCase_010281_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010281_2 "t.random.all_per_block_buffers.42"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010281, VkglTestCase_010281_1, VkglTestCase_010281_2);

#define VkglTestCase_010282_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010282_2 "t.random.all_per_block_buffers.43"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010282, VkglTestCase_010282_1, VkglTestCase_010282_2);

#define VkglTestCase_010283_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010283_2 "t.random.all_per_block_buffers.44"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010283, VkglTestCase_010283_1, VkglTestCase_010283_2);

#define VkglTestCase_010284_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010284_2 "t.random.all_per_block_buffers.45"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010284, VkglTestCase_010284_1, VkglTestCase_010284_2);

#define VkglTestCase_010285_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010285_2 "t.random.all_per_block_buffers.46"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010285, VkglTestCase_010285_1, VkglTestCase_010285_2);

#define VkglTestCase_010286_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010286_2 "t.random.all_per_block_buffers.47"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010286, VkglTestCase_010286_1, VkglTestCase_010286_2);

#define VkglTestCase_010287_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010287_2 "t.random.all_per_block_buffers.48"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010287, VkglTestCase_010287_1, VkglTestCase_010287_2);

#define VkglTestCase_010288_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010288_2 "t.random.all_per_block_buffers.49"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010288, VkglTestCase_010288_1, VkglTestCase_010288_2);

#define VkglTestCase_011130_1 "dEQP-GLES31.functional.ubo.r"
#define VkglTestCase_011130_2 "andom.all_per_block_buffers.0"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011130, VkglTestCase_011130_1, VkglTestCase_011130_2);

#define VkglTestCase_011131_1 "dEQP-GLES31.functional.ubo.r"
#define VkglTestCase_011131_2 "andom.all_per_block_buffers.1"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011131, VkglTestCase_011131_1, VkglTestCase_011131_2);

#define VkglTestCase_011132_1 "dEQP-GLES31.functional.ubo.r"
#define VkglTestCase_011132_2 "andom.all_per_block_buffers.2"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011132, VkglTestCase_011132_1, VkglTestCase_011132_2);

#define VkglTestCase_011133_1 "dEQP-GLES31.functional.ubo.r"
#define VkglTestCase_011133_2 "andom.all_per_block_buffers.3"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011133, VkglTestCase_011133_1, VkglTestCase_011133_2);

#define VkglTestCase_011134_1 "dEQP-GLES31.functional.ubo.r"
#define VkglTestCase_011134_2 "andom.all_per_block_buffers.4"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011134, VkglTestCase_011134_1, VkglTestCase_011134_2);

#define VkglTestCase_011135_1 "dEQP-GLES31.functional.ubo.r"
#define VkglTestCase_011135_2 "andom.all_per_block_buffers.5"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011135, VkglTestCase_011135_1, VkglTestCase_011135_2);

#define VkglTestCase_011136_1 "dEQP-GLES31.functional.ubo.r"
#define VkglTestCase_011136_2 "andom.all_per_block_buffers.6"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011136, VkglTestCase_011136_1, VkglTestCase_011136_2);

#define VkglTestCase_011137_1 "dEQP-GLES31.functional.ubo.r"
#define VkglTestCase_011137_2 "andom.all_per_block_buffers.7"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011137, VkglTestCase_011137_1, VkglTestCase_011137_2);

#define VkglTestCase_011138_1 "dEQP-GLES31.functional.ubo.r"
#define VkglTestCase_011138_2 "andom.all_per_block_buffers.8"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011138, VkglTestCase_011138_1, VkglTestCase_011138_2);

#define VkglTestCase_011139_1 "dEQP-GLES31.functional.ubo.r"
#define VkglTestCase_011139_2 "andom.all_per_block_buffers.9"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011139, VkglTestCase_011139_1, VkglTestCase_011139_2);

#define VkglTestCase_011140_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011140_2 "ndom.all_per_block_buffers.10"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011140, VkglTestCase_011140_1, VkglTestCase_011140_2);

#define VkglTestCase_011141_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011141_2 "ndom.all_per_block_buffers.11"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011141, VkglTestCase_011141_1, VkglTestCase_011141_2);

#define VkglTestCase_011142_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011142_2 "ndom.all_per_block_buffers.12"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011142, VkglTestCase_011142_1, VkglTestCase_011142_2);

#define VkglTestCase_011143_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011143_2 "ndom.all_per_block_buffers.13"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011143, VkglTestCase_011143_1, VkglTestCase_011143_2);

#define VkglTestCase_011144_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011144_2 "ndom.all_per_block_buffers.14"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011144, VkglTestCase_011144_1, VkglTestCase_011144_2);

#define VkglTestCase_011145_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011145_2 "ndom.all_per_block_buffers.15"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011145, VkglTestCase_011145_1, VkglTestCase_011145_2);

#define VkglTestCase_011146_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011146_2 "ndom.all_per_block_buffers.16"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011146, VkglTestCase_011146_1, VkglTestCase_011146_2);

#define VkglTestCase_011147_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011147_2 "ndom.all_per_block_buffers.17"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011147, VkglTestCase_011147_1, VkglTestCase_011147_2);

#define VkglTestCase_011148_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011148_2 "ndom.all_per_block_buffers.18"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011148, VkglTestCase_011148_1, VkglTestCase_011148_2);

#define VkglTestCase_011149_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011149_2 "ndom.all_per_block_buffers.19"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011149, VkglTestCase_011149_1, VkglTestCase_011149_2);

#define VkglTestCase_011150_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011150_2 "ndom.all_per_block_buffers.20"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011150, VkglTestCase_011150_1, VkglTestCase_011150_2);

#define VkglTestCase_011151_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011151_2 "ndom.all_per_block_buffers.21"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011151, VkglTestCase_011151_1, VkglTestCase_011151_2);

#define VkglTestCase_011152_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011152_2 "ndom.all_per_block_buffers.22"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011152, VkglTestCase_011152_1, VkglTestCase_011152_2);

#define VkglTestCase_011153_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011153_2 "ndom.all_per_block_buffers.23"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011153, VkglTestCase_011153_1, VkglTestCase_011153_2);

#define VkglTestCase_011154_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011154_2 "ndom.all_per_block_buffers.24"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011154, VkglTestCase_011154_1, VkglTestCase_011154_2);

#define VkglTestCase_011155_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011155_2 "ndom.all_per_block_buffers.25"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011155, VkglTestCase_011155_1, VkglTestCase_011155_2);

#define VkglTestCase_011156_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011156_2 "ndom.all_per_block_buffers.26"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011156, VkglTestCase_011156_1, VkglTestCase_011156_2);

#define VkglTestCase_011157_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011157_2 "ndom.all_per_block_buffers.27"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011157, VkglTestCase_011157_1, VkglTestCase_011157_2);

#define VkglTestCase_011158_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011158_2 "ndom.all_per_block_buffers.28"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011158, VkglTestCase_011158_1, VkglTestCase_011158_2);

#define VkglTestCase_011159_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011159_2 "ndom.all_per_block_buffers.29"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011159, VkglTestCase_011159_1, VkglTestCase_011159_2);

#define VkglTestCase_011160_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011160_2 "ndom.all_per_block_buffers.30"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011160, VkglTestCase_011160_1, VkglTestCase_011160_2);

#define VkglTestCase_011161_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011161_2 "ndom.all_per_block_buffers.31"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011161, VkglTestCase_011161_1, VkglTestCase_011161_2);

#define VkglTestCase_011162_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011162_2 "ndom.all_per_block_buffers.32"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011162, VkglTestCase_011162_1, VkglTestCase_011162_2);

#define VkglTestCase_011163_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011163_2 "ndom.all_per_block_buffers.33"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011163, VkglTestCase_011163_1, VkglTestCase_011163_2);

#define VkglTestCase_011164_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011164_2 "ndom.all_per_block_buffers.34"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011164, VkglTestCase_011164_1, VkglTestCase_011164_2);

#define VkglTestCase_011165_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011165_2 "ndom.all_per_block_buffers.35"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011165, VkglTestCase_011165_1, VkglTestCase_011165_2);

#define VkglTestCase_011166_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011166_2 "ndom.all_per_block_buffers.36"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011166, VkglTestCase_011166_1, VkglTestCase_011166_2);

#define VkglTestCase_011167_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011167_2 "ndom.all_per_block_buffers.37"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011167, VkglTestCase_011167_1, VkglTestCase_011167_2);

#define VkglTestCase_011168_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011168_2 "ndom.all_per_block_buffers.38"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011168, VkglTestCase_011168_1, VkglTestCase_011168_2);

#define VkglTestCase_011169_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011169_2 "ndom.all_per_block_buffers.39"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011169, VkglTestCase_011169_1, VkglTestCase_011169_2);

#define VkglTestCase_011170_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011170_2 "ndom.all_per_block_buffers.40"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011170, VkglTestCase_011170_1, VkglTestCase_011170_2);

#define VkglTestCase_011171_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011171_2 "ndom.all_per_block_buffers.42"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011171, VkglTestCase_011171_1, VkglTestCase_011171_2);

#define VkglTestCase_011172_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011172_2 "ndom.all_per_block_buffers.43"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011172, VkglTestCase_011172_1, VkglTestCase_011172_2);

#define VkglTestCase_011173_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011173_2 "ndom.all_per_block_buffers.44"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011173, VkglTestCase_011173_1, VkglTestCase_011173_2);

#define VkglTestCase_011174_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011174_2 "ndom.all_per_block_buffers.45"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011174, VkglTestCase_011174_1, VkglTestCase_011174_2);

#define VkglTestCase_011175_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011175_2 "ndom.all_per_block_buffers.46"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011175, VkglTestCase_011175_1, VkglTestCase_011175_2);

#define VkglTestCase_011176_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011176_2 "ndom.all_per_block_buffers.47"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011176, VkglTestCase_011176_1, VkglTestCase_011176_2);

#define VkglTestCase_011177_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011177_2 "ndom.all_per_block_buffers.48"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011177, VkglTestCase_011177_1, VkglTestCase_011177_2);

#define VkglTestCase_011178_1 "dEQP-GLES31.functional.ubo.ra"
#define VkglTestCase_011178_2 "ndom.all_per_block_buffers.49"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_011178, VkglTestCase_011178_1, VkglTestCase_011178_2);
