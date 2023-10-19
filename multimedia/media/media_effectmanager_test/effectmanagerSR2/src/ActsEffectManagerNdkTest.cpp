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
 * @tc.number    : OH_EFFECTMANAGER_SR2_INTERFACE_TEST_003
 * @tc.name      : Get AudioEffectInfoArray Correctly
 * @tc.desc      : Interface test
 */
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_INTERFACE_TEST_003, TestSize.Level2)
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


/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_INTERFACE_TEST_004
 * @tc.name      : Get AudioEffectInfoArray Wrongs
 * @tc.desc      : Interface test
 */
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_INTERFACE_TEST_004, TestSize.Level2)
{
	AudioStreamManager *audiostreammanager = AudioStreamManager.GetInstance();
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;

	std::vector<std::unique_ptr<AudioEffectInfoArray>> audioEffectInfoArray;
	std::unique_ptr<AudioEffectInfoArray> effectInfo(nullptr);
	audioEffectInfoArray.push_back(effectInfo);
	//EXPECT_NE(EFFECTMANAGERSUCCESS,audiostreammanager->GetEffectInfoArray(audioEffectInfoArray,contentType,streamUsage))<<"OH_EFFECTMANAGER_SR2_INTERFACE_TEST_004 Failed";
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_INTERFACE_TEST_005
 * @tc.name      : Get AudioEffectInfoArray Wrongs
 * @tc.desc      : Interface test
 */
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_INTERFACE_TEST_005, TestSize.Level2)
{
	AudioStreamManager *audiostreammanager = AudioStreamManager.GetInstance();
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;

	std::vector<std::unique_ptr<AudioEffectInfoArray>> audioEffectInfoArray;
	std::unique_ptr<AudioEffectInfoArray> effectInfo(nullptr);
	audioEffectInfoArray.push_back(effectInfo);
	//EXPECT_NE(EFFECTMANAGERSUCCESS,audiostreammanager->GetEffectInfoArray(audioEffectInfoArray,contentType,streamUsage))<<"OH_EFFECTMANAGER_SR2_INTERFACE_TEST_004 Failed";
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_INTERFACE_TEST_006
 * @tc.name      : Get AudioEffectInfoArray Wrongs
 * @tc.desc      : Interface test
 */
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_INTERFACE_TEST_006, TestSize.Level2)
{
	AudioStreamManager *audiostreammanager = AudioStreamManager.GetInstance();
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;

	std::vector<std::unique_ptr<AudioEffectInfoArray>> audioEffectInfoArray;
	std::unique_ptr<AudioEffectInfoArray> effectInfo(nullptr);
	audioEffectInfoArray.push_back(effectInfo);
	//EXPECT_NE(EFFECTMANAGERSUCCESS,audiostreammanager->GetEffectInfoArray(audioEffectInfoArray,contentType,streamUsage))<<"OH_EFFECTMANAGER_SR2_INTERFACE_TEST_004 Failed";
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_INTERFACE_TEST_008
 * @tc.name      : Get AudioEffectInfoArray Wrongs
 * @tc.desc      : Interface test
 */
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_INTERFACE_TEST_008, TestSize.Level2)
{
	AudioStreamManager *audiostreammanager = AudioStreamManager.GetInstance();
	ContentType contentType = ContentType::CONTENT_TYPE_UNKNOWN;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;

	std::vector<std::unique_ptr<AudioEffectInfoArray>> audioEffectInfoArray;
	std::unique_ptr<AudioEffectInfoArray> effectInfo(nullptr);
	audioEffectInfoArray.push_back(effectInfo);
	//EXPECT_NE(EFFECTMANAGERSUCCESS,audiostreammanager->GetEffectInfoArray(audioEffectInfoArray,contentType,streamUsage))<<"OH_EFFECTMANAGER_SR2_INTERFACE_TEST_004 Failed";
}

/**
 * @tc.number    : OH_EFFECTMANAGER_SR2_INTERFACE_TEST_008
 * @tc.name      : Get AudioEffectInfoArray Wrongs
 * @tc.desc      : Interface test
 */
HWTEST_F(ActsEffectManagerNdkTest, OH_EFFECTMANAGER_SR2_INTERFACE_TEST_008, TestSize.Level2)
{
	AudioStreamManager *audiostreammanager = AudioStreamManager.GetInstance();
	ContentType contentType = ContentType::CONTENT_TYPE_MUSIC;
	StreamUsage streamUsage = StreamUsage::STREAM_USAGE_MEDIA;

	std::vector<std::unique_ptr<AudioEffectInfoArray>> audioEffectInfoArray;
	std::unique_ptr<AudioEffectInfoArray> effectInfo(nullptr);
	audioEffectInfoArray.push_back(effectInfo);
	//EXPECT_NE(EFFECTMANAGERSUCCESS,audiostreammanager->GetEffectInfoArray(audioEffectInfoArray,contentType,streamUsage))<<"OH_EFFECTMANAGER_SR2_INTERFACE_TEST_004 Failed";
}



/*
AudioRendererOptions rendererOptions = {};
        rendererOptions.streamInfo.encoding = AudioEncodingType::ENCODING_PCM;
        rendererOptions.streamInfo.samplingRate = static_cast<AudioSamplingRate>(wavHeader.SamplesPerSec);
        rendererOptions.streamInfo.format = GetSampleFormat(wavHeader.bitsPerSample);
        rendererOptions.streamInfo.channels = static_cast<AudioChannel>(wavHeader.NumOfChan);
        rendererOptions.rendererInfo.contentType = contentType;
        rendererOptions.rendererInfo.streamUsage = streamUsage;
        rendererOptions.rendererInfo.rendererFlags = 0;

        unique_ptr<AudioRenderer> audioRenderer = AudioRenderer::Create(rendererOptions);

        if (audioRenderer == nullptr) {
            AUDIO_ERR_LOG("AudioRendererTest: Create failed");
            fclose(wavFile);
            return false;
        }
*/


