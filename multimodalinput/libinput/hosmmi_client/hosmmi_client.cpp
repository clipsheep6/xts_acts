/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
#include <codecvt>
#include <locale>
#include "libmmi_util.h"
#include "libmmi_client.h"
#include "proto.h"
#include "key_events_handler.h"
#include "multimodal_events_handler.h"
#include "common_events_handler.h"
#include "system_events_handler.h"
#include "telephone_events_handler.h"
#include "touch_events_handler.h"
#include "media_events_handler.h"

int32_t g_mFlag = 1;
TestSurfaceData mySurfaceInfo = {};
int32_t surfaceId = -1;

using namespace OHOS;
using namespace OHOS::MMI;

class AppKeyEventHandle : public KeyEventHandler {
public:
    AppKeyEventHandle() {}
    ~AppKeyEventHandle() {}

    virtual bool OnKey(const KeyEvent& keylEvent) override
    {
        LOGFMTT("AppKeyEventHandle::Onkey");
        return true;
    }
};

class AppTouchEventHandle : public TouchEventHandler {
public:
    AppTouchEventHandle() {}
    ~AppTouchEventHandle() {}

    virtual bool OnTouch(const TouchEvent& touchEvent) override
    {
        LOGFMTT("AppTouchEventHandle::OnTouch");
        return true;
    }
};

class AppCommonEventHandle : public CommonEventHandler {
public:
    AppCommonEventHandle() {}
    ~AppCommonEventHandle() {}

    virtual bool OnShowMenu(const MultimodalEvent& event) override
    {
        LOGFMTT("AppCommonEventHandle::OnShowMenu");
        return true;
    }

    virtual bool OnSend(const MultimodalEvent& event) override
    {
        LOGFMTT("AppCommonEventHandle::OnSend");
        return true;
    }

    virtual bool OnCopy(const MultimodalEvent& event) override
    {
        LOGFMTT("AppCommonEventHandle::OnCopy");
        return true;
    }

    virtual bool OnPaste(const MultimodalEvent& event) override
    {
        LOGFMTT("AppCommonEventHandle::OnPaste");
        return true;
    }

    virtual bool OnCut(const MultimodalEvent& event) override
    {
        LOGFMTT("AppCommonEventHandle::OnCut");
        return true;
    }

    virtual bool OnUndo(const MultimodalEvent& event) override
    {
        LOGFMTT("AppCommonEventHandle::OnUndo");
        return true;
    }

    virtual bool OnRefresh(const MultimodalEvent& event) override
    {
        LOGFMTT("AppCommonEventHandle::OnRefresh");
        return true;
    }

    virtual bool OnStartDrag(const MultimodalEvent& event) override
    {
        LOGFMTT("AppCommonEventHandle::OnStartDrag");
        return true;
    }

    virtual bool OnCancel(const MultimodalEvent& event) override
    {
        LOGFMTT("AppCommonEventHandle::OnCancel");
        return true;
    }

    virtual bool OnEnter(const MultimodalEvent& event) override
    {
        LOGFMTT("AppCommonEventHandle::OnEnter");
        return true;
    }

    virtual bool OnPrevious(const MultimodalEvent& event) override
    {
        LOGFMTT("AppCommonEventHandle::OnPrevious");
        return true;
    }

    virtual bool OnNext(const MultimodalEvent& event) override
    {
        LOGFMTT("AppCommonEventHandle::OnNext");
        return true;
    }

    virtual bool OnBack(const MultimodalEvent& event) override
    {
        LOGFMTT("AppCommonEventHandle::OnBack");
        return true;
    }

    virtual bool OnPrint(const MultimodalEvent& event) override
    {
        LOGFMTT("AppCommonEventHandle::OnPrint");
        return true;
    }
};

class AppMediaEventHandle : public MediaEventHandler {
public:
    AppMediaEventHandle() {}
    ~AppMediaEventHandle() {}

    virtual bool OnPlay(const MultimodalEvent& event) override
    {
        LOGFMTT("AppMediaEventHandle::OnPlay");
        return true;
    }

    virtual bool OnPause(const MultimodalEvent& event) override
    {
        LOGFMTT("AppMediaEventHandle::OnPause");
        return true;
    }

    virtual bool OnMediaControl(const MultimodalEvent& event) override
    {
        LOGFMTT("AppMediaEventHandle::OnMediaControl");
        return true;
    }
};

