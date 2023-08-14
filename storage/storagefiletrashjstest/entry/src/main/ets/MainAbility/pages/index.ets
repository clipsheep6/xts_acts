/*
 * Copyright (C) 2022-2023 Huawei Device Co., Ltd.
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
import testTrashsuite from '../../test/List.test'
import fileAccess from '@ohos.file.fileAccess'
import hilog from '@ohos.hilog'

const DOMAIN_CODE = 0x0001;
const TAG = 'createHelper';

let isShow = false;
//InstrumentLog, ReportExtend
@Entry
@Component
struct Index {
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Text('你好，测试...')
        .fontSize(50)
        .fontWeight(FontWeight.Bold)
    }
    .width('100%')
    .height('100%')
  }

  onPageShow() {
    if (isShow) {
      return;
    }
    isShow = true;
    var abilityDelegator: any
    abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
    var abilityDelegatorArguments: any
    abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments()
    this.executeCase(abilityDelegator, abilityDelegatorArguments);
  }

  async executeCase(abilityDelegator, abilityDelegatorArguments) {
    hilog.info(DOMAIN_CODE, TAG, 'start run testcase!');
    let shareName = 'com.ohos.UserFile.ExternalFileManager';
    let helper = await this.getHelper(shareName);
    function testsuite() {
      if (helper) {
        testTrashsuite(helper)
      } else {
        hilog.error(DOMAIN_CODE, TAG, shareName + ' service createFileAccessHelper fail');
      }
    }
    Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite);
  }

  async getHelper(name) {
    try {
      let wants = await fileAccess.getFileAccessAbilityInfo();
      let result = wants.filter(item => item.bundleName == name || item.bundleName == name);
      let helper = fileAccess.createFileAccessHelper(globalThis.abilityContext, result);
      return helper;
    } catch (err) {
      hilog.error(DOMAIN_CODE, TAG, 'createFileAccessHelper fail ' + err);
      return null;
    }
  }
}