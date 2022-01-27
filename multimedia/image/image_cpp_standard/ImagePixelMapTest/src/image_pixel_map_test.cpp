/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

#include <gtest/gtest.h>
#include "media_errors.h"
#include "pixel_map.h"

using namespace testing::ext;
using namespace OHOS::Media;

namespace OHOS {
namespace Multimedia {
static constexpr int32_t PIXEL_MAP_TEST_WIDTH = 3;
static constexpr int32_t PIXEL_MAP_TEST_HEIGHT = 3;
static constexpr int32_t PIXEL_MAP_RGB565_BYTE = 2;
static constexpr int32_t PIXEL_MAP_RGB888_BYTE = 3;
static constexpr int32_t PIXEL_MAP_ARGB8888_BYTE = 4;
constexpr int32_t PIXEL_MAP_BIG_TEST_WIDTH = 4 * 1024;
constexpr int32_t PIXEL_MAP_BIG_TEST_HEIGHT = 3 * 100;

class ImagePixelMapTest : public testing::Test {
public:
    ImagePixelMapTest() {};
    ~ImagePixelMapTest() {};
};

    std::unique_ptr<PixelMap> ConstructPixmap()
    {
        int32_t pixelMapWidth = 4;
        int32_t pixelMapHeight = 3;
        std::unique_ptr<PixelMap> pixelMap = std::make_unique<PixelMap>();
        ImageInfo info;
        info.size.width = pixelMapWidth;
        info.size.height = pixelMapHeight;
        info.pixelFormat = PixelFormat::RGB_888;
        info.colorSpace = ColorSpace::SRGB;
        pixelMap->SetImageInfo(info);

        int32_t rowDataSize = pixelMapWidth;
        uint32_t bufferSize = rowDataSize * pixelMapHeight;
        if (bufferSize <= 0) {
            return nullptr;
        }
        void *buffer = malloc(bufferSize);
        if (buffer == nullptr) {
            return nullptr;
        }
        char *ch = (char *)buffer;
        for (unsigned int i = 0; i < bufferSize; i++) {
            *(ch++) = (char)i;
        }

        pixelMap->SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);

        return pixelMap;
    }

    std::unique_ptr<PixelMap> ConstructBigPixmap()
    {
        int32_t pixelMapWidth = PIXEL_MAP_BIG_TEST_WIDTH;
        int32_t pixelMapHeight = PIXEL_MAP_BIG_TEST_HEIGHT;
        std::unique_ptr<PixelMap> pixelMap = std::make_unique<PixelMap>();
        ImageInfo info;
        info.size.width = pixelMapWidth;
        info.size.height = pixelMapHeight;
        info.pixelFormat = PixelFormat::RGB_888;
        info.colorSpace = ColorSpace::SRGB;
        pixelMap->SetImageInfo(info);

        int32_t bufferSize = pixelMap->GetByteCount();
        if (bufferSize <= 0) {
            return nullptr;
        }
        void *buffer = malloc(bufferSize);
        if (buffer == nullptr) {
            return nullptr;
        }
        char *ch = (char *)buffer;
        for (int32_t i = 0; i < bufferSize; i++) {
            *(ch++) = 'a';
        }

        pixelMap->SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);

        return pixelMap;
    }
/**
 * @tc.name: TC001
 * @tc.desc: create pixelmap using color，colorlength， offset，width and opts
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC001, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC001 start";
    /**
     * @tc.steps: step1. set color, colorlength, offset, width and initialization options
     * @tc.expected: step1. The new pixelmap is not null.
     */
    const uint32_t color[8] = { 0x80, 0x02, 0x04, 0x08, 0x40, 0x02, 0x04, 0x08 };
    uint32_t colorlength = sizeof(color) / sizeof(color[0]);
    const int32_t offset = 1;
    InitializationOptions opts;
    opts.size.width = 200;
    opts.size.height = 300;
    opts.pixelFormat = PixelFormat::ARGB_8888;
    opts.alphaType = AlphaType::IMAGE_ALPHA_TYPE_OPAQUE;
    int32_t width = opts.size.width;
    std::unique_ptr<PixelMap> newPixelMap = PixelMap::Create(color, colorlength, offset, width, opts);
    EXPECT_EQ(newPixelMap, nullptr);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC001 end";
}
/**
 * @tc.name: TC002
 * @tc.desc: create pixelmap with data
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC002, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC002 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    Parcel data;
    std::unique_ptr<PixelMap> pixelmap1 = ConstructPixmap();
    bool ret = pixelmap1.get()->Marshalling(data);
    EXPECT_EQ(true, ret);

    PixelMap *pixelmap2 = PixelMap::Unmarshalling(data);
    EXPECT_EQ(pixelmap1->GetHeight(), pixelmap2->GetHeight());
    EXPECT_EQ(pixelmap1->GetWidth(), pixelmap2->GetWidth());
    EXPECT_EQ(pixelmap1->GetPixelFormat(), pixelmap2->GetPixelFormat());
    EXPECT_EQ(pixelmap1->GetColorSpace(), pixelmap2->GetColorSpace());
    EXPECT_EQ(true, pixelmap1->IsSameImage(*pixelmap2));
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC002 end";
}
/**
 * @tc.name: TC003 Private
 * @tc.desc: copypixelmap
 * @tc.type: FUNC
 */
