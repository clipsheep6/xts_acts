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

#include <iostream>
#include <vector>
#include <memory>
#include <thread>
#include "wifi_errcode.h"
#include "wifi_device.h"
#include "wifi_scan.h"
#include "i_wifi_device_callback.h"
#include "i_wifi_scan_callback.h"

namespace OHOS {
namespace Wifi {
class WifiDeviceResultCallBack : public IWifiDeviceCallBack {
public:
    void OnWifiStateChanged(int state) override
    {
        // WifiState { DISABLING = 0, DISABLED = 1, ENABLING = 2, ENABLED = 3, UNKNOWN = 4 }
        WifiState wState = static_cast<WifiState>(state);
        std::cout << "device state changed,state=";
        switch (wState) {
            case WifiState::DISABLING:
                std::cout << "WifiState::DISABLING";
                break;
            case WifiState::DISABLED:
                std::cout << "WifiState::DISABLED";
                break;
            case WifiState::ENABLING:
                std::cout << "WifiState::ENABLING";
                break;
            case WifiState::ENABLED:
                std::cout << "WifiState::ENABLED";
                break;
            case WifiState::UNKNOWN:
                std::cout << "WifiState::UNKNOWN";
                break;
            default:
                break;
        }
        std::cout << std::endl;
    }

    void OnWifiConnectionChanged(int state, const WifiLinkedInfo &info) override
    {
        ConnState cState = static_cast<ConnState>(state);
        std::cout << "device conn state changed,state=";
        switch (cState) {
            case ConnState::SCANNING:
                std::cout << "ConnState::SCANNING";
                break;
            case ConnState::CONNECTING:
                std::cout << "ConnState::CONNECTING";
                break;
            case ConnState::AUTHENTICATING:
                std::cout << "ConnState::AUTHENTICATING";
                break;
            case ConnState::OBTAINING_IPADDR:
                std::cout << "ConnState::OBTAINING_IPADDR";
                break;
            case ConnState::CONNECTED:
                std::cout << "ConnState::CONNECTED";
                break;
            case ConnState::DISCONNECTING:
                std::cout << "ConnState::DISCONNECTING";
                break;
            case ConnState::DISCONNECTED:
                std::cout << "ConnState::DISCONNECTED";
                break;
            case ConnState::UNKNOWN:
                std::cout << "ConnState::UNKNOWN";
                break;
            default:
                break;
        }
        std::cout << std::endl;
        std::cout << "info:"
                  << "networkId=" << info.networkId << " ssid=" << info.ssid << " frequency=" << info.frequency
                  << std::endl;
        std::cout << "info:"
                  << "linkSpeed=" << info.linkSpeed << " rxLinkSpeed=" << info.rxLinkSpeed
                  << " txLinkSpeed=" << info.txLinkSpeed << " portalUrl=" << info.portalUrl << std::endl;
    }

    void OnWifiRssiChanged(int rssi) override
    {
        std::cout << "device rssi changed,rssi=" << rssi << std::endl;
    }

    void OnWifiWpsStateChanged(int state, const std::string &pinCode) override
    {
        std::cout << "device wps state changed,state=" << state << std::endl;
        (void)pinCode;
    }

    void OnStreamChanged(int direction) override
    {
        std::cout << "device stream changed,direction=" << direction << std::endl;
        (void)direction;
    }

    sptr<IRemoteObject> AsObject() override
    {
        return nullptr;
    }
};

class WifiScanResultCallback : public IWifiScanCallback {
public:
    void OnWifiScanStateChanged(int state) override
    {
        ScanHandleNotify scanNotify = static_cast<ScanHandleNotify>(state);
        std::cout << "scan state changed,state=";
        switch (scanNotify) {
            case ScanHandleNotify::SCAN_OK:
                std::cout << "ScanHandleNotify::SCAN_OK";
                break;
            case ScanHandleNotify::SCAN_FAIL:
                std::cout << "ScanHandleNotify::SCAN_FAIL";
                break;
            default:
                break;
        }
        std::cout << std::endl;

        std::unique_ptr<WifiScan> wifiScan = WifiScan::GetInstance(WIFI_SCAN_ABILITY_ID);
        std::vector<WifiScanInfo> result;
        wifiScan->GetScanInfoList(result);
        std::cout << "scan result, size=" << result.size() << std::endl;
    }

