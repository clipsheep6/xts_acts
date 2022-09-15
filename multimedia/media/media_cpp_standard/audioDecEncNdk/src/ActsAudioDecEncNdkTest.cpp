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
#include "audio_info.h"
#include "native_avcodec_audiodecoder.h"
#include "native_avcodec_audioencoder.h"
#include "native_avcodec_base.h"
#include "native_avformat.h"
#include "ADecEncNdkSample.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Media;

namespace {
class ActsAudioDecEncNdkTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp() override;
    void TearDown() override;
};

void ActsAudioDecEncNdkTest::SetUpTestCase() {}
void ActsAudioDecEncNdkTest::TearDownTestCase() {}
void ActsAudioDecEncNdkTest::SetUp() {}
void ActsAudioDecEncNdkTest::TearDown() {}

uint32_t ES_AAC_48000_32_1[] = {
    283, 336, 291, 405, 438, 411, 215, 215, 313, 270, 342, 641, 554, 545, 545, 546, 541, 
    540, 542, 552, 537, 533, 498, 472, 445, 430, 445, 427, 414, 386, 413, 370, 380, 401, 
    393, 369, 391, 367, 395, 396, 396, 385, 391, 384, 395, 392, 386, 388, 384, 379, 376, 
    381, 375, 373, 349, 391, 357, 384, 395, 384, 380, 386, 372, 386, 383, 378, 385, 385, 
    384, 342, 390, 379, 387, 386, 393, 397, 362, 393, 394, 391, 383, 385, 377, 379, 381, 
    369, 375, 379, 346, 382, 356, 361, 366, 394, 393, 385, 362, 406, 399, 384, 377, 385, 
    389, 375, 346, 396, 388, 381, 383, 352, 357, 397, 382, 395, 376, 388, 373, 374, 353, 
    383, 384, 393, 379, 348, 364, 389, 380, 381, 388, 423, 392, 381, 368, 351, 391, 355, 
    358, 395, 390, 385, 382, 383, 388, 388, 389, 376, 379, 376, 384, 369, 354, 390, 389, 
    396, 393, 382, 385, 353, 383, 381, 377, 411, 387, 390, 377, 349, 381, 390, 378, 373, 
    375, 381, 351, 392, 381, 380, 381, 378, 387, 379, 383, 348, 386, 364, 386, 371, 399, 
    399, 385, 380, 355, 397, 395, 382, 380, 386, 352, 387, 390, 373, 372, 388, 378};
constexpr uint32_t ES_AAC_48000_32_1_Length = sizeof(ES_AAC_48000_32_1) / sizeof(uint32_t);
const string MIME_TYPE_AAC = "audio/mp4a-latm";
constexpr uint32_t DEFAULT_SAMPLE_RATE = 44100;
constexpr uint32_t DEFAULT_CHANNELS = 2;
const char* READPATH = "/data/media/AAC_48000_32_1.aac";

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
}

