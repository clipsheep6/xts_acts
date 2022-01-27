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
#include "basic_transformer.h"
#include "securec.h"

using namespace testing::ext;
using namespace OHOS::Media;
namespace OHOS {
namespace Multimedia {
static const int32_t NUM_0 = 0;
static const int32_t NUM_1 = 1;
static const int32_t NUM_2 = 2;
static const float  NUM_2f = 2.0f;
static const int32_t NUM_3 = 3;
static const int32_t NUM_4 = 4;
static const int32_t NUM_5 = 5;
static const int32_t NUM_6 = 6;
static const int32_t NUM_8 = 8;
static const int32_t NUM_42 = 42;
static const int32_t NUM_47 = 47;
static const int32_t NUM_90 = 90;
static const int32_t NUM_163 = 163;
static const int32_t NUM_180 = 180;
static const int32_t NUM_213 = 213;
static const int32_t NUM_234 = 234;
static const int32_t NUM_255 = 255;

class ImageTransformTest : public testing::Test {
public:
    ImageTransformTest() {};
    ~ImageTransformTest() {};
};

void ConstructPixmapInfo(PixmapInfo &pixmapInfo)
{
    pixmapInfo.imageInfo.size.width = NUM_3;
    pixmapInfo.imageInfo.size.height = NUM_4;
    pixmapInfo.imageInfo.pixelFormat = PixelFormat::ARGB_8888;
    pixmapInfo.imageInfo.colorSpace = ColorSpace::SRGB;
    int32_t width = NUM_3;
    int32_t height = NUM_4;
    pixmapInfo.data = new uint8_t[width * height * NUM_4];

    if (pixmapInfo.data == nullptr) {
        return;
    }
    pixmapInfo.bufferSize = width * height * NUM_4;
    if (memset_s(pixmapInfo.data, pixmapInfo.bufferSize, NUM_0, pixmapInfo.bufferSize) != EOK) {
        ASSERT_NE(*pixmapInfo.data, NUM_0);
    }
    for (int32_t i = NUM_0; i < width * height; ++i) {
        int rb = i * NUM_4;
        // the NUM_0th item set red
        if (i == NUM_0) {
            *(pixmapInfo.data + rb) = NUM_255;
            *(pixmapInfo.data + rb + NUM_1) = NUM_255;
        }
        // the 2th item set green
        if (i == 2) {
            *(pixmapInfo.data + rb) = NUM_255;
            *(pixmapInfo.data + rb + NUM_2) = NUM_255;
        }

        // the 9th item set blue
        if (i == 9) {
            *(pixmapInfo.data + rb) = NUM_255;
            *(pixmapInfo.data + rb + NUM_3) = NUM_255;
        }

        // the 11th item rand
        if (i == 11) {
            *(pixmapInfo.data + rb) = NUM_255;
            *(pixmapInfo.data + rb + NUM_1) = NUM_163;
            *(pixmapInfo.data + rb + NUM_2) = NUM_213;
            *(pixmapInfo.data + rb + NUM_3) = NUM_234;
        }
    }
}

/**
 * @tc.name: ImageTransformTest001
 * @tc.desc: the pixmap info scale 2.0f.
 * @tc.type: FUNC
 */
HWTEST_F(ImageTransformTest, ImageTransformTest001, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImageTransformTest: ImageTransform001_Scale2 start";
    PixmapInfo inPutInfo;
    ConstructPixmapInfo(inPutInfo);

    /**
     * @tc.steps: step1. construct pixel map info.
     * @tc.expected: step1. expect the pixel map width and height.
     */
    PixmapInfo outPutInfo(inPutInfo);
    BasicTransformer trans;
    trans.SetScaleParam(NUM_2f, NUM_2f);
    trans.TransformPixmap(inPutInfo, outPutInfo);

    ASSERT_NE(outPutInfo.data, nullptr);
    EXPECT_EQ(outPutInfo.imageInfo.size.width, NUM_6);
    EXPECT_EQ(outPutInfo.imageInfo.size.height, NUM_8);
    EXPECT_EQ(outPutInfo.bufferSize, (uint32_t)(NUM_6 * NUM_8 * NUM_4));

    /**
     * @tc.steps: step2. scale 2 times.
     * @tc.expected: step2. expect four corner values.
     */
    for (int32_t i = NUM_0; i < NUM_6 * NUM_8; ++i) {
        int rb = i * NUM_4;
        // after scale 2.NUM_0, the NUM_0th item change to NUM_0th item
        if (i == NUM_0) {
            EXPECT_EQ((int32_t)(*(outPutInfo.data + rb + NUM_1)), NUM_255);
        }

        // after scale 2.NUM_0, the 2th item change to 5th item
        if (i == NUM_5) {
            EXPECT_EQ((int32_t)(*(outPutInfo.data + rb + NUM_2)), NUM_255);
        }

        // after scale 2.NUM_0, the 9th item change to 42th item
        if (i == NUM_42) {
            EXPECT_EQ((int32_t)(*(outPutInfo.data + rb + NUM_3)), NUM_255);
        }

        // after scale 2.NUM_0, the 11th item change to 47th item
        if (i == NUM_47) {
            EXPECT_EQ((int32_t)(*(outPutInfo.data + rb + NUM_1)), NUM_163);
            EXPECT_EQ((int32_t)(*(outPutInfo.data + rb + NUM_2)), NUM_213);
            EXPECT_EQ((int32_t)(*(outPutInfo.data + rb + NUM_3)), NUM_234);
        }
    }
    if (inPutInfo.data != nullptr) {
        free(inPutInfo.data);
        inPutInfo.data = nullptr;
    }
    if (outPutInfo.data != nullptr) {
        free(outPutInfo.data);
        outPutInfo.data = nullptr;
    }
    GTEST_LOG_(INFO) << "ImageTransformTest: ImageTransform001_Scale2 end";
}

/**
 * @tc.name: ImageTransformTest002
 * @tc.desc: the pixmap info rotate 90 at the center point.
 * @tc.type: FUNC
 */
HWTEST_F(ImageTransformTest, ImageTransformTest002, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImageTransformTest: ImageTransform002_RotateNUM_90 start";

    PixmapInfo inPutInfo;
    ConstructPixmapInfo(inPutInfo);

    /**
     * @tc.steps: step1. construct pixel map info.
     * @tc.expected: step1. expect the pixel map width and height.
     */
    PixmapInfo outPutInfo(inPutInfo);
    BasicTransformer trans;
    trans.SetRotateParam(NUM_90, (float)(inPutInfo.imageInfo.size.width / NUM_2),
    (float)(inPutInfo.imageInfo.size.height / NUM_2));
    trans.TransformPixmap(inPutInfo, outPutInfo);

    ASSERT_NE(outPutInfo.data, nullptr);
    EXPECT_EQ(outPutInfo.imageInfo.size.width, NUM_4);
    EXPECT_EQ(outPutInfo.imageInfo.size.height, NUM_3);
    EXPECT_EQ(outPutInfo.bufferSize, (uint32_t)(NUM_4 * NUM_3 * NUM_4));

    /**
     * @tc.steps: step2. rotate 90.
     * @tc.expected: step2. expect four corner values.
     */
    for (int32_t i = NUM_0; i < NUM_4 * NUM_3; ++i) {
        int rb = i * NUM_4;
        // after rotate 90, the NUM_0th change to 9th
        if (i == NUM_0) {
            EXPECT_EQ((int32_t)(*(outPutInfo.data + rb + NUM_3)), NUM_255);
        }

        // after rotate 90, the 3th item change to 0th item
        if (i == 3) {
            EXPECT_EQ((int32_t)(*(outPutInfo.data + rb + NUM_1)), NUM_255);
        }

        // after rotate NUM_90, the 11th item change to 2th item
        if (i == 11) {
            EXPECT_EQ((int32_t)(*(outPutInfo.data + rb + NUM_2)), NUM_255);
        }
    }
    if (inPutInfo.data != nullptr) {
        free(inPutInfo.data);
        inPutInfo.data = nullptr;
    }
    if (outPutInfo.data != nullptr) {
        free(outPutInfo.data);
        outPutInfo.data = nullptr;
    }
    GTEST_LOG_(INFO) << "ImageTransforTest: ImageTransfor002_RotateNUM_90 end";
}

/**
 * @tc.name: ImageTransformTest003
 * @tc.desc: the pixmap info rotate 180 at the center point.
 * @tc.type: FUNC
 */
HWTEST_F(ImageTransformTest, ImageTransformTest003, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "ImageTransformTest: ImageTransform003_Rotate180 start";

    /**
     * @tc.steps: step1. construct pixel map info.
     * @tc.expected: step1. expect the pixel map width and height.
     */
    PixmapInfo inPutInfo;
    ConstructPixmapInfo(inPutInfo);

    PixmapInfo outPutInfo(inPutInfo);
    BasicTransformer trans;
    trans.SetRotateParam(NUM_180, (float)(inPutInfo.imageInfo.size.width / NUM_2),
                         (float)(inPutInfo.imageInfo.size.height / NUM_2));
    trans.TransformPixmap(inPutInfo, outPutInfo);

    ASSERT_NE(outPutInfo.data, nullptr);
    EXPECT_EQ(outPutInfo.imageInfo.size.width, NUM_3);
    EXPECT_EQ(outPutInfo.imageInfo.size.height, NUM_4);
    EXPECT_EQ(outPutInfo.bufferSize, (uint32_t)(NUM_3 * NUM_4 * NUM_4));

    /**
     * @tc.steps: step2. rotate 180.
     * @tc.expected: step2. expect four corner values.
     */
    for (int32_t i = NUM_0; i < NUM_3 * NUM_4; ++i) {
        int rb = i * NUM_4;
        // after rotate 180, the 0th change to 11th
        if (i == NUM_0) {
            EXPECT_EQ((int32_t)(*(outPutInfo.data + rb + NUM_1)), NUM_163);
            EXPECT_EQ((int32_t)(*(outPutInfo.data + rb + NUM_2)), NUM_213);
            EXPECT_EQ((int32_t)(*(outPutInfo.data + rb + NUM_3)), NUM_234);
        }

        // after rotate 180, the 2th item change to 9th item
        if (i == 2) {
            EXPECT_EQ((int32_t)(*(outPutInfo.data + rb + NUM_3)), NUM_255);
        }

        // after rotate 180, the 9th item change to 2th item
        if (i == 9) {
            EXPECT_EQ((int32_t)(*(outPutInfo.data + rb + NUM_2)), NUM_255);
        }

        // after rotate 180, the 11th item change to NUM_0th item
        if (i == 11) {
            EXPECT_EQ((int32_t)(*(outPutInfo.data + rb + NUM_1)), NUM_255);
        }
    }
    if (inPutInfo.data != nullptr) {
        free(inPutInfo.data);
        inPutInfo.data = nullptr;
    }
    if (outPutInfo.data != nullptr) {
        free(outPutInfo.data);
        outPutInfo.data = nullptr;
    }
    GTEST_LOG_(INFO) << "ImageTransformTest: ImageTransform003_Rotate180 end";
}
} // namespace Multimedia
} // namespace OHOS
