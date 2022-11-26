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

import formInfo from '@ohos.app.form.formInfo';

export type CompareResult = {
  form: string,
  key: string
}

export class FormInfoTest {
  stage_b_bundle = 'com.across_devices_form.provider_stage_b'
  fa_bundle = 'com.across_devices_form.provider_fa'
  private entry_module = 'entry'
  private second_module = 'second_module'

  private form_02 = {
    bundleName: this.stage_b_bundle,
    moduleName: 'entry',
    abilityName: 'FormAbility',
    name: 'widget',
    description: 'StageB entry module widget.',
    type: formInfo.FormType.JS,
    jsComponentName: '',
    colorMode: formInfo.ColorMode.MODE_AUTO,
    isDefault: true,
    updateEnabled: true,
    formVisibleNotify: false,
    relatedBundleName: 'com.across_devices_form.provider_stage_b',
    scheduledUpdateTime: '10:30',
    formConfigAbility: 'ability://com.across_devices_form.provider_stage_b/entry/MainAbility',
    updateDuration: 1,
    defaultDimension: 2,
    supportDimensions: [2],
    continuableType: 2,
  }
  private form_03 = {
    bundleName: this.stage_b_bundle,
    moduleName: 'entry',
    abilityName: 'FormAbility',
    name: 'second_widget',
    description: 'StageB entry module second widget.',
    type: formInfo.FormType.JS,
    jsComponentName: '',
    colorMode: formInfo.ColorMode.MODE_DARK,
    isDefault: false,
    updateEnabled: false,
    formVisibleNotify: false,
    relatedBundleName: 'com.across_devices_form.provider_stage_b',
    scheduledUpdateTime: '11:30',
    formConfigAbility: 'ability://com.across_devices_form.provider_stage_b/entry/MainAbility',
    updateDuration: 2,
    defaultDimension: 2,
    supportDimensions: [2],
    continuableType: 0,
  }
  private form_04 = {
    bundleName: this.stage_b_bundle,
    moduleName: 'second_module',
    abilityName: 'FormAbility',
    name: 'widget',
    description: 'StageB second module widget.',
    type: formInfo.FormType.JS,
    jsComponentName: '',
    colorMode: formInfo.ColorMode.MODE_DARK,
    isDefault: true,
    updateEnabled: true,
    formVisibleNotify: false,
    relatedBundleName: 'com.across_devices_form.provider_stage_b',
    scheduledUpdateTime: '12:30',
    formConfigAbility: 'ability://com.across_devices_form.provider_stage_b/second_module/MainAbility',
    updateDuration: 2,
    defaultDimension: 2,
    supportDimensions: [2],
    continuableType: 2,
  }
  private form_05 = {
    bundleName: this.fa_bundle,
    moduleName: 'entry',
    abilityName: 'FormAbility',
    name: 'widget',
    description: 'fa entry module widget.',
    type: formInfo.FormType.JS,
    jsComponentName: 'widget',
    colorMode: formInfo.ColorMode.MODE_LIGHT,
    isDefault: true,
    updateEnabled: true,
    formVisibleNotify: true,
    relatedBundleName: '',
    scheduledUpdateTime: '13:30',
    formConfigAbility: '',
    updateDuration: 4,
    defaultDimension: 2,
    supportDimensions: [2],
    continuableType: 2,
  }
  private form_06 = {
    bundleName: this.fa_bundle,
    moduleName: 'entry',
    abilityName: 'FormAbility',
    name: 'form_second_widget',
    description: 'fa entry module second widget in FormAbility.',
    type: formInfo.FormType.JS,
    jsComponentName: 'form_second_widget',
    colorMode: formInfo.ColorMode.MODE_DARK,
    isDefault: false,
    updateEnabled: false,
    formVisibleNotify: false,
    relatedBundleName: '',
    scheduledUpdateTime: '14:30',
    formConfigAbility: '',
    updateDuration: 5,
    defaultDimension: 2,
    supportDimensions: [1,2],
    continuableType: 0,
  }
  private form_07 = {
    bundleName: this.fa_bundle,
    moduleName: 'entry',
    abilityName: 'SecondForm',
    name: 'second_widget',
    description: 'fa entry module second widget in SecondForm.',
    type: formInfo.FormType.JS,
    jsComponentName: 'second_widget',
    colorMode: formInfo.ColorMode.MODE_AUTO,
    isDefault: false,
    updateEnabled: true,
    formVisibleNotify: true,
    relatedBundleName: '',
    scheduledUpdateTime: '15:30',
    formConfigAbility: '',
    updateDuration: 6,
    defaultDimension: 2,
    supportDimensions: [2,3],
    continuableType: 2,
  }

  compareObj(src, dest) {
    for (const key in dest) {
      if (dest[key] instanceof Array) {
        if (dest[key].toString() != src[key].toString()) {
          return key;
        }
      } else if (src[key] != dest[key]) {
        return key;
      }
    }
    return '';
  }

  compareFormInfo(infoArray) : CompareResult[] {
    let result : CompareResult[] = [];
    if (!infoArray || infoArray.length == 0) {
      return result
    }
    let form;
    let dest;
    for (let info of infoArray) {
      form = ''
      if (info.bundleName == this.stage_b_bundle && info.moduleName == 'entry' && info.name == 'widget') {
        form = 'form_02'
        dest = this.form_02
      } else if (info.bundleName == this.stage_b_bundle && info.moduleName == 'entry'
      && info.name == 'second_widget') {
        form = 'form_03'
        dest = this.form_03
      } else if (info.bundleName == this.stage_b_bundle && info.moduleName == 'second_module'
      && info.name == 'widget') {
        form = 'form_04'
        dest = this.form_04
      } else if (info.bundleName == this.fa_bundle && info.name == 'widget') {
        form = 'form_05'
        dest = this.form_05
      } else if (info.bundleName == this.fa_bundle && info.name == 'form_second_widget') {
        form = 'form_06'
        dest = this.form_06
      } else if (info.bundleName == this.fa_bundle && info.name == 'second_widget') {
        form = 'form_07'
        dest = this.form_07
      }
      if (form) {
        result.push({ 'form': form, 'key': this.compareObj(info, dest)});
      }
    }

    return result
  }

  assertFormInfo(infoArray, expectForms: Set<string>) {
    let message: string = '';
    let compareResult = this.compareFormInfo(infoArray)
    if (compareResult.length == 0) {
      return message
    }

    let assertResult = true;
    compareResult.forEach((value) => {
      if (expectForms.has(value.form) && value.key) {
        assertResult = false
      }
      message += value.form + ':' + (value.key ? value.key : 'pass') + '\n'
      expectForms.delete(value.form)
    })

    if (expectForms.size != 0) {
      assertResult = false;
    }
    message = assertResult ? 'pass' : message;
    return message
  }

}