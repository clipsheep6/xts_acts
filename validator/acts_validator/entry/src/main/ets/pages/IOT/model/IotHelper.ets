/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

import { AsyncCallback, BusinessError } from '@ohos.base';
import common from '@ohos.app.ability.common';
import {
  DeviceConnectRequest,
  DeviceConnectResponse,
  DeviceConnectSession,
  DeviceController,
  DeviceScanRequest,
  DeviceScanResponse,
  Protocol,
} from '@ohos/IoTConnectKit';
import Timers from './Timers';
import IotConstants, { analysisPayload, ConnectType, InfDeviceState } from './IotConstants';
import IotDevice from './IotDevice';
import Logger from '../../model/Logger';

export default class IotHelper {
  private static instance: IotHelper;
  private isInit = false;
  private mController: DeviceController | undefined;
  private connectSessionMap: Map<string, DeviceConnectSession> = new Map();
  private connectDeviceList: Array<IotDevice> = [];
  private deviceStateTimers: Map<string, Timers<InfDeviceState[]>> = new Map();
  private messageReceivers = new Map<string, Callback<InfDeviceState[]>>();
  private connectStateMap = new Map<string, Callback<number>>();

  static getInstance(): IotHelper {
    if (IotHelper.instance == null) {
      IotHelper.instance = new IotHelper();
    }
    return IotHelper.instance;
  }

  registerMessageReceivers(name: string, callBack: Callback<InfDeviceState[]>) {
    if (name.length > 0) {
      this.messageReceivers.set(name, callBack);
    }
  }

  unRegisterMessageReceivers(name: string) {
    this.messageReceivers.delete(name);
  }

  registerConnectStateChanged(name: string, callBack: Callback<number>) {
    if (name.length > 0) {
      this.connectStateMap.set(name, callBack);
    }
  }

  unRegisterConnectStateChanged(name: string) {
    this.connectStateMap.delete(name);
  }

  private addConnectSession(udid: string, connectSession?: DeviceConnectSession) {
    if (connectSession != undefined) {
      this.connectSessionMap.set(udid, connectSession);
    }
  }

  private getConnectSession(udid?: string) {
    if (udid == undefined) {
      return undefined;
    }
    return this.connectSessionMap.get(udid);
  }

  private deleteConnectSession(udid?: string) {
    if (udid == undefined) {
      return;
    }
    this.connectSessionMap.delete(udid);
  }

  private addConnectDevice(iotDevice: IotDevice) {
    this.connectDeviceList.push(iotDevice);
  }

  private deleteConnectDevice(iotDevice?: IotDevice) {
    if (iotDevice == undefined) {
      return;
    }
    this.connectDeviceList =
      this.connectDeviceList.filter((device) => device.getUnionCode() != iotDevice.getUnionCode());
  }

  private dispatchSubscribeEventData(sidKeys: string, resultArray: InfDeviceState[]) {
    let timers = this.deviceStateTimers.get(sidKeys);
    timers?.executeSuccess(resultArray);
    this.deviceStateTimers.delete(sidKeys);
  }

  private subscribeEvent(udid: string, connectSession?: DeviceConnectSession) {
    connectSession?.subscribeEvent((error, deviceEvent) => {
      if (error != undefined) {
        Logger.error(IotConstants.IOT_TAG, `subscribeEvent error ${error.message}`);
        return;
      }

      Logger.info(IotConstants.IOT_TAG, `subscribeEvent name: ${deviceEvent.name}`);
      Logger.info(IotConstants.IOT_TAG, `subscribeEvent data: ${deviceEvent.data}`);
      if (deviceEvent.name == IotConstants.ON_DEVICE_DATA_CHANGED) {
        let resultArray = analysisPayload(deviceEvent.data as string);
        if (this.deviceStateTimers.has(IotConstants.SID_ALL_SERVICES)) {
          this.dispatchSubscribeEventData(IotConstants.SID_ALL_SERVICES, resultArray);
        } else {
          let sidKeys = resultArray.map((item) => item.sid).join("-");
          this.dispatchSubscribeEventData(sidKeys, resultArray);
        }
        this.messageReceivers.forEach((func) => func(resultArray));
      } else if (deviceEvent.name == IotConstants.ON_CONNECT_STATE_CHANGED) {
        // 设备在线离线事件目前只支持ble
        let status: Record<string, number> = JSON.parse(deviceEvent.data as string);
        let newStatus = status && status["newStatus"];
        if (newStatus == ConnectType.OFFLINE) {
          this.stopConnect();
        }
        this.connectStateMap.forEach((func) => func(newStatus));
      }
    })
  }

