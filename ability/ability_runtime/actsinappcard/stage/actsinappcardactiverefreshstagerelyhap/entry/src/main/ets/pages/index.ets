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
import formProvider from '@ohos.application.formProvider';
import formBindingData from '@ohos.application.formBindingData';
import formHost from '@ohos.application.formHost';

@Entry
@Component
struct Index {
  @State message: string = 'InAppCardActiveRefreshStageTest'
  @State formId: number = 0;
  @State bundleName: string = "com.inappcard.activerefreshstagetest";
  @State abilityName: string = "FormAbility";
  @State moduleName: string = "entry";
  @State formName: string = "active_refresh_widget";
  @State dimension: FormDimension = FormDimension.Dimension_2_2;
  @State isShow: boolean = true;

  activeUpdate() {
        let obj = {
          "updateCount": 2,
        };
        let commonEventData = {
            parameters: {
              "formId":this.formId
            }
          };
        let formData = formBindingData.createFormBindingData(obj);
        formProvider.updateForm(this.formId.toString(), formData).then((data)=>{
          console.error(`ACTS_InAppCardActiveRefresh incard ====>activeUpdate, data: ${JSON.stringify(data)}`);
          commonEvent.publish('form_id_from_provider_active', commonEventData,(err,data)=>{
              console.error(`ACTS_InAppCardActiveRefresh active ====>commonEventData, data: ${JSON.stringify(err)}`);
          })
        }).catch((err) => {
          console.error(`ACTS_InAppCardActiveRefresh incard ====>activeUpdate, err: ${JSON.stringify(err)}`);
        });
      }
  activeUpdateErr() {
             formHost.deleteForm(this.formId.toString()).then(async (data) => {
              console.debug("ACTS_InAppCardDeleteCard_0300 ====> deleteForm data" + JSON.stringify(data))
            }).catch((err) => {
              console.debug("ACTS_InAppCardDeleteCard_0300 ====> deleteForm err" + JSON.stringify(err))
            })
     }

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)

        if (this.isShow) {
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
              console.info(`InAppCardActiveRefreshStageTest onAcquired: ${JSON.stringify(form)}`);
              this.formId = form.id;
              let commonEventData = {
                parameters: {
                  "formId": form.id
                }
              };
              commonEvent.publish('form_id_from_provider', commonEventData,(err,data)=>{
                console.info(`InAppCardActiveRefresh MainAbility publish event err: ${JSON.stringify(err)}`);
                console.info(`InAppCardActiveRefresh MainAbility publish event data: ${JSON.stringify(data)}`);
                console.info(`====>IglobalThis.abilityWant.action :${JSON.stringify(globalThis.abilityWant.action)}`);
                if(globalThis.abilityWant.action=="inCard"){
                  setTimeout(async () => {
                    this.activeUpdate()
                  },1000)
                }
              })
              if(globalThis.abilityWant.action=="inCardErr"){
                setTimeout(async () => {
                  this.activeUpdateErr()
                },1000)
              }
            })
            .onError((err) => {
              console.log('InAppCardActiveRefreshStageTest failed to add form, err:'+ JSON.stringify(err));
            })
            .size({ width: 360, height: 180 })
        }

      }
      .width('100%')
    }
    .height('100%')
  }
}