/**
 * @tc.name: TC004
 * @tc.desc: free pixelmap using FreePixelMap()
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC004, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC004 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */

    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    pixelMap.SetImageInfo(info);
    int32_t rowDataSize = (PIXEL_MAP_TEST_WIDTH + 3) / 4 * 4;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);
    pixelMap.FreePixelMap();
    uint8_t *data_ = nullptr;
    EXPECT_EQ(data_, nullptr);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC004 end";
}
/**
 * @tc.name: TC005
 * @tc.desc: read pixelmap according to area
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC005, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC005 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::BGRA_8888;
    info.colorSpace = ColorSpace::SRGB;
    info.alphaType = AlphaType::IMAGE_ALPHA_TYPE_UNPREMUL;
    pixelMap.SetImageInfo(info);
    int8_t  bytesPerPixel = 4;
    int32_t rowDataSize = bytesPerPixel * info.size.width;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);

    Rect region;
    region.width = 1;
    region.height = 1;
    region.left = 1;
    region.top = 1;
    const uint32_t offset = 1;
    const uint32_t stride = 4;
    bufferSize = static_cast<uint64_t>(bufferSize);
    uint8_t *dst = static_cast<uint8_t *>(malloc(bufferSize));
    uint32_t ret = pixelMap.ReadPixels(bufferSize, offset, stride, region, dst);
    EXPECT_EQ(ret, SUCCESS);
    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::BGRA_8888);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);

    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC005 end";
}
/**
 * @tc.name: TC006
 * @tc.desc: read pixelmap according to the specific point data
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC006, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC006 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::BGRA_8888;
    info.colorSpace = ColorSpace::SRGB;
    info.alphaType = AlphaType::IMAGE_ALPHA_TYPE_UNPREMUL;
    pixelMap.SetImageInfo(info);
    int8_t  bytesPerPixel = 4;
    int32_t rowDataSize = bytesPerPixel * info.size.width;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);

    Position pos;
    pos.x=0;
    pos.y=0;
    uint32_t dst = 0;
    uint32_t ret = pixelMap.ReadPixel(pos, dst);
    EXPECT_EQ(ret, SUCCESS);
    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::BGRA_8888);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);

    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC006 end";
}
/**
 * @tc.name:  TC007
 * @tc.desc: WritePixels pixelmap according to area data
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest,  TC007, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest:  TC007 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    const uint32_t color[8] = { 0x80, 0x02, 0x04, 0x08, 0x40, 0x02, 0x04, 0x08 };
    uint32_t colorlength = sizeof(color) / sizeof(color[0]);
    int32_t offset_ = 1;
    InitializationOptions opts;
    opts.size.width = 1;
    opts.size.height = 1;
    opts.pixelFormat = PixelFormat::BGRA_8888;
    opts.alphaType = AlphaType::IMAGE_ALPHA_TYPE_UNPREMUL;
    opts.editable = true;
    int32_t width = opts.size.width;
    std::unique_ptr<PixelMap> pixelMap = PixelMap::Create(color, colorlength, offset_, width, opts);
    EXPECT_NE(pixelMap, nullptr);

    int8_t  bytesPerPixel = 4;
    int32_t rowDataSize = bytesPerPixel * opts.size.width;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap->SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap->GetPixels());
    EXPECT_NE(data, nullptr);

    Rect region;
    region.left = 0;
    region.top = 0;
    region.width = 1;
    region.height = 1;
    const uint32_t offset = 1;
    const uint32_t stride = 4;
    bufferSize = static_cast<uint64_t>(bufferSize);
    const uint8_t *source = static_cast<uint8_t *>(malloc(bufferSize));
    uint32_t ret = pixelMap->WritePixels(source, bufferSize, offset, stride, region);
    EXPECT_EQ(ret, SUCCESS);
    GTEST_LOG_(INFO) << "ImagePixelMapTest:  TC007 end";
}
/**
 * @tc.name: TC008
 * @tc.desc: write pixelmap according to position
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC008, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC008 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    const uint32_t color[8] = { 0x80, 0x02, 0x04, 0x08, 0x40, 0x02, 0x04, 0x08 };
    uint32_t colorlength = sizeof(color) / sizeof(color[0]);
    const int32_t offset = 1;
    InitializationOptions opts;
    opts.size.width = 1;
    opts.size.height = 1;
    opts.pixelFormat = PixelFormat::BGRA_8888;
    opts.alphaType = AlphaType::IMAGE_ALPHA_TYPE_UNPREMUL;
    opts.editable = true;
    int32_t width = opts.size.width;
    std::unique_ptr<PixelMap> pixelMap = PixelMap::Create(color, colorlength, offset, width, opts);
    EXPECT_NE(pixelMap, nullptr);

    int8_t  bytesPerPixel = 4;
    int32_t rowDataSize = bytesPerPixel * opts.size.width;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap->SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap->GetPixels());
    EXPECT_NE(data, nullptr);

    Position pos;
    pos.x=0;
    pos.y=0;
    const uint32_t color_ = 0;
    uint32_t ret = pixelMap->WritePixel(pos, color_);
    EXPECT_EQ(ret, SUCCESS);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC008 end";
}
/**
 * @tc.name: TC009
 * @tc.desc: Use GetImageInfo to get the properties of pixelmap (including pixelmapFormat, witdth, height)
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC009, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC009 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    pixelMap.SetImageInfo(info);

    ImageInfo info_;
    pixelMap.GetImageInfo(info_);
    EXPECT_EQ(info.size.width, info_.size.width);
    EXPECT_EQ(info.size.height, info_.size.height);
    EXPECT_EQ(info.pixelFormat, info_.pixelFormat);
    EXPECT_EQ(info.colorSpace, info_.colorSpace);

    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC009 end";
}

/**
 * @tc.name: TC000
 * @tc.desc: ALPHA_8 pixel format pixel map operation
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC000, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC000 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    pixelMap.SetImageInfo(info);
    int32_t rowDataSize = (PIXEL_MAP_TEST_WIDTH + 3) / 4 * 4;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);
    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::ALPHA_8);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetPixelBytes(), 1);
    EXPECT_EQ(pixelMap.GetRowBytes(), rowDataSize);
    EXPECT_EQ(pixelMap.GetByteCount(), PIXEL_MAP_TEST_HEIGHT * rowDataSize);
    /**
     * @tc.steps: step2. Get image info.
     * @tc.expected: step2. The pixel map info is correct
     */
    ImageInfo outInfo;
    pixelMap.GetImageInfo(outInfo);
    EXPECT_EQ(outInfo.size.width, info.size.width);
    EXPECT_EQ(outInfo.size.height, info.size.height);
    EXPECT_EQ(outInfo.pixelFormat, info.pixelFormat);
    EXPECT_EQ(outInfo.colorSpace, info.colorSpace);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC000 end";
}

