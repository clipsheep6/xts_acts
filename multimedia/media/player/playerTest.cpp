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

#include "playerTest.h"
#include <iostream>
#include <dirent.h>
#include <securec.h>
#include "gtest/gtest.h"

using namespace std;
using namespace OHOS;
using namespace OHOS::Media;
using namespace MediaTest;
static const std::string SURFACE_STRIDE_ALIGNMENT = "SURFACE_STRIDE_ALIGNMENT";
static const std::string SURFACE_FORMAT = "SURFACE_FORMAT";

MyPlayerCallback::MyPlayerCallback(PlayerTest *test)
    : test_(test)
{
}
MyPlayerCallback::~MyPlayerCallback()
{
}
// PlayerCallback override
void MyPlayerCallback::OnError(PlayerErrorType errorType, int32_t errorCode)
{
    MEDIA_INFO_LOG("Error received, errorType:%d, errorCode:%d", errorType, errorCode);
}

void MyPlayerCallback::OnInfo(PlayerOnInfoType type, int32_t extra, const Format &infoBody)
{
    switch (type) {
        case INFO_TYPE_SEEKDONE:
            MEDIA_INFO_LOG("TestPlayerCallback: OnSeekDone currentPositon is %d", extra);
            break;
        case INFO_TYPE_EOS:
            MEDIA_INFO_LOG("TestPlayerCallback: OnEndOfStream isLooping is %d", extra);
            break;
        case INFO_TYPE_STATE_CHANGE:
            state_ = static_cast<PlayerStates>(extra);
            PrintState(state_);
            test_->DoNext(state_);
            break;
        case INFO_TYPE_POSITION_UPDATE:
            if (count == 100) {
                MEDIA_INFO_LOG("OnPositionUpdated positon is %d", extra);
                count = 0;
            }
            count++;
            break;
        case INFO_TYPE_MESSAGE:
            MEDIA_INFO_LOG("TestPlayerCallback: OnMessage is %d", extra);
            break;
        default:
            break;
    }
}
int MyPlayerCallback::WaitForState(PlayerStates state)
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

void MyPlayerCallback::PrintState(PlayerStates state)
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


void PlayerTest::DoNext(int32_t state)
{
    if (!cbTrigger_) {
        return;
    }
    MEDIA_INFO_LOG("DoNext state:%d", state);
    switch (state) {
        case PLAYER_IDLE:
            MEDIA_INFO_LOG("PLAYER_IDLE");
            player->SetSource(fileDirectory + fileName);
            player->PrepareAsync();
            break;
        case PLAYER_PREPARED:
        MEDIA_INFO_LOG("PLAYER_PREPARED");
            player->Play();
            break;
        default:
            break;
    }
}

int PlayerTest::TestSetVideoSurface(sptr<Surface> producerSurface, std::shared_ptr<Player> player)
{
    if (player == nullptr) {
        MEDIA_ERROR_LOG("TestSetVideoSurface : player is null");
        return 0;
    }
    int ret = player->SetVideoSurface(producerSurface);
    return ret;
}

int PlayerTest::IsFile(const char *path) const
{
    struct stat s;
    if (stat(path, &s) == 0) {
        if (s.st_mode & S_IFDIR) {
            cout << "DIR" << endl;
            return 0;
        } else if (s.st_mode & S_IFREG) {
            cout << "FILE" << endl;
            return 1;
        } else {
            cout << "?" << endl;
            return -1;
        }
    } else {
        cout << "ERR" << endl;
        return -1;
    }
}

