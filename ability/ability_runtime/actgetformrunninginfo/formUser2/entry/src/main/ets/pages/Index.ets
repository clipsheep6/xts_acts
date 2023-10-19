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
import formInfo from '@ohos.app.form.formInfo';
import commonEvent from '@ohos.commonEventManager'
@Entry
@Component
struct Index {
  @StorageLink('formId') formId: number = 0;
  @State message: string = '使用卡片2'
  @State bundleName: string = "com.example.formprovide";
  @State abilityName: string = "EntryFormAbility";
  @State moduleName: string = "entry";
  @State formName: string = "widget";
  @State isShow: boolean = true;
  @State dimension: formInfo.FormDimension = formInfo.FormDimension.Dimension_2_2;

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
        FormComponent({
          id: 0,
          name: this.formName,
          bundle: this.bundleName,
          ability: this.abilityName,
          module: this.moduleName,
          dimension: this.dimension,
        })
          .allowUpdate(true)
          .visibility(Visibility.Visible)
          .onAcquired((form) => {
            console.info(`formUserOne Main formId: ${form.id}`);
            this.formId = form.id;
            let commonEventData = {
              parameters: {
                "formId": form.id
              }
            };
            commonEvent.publish("ACTS_FormIdB",commonEventData,(err,data)=>{
              console.log('formUserOne ====>publish:data:' + JSON.stringify(data));
              console.log('formUserOne ====>publish:err:' + JSON.stringify(err));
            })
          })
          .onError((err) => {
            console.error(`InAppCardUserFAA failed to add form, err: ${JSON.stringify(err)}`)

          })
          .size({ width: 360, height: 180 })
      }
      .width('100%')
    }
    .height('100%')
  }
}