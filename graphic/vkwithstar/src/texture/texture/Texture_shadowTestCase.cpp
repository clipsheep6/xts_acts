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

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000042, "dEQP-VK.texture.shadow.2d.nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000043, "dEQP-VK.texture.shadow.2d.linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000044, "dEQP-VK.texture.shadow.2d.nearest_mipmap_nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000045, "dEQP-VK.texture.shadow.2d.linear_mipmap_nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000046, "dEQP-VK.texture.shadow.2d.nearest_mipmap_linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000047, "dEQP-VK.texture.shadow.2d.linear_mipmap_linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000048, "dEQP-VK.texture.shadow.cube.nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000049, "dEQP-VK.texture.shadow.cube.linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000050, "dEQP-VK.texture.shadow.cube.nearest_mipmap_nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000051, "dEQP-VK.texture.shadow.cube.linear_mipmap_nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000052, "dEQP-VK.texture.shadow.cube.nearest_mipmap_linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000053, "dEQP-VK.texture.shadow.cube.linear_mipmap_linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000054, "dEQP-VK.texture.shadow.2d_array.nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000055, "dEQP-VK.texture.shadow.2d_array.linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000056, "dEQP-VK.texture.shadow.2d_array.nearest_mipmap_nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000057, "dEQP-VK.texture.shadow.2d_array.linear_mipmap_nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000058, "dEQP-VK.texture.shadow.2d_array.nearest_mipmap_linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000059, "dEQP-VK.texture.shadow.2d_array.linear_mipmap_linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000060, "dEQP-VK.texture.shadow.1d.nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000061, "dEQP-VK.texture.shadow.1d.linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000062, "dEQP-VK.texture.shadow.1d.nearest_mipmap_nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000063, "dEQP-VK.texture.shadow.1d.linear_mipmap_nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000064, "dEQP-VK.texture.shadow.1d.nearest_mipmap_linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000065, "dEQP-VK.texture.shadow.1d.linear_mipmap_linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000066, "dEQP-VK.texture.shadow.1d_array.nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000067, "dEQP-VK.texture.shadow.1d_array.linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000068, "dEQP-VK.texture.shadow.1d_array.nearest_mipmap_nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000069, "dEQP-VK.texture.shadow.1d_array.linear_mipmap_nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000070, "dEQP-VK.texture.shadow.1d_array.nearest_mipmap_linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000071, "dEQP-VK.texture.shadow.1d_array.linear_mipmap_linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000072, "dEQP-VK.texture.shadow.cube_array.nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000073, "dEQP-VK.texture.shadow.cube_array.linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000074, "dEQP-VK.texture.shadow.cube_array.nearest_mipmap_nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000075, "dEQP-VK.texture.shadow.cube_array.linear_mipmap_nearest.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000076, "dEQP-VK.texture.shadow.cube_array.nearest_mipmap_linear.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000077, "dEQP-VK.texture.shadow.cube_array.linear_mipmap_linear.*");
