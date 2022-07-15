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
HWTEST_F(ActsAudioDecEncNdkTest, ActsAudioDecEncNdkTest001, Function | MediumTest | Level1)
{
    // create and configure audio decoder
    ADecEncNdkSample *aDecEncSample = new ADecEncNdkSample();
    struct AVCodec* audDec = aDecEncSample->CreateAudioDecoder();
    ASSERT_NE(nullptr, audDec);
    AVFormat *AudioDecFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioDecFormat);
    OH_AV_FormatPutIntValue(AudioDecFormat, "channel_count", 2);
    OH_AV_FormatPutIntValue(AudioDecFormat, "sample_rate", 44100);
    OH_AV_FormatPutIntValue(AudioDecFormat, "audio_sample_format", 1); 
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureDec(AudioDecFormat));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareDec());

    // create and configure audio encoder
    // AEncNdkSample *aDecEncSample = new AEncNdkSample();
    struct AVCodec* audEnc = aDecEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);
    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    OH_AV_FormatPutIntValue(AudioEncFormat, "channel_count", 2);
    OH_AV_FormatPutIntValue(AudioEncFormat, "sample_rate", 44100);
    OH_AV_FormatPutIntValue(AudioEncFormat, "audio_sample_format", 1); 
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureEnc(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareEnc());


    // start audio encoder and decoder
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());

    // do work 
    sleep(60);

    // stop work and release codecs
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StopDec());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseDec());
    audDec = nullptr;
    OH_AV_DestroyFormat(AudioDecFormat);
    AudioDecFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StopEnc());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseEnc());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}
