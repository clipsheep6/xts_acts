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
  @State message: string = 'LoadCardErrTest'
  @StorageLink('formId') formId: number = 0;
  @StorageLink('bundleName') bundleName: string = "com.example.inappcardloadcarderr";
  @StorageLink('abilityName') abilityName: string = "FormAbility";
  @StorageLink('moduleName') moduleName: string = "entry";
  @StorageLink('formName') formName: string = "widget";
  @State dimension: FormDimension = FormDimension.Dimension_2_2;
  @State isShow: boolean = true;

  build() {
    Row() {
      Column() {
        Row() {
          Column() {
            if (this.isShow) {
              Text(this.message)
                .fontSize(50)
                .fontWeight(FontWeight.Bold)
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
                  this.formId = form.id;
                  let commonEventData = {
                    parameters: {
                      "formId": form.id
                    }
                  };
                  commonEvent.publish("ACTS_CARD_FORM_ID",commonEventData,(err,data)=>{
                    console.log('ACTS_InAppCardLoadCard ====>publish:data:' + JSON.stringify(data));
                    console.log('ACTS_InAppCardLoadCard ====>publish:err:' + JSON.stringify(err));
                  })
                })
                .onError((err) => {
                  let commonEventData = {
                    parameters: {
                      "err": err
                    }
                  };
                  commonEvent.publish("ACTS_CARD_ERR_CORD",commonEventData,(err,data)=>{
                    console.log('ACTS_InAppCardLoadCard ====>publish:data:' + JSON.stringify(data));
                    console.log('ACTS_InAppCardLoadCard ====>publish:err:' + JSON.stringify(err));
                  })
                  console.error(`failed to add form, err: ${JSON.stringify(err)}`)
                })
                .size({ width: 360, height: 180 })
            }
          }
          .width('100%')
          .margin({ top: '5%' })
        }
      }
      .width('100%')
      .margin({ top: '5%' })
    }
  }
}