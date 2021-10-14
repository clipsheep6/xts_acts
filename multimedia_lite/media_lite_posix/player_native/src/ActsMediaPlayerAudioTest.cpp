/*
 * Copyright (C) 2020-2021 Huawei Device Co., Ltd.
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

#include <fstream>
#include <iostream>
#include <climits>
#include <unistd.h>
#include <fcntl.h>
#include "securec.h"
#include "ActsMediaPlayerTest.h"

namespace OHOS {
const string g_audioFileName = "Audiochannel_002.m4a";

const int32_t HI_SUCCESS = 0;
const int32_t HI_FAILURE = -1;

using OHOS::Media::Player;
using OHOS::Media::PlayerSeekMode;
using OHOS::Media::Source;
using OHOS::Media::Format;
using OHOS::Media::StreamSource;

class PlayerliteTest : public testing::Test {
protected:
// SetUpTestCase:The preset action of the test suite is executed before the first TestCase
    static void SetUpTestCase(void)
    {
    }
// TearDownTestCase:The test suite cleanup action is executed after the last TestCase
    static void TearDownTestCase(void)
    {
    }
// SetUp:Execute before each test case
    virtual void SetUp()
    {
        g_tagTestSample.adaptr = std::make_shared<Player>();
    }
// TearDown:Execute after each test case
    virtual void TearDown()
    {
    }
};

class PlayerliteCallback : public Media::PlayerCallback {
public:
    PlayerliteCallback() = default;

    virtual ~PlayerliteCallback() = default;

    void OnPlaybackComplete() override;

    void OnError(int32_t errorType, int32_t errorCode) override;

    void OnInfo(int type, int extra) override;

    void OnVideoSizeChanged(int width, int height) override;

    void OnRewindToComplete() override;
};

void PlayerliteCallback::OnPlaybackComplete()
{
    cout << "PlayerTest::OnPlaybackComplete ..." << endl;
}

void PlayerliteCallback::OnError(int32_t errorType, int32_t errorCode)
{
    cout << "PlayerTest::OnError ..." << endl;
}

void PlayerliteCallback::OnInfo(int32_t type, int32_t extra)
{
    cout << "PlayerTest::OnInfo ..." << endl;
}

void PlayerliteCallback::OnVideoSizeChanged(int width, int height)
{
    cout << "PlayerTest::OnVideoSizeChanged ..." << endl;
}

void PlayerliteCallback::OnRewindToComplete()
{
    cout << "PlayerTest::OnRewindToComplete ..." << endl;
}


static int32_t FileCheck(const string &argv)
{
    const char *ptr = argv.c_str();

    if (sizeof(ptr) < sizeof(g_tagTestSample.filePath) &&
        realpath(argv.c_str(), g_tagTestSample.filePath) == NULL) {
        printf("realpath input file failed, errno: %d!\n", errno);
        return -1;
    }
    return 0;
}

static int32_t CreateAndSetSource()
{
    std::string uri(g_tagTestSample.filePath);
    Source source(uri);
    int32_t ret = g_tagTestSample.adaptr->SetSource(source);
    string ret1 = source.GetSourceUri();
    return ret;
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_0100
 * @tc.name      : Audio Prepare(),Play() Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_001, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    sleep(2);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_0200
 * @tc.name      : Audio Play() Pause() Stop() Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_002, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Pause();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Stop();
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_0300
 * @tc.name      : Audio Play() stop() Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_003, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Stop();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_FAILURE, ret);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_0400
 * @tc.name      : Audio Prepare() Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_004, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_0500
 * @tc.name      : Audio Prepare() Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_005, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_0600
 * @tc.name      : Audio Play(),Stop() Test
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_006, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Stop();
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Release();
}

 /* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_0700
 * @tc.name      : Audio Play(),Stop(),IsPlay() Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_007, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Stop();
    EXPECT_EQ(HI_SUCCESS, ret);
    bool flag = g_tagTestSample.adaptr->IsPlaying();
    EXPECT_EQ(false, flag);
    g_tagTestSample.adaptr->Release();
}

 /* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_0800
 * @tc.name      : Audio IsPlay() Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_008, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    bool flag = g_tagTestSample.adaptr->IsPlaying();
    EXPECT_EQ(true, flag);
    g_tagTestSample.adaptr->Release();
}

 /* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_0900
 * @tc.name      : Audio  Play() Pause() Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_009, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Pause();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Pause();
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Release();
}

 /* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_1000
 * @tc.name      : Audio Pause Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_010, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Pause();
    EXPECT_EQ(HI_FAILURE, ret);
    g_tagTestSample.adaptr->Release();
}

 /* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_1100
 * @tc.name      : Audio SetVolume Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_011, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->SetVolume(40, 40);
    sleep(10);
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Release();
}

 /* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_1200
 * @tc.name      : Audio SetVolume Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_012, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->SetVolume(0, 0);
    sleep(10);
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_1300
 * @tc.name      : Audio SetVolume Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_013, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->SetVolume(-1, -1);
    sleep(10);
    EXPECT_EQ(HI_FAILURE, ret);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_1400
 * @tc.name      : Audio SetVolume Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_014, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->SetVolume(300, 300);
    sleep(10);
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_1500
 * @tc.name      : Audio SetVolume Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_015, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->SetVolume(300, 301);
    sleep(10);
    EXPECT_EQ(HI_FAILURE, ret);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_1600
 * @tc.name      : Audio SetVolume Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_016, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->SetVolume(50, 100);
    sleep(10);
    EXPECT_EQ(HI_FAILURE, ret);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_1700
 * @tc.name      : Audio Play, GetCurrentTime Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_017, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    sleep(3);
    int64_t currentPosition;
    ret = g_tagTestSample.adaptr->GetCurrentTime(currentPosition);
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_1800
 * @tc.name      : Audio Play, GetCurrentTime Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_018, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Pause();
    ret = g_tagTestSample.adaptr->Rewind(0, PLAYER_SEEK_NEXT_SYNC);
    EXPECT_EQ(HI_SUCCESS, ret);
    int64_t currentPosition;
    ret = g_tagTestSample.adaptr->GetCurrentTime(currentPosition);
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_1900
 * @tc.name      : Audio Seek Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_019, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Pause();
    ret = g_tagTestSample.adaptr->Rewind(4, PLAYER_SEEK_NEXT_SYNC);
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_2000
 * @tc.name      : Audio  GetDuration Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_020, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    int64_t duration;
    ret = g_tagTestSample.adaptr->GetDuration(duration);
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_2100
 * @tc.name      : Audio  GetDuration Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_021, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    int64_t duration;
    ret = g_tagTestSample.adaptr->GetDuration(duration);
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_2200
 * @tc.name      : Audio Reset Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_022, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Reset();
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_2300
 * @tc.name      : Audio Reset Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_023, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Reset();
    EXPECT_EQ(HI_SUCCESS, ret);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_2400
 * @tc.name      : Audio EnableSingleLoop() Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_024, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    bool loop = true;
    ret = g_tagTestSample.adaptr->EnableSingleLooping(loop);
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    EXPECT_EQ(HI_SUCCESS, ret);
    bool flag = g_tagTestSample.adaptr->IsPlaying();
    EXPECT_EQ(true, flag);
    g_tagTestSample.adaptr->Release();
}

/* *
 * @tc.number    : SUB_MEDIA_PLAYER_PLAY_2500
 * @tc.name      : Audio EnableSingleLoop() Test.
 * @tc.desc      : [C- SOFTWARE -0200]
 */
HWTEST_F(PlayerliteTest, player_lite_audio_test_025, Level1)
{
    int32_t ret = FileCheck(g_audioFileName);
    EXPECT_EQ(HI_SUCCESS, ret);
    std::shared_ptr<PlayerliteCallback> callBack;
    callBack = std::make_shared<PlayerliteCallback>();
    g_tagTestSample.adaptr->SetPlayerCallback(callBack);
    ret = CreateAndSetSource();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Prepare();
    EXPECT_EQ(HI_SUCCESS, ret);
    ret = g_tagTestSample.adaptr->Play();
    sleep(10);
    EXPECT_EQ(HI_SUCCESS, ret);
    bool loop = true;
    ret = g_tagTestSample.adaptr->EnableSingleLooping(loop);
    EXPECT_EQ(HI_SUCCESS, ret);
    bool flag = g_tagTestSample.adaptr->IsPlaying();
    EXPECT_EQ(true, flag);
    g_tagTestSample.adaptr->Release();
}
} // OHOS
