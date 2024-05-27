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
class NativeDrawingCanvasTest : public testing::Test {
public:
  static void SetUpTestCase();
  static void TearDownTestCase();
  void SetUp() override;
  void TearDown() override;

protected:
  OH_Drawing_Canvas *canvas_ = nullptr;
  OH_Drawing_Brush *brush_ = nullptr;
};

constexpr uint32_t POINT_PARAMETER = 3;
constexpr uint32_t COLOR_PARAMETER = 3;
void NativeDrawingCanvasTest::SetUpTestCase() {}
void NativeDrawingCanvasTest::TearDownTestCase() {}
void NativeDrawingCanvasTest::SetUp() {
  canvas_ = OH_Drawing_CanvasCreate();
  ASSERT_NE(nullptr, canvas_);
  OH_Drawing_CanvasClear(canvas_, OH_Drawing_ColorSetArgb(0xFF, 0xFF, 0xFF, 0xFF));
  brush_ = OH_Drawing_BrushCreate();
  EXPECT_NE(brush_, nullptr);
  OH_Drawing_BrushSetColor(brush_, 0xffff0000);
  OH_Drawing_CanvasAttachBrush(canvas_, brush_);
}

void NativeDrawingCanvasTest::TearDown() {
  if (canvas_ != nullptr) {
    OH_Drawing_CanvasDetachBrush(canvas_);
    OH_Drawing_BrushDestroy(brush_);
    brush_ = nullptr;
    OH_Drawing_CanvasDestroy(canvas_);
    canvas_ = nullptr;
  }
}

