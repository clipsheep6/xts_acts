/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "ActsPlayerFuncTest.h"
#include "securec.h"

using namespace std;
using namespace OHOS;
using namespace OHOS::Media;
using namespace testing::ext;

/**
    * @tc.number    : SUB_MEDIA_PLAYER_Local_Function_03_0100
    * @tc.name      : 001.Play
    * @tc.desc      : Playback control
*/
HWTEST_F(ActsPlayerFuncTest, SUB_MEDIA_PLAYER_Local_Function_03_0100, Function | MediumTest | Level0)
{
    std::shared_ptr<TestPlayer> player = std::make_shared<TestPlayer>();
    ASSERT_NE(player, nullptr);
    std::string uri = "file:///data/1.mp3";
    EXPECT_EQ(0, player->SetSource(uri));
    std::shared_ptr<TestPlayerCallback> testCallback = std::make_shared<TestPlayerCallback>();
    EXPECT_EQ(0, player->SetPlayerCallback(testCallback));
    EXPECT_EQ(0, player->Prepare());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_PREPARED));
    EXPECT_EQ(0, player->Play());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_STARTED));
    sleep(2);
    EXPECT_TRUE(player->IsPlaying());
    EXPECT_EQ(0, player->Stop());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_STOPPED));
    EXPECT_EQ(0, player->Reset());
    EXPECT_EQ(0, player->Release());
}

/**
    * @tc.number    : SUB_MEDIA_PLAYER_Local_Function_03_0200
    * @tc.name      : 002.Pause
    * @tc.desc      : Playback control
*/
HWTEST_F(ActsPlayerFuncTest, SUB_MEDIA_PLAYER_Local_Function_03_0200, Function | MediumTest | Level0)
{
    std::shared_ptr<TestPlayer> player = std::make_shared<TestPlayer>();
    ASSERT_NE(player, nullptr);
    std::string uri = "/data/1.mp3";
    EXPECT_EQ(0, player->SetSource(uri));

    sptr<Surface> videoSurface = player->GetVideoSurface(g_sub_config);

    std::shared_ptr<TestPlayerCallback> testCallback = std::make_shared<TestPlayerCallback>();
    EXPECT_EQ(0, player->SetPlayerCallback(testCallback));
    EXPECT_EQ(0, player->Prepare());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_PREPARED));

    EXPECT_EQ(0, player->Play());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_STARTED));
    sleep(2);
    EXPECT_TRUE(player->IsPlaying());

    EXPECT_EQ(0, player->Pause());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_PAUSED));
    EXPECT_FALSE(player->IsPlaying());

    EXPECT_EQ(0, player->Stop());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_STOPPED));
    EXPECT_EQ(0, player->Reset());
}

/**
    * @tc.number    : SUB_MEDIA_PLAYER_Local_Function_03_0300
    * @tc.name      : 003.Resume playback
    * @tc.desc      : Playback control
*/
HWTEST_F(ActsPlayerFuncTest, SUB_MEDIA_PLAYER_Local_Function_03_0300, Function | MediumTest | Level0)
{
    std::shared_ptr<TestPlayer> player = std::make_shared<TestPlayer>();
    ASSERT_NE(player, nullptr);
    std::string uri = "/data/1.mp3";
    EXPECT_EQ(0, player->SetSource(uri));

    std::shared_ptr<TestPlayerCallback> testCallback = std::make_shared<TestPlayerCallback>();
    EXPECT_EQ(0, player->SetPlayerCallback(testCallback));
    EXPECT_EQ(0, player->Prepare());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_PREPARED));

    EXPECT_EQ(0, player->Play());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_STARTED));
    sleep(2);
    EXPECT_TRUE(player->IsPlaying());

    EXPECT_EQ(0, player->Pause());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_PAUSED));
    EXPECT_FALSE(player->IsPlaying());

    EXPECT_EQ(0, player->Play());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_STARTED));
    sleep(2);
    EXPECT_TRUE(player->IsPlaying());

    EXPECT_EQ(0, player->Stop());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_STOPPED));
    EXPECT_EQ(0, player->Reset());
}

/**
    * @tc.number    : SUB_MEDIA_PLAYER_Local_Function_03_0400
    * @tc.name      : 004.Stop
    * @tc.desc      : Playback control
*/
HWTEST_F(ActsPlayerFuncTest, SUB_MEDIA_PLAYER_Local_Function_03_0400, Function | MediumTest | Level0)
{
    std::shared_ptr<TestPlayer> player = std::make_shared<TestPlayer>();
    ASSERT_NE(player, nullptr);
    std::string uri = "/data/1.mp3";
    EXPECT_EQ(0, player->SetSource(uri));

    std::shared_ptr<TestPlayerCallback> testCallback = std::make_shared<TestPlayerCallback>();
    EXPECT_EQ(0, player->SetPlayerCallback(testCallback));
    EXPECT_EQ(0, player->Prepare());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_PREPARED));
    EXPECT_EQ(0, player->Play());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_STARTED));
    sleep(2);
    EXPECT_TRUE(player->IsPlaying());
    EXPECT_EQ(0, player->Stop());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_STOPPED));
    EXPECT_FALSE(player->IsPlaying());
    EXPECT_EQ(0, player->Reset());
}

/**
    * @tc.number    : SUB_MEDIA_PLAYER_Local_Function_03_0500
    * @tc.name      : 005.Reset
    * @tc.desc      : Playback control
*/
HWTEST_F(ActsPlayerFuncTest, SUB_MEDIA_PLAYER_Local_Function_03_0500, Function | MediumTest | Level0)
{
    std::shared_ptr<TestPlayer> player = std::make_shared<TestPlayer>();
    ASSERT_NE(player, nullptr);
    std::string uri = "/data/1.mp3";
    EXPECT_EQ(0, player->SetSource(uri));

    std::shared_ptr<TestPlayerCallback> testCallback = std::make_shared<TestPlayerCallback>();
    EXPECT_EQ(0, player->SetPlayerCallback(testCallback));
    EXPECT_EQ(0, player->Prepare());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_PREPARED));
    EXPECT_EQ(0, player->Play());
    EXPECT_EQ(0, testCallback->WaiteForState(PLAYER_STARTED));
    sleep(2);
    EXPECT_TRUE(player->IsPlaying());
    EXPECT_EQ(0, player->Reset());
    EXPECT_FALSE(player->IsPlaying());
}
