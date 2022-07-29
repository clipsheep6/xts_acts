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

namespace {
    map<string, int> AudioEncParam = {
        {"channel_count", 2},
        {"sample_rate", 44100},
        {"audio_sample_format", 1},
    };

    map<string, int> AudioEncErrParam = {
        {"channel_count", 96000},
        {"sample_rate", 96000},
        {"audio_sample_format", 1},
    };
}

bool CheckEncDesc(map<string, int> BaseDesc, struct AVCodec* audEnc){
    AVFormat* OutDesc = OH_AVCODEC_AudioEncoderGetOutputMediaDescription(audEnc);
    cout << "OutDesc: " << OutDesc <<endl;
    if(OutDesc == nullptr){
        cout << "OH_AVCODEC_AudioEncoderGetOutputMediaDescription err. " <<endl;
        return false;
    }

    int32_t out;
    for(const auto& t: BaseDesc){
        bool res = OH_AV_FormatGetIntValue(OutDesc, t.first.c_str(), &out);
        if(!res){
            cout << "OH_AV_FormatGetIntValue Fail. key:" << t.first << endl;
            return false;
        }
        if(out != t.second){
            cout << "OH_AV_FormatGetIntValue error. key: " << t.first
            << "; expect: "<< t.second
            << ", actual: "<< out << endl;
            return false;
        }
        out = 0;
    }
    return true;
}

void audioDecoderProcess(map<string, int> AudioEncFormatParam, const char * out_dir,
                        const char * inp_dir, uint32_t sample_size, uint32_t es_length)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init(out_dir, inp_dir, sample_size, es_length);
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncFormatParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(true, CheckEncDesc(AudioEncFormatParam, audEnc));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest001
 * @tc.name      : Test basic audio encode function
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest001, Function | MediumTest | Level0)
{
    cout << "ActsAudioEncoderNdkFuncTest001 " << endl;
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out001.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    cout << "audEnc " << audEnc << endl;
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}


/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest002
 * @tc.name      : test audioEncoder config -> reset
 * @tc.desc      : Basic function test: create - config - reset - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest002, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out002.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    OH_AV_FormatPutIntValue(AudioEncFormat, "channel_count", 2);
    OH_AV_FormatPutIntValue(AudioEncFormat, "sample_rate", 44100);
    OH_AV_FormatPutIntValue(AudioEncFormat, "audio_sample_format", 1);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Reset());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest003
 * @tc.name      : test audioEncoder config -> release
 * @tc.desc      : Basic function test: create - config - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest003, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out003.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    OH_AV_FormatPutIntValue(AudioEncFormat, "channel_count", 2);
    OH_AV_FormatPutIntValue(AudioEncFormat, "sample_rate", 44100);
    OH_AV_FormatPutIntValue(AudioEncFormat, "audio_sample_format", 1);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest004
 * @tc.name      : test audioEncoder create -> release
 * @tc.desc      : Basic function test: create - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest004, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out004.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest005
 * @tc.name      : test audioEncoder start -> release
 * @tc.desc      : Basic function test: create - config - prepare - start - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest005, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out005.aac");
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
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest006
 * @tc.name      : test audioEncoder prepare -> reset
 * @tc.desc      : Basic function test: create - config - prepare - reset - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest006, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out006.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    OH_AV_FormatPutIntValue(AudioEncFormat, "channel_count", 2);
    OH_AV_FormatPutIntValue(AudioEncFormat, "sample_rate", 44100);
    OH_AV_FormatPutIntValue(AudioEncFormat, "audio_sample_format", 1);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Reset());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest007
 * @tc.name      : test audioEncoder prepare -> release
 * @tc.desc      : Basic function test: create - config - prepare - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest007, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out007.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    OH_AV_FormatPutIntValue(AudioEncFormat, "channel_count", 2);
    OH_AV_FormatPutIntValue(AudioEncFormat, "sample_rate", 44100);
    OH_AV_FormatPutIntValue(AudioEncFormat, "audio_sample_format", 1);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest008
 * @tc.name      : test audioEncoder config -> reset -> config
 * @tc.desc      : Basic function test: create - config - reset - config - prepare - start - stop - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest008, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out008.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    OH_AV_FormatPutIntValue(AudioEncFormat, "channel_count", 2);
    OH_AV_FormatPutIntValue(AudioEncFormat, "sample_rate", 44100);
    OH_AV_FormatPutIntValue(AudioEncFormat, "audio_sample_format", 1);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Reset());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest009
 * @tc.name      : test audioEncoder start -> eos
 * @tc.desc      : Basic function test: create - config - prepare - start - EOS - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest009, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample  = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out009.aac");
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
    // 等待EOS
    while (true) {
        if (!aEncSample->isRunning_.load()) {
            break;
        }
    }
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest010
 * @tc.name      : test audioEncoder start - reset
 * @tc.desc      : Basic function test: create - config - prepare - start - reset - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest010, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample  = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out010.aac");
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
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Reset());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest011
 * @tc.name      : test audioEncoder start -> flush
 * @tc.desc      : Basic function test: create - config - prepare - start - flush - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest011, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample  = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out011.aac");
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
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Flush());
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest012
 * @tc.name      : test audioEncoder prepare - reset - config
 * @tc.desc      : Basic function test: create - config - prepare - reset - config - prepare - start - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest012, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample  = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out012.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    OH_AV_FormatPutIntValue(AudioEncFormat, "channel_count", 2);
    OH_AV_FormatPutIntValue(AudioEncFormat, "sample_rate", 44100);
    OH_AV_FormatPutIntValue(AudioEncFormat, "audio_sample_format", 1);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Reset());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest013
 * @tc.name      : test audioEncoder eos - flush
 * @tc.desc      : Basic function test: create - config - prepare - start - eos - flush - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest013, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample  = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out013.aac");
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
    while (true) {
        if (!aEncSample->isRunning_.load()) {
            break;
        }
    }
    ASSERT_EQ(AV_ERR_OK, aEncSample->Flush());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;

}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest014
 * @tc.name      : test audioEncoder eos - stop
 * @tc.desc      : Basic function test: create - config - prepare - start - eos - stop - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest014, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample  = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out014.aac");
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
    while (true) {
        if (!aEncSample->isRunning_.load()) {
            break;
        }
    }
    ASSERT_EQ(AV_ERR_OK, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}


