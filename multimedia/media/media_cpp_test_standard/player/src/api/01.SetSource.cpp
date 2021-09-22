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
    * @tc.number    : SUB_MEDIA_PLAYER_API_SetSource_0100
    * @tc.name      : 01.SetSource操作在new之后
    * @tc.desc      : test SetSource
*/
HWTEST_F(ActsPlayerAPITest, SUB_MEDIA_PLAYER_API_SetSource_0100, Reliability | MediumTest | Level2)
{
    PlayerSignal testObj;
    std::shared_ptr<TestPlayer> player = std::make_shared<TestPlayer>(&testObj);
    ASSERT_NE(nullptr, player);
    ASSERT_EQ(true, player->CreatePlayer());
    std::string uri = GetUri();
    ASSERT_EQ(RET_OK, player->SetSource(uri));
}
