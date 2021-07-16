
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
#include "Testplayer.h"
namespace OHOS {
namespace Media {
TestPlayer::TestPlayer()
{
    player = PlayerFactory::CreatePlayer();
}
int32_t TestPlayer::SetSource(const std::string &uri)
{
    return player->SetSource(uri);
}

int32_t TestPlayer::Play()
{
    return player->Play();
}

int32_t TestPlayer::Prepare()
{
    return player->Prepare();
}

int32_t TestPlayer::PrepareAsync()
{
    return player->PrepareAsync();
}

int32_t TestPlayer::Pause()
{
    return player->Pause();
}

int32_t TestPlayer::Stop()
{
    return player->Stop();
}

int32_t TestPlayer::Reset()
{
    return player->Reset();
}

int32_t TestPlayer::Release()
{
    return player->Release();
}

int32_t TestPlayer::SetVolume(float leftVolume, float rightVolume)
{
    return player->SetVolume(leftVolume, rightVolume);
}

int32_t TestPlayer::Seek(uint64_t seconds, int32_t mode)
{
    return player->Seek(seconds, mode);
}

int32_t TestPlayer::GetCurrentTime(uint64_t &currentTime)
{
    return player->GetCurrentTime(currentTime);
}

int32_t TestPlayer::GetDuration(uint64_t &duration)
{
    return player->GetDuration(duration);
}

int32_t TestPlayer::SetPlaybackSpeed(int32_t mode)
{
    return player->SetPlaybackSpeed(mode);
}

int32_t TestPlayer::GetPlaybackSpeed(int32_t &mode)
{
    return player->GetPlaybackSpeed(mode);
}
sptr<Surface> TestPlayer::GetVideoSurface(WindowConfig sub_config)
{
    return nullptr;
}
int32_t TestPlayer::SetVideoSurface(sptr<Surface> surface)
{
    return 0;
}

bool TestPlayer::IsPlaying()
{
    return player->IsPlaying();
}

bool TestPlayer::IsLooping()
{
    return player->IsLooping();
}

int32_t TestPlayer::SetLooping(bool loop)
{
    return player->SetLooping(loop);
}

int32_t TestPlayer::SetPlayerCallback(const std::shared_ptr<PlayerCallback> &callback)
{
    return player->SetPlayerCallback(callback);
}
}
}