/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest015
 * @tc.name      : test audioEncoder eos - reset
 * @tc.desc      : Basic function test: create - config - prepare - start - eos - reset - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest015, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample  = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out015.aac");
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
    while (true) {
        if (!aEncSample->isRunning_.load()) {
            break;
        }
    }
    ASSERT_EQ(AV_ERR_OK, aEncSample->Reset());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest016
 * @tc.name      : test audioEncoder stop - start
 * @tc.desc      : Basic function test: create - config - prepare - start - stop - start - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest016, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample  = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out016.aac");
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
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest017
 * @tc.name      : test audioEncoder start - stop - reset
 * @tc.desc      : Basic function test: create - config - prepare - start - stop - reset - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest017, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample  = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out017.aac");
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
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Reset());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest018
 * @tc.name      : test audioEncoder start - reset - config
 * @tc.desc      : Basic function test: create - config - prepare - start - reset - config - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest018, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample  = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out018.aac");
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
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Reset());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest019
 * @tc.name      : test audioEncoder flush - eos
 * @tc.desc      : Basic function test: create - config - prepare - start - flush - eos - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest019, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample  = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out019.aac");
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
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Flush());
    while (true) {
        if (!aEncSample->isRunning_.load()) {
            break;
        }
    }
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest020
 * @tc.name      : test audioEncoder flsh - stop
 * @tc.desc      : Basic function test: create - config - prepare - start - flush - stop - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest020, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample  = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out020.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    cout << "audEnc " << audEnc << endl;
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    OH_AV_FormatPutIntValue(AudioEncFormat, "channel_count", 2);
    OH_AV_FormatPutIntValue(AudioEncFormat, "sample_rate", 44100);
    OH_AV_FormatPutIntValue(AudioEncFormat, "audio_sample_format", 1);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Flush());
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest021
 * @tc.name      : test audioEncoder flush - reset
 * @tc.desc      : Basic function test: create - config - prepare - start - flush - reset - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest021, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample  = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out021.aac");
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
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Flush());
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Reset());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest022
 * @tc.name      : test audioEncoder flush - flush
 * @tc.desc      : Basic function test: create - config - prepare - start - flush - flush - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest022, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out022.aac");
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
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Flush());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Flush());
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest023
 * @tc.name      : test audioEncoder eos - stop - reset
 * @tc.desc      : Basic function test: create - config - prepare - start - eos - stop - reset - release
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest023, Function | MediumTest | Level1)
{
    AEncNdkSample *aEncSample  = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out023.aac");
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
    while (true) {
        if (!aEncSample->isRunning_.load()) {
            break;
        }
    }
    ASSERT_EQ(AV_ERR_OK, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Reset());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest024
 * @tc.name      : test audioEncoder createByName
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest024, Function | MediumTest | Level1)
{
    cout << "ActsAudioEncoderNdkFuncTest024 " << endl;
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out024.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder(1);
    cout << "audEnc " << audEnc << endl;
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFuncTest025
 * @tc.name      : test audioEncoder get outputMediaDescription
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFuncTest025, Function | MediumTest | Level1)
{
    cout << "ActsAudioEncoderNdkFuncTest032 " << endl;
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_out025.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    cout << "audEnc " << audEnc << endl;
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(true, CheckEncDesc(AudioEncParam, audEnc));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(true, CheckEncDesc(AudioEncParam, audEnc));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    ASSERT_EQ(true, CheckEncDesc(AudioEncParam, audEnc));
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Stop());
    ASSERT_EQ(true, CheckEncDesc(AudioEncParam, audEnc));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest001
 * @tc.name      : test audioEncoder format AAC_1ch_12ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest001
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest001, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam001 = {
        {"channel_count", 1},
        {"sample_rate", 12000},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam001, "/data/media/S16LE_1_12000_out.aac",
                        "/data/media/S16LE_1_12000.pcm", 2048, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest002
 * @tc.name      : test audioEncoder format AAC_1ch_16ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest002
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest002, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam002 = {
        {"channel_count", 1},
        {"sample_rate", 16000},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam002, "/data/media/S16LE_1_16000_out.aac",
                        "/data/media/S16LE_1_16000.pcm", 2048, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest003
 * @tc.name      : test audioEncoder format AAC_1ch_22.05ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest003
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest003, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam003 = {
        {"channel_count", 1},
        {"sample_rate", 22050},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam003, "/data/media/S16LE_1_22050_out.aac",
                 "/data/media/S16LE_1_22050.pcm", 2048, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest004
 * @tc.name      : test audioEncoder format AAC_1ch_24ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest004
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest004, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam004 = {
        {"channel_count", 1},
        {"sample_rate", 24000},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam004, "/data/media/S16LE_1_24000_out.aac",
                     "/data/media/S16LE_1_24000.pcm", 2048, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest005
 * @tc.name      : test audioEncoder format AAC_1ch_32ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest005
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest005, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam005 = {
        {"channel_count", 1},
        {"sample_rate", 32000},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam005, "/data/media/S16LE_1_32000_out.aac",
                     "/data/media/S16LE_1_32000.pcm", 2048, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest006
 * @tc.name      : test audioEncoder format AAC_1ch_44.1ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest006
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest006, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam006 = {
        {"channel_count", 1},
        {"sample_rate", 44100},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam006, "/data/media/S16LE_1_44100_out.aac",
                     "/data/media/S16LE_1_44100.pcm", 2048, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest007
 * @tc.name      : test audioEncoder format AAC_1ch_48ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest007
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest007, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam007 = {
        {"channel_count", 1},
        {"sample_rate", 48000},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam007, "/data/media/S16LE_1_48000_out.aac",
                     "/data/media/S16LE_1_48000.pcm", 2048, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest008
 * @tc.name      : test audioEncoder format AAC_1ch_64ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest008
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest008, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam008 = {
        {"channel_count", 1},
        {"sample_rate", 64000},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam008, "/data/media/S16LE_1_64000_out.aac",
                     "/data/media/S16LE_1_64000.pcm", 2048, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest009
 * @tc.name      : test audioEncoder format AAC_1ch_8ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest009
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest009, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam009 = {
        {"channel_count", 1},
        {"sample_rate", 8000},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam009, "/data/media/S16LE_1_8000_out.aac",
                     "/data/media/S16LE_1_8000.pcm", 2048, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest010
 * @tc.name      : test audioEncoder format AAC_1ch_88.2ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest010
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest010, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam010 = {
        {"channel_count", 1},
        {"sample_rate", 88200},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam010, "/data/media/S16LE_1_88200_out.aac",
                     "/data/media/S16LE_1_88200.pcm", 2048, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest011
 * @tc.name      : test audioEncoder format AAC_1ch_96ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest011
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest011, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam011 = {
        {"channel_count", 1},
        {"sample_rate", 96000},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam011,"/data/media/S16LE_1_96000_out.aac",
                     "/data/media/S16LE_1_96000.pcm", 2048, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest012
 * @tc.name      : test audioEncoder format AAC_2ch_12ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest012
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest012, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam012 = {
        {"channel_count", 2},
        {"sample_rate", 12000},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam012,"/data/media/S16LE_2_12000_out.aac",
                     "/data/media/S16LE_2_12000.pcm", 4096, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest013
 * @tc.name      : test audioEncoder format AAC_2ch_16ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest013
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest013, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam013 = {
        {"channel_count", 2},
        {"sample_rate", 16000},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam013,"/data/media/S16LE_2_16000_out.aac",
                     "/data/media/S16LE_2_16000.pcm", 4096, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest014
 * @tc.name      : test audioEncoder format AAC_2ch_22.05ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest014
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest014, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam014 = {
        {"channel_count", 2},
        {"sample_rate", 22050},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam014,"/data/media/S16LE_2_22050_out.aac",
                     "/data/media/S16LE_2_22050.pcm", 4096, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest015
 * @tc.name      : test audioEncoder format AAC_2ch_24ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest015
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest015, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam015 = {
        {"channel_count", 2},
        {"sample_rate", 24000},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam015,"/data/media/S16LE_2_24000_out.aac",
                     "/data/media/S16LE_2_24000.pcm", 4096, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest016
 * @tc.name      : test audioEncoder format AAC_2ch_32ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest016
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest016, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam016 = {
        {"channel_count", 2},
        {"sample_rate", 32000},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam016,"/data/media/S16LE_2_32000_out.aac",
                     "/data/media/S16LE_2_32000.pcm", 4096, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest017
 * @tc.name      : test audioEncoder format AAC_2ch_44.1ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest017
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest017, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam017 = {
        {"channel_count", 2},
        {"sample_rate", 44100},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam017,"/data/media/S16LE_2_44100_out.aac",
                     "/data/media/S16LE_2_44100.pcm", 4096, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest018
 * @tc.name      : test audioEncoder format AAC_2ch_48ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest018
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest018, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam018 = {
        {"channel_count", 2},
        {"sample_rate", 48000},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam018,"/data/media/S16LE_2_48000_out.aac",
                     "/data/media/S16LE_2_48000.pcm", 4096, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest019
 * @tc.name      : test audioEncoder format AAC_2ch_64ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest019
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest019, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam019 = {
        {"channel_count", 2},
        {"sample_rate", 64000},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam019,"/data/media/S16LE_2_64000_out.aac",
                     "/data/media/S16LE_2_64000.pcm", 4096, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest020
 * @tc.name      : test audioEncoder format AAC_2ch_8ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest020
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest020, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam020 = {
        {"channel_count", 2},
        {"sample_rate", 8000},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam020,"/data/media/S16LE_2_8000_out.aac",
                     "/data/media/S16LE_2_8000.pcm", 4096, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest021
 * @tc.name      : test audioEncoder format AAC_2ch_88.2ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest021
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest021, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam021 = {
        {"channel_count", 2},
        {"sample_rate", 88200},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam021,"/data/media/S16LE_2_88200_out.aac",
                     "/data/media/S16LE_2_88200.pcm", 4096, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkFormatTest022
 * @tc.name      : test audioEncoder format AAC_2ch_96ksr
 * @tc.desc      : ActsAudioEncoderNdkFormatTest022
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkFormatTest022, Function | MediumTest | Level2)
{
    map<string, int> AudioEncParam022 = {
        {"channel_count", 2},
        {"sample_rate", 96000},
        {"audio_sample_format", 1},
    };

    audioDecoderProcess(AudioEncParam022, "/data/media/S16LE_2_96000_out.aac",
                         "/data/media/S16LE_2_96000.pcm", 4096, 1000);
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest001
 * @tc.name      : test audioEncoder prepare -> configErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest001
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest001, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out001.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest002
 * @tc.name      : test audioEncoder start -> configErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest002
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest002, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out002.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(1);
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Configure(AudioEncFormat));
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest003
 * @tc.name      : test audioEncoder flush -> configErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest003
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest003, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out003.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Flush());
    sleep(1);
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Configure(AudioEncFormat));
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest004
 * @tc.name      : test audioEncoder stop -> configErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest004
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest004, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out004.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest005
 * @tc.name      : test audioEncoder reset -> configErr -> prepareErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest005
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest005, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out005.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    AVFormat *AudioEncErrFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);
    aEncSample->SetFormat(AudioEncErrFormat, AudioEncErrParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Reset());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncErrFormat));
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest006
 * @tc.name      : test audioEncoder eos -> configErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest006
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest006, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out006.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    while (true) {
        if (!aEncSample->isRunning_.load()) {
            break;
        }
    }
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest007
 * @tc.name      : test audioEncoder config -> configErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest007
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest007, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out007.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest008
 * @tc.name      : test audioEncoder create -> prepareErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest008
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest008, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out008.aac");
       struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest009
 * @tc.name      : test audioEncoder start -> prepareErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest009
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest009, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out009.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(1);
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Prepare());
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest010
 * @tc.name      : test audioEncoder flush -> prepareErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest010
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest010, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out010.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Flush());
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Prepare());
    sleep(1);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest011
 * @tc.name      : test audioEncoder eos -> prepareErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest011
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest011, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out011.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    while (true) {
        if (!aEncSample->isRunning_.load()) {
            break;
        }
    }
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest012
 * @tc.name      : test audioEncoder stop -> prepareErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest012
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest012, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out012.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest013
 * @tc.name      : test audioEncoder reset -> prepareErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest013
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest013, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out013.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Reset());
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest014
 * @tc.name      : test audioEncoder prepare -> prepareErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest014
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest014, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out014.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest015
 * @tc.name      : test audioEncoder create -> startErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest015
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest015, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out015.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Start());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest016
 * @tc.name      : test audioEncoder config -> startErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest016
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest016, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out016.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Start());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest017
 * @tc.name      : test audioEncoder prepare -> startErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest017
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest017, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out017.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Start());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest018
 * @tc.name      : test audioEncoder start -> startErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest018
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest018, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out018.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, OH_AVCODEC_AudioEncoderStart(audEnc));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest019
 * @tc.name      : test audioEncoder eos -> startErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest019
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest019, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out019.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    while (true) {
        if (!aEncSample->isRunning_.load()) {
            break;
        }
    }
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, OH_AVCODEC_AudioEncoderStart(audEnc));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest020
 * @tc.name      : test audioEncoder reset -> startErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest020
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest020, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out020.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Reset());
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Start());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest021
 * @tc.name      : test audioEncoder create -> flushErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest021
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest021, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out021.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Flush());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest022
 * @tc.name      : test audioEncoder config -> flushErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest022
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest022, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out022.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Flush());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest023
 * @tc.name      : test audioEncoder prepare -> flushErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest023
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest023, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out023.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Flush());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest024
 * @tc.name      : test audioEncoder stop -> flushErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest024
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest024, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out024.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Flush());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest026
 * @tc.name      : test audioEncoder reset -> flushErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest026
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest026, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out026.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Reset());
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Flush());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest027
 * @tc.name      : test audioEncoder create -> stopErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest027
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest027, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out027.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest028
 * @tc.name      : test audioEncoder config -> stopErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest028
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest028, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out028.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest029
 * @tc.name      : test audioEncoder prepare -> stopErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest029
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest029, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out029.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest030
 * @tc.name      : test audioEncoder stop -> stopErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest030
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest030, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out030.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}

