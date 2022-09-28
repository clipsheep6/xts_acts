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
import formHost from '@ohos.application.formHost';
let formIdA;
let formIdB;
@Entry
@Component
struct Index1 {
  @StorageLink('bundleName') bundleName: string = "com.example.actsinappcardforcerefresh";
  @StorageLink('abilityName') abilityName: string = "FormAbility";
  @StorageLink('moduleName') moduleName: string = "entry";
  @StorageLink('formName') formName: string = "widget";
  @StorageLink('dimension') dimension: FormDimension = FormDimension.Dimension_2_4;
  @State message: string = 'Create CardC'

  build() {
    Row() {
      Flex({ wrap: FlexWrap.Wrap,justifyContent:FlexAlign.Center }){
        Column() {
          FormComponent({
            id: 0,
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
              formIdA = form.id
              console.log(`ACTS_InAppCardForceRefresh index1 ====>formId:` + JSON.stringify(formIdA));
            })
            .onError((err) => {
              console.log(`[FormMgrService]failed to add form, err:` + JSON.stringify(err));
            })
            .size({ width: 400, height: 200 })
        }
        Column() {
          FormComponent({
            id: 0,
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
              formIdB = form.id
              setTimeout(()=>{
                commonEvent.publish("ACTS_FORM_ID", {
                  parameters: {
                    formIdA: formIdA,
                    formIdB: formIdB
                  }
                }, (err, data) => {
                  console.log(`ACTS_InAppCardRouterEvent ====>publish:data:` + JSON.stringify(data));
                  console.log(`ACTS_InAppCardRouterEvent ====>publish:err:` + JSON.stringify(err));
                })
              },500)
              console.log(`ACTS_InAppCardForceRefresh ====>formId:` + JSON.stringify(formIdB));
            })
            .onError((err) => {
              console.log(`[FormMgrService]failed to add form, err:` + JSON.stringify(err));
            })
            .size({ width: 400, height: 200 })
        }
        Button() {
          Text('updateForm')
            .fontSize(20)
            .fontWeight(FontWeight.Bold)
        }
        .type(ButtonType.Capsule)
        .backgroundColor('#0D9FFB')
        .onClick(() => {
          formHost.requestForm(formIdA.toString()).then(() => {
            console.info(`InAppCardLinkageStageTest Main updateForm successfully, formId: ${formIdA.toString()}`);
          });
        })
        .size({ width: 200, height: 40 })
        .margin({ top: '5%' })

      }
    }
    .width('100%')
  }
}