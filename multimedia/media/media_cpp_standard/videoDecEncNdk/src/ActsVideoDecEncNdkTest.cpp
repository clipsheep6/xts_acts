/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

#include <string>
#include "gtest/gtest.h"
#include "native_avcodec_videodecoder.h"
#include "native_avcodec_videoencoder.h"
#include "native_avcodec_base.h"
#include "native_avformat.h"
#include "ActsVideoDecEncNdkTest.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Media;

namespace {
    const string MIME_TYPE_AVC = "video/avc";
    const string MIME_TYPE_MPEG4 = "video/mp4v-es";
    constexpr uint32_t DEFAULT_WIDTH = 320;
    constexpr uint32_t DEFAULT_HEIGHT = 240;
    constexpr uint32_t DEFAULT_PIXELFORMAT = 2;
    constexpr uint32_t DEFAULT_FRAMERATE = 60;
    const char* READPATH = "/data/media/out_320_240_10s.h264";


    bool CheckDecDesc(map<string, int> InDesc, OH_AVFormat* OutDesc)
    {
        int32_t out ;
        for (const auto& t: InDesc) {
            bool res = OH_AVFormat_GetIntValue(OutDesc, t.first.c_str(), &out);
            cout << "key: " << t.first << "; out: " << out <<endl;
            if (!res) {
                cout << "OH_AVFormat_GetIntValue Fail. key:" << t.first << endl;
                return false;
            }
            if (out != t.second) {
                cout << "OH_AVFormat_GetIntValue error. key: " << t.first
                << "; expect: "<< t.second
                << ", actual: "<< out << endl;
                return false;
            }
            out = 0;
        }
        return true;
    }

    bool SetFormat(struct OH_AVFormat *format, map<string, int> mediaDescription)
    {
        const char *key;
        for (const auto& t: mediaDescription) {
            key = t.first.c_str();
            if (not OH_AVFormat_SetIntValue(format, key, t.second)) {
                cout << "OH_AV_FormatPutIntValue Fail. format key: " << t.first
                << ", value: "<< t.second << endl;
                return false;
            }
        }
        return true;
    }

    struct OH_AVFormat* createFormat()
    {
        OH_AVFormat *DefaultFormat = OH_AVFormat_Create();
        OH_AVFormat_SetIntValue(DefaultFormat, OH_MD_KEY_WIDTH, DEFAULT_WIDTH);
        OH_AVFormat_SetIntValue(DefaultFormat, OH_MD_KEY_HEIGHT, DEFAULT_HEIGHT);
        OH_AVFormat_SetIntValue(DefaultFormat, OH_MD_KEY_PIXEL_FORMAT, DEFAULT_PIXELFORMAT);
        OH_AVFormat_SetIntValue(DefaultFormat, OH_MD_KEY_FRAME_RATE, DEFAULT_FRAMERATE);
        return DefaultFormat;
    }
}