/**
 * @tc.number    : ActsAudioDecEncNdkTest001
 * @tc.name      : stop at end of stream
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsAudioDecEncNdkTest, ActsAudioDecEncNdkTest001, Function | MediumTest | Level1)
{
    ADecEncNdkSample *aDecEncSample = new ADecEncNdkSample();

    map<string, int> AudioParam = {
            {OH_MD_KEY_AUD_CHANNEL_COUNT, DEFAULT_CHANNELS},
            {OH_MD_KEY_AUD_SAMPLE_RATE, DEFAULT_SAMPLE_RATE},
            {OH_MD_KEY_AUDIO_SAMPLE_FORMAT, AudioStandard::SAMPLE_S16LE},
    };
    OH_AVFormat *AudioFormat = OH_AVFormat_Create();
    ASSERT_NE(nullptr, AudioFormat);
    ASSERT_EQ(true, SetFormat(AudioFormat, AudioParam));

    struct OH_AVCodec* audDec = aDecEncSample->CreateAudioDecoder(MIME_TYPE_AAC);
    ASSERT_NE(nullptr, audDec);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureDec(AudioFormat));
    OH_AVFormat *OutDescDec = OH_AudioDecoder_GetOutputDescription(audDec);
    ASSERT_NE(nullptr, OutDescDec);
    ASSERT_EQ(true, CheckDecDesc(AudioParam, OutDescDec));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareDec());

    struct OH_AVCodec* audEnc = aDecEncSample->CreateAudioEncoder(MIME_TYPE_AAC);
    ASSERT_NE(nullptr, audEnc);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureEnc(AudioFormat));
    OH_AVFormat *OutDescEnc = OH_AudioEncoder_GetOutputDescription(audEnc);
    ASSERT_NE(nullptr, OutDescEnc);
    ASSERT_EQ(true, CheckDecDesc(AudioParam, OutDescEnc));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareEnc());

    aDecEncSample->SetReadPath(READPATH, ES_AAC_48000_32_1, ES_AAC_48000_32_1_Length);
    aDecEncSample->SetSavePath("/data/media/AAC_48000_32_1_out1.aac");
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());

    while (!aDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StopDec());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StopEnc());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseDec());
    audDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseEnc());
    audEnc = nullptr;
    OH_AVFormat_Destroy(AudioFormat);
    AudioFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->CalcuError());
}

/**
 * @tc.number    : ActsAudioDecEncNdkTest002
 * @tc.name      : reset at end of stream
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsAudioDecEncNdkTest, ActsAudioDecEncNdkTest002, Function | MediumTest | Level1)
{
    ADecEncNdkSample *aDecEncSample = new ADecEncNdkSample();

    struct OH_AVCodec* audDec = aDecEncSample->CreateAudioDecoder(MIME_TYPE_AAC);
    ASSERT_NE(nullptr, audDec);
    OH_AVFormat *AudioFormat = OH_AVFormat_Create();
    ASSERT_NE(nullptr, AudioFormat);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUD_CHANNEL_COUNT, DEFAULT_CHANNELS);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUD_SAMPLE_RATE, DEFAULT_SAMPLE_RATE);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUDIO_SAMPLE_FORMAT, AudioStandard::SAMPLE_S16LE);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureDec(AudioFormat));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareDec());

    struct OH_AVCodec* audEnc = aDecEncSample->CreateAudioEncoder(MIME_TYPE_AAC);
    ASSERT_NE(nullptr, audEnc);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureEnc(AudioFormat));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareEnc());
    aDecEncSample->SetReadPath(READPATH, ES_AAC_48000_32_1, ES_AAC_48000_32_1_Length);
    aDecEncSample->SetSavePath("/data/media/AAC_48000_32_1_out2.aac");

    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());
    while (!aDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ResetEnc());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ResetDec());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseDec());
    audDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseEnc());
    audEnc = nullptr;
    OH_AVFormat_Destroy(AudioFormat);
    AudioFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->CalcuError());
}

/**
 * @tc.number    : ActsAudioDecEncNdkTest003
 * @tc.name      : release at end of stream
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsAudioDecEncNdkTest, ActsAudioDecEncNdkTest003, Function | MediumTest | Level1)
{
    ADecEncNdkSample *aDecEncSample = new ADecEncNdkSample();

    struct OH_AVCodec* audDec = aDecEncSample->CreateAudioDecoder(MIME_TYPE_AAC);
    ASSERT_NE(nullptr, audDec);
    OH_AVFormat *AudioFormat = OH_AVFormat_Create();
    ASSERT_NE(nullptr, AudioFormat);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUD_CHANNEL_COUNT, DEFAULT_CHANNELS);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUD_SAMPLE_RATE, DEFAULT_SAMPLE_RATE);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUDIO_SAMPLE_FORMAT, AudioStandard::SAMPLE_S16LE);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureDec(AudioFormat));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareDec());

    struct OH_AVCodec* audEnc = aDecEncSample->CreateAudioEncoder(MIME_TYPE_AAC);
    ASSERT_NE(nullptr, audEnc);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureEnc(AudioFormat));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareEnc());
    aDecEncSample->SetReadPath(READPATH, ES_AAC_48000_32_1, ES_AAC_48000_32_1_Length);
    aDecEncSample->SetSavePath("/data/media/AAC_48000_32_1_out3.aac");

    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());
    while (!aDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseDec());
    audDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseEnc());
    audEnc = nullptr;
    OH_AVFormat_Destroy(AudioFormat);
    AudioFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->CalcuError());
}

/**
 * @tc.number    : ActsAudioDecEncNdkTest004
 * @tc.name      : flush at running
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsAudioDecEncNdkTest, ActsAudioDecEncNdkTest004, Function | MediumTest | Level1)
{
    ADecEncNdkSample *aDecEncSample = new ADecEncNdkSample();

    struct OH_AVCodec* audDec = aDecEncSample->CreateAudioDecoder(MIME_TYPE_AAC);
    ASSERT_NE(nullptr, audDec);
    OH_AVFormat *AudioFormat = OH_AVFormat_Create();
    ASSERT_NE(nullptr, AudioFormat);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUD_CHANNEL_COUNT, DEFAULT_CHANNELS);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUD_SAMPLE_RATE, DEFAULT_SAMPLE_RATE);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUDIO_SAMPLE_FORMAT, AudioStandard::SAMPLE_S16LE);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureDec(AudioFormat));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareDec());

    struct OH_AVCodec* audEnc = aDecEncSample->CreateAudioEncoder(MIME_TYPE_AAC);
    ASSERT_NE(nullptr, audEnc);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureEnc(AudioFormat));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareEnc());
    aDecEncSample->SetReadPath(READPATH, ES_AAC_48000_32_1, ES_AAC_48000_32_1_Length);
    aDecEncSample->SetSavePath("/data/media/AAC_48000_32_1_out4.aac");

    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());
    while (aDecEncSample->GetFrameCount() < 500) {};
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->FlushDec());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());

    while (!aDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseDec());
    audDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseEnc());
    audEnc = nullptr;
    OH_AVFormat_Destroy(AudioFormat);
    AudioFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->CalcuError());
}

/**
 * @tc.number    : ActsAudioDecEncNdkTest005
 * @tc.name      : flush decoder at eos
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsAudioDecEncNdkTest, ActsAudioDecEncNdkTest005, Function | MediumTest | Level1)
{
    ADecEncNdkSample *aDecEncSample = new ADecEncNdkSample();

    struct OH_AVCodec* audDec = aDecEncSample->CreateAudioDecoder(MIME_TYPE_AAC);
    ASSERT_NE(nullptr, audDec);
    OH_AVFormat *AudioFormat = OH_AVFormat_Create();
    ASSERT_NE(nullptr, AudioFormat);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUD_CHANNEL_COUNT, DEFAULT_CHANNELS);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUD_SAMPLE_RATE, DEFAULT_SAMPLE_RATE);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUDIO_SAMPLE_FORMAT, AudioStandard::SAMPLE_S16LE);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureDec(AudioFormat));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareDec());

    struct OH_AVCodec* audEnc = aDecEncSample->CreateAudioEncoder(MIME_TYPE_AAC);
    ASSERT_NE(nullptr, audEnc);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureEnc(AudioFormat));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareEnc());
    aDecEncSample->SetReadPath(READPATH, ES_AAC_48000_32_1, ES_AAC_48000_32_1_Length);
    aDecEncSample->SetEosState(false);
    aDecEncSample->SetSavePath("/data/media/AAC_48000_32_1_out5.aac");

    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());
    while (!aDecEncSample->GetDecEosState()) {};
    cout << "aDecEncSample->GetDecEosState() is " << aDecEncSample->GetDecEosState() << endl;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->CalcuError());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->FlushDec());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->FlushEnc());
    aDecEncSample->ReRead();
    aDecEncSample->ResetDecParam();
    aDecEncSample->ResetEncParam();
    aDecEncSample->SetSavePath("/data/media/AAC_48000_32_1_out5_2.aac");
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());
    aDecEncSample->SetEosState(true);
    sleep(2);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->CalcuError());

    while (!aDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseDec());
    audDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseEnc());
    audEnc = nullptr;
    OH_AVFormat_Destroy(AudioFormat);
    AudioFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->CalcuError());
}


/**
 * @tc.number    : ActsAudioDecEncNdkTest006
 * @tc.name      : stop at running and restart to eos
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsAudioDecEncNdkTest, ActsAudioDecEncNdkTest006, Function | MediumTest | Level1)
{
    ADecEncNdkSample *aDecEncSample = new ADecEncNdkSample();

    struct OH_AVCodec* audDec = aDecEncSample->CreateAudioDecoder(MIME_TYPE_AAC);
    ASSERT_NE(nullptr, audDec);
    OH_AVFormat *AudioFormat = OH_AVFormat_Create();
    ASSERT_NE(nullptr, AudioFormat);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUD_CHANNEL_COUNT, DEFAULT_CHANNELS);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUD_SAMPLE_RATE, DEFAULT_SAMPLE_RATE);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUDIO_SAMPLE_FORMAT, AudioStandard::SAMPLE_S16LE);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureDec(AudioFormat));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareDec());

    struct OH_AVCodec* audEnc = aDecEncSample->CreateAudioEncoder(MIME_TYPE_AAC);
    ASSERT_NE(nullptr, audEnc);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureEnc(AudioFormat));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareEnc());
    aDecEncSample->SetReadPath(READPATH, ES_AAC_48000_32_1, ES_AAC_48000_32_1_Length);
    aDecEncSample->SetSavePath("/data/media/AAC_48000_32_1_out6.aac");

    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());
    while (aDecEncSample->GetFrameCount() < 500) {};
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StopDec());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->CalcuError());

    while (!aDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseDec());
    audDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseEnc());
    audEnc = nullptr;
    OH_AVFormat_Destroy(AudioFormat);
    AudioFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->CalcuError());
}


/**
 * @tc.number    : ActsAudioDecEncNdkTest007
 * @tc.name      : stop dec at eos and restart to eos
 * @tc.desc      : Basic function test
 */
