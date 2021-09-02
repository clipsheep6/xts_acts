
/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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
#include "media_log.h"
#include "player.h"
#include "display_type.h"
#include "surface.h"
#include "surface_type.h"
#include "window_manager.h"

#define MEDIA_DEBUG_LOG(fmt, ...) \
do { \
    printf(fmt, ##__VA_ARGS__); \
    printf("\n"); \
    __MEDIA_LOG(::OHOS::HiviewDFX::HiLog::Debug, fmt, ##__VA_ARGS__); \
} while (0) \

#define MEDIA_INFO_LOG(fmt, ...) \
do { \
    printf(fmt, ##__VA_ARGS__); \
    printf("\n"); \
    __MEDIA_LOG(::OHOS::HiviewDFX::HiLog::Info, fmt, ##__VA_ARGS__); \
} while (0) \

#define MEDIA_ERROR_LOG(fmt, ...) \
do { \
    printf(fmt, ##__VA_ARGS__); \
    printf("\n"); \
    __MEDIA_LOG(::OHOS::HiviewDFX::HiLog::Error, fmt, ##__VA_ARGS__); \
} while (0) \

namespace {
    constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, LOG_DOMAIN, "playertest"};
}

namespace MediaTest {
    constexpr int SURFACE_QUEUE_SIZE = 5;
    const int FIRST_ARG_IDX = 1;
    const int SECOND_ARG_IDX = 2;
    const int THIRD_ARG = 3;
    const int HEIGHT = 720;
    const int WIDTH = 1280;
    const int MAX_LEN_1 = 20;
    const int MAX_LEN_2 = 50;
}
namespace OHOS {
namespace Media {
class PlayerTest {
public:
    void DoNext(int32_t state);

    static int TestSetVideoSurface(sptr<Surface> producerSurface, std::shared_ptr<Player> player);

    int IsFile(const char *path) const;

    sptr<Surface> GetVideoSurface(const char *surface);
        
    int32_t TestPlayerAPI(int argc, char *argv[]);

private:
    std::unique_ptr<Window> mwindow;
    std::unique_ptr<SubWindow> window;
    std::shared_ptr<Player> player;
    std::string fileName = ".";
    std::string fileDirectory = "";
    bool cbTrigger_ = false;
};
class MyPlayerCallback : public PlayerCallback {
public:
    explicit MyPlayerCallback(PlayerTest *test);
    ~MyPlayerCallback();
    // PlayerCallback override
    void OnError(PlayerErrorType errorType, int32_t errorCode) override;
    void OnInfo(PlayerOnInfoType type, int32_t extra, const Format &infoBody = {}) override;
    int WaitForState(PlayerStates state);
private:
    int32_t count = 0;
    const int WAITETIME = 2000000;
    PlayerStates state_ = PLAYER_STATE_ERROR;
    PlayerTest *test_;
    void PrintState(PlayerStates state);
};
}
}