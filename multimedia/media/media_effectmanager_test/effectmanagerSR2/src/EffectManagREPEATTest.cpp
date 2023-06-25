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
#include <time.h>  
#include "audio_stream_manager.h"
#include "audio_renderer.h"
#include "audio_info.h"
//#include "audio_stream.h"


using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::AudioStandard;

namespace {
class EffectManagerLongTimeTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp() override;
    void TearDown() override;
};

void EffectManagerLongTimeTest::SetUpTestCase() {}
void EffectManagerLongTimeTest::TearDownTestCase() {}
void EffectManagerLongTimeTest::SetUp() {}
void EffectManagerLongTimeTest::TearDown() {}

constexpr uint32_t EFFECTMANAGERSUCCESS = 0;
constexpr int EFFECTMANAGERFAILED = -1;

constexpr int TIMES = 2000;

AudioSamplingRate samplingRate = AudioSamplingRate::SAMPLE_RATE_44100;
AudioSampleFormat format = AudioSampleFormat::SAMPLE_S16LE;
//AudioEncodingType encoding = AudioEncodingType::ENCODING_PCM;
AudioChannel channels = AudioChannel::MONO;
   

}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_REPEAT_TEST_001
 * @tc.name      : GetEffectInfoArray LongTime Test
 * @tc.desc      : Stablity test
 */
HWTEST_F(EffectManagerLongTimeTest, OH_EFFECTMANAGER_SR2_REPEAT_TEST_001, TestSize.Level2)
{

	AudioStreamManager *audioStreamManager = AudioStreamManager::GetInstance();
	AudioSceneEffectInfo audioSceneEffectInfo = {};
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;
	


	int i = 0;
	while (i < TIMES)
	{
		i++;
		//std::vector<std::unique_ptr<AudioEffectInfoArray>> audioEffectInfoArray;
		audioStreamManager->GetEffectInfoArray(audioSceneEffectInfo,contentType,streamUsage);
		
		if(audioSceneEffectInfo.mode.size()<2)
		{
			EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		}
		EXPECT_EQ(AudioEffectMode::EFFECT_NONE, audioSceneEffectInfo.mode[0]);
		EXPECT_EQ(AudioEffectMode::EFFECT_DEFAULT, audioSceneEffectInfo.mode[1]);
		cout << "SR2_REPEAT_TEST_001 is run:" <<i << "second"<<endl;
	}
	EXPECT_EQ(EFFECTMANAGERSUCCESS,0);
	//EXPECT_EQ(EFFECTMANAGERSUCCESS,audioStreamManager->GetEffectInfoArray(audioEffectInfoArray))<<"OH_EFFECTMANAGER_SR2_STABLITY_TEST_005 Failed";
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_REPEAT_TEST_002
 * @tc.name      :  GetAudioEffectMode LongTime Test
 * @tc.desc      : Stablity test
 */
HWTEST_F(EffectManagerLongTimeTest, OH_EFFECTMANAGER_SR2_REPEAT_TEST_002, TestSize.Level2)
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
        cout << "AudioRendererTest: Create failed" << endl;
		EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
		return;
    }
	//audioRenderer.GetAudioEffectMode();
	
	
	int i = 0;
	while (i < TIMES)
	{
		i++;
		AudioEffectMode effectMode = audioRenderer->GetAudioEffectMode();
		cout << "effectMode:" << (int)effectMode;
		//EXPECT_EQ(EFFECTMANAGERSUCCESS,effectMode)<<"OH_EFFECTMANAGER_SR2_STABLITY_TEST_005 Failed";
		
		cout << "SR2_REPEAT_TEST_002 is run:" <<i << "second" << endl;
	}
	audioRenderer->Release();
	
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_REPEAT_TEST_003
 * @tc.name      : Get AudioEffectInfoArray LongTime Test
 * @tc.desc      : Stablity test
 */
HWTEST_F(EffectManagerLongTimeTest, OH_EFFECTMANAGER_SR2_REPEAT_TEST_003, TestSize.Level2)
{	

	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;
	int i = 0;
	while ( i < TIMES)
	{
		i++;
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
	        cout << "AudioRendererTest: Create failed" << endl;
			EXPECT_EQ(EFFECTMANAGERSUCCESS,EFFECTMANAGERFAILED);
	        return;
	    }
		AudioEffectMode effectMode = AudioEffectMode::EFFECT_NONE;
		audioRenderer->SetAudioEffectMode(effectMode);

		
		cout << "SR2_REPEAT_TEST_003 is run:" <<i << "second"<<endl;
		cout << "effect:" << (int)effectMode;
		audioRenderer->Release();
	}
	
}