class AppSystemEventHandle : public SystemEventHandler {
public:
    AppSystemEventHandle() {}
    ~AppSystemEventHandle() {}

    virtual bool OnClosePage(const MultimodalEvent& event) override
    {
        LOGFMTT("AppSystemEventHandle::OnClosePage");
        return true;
    }

    virtual bool OnLaunchVoiceAssistant(const MultimodalEvent& event) override
    {
        LOGFMTT("AppSystemEventHandle::OnLaunchVoiceAssistant");
        return true;
    }

    virtual bool OnMute(const MultimodalEvent& event) override
    {
        LOGFMTT("AppSystemEventHandle::OnMute");
        return true;
    }

    virtual bool OnScreenShot(const MultimodalEvent& event) override
    {
        LOGFMTT("AppSystemEventHandle::OnScreenShot");
        return true;
    }

    virtual bool OnScreenSplit(const MultimodalEvent& event) override
    {
        LOGFMTT("AppSystemEventHandle::OnScreenSplit");
        return true;
    }

    virtual bool OnStartScreenRecord(const MultimodalEvent& event) override
    {
        LOGFMTT("AppSystemEventHandle::OnStartScreenRecord");
        return true;
    }

    virtual bool OnStopScreenRecord(const MultimodalEvent& event) override
    {
        LOGFMTT("AppSystemEventHandle::OnStopScreenRecord");
        return true;
    }

    virtual bool OnGotoDesktop(const MultimodalEvent& event) override
    {
        LOGFMTT("AppSystemEventHandle::OnGotoDesktop");
        return true;
    }

    virtual bool OnRecent(const MultimodalEvent& event) override
    {
        LOGFMTT("AppSystemEventHandle::OnRecent");
        return true;
    }

    virtual bool OnShowNotification(const MultimodalEvent& event) override
    {
        LOGFMTT("AppSystemEventHandle::OnShowNotification");
        return true;
    }

    virtual bool OnLockScreen(const MultimodalEvent& event) override
    {
        LOGFMTT("AppSystemEventHandle::OnLockScreen");
        return true;
    }

    virtual bool OnSearch(const MultimodalEvent& event) override
    {
        LOGFMTT("AppSystemEventHandle::OnSearch");
        return true;
    }
};

class AppTelephoneEventHandle : public TelephoneEventHandler {
public:
    AppTelephoneEventHandle() {}
    ~AppTelephoneEventHandle() {}

    virtual bool OnAnswer(const MultimodalEvent& event) override
    {
        LOGFMTT("AppTelephoneEventHandle::OnAnswer");
        return true;
    }

    virtual bool OnRefuse(const MultimodalEvent& event) override
    {
        LOGFMTT("AppTelephoneEventHandle::OnRefuse");
        return true;
    }

    virtual bool OnHangup(const MultimodalEvent& event) override
    {
        LOGFMTT("AppTelephoneEventHandle::OnHangup");
        return true;
    }

    virtual bool OnTelephoneControl(const MultimodalEvent& event) override
    {
        LOGFMTT("AppTelephoneEventHandle::OnTelephoneControl");
        return true;
    }
};

template<class T>
StandEventPtr CreateEvent()
{
    return StandEventPtr(new T());
}

