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
import router from '@ohos.router';
import promptAction from '@ohos.promptAction';
import FirstDialog from '../model/FirstDialog';
import Logger from '../model/Logger';
import ProductDataSource from './model/BasicDataSource';
import { ProductView } from './Component/ProductView';
import IotDevice from './model/IotDevice';
import IotHelper from './model/IotHelper';
import { AsyncCallback } from '@kit.BasicServicesKit';
import IotConstants, { analysisProtocol, PageCase } from './model/IotConstants';

const TAG = '[IOTDiscovery]';

@Entry
@Component
struct IOTDiscovery {
  private Tips_WIFI: string = '操作步骤：\n1、请打开设备的wifi'
  private Tips_BLE: string = '操作步骤：\n1、请打开设备的蓝牙'
  private Tips_TEXT: string = '\n2、点击<重新扫描设备>按钮开始扫描'
    + '\n3、发现设备后，可用设备列表会显示设备信息';
  @State name: string = '';
  @State StepTips: string = "";
  @State Vue: boolean = false;
  @State isScanOn: boolean = false;
  private deviceDataResource: ProductDataSource = new ProductDataSource();
  private discoveryCallBack: AsyncCallback<IotDevice, void> = (error, iotDevice) => {
    if (error != undefined) {
      Logger.info(TAG, `discovery error ${error.message}`);
      return;
    }
    if (iotDevice == undefined) {
      return;
    }
    this.Vue = true;
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

  async aboutToAppear() {
    let pageCase = router.getParams() as PageCase;
    this.name = pageCase.title;
    if (analysisProtocol(this.name) == Protocol.WIFI) {
      this.StepTips = this.Tips_WIFI + this.Tips_TEXT;
    } else {
      this.StepTips = this.Tips_BLE + this.Tips_TEXT;
    }
    await FirstDialog.ChooseDialog(this.StepTips, this.name);
    setTimeout(() => {
      this.executeScan();
    }, 500);
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