/*
 * Copyright (c) 2021-2022 Huawei Device Co., Ltd.
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

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "gtest/gtest.h"
#include "ActsVideoDecEncNdkTest.h"
#include "ndk_av_codec.h"
#include "ndk_av_format.h"


using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Media;

const string MIME_TYPE_DEC = "video/avc";
const string MIME_TYPE_ENC = "video/mp4v-es";

/**
 * @tc.number    : ActsVideoDecEncNdkTest001
 * @tc.name      : test stop at end of stream
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsVideoDecEncNdkTest, ActsVideoDecEncNdkTest001, Function | MediumTest | Level1)
{
    // create and configure video decoder
    VDecEncNdkSample *vDecEncSample = new VDecEncNdkSample();

    struct AVCodec* videoDec = vDecEncSample->CreateVideoDecoder(MIME_TYPE_DEC);
    ASSERT_NE(nullptr, videoDec);
    struct AVCodec* videoEnc = vDecEncSample->CreateVideoEncoder(MIME_TYPE_ENC);
    ASSERT_NE(nullptr, videoEnc);
    vDecEncSample->SetReadPath("/data/media/out_320_240_10s.h264");
    vDecEncSample->SetSavePath("/data/media/video_001.es");
    
    AVFormat *VideoFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, VideoFormat);
    OH_AV_FormatPutIntValue(VideoFormat, "width", 320);
    OH_AV_FormatPutIntValue(VideoFormat, "height", 240);
    OH_AV_FormatPutIntValue(VideoFormat, "pixel_format", 3);
    OH_AV_FormatPutIntValue(VideoFormat, "frame_rate", 60); 
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureDec(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureEnc(VideoFormat));

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->GetSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->SetOutputSurface());

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareDec());

    // start video encoder and decoder
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    // do work 
    sleep(10);

    // stop work and release codecs
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseDec());
    videoDec = nullptr;

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseEnc());
    videoEnc = nullptr;

    OH_AV_DestroyFormat(VideoFormat);
    VideoFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
}

/**
 * @tc.number    : ActsVideoDecEncNdkTest002
 * @tc.name      : test flush at running state
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsVideoDecEncNdkTest, ActsVideoDecEncNdkTest002, Function | MediumTest | Level1)
{
    // create and configure video decoder
    VDecEncNdkSample *vDecEncSample = new VDecEncNdkSample();

    struct AVCodec* videoDec = vDecEncSample->CreateVideoDecoder(MIME_TYPE_DEC);
    ASSERT_NE(nullptr, videoDec);
    struct AVCodec* videoEnc = vDecEncSample->CreateVideoEncoder(MIME_TYPE_ENC);
    ASSERT_NE(nullptr, videoEnc);
    vDecEncSample->SetReadPath("/data/media/out_320_240_10s.h264");
    vDecEncSample->SetSavePath("/data/media/video_002.es");

    AVFormat *VideoFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, VideoFormat);
    OH_AV_FormatPutIntValue(VideoFormat, "width", 320);
    OH_AV_FormatPutIntValue(VideoFormat, "height", 240);
    OH_AV_FormatPutIntValue(VideoFormat, "pixel_format", 3);
    OH_AV_FormatPutIntValue(VideoFormat, "frame_rate", 60); 
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureDec(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureEnc(VideoFormat));

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->GetSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->SetOutputSurface());

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareDec());

    // start video encoder and decoder
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    // do work 
    sleep(1);

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->FlushDec());

    sleep(10);

    // stop work and release codecs
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseDec());
    videoDec = nullptr;

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseEnc());
    videoEnc = nullptr;

    OH_AV_DestroyFormat(VideoFormat);
    VideoFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
}

/**
 * @tc.number    : ActsVideoDecEncNdkTest003
 * @tc.name      : test flush at EOS state
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsVideoDecEncNdkTest, ActsVideoDecEncNdkTest003, Function | MediumTest | Level1)
{
    // create and configure video decoder
    VDecEncNdkSample *vDecEncSample = new VDecEncNdkSample();

    struct AVCodec* videoDec = vDecEncSample->CreateVideoDecoder(MIME_TYPE_DEC);
    ASSERT_NE(nullptr, videoDec);
    struct AVCodec* videoEnc = vDecEncSample->CreateVideoEncoder(MIME_TYPE_ENC);
    ASSERT_NE(nullptr, videoEnc);
    vDecEncSample->SetReadPath("/data/media/out_320_240_10s.h264");
    vDecEncSample->SetSavePath("/data/media/video_003.es");

    AVFormat *VideoFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, VideoFormat);
    OH_AV_FormatPutIntValue(VideoFormat, "width", 320);
    OH_AV_FormatPutIntValue(VideoFormat, "height", 240);
    OH_AV_FormatPutIntValue(VideoFormat, "pixel_format", 3);
    OH_AV_FormatPutIntValue(VideoFormat, "frame_rate", 60); 
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureDec(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureEnc(VideoFormat));

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->GetSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->SetOutputSurface());

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareDec());

    // start video encoder and decoder
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    // do work 
    sleep(10);

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->FlushDec());
    vDecEncSample->ReRead();
    vDecEncSample->ResetParam();
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());


    sleep(10);

    // stop work and release codecs
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseDec());
    videoDec = nullptr;

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseEnc());
    videoEnc = nullptr;

    OH_AV_DestroyFormat(VideoFormat);
    VideoFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
}

/**
 * @tc.number    : ActsVideoDecEncNdkTest004
 * @tc.name      : test stop and restart
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsVideoDecEncNdkTest, ActsVideoDecEncNdkTest004, Function | MediumTest | Level1)
{
    // create and configure video decoder
    VDecEncNdkSample *vDecEncSample = new VDecEncNdkSample();

    struct AVCodec* videoDec = vDecEncSample->CreateVideoDecoder(MIME_TYPE_DEC);
    ASSERT_NE(nullptr, videoDec);
    struct AVCodec* videoEnc = vDecEncSample->CreateVideoEncoder(MIME_TYPE_ENC);
    ASSERT_NE(nullptr, videoEnc);
    vDecEncSample->SetReadPath("/data/media/out_320_240_10s.h264");
    vDecEncSample->SetSavePath("/data/media/video_004.es");

    AVFormat *VideoFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, VideoFormat);
    OH_AV_FormatPutIntValue(VideoFormat, "width", 320);
    OH_AV_FormatPutIntValue(VideoFormat, "height", 240);
    OH_AV_FormatPutIntValue(VideoFormat, "pixel_format", 3);
    OH_AV_FormatPutIntValue(VideoFormat, "frame_rate", 60); 
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureDec(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureEnc(VideoFormat));

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->GetSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->SetOutputSurface());

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareDec());

    // start video encoder and decoder
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    // do work 
    sleep(10);

    // stop work and release codecs
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
    sleep(5);
    vDecEncSample->ReRead();
    vDecEncSample->ResetParam();
    vDecEncSample->SetSavePath("/data/media/video_004_2.es");

    // start video encoder and decoder
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    sleep(10);

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseDec());
    videoDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseEnc());
    videoEnc = nullptr;

    OH_AV_DestroyFormat(VideoFormat);
    VideoFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
}