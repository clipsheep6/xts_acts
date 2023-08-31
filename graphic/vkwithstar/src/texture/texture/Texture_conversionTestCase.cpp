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
#include "../ActsTexture0003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006237, "dEQP-VK.texture.conversion.ufloat_negative_values.b10g11r11.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006238, "dEQP-VK.texture.conversion.snorm_clamp.a2b10g10r10_snorm_pack32.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006239, "dEQP-VK.texture.conversion.snorm_clamp.a2r10g10b10_snorm_pack32.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006240, "dEQP-VK.texture.conversion.snorm_clamp.a8b8g8r8_snorm_pack32.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006241, "dEQP-VK.texture.conversion.snorm_clamp.b8g8r8a8_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006242, "dEQP-VK.texture.conversion.snorm_clamp.b8g8r8_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006243, "dEQP-VK.texture.conversion.snorm_clamp.r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006244, "dEQP-VK.texture.conversion.snorm_clamp.r16g16b16_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006245, "dEQP-VK.texture.conversion.snorm_clamp.r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006246, "dEQP-VK.texture.conversion.snorm_clamp.r16_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006247, "dEQP-VK.texture.conversion.snorm_clamp.r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006248, "dEQP-VK.texture.conversion.snorm_clamp.r8g8b8_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006249, "dEQP-VK.texture.conversion.snorm_clamp.r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006250, "dEQP-VK.texture.conversion.snorm_clamp.r8_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006251, "dEQP-VK.texture.conversion.snorm_clamp_linear.a2b10g10r10_snorm_pack32.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006252, "dEQP-VK.texture.conversion.snorm_clamp_linear.a2r10g10b10_snorm_pack32.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006253, "dEQP-VK.texture.conversion.snorm_clamp_linear.a8b8g8r8_snorm_pack32.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006254, "dEQP-VK.texture.conversion.snorm_clamp_linear.b8g8r8a8_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006255, "dEQP-VK.texture.conversion.snorm_clamp_linear.b8g8r8_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006256, "dEQP-VK.texture.conversion.snorm_clamp_linear.r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006257, "dEQP-VK.texture.conversion.snorm_clamp_linear.r16g16b16_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006258, "dEQP-VK.texture.conversion.snorm_clamp_linear.r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006259, "dEQP-VK.texture.conversion.snorm_clamp_linear.r16_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006260, "dEQP-VK.texture.conversion.snorm_clamp_linear.r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006261, "dEQP-VK.texture.conversion.snorm_clamp_linear.r8g8b8_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006262, "dEQP-VK.texture.conversion.snorm_clamp_linear.r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsTexture0003TS, TC006263, "dEQP-VK.texture.conversion.snorm_clamp_linear.r8_snorm.*");
