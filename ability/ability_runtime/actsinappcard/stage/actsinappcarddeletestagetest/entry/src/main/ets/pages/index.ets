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
 
import commonEvent from '@ohos.commonEvent';
@Entry
@Component
struct Index {
  @StorageLink('bundleName') bundleName: string = "com.example.actsinappcard";
  @StorageLink('abilityName') abilityName: string = "FormAbility";
  @StorageLink('moduleName') moduleName: string = "entry";
  @StorageLink('formName') formName: string = "widget";
  @StorageLink('dimension') dimension: FormDimension = FormDimension.Dimension_2_4;
  @State message: string = 'Create CardA'
  @StorageLink('startNext') startNext: string = "0";

  build() {
    Row(){
      Column(){
        FormComponent({
          id: 0,
          name:this.formName,
          bundle: this.bundleName,
          ability: this.abilityName,
          module: this.moduleName,
          dimension: this.dimension,
          temporary: false
        })
          .allowUpdate(true)
          .visibility(Visibility.Visible)
          .onAcquired((form) => {
            let formId;
            formId=form.id
            commonEvent.publish("ACTS_FORM_ID",{
              parameters: {
                'formId':formId
              }
            },(err,data)=>{
              console.log(`InAppCardDeleteStage MainAbility publish data: ${JSON.stringify(data)}`)
              console.log(`InAppCardDeleteStage MainAbility publish err: ${JSON.stringify(err)}`)
            })
            console.log(`InAppCardDeleteStage MainAbility formId: ${JSON.stringify(formId)}`)
          })
          .onError((err) => {
            console.log(`InAppCardDeleteStage MainAbility failed to add form, err: ${this.formName}`)
            console.log(`InAppCardDeleteStage MainAbility failed to add form, err: ${this.bundleName}`)
            console.log(`InAppCardDeleteStage MainAbility failed to add form, err: ${this.abilityName}`)
            console.log(`InAppCardDeleteStage MainAbility failed to add form, err: ${this.moduleName}`)
            console.log(`InAppCardDeleteStage MainAbility failed to add form, err: ${JSON.stringify(err)}`)
          })
          .size({ width: 400, height: 200 })
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
      }
    }
    .width('100%')
  }
}