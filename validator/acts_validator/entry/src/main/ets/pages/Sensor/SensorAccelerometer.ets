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

import Logger from '../model/Logger'
import { CustomContainer } from '../common/CameraFlashContainer';
import FirstDialog from '../model/FirstDialog';
import router from '@ohos.router';
import sensor from '@ohos.sensor';
import BusinessError from "@ohos.base";

@Entry
@Component
struct SensorAccelerometer {
  @State FillColor: string = '#FF000000';
  @State name: string = 'SensorAccelerometer';
  @State StepTips: string = '测试目的：用于测试本机传感器\n-确定是否有加速度传感器\n-点击开启按钮打开传感器\n-请各方向移动设备'
    + '\n-预期结果：观察显示数值,跟随移动变化';
  private tag: string = 'Sensor Accelerometer';
  @State Vue: boolean = false;
  @State isSensor: boolean = true;
  @State sensorChange: boolean = false;
  @State dataX: string = '';
  @State dataY: string = '';
  @State dataZ: string = '';
  @State nextX: string = '';
  @State nextY: string = '';
  @State nextZ: string = '';
  @State intervalNum: number = 0;

  async aboutToAppear() {
    await FirstDialog.ChooseDialog(this.StepTips, this.name)
  }

  openAccelerometer() {
    this.sensorChange = !this.sensorChange
    if (this.sensorChange) {
      // 打开加速度传感器
      Logger.info(this.tag, 'enter')
      try {
        sensor.on(1, (data: sensor.AccelerometerResponse) => {
          Logger.info(this.tag, 'Succeeded in invoking on. X-coordinate component: ' + data.x);
          this.dataX = data.x.toFixed(0);
          Logger.info(this.tag, 'Succeeded in invoking on. Y-coordinate component: ' + data.y);
          this.dataY = data.y.toFixed(0);
          Logger.info(this.tag, 'Succeeded in invoking on. Z-coordinate component: ' + data.z);
          this.dataZ = data.z.toFixed(0);
          this.intervalNum = setInterval(() => {
            this.nextX = data.x.toFixed(0);
            this.nextY = data.y.toFixed(0);
            this.nextZ = data.z.toFixed(0);
            if (this.nextX !== this.dataX || this.nextY !== this.dataY || this.nextY !== this.dataY) {
              this.Vue = true;
            }
          }, 5000)
        }, { interval: 100000000 });
      } catch (error) {
        let e: BusinessError.BusinessError = error as BusinessError.BusinessError;
        Logger.error(this.tag, `Failed to invoke on. Code: ${e.code}, message: ${e.message}`);
      }
    } else {
      try {
        // 关闭传感器
        setTimeout(() => {
          sensor.off(sensor.SensorId.ACCELEROMETER);
        }, 100);
      } catch (error) {
        let e: BusinessError.BusinessError = error as BusinessError.BusinessError;
        Logger.error(this.tag, `Failed to invoke on. Code: ${e.code}, message: ${e.message}`);
      }
    }
  }

  onPageHide() {
    // 关闭传感器
    setTimeout(() => {
      sensor.off(sensor.SensorId.ACCELEROMETER);
    }, 100);
    Logger.info(this.tag, 'onPageHide releaseSensor end');
    clearInterval(this.intervalNum)
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
            url: 'pages/Sensor/Sensor_index',
            params: { result: 'None' }
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

      Column() {
        Text('X坐标分量: ' + this.dataX)
          .fontColor(Color.White)
          .fontSize('18fp')
          .textAlign(TextAlign.Start)
          .width('100%')
          .margin({ bottom: 24 })
        Text('Y坐标分量: ' + this.dataY)
          .fontColor(Color.White)
          .fontSize('18fp')
          .textAlign(TextAlign.Start)
          .width('100%')
          .margin({ bottom: 24 })
        Text('Z坐标分量: ' + this.dataZ)
          .fontColor(Color.White)
          .fontSize('18fp')
          .textAlign(TextAlign.Start)
          .width('100%')
          .margin({ bottom: 24 })
      }
      .width('80%')
      .height('30%')

      Flex({ alignItems: ItemAlign.Center, justifyContent: FlexAlign.Start, direction: FlexDirection.Column }) {
        Scroll() {
          Column() {
            Text('提示：如果设备存在加速度传感器，选择开启，否则选择无传感器')
              .fontSize('16fp').fontColor(Color.White).margin('20fp')
            Row() {
              Button(this.sensorChange ? '关闭' : '开启').onClick(() => {
                this.openAccelerometer();
              })
              Button('无加速度传感器').onClick(() => {
                this.Vue = true;
              })
            }
            .justifyContent(FlexAlign.SpaceEvenly)
            .width('100%')
            .margin('20fp')
          }
        }
        .scrollBarColor(Color.White) // 滚动条颜色
        .scrollBarWidth(10)
      }
      .width('80%')
      .height('50%')

      CustomContainer({
        title: this.name,
        Url: 'pages/Sensor/Sensor_index',
        StepTips: this.StepTips,
        FillColor: $FillColor,
        name: $name,
        Vue: $Vue,
        isFlash: $isSensor
      })
        .height('10%')
        .width('100%')
    }
    .width('100%')
    .height('100%')
    .backgroundColor(Color.Black)
  }

  onBackPress() {
    router.replaceUrl({
      url: 'pages/Sensor/Sensor_index'
    })
  }
}