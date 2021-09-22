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
#include "ActsPlayerAPITest.h"
#include "player.h"
using namespace std;
using namespace OHOS;
using namespace OHOS::Media;
using namespace testing::ext;
using namespace PlayerNameSpace;

/**
    * @tc.number    : SUB_MEDIA_PLAYER_API_Stop_0400
    * @tc.name      : 04.Stop操作在Play之后
    * @tc.desc      : test Stop
*/
HWTEST_F(ActsPlayerAPITest, SUB_MEDIA_PLAYER_API_Stop_0400, Reliability | MediumTest | Level2)
{
    PlayerSignal testObj;
    std::shared_ptr<TestPlayer> player = std::make_shared<TestPlayer>(&testObj);
    ASSERT_NE(nullptr, player);
    ASSERT_EQ(true, player->CreatePlayer());
    std::string uri = GetUri();
    ASSERT_EQ(RET_OK, player->SetSource(uri));
    sptr<Surface> videoSurface = player->GetVideoSurface(g_sub_config);
    EXPECT_EQ(RET_OK, player->SetVideoSurface(videoSurface));
    std::shared_ptr<TestPlayerCallback> testCallback = std::make_shared<TestPlayerCallback>(&testObj);
    EXPECT_EQ(RET_OK, player->SetPlayerCallback(testCallback));
    ASSERT_EQ(RET_OK, player->Prepare());
    EXPECT_EQ(RET_OK, player->Play());
    EXPECT_TRUE(player->IsPlaying());
    EXPECT_EQ(RET_OK, player->Stop());
    EXPECT_EQ(RET_OK, player->Reset());
    EXPECT_EQ(RET_OK, testCallback->errorNum);
}
