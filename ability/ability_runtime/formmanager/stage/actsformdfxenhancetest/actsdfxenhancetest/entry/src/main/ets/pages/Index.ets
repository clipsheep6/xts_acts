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

import commonEventManager from '@ohos.commonEventManager';
import hilog from '@ohos.hilog';

@Entry
@Component
struct Index {
  @State formId1: number = 0;
  @State formWidth: number = 150;
  @State formHeight: number = 150;
  @State textWidth: number = 150;
  @State textHeight: number = 40;
  @State testCase: string = '';

  aboutToAppear() {
    this.testCase = AppStorage.get<string>('testcase') as string;
  }

  build() {
    Row() {
      Column() {

        if (this.testCase === 'Acts_HiDumpFormSubscribedKeysByFormId_0100') {
          FormComponent({
            id: 0,
            name: 'noproxyform',
            bundle: "com.acts.actsdfxenhanceformprovider",
            ability: "EntryFormAbility",
            module: "entry",
            dimension: FormDimension.Dimension_2_2,
            temporary: false
          })
            .allowUpdate(true)
            .size({ width: this.formWidth, height: this.formHeight })
            .visibility(Visibility.Visible)
            .onAcquired((form) => {
              this.formId1 = form.id;
              AppStorage.setOrCreate<string>('formId', this.formId1.toString());
              let options: commonEventManager.CommonEventPublishData = {
                parameters: {
                  'formId': this.formId1.toString(),
                }
              }
              commonEventManager.publish('FMS_onAddForm_commonEvent', options, async () => {
              })
            })
            .onError((error) => {
              hilog.info(0x0000, 'addFormTag', 'fail to add form : err : %{public}s', JSON.stringify(error) ?? '');
            })
            .borderWidth(1)
            .borderColor(Color.Gray)
        } else if (this.testCase === 'Acts_HiDumpFormSubscribedKeysByFormId_0200'
        || this.testCase === 'Acts_HiDumpFormSubscribedKeysByFormId_0300'
        || this.testCase === 'Acts_HiDumpFormSubscribedKeysByFormId_0400'
        || this.testCase === 'Acts_HiDumpFormSubscribedKeysByFormId_0500') {
          FormComponent({
            id: 0,
            name: 'publishproxyform',
            bundle: "com.acts.actsdfxenhanceformprovider",
            ability: "EntryFormAbility",
            module: "entry",
            dimension: FormDimension.Dimension_2_2,
            temporary: false
          })
            .allowUpdate(true)
            .size({ width: this.formWidth, height: this.formHeight })
            .visibility(Visibility.Visible)
            .onAcquired((form) => {
              this.formId1 = form.id;
              AppStorage.setOrCreate<string>('formId', this.formId1.toString());
              let options: commonEventManager.CommonEventPublishData = {
                parameters: {
                  'formId': this.formId1.toString(),
                }
              }
              commonEventManager.publish('FMS_onAddForm_commonEvent', options, async () => {
              })
            })
            .onError((error) => {
              hilog.info(0x0000, 'addFormTag', 'fail to add form : err : %{public}s', JSON.stringify(error) ?? '');
            })
            .borderWidth(1)
            .borderColor(Color.Gray)
        } else if (this.testCase === 'Acts_HiDumpFormSubscribedKeysByFormId_0600') {
          FormComponent({
            id: 0,
            name: 'publishandrdbproxyform',
            bundle: "com.acts.actsdfxenhanceformprovider",
            ability: "EntryFormAbility",
            module: "entry",
            dimension: FormDimension.Dimension_2_2,
            temporary: false
          })
            .allowUpdate(true)
            .size({ width: this.formWidth, height: this.formHeight })
            .visibility(Visibility.Visible)
            .onAcquired((form) => {
              this.formId1 = form.id;
              AppStorage.setOrCreate<string>('formId', this.formId1.toString());
              let options: commonEventManager.CommonEventPublishData = {
                parameters: {
                  'formId': this.formId1.toString(),
                }
              }
              commonEventManager.publish('FMS_onAddForm_commonEvent', options, async () => {
              })
            })
            .onError((error) => {
              hilog.info(0x0000, 'addFormTag', 'fail to add form : err : %{public}s', JSON.stringify(error) ?? '');
            })
            .borderWidth(1)
            .borderColor(Color.Gray)
        }
      }
      .width('100%')
    }
    .height('100%')
  }
}