/**
 * @tc.number    : ActsAudioEncoderNdkReliablityTest031
 * @tc.name      : test audioEncoder reset -> stopErr
 * @tc.desc      : ActsAudioEncoderNdkReliablityTest031
 */
HWTEST_F(ActsAudioEncoderNdkTest, ActsAudioEncoderNdkReliablityTest031, Function | MediumTest | Level2)
{
    AEncNdkSample *aEncSample = new AEncNdkSample();
    aEncSample->init("/data/media/S16LE_rel_out031.aac");
    struct AVCodec* audEnc = aEncSample->CreateAudioEncoder();
    ASSERT_NE(nullptr, audEnc);

    AVFormat *AudioEncFormat = OH_AV_CreateFormat();
    ASSERT_NE(nullptr, AudioEncFormat);
    aEncSample->SetFormat(AudioEncFormat, AudioEncParam);

    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Reset());
    ASSERT_EQ(AV_ERR_OPERATE_NOT_PERMIT, aEncSample->Stop());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Configure(AudioEncFormat));
    ASSERT_EQ(AV_ERR_OK, aEncSample->Prepare());
    ASSERT_EQ(AV_ERR_OK, aEncSample->Start());
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aEncSample->Release());
    audEnc = nullptr;
    OH_AV_DestroyFormat(AudioEncFormat);
    AudioEncFormat = nullptr;
}
