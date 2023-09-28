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
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'
import { Hypium } from '@ohos/hypium'
import recentTestSuite from '../../../test/List.test'
import fileAccess from '@ohos.file.fileAccess'

@Entry
@Component
struct Index {

  aboutToAppear(){
    console.info("start run testcase!!!!")
    var abilityDelegator: any
    abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
    var abilityDelegatorArguments: any
    abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments()
    this.executeCase(abilityDelegator, abilityDelegatorArguments);
  }

  async executeCase(abilityDelegator, abilityDelegatorArguments) {
    console.info('start run testcase!!!')
    
    let fileAccessHelper = await this.getHelper();
    function testsuite() {
      if (fileAccessHelper) {
        recentTestSuite(fileAccessHelper)
      } else {
        console.log('fileAccess createFileAccessHelper fail');
      }
    }
    Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite);
  }

  async getHelper() {
    try {
      let userFileName = 'com.ohos.UserFile.ExternalFileManager';
      let wants = await fileAccess.getFileAccessAbilityInfo();
      let result = wants.filter(item => item.bundleName == userFileName || item.bundleName == userFileName);
      let helper = fileAccess.createFileAccessHelper(globalThis.abilityContext, result);
      return helper;
    } catch (err) {
      console.log('createFileAccessHelper fail ' + JSON.stringify(err));
      return null;
    }
  }

  build() {
    Flex({ direction:FlexDirection.Column, alignItems:ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Text('Hello World')
        .fontSize(50)
        .fontWeight(FontWeight.Bold)
      Button() {
        Text('next page')
          .fontSize(25)
          .fontWeight(FontWeight.Bold)
      }.type(ButtonType.Capsule)
      .margin({
        top: 20
      })
      .backgroundColor('#0D9FFB')
      .onClick(() => {

      })
    }
    .width('100%')
    .height('100%')
  }
}