sptr<Surface> PlayerTest::GetVideoSurface(const char *surface)
{
    WindowConfig config = {
        WIDTH,
        HEIGHT,
        PIXEL_FMT_RGBA_8888,
        0,
        0,
        WINDOW_TYPE_NORMAL
    };
    mwindow = WindowManager::GetInstance()->CreateWindow(&config);
    if (mwindow == nullptr) {
        MEDIA_ERROR_LOG("mwindow is null");
        return nullptr;
    }
    sptr<Surface> producerSurface;
    if (strcmp(surface, "sub") == 0) {
        MEDIA_INFO_LOG("subwindow");
        sptr<SurfaceBuffer> buffer;
        BufferRequestConfig requestConfig;
        int32_t releaseFence;
        mwindow->GetRequestConfig(requestConfig);
        mwindow->GetSurface()->RequestBuffer(buffer, releaseFence, requestConfig);
        uint32_t buffSize = buffer->GetSize();
        void *bufferVirAddr = buffer->GetVirAddr();
        memset_s(bufferVirAddr, buffSize, 0, buffSize);
        BufferFlushConfig flushConfig = {
            {
                0,
                0,
                requestConfig.width,
                requestConfig.height,
            },
            0,
        };
        if (mwindow->GetSurface()->FlushBuffer(buffer, -1, flushConfig) != 0) {
            MEDIA_INFO_LOG("FlushBuffer failed");
        }
        WindowConfig subConfig = {
            720,
            480,
            PIXEL_FMT_YCRCB_420_SP,
            0,
            0,
            WINDOW_TYPE_VIDEO,
        };
        window = WindowManager::GetInstance()->CreateSubWindow(mwindow->GetWindowID(), &subConfig);
        if (window == nullptr) {
            MEDIA_ERROR_LOG("window is null");
            return nullptr;
        }
        producerSurface = window->GetSurface();
    } else if (strcmp(surface, "win") == 0) {
        MEDIA_INFO_LOG("window");
        producerSurface = mwindow->GetSurface();
        producerSurface->SetUserData(SURFACE_FORMAT, std::to_string(PIXEL_FMT_RGBA_8888));
        std::string format = producerSurface->GetUserData(SURFACE_FORMAT);
        MEDIA_INFO_LOG("SetUserData SURFACE_FORMAT = %s", format.c_str());
    }
    return producerSurface;
}

