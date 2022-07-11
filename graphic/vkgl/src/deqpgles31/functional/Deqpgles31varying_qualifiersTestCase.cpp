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
#include "../ActsDeqpgles310005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004489_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004489_2 "es31.geometry.varying.qualifiers.smooth"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004489, VkglTestCase_004489_1, VkglTestCase_004489_2);

#define VkglTestCase_004490_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004490_2 ".es31.geometry.varying.qualifiers.flat"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004490, VkglTestCase_004490_1, VkglTestCase_004490_2);

#define VkglTestCase_004491_1 "dEQP-GLES31.functional.shaders.linkage.e"
#define VkglTestCase_004491_2 "s31.geometry.varying.qualifiers.centroid"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004491, VkglTestCase_004491_1, VkglTestCase_004491_2);

#define VkglTestCase_004492_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004492_2 "es31.geometry.varying.qualifiers.sample"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004492, VkglTestCase_004492_1, VkglTestCase_004492_2);

#define VkglTestCase_004552_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004552_2 "31.tessellation.varying.qualifiers.smooth"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004552, VkglTestCase_004552_1, VkglTestCase_004552_2);

#define VkglTestCase_004553_1 "dEQP-GLES31.functional.shaders.linkage.e"
#define VkglTestCase_004553_2 "s31.tessellation.varying.qualifiers.flat"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004553, VkglTestCase_004553_1, VkglTestCase_004553_2);

#define VkglTestCase_004554_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004554_2 "1.tessellation.varying.qualifiers.centroid"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004554, VkglTestCase_004554_1, VkglTestCase_004554_2);

#define VkglTestCase_004555_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004555_2 "31.tessellation.varying.qualifiers.sample"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004555, VkglTestCase_004555_1, VkglTestCase_004555_2);

#define VkglTestCase_004556_1 "dEQP-GLES31.functional.shaders.linkage.e"
#define VkglTestCase_004556_2 "s31.tessellation.varying.qualifiers.patch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004556, VkglTestCase_004556_1, VkglTestCase_004556_2);

#define VkglTestCase_004760_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004760_2 "es32.geometry.varying.qualifiers.smooth"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004760, VkglTestCase_004760_1, VkglTestCase_004760_2);

#define VkglTestCase_004761_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004761_2 ".es32.geometry.varying.qualifiers.flat"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004761, VkglTestCase_004761_1, VkglTestCase_004761_2);

#define VkglTestCase_004762_1 "dEQP-GLES31.functional.shaders.linkage.e"
#define VkglTestCase_004762_2 "s32.geometry.varying.qualifiers.centroid"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004762, VkglTestCase_004762_1, VkglTestCase_004762_2);

#define VkglTestCase_004763_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004763_2 "es32.geometry.varying.qualifiers.sample"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004763, VkglTestCase_004763_1, VkglTestCase_004763_2);

#define VkglTestCase_004818_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004818_2 "32.tessellation.varying.qualifiers.smooth"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004818, VkglTestCase_004818_1, VkglTestCase_004818_2);

#define VkglTestCase_004819_1 "dEQP-GLES31.functional.shaders.linkage.e"
#define VkglTestCase_004819_2 "s32.tessellation.varying.qualifiers.flat"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004819, VkglTestCase_004819_1, VkglTestCase_004819_2);

#define VkglTestCase_004820_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004820_2 "2.tessellation.varying.qualifiers.centroid"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004820, VkglTestCase_004820_1, VkglTestCase_004820_2);

#define VkglTestCase_004821_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004821_2 "32.tessellation.varying.qualifiers.sample"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004821, VkglTestCase_004821_1, VkglTestCase_004821_2);

#define VkglTestCase_004822_1 "dEQP-GLES31.functional.shaders.linkage.e"
#define VkglTestCase_004822_2 "s32.tessellation.varying.qualifiers.patch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004822, VkglTestCase_004822_1, VkglTestCase_004822_2);
