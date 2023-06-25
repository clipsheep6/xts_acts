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
#include "audio_stream_manager.h"
#include "audio_renderer.h"
#include "audio_info.h"
//#include "audio_stream.h"


using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Media;

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
constexpr int FUZZ_TEST_NUM = 1000000;

float getFloatRand()
{

	// float rand = rand();
	float data = -10000 + (float)rand() % 20001;
	return data;
}

int32_t getIntRand()
{
	int32_t data = -10000 + rand() % 20001;
	return data;
}
void InitAudioStream(std::shared_ptr<AudioStream> &audioStream)
{
	AppInfo appInfo_ = {};
	if (!(appInfo_.appPid)) {
		appInfo_.appPid = getpid();
	}

	if (appInfo_.appUid < 0) {
		appInfo_.appUid = static_cast<int32_t>(getuid());
	}
	
	audioStream = std::make_shared<AudioStream>(STREAM_NOTIFICATION, AUDIO_MODE_PLAYBACK, appInfo_.appUid);
	if (audioStream) {
		AUDIO_DEBUG_LOG("InitAudioStream::Audio stream created");
	}
}

     
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUZZ_TEST_001
 * @tc.name      : contentType
 * @tc.desc      : Fuzz test
 */
HWTEST_F(FFmpegAVMuxerFuzzTest, OH_EFFECTMANAGER_SR2_FUZZ_TEST_001, TestSize.Level2)
{

srand(time(NULL) * 10);
for (int i = 0; i < FUZZ_TEST_NUM; i++) {
	cout << "current run time is: " << i << endl;
        
	ContentType contentType = getFloatRand();
	StreamUsage streamUsage = getFloatRand();
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
	AudioEffectMode effectMode = AudioEffectMode::EFFECT_NONE;
	ret = audioRenderer->SetAudioEffectMode(effectMode);
	audioRenderer->release();
	}

}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUZZ_TEST_002
 * @tc.name      : GetEffectInfoArray
 * @tc.desc      : Fuzz test
 */
HWTEST_F(FFmpegAVMuxerFuzzTest, OH_EFFECTMANAGER_SR2_FUZZ_TEST_001, TestSize.Level2)
{

	srand(time(NULL) * 10);
	for (int i = 0; i < FUZZ_TEST_NUM; i++)
	{
		cout << "current run time is: " << i << endl;

		AudioStreamManager *audioStreamManager = AudioStreamManager::GetInstance();
		std::vector<std::unique_ptr<AudioEffectInfoArray>> audioEffectInfoArray;
		ContentType contentType = getFloatRand();
		StreamUsage streamUsage = getFloatRand();

		//std::vector<std::unique_ptr<AudioEffectInfoArray>> audioEffectInfoArray;
		audioStreamManager->GetEffectInfoArray(audioEffectInfoArray,contentType,streamUsage);

		if(audioEffectInfoArray.size()<2)
		{
			EXPECT_EQ(EFFECTMANAGERSUCCESS,-1);
		}
		
		audioRenderer->release();


	}
}
/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_FUZZ_TEST_001
 * @tc.name      : Get AudioEffectInfoArray
 * @tc.desc      : Interface test
 */
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_FUZZ_TEST_001, TestSize.Level2)
{
//	std::shared_ptr<AudioStream> audioStream_;
//   	InitAudioStream(audioStream_);

//	int32_t GetEffectInfoArray(std::vector<std::unique_ptr<AudioEffectInfoArray>> &audioEffectInfoArray);
	AudioStreamManager *audiostreammanager = AudioStreamManager.GetInstance();
//	GetEffectInfoArray(vector<unique_ptr<AudioSceneEffectInfo>> &audioSceneEffectInfo,
//   int32_t contentType, int32_t streamUsage)；

	std::vector<std::unique_ptr<AudioEffectInfoArray>> audioEffectInfoArray;
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;
	audiostreammanager->GetEffectInfoArray(audioEffectInfoArray,contentType,streamUsage);
	//EXPECT_EQ(EFFECTMANAGERSUCCESS,audiostreammanager->GetEffectInfoArray(audioEffectInfoArray,contentType,streamUsage))<<"OH_EFFECTMANAGER_SR2_INTERFACE_TEST_003 Failed";
	for (int i =0; i < audioEffectInfoArray.size(); ++ i =0)
	{
		cout << "audioEffectInfoArray-number:"<<i ;
		cout << "audioEffectInfoArray:"<< audioEffectInfoArray[i].scene << endl;
		cout << "audioEffectInfoArray:"<< audioEffectInfoArray[i].mode << endl;
	}
	cout << "audioEffectInfoArray:"<< << endl;
}

	
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
	AudioEffectMode effectMode = AudioEffectMode::EFFECT_NONE;
	audioRenderer->SetAudioEffectMode(effectMode);
	effectMode = audioRenderer->GetAudioEffectMode();
	EXPECT_EQ(AudioEffectMode::EFFECT_NONE,effectMode);
	audioRenderer->release();

	