/**
 * @tc.name: TC012
 * @tc.desc:  get the pixelmap size
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC012, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC012 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    pixelMap.SetImageInfo(info);
    int32_t rowDataSize = (PIXEL_MAP_TEST_WIDTH + 3) / 4 * 4;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);


    EXPECT_EQ(pixelMap.GetPixelBytes(), 1);
    EXPECT_EQ(pixelMap.GetRowBytes(), rowDataSize);


    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC012 end";
}
/**
 * @tc.name: TC013 Private
 * @tc.desc: GetPixelFormatDetail
 * @tc.type: FUNC
 */
/**
 * @tc.name: TC014
 * @tc.desc: Use PixelMap::GetPixel8 to get the location
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC014, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC014 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    pixelMap.SetImageInfo(info);
    int32_t rowDataSize = (PIXEL_MAP_TEST_WIDTH + 3) / 4 * 4;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);
    int32_t x = 0;
    int32_t y = 0;
    uint8_t *ret = const_cast<uint8_t *>(pixelMap.GetPixel8(x, y));
    EXPECT_NE(ret, nullptr);

    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::ALPHA_8);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetPixelBytes(), 1);
    EXPECT_EQ(pixelMap.GetRowBytes(), rowDataSize);
    EXPECT_EQ(pixelMap.GetByteCount(), PIXEL_MAP_TEST_HEIGHT * rowDataSize);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC014 end";
}
/**
 * @tc.name: TC015
 * @tc.desc: Use PixelMap::GetPixel16 to get the location
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC015, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC015 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::RGB_565;
    info.colorSpace = ColorSpace::SRGB;
    pixelMap.SetImageInfo(info);
    int8_t bytesPerPixel = 2;
    int32_t rowDataSize = bytesPerPixel * info.size.width;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);
    int32_t x = 0;
    int32_t y = 0;
    uint16_t *ret = const_cast<uint16_t *>(pixelMap.GetPixel16(x, y));
    EXPECT_NE(ret, nullptr);

    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::RGB_565);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetPixelBytes(), bytesPerPixel);
    EXPECT_EQ(pixelMap.GetRowBytes(), rowDataSize);
    EXPECT_EQ(pixelMap.GetByteCount(), PIXEL_MAP_TEST_HEIGHT * rowDataSize);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC015 end";
}
/**
 * @tc.name: TC016
 * @tc.desc: Use PixelMap::GetPixel32 to get the location
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC016, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC016 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ARGB_8888;
    info.colorSpace = ColorSpace::SRGB;
    pixelMap.SetImageInfo(info);
    int8_t  bytesPerPixel = 4;
    int32_t rowDataSize = bytesPerPixel * info.size.width;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);
    int32_t x = 0;
    int32_t y = 0;
    uint32_t *ret = const_cast<uint32_t *>(pixelMap.GetPixel32(x, y));
    EXPECT_NE(ret, nullptr);

    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::ARGB_8888);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetPixelBytes(), bytesPerPixel);
    EXPECT_EQ(pixelMap.GetRowBytes(), rowDataSize);
    EXPECT_EQ(pixelMap.GetByteCount(), PIXEL_MAP_TEST_HEIGHT * rowDataSize);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC016 end";
}
/**
 * @tc.name: TC017
 * @tc.desc: Use PixelMap::GetPixel to get the location
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC017, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC017 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    pixelMap.SetImageInfo(info);
    int32_t rowDataSize = (PIXEL_MAP_TEST_WIDTH + 3) / 4 * 4;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);
    int32_t x = 0;
    int32_t y = 0;
    uint8_t *ret = const_cast<uint8_t *>(pixelMap.GetPixel(x, y));
    EXPECT_NE(ret, nullptr);

    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::ALPHA_8);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetPixelBytes(), 1);
    EXPECT_EQ(pixelMap.GetRowBytes(), rowDataSize);
    EXPECT_EQ(pixelMap.GetByteCount(), PIXEL_MAP_TEST_HEIGHT * rowDataSize);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC017 end";
}
/**
 * @tc.name: TC018 Private
 * @tc.desc: SourceCropAndConvert
 * @tc.type: FUNC
 */
