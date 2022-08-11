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

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "gtest/gtest.h"
#include "ActsAudioEncoderNdkTest.h"
#include "ndk_av_codec.h"
#include "ndk_av_format.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Media;


/**
 * @tc.number    : ActsAudioEncoderNdkTest001
 * @tc.name      : Test basic audio encode function
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkTest001, Function | MediumTest | Level0)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    OH_AV_FormatPutIntValue(AudioEncFormat, "channel_count", 2);
    OH_AV_FormatPutIntValue(AudioEncFormat, "sample_rate", 44100);
    OH_AV_FormatPutIntValue(AudioEncFormat, "audio_sample_format", 1); 

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(10);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}
