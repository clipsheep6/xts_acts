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
 
@Entry
@Component
struct Index {
  @StorageLink('bundleName') bundleName: string = "";
  @StorageLink('abilityName') abilityName: string = "";
  @StorageLink('moduleName') moduleName: string = "";
  @StorageLink('formName') formName: string = "";
  @StorageLink('dimension') dimension: FormDimension = FormDimension.Dimension_2_4;
  @State message: string = 'Create Card Message'

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
          .onError((err) => {
            console.log(`[FormMgrService]failed to add form, err:` + JSON.stringify(err));
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