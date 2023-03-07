/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

import commonEvent from '@ohos.commonEvent'
@Entry
@Component
struct Index {
  @State message: string = 'Hello World'
  @State deviceId: string = '123'
  @State formId: number = 0
  @State bundleName: string = 'com.across_devices_form.provider_stage'
  @State abilityName: string = 'FormAbility'
  @State moduleName: string = 'entry'
  @State formName: string = 'widget'
  @State temporary: boolean = false
  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)

        FormComponent({
          id: this.formId,
          name: this.formName,
          bundle: this.bundleName,
          ability: this.abilityName,
          module: this.moduleName,
          dimension: FormDimension.Dimension_2_2,
          temporary: this.temporary,
          deviceId: this.deviceId
        })
          .allowUpdate(true)
          .visibility(Visibility.Visible)
          .onAcquired((form) => {
            const acquiredMsg = `ACTS_AcrossDevicesFormAddDelete onAcquired: ${JSON.stringify(form)}；requestParams: ${JSON.stringify({
              id: this.formId,
              name: this.formName,
              bundle: this.bundleName,
              ability: this.abilityName,
              module: this.moduleName,
              dimension: FormDimension.Dimension_2_2,
              temporary: this.temporary,
              deviceId: this.deviceId
            })}`

            console.info(acquiredMsg)
            this.formId = form.id;
          })
          .onError((err) => {
            console.log(' failed to add form, err:' + JSON.stringify(err));
            let commonEventData = {
              parameters: {
                "errCode": err
              }
            };
            commonEvent.publish("ERR_CODE", commonEventData, (err, data) => {
              console.log(' ====>publish:errdata:' + JSON.stringify(data));
              console.log(' ====>publish:errcode:' + JSON.stringify(err));
            })
          })
          .size({ width: 360, height: 180 })
      }
      .width('100%')
    }
    .height('100%')
  }
}