/**
 * @tc.name: TC019
 * @tc.desc: Get AllocatorType
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC019, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC019 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    pixelMap.SetImageInfo(info);
    int32_t rowDataSize = (PIXEL_MAP_TEST_WIDTH + 3) / 4 * 4;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);
    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::ALPHA_8);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetPixelBytes(), 1);
    EXPECT_EQ(pixelMap.GetRowBytes(), rowDataSize);
    EXPECT_EQ(pixelMap.GetByteCount(), PIXEL_MAP_TEST_HEIGHT * rowDataSize);
    EXPECT_EQ(pixelMap.GetAllocatorType(), AllocatorType::HEAP_ALLOC);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC019 end";
}
/**
 * @tc.name: TC069
 * @tc.desc: test ResetConfig
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC069, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC069 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    info.alphaType = AlphaType::IMAGE_ALPHA_TYPE_OPAQUE;
    pixelMap.SetImageInfo(info);
    int32_t rowDataSize = (PIXEL_MAP_TEST_WIDTH + 3) / 4 * 4;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);

    Size size;
    size.width = info.size.width;
    size.height = info.size.height;
    PixelFormat format = info.pixelFormat;
    uint32_t ret = pixelMap.ResetConfig(size, format);
    EXPECT_EQ(ret, SUCCESS);
    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::ALPHA_8);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetPixelBytes(), 1);
    EXPECT_EQ(pixelMap.GetRowBytes(), rowDataSize);
    EXPECT_EQ(pixelMap.GetByteCount(), PIXEL_MAP_TEST_HEIGHT * rowDataSize);

    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC069 end";
}

/**
 * @tc.name: TC070
 * @tc.desc: test SetAlphaType
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC070, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC070 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    pixelMap.SetImageInfo(info);
    int32_t rowDataSize = (PIXEL_MAP_TEST_WIDTH + 3) / 4 * 4;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);

    AlphaType alphaType;
    bool ret = pixelMap.SetAlphaType(alphaType);
    EXPECT_EQ(true, ret);
    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::ALPHA_8);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetPixelBytes(), 1);
    EXPECT_EQ(pixelMap.GetRowBytes(), rowDataSize);
    EXPECT_EQ(pixelMap.GetByteCount(), PIXEL_MAP_TEST_HEIGHT * rowDataSize);

    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC070 end";
}
/**
 * @tc.name: TC071
 * @tc.desc: Create pixelmap using source and opts
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC071, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC071 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */

    PixelMap source;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    source.SetImageInfo(info);
    int32_t rowDataSize = (PIXEL_MAP_TEST_WIDTH + 3) / 4 * 4;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    source.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(source.GetPixels());
    EXPECT_NE(data, nullptr);

    InitializationOptions opts;
    opts.size.width = 200;
    opts.size.height = 300;
    opts.pixelFormat = PixelFormat::ARGB_8888;
    opts.alphaType = AlphaType::IMAGE_ALPHA_TYPE_OPAQUE;

    std::unique_ptr<PixelMap> pixelMap = PixelMap::Create(source, opts);
    EXPECT_EQ(pixelMap, nullptr);

    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC071 end";
}
/**
 * @tc.name: TC072
 * @tc.desc: Create pixelmap using source, srcRect, opts
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC072, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC072 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap source;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    source.SetImageInfo(info);
    int32_t rowDataSize = (PIXEL_MAP_TEST_WIDTH + 3) / 4 * 4;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    source.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(source.GetPixels());
    EXPECT_NE(data, nullptr);

    InitializationOptions opts;
    opts.size.width = 200;
    opts.size.height = 300;
    opts.pixelFormat = PixelFormat::ARGB_8888;
    opts.alphaType = AlphaType::IMAGE_ALPHA_TYPE_OPAQUE;

    Rect srcRect;
    srcRect.top = 1;
    srcRect.left = 1;
    srcRect.height = 1;
    srcRect.width = 1;
    std::unique_ptr<PixelMap> pixelMap = PixelMap::Create(source, srcRect, opts);
    EXPECT_EQ(pixelMap, nullptr);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC072 end";
}
/**
 * @tc.name: TC073
 * @tc.desc: Test IsSameImage
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC073, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC073 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    pixelMap.SetImageInfo(info);
    int32_t rowDataSize = (PIXEL_MAP_TEST_WIDTH + 3) / 4 * 4;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);
    PixelMap other;
    bool ret = pixelMap.IsSameImage(other);
    EXPECT_NE(true, ret);

    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::ALPHA_8);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetPixelBytes(), 1);
    EXPECT_EQ(pixelMap.GetRowBytes(), rowDataSize);
    EXPECT_EQ(pixelMap.GetByteCount(), PIXEL_MAP_TEST_HEIGHT * rowDataSize);

    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC073 end";
}
/**
 * @tc.name: TC074
 * @tc.desc: WritePixels according to source, bufferSize
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC074, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC074 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    const uint32_t color[8] = { 0x80, 0x02, 0x04, 0x08, 0x40, 0x02, 0x04, 0x08 };
    uint32_t colorlength = sizeof(color) / sizeof(color[0]);
    const int32_t offset = 1;
    InitializationOptions opts;
    opts.size.width = 1;
    opts.size.height = 1;
    opts.pixelFormat = PixelFormat::BGRA_8888;
    opts.alphaType = AlphaType::IMAGE_ALPHA_TYPE_UNPREMUL;
    opts.editable = true;
    int32_t width = opts.size.width;
    std::unique_ptr<PixelMap> pixelMap = PixelMap::Create(color, colorlength, offset, width, opts);
    EXPECT_NE(pixelMap, nullptr);

    int8_t  bytesPerPixel = 4;
    int32_t rowDataSize = bytesPerPixel * opts.size.width;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap->SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap->GetPixels());
    EXPECT_NE(data, nullptr);

    bufferSize = static_cast<uint64_t>(bufferSize);
    const uint8_t *source = static_cast<uint8_t *>(malloc(bufferSize));
    uint32_t ret = pixelMap->WritePixels(source, bufferSize);
    EXPECT_EQ(ret, SUCCESS);

    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC074 end";
}
/**
 * @tc.name: TC075
 * @tc.desc: WritePixels according to color
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC075, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC075 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    const uint32_t color[8] = { 0x80, 0x02, 0x04, 0x08, 0x40, 0x02, 0x04, 0x08 };
    uint32_t colorlength = sizeof(color) / sizeof(color[0]);
    const int32_t offset = 1;
    InitializationOptions opts;
    opts.size.width = 1;
    opts.size.height = 1;
    opts.pixelFormat = PixelFormat::BGRA_8888;
    opts.alphaType = AlphaType::IMAGE_ALPHA_TYPE_UNPREMUL;
    opts.editable = true;
    int32_t width = opts.size.width;
    std::unique_ptr<PixelMap> pixelMap = PixelMap::Create(color, colorlength, offset, width, opts);
    EXPECT_NE(pixelMap, nullptr);

    int8_t  bytesPerPixel = 4;
    int32_t rowDataSize = bytesPerPixel * opts.size.width;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap->SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap->GetPixels());
    EXPECT_NE(data, nullptr);
    const uint32_t color_ = 0;
    bool ret = pixelMap->WritePixels(color_);
    EXPECT_EQ(true, ret);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC075 end";
}
/**
 * @tc.name: TC076
 * @tc.desc: Set imageinfo according to imageinfo
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC076, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC076 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    uint32_t ret = pixelMap.SetImageInfo(info);
    EXPECT_EQ(ret, SUCCESS);
    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::ALPHA_8);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC076 end";
}
/**
 * @tc.name: TC077
 * @tc.desc: Set imageinfo according to imageinfo and isReused
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC077, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC077 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    bool isReused = false;
    uint32_t ret = pixelMap.SetImageInfo(info, isReused);
    EXPECT_EQ(ret, SUCCESS);
    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::ALPHA_8);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC077 end";
}
/**
 * @tc.name: TC078
 * @tc.desc: GetBaseDensity
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, TC078, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC078 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    info.baseDensity = 0;
    pixelMap.SetImageInfo(info);
    int32_t rowDataSize = (PIXEL_MAP_TEST_WIDTH + 3) / 4 * 4;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);
    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::ALPHA_8);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetBaseDensity(), 0);
    EXPECT_EQ(pixelMap.GetPixelBytes(), 1);
    EXPECT_EQ(pixelMap.GetRowBytes(), rowDataSize);
    EXPECT_EQ(pixelMap.GetByteCount(), PIXEL_MAP_TEST_HEIGHT * rowDataSize);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: TC078 end";
}
/**
 * @tc.name: TC079
 * @tc.desc: GetHeight(), GetWidth()...
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest,  TC079, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest:  TC079 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    pixelMap.SetImageInfo(info);
    int32_t rowDataSize = (PIXEL_MAP_TEST_WIDTH + 3) / 4 * 4;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);
    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::ALPHA_8);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetPixelBytes(), 1);
    EXPECT_EQ(pixelMap.GetRowBytes(), rowDataSize);
    EXPECT_EQ(pixelMap.GetByteCount(), PIXEL_MAP_TEST_HEIGHT * rowDataSize);

    /**
     * @tc.steps: step2. Set image color data and get image color value.
     * @tc.expected: step2. The image color value is correct
     */
    for (int32_t i = 0; i < rowDataSize * PIXEL_MAP_TEST_HEIGHT; i++) {
        data[i] = i;
    }
    uint32_t color = 0;
    EXPECT_NE(pixelMap.GetPixel8(1, 1), nullptr);
    EXPECT_EQ(*pixelMap.GetPixel8(1, 1), 0x05);
    EXPECT_EQ(pixelMap.GetARGB32Color(1, 1, color), true);
    EXPECT_EQ(pixelMap.GetARGB32ColorA(color), 5);
    EXPECT_EQ(pixelMap.GetARGB32ColorR(color), 0);
    EXPECT_EQ(pixelMap.GetARGB32ColorG(color), 0);
    EXPECT_EQ(pixelMap.GetARGB32ColorB(color), 0);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap001 end";
    GTEST_LOG_(INFO) << "ImagePixelMapTest:  TC079 end";
}
/**
 * @tc.name: ImagePixelMap001
 * @tc.desc: ALPHA_8 pixel format pixel map operation
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, ImagePixelMap001, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap001 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ALPHA_8;
    info.colorSpace = ColorSpace::SRGB;
    pixelMap.SetImageInfo(info);
    int32_t rowDataSize = (PIXEL_MAP_TEST_WIDTH + 3) / 4 * 4;
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);
    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::ALPHA_8);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetPixelBytes(), 1);
    EXPECT_EQ(pixelMap.GetRowBytes(), rowDataSize);
    EXPECT_EQ(pixelMap.GetByteCount(), PIXEL_MAP_TEST_HEIGHT * rowDataSize);
    /**
     * @tc.steps: step2. Get image info.
     * @tc.expected: step2. The pixel map info is correct
     */
    ImageInfo outInfo;
    pixelMap.GetImageInfo(outInfo);
    EXPECT_EQ(outInfo.size.width, info.size.width);
    EXPECT_EQ(outInfo.size.height, info.size.height);
    EXPECT_EQ(outInfo.pixelFormat, info.pixelFormat);
    EXPECT_EQ(outInfo.colorSpace, info.colorSpace);
    /**
     * @tc.steps: step3. Set image color data and get image color value.
     * @tc.expected: step3. The image color value is correct
     */
    for (int32_t i = 0; i < rowDataSize * PIXEL_MAP_TEST_HEIGHT; i++) {
        data[i] = i;
    }
    uint32_t color = 0;
    EXPECT_NE(pixelMap.GetPixel8(1, 1), nullptr);
    EXPECT_EQ(*pixelMap.GetPixel8(1, 1), 0x05);
    EXPECT_EQ(pixelMap.GetARGB32Color(1, 1, color), true);
    EXPECT_EQ(pixelMap.GetARGB32ColorA(color), 5);
    EXPECT_EQ(pixelMap.GetARGB32ColorR(color), 0);
    EXPECT_EQ(pixelMap.GetARGB32ColorG(color), 0);
    EXPECT_EQ(pixelMap.GetARGB32ColorB(color), 0);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap001 end";
}

