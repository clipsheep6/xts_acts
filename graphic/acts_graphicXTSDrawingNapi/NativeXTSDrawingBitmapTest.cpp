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
class NativeXTSDrawingBitmapTest : public testing::Test {};

/*
 * @tc.name: OH_Drawing_BitmapDestroy
 * @tc.desc: test for OH_Drawing_BitmapDestroy.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeXTSDrawingBitmapTest, OH_Drawing_BitmapDestroy, TestSize.Level1) {
  OH_Drawing_Bitmap *cBitmap = OH_Drawing_BitmapCreate();
  OH_Drawing_BitmapDestroy(cBitmap);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_BitmapBuild
 * @tc.desc: test for OH_Drawing_BitmapBuild.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeXTSDrawingBitmapTest, OH_Drawing_BitmapBuild, TestSize.Level1) {
  OH_Drawing_Bitmap *cBitmap = OH_Drawing_BitmapCreate();
  OH_Drawing_BitmapFormat cFormat{COLOR_FORMAT_RGBA_8888, ALPHA_FORMAT_OPAQUE};
  uint32_t width = 100;
  uint32_t height = 100;
  OH_Drawing_BitmapBuild(cBitmap, width, height, &cFormat);
  OH_Drawing_BitmapDestroy(cBitmap);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_BitmapGetWidth
 * @tc.desc: test for OH_Drawing_BitmapGetWidth.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeXTSDrawingBitmapTest, OH_Drawing_BitmapGetWidth, TestSize.Level1) {
  OH_Drawing_Bitmap *cBitmap = OH_Drawing_BitmapCreate();
  OH_Drawing_BitmapFormat cFormat{COLOR_FORMAT_RGBA_8888, ALPHA_FORMAT_OPAQUE};
  uint32_t width = 100;
  uint32_t height = 100;
  OH_Drawing_BitmapBuild(cBitmap, width, height, &cFormat);
  uint32_t w = OH_Drawing_BitmapGetWidth(cBitmap);
  EXPECT_EQ(w, 100);
  OH_Drawing_BitmapDestroy(cBitmap);
}

/*
 * @tc.name: OH_Drawing_BitmapGetHeight
 * @tc.desc: test for OH_Drawing_BitmapGetHeight.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeXTSDrawingBitmapTest, OH_Drawing_BitmapGetHeight, TestSize.Level1) {
  OH_Drawing_Bitmap *cBitmap = OH_Drawing_BitmapCreate();
  OH_Drawing_BitmapFormat cFormat{COLOR_FORMAT_RGBA_8888, ALPHA_FORMAT_OPAQUE};
  uint32_t width = 100;
  uint32_t height = 100;
  OH_Drawing_BitmapBuild(cBitmap, width, height, &cFormat);
  uint32_t h = OH_Drawing_BitmapGetHeight(cBitmap);
  EXPECT_EQ(h, 100);
  OH_Drawing_BitmapDestroy(cBitmap);
}

/*
 * @tc.name: OH_Drawing_BitmapGetPixels
 * @tc.desc: test for OH_Drawing_BitmapGetPixels.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeXTSDrawingBitmapTest, OH_Drawing_BitmapGetPixels, TestSize.Level1) {
  OH_Drawing_Bitmap *cBitmap = OH_Drawing_BitmapCreate();
  OH_Drawing_BitmapGetPixels(cBitmap);
  OH_Drawing_BitmapDestroy(cBitmap);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_BitmapGetColorFormat
 * @tc.desc: test for OH_Drawing_BitmapGetColorFormat.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeXTSDrawingBitmapTest, OH_Drawing_BitmapGetColorFormat, TestSize.Level1) {
  OH_Drawing_Bitmap *cBitmap = OH_Drawing_BitmapCreate();
  OH_Drawing_BitmapGetColorFormat(cBitmap);
  OH_Drawing_BitmapDestroy(cBitmap);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_BitmapGetAlphaFormat
 * @tc.desc: test for OH_Drawing_BitmapGetAlphaFormat.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeXTSDrawingBitmapTest, OH_Drawing_BitmapGetAlphaFormat, TestSize.Level1) {
  OH_Drawing_Bitmap *cBitmap = OH_Drawing_BitmapCreate();
  OH_Drawing_BitmapGetAlphaFormat(cBitmap);
  OH_Drawing_BitmapDestroy(cBitmap);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_BitmapGetImageInfo
 * @tc.desc: test for OH_Drawing_BitmapGetImageInfo.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeXTSDrawingBitmapTest, OH_Drawing_BitmapGetImageInfo, TestSize.Level1) {
  const unsigned int width = 500;
  const unsigned int height = 500;
  OH_Drawing_Bitmap *bitmap = OH_Drawing_BitmapCreate();
  OH_Drawing_BitmapFormat bitmapFormat{COLOR_FORMAT_RGBA_8888, ALPHA_FORMAT_UNPREMUL};
  OH_Drawing_BitmapBuild(bitmap, width, height, &bitmapFormat);
  OH_Drawing_Image_Info *imageInfo = new OH_Drawing_Image_Info();
  OH_Drawing_BitmapGetImageInfo(bitmap, imageInfo);
  EXPECT_EQ(width, imageInfo->width);
  EXPECT_EQ(height, imageInfo->height);
  OH_Drawing_BitmapDestroy(bitmap);
}

/*
 * @tc.name: OH_Drawing_BitmapReadPixels
 * @tc.desc: test for OH_Drawing_BitmapReadPixels.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeXTSDrawingBitmapTest, OH_Drawing_BitmapReadPixels, TestSize.Level1) {
  const unsigned int width = 500;
  const unsigned int height = 500;
  OH_Drawing_Bitmap *bitmap = OH_Drawing_BitmapCreate();
  OH_Drawing_BitmapFormat bitmapFormat{COLOR_FORMAT_RGBA_8888, ALPHA_FORMAT_UNPREMUL};
  OH_Drawing_BitmapBuild(bitmap, width, height, &bitmapFormat);
  OH_Drawing_Image_Info imageInfo{width, height, COLOR_FORMAT_RGBA_8888, ALPHA_FORMAT_UNPREMUL};
  void *pixels = new uint32_t[width * height];
  bool res = OH_Drawing_BitmapReadPixels(nullptr, nullptr, nullptr, width * 4, 0, 0);
  EXPECT_EQ(res, false);
  res = OH_Drawing_BitmapReadPixels(nullptr, &imageInfo, pixels, width * 4, 0, 0);
  EXPECT_EQ(res, false);
  res = OH_Drawing_BitmapReadPixels(bitmap, nullptr, pixels, width * 4, 0, 0);
  EXPECT_EQ(res, false);
  res = OH_Drawing_BitmapReadPixels(bitmap, &imageInfo, nullptr, width * 4, 0, 0);
  EXPECT_EQ(res, false);
  res = OH_Drawing_BitmapReadPixels(bitmap, &imageInfo, pixels, width * 4, 0, 0);
  EXPECT_EQ(res, true);
  OH_Drawing_BitmapDestroy(bitmap);
}

} // namespace XTSDrawing
} // namespace Rosen
} // namespace OHOS