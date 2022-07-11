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
#include "../Khrgles2BaseFunc.h"
#include "../ActsKhrgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000015_1 "KHR-GLES2.texture_3d.filte"
#define VkglTestCase_000015_2 "ring.formats.rgba8_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000015, VkglTestCase_000015_1, VkglTestCase_000015_2);

#define VkglTestCase_000016_1 "KHR-GLES2.texture_3d.filt"
#define VkglTestCase_000016_2 "ering.formats.rgba8_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000016, VkglTestCase_000016_1, VkglTestCase_000016_2);

#define VkglTestCase_000017_1 "KHR-GLES2.texture_3d.filtering.fo"
#define VkglTestCase_000017_2 "rmats.rgba8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000017, VkglTestCase_000017_1, VkglTestCase_000017_2);

#define VkglTestCase_000018_1 "KHR-GLES2.texture_3d.filtering.fo"
#define VkglTestCase_000018_2 "rmats.rgba8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000018, VkglTestCase_000018_1, VkglTestCase_000018_2);

#define VkglTestCase_000019_1 "KHR-GLES2.texture_3d.filtering.fo"
#define VkglTestCase_000019_2 "rmats.rgba8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000019, VkglTestCase_000019_1, VkglTestCase_000019_2);

#define VkglTestCase_000020_1 "KHR-GLES2.texture_3d.filtering.f"
#define VkglTestCase_000020_2 "ormats.rgba8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000020, VkglTestCase_000020_1, VkglTestCase_000020_2);