  private unSubscribeEvent(connectSession?: DeviceConnectSession) {
    connectSession?.unsubscribeEvent((error, deviceEvent) => {
      if (error != undefined) {
        Logger.error(IotConstants.IOT_TAG, `unsubscribeEvent error ${error.message}`);
        return;
      }
      Logger.debug(IotConstants.IOT_TAG, `unsubscribeEvent name ${deviceEvent.name}`);
      Logger.debug(IotConstants.IOT_TAG, `unsubscribeEvent data ${deviceEvent.data}`);
    })
  }

  public init(connect: common.UIAbilityContext) {
    if (!this.isInit) {
      this.mController = new DeviceController(connect);
      this.isInit = true;
    }
  }

  public async deviceDiscovery(scanType: Protocol, callBack: AsyncCallback<IotDevice, void>) {
    Logger.debug(IotConstants.IOT_TAG, `IotHelper deviceDiscovery call scanType= ${scanType}`);
    if (!this.isInit) {
      const error: BusinessError<void> = {
        code: IotConstants.IOT_NOT_INIT,
        message: IotConstants.IOT_NOT_INIT_MSG,
        name: IotConstants.IOT_NAME,
      }
      callBack(error, null);
      return;
    }
    let duration = IotConstants.SCAN_DURATION;
    let request: DeviceScanRequest = new DeviceScanRequest();
    request.duration = duration;
    request.scanType = scanType;
    await Timers.delay(1000);
    this.mController?.executeRequest(request, (error, data) => {
      Logger.debug(IotConstants.IOT_TAG, 'deviceDiscovery has result');
      if (error != undefined) {
        Logger.error(IotConstants.IOT_TAG, `deviceDiscovery code= ${error.code} message= ${error.message}`);
        return;
      }
      let scanResponse = data as DeviceScanResponse;
      scanResponse.scanResult.forEach(async (info) => {
        Logger.debug(IotConstants.IOT_TAG, `device prodId= ${info.prodId} protocol=${info.scannedProtocol}`);
        let iotDevice: IotDevice = new IotDevice(info);
        if (this.getConnectDevice()?.getUnionCode() != iotDevice.getUnionCode()) {
          callBack(undefined, iotDevice);
        }
      })
    })
  }

  public connectDevice(iotDevice: IotDevice): Promise<boolean> {
    Logger.debug(IotConstants.IOT_TAG, `IotHelper connectDevice call udid =${iotDevice.getUnionCode()}`);
    return this.executeDeviceConnect(iotDevice);
  }

  private executeDeviceConnect(iotDevice: IotDevice): Promise<boolean> {
    return new Promise(async (resolve, reject) => {
      if (this.mController == undefined) {
        return;
      }
      let timers = new Timers<boolean>((data) => {
        resolve(data);
      }, (error) => {
        reject(error);
      });
      timers.setTime(IotConstants.CONNECT_TIMERS);
      timers.start();
      try {
        let protocol = iotDevice.getScannedProtocol();
        let authInfo: Record<string, string> = {};
        let pinCode = "01234567";
        if (iotDevice.getPinCode() != undefined) {
          pinCode = iotDevice.getPinCode() as string;
          Logger.debug(IotConstants.IOT_TAG, `IotHelper connectDevice pinCode =${pinCode}`);
        }
        let request = new DeviceConnectRequest(iotDevice.getUnionCode(), protocol, pinCode, authInfo);
        let response: DeviceConnectResponse = await this.mController.executeRequest(request);
        let connectSession = response.connectSession;
        // 配网需要修改逻辑
        this.addConnectSession(iotDevice.getUnionCode(), connectSession);
        this.subscribeEvent(iotDevice.getUnionCode(), connectSession);
        this.addConnectDevice(iotDevice);
        timers.executeSuccess(true);
      } catch (error) {
        Logger.error(IotConstants.IOT_TAG, `connect error code= ${error.code} message= ${error.data}`);
        timers.executeFailed(error);
      }
    })
  }

  public stopConnect() {
    let iotDevice = this.getConnectDevice();
    let udid = iotDevice?.getUnionCode();
    Logger.debug(IotConstants.IOT_TAG, `stopConnect call udid =${udid}`);
    let connectSession = this.getConnectSession(udid);
    this.unSubscribeEvent(connectSession);
    connectSession?.release();
    this.deleteConnectSession(udid);
    this.deleteConnectDevice(iotDevice);
  }

  getConnectDevice(): IotDevice | undefined {
    if (this.connectDeviceList == undefined || this.connectDeviceList.length == 0) {
      return undefined;
    }
    return this.connectDeviceList[0];
  }

