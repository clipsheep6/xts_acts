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
  @State message: string = 'Hello World';
  @State formId: number = 0;
  @State bundle: string = 'com.example.formprovider';
  @State ability: string = 'FormAbility';
  @State moduleName: string = 'entry';
  @State allowUpate: boolean = true;
  @State name: string = 'form';
  @State isShowing: boolean = true;
  private dimension: FormDimension = FormDimension.Dimension_2_2;
  private temporary = false;

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
        FormComponent({
          id: this.formId,
          name: this.name,
          bundle: this.bundle,
          ability: this.ability,
          module: this.moduleName,
          dimension: this.dimension,
          temporary: this.temporary,
        })
          .allowUpdate(this.allowUpate)
          .visibility(this.isShowing ? Visibility.Visible : Visibility.Hidden)
          .size({ width: 150, height: 150 })
          .onAcquired((form) => {
            console.log('====>[FormComponent.host] get first form, form id:' + form.id);
          })
          .onError((err) => {
            console.log('====>first form create err: ' + JSON.stringify(err));
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}