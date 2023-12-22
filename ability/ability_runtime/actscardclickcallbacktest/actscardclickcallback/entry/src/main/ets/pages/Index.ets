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
  @StorageLink('bundleName') bundleName: string = "com.acts.cardclickcallback";
  @StorageLink('abilityName') abilityName: string = "EntryFormAbility";
  @StorageLink('moduleName') moduleName: string = "entry";
  @StorageLink('formName') formName: string = "widget";
  @StorageLink('dimension') dimension: FormDimension = FormDimension.Dimension_2_2;
  @State message: string = 'Router Card';

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
          dimension: this.dimension
        })
          .id("routerRely")
          .onError((err) => {
            console.log(`failed to add form, err:` + JSON.stringify(err));
          })
          .size({ width: 100, height: 100 })
          .margin({ top: '5%' })
          .backgroundColor('#808080')

        FormComponent({
          id: this.formId,
          name: 'widget_call',
          bundle: this.bundleName,
          ability: this.abilityName,
          module: this.moduleName,
          dimension: this.dimension
        })
          .id("callRely")
          .onError((err) => {
            console.log(`failed to add form, err:` + JSON.stringify(err));
          })
          .size({ width: 100, height: 100 })
          .margin({ top: '5%' })
          .backgroundColor('#808080')

        FormComponent({
          id: this.formId,
          name: 'widget_message',
          bundle: this.bundleName,
          ability: this.abilityName,
          module: this.moduleName,
          dimension: this.dimension
        })
          .id("messageRely")
          .onError((err) => {
            console.log(`failed to add form, err:` + JSON.stringify(err));
          })
          .size({ width: 100, height: 100 })
          .margin({ top: '5%' })
          .backgroundColor('#808080')
      }
      .width('100%')
    }
    .height('100%')
  }
}