  queryDeviceState(sid: string[]): Promise<InfDeviceState[]> {
    Logger.debug(IotConstants.IOT_TAG, "queryDeviceState call");
    if (sid.length == 0) {
      return Promise.reject(IotConstants.IOT_PARAMS_ERROR_MSG);
    }
    let sidArray = sid.map((sid) => {
      let res: Record<string, string> = {};
      res["sid"] = sid;
      return res;
    });
    let bodyStrings = JSON.stringify(sidArray);
    let sidKeys = sid.join('-');
    return this.executeDeviceQuery(bodyStrings, sidKeys);
  }

  queryDeviceAllServices(): Promise<InfDeviceState[]> {
    Logger.debug(IotConstants.IOT_TAG, "queryDeviceAllServices call");
    let iotDevice = this.getConnectDevice();
    let connectSession = this.getConnectSession(iotDevice?.getUnionCode());
    if (connectSession == undefined) {
      return Promise.reject(IotConstants.IOT_CONNECT_ERROR_MSG);
    }
    let bodyStrings = `[{"sid":"${IotConstants.SID_ALL_SERVICES}"}]`;
    if (iotDevice?.getScannedProtocol() == Protocol.WIFI) {
      bodyStrings = "[]";
    }
    let sidKeys = IotConstants.SID_ALL_SERVICES;
    return this.executeDeviceQuery(bodyStrings, sidKeys);
  }

  private executeDeviceQuery(bodyStrings: string, timersKey: string): Promise<InfDeviceState[]> {
    Logger.debug(IotConstants.IOT_TAG, `executeDeviceQuery bodyStrings ${bodyStrings}`);
    let iotDevice = this.getConnectDevice();
    let connectSession = this.getConnectSession(iotDevice?.getUnionCode());
    if (connectSession == undefined) {
      return Promise.reject(IotConstants.IOT_CONNECT_ERROR_MSG);
    }
    return new Promise((resolve, reject) => {
      if (this.deviceStateTimers.has(timersKey)) {
        let oldTimers = this.deviceStateTimers.get(timersKey);
        oldTimers?.clearTimers();
        this.deviceStateTimers.delete(timersKey);
      }
      let timers = new Timers<InfDeviceState[]>((data) => {
        resolve(data);
      }, (error) => {
        reject(error);
      });
      this.deviceStateTimers.set(timersKey, timers);
      timers.start();
      connectSession?.sendCommand(IotConstants.CUSTOM_SEC_DATA, bodyStrings).then(() => {
        Logger.info(IotConstants.IOT_TAG, "executeDeviceQuery success");
      }).catch((error: BusinessError) => {
        Logger.error(IotConstants.IOT_TAG, `executeDeviceQuery error code = ${error.code}`);
        let oldTimers = this.deviceStateTimers.get(timersKey);
        oldTimers?.executeFailed(error);
        this.deviceStateTimers.delete(timersKey);
      })
    });
  }

  controlDevice(sid: string, commend: number): Promise<InfDeviceState[]> {
    let bodyStrings = `[{\"sid\":\"${sid}\",\"data\":{\"on\":${commend}}}]`;
    Logger.debug(IotConstants.IOT_TAG, `controlDevice bodyStrings ${bodyStrings}`);
    let iotDevice = this.getConnectDevice();
    let connectSession = this.getConnectSession(iotDevice?.getUnionCode());
    if (connectSession == undefined) {
      return Promise.reject(IotConstants.IOT_CONNECT_ERROR_MSG);
    }
    return new Promise((resolve, reject) => {
      let timersKey = sid;
      if (this.deviceStateTimers.has(timersKey)) {
        let oldTimers = this.deviceStateTimers.get(timersKey);
        oldTimers?.clearTimers();
        this.deviceStateTimers.delete(timersKey);
      }
      let timers = new Timers<InfDeviceState[]>((data) => {
        resolve(data);
      }, (error) => {
        reject(error);
      });
      this.deviceStateTimers.set(timersKey, timers);
      timers.start();
      connectSession?.sendCommand(IotConstants.CUSTOM_SEC_DATA, bodyStrings).then(() => {
        Logger.info(IotConstants.IOT_TAG, "controlDevice success");
      }).catch((error: BusinessError) => {
        Logger.error(IotConstants.IOT_TAG, `controlDevice error code = ${error.code}`);
        let oldTimers = this.deviceStateTimers.get(timersKey);
        oldTimers?.executeFailed(error);
        this.deviceStateTimers.delete(timersKey);
      })
    });
  }
}