/*
 * @tc.name: OH_Drawing_CanvasDestroy
 * @tc.desc: test for OH_Drawing_CanvasDestroy.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasDestroy, TestSize.Level1) {
  OH_Drawing_CanvasDestroy(canvas_);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasBind
 * @tc.desc: test for OH_Drawing_CanvasBind.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasBind, TestSize.Level1) {
  OH_Drawing_Bitmap *cBitmap = OH_Drawing_BitmapCreate();
  OH_Drawing_CanvasBind(canvas_, cBitmap);
  OH_Drawing_BitmapDestroy(cBitmap);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasAttachPen
 * @tc.desc: test for OH_Drawing_CanvasAttachPen.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasAttachPen, TestSize.Level1) {
  OH_Drawing_Pen *pen = OH_Drawing_PenCreate();
  OH_Drawing_CanvasAttachPen(canvas_, pen);
  OH_Drawing_PenDestroy(pen);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasDetachPen
 * @tc.desc: test for OH_Drawing_CanvasDetachPen.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasDetachPen, TestSize.Level1) {
  OH_Drawing_CanvasDetachPen(canvas_);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasAttachBrush
 * @tc.desc: test for OH_Drawing_CanvasAttachBrush.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasAttachBrush, TestSize.Level1) {
  OH_Drawing_CanvasAttachBrush(canvas_, brush_);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasDetachBrush
 * @tc.desc: test for OH_Drawing_CanvasDetachBrush.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasDetachBrush, TestSize.Level1) {
  OH_Drawing_CanvasDetachBrush(canvas_);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasSaveLayer
 * @tc.desc: test for OH_Drawing_CanvasSaveLayer.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasSaveLayer, TestSize.Level1) {
  OH_Drawing_Rect *rect = OH_Drawing_RectCreate(200, 500, 300, 600);
  OH_Drawing_CanvasSaveLayer(canvas_, rect, brush_);
  OH_Drawing_RectDestroy(rect);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasGetSaveCount
 * @tc.desc: test for OH_Drawing_CanvasGetSaveCount.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasGetSaveCount, TestSize.Level1) {
  OH_Drawing_CanvasSave(canvas_);
  OH_Drawing_CanvasTranslate(canvas_, 300, 300);
  OH_Drawing_CanvasSave(canvas_);
  OH_Drawing_CanvasTranslate(canvas_, 100, 100);
  OH_Drawing_CanvasSave(canvas_);
  OH_Drawing_CanvasTranslate(canvas_, 100, 100);
  int count = OH_Drawing_CanvasGetSaveCount(canvas_);
  EXPECT_EQ(count, 4);
}

/*
 * @tc.name: OH_Drawing_CanvasRestoreToCount
 * @tc.desc: test for OH_Drawing_CanvasRestoreToCount.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasRestoreToCount, TestSize.Level1) {
  OH_Drawing_CanvasSave(canvas_);
  OH_Drawing_CanvasTranslate(canvas_, 300, 300);
  OH_Drawing_CanvasSave(canvas_);
  OH_Drawing_CanvasTranslate(canvas_, 100, 100);
  OH_Drawing_CanvasSave(canvas_);
  OH_Drawing_CanvasTranslate(canvas_, 100, 100);
  OH_Drawing_CanvasRestoreToCount(canvas_, 1);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasDrawArc
 * @tc.desc: test for OH_Drawing_CanvasDrawArc.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasDrawArc, TestSize.Level1) {
  OH_Drawing_Rect *rect = OH_Drawing_RectCreate(100, 200, 500, 300);
  OH_Drawing_CanvasDrawArc(canvas_, rect, 10, 200);
  OH_Drawing_RectDestroy(rect);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasDrawBitmap
 * @tc.desc: test for OH_Drawing_CanvasDrawBitmap.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasDrawBitmap, TestSize.Level1) {
  OH_Drawing_Bitmap *bitmap = OH_Drawing_BitmapCreate();
  OH_Drawing_BitmapFormat cFormat{COLOR_FORMAT_RGBA_8888, ALPHA_FORMAT_OPAQUE};
  constexpr uint32_t width = 200;
  constexpr uint32_t height = 200;
  OH_Drawing_BitmapBuild(bitmap, width, height, &cFormat);
  OH_Drawing_CanvasBind(canvas_, bitmap);
  OH_Drawing_CanvasDrawBitmap(canvas_, bitmap, 0, 0);
  OH_Drawing_BitmapDestroy(bitmap);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasDrawCircle
 * @tc.desc: test for OH_Drawing_CanvasDrawCircle.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasDrawCircle, TestSize.Level1) {
  OH_Drawing_Point *point = OH_Drawing_PointCreate(100, 60);
  OH_Drawing_CanvasDrawCircle(canvas_, point, 60);
  OH_Drawing_PointDestroy(point);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasDrawPixelMapRect
 * @tc.desc: test for OH_Drawing_CanvasDrawPixelMapRect.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasDrawPixelMapRect, TestSize.Level1) {
  // unkown how to create napi pixelmap
  OH_Drawing_CanvasDrawPixelMapRect(canvas_, nullptr, nullptr, nullptr, nullptr);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasDrawRect
 * @tc.desc: test for OH_Drawing_CanvasDrawRect.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasDrawRect, TestSize.Level1) {
  OH_Drawing_Rect *rect = OH_Drawing_RectCreate(100, 200, 500, 300);
  OH_Drawing_CanvasDrawRect(canvas_, rect);
  OH_Drawing_RectDestroy(rect);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasDrawTextBlob
 * @tc.desc: test for OH_Drawing_CanvasDrawTextBlob.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasDrawTextBlob, TestSize.Level1) {
  const char *str = "123456";
  int count = strlen(str);
  OH_Drawing_Point2D pts[count];

  OH_Drawing_Font *font = OH_Drawing_FontCreate();
  OH_Drawing_Typeface *typeSurface = OH_Drawing_TypefaceCreateDefault();
  OH_Drawing_FontSetTypeface(font, typeSurface);

  OH_Drawing_TextBlob *textBlob = OH_Drawing_TextBlobCreateFromPosText(str, count, &pts[0], font, OH_Drawing_TextEncoding::TEXT_ENCODING_UTF8);
  OH_Drawing_CanvasDrawTextBlob(canvas_, textBlob, 0, 0);

  OH_Drawing_TextBlobDestroy(textBlob);
  OH_Drawing_FontDestroy(font);
  OH_Drawing_TypefaceDestroy(typeSurface);

  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasClipRect
 * @tc.desc: test for OH_Drawing_CanvasClipRect.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasClipRect, TestSize.Level1) {
  OH_Drawing_Rect *rect = OH_Drawing_RectCreate(100, 200, 500, 300);
  OH_Drawing_CanvasClipRect(canvas_, rect, OH_Drawing_CanvasClipOp::INTERSECT, true);
  OH_Drawing_RectDestroy(rect);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasClipPath
 * @tc.desc: test for OH_Drawing_CanvasClipPath.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasClipPath, TestSize.Level1) {
  OH_Drawing_Path *path = OH_Drawing_PathCreate();
  OH_Drawing_PathMoveTo(path, 100, 300);
  OH_Drawing_PathLineTo(path, 200, 300);
  OH_Drawing_PathLineTo(path, 200, 400);
  OH_Drawing_PathLineTo(path, 100, 350);
  OH_Drawing_PathClose(path);
  OH_Drawing_CanvasClipPath(canvas_, path, OH_Drawing_CanvasClipOp::DIFFERENCE, true);
  OH_Drawing_PathDestroy(path);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasRotate
 * @tc.desc: test for OH_Drawing_CanvasRotate.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasRotate, TestSize.Level1) {
  OH_Drawing_CanvasRotate(canvas_, 10, 0, 0);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasTranslate
 * @tc.desc: test for OH_Drawing_CanvasTranslate.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasTranslate, TestSize.Level1) {
  OH_Drawing_CanvasTranslate(canvas_, 300, 300);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasScale
 * @tc.desc: test for OH_Drawing_CanvasScale.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasScale, TestSize.Level1) {
  OH_Drawing_CanvasScale(canvas_, 2, .5f);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasClear
 * @tc.desc: test for OH_Drawing_CanvasClear.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasClear, TestSize.Level1) {
  OH_Drawing_CanvasClear(canvas_, OH_Drawing_ColorSetArgb(0xFF, 0xFF, 0x00, 0x00));
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasReadPixels
 * @tc.desc: test for OH_Drawing_CanvasReadPixels.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasReadPixels, TestSize.Level1) {
  OH_Drawing_Image_Info imageInfo;

  OH_Drawing_Bitmap *bitmap = OH_Drawing_BitmapCreate();
  EXPECT_NE(bitmap, nullptr);

  OH_Drawing_BitmapFormat cFormat{COLOR_FORMAT_RGBA_8888, ALPHA_FORMAT_OPAQUE};
  constexpr uint32_t width = 200;
  constexpr uint32_t height = 200;
  OH_Drawing_BitmapBuild(bitmap, width, height, &cFormat);
  void *pixels = OH_Drawing_BitmapGetPixels(bitmap);

  OH_Drawing_CanvasReadPixels(canvas_, &imageInfo, pixels, 0, 0, 0);
  OH_Drawing_BitmapDestroy(bitmap);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasReadPixelsToBitmap
 * @tc.desc: test for OH_Drawing_CanvasReadPixelsToBitmap.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasReadPixelsToBitmap, TestSize.Level1) {
  OH_Drawing_Bitmap *bitmap = OH_Drawing_BitmapCreate();
  EXPECT_NE(bitmap, nullptr);
  OH_Drawing_CanvasReadPixelsToBitmap(canvas_, bitmap, 100, 100);
  OH_Drawing_BitmapDestroy(bitmap);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasDrawShadow
 * @tc.desc: test for OH_Drawing_CanvasDrawShadow.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasDrawShadow, TestSize.Level1) {
  OH_Drawing_Point3D p1{0.0, 0.0, 0.0};
  OH_Drawing_Point3D p2{10.0, 10.0, 10.0};
  OH_Drawing_Path *path = OH_Drawing_PathCreate();
  EXPECT_NE(path, nullptr);
  OH_Drawing_CanvasDrawShadow(canvas_, path, p1, p2, 10, 0xFF000000, 0xFF000000, OH_Drawing_CanvasShadowFlags::SHADOW_FLAGS_ALL);

  OH_Drawing_PathDestroy(path);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasDrawBackground
 * @tc.desc: test for OH_Drawing_CanvasDrawBackground.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasDrawBackground, TestSize.Level1) {
  OH_Drawing_Brush *brush = OH_Drawing_BrushCreate();
  OH_Drawing_BrushSetColor(brush, OH_Drawing_ColorSetArgb(0xFF, 0xFF, 0x00, 0x00));
  OH_Drawing_CanvasDrawBackground(canvas_, brush);
  OH_Drawing_BrushDestroy(brush);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasDrawRegion
 * @tc.desc: test for OH_Drawing_CanvasDrawRegion.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasDrawRegion, TestSize.Level1) {
  OH_Drawing_Region *region = OH_Drawing_RegionCreate();
  OH_Drawing_Rect *rect = OH_Drawing_RectCreate(0.0f, 0.0f, 256.0f, 256.0f);
  OH_Drawing_RegionSetRect(region, rect);
  OH_Drawing_CanvasDrawRegion(canvas_, region);
  OH_Drawing_RegionDestroy(region);
  OH_Drawing_RectDestroy(rect);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasDrawPoints
 * @tc.desc: test for OH_Drawing_CanvasDrawPoints.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasDrawPoints, TestSize.Level1) {
  OH_Drawing_Point2D pointOne = {250, 500};
  OH_Drawing_Point2D pointTwo = {200, 500};
  OH_Drawing_Point2D pointThree = {500, 700};
  OH_Drawing_Point2D points[POINT_PARAMETER] = {pointOne, pointTwo, pointThree};
  OH_Drawing_CanvasDrawPoints(canvas_, POINT_MODE_POINTS, POINT_PARAMETER, points);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasSkew
 * @tc.desc: test for OH_Drawing_CanvasSkew.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasSkew, TestSize.Level1) {
  OH_Drawing_CanvasSkew(canvas_, 0, 0.3f);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasDrawImageRectWithSrc
 * @tc.desc: test for OH_Drawing_CanvasDrawImageRectWithSrc.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasDrawImageRectWithSrc, TestSize.Level1) {
  OH_Drawing_Rect *rect = OH_Drawing_RectCreate(0, 0, 200, 200);
  EXPECT_NE(rect, nullptr);
  OH_Drawing_Image *image = OH_Drawing_ImageCreate();
  EXPECT_NE(image, nullptr);
  OH_Drawing_Bitmap *bitmap = OH_Drawing_BitmapCreate();
  EXPECT_NE(bitmap, nullptr);
  OH_Drawing_BitmapFormat cFormat{COLOR_FORMAT_RGBA_8888, ALPHA_FORMAT_OPAQUE};
  constexpr uint32_t width = 200;
  constexpr uint32_t height = 200;
  OH_Drawing_BitmapBuild(bitmap, width, height, &cFormat);
  OH_Drawing_ImageBuildFromBitmap(image, bitmap);
  OH_Drawing_SamplingOptions *options = OH_Drawing_SamplingOptionsCreate(OH_Drawing_FilterMode::FILTER_MODE_NEAREST, OH_Drawing_MipmapMode::MIPMAP_MODE_NEAREST);
  EXPECT_NE(options, nullptr);
  OH_Drawing_CanvasDrawImageRectWithSrc(canvas_, image, rect, rect, options, STRICT_SRC_RECT_CONSTRAINT);

  OH_Drawing_RectDestroy(rect);
  OH_Drawing_ImageDestroy(image);
  OH_Drawing_BitmapDestroy(bitmap);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasDrawVertices
 * @tc.desc: test for OH_Drawing_CanvasDrawVertices.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasDrawVertices, TestSize.Level1) {
  OH_Drawing_Point2D point_one = {0, 0};
  OH_Drawing_Point2D point_two = {100, 100};
  OH_Drawing_Point2D point_three = {300, 100};
  OH_Drawing_Point2D points_vertices[POINT_PARAMETER] = {point_one, point_two, point_three};

  OH_Drawing_Point2D texs_one = {0, 0};
  OH_Drawing_Point2D texs_two = {1, 1};
  OH_Drawing_Point2D texs_three = {2, 0};
  OH_Drawing_Point2D texs_vertices[POINT_PARAMETER] = {texs_one, texs_two, texs_three};
  uint32_t colors[COLOR_PARAMETER] = {0xFFFF0000, 0xFFFF0000, 0xFFFF0000};

  uint16_t indices[COLOR_PARAMETER] = {0, 1, 2};
  OH_Drawing_CanvasDrawVertices(nullptr, VERTEX_MODE_TRIANGLES, POINT_PARAMETER, points_vertices, texs_vertices, colors, POINT_PARAMETER, indices, BLEND_MODE_COLOR);
  OH_Drawing_CanvasDrawVertices(canvas_, VERTEX_MODE_TRIANGLES, POINT_PARAMETER, nullptr, texs_vertices, colors, POINT_PARAMETER, indices, BLEND_MODE_COLOR);
  OH_Drawing_CanvasDrawVertices(canvas_, VERTEX_MODE_TRIANGLES, POINT_PARAMETER, points_vertices, nullptr, colors, POINT_PARAMETER, indices, BLEND_MODE_COLOR);
  OH_Drawing_CanvasDrawVertices(canvas_, VERTEX_MODE_TRIANGLES, POINT_PARAMETER, points_vertices, texs_vertices, nullptr, POINT_PARAMETER, indices, BLEND_MODE_COLOR);
  OH_Drawing_CanvasDrawVertices(canvas_, VERTEX_MODE_TRIANGLES, POINT_PARAMETER, points_vertices, texs_vertices, colors, POINT_PARAMETER, nullptr, BLEND_MODE_COLOR);
  OH_Drawing_CanvasDrawVertices(nullptr, VERTEX_MODE_TRIANGLES, POINT_PARAMETER, nullptr, nullptr, nullptr, POINT_PARAMETER, nullptr, BLEND_MODE_COLOR);
  OH_Drawing_CanvasDrawVertices(canvas_, VERTEX_MODE_TRIANGLES, POINT_PARAMETER, points_vertices, texs_vertices, colors, POINT_PARAMETER, indices, BLEND_MODE_COLOR);
  EXPECT_TRUE(true);
}

/*
 * @tc.name: OH_Drawing_CanvasClipRoundRect
 * @tc.desc: test for OH_Drawing_CanvasClipRoundRect.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingCanvasTest, OH_Drawing_CanvasClipRoundRect, TestSize.Level1) {
  OH_Drawing_Rect *rect = OH_Drawing_RectCreate(10, 100, 200, 300);
  OH_Drawing_RoundRect *roundRect = OH_Drawing_RoundRectCreate(rect, 0, 0);
  OH_Drawing_RoundRectSetCorner(nullptr, OH_Drawing_CornerPos::CORNER_POS_BOTTOM_LEFT, {10, 10});
  OH_Drawing_RoundRectSetCorner(roundRect, OH_Drawing_CornerPos::CORNER_POS_BOTTOM_LEFT, {10, 10});
  OH_Drawing_CanvasClipRoundRect(canvas_, roundRect, OH_Drawing_CanvasClipOp::INTERSECT, true);
  OH_Drawing_CanvasDrawRect(canvas_, rect);

  OH_Drawing_RectDestroy(rect);
  OH_Drawing_RoundRectDestroy(roundRect);
  EXPECT_TRUE(true);
}

} // namespace XTSDrawing
} // namespace Rosen
} // namespace OHOS