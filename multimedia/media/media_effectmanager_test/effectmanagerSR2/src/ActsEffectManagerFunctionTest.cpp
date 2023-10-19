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
	cout << "AudioRendererTest: SetAudioEffectMode ";
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
}



/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_001
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_001, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_UNKNOWN;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_002
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_002, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_003
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_003, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_COMMUNICATION;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_004
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_004, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_ASSISTANT;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_005
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_005, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ALARM;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_006
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_006, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_NOTIFICATION_RINGTONE;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_007
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_007, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ACCESSIBILITY;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_008
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_008, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_SYSTEM;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_009
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_009, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_SPEECH;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_UNKNOWN;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_010
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_010, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_SPEECH;
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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_011
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_011, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_SPEECH;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_COMMUNICATION;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_012
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_012, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_SPEECH;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_ASSISTANT;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_013
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_013, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_SPEECH;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ALARM;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_014
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_014, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_SPEECH;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_NOTIFICATION_RINGTONE;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_015
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_015, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_SPEECH;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ACCESSIBILITY;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_016
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_016, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_SPEECH;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_SYSTEM;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_017
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_017, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_UNKNOWN;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_018
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_018, TestSize.Level2)
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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_019
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_019, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_COMMUNICATION;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_020
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_020, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_ASSISTANT;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_021
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_021, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ALARM;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_022
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_022, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_NOTIFICATION_RINGTONE;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_023
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_023, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ACCESSIBILITY;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_024
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_024, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_SYSTEM;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_025
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_025, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MOVIE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_UNKNOWN;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_026
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_026, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MOVIE;
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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_027
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_027, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MOVIE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_COMMUNICATION;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_028
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_028, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MOVIE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_ASSISTANT;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_029
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_029, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MOVIE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ALARM;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_030
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_030, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MOVIE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_NOTIFICATION_RINGTONE;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_031
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_031, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MOVIE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ACCESSIBILITY;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_032
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_032, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_MOVIE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_SYSTEM;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_033
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_033, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_SONIFICATION;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_UNKNOWN;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_034
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_034, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_SONIFICATION;
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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_035
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_035, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_SONIFICATION;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_COMMUNICATION;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_036
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_036, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_SONIFICATION;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_ASSISTANT;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_037
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_037, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_SONIFICATION;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ALARM;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_038
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_038, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_SONIFICATION;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_NOTIFICATION_RINGTONE;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_039
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_039, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_SONIFICATION;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ACCESSIBILITY;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_040
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_040, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_SONIFICATION;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_SYSTEM;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_041
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_041, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_UNKNOWN;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_042
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_042, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_043
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_043, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_COMMUNICATION;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_044
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_044, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_ASSISTANT;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_045
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_045, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ALARM;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_046
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_046, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_NOTIFICATION_RINGTONE;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_047
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_047, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ACCESSIBILITY;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_048
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_048, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_SYSTEM;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_049
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_049, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_ULTRASONIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_UNKNOWN;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_050
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_050, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_ULTRASONIC;
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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_051
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_051, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_ULTRASONIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_COMMUNICATION;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_052
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_052, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_ULTRASONIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_ASSISTANT;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_053
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_053, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_ULTRASONIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ALARM;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_054
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_054, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_ULTRASONIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_NOTIFICATION_RINGTONE;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_055
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_055, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_ULTRASONIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ACCESSIBILITY;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_056
 * @tc.name      : Get audioEffectModeContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_056, TestSize.Level2)
{
	ContentType contentType = ContentType::CONTENT_TYPE_ULTRASONIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_SYSTEM;

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
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();

	AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
	cout << "effectMode:" << (int)effectMode;
	
	audioRenderer->Release();
	
}



