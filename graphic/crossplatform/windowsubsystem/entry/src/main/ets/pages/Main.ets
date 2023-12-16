/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

// @Entry
// @Component
// struct Index {
//   @State message: string = 'Hello World'
//
//   build() {
//     Row() {
//       Column() {
//         Text(this.message)
//           .fontSize(50)
//           .fontWeight(FontWeight.Bold)
//       }
//       .width('100%')
//     }
//     .height('100%')
//   }
// }


/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

import common from '@ohos.app.ability.common';

@Entry
@Component
struct EnterPage {
  private context = getContext(this) as common.UIAbilityContext;

  build() {
    Row() {
      Scroll() {
        Column() {
          Text('')
            .fontSize(30)
            .width('100%')
            .height(80)
            .fontColor("#ff0a34d0")
            .fontWeight(FontWeight.Bold)
            .textAlign(TextAlign.Center)
            .margin({ top: 20 })
          Column() {
            Text('window Test')
              .fontSize(25)
              .fontColor("#ff0a34d0")
              .fontWeight(FontWeight.Bold)
              .textAlign(TextAlign.Center)
            Text('Arkui MainAbility' + '\n' + '根页面')
              .fontSize(25)
              .fontColor("#ff0a34d0")
              .fontWeight(FontWeight.Bold)
              .textAlign(TextAlign.Center)
              .margin({ top: 20 })

            Button("前往 Arkui EntryAbility 页面")
              .id('toEntryAbility')
              .width('100%')
              .height(55)
              .fontWeight(FontWeight.Bold)
              .margin({ top: 20 })
              .onClick(() => {
                // let want = {
                //   bundleName: "com.example.windowsubsystem",
                //   moduleName: "windowsubsystem",
                //   abilityName: "MainAbility",
                // }
                this.context.startAbility({
                  deviceId: '',
                  bundleName: "com.example.windowsubsystem",
                  // moduleName: "entry",
                  abilityName: "EntryAbility",
                }).then(() => {
                  console.info('Succeeded in starting ability.');
                })
                // globalThis.context_EntryMainAbility.startAbility(want)
              })
            //
            // Button("生命周期测试")
            //   .width('100%')
            //   .height(55)
            //   .fontWeight(FontWeight.Bold)
            //   .margin({ top: 20 })
            //   .onClick(() => {
            //     // let want = {
            //     //   bundleName: "com.example.dynamichap",
            //     //   moduleName: "other",
            //     //   abilityName: "ResAbility",
            //     // }
            //     // globalThis.context_EntryMainAbility.startAbility(want)
            //   })

          }
        }
        .width('100%')
      }
    }
    .height('100%').backgroundColor(Color.Pink)
  }
}