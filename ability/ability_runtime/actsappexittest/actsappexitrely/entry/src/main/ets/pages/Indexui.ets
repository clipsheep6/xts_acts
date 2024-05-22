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

import Want from '@ohos.app.ability.Want';
import common from '@ohos.app.ability.common';
import { BusinessError } from '@ohos.base';

@Entry
@Component
struct Index {
  @State message: string = 'Singleton Ability'
  private context = getContext(this) as common.UIAbilityContext;
  @StorageLink('want') want: Want = {
    action: 'SUB_Ability_AbilityRuntime_terminateProcess_0300',
    bundleName: 'com.acts.processexitrely',
    abilityName: 'UIExtAbility',
    moduleName: 'entry',
    parameters: {
      'ability.want.params.uiExtensionType': 'sys/commonUI'
    }
  }

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
        UIExtensionComponent(this.want)
          .size({ width: '100%', height: '100' })
          .backgroundColor(Color.Blue)
          .border({ width: 5, color: Color.Red })
      }
      .width('100%')
    }
    .height('100%')
  }
}