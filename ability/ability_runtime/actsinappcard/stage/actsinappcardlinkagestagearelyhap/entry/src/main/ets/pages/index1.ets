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

import formHost from '@ohos.application.formHost';
import prompt from '@ohos.prompt';

@Entry
@Component
struct Index1 {
  @StorageLink('formId') formId: number = 0;
  @State message: string = 'InAppCardLinkageStageCardB'
  @StorageLink('bundleName') bundleName: string = "com.example.inappcarduserstagec";
  @StorageLink('abilityName') abilityName: string = "FormAbility";
  @StorageLink('moduleName') moduleName: string = "entry";
  @StorageLink('formName') formName: string = "widget";
  @State dimension: FormDimension = FormDimension.Dimension_2_2;
  @State isShow: boolean = true;
  @State disableIsShow: boolean = true;
  build() {
    Row() {
      Column() {
        Row() {
          Column() {
            if (this.isShow) {
              Text(this.message)
                .fontSize(50)
                .fontWeight(FontWeight.Bold)
              if(this.disableIsShow ){
                Text('当前卡片允许刷新')
                  .fontSize(20)
                  .fontWeight(FontWeight.Bold)
              }else{
                Text('当前卡片禁止刷新')
                  .fontSize(20)
                  .fontWeight(FontWeight.Bold)
              }
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
                  this.formId=form.id
                })
                .onError((err) => {
                  console.error(`InAppCardUserStageA failed to add form, err: ${JSON.stringify(err)}`)
                })
                .size({ width: 360, height: 180 })
            }
          }
        }
        .margin({ top: '5%' })
        Row() {
          Button() {
            Text('updateForm')
              .fontSize(20)
              .fontWeight(FontWeight.Bold)
          }
          .type(ButtonType.Capsule)
          .backgroundColor('#0D9FFB')
          .onClick(() => {
            formHost.requestForm(this.formId.toString()).then(() => {0
              prompt.showToast({
                message: 'Update success',
                duration: 1000,
              });
              console.info(`InAppCardLinkageStageA Main updateForm successfully, formId: ${this.formId.toString()}`);
            });
          })
          .size({ width: 200, height: 40 })

          Button() {
            Text('拉起卡片A所在页面')
              .fontSize(20)
              .fontWeight(FontWeight.Bold)
          }
          .type(ButtonType.Capsule)
          .backgroundColor('#0D9FFB')
          .onClick(() => {
            let parameter_a = {
              bundleName: "com.example.inappcarduserstagec",
              abilityName: "MainAbility",
              action: "formId",
              parameters:{"fromId": this.formId}
            }
            globalThis.abilityContext.startAbility(parameter_a, ((err, data) => {
              console.error("ACTS_InAppCardLinkage ====>  startAbility, err: " + JSON.stringify(err))
              console.error("ACTS_InAppCardLinkage ====>  startAbility, data:" + JSON.stringify(data))
            })
            )
          })
          .size({ width: 200, height: 40 })
        }
        .margin({ top: '5%' })
        Row() {
          Button() {
            Text('禁止刷新')
              .fontSize(20)
              .fontWeight(FontWeight.Bold)
          }
          .type(ButtonType.Capsule)
          .backgroundColor('#0D9FFB')
          .onClick(async() => {
            this.disableIsShow=false
            await formHost.disableFormsUpdate([this.formId.toString()]).then((data)=>{
              console.log("ACTS_InAppCardLinkage ====> disableFormsUpdate false data:" + JSON.stringify(data));
            }).catch((err)=>{
              console.log("ACTS_InAppCardLinkage ====> disableFormsUpdate false err:" + JSON.stringify(err));
            })
          })
          .size({ width: 200, height: 40 })
          .margin({ top: '5%' })

          Button() {
            Text('允许刷新')
              .fontSize(20)
              .fontWeight(FontWeight.Bold)
          }
          .type(ButtonType.Capsule)
          .backgroundColor('#0D9FFB')
          .onClick(async() => {
            this.disableIsShow=true
            await formHost.enableFormsUpdate([this.formId.toString()]).then((data)=>{
              console.log("ACTS_InAppCardLinkage ====> enableFormsUpdate true data:" + JSON.stringify(data));
            }).catch((err)=>{
              console.log("ACTS_InAppCardLinkage ====> enableFormsUpdate true err:" + JSON.stringify(err));
            })
          })
          .size({ width: 200, height: 40 })
          .margin({ top: '5%' })
        }
      }
      .width('100%')
      .margin({ top: '5%' })
    }
  }
}