int32_t PlayerTest::TestPlayerAPI(int argc, char *argv[])
{
    MEDIA_INFO_LOG("TestPlayerAPI start ");
    if (argv == nullptr) {
        MEDIA_ERROR_LOG("argv is null");
        return 0;
    }
    player = OHOS::Media::PlayerFactory::CreatePlayer();
    if (player == nullptr) {
        MEDIA_ERROR_LOG("CreatePlayer :player is null");
        return 0;
    }
    struct dirent **filelist;
    string path = argv[FIRST_ARG_IDX];
    int isFileFlag = IsFile(path.c_str());
    if (isFileFlag == 1) {
        const size_t lastSlashIdx = path.rfind('/');
        fileDirectory = path.substr(0, lastSlashIdx + 1);
        fileName = path.substr(lastSlashIdx + 1, path.size());
    } else if (isFileFlag == 0) {
        fileDirectory = path;
        fileName = "null";
    } else {
        const size_t lastSlashIdx = path.rfind('/');
        fileDirectory = path.substr(0, lastSlashIdx + 1);
        fileName = path.substr(lastSlashIdx + 1, path.size());
    }
    int fileNum = 0;
    int fileId = 0;
    int firstId = 0;
    if (isFileFlag != -1) {
        fileNum = scandir(fileDirectory.c_str(), &filelist, 0, alphasort);
        if (fileNum < 0) {
            cerr << "memery error " << endl;
        } else {
            cout << "total number is: " << fileNum << endl;
        }
        for (int i = 0; i < fileNum; i++) {
            /* skip . && .. */
            if (filelist[i]->d_name[0] == '.') {
                firstId = i;
                continue;
            }
            if (fileName == "null") {
                fileId = i;
                break;
            } else if (strcmp(fileName.c_str(), filelist[i]->d_name) == 0) {
                fileId = i;
                break;
            }
        }
        fileName = filelist[fileId]->d_name;
    }
    int ret = player->SetSource(fileDirectory + fileName);
    EXPECT_EQ(0, ret);

    sptr<Surface> producerSurface;
    // setVideoSurface
    if (argc >= THIRD_ARG) {
        producerSurface = GetVideoSurface(argv[SECOND_ARG_IDX]);
        ret = TestSetVideoSurface(producerSurface, player);
        EXPECT_EQ(0, ret);
    }

    // MyPlayerCallback callback;
    std::shared_ptr<MyPlayerCallback> testCallback = std::make_shared<MyPlayerCallback>(this);
    player->SetPlayerCallback(testCallback);
    player->PrepareAsync();
    cout<<"Enter your step:"<<endl;
    const int size = 81;
    char step[size];
    while (cin.getline(step, size)) {
        if (strcmp(step, "n") == 0) {
            EXPECT_EQ(0, player->Reset());
            EXPECT_EQ(0, testCallback->WaitForState(PLAYER_IDLE));
            if (fileId < fileNum) {
                fileId++;
            } else {
                fileId = firstId;
            }
            fileName = filelist[fileId]->d_name;
            MEDIA_INFO_LOG("%s is playing ...", fileName.c_str());
            EXPECT_EQ(0, player->SetSource(fileDirectory + fileName));
            EXPECT_EQ(0, player->PrepareAsync());
            EXPECT_EQ(0, testCallback->WaitForState(PLAYER_PREPARED));
            EXPECT_EQ(0, player->Play());
            EXPECT_EQ(0, testCallback->WaitForState(PLAYER_STARTED));
            continue;
        }
        if (strcmp(step, "nn") == 0) {
            EXPECT_EQ(0, player->Release());
            player = OHOS::Media::PlayerFactory::CreatePlayer();
            if (player == nullptr) {
                MEDIA_ERROR_LOG("player is null");
                return 0;
            }
            if (fileId < fileNum) {
                fileId++;
            } else {
                fileId = firstId;
            }
            fileName = filelist[fileId]->d_name;
            MEDIA_INFO_LOG("%s is playing ...", fileName.c_str());
            EXPECT_EQ(0, player->SetSource(fileDirectory + fileName));
            testCallback = std::make_shared<MyPlayerCallback>(this);
            player->SetPlayerCallback(testCallback);
            EXPECT_EQ(0, player->PrepareAsync());
            EXPECT_EQ(0, testCallback->WaitForState(PLAYER_PREPARED));
            EXPECT_EQ(0, player->Play());
            EXPECT_EQ(0, testCallback->WaitForState(PLAYER_STARTED));
            continue;
        }
        if (strstr(step, "source") != nullptr) {
            char *str = strrchr(step, ' ');
            if (str != nullptr) {
                EXPECT_EQ(0, player->SetSource(std::string(str + 1)));
            } else {
                MEDIA_INFO_LOG("You need to configure the path parameter ...");
            }
            continue;
        }
        if (strcmp("cb", step) == 0) {
            MEDIA_INFO_LOG("cbTrigger_ = true");
            cbTrigger_ = true;
            continue;
        }
        if (strcmp("nocb", step) == 0) {
            MEDIA_INFO_LOG("cbTrigger_ = false");
            cbTrigger_ = false;
            continue;
        }
        if (strstr("surface", step) != nullptr) {
            EXPECT_EQ(0, player->SetVideoSurface(producerSurface));
            continue;
        }
        if (strstr("callback", step) != nullptr) {
            EXPECT_EQ(0, player->SetPlayerCallback(testCallback));
            continue;
        }
        if (strstr("prepare", step) != nullptr) {
            EXPECT_EQ(0, player->Prepare());
            continue;
        }
        if (strstr("prepareasync", step) != nullptr) {
            EXPECT_EQ(0, player->PrepareAsync());
            continue;
        }
        if (strstr("play", step) != nullptr) {
            EXPECT_EQ(0, player->Play());
            continue;
        }
        if (strstr("pause", step) != nullptr) {
            EXPECT_EQ(0, player->Pause());
            continue;
        }
        if (strstr("stop", step) != nullptr) {
            EXPECT_EQ(0, player->Stop());
            continue;
        }
        if (strstr("reset", step) != nullptr) {
            EXPECT_EQ(0, player->Reset());
            continue;
        }
        if (strstr("release", step) != nullptr) {
            EXPECT_EQ(0, player->Release());
            MEDIA_INFO_LOG("Please Quit Test");
            continue;
        }
        if (strstr(step, "seek") != nullptr) {
            char *str = strrchr(step, ' ');
            if (str != nullptr) {
                EXPECT_EQ(0, player->Seek(atoi(str + 1), PlayerSeekMode::SEEK_PREVIOUS_SYNC));
            } else {
                MEDIA_INFO_LOG("You need to configure the seek time parameter ...");
            }
            continue;
        }
        if (strstr(step, "volume") != nullptr) {
            char *str = strrchr(step, ' ');
            if (str != nullptr) {
                EXPECT_EQ(0, player->SetVolume(atof(str), atof(str)));
            } else {
                MEDIA_INFO_LOG("You need to configure the volume parameter ...");
            }
            continue;
        }
        if (strstr(step, "speed") != nullptr) {
            char *str = strrchr(step, ' ');
            if (str == nullptr) {
                PlaybackRateMode mode;
                EXPECT_EQ(0, player->GetPlaybackSpeed(mode));
                MEDIA_INFO_LOG("GetPlaybackSpeed: %d", mode);
                continue;
            }
            EXPECT_EQ(0, player->SetPlaybackSpeed(static_cast<PlaybackRateMode>(atoi(str + 1))));
            continue;
        }
        if (strstr("duration", step) != nullptr) {
            int32_t duration = -1;
            EXPECT_EQ(0, player->GetDuration(duration));
            MEDIA_INFO_LOG("GetDuration: %d", duration);
            continue;
        }
        if (strstr("time", step) != nullptr) {
            int32_t time = -1;
            EXPECT_EQ(0, player->GetCurrentTime(time));
            MEDIA_INFO_LOG("GetCurrentTime: %d", time);
            continue;
        }
        if (strstr("loop", step) != nullptr) {
            EXPECT_EQ(0, player->SetLooping(true));
            EXPECT_TRUE(player->IsLooping());
            MEDIA_INFO_LOG("Is current single looping enabled: %d", player->IsLooping());
            continue;
        }
        if (strstr("noloop", step) != nullptr) {
            EXPECT_EQ(0, player->SetLooping(false));
            EXPECT_FALSE(player->IsLooping());
            MEDIA_INFO_LOG("Is current single looping enabled: %d", player->IsLooping());
            continue;
        }
        if (strstr("isloop", step) != nullptr) {
            MEDIA_INFO_LOG("Is current single looping enabled: %d", player->IsLooping());
            continue;
        }
        if (strstr("isplaying", step) != nullptr) {
            MEDIA_INFO_LOG("Is current single playing enabled: %d", player->IsPlaying());
            continue;
        }
        if (strstr("quit", step) != nullptr) {
            break;
        }
    }
    EXPECT_EQ(0, player->Release());
    MEDIA_INFO_LOG("player test out");
    for (int i = 0; i < fileNum; i++) {
        free(filelist[i]);
    }
    free(filelist);
    return 0;
}

