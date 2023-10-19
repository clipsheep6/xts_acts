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

#include <thread>
#include <string>
#include "gtest/gtest.h"
#include "audio_stream_manager.h"
#include "audio_renderer.h"
#include "audio_info.h"
 //#include "audio_stream.h"


using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::AudioStandard;

namespace {
	class ActsEffectManagerNdkTest : public testing::Test {
	public:
		static void SetUpTestCase();
		static void TearDownTestCase();
		void SetUp() override;
		void TearDown() override;
	};

	void ActsEffectManagerNdkTest::SetUpTestCase() {}
	void ActsEffectManagerNdkTest::TearDownTestCase() {}
	void ActsEffectManagerNdkTest::SetUp() {}
	void ActsEffectManagerNdkTest::TearDown() {}

	constexpr uint32_t EFFECTMANAGERSUCCESS = 0;
	constexpr uint32_t EFFECTMANAGERFAILED = -1;


	AudioSamplingRate samplingRate = AudioSamplingRate::SAMPLE_RATE_44100;
	AudioSampleFormat format = AudioSampleFormat::SAMPLE_S16LE;
	//AudioEncodingType encoding = AudioEncodingType::ENCODING_PCM;
	AudioChannel channels = AudioChannel::MONO;

}


void SetMode()
{

	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;
	AudioRendererOptions rendererOptions = {};
	rendererOptions.streamInfo.encoding = AudioEncodingType::ENCODING_PCM;
	rendererOptions.streamInfo.samplingRate = samplingRate;
	rendererOptions.streamInfo.format = format;
	rendererOptions.streamInfo.channels = channels;
	rendererOptions.rendererInfo.contentType = contentType;
	rendererOptions.rendererInfo.streamUsage = streamUsage;

	rendererOptions.rendererInfo.rendererFlags = 0;

	unique_ptr<AudioRenderer> audioRenderer = AudioRenderer::Create(rendererOptions);

	if (audioRenderer == nullptr) {
		cout << "AudioRendererTest: Create failed";
		EXPECT_EQ(EFFECTMANAGERSUCCESS, EFFECTMANAGERFAILED);
		return;
	}
	AudioEffectMode effectMode = AudioEffectMode::EFFECT_NONE;
	audioRenderer->SetAudioEffectMode(effectMode);
	cout << "AudioRendererTest: SetAudioEffectMode " << endl;
	audioRenderer->Release();
}

void GetMode()
{

	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;
	AudioRendererOptions rendererOptions = {};
	rendererOptions.streamInfo.encoding = AudioEncodingType::ENCODING_PCM;
	rendererOptions.streamInfo.samplingRate = samplingRate;
	rendererOptions.streamInfo.format = format;
	rendererOptions.streamInfo.channels = channels;
	rendererOptions.rendererInfo.contentType = contentType;
	rendererOptions.rendererInfo.streamUsage = streamUsage;

	rendererOptions.rendererInfo.rendererFlags = 0;

	unique_ptr<AudioRenderer> audioRenderer = AudioRenderer::Create(rendererOptions);

	if (audioRenderer == nullptr) {
		cout << "AudioRendererTest: Create failed";
		EXPECT_EQ(EFFECTMANAGERSUCCESS, EFFECTMANAGERFAILED);
		return;
	}
	AudioEffectMode effectMode = AudioEffectMode::EFFECT_NONE;
	audioRenderer->SetAudioEffectMode(effectMode);
	effectMode = audioRenderer->GetAudioEffectMode();
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, effectMode);
	cout << "AudioRendererTest: GetAudioEffectMode " << endl;
	audioRenderer->Release();	
}

void GetArray()
{
	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ACCESSIBILITY;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);
	cout << "AudioRendererTest: GetEffectInfoArray " << endl;
}



