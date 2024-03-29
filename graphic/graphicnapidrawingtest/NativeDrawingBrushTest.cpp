/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, Hardware
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "gtest/gtest.h"

#include "drawing_brush.h"
#include "drawing_color.h"
#include "drawing_filter.h"
#include "drawing_mask_filter.h"
#include "drawing_rect.h"

using namespace testing;
using namespace testing::ext;

namespace OHOS {
namespace Rosen {
namespace Drawing {
class NativeDrawingBrushTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp() override;
    void TearDown() override;
};

void NativeDrawingBrushTest::SetUpTestCase() {}
void NativeDrawingBrushTest::TearDownTestCase() {}
void NativeDrawingBrushTest::SetUp() {}
void NativeDrawingBrushTest::TearDown() {}

/*
 * @tc.name: NativeDrawingBrushTest_brush001
 * @tc.desc: test for create brush and destroy brush.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingBrushTest, NativeDrawingBrushTest_brush001, TestSize.Level1)
{
    OH_Drawing_Brush* brush = OH_Drawing_BrushCreate();
    EXPECT_EQ(brush == nullptr, false);
    OH_Drawing_BrushDestroy(brush);
}

/*
 * @tc.name: NativeDrawingBrushTest_brush002
 * @tc.desc: test for the set methods of brush.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingBrushTest, NativeDrawingBrushTest_brush002, TestSize.Level1)
{
    OH_Drawing_Brush* brush1 = OH_Drawing_BrushCreate();
    OH_Drawing_BrushSetAntiAlias(brush1, false);
    EXPECT_EQ(OH_Drawing_BrushIsAntiAlias(brush1), false);
    OH_Drawing_BrushSetColor(brush1, OH_Drawing_ColorSetArgb(0xFF, 0xFF, 0x00, 0x00));
    EXPECT_EQ(OH_Drawing_BrushGetColor(brush1), 0xFFFF0000);
    constexpr uint8_t alpha = 128;
    OH_Drawing_BrushSetAlpha(brush1, alpha);
    EXPECT_EQ(OH_Drawing_BrushGetAlpha(brush1), alpha);
}

/*
 * @tc.name: NativeDrawingBrushTest_SetBlendMode001
 * @tc.desc: test for SetBlendMode.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingBrushTest, NativeDrawingBrushTest_SetBlendMode001, TestSize.Level1)
{
    OH_Drawing_BrushSetBlendMode(nullptr, OH_Drawing_BlendMode::BLEND_MODE_CLEAR);
    OH_Drawing_Brush* brush = OH_Drawing_BrushCreate();
    EXPECT_NE(brush, nullptr);
    OH_Drawing_BrushSetBlendMode(brush, OH_Drawing_BlendMode::BLEND_MODE_CLEAR);
}
} // namespace Drawing
} // namespace Rosen
} // namespace OHOS