int main(int argc, char *argv[])
{
    if (argv == nullptr) {
        MEDIA_ERROR_LOG("argv is null");
        return 0;
    }
    if (argc < SECOND_ARG_IDX) {
        MEDIA_INFO_LOG("Please make sure there are no folders in the specified path.\n");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "Audio Test:", MAX_LEN_2, "hstmediatest /data/media/audio/");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "Audio Test:", MAX_LEN_2, "hstmediatest /data/media/audio/1.mp3");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "Video Test:", MAX_LEN_2, "hstmediatest /data/media/video/ win");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "Video Test:", MAX_LEN_2, "hstmediatest /data/media/video/1.mp4 win");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "Quit Test:", MAX_LEN_2, "quit");
        MEDIA_INFO_LOG("%-*s", MAX_LEN_1, "\nThe step are here:");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "Prepare:", MAX_LEN_2, "prepare");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "PrepareAsync:", MAX_LEN_2, "surface");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "Play:", MAX_LEN_2, "play");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "Pause:", MAX_LEN_2, "pause");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "Stop:", MAX_LEN_2, "stop");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "Reset:", MAX_LEN_2, "reset");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "Release:", MAX_LEN_2, "release");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "Seek:", MAX_LEN_2, "seek 2000");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "SetVolume:", MAX_LEN_2, "volume 0.5");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "SetSource:", MAX_LEN_2, "source /data/media/audio/1.mp3");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "SetVideoSurface:", MAX_LEN_2, "surface");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "SetPlayerCallback:", MAX_LEN_2, "callback");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "SetPlaybackSpeed:", MAX_LEN_2, "speed 2");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "GetPlaybackSpeed:", MAX_LEN_2, "speed");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "GetDuration:", MAX_LEN_2, "duration");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "GetCurrentTime:", MAX_LEN_2, "time");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "SetLooping true:", MAX_LEN_2, "loop");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "SetLooping false:", MAX_LEN_2, "noloop");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "IsLooping:", MAX_LEN_2, "isloop");
        MEDIA_INFO_LOG("%-*s%-*s", MAX_LEN_1, "IsPlaying:", MAX_LEN_2, "isplaying");
        return 0;
    }
    MEDIA_INFO_LOG("argc=%d, argv[0]=%s, argv[1]=%s, argv[2]=%s", argc, argv[0], argv[1], argv[2]);
    PlayerTest testObj;
    testObj.TestPlayerAPI(argc, argv);
    return 0;
}
