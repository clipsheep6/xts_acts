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
struct Index3 {
  @StorageLink('formId') formId: number = 0;
  @StorageLink('bundleName') bundleName: string = "";
  @StorageLink('abilityName') abilityName: string = "";
  @StorageLink('moduleName') moduleName: string = "";
  @StorageLink('formName') formName: string = "";
  @StorageLink('dimension') dimension: FormDimension = FormDimension.Dimension_2_2;
  @State message: string = 'Load CardD'

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
        Row() {
          Column() {
            FormComponent({
              id: this.formId,
              name: this.formName,
              bundle: this.bundleName,
              ability: this.abilityName,
              module: this.moduleName,
              dimension: this.dimension,
              temporary: false
            })
              .allowUpdate(true)
              .visibility(Visibility.Visible)
              .onAcquired((form) => {
                let commonEventData = {
                  parameters: {
                    "formId": form.id
                  }
                };
                commonEvent.publish("ACTS_FORM_ID", commonEventData, (err, data) => {
                  console.log('ACTS_InAppLoadCard ====>publish:data:' + JSON.stringify(data));
                  console.log('ACTS_InAppLoadCard ====>publish:err:' + JSON.stringify(err));
                })
              })
              .onError((err) => {
                console.log('ACTS_InAppLoadCard failed to add form, err:' + JSON.stringify(err));
                let commonEventData = {
                  parameters: {
                    "errCode": err
                  }
                };
                commonEvent.publish("ERR_CODE", commonEventData, (err, data) => {
                  console.log('ACTS_InAppLoadCard ====>publish:errdata:' + JSON.stringify(data));
                  console.log('ACTS_InAppLoadCard ====>publish:errcode:' + JSON.stringify(err));
                })
              })

              .size({ width: 350, height: 175 })
              .margin({ top: '5%' })
          }
        }
        .width('100%')
        .height('30%')
      }
      .width('100%')
    }
    .height('100%')
  }
}