/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_057
 * @tc.name      : Get audioEffectModeContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_057, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_UNKNOWN;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_058
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_058, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_059
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_059, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_COMMUNICATION;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_060
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_060, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_ASSISTANT;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_061
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_061, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ALARM;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_062
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_062, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_NOTIFICATION_RINGTONE;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_063
 * @tc.name      : Get audioEffectInfoArray ContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_063, TestSize.Level2)
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


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_064
 * @tc.name      : Get audioEffectInfoArray ContentType::CONTENT_TYPE_MUSIC
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_064, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_SYSTEM;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_065
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_065, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_SPEECH;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_UNKNOWN;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_066
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_066, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_SPEECH;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_067
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_067, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_SPEECH;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_COMMUNICATION;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_068
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_068, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_SPEECH;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_ASSISTANT;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_069
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_069, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_SPEECH;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ALARM;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_070
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_070, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_SPEECH;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_NOTIFICATION_RINGTONE;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_071
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_071, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_SPEECH;
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


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_072
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_072, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_SPEECH;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_SYSTEM;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_073
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_073, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_UNKNOWN;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_074
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_074, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_075
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_075, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_COMMUNICATION;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_076
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_076, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_ASSISTANT;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_077
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_077, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ALARM;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_078
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_078, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_NOTIFICATION_RINGTONE;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_079
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_079, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
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


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_080
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_080, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_SYSTEM;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_081
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_081, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MOVIE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_UNKNOWN;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_082
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_082, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MOVIE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_083
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_083, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MOVIE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_COMMUNICATION;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_084
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_084, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MOVIE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_ASSISTANT;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_085
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_085, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MOVIE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ALARM;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_086
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_086, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MOVIE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_NOTIFICATION_RINGTONE;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_087
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_087, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MOVIE;
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


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_088
 * @tc.name      : Get audioEffectInfoArray ContentType:
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_088, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MOVIE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_SYSTEM;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_089
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_089, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_SONIFICATION;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_UNKNOWN;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_090
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_090, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_SONIFICATION;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_091
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_091, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_SONIFICATION;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_COMMUNICATION;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_092
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_092, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_SONIFICATION;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_ASSISTANT;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_093
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_093, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_SONIFICATION;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ALARM;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_094
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_094, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_SONIFICATION;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_NOTIFICATION_RINGTONE;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_095
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_095, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_SONIFICATION;
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


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_096
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_096, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_SYSTEM;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_097
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_097, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_UNKNOWN;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_098
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_098, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_099
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_099, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_COMMUNICATION;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_0100
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_100, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_ASSISTANT;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_101
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_101, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ALARM;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_102
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_102, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_NOTIFICATION_RINGTONE;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_103
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_103, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
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


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_104
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_104, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_RINGTONE;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_SYSTEM;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_105
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_105, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_ULTRASONIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_UNKNOWN;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_106
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_106, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_ULTRASONIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_107
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_107, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_ULTRASONIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_COMMUNICATION;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_108
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_108, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_ULTRASONIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_VOICE_ASSISTANT;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_109
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_109, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_ULTRASONIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_ALARM;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_110
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_110, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_ULTRASONIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_NOTIFICATION_RINGTONE;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_111
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_111, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_ULTRASONIC;
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


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_112
 * @tc.name      : Get audioEffectInfoArray ContentType::
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_112, TestSize.Level2)
{


	AudioStreamManager* audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_ULTRASONIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_SYSTEM;

	//    AudioSceneEffectInfo audioSceneEffectInfo = {}; 
	audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo, contentType, streamUsage);

	if (audioSceneEffectInfo.mode.size() < 2)
	{
		EXPECT_EQ(EFFECTMANAGERSUCCESS, -1);
	}
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);

	EXPECT_EQ(EFFECTMANAGERSUCCESS, 0);


}


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_113
 * @tc.name      : setAudioEffectMode的MODE
 * @tc.desc      : function test
 **/

HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_STABLITY_TEST_113, TestSize.Level2)
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
	effectMode = AudioEffectMode::EFFECT_DEFAULT;
	audioRenderer->SetAudioEffectMode(effectMode);
	effectMode = audioRenderer->GetAudioEffectMode();
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, effectMode);
	audioRenderer->Release();


}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_114
 * @tc.name      : setAudioEffectMode ContentType::CONTENT_TYPE_MUSIC;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_114, TestSize.Level2)
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
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_115
 * @tc.name      : SetMode ContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_115, TestSize.Level2)
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
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_116
 * @tc.name      : GetArray ContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_116, TestSize.Level2)
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
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_117
 * @tc.name      : GetAudioEffectMode ContentType::CONTENT_TYPE_MUSIC;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_117, TestSize.Level2)
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
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, effectMode1);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, effectMode2);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, effectMode3);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, effectMode4);
	EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, effectMode5);
	audioRenderer1->Release();
	audioRenderer2->Release();
	audioRenderer3->Release();
	audioRenderer4->Release();
	audioRenderer5->Release();

}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUNCTION_TEST_118
 * @tc.name      : Get GetMode ContentType::CONTENT_TYPE_UNKNOWN;
 * @tc.desc      : function test
 **/
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUNCTION_TEST_118, TestSize.Level2)
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