/**
 * @tc.name: ImagePixelMap002
 * @tc.desc: RGB_565 pixel format pixel map operation
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, ImagePixelMap002, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap002 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    int8_t bytesPerPixel = 2;
    int8_t rowDataSize = PIXEL_MAP_TEST_WIDTH * bytesPerPixel;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::RGB_565;
    info.colorSpace = ColorSpace::SRGB;
    pixelMap.SetImageInfo(info);
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);
    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::RGB_565);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetPixelBytes(), bytesPerPixel);
    EXPECT_EQ(pixelMap.GetRowBytes(), rowDataSize);
    EXPECT_EQ(pixelMap.GetByteCount(), PIXEL_MAP_TEST_HEIGHT * rowDataSize);
    /**
     * @tc.steps: step2. Set image color data and get image color value.
     * @tc.expected: step2. The image color value is correct
     */
    for (int32_t i = 0; i < PIXEL_MAP_TEST_WIDTH * PIXEL_MAP_RGB565_BYTE * PIXEL_MAP_TEST_HEIGHT; i++) {
        data[i] = i;
    }
    EXPECT_NE(pixelMap.GetPixel16(1, 1), nullptr);
    EXPECT_EQ(*pixelMap.GetPixel16(1, 1), 0x0908);
    uint32_t color = 0;
    uint32_t expect = 0xFF422008;
    EXPECT_EQ(pixelMap.GetARGB32Color(1, 1, color), true);
    EXPECT_EQ(color, expect);
    // RGB565: binary: 0000100100001000
    // split to :         00001       001000          01000
    //                      |           |                |
    //                      B           G                R
    // transfer to RGB888:
    //                      1           8                8
    // multi 256(8bit length)
    //                 256*1/2^5    256*8/2^6       256*8/2^5
    // another method:
    //                 (x<<3 | x>>2)  (x<<2 | x>>4)
    EXPECT_EQ(pixelMap.GetARGB32ColorA(color), 255);
    EXPECT_EQ(pixelMap.GetARGB32ColorR(color), 66);  // (8<<3 | 8 >> 2)
    EXPECT_EQ(pixelMap.GetARGB32ColorG(color), 32);  // (8<<2 | 8 >> 4)
    EXPECT_EQ(pixelMap.GetARGB32ColorB(color), 8);   // (1<<3 | 1 >> 2)
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap002 end";
}

