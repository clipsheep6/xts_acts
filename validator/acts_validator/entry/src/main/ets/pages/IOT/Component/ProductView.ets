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
import { Protocol } from '@ohos/IoTConnectKit';

import Logger from '../../model/Logger'
import IotDevice from '../model/IotDevice';

const TAG: string = 'ProductView'

@Component
export struct ProductView {
  iotDevice: IotDevice | undefined
  connectType: number = 0;

  aboutToAppear() {
    Logger.debug(TAG, `aboutToAppear`)
  }

  private getProtocolText() {
    let protocol = this.iotDevice?.getScannedProtocol();
    if (protocol == Protocol.WIFI) {
      return "WIFI设备";
    }
    if (protocol == Protocol.BLE) {
      return "BLE设备";
    }
    return "UNKNOWN"
  }

  build() {
    Row() {
      Column() {
        Text(`产品ID:${this.iotDevice?.getProductID()}-${this.iotDevice?.getRandomFlag()}`)
          .fontSize(20)
          .width('100%')
        Text(`网络标识符:${this.iotDevice?.getUnionCode()?.substring(0, 10)}...`)
          .fontSize(16)
          .width('100%')
      }
      .layoutWeight(1)

      Column() {
        Text(`${this.connectType == 1 ? "已连接(可断开连接)" : "未连接(可连接)"}`)
          .fontSize(20)
          .fontColor(`${this.connectType == 1 ? "#00ff00" : "#999999"}`)
        Text(`${this.getProtocolText()}`)
          .fontSize(16)
      }.margin({ left: 16 })
    }
    .backgroundColor(Color.White)
    .alignItems(VerticalAlign.Center)
    .width('100%')
    .padding(10)
  }
}