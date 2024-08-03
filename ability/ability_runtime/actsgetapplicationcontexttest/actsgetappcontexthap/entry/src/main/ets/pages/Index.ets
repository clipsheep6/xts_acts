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
import application from '@ohos.app.ability.Application';
import commonEventManager from '@ohos.commonEventManager';
import worker from '@ohos.worker';
import hilog from '@ohos.hilog';

@Entry
@Component
struct Index {
  @State inputTxt: string = '';
  build() {
    Column() {
      Flex({ justifyContent: FlexAlign.Center, alignItems: ItemAlign.Center }) {
        Text("Get Context")
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
      }
      .margin({ top: 10 })
      Button('application get')
        .id('get')
        .margin(10)
        .width('60%')
        .fontSize(20)
        .fontColor(Color.White)
        .type(ButtonType.Capsule)
        .onClick(() => {
          hilog.info(0x0000, 'testTag', 'application get');
          let context1 = application.getApplicationContext();
          hilog.info(0x0000, 'testTag', 'context1: %{public}s', JSON.stringify(context1));
          if (context1.applicationInfo.name == 'com.example.getapplicationcontexthap') {
            commonEventManager.publish('0300', (err, data)=>{
              hilog.info(0x0000, 'testTag', 'customData, publish msg, err=' + JSON.stringify(err));
              hilog.info(0x0000, 'testTag', 'customData, publish msg, data=' + JSON.stringify(data));
            })
          } else {
            hilog.info(0x0000, 'testTag', 'context1.applicationInfo.name = %{public}s',
              context1.applicationInfo.name);
          }
        })
    }
    .height('100%')
  }
}