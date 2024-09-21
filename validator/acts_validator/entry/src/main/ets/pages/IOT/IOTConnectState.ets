/*
* Copyright (c) 2023 Hunan OpenValley Digital Industry Development Co., Ltd.
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

import { DeviceInfo, Protocol } from '@ohos/IoTConnectKit';
import { AsyncCallback } from '@ohos.base';
import router from '@ohos.router';
import promptAction from '@ohos.promptAction';
import FirstDialog from '../model/FirstDialog';
import ProductDataSource from './model/BasicDataSource';
import { ProductView } from './Component/ProductView';
import IotDevice from './model/IotDevice';
import IotHelper from './model/IotHelper';
import Timers from './model/Timers';
import IotConstants, { analysisProtocol, ConnectType, PageCase } from './model/IotConstants';
import Logger from '../model/Logger';

const TAG = '[IOTConnectState]';

@Entry
@Component
struct IOTConnectState {
  @State name: string = '';
  StepTips: string = "";
  @State Vue: boolean = false;
  @State isScanOn: boolean = false;
  private deviceDataResource: ProductDataSource = new ProductDataSource();
  @State connectType: ConnectType = ConnectType.OFFLINE;
  private discoveryCallBack: AsyncCallback<IotDevice, void> = (error, iotDevice) => {
    if (error != undefined) {
      Logger.info(TAG, `discovery error ${error.message}`);
      return;
    }
    if (iotDevice == undefined) {
      return;
    }
    this.deviceDataResource.pushData(iotDevice);
  }

  private executeScan() {
    if (this.isScanOn) {
      return;
    }
    this.isScanOn = true;
    this.deviceDataResource.reset();
    let protocol = Protocol.WIFI;
    if (analysisProtocol(this.name) == Protocol.WIFI) {
      protocol = Protocol.WIFI;
    } else {
      protocol = Protocol.BLE;
    }
    IotHelper.getInstance().deviceDiscovery(protocol, this.discoveryCallBack);
    setTimeout(async () => {
      this.isScanOn = false;
    }, IotConstants.SCAN_DURATION);
  }

  private async connectDevice(iotDevice: IotDevice) {
    Logger.info(TAG, `connectDevice ${iotDevice.getUnionCode()}`);
    if (this.connectType == ConnectType.CONNECTING) {
      promptAction.showToast({
        message: '其他设备正在连接中...', duration: 1000
      });
      return;
    }
    if (this.connectType == ConnectType.ONLINE) {
      IotHelper.getInstance().stopConnect();
      await Timers.delay(1000);
    }
    this.connectType = ConnectType.CONNECTING;
    try {
      await IotHelper.getInstance().connectDevice(iotDevice);
      Logger.info(TAG, `connectDevice success`);
      this.connectType = ConnectType.ONLINE;
      this.deviceDataResource.deleteData(iotDevice);
      IotHelper.getInstance().queryDeviceState(["switch"]).then((value) => {
        if (this.name == "SUB_IOT_CONNECT_STATE_WIFI_0100"
          || this.name == "SUB_IOT_CONNECT_STATE_BLE_0100") {
          if (value.length > 0) {
            Logger.info(TAG, `queryDeviceState switch success`);
            this.Vue = true;
          }
        }
      })
    } catch (error) {
      Logger.info(TAG, `connectDevice error ${error.code}`);
      this.connectType = ConnectType.OFFLINE;
    }
  }

  async aboutToAppear() {
    let pageCase = router.getParams() as PageCase;
    this.name = pageCase.title;
    let tips = "";
    if (analysisProtocol(this.name) == Protocol.WIFI) {
      tips = '操作步骤：\n1、请打开设备的WIFI'
    } else {
      tips = '操作步骤：\n1、请打开设备的蓝牙'
    }
    if (this.name == "SUB_IOT_CONNECT_STATE_BLE_0100"
      || this.name == "SUB_IOT_CONNECT_STATE_WIFI_0100") {
      tips += '\n2、点击<重新扫描设备>按钮开始扫描'
        + '\n3、可用设备列表显示设备信息后，点击设备项开始连接'
        + '\n4、设备连接成功后，收到上线事件或者查询到对端服务状态，判定用例通过';
    } else if (this.name == "SUB_IOT_CONNECT_STATE_BLE_0200"
      || this.name == "SUB_IOT_CONNECT_STATE_WIFI_0200") {
      tips += '\n2、点击<重新扫描设备>按钮开始扫描'
        + '\n3、可用设备列表显示设备信息后，点击设备项开始连接'
        + '\n4、设备连接成功后';
      if (analysisProtocol(this.name) == Protocol.WIFI) {
        tips += '关闭WIFI或者对端设备关机'
      } else {
        tips += '关闭蓝牙或者对端设备关机'
      }
      tips += '\n5、设备收到对端设备离线事件后，判定用例通过';
    }
    this.StepTips = tips;
    await FirstDialog.ChooseDialog(this.StepTips, this.name);
    setTimeout(() => {
      this.executeScan();
    }, 500);
    IotHelper.getInstance().registerConnectStateChanged("IOTConnectState", (state: number) => {
      Logger.info(TAG, `IOTConnectState state ${state}`);
      if (state == ConnectType.ONLINE) {
        if (this.name == "SUB_IOT_CONNECT_STATE_WIFI_0100"
          || this.name == "SUB_IOT_CONNECT_STATE_BLE_0100") {
          Logger.info(TAG, `ConnectType.ONLINE success`);
          this.Vue = true;
        }
        promptAction.showToast({
          message: '设备已上线', duration: 1000
        });
      } else if (state == ConnectType.OFFLINE) {
        if (this.name == "SUB_IOT_CONNECT_STATE_WIFI_0200"
          || this.name == "SUB_IOT_CONNECT_STATE_BLE_0200") {
          Logger.info(TAG, `ConnectType.OFFLINE success`);
          this.Vue = true;
        }
        this.connectType = ConnectType.OFFLINE;
        promptAction.showToast({
          message: '设备已断开连接', duration: 1000
        });
      }
    });
  }

  aboutToDisappear(): void {
    IotHelper.getInstance().stopConnect();
    IotHelper.getInstance().unRegisterConnectStateChanged("IOTConnectState");
  }

  @Builder
  PassBtn() {
    if (this.Vue == false) {
      Button({ stateEffect: this.Vue }) {
        Image($r('app.media.ic_public_pass'))
          .width('20vp')
          .height('20vp')
      }
      .width('30%')
      .height('30vp')
      .backgroundColor(Color.Grey)
      .opacity(0.4)
    } else {
      Button({ stateEffect: this.Vue }) {
        Image($r('app.media.ic_public_pass'))
          .width('20vp')
          .height('20vp')
      }.width('30%')
      .height('30vp')
      .backgroundColor(Color.Grey)
      .onClick(() => {
        router.back({
          url: 'pages/IOT/IOT_index',
          params: {
            result: 'true ', title: this.name,
          }
        })
        promptAction.showToast({
          message: '通过', duration: 1000
        });
      })
    }
  }

  @Builder
  FailBtn() {
    Button() {
      Image($r('app.media.ic_public_fail'))
        .width('20vp')
        .height('20vp')
    }
    .width('30%')
    .height('30vp')
    .backgroundColor(Color.Grey)
    .onClick(() => {
      router.back({
        url: 'pages/IOT/IOT_index',
        params: {
          result: 'false', title: this.name,
        }
      })
      promptAction.showToast({
        message: '失败', duration: 1000
      });
    })
  }

  build() {
    Column() {
      Row() {
        Button() {
          Image($r('app.media.ic_public_back'))
            .width('20vp')
            .height('18vp')
            .margin({ left: '20vp' })
        }
        .backgroundColor(Color.Black)
        .size({ width: '40vp', height: '30vp' })
        .onClick(() => {
          router.back({
            url: 'pages/IOT/IOT_index',
            params: { result: 'None', }
          })
        })

        Text(this.name)
          .fontColor(Color.White)
          .fontSize('18fp')
          .margin({ left: '-20vp' })
        Text('hello')
          .fontColor(Color.White)
          .visibility(Visibility.Hidden)
      }
      .backgroundColor(Color.Black)
      .height('10%')
      .width('100%')
      .justifyContent(FlexAlign.SpaceBetween)

      Text(`在线状态:${this.connectType == ConnectType.ONLINE ? "设备上线" : "设备离线"}`)
        .fontSize(20)
        .fontColor(`${this.connectType == ConnectType.ONLINE ? "#00ff00" : "#999999"}`)
        .padding({ left: 20 })
        .width("100%")

      if (this.connectType != ConnectType.OFFLINE) {
        Column() {
          Row() {
            Text('已连接设备')
              .fontSize(22)
              .fontColor("#007DFF")
            if (this.connectType == ConnectType.CONNECTING) {
              LoadingProgress().width(40).height(40)
            }
          }
          .width('100%')
          .height(50)
          .justifyContent(FlexAlign.SpaceBetween)
          .alignItems(VerticalAlign.Center)

          if (this.connectType == ConnectType.ONLINE) {
            ProductView({ iotDevice: IotHelper.getInstance().getConnectDevice(), connectType: 1 })
              .onClick(async () => {
                let connectDevice = IotHelper.getInstance().getConnectDevice();
                IotHelper.getInstance().stopConnect();
                await Timers.delay(500);
                this.connectType = ConnectType.OFFLINE;
                if (connectDevice != undefined) {
                  this.deviceDataResource.pushData(connectDevice);
                }
              })
          }
        }
        .width('100%')
        .padding({ left: 16, right: 16 })
      }

      List() {
        ListItem() {
          Row() {
            Text('可用设备')
              .fontSize(22)
              .fontColor("#007DFF")
            if (this.isScanOn) {
              LoadingProgress().width(40).height(40)
            }
          }
          .width('100%')
          .height(50)
          .justifyContent(FlexAlign.SpaceBetween)
          .alignItems(VerticalAlign.Center)
        }

        LazyForEach(this.deviceDataResource, (item: IotDevice, index) => {
          ListItem() {
            ProductView({ iotDevice: item, connectType: 0 })
          }
          .onClick(() => {
            this.connectDevice(item);
          })
        }, (item: DeviceInfo) => JSON.stringify(item))
      }
      .width('100%')
      .padding({ left: 16, right: 16 })
      .layoutWeight(1)
      .divider({
        strokeWidth: 1,
        color: Color.Gray,
        startMargin: 10,
        endMargin: 10
      })
      .margin({ top: 10 })

      if (this.isScanOn) {
        Blank().margin({ top: "20vp" }).height("20vp")
      } else {
        Button(
          "重新扫描设备",
          { type: ButtonType.Capsule, stateEffect: true }
        )
          .onClick(() => {
            this.executeScan();
          })
          .fontColor("#007DFF")
          .fontSize("14fp")
          .padding({
            left: 30,
            right: 30,
            top: 10,
            bottom: 10
          })
          .backgroundColor("#e1e5e8")
          .margin({ top: 20, bottom: 20 })
      }

      Row() {
        this.PassBtn();
        Button() {
          Image($r('app.media.ic_public_help'))
            .width('20vp')
            .height('20vp')
        }
        .width('30%')
        .height('30vp')
        .backgroundColor(Color.Grey)
        .onClick(() => {
          AlertDialog.show(
            {
              title: '操作提示',
              message: this.StepTips,
              confirm: {
                value: 'OK',
                action: () => {
                }
              }
            }
          )
        });

        this.FailBtn();
      }
      .height('10%')
      .width('100%')
      .justifyContent(FlexAlign.SpaceEvenly)
      .backgroundColor(Color.Black)
    }
    .width('100%')
    .height('100%')
    .backgroundColor(Color.White)
  }
}