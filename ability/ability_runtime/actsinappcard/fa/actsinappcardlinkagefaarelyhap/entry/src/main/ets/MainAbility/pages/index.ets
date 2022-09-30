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
import featureAbility from '@ohos.ability.featureAbility'
//const TIMEOUT_START_TIME=10000;
@Entry
@Component
struct Index {
  @StorageLink('formId') formId: number = 0;
  @State message: string = 'InAppCardLinkageFAA'
  @State bundleName: string = "com.inappcard.linkagefatest";
  @State abilityName: string = "FormAbility";
  @State moduleName: string = "entry";
  @State formName: string = "fa_widget";
  @State dimension: FormDimension = FormDimension.Dimension_2_2;
  @State isShow: boolean = true;

  build() {
    Row() {
      Column() {
        if (this.isShow) {
          Button() {
            Text('updateForm')
              .fontSize(20)
              .fontWeight(FontWeight.Bold)
          }
          .key('updateForm')
          .type(ButtonType.Capsule)
          .backgroundColor('#0D9FFB')
          .onClick(() => {
            formHost.requestForm(this.formId.toString()).then(() => {
              prompt.showToast({
                message: 'Update success',
                duration: 1000,
              });
              console.info(`InAppCardLinkageFATest Main updateForm successfully, formId: ${this.formId.toString()}`);
            });
          })
          .size({ width: 400, height: 200 })
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
            .onAcquired(async(form) => {
              console.info(`InAppCardUserFAA Main formId: ${form.id}`);
              this.formId = form.id;
              let parameter_b = {
                "want": {
                  bundleName: "com.inappcard.fab",
                  abilityName: "com.example.entry.MainAbility"
                }
              }
              await featureAbility.startAbility(parameter_b)
            })
            .onError((err) => {
              console.error(`InAppCardUserFAA failed to add form, err: ${JSON.stringify(err)}`)
            })
            .size({ width: 360, height: 180 })
        }
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
      }
      .alignItems(HorizontalAlign.Start)
      .width('100%')
    }
  }
}