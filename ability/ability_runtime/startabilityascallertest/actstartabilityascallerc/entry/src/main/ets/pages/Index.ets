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

import commonEventManager from '@ohos.commonEventManager'
let context= getContext(this)
let onResultEvent = 'ACTS_StartAsCaller_OnResult';

@Entry
@Component
struct Index {
  @State message: string = 'C'

  aboutToAppear() {
    let options = {
      parameters: {
        want: context.want
      }
    }
    commonEventManager.publish(onResultEvent, options, (err) => {
      console.log('SUB_AA_Extension_UIServiceExtensionAbility_Context_0100 commonEventManager 0100_UIExtensionAbilityContext');
    })
  }

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
      }
      .width('100%')
    }
    .height('100%')
  }
}