/**
 * @tc.name: ImagePixelMap003
 * @tc.desc: ARGB_8888 pixel format pixel map operation
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, ImagePixelMap003, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap003 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    int8_t bytesPerPixel = 4;
    int8_t rowDataSize = PIXEL_MAP_TEST_WIDTH * bytesPerPixel;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ARGB_8888;
    info.colorSpace = ColorSpace::SRGB;
    PixelMap pixelMap;
    pixelMap.SetImageInfo(info);
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);
    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::ARGB_8888);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetPixelBytes(), bytesPerPixel);
    EXPECT_EQ(pixelMap.GetRowBytes(), rowDataSize);
    EXPECT_EQ(pixelMap.GetByteCount(), PIXEL_MAP_TEST_HEIGHT * rowDataSize);
    /**
     * @tc.steps: step2. Set image color data and get image color value.
     * @tc.expected: step2. The image color value is correct
     */
    for (int32_t i = 0; i < PIXEL_MAP_TEST_WIDTH * PIXEL_MAP_ARGB8888_BYTE * PIXEL_MAP_TEST_HEIGHT; i++) {
        data[i] = i;
    }
    EXPECT_NE(pixelMap.GetPixel(1, 1), nullptr);
    EXPECT_EQ(*pixelMap.GetPixel32(1, 1), static_cast<uint32_t>(0x13121110));
    uint32_t color = 0;
    EXPECT_EQ(pixelMap.GetARGB32Color(1, 1, color), true);
    EXPECT_EQ(pixelMap.GetARGB32ColorA(color), 0x10);
    EXPECT_EQ(pixelMap.GetARGB32ColorR(color), 0x11);
    EXPECT_EQ(pixelMap.GetARGB32ColorG(color), 0x12);
    EXPECT_EQ(pixelMap.GetARGB32ColorB(color), 0x13);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap003 end";
}

