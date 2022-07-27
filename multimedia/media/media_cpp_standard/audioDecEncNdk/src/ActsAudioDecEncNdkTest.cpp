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
#include "ActsAudioDecEncNdkTest.h"
#include "ndk_av_codec.h"
#include "ndk_av_format.h"


using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Media;


/**
 * @tc.number    : ActsAudioDecEncNdkTest001
 * @tc.name      : Test basic audio decode function
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsAudioDecEncNdkTest, ActsAudioDecEncNdkTest000, Function | MediumTest | Level1)
{
    // create and configure audio decoder
    ADecEncNdkSample *aDecEncSample = new ADecEncNdkSample();
    // ADecEncSignal *acodecSignal_ = new ADecEncSignal();

    struct AVCodec* audDec = aDecEncSample->CreateAudioDecoder();
    ASSERT_NE(nullptr, audDec);
    AVFormat *AudioFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioFormat);
    OH_AV_FormatPutIntValue(AudioFormat, "channel_count", 2);
    OH_AV_FormatPutIntValue(AudioFormat, "sample_rate", 44100);
    OH_AV_FormatPutIntValue(AudioFormat, "audio_sample_format", 1); 
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureDec(AudioFormat));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareDec());

    // create and configure audio encoder
    // AEncNdkSample *aDecEncSample = new AEncNdkSample();
    struct AVCodec* audEnc = aDecEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureEnc(AudioFormat));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareEnc());
    aDecEncSample->SetSavePath("/data/media/AAC_48000_32_1_out.aac");

    // start audio encoder and decoder
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());

    // // do work 
    // sleep(1);
    // ASSERT_EQ(AV_ERR_OK, aDecEncSample->StopDec());
    // ASSERT_EQ(AV_ERR_OK, aDecEncSample->StopEnc());
    // ASSERT_EQ(AV_ERR_OK, aDecEncSample->CalcuError());

    
    // aDecEncSample->SetSavePath("/data/media/AAC_48000_32_1_out_2.aac");
    // aDecEncSample->ReRead();
    // aDecEncSample->ResetParam();
    // ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartEnc());
    // ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());
    sleep(10);
    // stop work and release codecs
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StopDec());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseDec());
    audDec = nullptr;
    OH_AV_DestroyFormat(AudioFormat);
    AudioFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StopEnc());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseEnc());
    audEnc = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->CalcuError());
}

// HWTEST_F(ActsAudioDecEncNdkTest, ActsAudioDecEncNdkTest001, Function | MediumTest | Level1)
// {
//     // create and configure audio decoder
//     ADecEncNdkSample *aDecEncSample = new ADecEncNdkSample();
//     // ADecEncSignal *acodecSignal_ = new ADecEncSignal();

//     struct AVCodec* audDec = aDecEncSample->CreateAudioDecoder();
//     ASSERT_NE(nullptr, audDec);
//     AVFormat *AudioFormat = OH_AV_CreateFormat();
//     ASSERT_NE(nullptr, AudioFormat);
//     OH_AV_FormatPutIntValue(AudioFormat, "channel_count", 2);
//     OH_AV_FormatPutIntValue(AudioFormat, "sample_rate", 44100);
//     OH_AV_FormatPutIntValue(AudioFormat, "audio_sample_format", 1); 
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureDec(AudioFormat));
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareDec());

//     // create and configure audio encoder
//     // AEncNdkSample *aDecEncSample = new AEncNdkSample();
//     struct AVCodec* audEnc = aDecEncSample->CreateAudioEncoder();
//     ASSERT_NE(nullptr, audEnc);
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureEnc(AudioFormat));
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareEnc());


//     // start audio encoder and decoder
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartEnc());
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());

//     // do work 
//     sleep(10);

//     // stop work and release codecs
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->ResetDec());
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseDec());
//     audDec = nullptr;
//     OH_AV_DestroyFormat(AudioFormat);
//     AudioFormat = nullptr;
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->ResetEnc());
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseEnc());
//     audEnc = nullptr;
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->CalcuError());
// }

// HWTEST_F(ActsAudioDecEncNdkTest, ActsAudioDecEncNdkTest002, Function | MediumTest | Level1)
// {
//     // create and configure audio decoder
//     ADecEncNdkSample *aDecEncSample = new ADecEncNdkSample();
//     // ADecEncSignal *acodecSignal_ = new ADecEncSignal();

//     struct AVCodec* audDec = aDecEncSample->CreateAudioDecoder();
//     ASSERT_NE(nullptr, audDec);
//     AVFormat *AudioFormat = OH_AV_CreateFormat();
//     ASSERT_NE(nullptr, AudioFormat);
//     OH_AV_FormatPutIntValue(AudioFormat, "channel_count", 2);
//     OH_AV_FormatPutIntValue(AudioFormat, "sample_rate", 44100);
//     OH_AV_FormatPutIntValue(AudioFormat, "audio_sample_format", 1); 
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureDec(AudioFormat));
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareDec());

//     // create and configure audio encoder
//     // AEncNdkSample *aDecEncSample = new AEncNdkSample();
//     struct AVCodec* audEnc = aDecEncSample->CreateAudioEncoder();
//     ASSERT_NE(nullptr, audEnc);
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureEnc(AudioFormat));
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareEnc());


//     // start audio encoder and decoder
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartEnc());
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());

//     // do work 
//     sleep(10);

//     // stop work and release codecs
//     // ASSERT_EQ(AV_ERR_OK, aDecEncSample->ResetDec());
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseDec());
//     audDec = nullptr;
//     OH_AV_DestroyFormat(AudioFormat);
//     AudioFormat = nullptr;
//     // ASSERT_EQ(AV_ERR_OK, aDecEncSample->ResetEnc());
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseEnc());
//     audEnc = nullptr;
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->CalcuError());
// }

// HWTEST_F(ActsAudioDecEncNdkTest, ActsAudioDecEncNdkTest004, Function | MediumTest | Level1)
// {
//     // create and configure audio decoder
//     ADecEncNdkSample *aDecEncSample = new ADecEncNdkSample();
//     // ADecEncSignal *acodecSignal_ = new ADecEncSignal();

//     struct AVCodec* audDec = aDecEncSample->CreateAudioDecoder();
//     ASSERT_NE(nullptr, audDec);
//     AVFormat *AudioFormat = OH_AV_CreateFormat();
//     ASSERT_NE(nullptr, AudioFormat);
//     OH_AV_FormatPutIntValue(AudioFormat, "channel_count", 2);
//     OH_AV_FormatPutIntValue(AudioFormat, "sample_rate", 44100);
//     OH_AV_FormatPutIntValue(AudioFormat, "audio_sample_format", 1); 
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureDec(AudioFormat));
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareDec());

//     // create and configure audio encoder
//     // AEncNdkSample *aDecEncSample = new AEncNdkSample();
//     struct AVCodec* audEnc = aDecEncSample->CreateAudioEncoder();
//     ASSERT_NE(nullptr, audEnc);
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureEnc(AudioFormat));
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareEnc());


//     // start audio encoder and decoder
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartEnc());
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());

//     // do work 
//     sleep(1);
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->FlushDec());
//     sleep(20);

//     cout << "After 20s" << endl;
//     // stop work and release codecs
//     // ASSERT_EQ(AV_ERR_OK, aDecEncSample->ResetDec());
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseDec());
//     audDec = nullptr;
//     OH_AV_DestroyFormat(AudioFormat);
//     AudioFormat = nullptr;
//     // ASSERT_EQ(AV_ERR_OK, aDecEncSample->ResetEnc());
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseEnc());
//     audEnc = nullptr;
//     ASSERT_EQ(AV_ERR_OK, aDecEncSample->CalcuError());
// }