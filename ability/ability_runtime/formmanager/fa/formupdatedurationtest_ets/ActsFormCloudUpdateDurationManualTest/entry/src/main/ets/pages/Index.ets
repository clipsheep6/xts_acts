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

import { BusinessError } from '@ohos.base';
import bundleManager from '@ohos.bundle.bundleManager';
import promptAction from '@ohos.promptAction'
import hilog from '@ohos.hilog';

let testTag: string = 'CloudUpdateDurationManualTest';

@Entry
@Component
struct Index {
  @State message: string = 'Form Cloud Update Duration Manual Test'

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(30)
          .fontWeight(FontWeight.Bold)

        Button('模拟云端下发刷新等级4')
          .backgroundColor(0x4682B4)
          .fontSize(20)
          .width(300)
          .height(60)
          .onClick(() => {
            let additionalInfo = "formUpdateLevel:4"
            let bundleName = 'com.example.actsformcloudupdatedurationmanualtest';
            try {
              bundleManager.setAdditionalInfo(bundleName, additionalInfo);
              console.info('setAdditionalInfo formUpdateLevel:1 successfully.');
              try {
                promptAction.showToast({
                  message: '云端下发刷新等级成功！',
                  duration: 2000,
                });
              } catch (error) {
                let message = (error as BusinessError).message;
                hilog.error(0x0000, testTag, 'showToast args error. Cause: %{public}s', message);
              }
            } catch (err) {
              let message = (err as BusinessError).message;
              hilog.error(0x0000, testTag, 'setAdditionalInfo failed. Cause: %{public}s', message);
            }
          })
          .margin({ top: 20, bottom: 15 })
      }
      .width('100%')
    }
    .height('100%')
  }
}