/**
 * @tc.name: ImagePixelMap004
 * @tc.desc: Get pixel position out of image range
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, ImagePixelMap004, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap004 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    PixelMap pixelMap;
    int8_t bytesPerPixel = 4;
    int8_t rowDataSize = PIXEL_MAP_TEST_WIDTH * bytesPerPixel;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::ARGB_8888;
    info.colorSpace = ColorSpace::SRGB;
    pixelMap.SetImageInfo(info);
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);
    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::ARGB_8888);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetByteCount(), PIXEL_MAP_TEST_HEIGHT * rowDataSize);
    /**
     * @tc.steps: step2. Set image color data and get image color value.
     * @tc.expected: step2. Get image color value failed, because of position out of image range.
     */
    for (int32_t i = 0; i < PIXEL_MAP_TEST_WIDTH * PIXEL_MAP_ARGB8888_BYTE * PIXEL_MAP_TEST_HEIGHT; i++) {
        data[i] = i;
    }
    EXPECT_EQ(pixelMap.GetPixel32(4, 4), nullptr);
    EXPECT_EQ(pixelMap.GetPixel(-1, -1), nullptr);
    uint32_t color = 0;
    EXPECT_EQ(pixelMap.GetARGB32Color(4, 4, color), false);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap004 end";
}

/**
 * @tc.name: ImagePixelMap005
 * @tc.desc: Set error image size
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, ImagePixelMap005, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap005 start";
    /**
     * @tc.steps: step1. Set image error info include image height and width.
     * @tc.expected: step1. The pixel map info is default value.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = -10;
    info.size.height = 10;
    EXPECT_EQ(pixelMap.SetImageInfo(info), ERR_IMAGE_DATA_ABNORMAL);
    EXPECT_EQ(pixelMap.GetHeight(), 0);
    EXPECT_EQ(pixelMap.GetWidth(), 0);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::UNKNOWN);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetByteCount(), 0);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_EQ(data, nullptr);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap005 end";
}

/**
 * @tc.name: ImagePixelMap006
 * @tc.desc: Set unknown pixel format and color space
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, ImagePixelMap006, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap006 start";
    /**
     * @tc.steps: step1. Set image unknown pixel format and color space info.
     * @tc.expected: step1. The pixel map info is default value.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = 10;
    info.size.height = 10;
    EXPECT_EQ(pixelMap.SetImageInfo(info), ERR_IMAGE_DATA_UNSUPPORT);
    EXPECT_EQ(pixelMap.GetHeight(), 0);
    EXPECT_EQ(pixelMap.GetWidth(), 0);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::UNKNOWN);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetByteCount(), 0);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_EQ(data, nullptr);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap006 end";
}

/**
 * @tc.name: ImagePixelMap007
 * @tc.desc: Set pixel map size out of max value
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, ImagePixelMap007, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap007 start";
    /**
     * @tc.steps: step1. Set image size out of max value (500MB).
     * @tc.expected: step1. The pixel map info is default value.
     */
    PixelMap pixelMap;
    ImageInfo info;
    info.size.width = 500 * 1024;
    info.size.height = 500 * 1024;
    info.pixelFormat = PixelFormat::ARGB_8888;
    info.colorSpace = ColorSpace::SRGB;
    EXPECT_EQ(pixelMap.SetImageInfo(info), ERR_IMAGE_TOO_LARGE);
    EXPECT_EQ(pixelMap.GetHeight(), 0);
    EXPECT_EQ(pixelMap.GetWidth(), 0);
    EXPECT_EQ(pixelMap.GetByteCount(), 0);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_EQ(data, nullptr);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap007 end";
}

/**
 * @tc.name: ImagePixelMap008
 * @tc.desc: RGB_888 pixel format pixel map operation
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, ImagePixelMap008, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap008 start";
    /**
     * @tc.steps: step1. Set image info and alloc pixel map memory.
     * @tc.expected: step1. The pixel map info is correct.
     */
    int8_t bytesPerPixel = 3;
    int8_t rowDataSize = PIXEL_MAP_TEST_WIDTH * bytesPerPixel;
    ImageInfo info;
    info.size.width = PIXEL_MAP_TEST_WIDTH;
    info.size.height = PIXEL_MAP_TEST_HEIGHT;
    info.pixelFormat = PixelFormat::RGB_888;
    info.colorSpace = ColorSpace::SRGB;
    PixelMap pixelMap;
    pixelMap.SetImageInfo(info);
    uint32_t bufferSize = rowDataSize * PIXEL_MAP_TEST_HEIGHT;
    void *buffer = malloc(bufferSize);
    EXPECT_NE(buffer, nullptr);
    pixelMap.SetPixelsAddr(buffer, nullptr, bufferSize, AllocatorType::HEAP_ALLOC, nullptr);
    uint8_t *data = const_cast<uint8_t *>(pixelMap.GetPixels());
    EXPECT_NE(data, nullptr);
    EXPECT_EQ(pixelMap.GetHeight(), PIXEL_MAP_TEST_HEIGHT);
    EXPECT_EQ(pixelMap.GetWidth(), PIXEL_MAP_TEST_WIDTH);
    EXPECT_EQ(pixelMap.GetPixelFormat(), PixelFormat::RGB_888);
    EXPECT_EQ(pixelMap.GetColorSpace(), ColorSpace::SRGB);
    EXPECT_EQ(pixelMap.GetPixelBytes(), bytesPerPixel);
    EXPECT_EQ(pixelMap.GetRowBytes(), rowDataSize);
    EXPECT_EQ(pixelMap.GetByteCount(), PIXEL_MAP_TEST_HEIGHT * rowDataSize);
    /**
     * @tc.steps: step2. Set image color data and get image color value.
     * @tc.expected: step2. The image color value is correct
     */
    for (int32_t i = 0; i < PIXEL_MAP_TEST_WIDTH * PIXEL_MAP_RGB888_BYTE * PIXEL_MAP_TEST_HEIGHT; i++) {
        data[i] = i;
    }
    EXPECT_NE(pixelMap.GetPixel(1, 1), nullptr);
    uint32_t color = 0;
    EXPECT_EQ(pixelMap.GetARGB32Color(1, 1, color), true);
    EXPECT_EQ(pixelMap.GetARGB32ColorA(color), 255);
    EXPECT_EQ(pixelMap.GetARGB32ColorR(color), 12);
    EXPECT_EQ(pixelMap.GetARGB32ColorG(color), 13);
    EXPECT_EQ(pixelMap.GetARGB32ColorB(color), 14);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap008 end";
}