/*
* 创建通道连接server
*/
void OnConnected(const OHOS::MMI::IMMIClient& client)
{
     if (g_mFlag) {
        std::string u8String = "hello world!\n";
        auto wsConvert = std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> {};
        auto u16String = wsConvert.from_bytes(u8String);
        auto iRemote = TestIRemoteObject::Create(u16String);
        LOGFMTT("Register key event.");
        auto appKey = CreateEvent<AppKeyEventHandle>();
        MMIEventHdl->RegisterStandardizedEventHandle(iRemote, surfaceId, appKey);
        LOGFMTT("Register touch event.");
        auto appTouch = CreateEvent<AppTouchEventHandle>();
        MMIEventHdl->RegisterStandardizedEventHandle(iRemote, surfaceId, appTouch);
        LOGFMTT("Register Common event.");
        auto appCommon = CreateEvent<AppCommonEventHandle>();
        MMIEventHdl->RegisterStandardizedEventHandle(iRemote, surfaceId, appCommon);
        LOGFMTT("Register Media event.");
        auto appMedia = CreateEvent<AppMediaEventHandle>();
        MMIEventHdl->RegisterStandardizedEventHandle(iRemote, surfaceId, appMedia);
        LOGFMTT("Register System event.");
        auto appSystem = CreateEvent<AppSystemEventHandle>();
        MMIEventHdl->RegisterStandardizedEventHandle(iRemote, surfaceId, appSystem);
        LOGFMTT("Register Telephone event.");
        auto appTelephone = CreateEvent<AppTelephoneEventHandle>();
        MMIEventHdl->RegisterStandardizedEventHandle(iRemote, surfaceId, appTelephone);
        while (true) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }

    int32_t abilityId = static_cast<int32_t>(time(nullptr));
    int32_t eventType = 10;
    LOGFMTT("\nabilityId=%d\n*" "**********************************************************************\n", abilityId);
    LOGFMTT("\nsurfaceId=%d\n*" "**********************************************************************\n", surfaceId);
    OHOS::MMI::NetPacket ckt(ID_MSG_REGISTER_APP_INFO);
    ckt << abilityId << surfaceId << eventType;
    client.SendMessage(ckt);
    LOGFMTT("APPRegister: \nabilityId = %d\nsurfaceId=%d\neventType=%d\ng_mFlag=%d\n", abilityId, surfaceId,
        eventType, g_mFlag);
    if (mySurfaceInfo.srcW != 0 && mySurfaceInfo.srcH != 0) {
        OHOS::MMI::NetPacket ckt1(ID_MSG_ON_WINDOWS);
        ckt1 << mySurfaceInfo;
        client.SendMessage(ckt1);
        LOGFMTT("WindowRegister: \nsrc_x = %d\nsrc_y=%d\nsrc_w=%d\nsrc_h=%d\non_layer_id=%d\nsurface_id=%d\n"
                "screen_id=%d\nopacity=%d\nvisibility=%d\n",
                mySurfaceInfo.srcX, mySurfaceInfo.srcY, mySurfaceInfo.srcW,
                mySurfaceInfo.srcH, mySurfaceInfo.onLayerId, mySurfaceInfo.surfaceId,
                mySurfaceInfo.screenId, mySurfaceInfo.opacity, mySurfaceInfo.visibility);
    }
}

int main(int argc, char* argv[])
{
    MMIClientPtr client;
    client = std::make_shared<MMIClient>();
    ClientMsgHandler clientMsgHandler;
    EventManager->SetClientHandle(client);

    const int32_t DEF_SCREEN_WIDTH = 1000;
    const int32_t DEF_SCREEN_HEIGHT = 800;
    const int32_t DEF_X_IDX = 1;
    const int32_t DEF_Y_IDX = 2;
    const int32_t DEF_WIDTH_IDX = 3;
    const int32_t DEF_HEIGHT_IDX = 4;
    const int32_t DEF_LAYER_ID_IDX = 5;
    const int32_t DEF_FLAG_IDX = 6;

    mySurfaceInfo.srcX = 0;
    mySurfaceInfo.srcY = 0;
    mySurfaceInfo.srcW = DEF_SCREEN_WIDTH;
    mySurfaceInfo.srcH = DEF_SCREEN_HEIGHT;
    mySurfaceInfo.onLayerId = 1;
    mySurfaceInfo.surfaceId = getpid();
    mySurfaceInfo.screenId = 1;
    mySurfaceInfo.opacity = 1;
    mySurfaceInfo.visibility = 1;
    if (argc > 6) {
        mySurfaceInfo.srcX = atoi(argv[DEF_X_IDX]);
        mySurfaceInfo.srcY = atoi(argv[DEF_Y_IDX]);
        mySurfaceInfo.srcW = atoi(argv[DEF_WIDTH_IDX]);
        mySurfaceInfo.srcH = atoi(argv[DEF_HEIGHT_IDX]);
        mySurfaceInfo.onLayerId = atoi(argv[DEF_LAYER_ID_IDX]);
        g_mFlag = atoi(argv[DEF_FLAG_IDX]);
        if (mySurfaceInfo.srcW == 0 && mySurfaceInfo.srcH == 0) {
            mySurfaceInfo.surfaceId = -1;
        }
    }
    surfaceId = mySurfaceInfo.surfaceId;
    client->RegisterConnectedFunction(&OnConnected);
    client->Start(clientMsgHandler);

    return 0;
}