    sptr<IRemoteObject> AsObject() override
    {
        return nullptr;
    }
};

class WifiTest {
public:
    void EnableWifi()
    {
        std::cout << "EnableWifi, please wait\n";
        ErrCode code = WIFI_OPT_FAILED;

        InitCommon();
        code = wifiDevice->EnableWifi();
        std::cout << "EnableWifi code=" << ParseCode(code) << std::endl;
    }

    void DisableWifi()
    {
        std::cout << "DisableWifi, please wait\n";
        ErrCode code = WIFI_OPT_FAILED;

        InitCommon();
        code = wifiDevice->DisableWifi();
        std::cout << "DisableWifi code=" << ParseCode(code) << std::endl;
    }

    void Connect()
    {
        std::cout << "Connect, please wait\n";
        ErrCode code = WIFI_OPT_FAILED;

        InitCommon();
        WifiDeviceConfig config;
        // config.ssid = "OHOS_P_AP01";
        config.ssid = "zlx7";
        config.preSharedKey = "12348765";
        config.keyMgmt = "WPA-PSK";
        code = wifiDevice->ConnectToDevice(config);
        std::cout << "Connect code=" << ParseCode(code) << std::endl;
    }

    void DisConnect()
    {
        std::cout << "DisConnect, please wait\n";
        ErrCode code = WIFI_OPT_FAILED;

        InitCommon();
        code = wifiDevice->Disconnect();
        std::cout << "DisConnect code=" << ParseCode(code) << std::endl;
    }

    void IsConnected()
    {
        std::cout << "IsConnected, please wait\n";

        InitCommon();
        auto isConnect = wifiDevice->IsConnected();
        std::cout << "IsConnected " << isConnect << std::endl;
    }

private:
    void InitCommon()
    {
        if (wifiScan.get() == nullptr) {
            wifiScan = WifiScan::GetInstance(WIFI_SCAN_ABILITY_ID);
            const ::OHOS::sptr<IWifiScanCallback> event = new WifiScanResultCallback;
            wifiScan->RegisterCallBack(event);
        }
        if (wifiDevice.get() == nullptr) {
            wifiDevice = WifiDevice::GetInstance(WIFI_DEVICE_ABILITY_ID);
            const ::OHOS::sptr<IWifiDeviceCallBack> event = new WifiDeviceResultCallBack;
            wifiDevice->RegisterCallBack(event);
        }
    }

    std::string ParseCode(ErrCode code)
    {
        static const std::string wifiOptSts[] = {
            "WIFI_OPT_SUCCESS", "WIFI_OPT_FAILED", "WIFI_OPT_NOT_SUPPORTED",
            "WIFI_OPT_INVALID_PARAM", /* invalid params */
            "WIFI_OPT_FORBID_AIRPLANE", /* forbid when current airplane opened */
            "WIFI_OPT_FORBID_POWSAVING", /* forbid when current powersaving opened */
            "WIFI_OPT_PERMISSION_DENIED", /* permission denied */
            "WIFI_OPT_OPEN_FAIL_WHEN_CLOSING", /* open failed when current is closing */
            "WIFI_OPT_OPEN_SUCC_WHEN_OPENED", /* open success when current has been opened */
            "WIFI_OPT_CLOSE_FAIL_WHEN_OPENING", /* close failed when current is opening */
            "WIFI_OPT_CLOSE_SUCC_WHEN_CLOSED", /* close success when current has been closed */
            "WIFI_OPT_STA_NOT_OPENED", /* sta service not opened */
            "WIFI_OPT_SCAN_NOT_OPENED", /* scan service not opened */
            "WIFI_OPT_AP_NOT_OPENED", /* ap service not opened */
            "WIFI_OPT_INVALID_CONFIG", /* invalid config */
            "WIFI_OPT_P2P_NOT_OPENED", /* p2p service not opened */
            "WIFI_OPT_P2P_MAC_NOT_FOUND", "WIFI_OPT_P2P_ERR_MAC_FORMAT", "WIFI_OPT_P2P_ERR_INTENT",
            "WIFI_OPT_P2P_ERR_SIZE_NW_NAME", "WIFI_OPT_MOVING_FREEZE_CTRL", /* moving freeze scanning control */
        };

        return wifiOptSts[code];
    }

private:
    std::unique_ptr<WifiScan> wifiScan;
    std::unique_ptr<WifiDevice> wifiDevice;

};
} // namespace Wifi
} // namespace OHOS