/**
 * @tc.number    : ActsVideoDecEncNdkTest001
 * @tc.name      : stop at end of stream
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsVideoDecEncNdkTest, ActsVideoDecEncNdkTest001, Function | MediumTest | Level1)
{
    VDecEncNdkSample *vDecEncSample = new VDecEncNdkSample();

    struct OH_AVCodec* videoDec = vDecEncSample->CreateVideoDecoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoDec);
    struct OH_AVCodec* videoEnc = vDecEncSample->CreateVideoEncoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoEnc);
    vDecEncSample->SetReadPath(READPATH);
    vDecEncSample->SetSavePath("/data/media/video_001.es");
    
    OH_AVFormat *VideoFormat = OH_AVFormat_Create();
    ASSERT_NE(nullptr, VideoFormat);
    map<string, int> VideoParam = {
        {OH_MD_KEY_WIDTH, DEFAULT_WIDTH},
        {OH_MD_KEY_HEIGHT, DEFAULT_HEIGHT},
        {OH_MD_KEY_PIXEL_FORMAT, DEFAULT_PIXELFORMAT},
        {OH_MD_KEY_FRAME_RATE, DEFAULT_FRAMERATE},
    };
    ASSERT_EQ(true, SetFormat(VideoFormat, VideoParam));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureDec(VideoFormat));
    OH_AVFormat *OutDescDec = OH_VideoDecoder_GetOutputDescription(videoDec);
    ASSERT_NE(nullptr, OutDescDec);
    ASSERT_EQ(true, CheckDecDesc(VideoParam, OutDescDec));

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureEnc(VideoFormat));
    OH_AVFormat *OutDescEnc = OH_VideoEncoder_GetOutputDescription(videoEnc);
    ASSERT_NE(nullptr, OutDescEnc);
    ASSERT_EQ(true, CheckDecDesc(VideoParam, OutDescEnc));

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->GetSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->SetOutputSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    while (!vDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseDec());
    videoDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseEnc());
    videoEnc = nullptr;
    OH_AVFormat_Destroy(VideoFormat);
    VideoFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
}

/**
 * @tc.number    : ActsVideoDecEncNdkTest002
 * @tc.name      : reset at end of stream
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsVideoDecEncNdkTest, ActsVideoDecEncNdkTest002, Function | MediumTest | Level1)
{
    VDecEncNdkSample *vDecEncSample = new VDecEncNdkSample();

    struct OH_AVCodec* videoDec = vDecEncSample->CreateVideoDecoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoDec);
    struct OH_AVCodec* videoEnc = vDecEncSample->CreateVideoEncoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoEnc);
    vDecEncSample->SetReadPath(READPATH);
    vDecEncSample->SetSavePath("/data/media/video_002.es");
    
    OH_AVFormat *VideoFormat = createFormat();
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureDec(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureEnc(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->GetSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->SetOutputSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    while (!vDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ResetDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseDec());
    videoDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ResetEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseEnc());
    videoEnc = nullptr;
    OH_AVFormat_Destroy(VideoFormat);
    VideoFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
}


 /**
 * @tc.number    : ActsVideoDecEncNdkTest003
 * @tc.name      : release at end of stream
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsVideoDecEncNdkTest, ActsVideoDecEncNdkTest003, Function | MediumTest | Level1)
{
    VDecEncNdkSample *vDecEncSample = new VDecEncNdkSample();

    struct OH_AVCodec* videoDec = vDecEncSample->CreateVideoDecoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoDec);
    struct OH_AVCodec* videoEnc = vDecEncSample->CreateVideoEncoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoEnc);
    vDecEncSample->SetReadPath(READPATH);
    vDecEncSample->SetSavePath("/data/media/video_003.es");
    
    OH_AVFormat *VideoFormat = createFormat();
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureDec(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureEnc(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->GetSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->SetOutputSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    while (!vDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseDec());
    videoDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseEnc());
    videoEnc = nullptr;
    OH_AVFormat_Destroy(VideoFormat);
    VideoFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
}

/**
* @tc.number    : ActsVideoDecEncNdkTest004
* @tc.name      : flush at running
* @tc.desc      : Basic function test
*/
HWTEST_F(ActsVideoDecEncNdkTest, ActsVideoDecEncNdkTest004, Function | MediumTest | Level1)
{
    VDecEncNdkSample *vDecEncSample = new VDecEncNdkSample();

    struct OH_AVCodec* videoDec = vDecEncSample->CreateVideoDecoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoDec);
    struct OH_AVCodec* videoEnc = vDecEncSample->CreateVideoEncoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoEnc);
    vDecEncSample->SetReadPath(READPATH);
    vDecEncSample->SetEosState(false);
    vDecEncSample->SetSavePath("/data/media/video_004.es");
    
    OH_AVFormat *VideoFormat = createFormat();
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureDec(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureEnc(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->GetSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->SetOutputSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    while (vDecEncSample->GetFrameCount() < 100) {};
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->FlushDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->FlushEnc());
    vDecEncSample->ReRead();
    vDecEncSample->ResetDecParam();
    vDecEncSample->ResetEncParam();
    vDecEncSample->SetEosState(true);
    vDecEncSample->SetSavePath("/data/media/video_004_2.es");

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    while (!vDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseDec());
    videoDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseEnc());
    videoEnc = nullptr;
    OH_AVFormat_Destroy(VideoFormat);
    VideoFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
}


 /**
 * @tc.number    : ActsVideoDecEncNdkTest005
 * @tc.name      : flush dec at eos and restart
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsVideoDecEncNdkTest, ActsVideoDecEncNdkTest005, Function | MediumTest | Level1)
{
    VDecEncNdkSample *vDecEncSample = new VDecEncNdkSample();

    struct OH_AVCodec* videoDec = vDecEncSample->CreateVideoDecoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoDec);
    struct OH_AVCodec* videoEnc = vDecEncSample->CreateVideoEncoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoEnc);
    vDecEncSample->SetReadPath(READPATH);
    vDecEncSample->SetEosState(false);
    vDecEncSample->SetSavePath("/data/media/video_005.es");
    
    OH_AVFormat *VideoFormat = createFormat();
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureDec(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureEnc(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->GetSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->SetOutputSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    while (!vDecEncSample->GetDecEosState()) {};
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->FlushDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->FlushEnc());
    vDecEncSample->ReRead();
    vDecEncSample->ResetDecParam();
    vDecEncSample->ResetEncParam();
    vDecEncSample->SetSavePath("/data/media/video_005_2.es");
    vDecEncSample->SetEosState(true);
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    while (!vDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseDec());
    videoDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseEnc());
    videoEnc = nullptr;
    OH_AVFormat_Destroy(VideoFormat);
    VideoFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
}


 /**
 * @tc.number    : ActsVideoDecEncNdkTest006
 * @tc.name      : stop at running and restart to eos
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsVideoDecEncNdkTest, ActsVideoDecEncNdkTest006, Function | MediumTest | Level1)
{
    VDecEncNdkSample *vDecEncSample = new VDecEncNdkSample();

    struct OH_AVCodec* videoDec = vDecEncSample->CreateVideoDecoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoDec);
    struct OH_AVCodec* videoEnc = vDecEncSample->CreateVideoEncoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoEnc);
    vDecEncSample->SetReadPath(READPATH);
    vDecEncSample->SetEosState(false);
    vDecEncSample->SetSavePath("/data/media/video_006.es");
    
    OH_AVFormat *VideoFormat = createFormat();
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureDec(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureEnc(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->GetSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->SetOutputSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    while (vDecEncSample->GetFrameCount() < 100) {};
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopEnc());
    vDecEncSample->ReRead();
    vDecEncSample->ResetDecParam();
    vDecEncSample->ResetEncParam();
    vDecEncSample->SetEosState(true);
    vDecEncSample->SetSavePath("/data/media/video_006_2.es");
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    while (!vDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseDec());
    videoDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseEnc());
    videoEnc = nullptr;
    OH_AVFormat_Destroy(VideoFormat);
    VideoFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
}


 /**
 * @tc.number    : ActsVideoDecEncNdkTest007
 * @tc.name      : stop dec at eos and restart to eos
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsVideoDecEncNdkTest, ActsVideoDecEncNdkTest007, Function | MediumTest | Level1)
{
    VDecEncNdkSample *vDecEncSample = new VDecEncNdkSample();

    struct OH_AVCodec* videoDec = vDecEncSample->CreateVideoDecoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoDec);
    struct OH_AVCodec* videoEnc = vDecEncSample->CreateVideoEncoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoEnc);
    vDecEncSample->SetReadPath(READPATH);
    vDecEncSample->SetEosState(false);
    vDecEncSample->SetSavePath("/data/media/video_007.es");
    
    OH_AVFormat *VideoFormat = createFormat();
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureDec(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureEnc(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->GetSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->SetOutputSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    while (!vDecEncSample->GetDecEosState()) {};
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->FlushEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
    vDecEncSample->ReRead();
    vDecEncSample->ResetDecParam();
    vDecEncSample->ResetEncParam();
    vDecEncSample->SetSavePath("/data/media/video_007_2.es");
    vDecEncSample->SetEosState(true);
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    while (!vDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseDec());
    videoDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseEnc());
    videoEnc = nullptr;
    OH_AVFormat_Destroy(VideoFormat);
    VideoFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
}


 /**
 * @tc.number    : ActsVideoDecEncNdkTest008
 * @tc.name      : reset at eos and restart to eos
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsVideoDecEncNdkTest, ActsVideoDecEncNdkTest008, Function | MediumTest | Level1)
{
    VDecEncNdkSample *vDecEncSample = new VDecEncNdkSample();

    struct OH_AVCodec* videoDec = vDecEncSample->CreateVideoDecoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoDec);
    struct OH_AVCodec* videoEnc = vDecEncSample->CreateVideoEncoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoEnc);
    vDecEncSample->SetReadPath(READPATH);
    vDecEncSample->SetSavePath("/data/media/video_008.es");
    
    OH_AVFormat *VideoFormat = createFormat();
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureDec(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureEnc(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->GetSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->SetOutputSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    while (!vDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ResetDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ResetEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
    vDecEncSample->ReRead();
    vDecEncSample->ResetDecParam();
    vDecEncSample->ResetEncParam();
    vDecEncSample->SetSavePath("/data/media/video_008_2.es");
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureDec(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureEnc(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->GetSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->SetOutputSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    while (!vDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseDec());
    videoDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StopEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseEnc());
    videoEnc = nullptr;
    OH_AVFormat_Destroy(VideoFormat);
    VideoFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
}


 /**
 * @tc.number    : ActsVideoDecEncNdkTest009
 * @tc.name      : release at eos and restart to eos
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsVideoDecEncNdkTest, ActsVideoDecEncNdkTest009, Function | MediumTest | Level1)
{
    VDecEncNdkSample *vDecEncSample = new VDecEncNdkSample();

    struct OH_AVCodec* videoDec = vDecEncSample->CreateVideoDecoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoDec);
    struct OH_AVCodec* videoEnc = vDecEncSample->CreateVideoEncoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoEnc);
    vDecEncSample->SetReadPath(READPATH);
    vDecEncSample->SetSavePath("/data/media/video_009.es");
    
    OH_AVFormat *VideoFormat = createFormat();
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureDec(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ConfigureEnc(VideoFormat));

    ASSERT_EQ(AV_ERR_OK, vDecEncSample->GetSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->SetOutputSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->PrepareDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->StartDec());

    while (!vDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseDec());
    videoDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->ReleaseEnc());
    videoEnc = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
    vDecEncSample->ReRead();
    vDecEncSample->ResetDecParam();
    vDecEncSample->ResetEncParam();

    VDecEncNdkSample *vDecEncSample2 = new VDecEncNdkSample();

    struct OH_AVCodec* videoDec2 = vDecEncSample2->CreateVideoDecoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoDec2);
    struct OH_AVCodec* videoEnc2 = vDecEncSample2->CreateVideoEncoderByMime(MIME_TYPE_AVC);
    ASSERT_NE(nullptr, videoEnc2);
    vDecEncSample2->SetReadPath(READPATH);
    vDecEncSample2->SetSavePath("/data/media/video_009_2.es");
    
    ASSERT_EQ(AV_ERR_OK, vDecEncSample2->ConfigureDec(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample2->ConfigureEnc(VideoFormat));
    ASSERT_EQ(AV_ERR_OK, vDecEncSample2->GetSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample2->SetOutputSurface());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample2->PrepareEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample2->PrepareDec());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample2->StartEnc());
    ASSERT_EQ(AV_ERR_OK, vDecEncSample2->StartDec());

    while (!vDecEncSample2->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, vDecEncSample2->ReleaseDec());
    videoDec2 = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample2->ReleaseEnc());
    videoEnc2 = nullptr;
    OH_AVFormat_Destroy(VideoFormat);
    VideoFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, vDecEncSample->CalcuError());
}