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
#include "player.h"
#include "common.h"
#include "mediatest_log.h"
#include "window_manager.h"
#include "surface_type.h"
#include "display_type.h"
#include "player_impl.h"
#include "securec.h"
namespace OHOS {
namespace Media {
class TestPlayer {
public:
    std::shared_ptr<Player> player;
    std::unique_ptr<Window> mwindow;
    std::unique_ptr<SubWindow> window;
    TestPlayer();
    ~TestPlayer() = default;

    int32_t SetSource(const std::string &uri);

    int32_t Play();

    int32_t Prepare();

    int32_t PrepareAsync();

    int32_t Pause();

    int32_t Stop();

    int32_t Reset();

    int32_t Release();

    int32_t SetVolume(float leftVolume, float rightVolume);

    int32_t Seek(uint64_t seconds, int32_t mode);

    int32_t GetCurrentTime(uint64_t &currentTime);

    int32_t GetDuration(uint64_t &duration);

    int32_t SetPlaybackSpeed(int32_t mode);

    int32_t GetPlaybackSpeed(int32_t &mode);

    sptr<Surface> GetVideoSurface(WindowConfig g_sub_config);

    int32_t SetVideoSurface(sptr<Surface> surface);

    bool IsPlaying();

    bool IsLooping();

    int32_t SetLooping(bool loop);

    int32_t SetPlayerCallback(const std::shared_ptr<PlayerCallback> &callback);
};

static const std::string SURFACE_STRIDE_ALIGNMENT = "SURFACE_STRIDE_ALIGNMENT";
static const std::string SURFACE_FORMAT = "SURFACE_FORMAT";
static WindowConfig g_config = {
    .width = 1920,
    .height = 1080,
    .format = PIXEL_FMT_RGBA_8888,
    .pos_x = 0,
    .pos_y = 0,
    .type = WINDOW_TYPE_NORMAL
};
static WindowConfig g_sub_config = {
    .height = 720,
    .width = 480,
    .format = PIXEL_FMT_YCRCB_420_SP,
    .pos_x = 0,
    .pos_y = 0,
    .type = WINDOW_TYPE_VIDEO,
};
class TestPlayerCallback : public PlayerCallback {
public:
    int32_t errorType_;
    int32_t errorCode_;
    int errorNum = 0;
    int32_t flagSeek;
    uint64_t seekTime;
    PlayerStates state_;
    void OnError(int32_t errorType, int32_t errorCode)
    {
        errorNum++;
        errorType_ = errorType;
        errorCode_ = errorCode;
        MEDIA_INFO_LOG("TestPlayerCallback: OnError errorType is %d, errorCode is %d", errorType_, errorCode_);
    }
    int WaiteForError(int32_t errorType, int32_t errorCode)
    {
        int64_t waitTime = 0;
        while (errorCode_ != errorCode && waitTime < WAITETIME) {
            usleep(1000);
            waitTime += 1000;
        }
        if (waitTime >= WAITETIME) {
            MEDIA_INFO_LOG("Failed to get Error[%d] down", errorType);
            return -1;
        }
        return 0;
    }
    void OnSeekDone(uint64_t currentPositon)
    {
        seekTime = currentPositon;
        MEDIA_INFO_LOG("TestPlayerCallback: OnSeekDone currentPositon is %llu", currentPositon);
    }
    int WaiteForSeekDone(uint64_t currentPositon)
    {
        int64_t waitTime = 0;
        while (seekTime != currentPositon && waitTime < WAITETIME) {
            usleep(1000);
            waitTime += 1000;
        }
        if (waitTime >= WAITETIME) {
            MEDIA_INFO_LOG("Failed to seek [%llu]s ", currentPositon);
            return -1;
        }
        return 0;
    }
    void OnEndOfStream(bool isLooping)
    {
        MEDIA_INFO_LOG("TestPlayerCallback: OnEndOfStream isLooping is %d", isLooping);
    }
    void OnStateChanged(PlayerStates state)
    {
        state_ = state;
        PrintState(state);
    }
    void OnPositionUpdated(uint64_t postion)
    {
    };
    void OnMessage(int32_t type, int32_t extra)
    {
        MEDIA_INFO_LOG("TestPlayerCallback: OnMessage type is %d extra is %d", type, extra);
    };

    int WaiteForState(PlayerStates state)
    {
        int64_t waitTime = 0;
        while (state_ != state && waitTime < WAITETIME) {
            usleep(1000);
            waitTime += 1000;
        }
        if (waitTime >= WAITETIME) {
            MEDIA_INFO_LOG("Failed to wait for state[%d] down", state);
            return -1;
        }
        return 0;
    }
    void PrintState(PlayerStates state)
    {
        switch (state) {
            case PLAYER_STATE_ERROR:
                MEDIA_INFO_LOG("State: Error");
                break;
            case PLAYER_IDLE:
                MEDIA_INFO_LOG("State: IDLE");
                break;
            case PLAYER_INITIALIZED:
                MEDIA_INFO_LOG("State: Initialized");
                break;
            case PLAYER_PREPARING:
                MEDIA_INFO_LOG("State: Preparing");
                break;
            case PLAYER_PREPARED:
                MEDIA_INFO_LOG("State: Prepared");
                break;
            case PLAYER_STARTED:
                MEDIA_INFO_LOG("State: Started");
                break;
            case PLAYER_PAUSED:
                MEDIA_INFO_LOG("State: Paused");
                break;
            case PLAYER_STOPPED:
                MEDIA_INFO_LOG("State: Stopped");
                break;
            case PLAYER_PLAYBACK_COMPLETE:
                MEDIA_INFO_LOG("State: Complete");
                break;
            default:
                MEDIA_INFO_LOG("Invalid state");
                break;
        }
    }
};
}
}