HWTEST_F(ActsAudioDecEncNdkTest, ActsAudioDecEncNdkTest007, Function | MediumTest | Level1)
{
    ADecEncNdkSample *aDecEncSample = new ADecEncNdkSample();

    struct OH_AVCodec* audDec = aDecEncSample->CreateAudioDecoder(MIME_TYPE_AAC);
    ASSERT_NE(nullptr, audDec);
    OH_AVFormat *AudioFormat = OH_AVFormat_Create();
    ASSERT_NE(nullptr, AudioFormat);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUD_CHANNEL_COUNT, DEFAULT_CHANNELS);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUD_SAMPLE_RATE, DEFAULT_SAMPLE_RATE);
    OH_AVFormat_SetIntValue(AudioFormat, OH_MD_KEY_AUDIO_SAMPLE_FORMAT, AudioStandard::SAMPLE_S16LE);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureDec(AudioFormat));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareDec());

    struct OH_AVCodec* audEnc = aDecEncSample->CreateAudioEncoder(MIME_TYPE_AAC);
    ASSERT_NE(nullptr, audEnc);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ConfigureEnc(AudioFormat));
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->PrepareEnc());
    aDecEncSample->SetReadPath(READPATH, ES_AAC_48000_32_1, ES_AAC_48000_32_1_Length);
    aDecEncSample->SetEosState(false);
    aDecEncSample->SetSavePath("/data/media/AAC_48000_32_1_out7.aac");

    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());
    while (!aDecEncSample->GetDecEosState()) {};
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StopDec());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->FlushEnc());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->CalcuError());

    aDecEncSample->ReRead();
    aDecEncSample->ResetDecParam();
    aDecEncSample->ResetEncParam();
    aDecEncSample->SetSavePath("/data/media/AAC_48000_32_1_out7_2.aac");
    aDecEncSample->SetEosState(true);
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartEnc());
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->StartDec());

    while (!aDecEncSample->GetEncEosState()) {};
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseDec());
    audDec = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->ReleaseEnc());
    audEnc = nullptr;
    OH_AVFormat_Destroy(AudioFormat);
    AudioFormat = nullptr;
    ASSERT_EQ(AV_ERR_OK, aDecEncSample->CalcuError());
}