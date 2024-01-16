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

import hilog from '@ohos.hilog';
import { Hypium } from '@ohos/hypium';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import testsuite from '../../test/List.test'

@Entry
@Component
struct Index {
  @State formId1: number = 0;
  @State formId2: number = 0;
  @State formId3: number = 0;
  @State formId4: number = 0;
  @State formWidth: number = 150;
  @State formHeight: number = 150;

  aboutToAppear() {
    let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
    let abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments()
    hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
    hilog.info(0x0000, 'testTag', '%{public}s', 'start run testcase!!!');
    Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite)
  }

  build() {
    Column() {
      Row() {
        FormComponent({
          id: this.formId1,
          name: "routerform1",
          bundle: "com.example.formprovider",
          ability: "EntryFormAbility",
          module: "entry",
          dimension: FormDimension.Dimension_2_2,
          temporary: false
        })
          .allowUpdate(true)
          .size({ width: this.formWidth, height: this.formHeight })
          .visibility(Visibility.Visible)
          .onAcquired((form) => {
            hilog.info(0x0000, 'testTag', 'form info: ' + JSON.stringify(form));
            this.formId1 = form.id;
            AppStorage.setOrCreate<string>('formId1', this.formId1.toString());
          })
          .onError((err) => {
            hilog.error(0x0000, 'testTag', 'fail to add form, err: ' + JSON.stringify(err));
          })
          .borderWidth(1)
          .borderColor(Color.Gray)

        FormComponent({
          id: this.formId2,
          name: "routerform2",
          bundle: "com.example.formprovider",
          ability: "EntryFormAbility",
          module: "entry",
          dimension: FormDimension.Dimension_2_2,
          temporary: false
        })
          .allowUpdate(true)
          .size({ width: this.formWidth, height: this.formHeight })
          .visibility(Visibility.Visible)
          .onAcquired((form) => {
            hilog.info(0x0000, 'testTag', 'form info: ' + JSON.stringify(form));
            this.formId2 = form.id;
            AppStorage.setOrCreate<string>('formId2', this.formId2.toString());
          })
          .onError((err) => {
            hilog.error(0x0000, 'testTag', 'fail to add form, err: ' + JSON.stringify(err));
          })
          .borderWidth(1)
          .borderColor(Color.Gray)
      }

      Row() {
        FormComponent({
          id: this.formId3,
          name: "routerstateform2",
          bundle: "com.example.formprovider",
          ability: "EntryFormAbility",
          module: "entry",
          dimension: FormDimension.Dimension_2_2,
          temporary: false
        })
          .allowUpdate(true)
          .size({ width: this.formWidth, height: this.formHeight })
          .visibility(Visibility.Visible)
          .onAcquired((form) => {
            hilog.info(0x0000, 'testTag', 'form info: ' + JSON.stringify(form));
            this.formId3 = form.id;
            AppStorage.setOrCreate<string>('formId3', this.formId3.toString());
          })
          .onError((err) => {
            hilog.error(0x0000, 'testTag', 'fail to add form, err: ' + JSON.stringify(err));
          })
          .borderWidth(1)
          .borderColor(Color.Gray)

        FormComponent({
          id: this.formId4,
          name: "routerstateform3",
          bundle: "com.example.formprovider",
          ability: "EntryFormAbility",
          module: "entry",
          dimension: FormDimension.Dimension_2_2,
          temporary: false
        })
          .allowUpdate(true)
          .size({ width: this.formWidth, height: this.formHeight })
          .visibility(Visibility.Visible)
          .onAcquired((form) => {
            hilog.info(0x0000, 'testTag', 'form info: ' + JSON.stringify(form));
            this.formId4 = form.id;
            AppStorage.setOrCreate<string>('formId4', this.formId4.toString());
          })
          .onError((err) => {
            hilog.error(0x0000, 'testTag', 'fail to add form, err: ' + JSON.stringify(err));
          })
          .borderWidth(1)
          .borderColor(Color.Gray)

      }.margin({ top: 50 })
    }.justifyContent(FlexAlign.Center).width('100%').height('100%')
  }
}