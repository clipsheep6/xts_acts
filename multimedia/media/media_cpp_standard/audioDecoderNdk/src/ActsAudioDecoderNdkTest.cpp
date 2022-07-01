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
#include "ActsAudioDecoderNdkTest.h"
#include "ndk_av_codec.h"
#include "ndk_av_format.h"


using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Media;


/**
 * @tc.number    : ActsAudioDecoderNdkTest001
 * @tc.name      : Test basic audio decode function
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsAudioDecoderNdkTest, ActsAudioDecoderNdkTest001, Function | MediumTest | Level0)
{
    // ADecSignal* testSignal = nullptr;
    ADecNdkSample *aDecSample = new ADecNdkSample();
    struct AVCodec* audDec = aDecSample->CreateAudioDecoder();
    ASSERT_NE(nullptr, audDec);

    AVFormat *AudioFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioFormat);
    OH_AV_FormatPutIntValue(AudioFormat, "channel_count", 2);
    OH_AV_FormatPutIntValue(AudioFormat, "sample_rate", 44100);
    OH_AV_FormatPutIntValue(AudioFormat, "audio_sample_format", 1); 

    ASSERT_EQ(AV_ERR_OK, aDecSample->Configure(AudioFormat));
    ASSERT_EQ(AV_ERR_OK, aDecSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aDecSample->Start());
    sleep(10);
    ASSERT_EQ(AV_ERR_OK, aDecSample->Stop());
    ASSERT_EQ(AV_ERR_OK, aDecSample->Release());
    audDec = nullptr;
    OH_AV_DestroyFormat(AudioFormat);
    AudioFormat = nullptr;
}
