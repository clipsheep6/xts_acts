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
#include "../ActsDeqpgles30028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027119_1 "dEQP-GLES3.functional.texture.v"
#define VkglTestCase_027119_2 "ertex.3d.wrap.clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027119, VkglTestCase_027119_1, VkglTestCase_027119_2);

#define VkglTestCase_027120_1 "dEQP-GLES3.functional.texture.v"
#define VkglTestCase_027120_2 "ertex.3d.wrap.clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027120, VkglTestCase_027120_1, VkglTestCase_027120_2);

#define VkglTestCase_027121_1 "dEQP-GLES3.functional.texture.v"
#define VkglTestCase_027121_2 "ertex.3d.wrap.clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027121, VkglTestCase_027121_1, VkglTestCase_027121_2);

#define VkglTestCase_027122_1 "dEQP-GLES3.functional.texture.v"
#define VkglTestCase_027122_2 "ertex.3d.wrap.clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027122, VkglTestCase_027122_1, VkglTestCase_027122_2);

#define VkglTestCase_027123_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027123_2 "rtex.3d.wrap.clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027123, VkglTestCase_027123_1, VkglTestCase_027123_2);

#define VkglTestCase_027124_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027124_2 "rtex.3d.wrap.clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027124, VkglTestCase_027124_1, VkglTestCase_027124_2);

#define VkglTestCase_027125_1 "dEQP-GLES3.functional.texture.v"
#define VkglTestCase_027125_2 "ertex.3d.wrap.clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027125, VkglTestCase_027125_1, VkglTestCase_027125_2);

#define VkglTestCase_027126_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027126_2 "rtex.3d.wrap.clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027126, VkglTestCase_027126_1, VkglTestCase_027126_2);

#define VkglTestCase_027127_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027127_2 "rtex.3d.wrap.clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027127, VkglTestCase_027127_1, VkglTestCase_027127_2);

#define VkglTestCase_027128_1 "dEQP-GLES3.functional.texture.v"
#define VkglTestCase_027128_2 "ertex.3d.wrap.repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027128, VkglTestCase_027128_1, VkglTestCase_027128_2);

#define VkglTestCase_027129_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027129_2 "rtex.3d.wrap.repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027129, VkglTestCase_027129_1, VkglTestCase_027129_2);

#define VkglTestCase_027130_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027130_2 "rtex.3d.wrap.repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027130, VkglTestCase_027130_1, VkglTestCase_027130_2);

#define VkglTestCase_027131_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027131_2 "rtex.3d.wrap.repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027131, VkglTestCase_027131_1, VkglTestCase_027131_2);

#define VkglTestCase_027132_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027132_2 "rtex.3d.wrap.repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027132, VkglTestCase_027132_1, VkglTestCase_027132_2);

#define VkglTestCase_027133_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027133_2 "rtex.3d.wrap.repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027133, VkglTestCase_027133_1, VkglTestCase_027133_2);

#define VkglTestCase_027134_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027134_2 "rtex.3d.wrap.repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027134, VkglTestCase_027134_1, VkglTestCase_027134_2);

#define VkglTestCase_027135_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027135_2 "rtex.3d.wrap.repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027135, VkglTestCase_027135_1, VkglTestCase_027135_2);

#define VkglTestCase_027136_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027136_2 "rtex.3d.wrap.repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027136, VkglTestCase_027136_1, VkglTestCase_027136_2);

#define VkglTestCase_027137_1 "dEQP-GLES3.functional.texture.v"
#define VkglTestCase_027137_2 "ertex.3d.wrap.mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027137, VkglTestCase_027137_1, VkglTestCase_027137_2);

#define VkglTestCase_027138_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027138_2 "rtex.3d.wrap.mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027138, VkglTestCase_027138_1, VkglTestCase_027138_2);

#define VkglTestCase_027139_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027139_2 "rtex.3d.wrap.mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027139, VkglTestCase_027139_1, VkglTestCase_027139_2);

#define VkglTestCase_027140_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027140_2 "rtex.3d.wrap.mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027140, VkglTestCase_027140_1, VkglTestCase_027140_2);

#define VkglTestCase_027141_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027141_2 "rtex.3d.wrap.mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027141, VkglTestCase_027141_1, VkglTestCase_027141_2);

#define VkglTestCase_027142_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027142_2 "rtex.3d.wrap.mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027142, VkglTestCase_027142_1, VkglTestCase_027142_2);

#define VkglTestCase_027143_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027143_2 "rtex.3d.wrap.mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027143, VkglTestCase_027143_1, VkglTestCase_027143_2);

#define VkglTestCase_027144_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027144_2 "rtex.3d.wrap.mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027144, VkglTestCase_027144_1, VkglTestCase_027144_2);

#define VkglTestCase_027145_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027145_2 "rtex.3d.wrap.mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027145, VkglTestCase_027145_1, VkglTestCase_027145_2);
