/*
 * Copyright (c) 2024 Shenzhen Kaihong Digital Industry Development Co., Ltd.
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

#include "gtest/gtest.h"

#include "drawing_bitmap.h"
#include "drawing_brush.h"
#include "drawing_canvas.h"
#include "drawing_color.h"
#include "drawing_color_filter.h"
#include "drawing_filter.h"
#include "drawing_font.h"
#include "drawing_image.h"
#include "drawing_mask_filter.h"
#include "drawing_matrix.h"
#include "drawing_memory_stream.h"
#include "drawing_path.h"
#include "drawing_pen.h"
#include "drawing_point.h"
#include "drawing_rect.h"
#include "drawing_region.h"
#include "drawing_round_rect.h"
#include "drawing_sampling_options.h"
#include "drawing_shader_effect.h"
#include "drawing_text_blob.h"
#include "drawing_typeface.h"
#include "effect/color_filter.h"
#include "effect/filter.h"

using namespace testing;
using namespace testing::ext;

namespace OHOS {
namespace Rosen {
namespace XTSDrawing {
class NativeXTSDrawingColorFilterTest : public testing::Test {};

/*
 * @tc.name: OH_Drawing_ColorFilterCreateBlendMode
 * @tc.desc: test for OH_Drawing_ColorFilterCreateBlendMode.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeXTSDrawingColorFilterTest, OH_Drawing_ColorFilterCreateBlendMode, TestSize.Level1) {
  OH_Drawing_ColorFilter *cColorFilter_ = OH_Drawing_ColorFilterCreateBlendMode(0xFF0000FF, BLEND_MODE_COLOR);
  EXPECT_NE(cColorFilter_, nullptr);
  OH_Drawing_ColorFilterDestroy(cColorFilter_);
}

/*
 * @tc.name: OH_Drawing_ColorFilterDestroy
 * @tc.desc: test for OH_Drawing_ColorFilterDestroy.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeXTSDrawingColorFilterTest, OH_Drawing_ColorFilterDestroy, TestSize.Level1) {
  OH_Drawing_ColorFilter *cColorFilter_ = OH_Drawing_ColorFilterCreateBlendMode(0xFF0000FF, BLEND_MODE_COLOR);
  OH_Drawing_ColorFilterDestroy(cColorFilter_);
  EXPECT_TRUE(true);
}

} // namespace XTSDrawing
} // namespace Rosen
} // namespace OHOS