/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_001
 * @tc.name      : SetMode ContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_001, TestSize.Level2)
{
    vector<thread> threadVec;
    for (int i = 0; i < 16; i++)
    {
        threadVec.push_back(thread(SetMode));
    }
    for (uint32_t i = 0; i < threadVec.size(); i++)
    {
        threadVec[i].join();
    }
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_002
 * @tc.name      : Get GetMode ContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_002, TestSize.Level2)
{
    vector<thread> threadVec;
    for (int i = 0; i < 16; i++)
    {
        threadVec.push_back(thread(GetMode));
    }
    for (uint32_t i = 0; i < threadVec.size(); i++)
    {
        threadVec[i].join();
    }
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_003
 * @tc.name      : GetArray ContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_003, TestSize.Level2)
{
    vector<thread> threadVec;
    for (int i = 0; i < 16; i++)
    {
        threadVec.push_back(thread(GetArray));
    }
    for (uint32_t i = 0; i < threadVec.size(); i++)
    {
        threadVec[i].join();
    }
}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_004
 * @tc.name      : SetAudioEffectMode ContentType::CONTENT_TYPE_MUSIC;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_004, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;
	AudioRendererOptions rendererOptions = {};
	rendererOptions.streamInfo.encoding = AudioEncodingType::ENCODING_PCM;
	rendererOptions.streamInfo.samplingRate = samplingRate;
	rendererOptions.streamInfo.format = format;
	rendererOptions.streamInfo.channels = channels;
	rendererOptions.rendererInfo.contentType = contentType;
	rendererOptions.rendererInfo.streamUsage = streamUsage;

	rendererOptions.rendererInfo.rendererFlags = 0;

	unique_ptr<AudioRenderer> audioRenderer1 = AudioRenderer::Create(rendererOptions);
	unique_ptr<AudioRenderer> audioRenderer2 = AudioRenderer::Create(rendererOptions);
	unique_ptr<AudioRenderer> audioRenderer3 = AudioRenderer::Create(rendererOptions);
	unique_ptr<AudioRenderer> audioRenderer4 = AudioRenderer::Create(rendererOptions);

	unique_ptr<AudioRenderer> audioRenderer5 = AudioRenderer::Create(rendererOptions);
	ASSERT_NE(nullptr, audioRenderer1);
	if (audioRenderer1 == nullptr) {
		cout << "AudioRendererTest: Create failed";
		return;
	}
	AudioEffectMode effectMode = AudioEffectMode::EFFECT_NONE;
	audioRenderer1->SetAudioEffectMode(effectMode);
	audioRenderer2->SetAudioEffectMode(effectMode);
	audioRenderer3->SetAudioEffectMode(effectMode);
	audioRenderer4->SetAudioEffectMode(effectMode);
	audioRenderer5->SetAudioEffectMode(effectMode);
	AudioEffectMode effectMode1 = audioRenderer1->GetAudioEffectMode();
	AudioEffectMode effectMode2 = audioRenderer2->GetAudioEffectMode();
	AudioEffectMode effectMode3 = audioRenderer3->GetAudioEffectMode();
	AudioEffectMode effectMode4 = audioRenderer4->GetAudioEffectMode();
	AudioEffectMode effectMode5 = audioRenderer5->GetAudioEffectMode();
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, effectMode1);
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, effectMode2);
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, effectMode3);
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, effectMode4);
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, effectMode5);
	cout << "AudioRendererTest: GetAudioEffectMode " << endl;
	audioRenderer1->Release();
	audioRenderer2->Release();
	audioRenderer3->Release();
	audioRenderer4->Release();
	audioRenderer5->Release();

}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_005
 * @tc.name      : GetAudioEffectMode ContentType::CONTENT_TYPE_MUSIC;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_005, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;
	AudioRendererOptions rendererOptions = {};
	rendererOptions.streamInfo.encoding = AudioEncodingType::ENCODING_PCM;
	rendererOptions.streamInfo.samplingRate = samplingRate;
	rendererOptions.streamInfo.format = format;
	rendererOptions.streamInfo.channels = channels;
	rendererOptions.rendererInfo.contentType = contentType;
	rendererOptions.rendererInfo.streamUsage = streamUsage;

	rendererOptions.rendererInfo.rendererFlags = 0;

	unique_ptr<AudioRenderer> audioRenderer1 = AudioRenderer::Create(rendererOptions);
	unique_ptr<AudioRenderer> audioRenderer2 = AudioRenderer::Create(rendererOptions);
	unique_ptr<AudioRenderer> audioRenderer3 = AudioRenderer::Create(rendererOptions);
	unique_ptr<AudioRenderer> audioRenderer4 = AudioRenderer::Create(rendererOptions);
	unique_ptr<AudioRenderer> audioRenderer5 = AudioRenderer::Create(rendererOptions);
	ASSERT_NE(nullptr, audioRenderer1);
	if (audioRenderer1 == nullptr && audioRenderer2 == nullptr && audioRenderer3 == nullptr && audioRenderer4 == nullptr) {
		cout << "AudioRendererTest: Create failed";
		return;
	}
	AudioEffectMode effectMode1 = audioRenderer1->GetAudioEffectMode();
	AudioEffectMode effectMode2 = audioRenderer2->GetAudioEffectMode();
	AudioEffectMode effectMode3 = audioRenderer3->GetAudioEffectMode();
	AudioEffectMode effectMode4 = audioRenderer4->GetAudioEffectMode();
	AudioEffectMode effectMode5 = audioRenderer5->GetAudioEffectMode();
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, effectMode1);
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, effectMode2);
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, effectMode3);
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, effectMode4);
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, effectMode5);
	audioRenderer1->Release();
	audioRenderer2->Release();
	audioRenderer3->Release();
	audioRenderer4->Release();
	audioRenderer5->Release();

}