/**
 * @tc.name: ImagePixelMap009
 * @tc.desc: create pixelmap with wrong source and correct initialization options
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, ImagePixelMap009, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap009 start";
    /**
     * @tc.steps: step1. set source pixelmap wrong and correct initialization options
     * @tc.expected: step1. The new pixelmap is null.
     */
    PixelMap srcPixelMap;
    ImageInfo imageInfo;
    srcPixelMap.SetImageInfo(imageInfo);
    InitializationOptions opts;
    opts.size.width = 200;
    opts.size.height = 300;
    opts.pixelFormat = PixelFormat::ARGB_8888;
    opts.alphaType = AlphaType::IMAGE_ALPHA_TYPE_OPAQUE;
    std::unique_ptr<PixelMap> newPixelMap = PixelMap::Create(srcPixelMap, opts);
    EXPECT_EQ(newPixelMap, nullptr);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap009 end";
}
/**
* @tc.name: ImagePixelMap010
* @tc.desc: test WriteToParcel
* @tc.type: FUNC
* @tc.require: AR000FTAMO
*/
HWTEST_F(ImagePixelMapTest, ImagePixelMap010, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap010 start";

    Parcel data;

    std::unique_ptr<PixelMap> pixelmap = ConstructPixmap();

    bool ret = pixelmap.get()->Marshalling(data);

    EXPECT_EQ(true, ret);

    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap010 end";
}

/**
 * @tc.name: ImagePixelMap012
 * @tc.desc: create pixelmap with color, colorlength, offset, width and initialization options
 * @tc.type: FUNC
 */
HWTEST_F(ImagePixelMapTest, ImagePixelMap012, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap012 start";
    /**
     * @tc.steps: step1. set color, colorlength, offset, width and initialization options
     * @tc.expected: step1. The new pixelmap is not null.
     */
    const uint32_t color[8] = { 0x80, 0x02, 0x04, 0x08, 0x40, 0x02, 0x04, 0x08 };
    uint32_t colorlength = sizeof(color) / sizeof(color[0]);
    const int32_t offset = 1;
    InitializationOptions opts;
    opts.size.width = 200;
    opts.size.height = 300;
    opts.pixelFormat = PixelFormat::ARGB_8888;
    opts.alphaType = AlphaType::IMAGE_ALPHA_TYPE_OPAQUE;
    int32_t width = opts.size.width;

    std::unique_ptr<PixelMap> newPixelMap = PixelMap::Create(color, colorlength, offset, width, opts);
    EXPECT_EQ(newPixelMap, nullptr);
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap012 end";
}

/**
* @tc.name: ImagePixelMap013
* @tc.desc: test CreateFromParcel
* @tc.type: FUNC
* @tc.require: AR000FTAMO
*/
HWTEST_F(ImagePixelMapTest, ImagePixelMap013, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap013 start";

    Parcel data;
    std::unique_ptr<PixelMap> pixelmap1 = ConstructBigPixmap();
    EXPECT_NE(pixelmap1, nullptr);
    GTEST_LOG_(INFO) << "ImagePixelMap013 ConstructPixmap success";
    bool ret = pixelmap1.get()->Marshalling(data);
    GTEST_LOG_(INFO) << "ImagePixelMap013 Marshalling success";
    EXPECT_EQ(true, ret);

    PixelMap *pixelmap2 = PixelMap::Unmarshalling(data);
    GTEST_LOG_(INFO) << "ImagePixelMap013 Unmarshalling success";
    GTEST_LOG_(INFO) << "ImagePixelMap013 pixelmap1 GetHeight :" << pixelmap1->GetHeight();
    GTEST_LOG_(INFO) << "ImagePixelMap013 pixelmap2 GetHeight :" << pixelmap2->GetHeight();
    EXPECT_EQ(pixelmap1->GetHeight(), pixelmap2->GetHeight());
    GTEST_LOG_(INFO) << "ImagePixelMap013 GetHeight success";
    EXPECT_EQ(pixelmap1->GetWidth(), pixelmap2->GetWidth());
    GTEST_LOG_(INFO) << "ImagePixelMap013 GetWidth success";
    EXPECT_EQ(pixelmap1->GetPixelFormat(), pixelmap2->GetPixelFormat());
    GTEST_LOG_(INFO) << "ImagePixelMap013 GetPixelFormat success";
    EXPECT_EQ(pixelmap1->GetColorSpace(), pixelmap2->GetColorSpace());
    GTEST_LOG_(INFO) << "ImagePixelMap013 GetColorSpace success";
    EXPECT_EQ(true, pixelmap1->IsSameImage(*pixelmap2));
    GTEST_LOG_(INFO) << "ImagePixelMapTest: ImagePixelMap013 end";
}
} // namespace Multimedia
} // namespace OHOS
