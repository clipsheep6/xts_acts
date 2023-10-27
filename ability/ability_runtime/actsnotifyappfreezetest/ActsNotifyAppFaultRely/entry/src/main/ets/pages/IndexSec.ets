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

@Entry
@Component
struct Index {
  @StorageLink('formId') formId: number = 0;
  @State message: string = '使用卡片'
  @State bundleName: string = "com.acts.appFreezeRely";
  @State abilityName: string = "EntryFormAbility";
  @State moduleName: string = "entry";
  @State formName: string = "widget";

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
        })
          .allowUpdate(true)
          .visibility(Visibility.Visible)
          .onAcquired(async(form) => {
            console.info('[ActsNotifyAppFault_Rely]', 0xF811, `IndexSec onAcquired, formId: ${form.id}`);
            this.formId = form.id;
          })
          .onError((err) => {
            console.info('[ActsNotifyAppFault_Rely]', 0xF811, `IndexSec failed to add form, err: ${err}`);
          })
          .size({ width: 360, height: 180 })
      }
      .width('100%')
    }
    .height('100%')
  }
}