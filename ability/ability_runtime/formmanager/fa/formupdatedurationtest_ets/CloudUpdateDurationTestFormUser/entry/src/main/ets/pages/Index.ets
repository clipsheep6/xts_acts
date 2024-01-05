/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

let testTag = 'CloudUpdateDurationTest'
let options: commonEventManager.CommonEventPublishData = {
  parameters: {}
}

@Entry
@Component
struct Index {
  @State message: string = 'Form User'
  @State formId1: number = 0;
  @State formWidth: number = 150;
  @State formHeight: number = 150;
  @State textWidth: number = 150;
  @State textHeight: number = 40;
  @State testCase: string = '';
  @State formUpdateDuration2Created: boolean = false;
  @State formUpdateDuration4Created: boolean = false;
  @State formUpdateDuration6Created: boolean = false;

  aboutToAppear() {
    this.testCase = AppStorage.get<string>('testcase') as string;
    this.formUpdateDuration2Created = false;
    this.formUpdateDuration4Created = false;
    this.formUpdateDuration6Created = false;
    options.parameters = {};
  }

  publishAddFormEvent() {
    if (!this.formUpdateDuration2Created || !this.formUpdateDuration4Created || !this.formUpdateDuration6Created) {
      return;
    }
    hilog.info(0x0000, testTag, 'Publish FormUpdateDurationTest_AddForm event.');
    commonEventManager.publish('FormUpdateDurationTest_AddForm', options, async () => {
    })
  }

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)

        Text("Test case : " + this.testCase)
          .fontSize(25)
          .fontWeight(FontWeight.Bold)
          .margin({ top: 10, bottom: 10 })

        if (this.testCase === 'Acts_FormUpdateDurationTest_0100') {
          FormComponent({
            id: 0,
            name: 'widget',
            bundle: "com.example.cloudupdatedurationtestformproviderthree",
            ability: "EntryFormAbility",
            module: "entry",
            dimension: FormDimension.Dimension_2_2,
            temporary: false
          })
            .allowUpdate(true)
            .size({ width: this.formWidth, height: this.formHeight })
            .visibility(Visibility.Visible)
            .onAcquired((form) => {
              hilog.info(0x0000, testTag, 'add form success. formId : %{public}s', form.id.toString());
              if (options.parameters) {
                options.parameters["formId"] = form.id.toString();
              }
              commonEventManager.publish('FormUpdateDurationTest_AddForm', options, async () => {
              })
            })
            .onError((error) => {
              hilog.info(0x0000, testTag, 'fail to add form : err : %{public}s', JSON.stringify(error) ?? '');
            })
            .borderWidth(1)
            .borderColor(Color.Gray)
        }

        if (this.testCase === 'Acts_FormUpdateDurationTest_0200' ||
        this.testCase === 'Acts_FormUpdateDurationTest_0600') {
          FormComponent({
            id: 0,
            name: 'widgetFormUpdateDuration2',
            bundle: "com.example.cloudupdatedurationtestformprovidertwo",
            ability: "EntryFormAbility",
            module: "entry",
            dimension: FormDimension.Dimension_2_2,
            temporary: false
          })
            .allowUpdate(true)
            .size({ width: this.formWidth, height: this.formHeight })
            .visibility(Visibility.Visible)
            .onAcquired((form) => {
              hilog.info(0x0000, testTag, 'add form widgetFormUpdateDuration2 success. formId : %{public}s', form.id.toString());
              this.formUpdateDuration2Created = true;
              if (options.parameters) {
                options.parameters["widgetFormUpdateDuration2FormId"] = form.id.toString();
              }
              this.publishAddFormEvent();
            })
            .onError((error) => {
              hilog.info(0x0000, testTag, 'fail to add widgetFormUpdateDuration2 form : err : %{public}s', JSON.stringify(error) ?? '');
            })
            .borderWidth(1)
            .borderColor(Color.Gray)

          FormComponent({
            id: 0,
            name: 'widgetFormUpdateDuration4',
            bundle: "com.example.cloudupdatedurationtestformprovidertwo",
            ability: "EntryFormAbility",
            module: "entry",
            dimension: FormDimension.Dimension_2_2,
            temporary: false
          })
            .allowUpdate(true)
            .size({ width: this.formWidth, height: this.formHeight })
            .visibility(Visibility.Visible)
            .onAcquired((form) => {
              hilog.info(0x0000, testTag, 'add form widgetFormUpdateDuration4 success. formId : %{public}s', form.id.toString());
              this.formUpdateDuration4Created = true;
              if (options.parameters) {
                options.parameters["widgetFormUpdateDuration4FormId"] = form.id.toString();
              }
              this.publishAddFormEvent();
            })
            .onError((error) => {
              hilog.info(0x0000, testTag, 'fail to add widgetFormUpdateDuration4 form : err : %{public}s', JSON.stringify(error) ?? '');
            })
            .borderWidth(1)
            .borderColor(Color.Gray)

          FormComponent({
            id: 0,
            name: 'widgetFormUpdateDuration6',
            bundle: "com.example.cloudupdatedurationtestformprovidertwo",
            ability: "EntryFormAbility",
            module: "entry",
            dimension: FormDimension.Dimension_2_2,
            temporary: false
          })
            .allowUpdate(true)
            .size({ width: this.formWidth, height: this.formHeight })
            .visibility(Visibility.Visible)
            .onAcquired((form) => {
              hilog.info(0x0000, testTag, 'add form widgetFormUpdateDuration6 success. formId : %{public}s', form.id.toString());
              this.formUpdateDuration6Created = true;
              if (options.parameters) {
                options.parameters["widgetFormUpdateDuration6FormId"] = form.id.toString();
              }
              this.publishAddFormEvent();
            })
            .onError((error) => {
              hilog.info(0x0000, testTag, 'fail to add widgetFormUpdateDuration6 form : err : %{public}s', JSON.stringify(error) ?? '');
            })
            .borderWidth(1)
            .borderColor(Color.Gray)
        }

        if (this.testCase === 'Acts_FormUpdateDurationTest_0300' ||
        this.testCase === 'Acts_FormUpdateDurationTest_0400' ||
        this.testCase === 'Acts_FormUpdateDurationTest_0500' ||
        this.testCase === 'Acts_FormUpdateDurationTest_0800' ||
        this.testCase === 'Acts_FormUpdateDurationTest_0900' ||
        this.testCase === 'Acts_FormUpdateDurationTest_1000' ||
        this.testCase === 'Acts_FormUpdateDurationTest_1100' ||
        this.testCase === 'Acts_FormUpdateDurationTest_1200' ||
        this.testCase === 'Acts_FormUpdateDurationTest_1300' ||
        this.testCase === 'Acts_FormUpdateDurationTest_1400' ||
        this.testCase === 'Acts_FormUpdateDurationTest_1500' ||
        this.testCase === 'Acts_FormUpdateDurationTest_1600') {
          FormComponent({
            id: 0,
            name: 'widget',
            bundle: "com.example.cloudupdatedurationtestformproviderone",
            ability: "EntryFormAbility",
            module: "entry",
            dimension: FormDimension.Dimension_2_2,
            temporary: false
          })
            .allowUpdate(true)
            .size({ width: this.formWidth, height: this.formHeight })
            .visibility(Visibility.Visible)
            .onAcquired((form) => {
              hilog.info(0x0000, testTag, 'add form success. formId : %{public}s', form.id.toString());
              if (options.parameters) {
                options.parameters["formId"] = form.id.toString();
              }
              commonEventManager.publish('FormUpdateDurationTest_AddForm', options, async () => {
              })
            })
            .onError((error) => {
              hilog.info(0x0000, testTag, 'fail to add form : err : %{public}s', JSON.stringify(error) ?? '');
            })
            .borderWidth(1)
            .borderColor(Color.Gray)
        }

        if (this.testCase === 'Acts_FormUpdateDurationTest_0700') {
          FormComponent({
            id: 0,
            name: 'widgetFormUpdateDuration2',
            bundle: "com.example.cloudupdatedurationtestformprovidertwo",
            ability: "EntryFormAbility",
            module: "entry",
            dimension: FormDimension.Dimension_2_2,
            temporary: false
          })
            .allowUpdate(true)
            .size({ width: this.formWidth, height: this.formHeight })
            .visibility(Visibility.Visible)
            .onAcquired((form) => {
              hilog.info(0x0000, testTag, 'add form widgetFormUpdateDuration2 success. formId : %{public}s', form.id.toString());
              this.formUpdateDuration2Created = true;
              if (options.parameters) {
                options.parameters["widgetFormUpdateDuration2FormId"] = form.id.toString();
              }
              this.publishAddFormEvent();
            })
            .onError((error) => {
              hilog.info(0x0000, testTag, 'fail to add widgetFormUpdateDuration2 form : err : %{public}s', JSON.stringify(error) ?? '');
            })
            .borderWidth(1)
            .borderColor(Color.Gray)


          FormComponent({
            id: 0,
            name: 'widget',
            bundle: "com.example.cloudupdatedurationtestformproviderone",
            ability: "EntryFormAbility",
            module: "entry",
            dimension: FormDimension.Dimension_2_2,
            temporary: false
          })
            .allowUpdate(true)
            .size({ width: this.formWidth, height: this.formHeight })
            .visibility(Visibility.Visible)
            .onAcquired((form) => {
              hilog.info(0x0000, testTag, 'add form widget success. formId : %{public}s', form.id.toString());
              this.formUpdateDuration4Created = true;
              this.formUpdateDuration6Created = true;
              if (options.parameters) {
                options.parameters["widgetFormUpdateDuration6FormId"] = form.id.toString();
              }
              this.publishAddFormEvent();
            })
            .onError((error) => {
              hilog.info(0x0000, testTag, 'fail to add widget form : err : %{public}s', JSON.stringify(error) ?? '');
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