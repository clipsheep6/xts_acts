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

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000016, "dEQP-VK.texture.mipmap.2d.basic.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000017, "dEQP-VK.texture.mipmap.2d.affine.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000018, "dEQP-VK.texture.mipmap.2d.projected.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000019, "dEQP-VK.texture.mipmap.2d.bias.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000020, "dEQP-VK.texture.mipmap.2d.min_lod.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000021, "dEQP-VK.texture.mipmap.2d.max_lod.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000022, "dEQP-VK.texture.mipmap.2d.base_level.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000023, "dEQP-VK.texture.mipmap.2d.max_level.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000024, "dEQP-VK.texture.mipmap.cubemap.basic.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000025, "dEQP-VK.texture.mipmap.cubemap.projected.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000026, "dEQP-VK.texture.mipmap.cubemap.bias.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000027, "dEQP-VK.texture.mipmap.cubemap.min_lod.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000028, "dEQP-VK.texture.mipmap.cubemap.max_lod.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000029, "dEQP-VK.texture.mipmap.cubemap.base_level.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000030, "dEQP-VK.texture.mipmap.cubemap.max_level.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000031, "dEQP-VK.texture.mipmap.3d.basic.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000032, "dEQP-VK.texture.mipmap.3d.affine.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000033, "dEQP-VK.texture.mipmap.3d.projected.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000034, "dEQP-VK.texture.mipmap.3d.bias.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000035, "dEQP-VK.texture.mipmap.3d.min_lod.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000036, "dEQP-VK.texture.mipmap.3d.max_lod.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000037, "dEQP-VK.texture.mipmap.3d.base_level.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000038, "dEQP-VK.texture.mipmap.3d.max_level.*");
