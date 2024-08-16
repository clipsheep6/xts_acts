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
import application from '@ohos.app.ability.application';
import commonEventManager from '@ohos.commonEventManager';
import worker from '@ohos.worker';
import hilog from '@ohos.hilog';
import { BusinessError } from '@ohos.base';
import childProcessManager from '@ohos.app.ability.childProcessManager'
import { getContextEntry } from '../entryability/EntryAbility';

@Entry
@Component
struct Index {
  @State inputTxt: string = '';
  build() {
    Column() {
      Flex({ justifyContent: FlexAlign.Center, alignItems: ItemAlign.Center }) {
        Text('Get Context')
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
          try {
            hilog.info(0x0000, 'testTag', 'Ability onCreate');
            let context1 = application.getApplicationContext();
            hilog.info(0x0000, 'testTag', 'context1: %{public}s', JSON.stringify(context1));
            let context2 = getContextEntry().getApplicationContext();
            hilog.info(0x0000, 'testTag', 'context2: %{public}s', JSON.stringify(context2));
            if (context1.applicationInfo.name == context2.applicationInfo.name &&
                context1.cacheDir == context2.cacheDir &&
                context1.tempDir == context2.tempDir &&
                context1.filesDir == context2.filesDir &&
                context1.databaseDir == context2.databaseDir &&
                context1.preferencesDir == context2.preferencesDir &&
                context1.bundleCodeDir == context2.bundleCodeDir &&
                context1.distributedFilesDir == context2.distributedFilesDir &&
                context1.resourceDir == context2.resourceDir &&
                context1.cloudFileDir == context2.cloudFileDir
            ) {
              commonEventManager.publish('0300', (err, data)=>{
                hilog.info(0x0000, 'testTag', 'customData, 0100 msg, err=' + JSON.stringify(err));
                hilog.info(0x0000, 'testTag', 'customData, 0100 msg, data=' + JSON.stringify(data));
              })
            } else {
              hilog.info(0x0000, 'testTag', 'context1 failed');
            }
          } catch (err) {
            hilog.info(0x0000, 'testTag', 'context1: %{public}s', JSON.stringify(err));
          }
        })

        Button('process create')
        .id('process1')
        .margin(10)
        .width('60%')
        .fontSize(20)
        .fontColor(Color.White)
        .type(ButtonType.Capsule)
        .onClick(() => {
          try {
            let mode: number;
            try {
              mode = childProcessManager.StartMode.SELF_FORK;
            } catch (err) {
              mode = 0;
            }
            childProcessManager.startChildProcess('./ets/process/DemoProcess.ts', mode)
              .then((data) => {
                console.log(`startChildProcess success, pid: ${data}`);
              }, (err: BusinessError) => {
                console.error(`startChildProcess error, errorCode: ${err.code}`);
              })
          } catch (err) {
            console.error(`startChildProcess error, errorCode: ${(err as BusinessError).code}`);
          }
        })

        Button('worker get')
        .id('worker1')
        .margin(10)
        .width('60%')
        .fontSize(20)
        .fontColor(Color.White)
        .type(ButtonType.Capsule)
        .onClick(() => {
          console.log('testTag worker start');
          let w: worker.ThreadWorker = new worker.ThreadWorker('../Workers/MyWorker.ts');
          w.onmessage = (): void => {}
          w.onerror = (): void => {}
          w.postMessage({'type': 0})
          w.terminate()
        })
    }
    .height('100%')
  }
}