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

import hilog from '@ohos.hilog';
import formInfo from '@ohos.app.form.formInfo';
import formObserver from '@ohos.app.form.formObserver';
import { BusinessError } from '@ohos.base'
import common from '@ohos.app.ability.common';
import formHost from '@ohos.app.form.formHost';


interface FormStartData {
  name: string,
  visibility: boolean,
  temporary: boolean,
  location?: number
}

let formStartData = AppStorage.get('formStartData') as FormStartData;

@Entry()
@Component
struct Index {
  @State accessoryFormId: string = '';
  @State runningFormLocation: string = '';

  build() {
    Row() {
      Column() {
        Text(`RunningFormInfo FormLocation:${this.runningFormLocation}`)
          .id('runningLocation_ability_text')
          .onClick(async () => {
            formObserver.getRunningFormInfos('com.example.hitsformsetformlocationtest')
              .then((data: formInfo.RunningFormInfo[]) => {
                console.log(`formObserver getRunningFormInfos, data: ${JSON.stringify(data)}`);
                this.runningFormLocation = data[0]?.formLocation?.toString();
              })
              .catch((error: BusinessError) => {
                console.error(`formObserver getRunningFormInfos error, code: ${error.code}, message: ${error.message}`);
              });
          })
        Text('FormInfo update')
          .id('updateLocation_ability_text')
          .onClick(() => {
            try {
              formHost.updateFormLocation(this.accessoryFormId, 4);
            } catch (e) {
              console.error('formHost updateFormLocation error', e);
            }
          })
        Text('FormInfo update error value')
          .id('updateLocation_ability_text_error')
          .onClick(() => {
            try {
              formHost.updateFormLocation(this.accessoryFormId, 9);
            } catch (e) {
              console.error('formHost updateFormLocation error', e);
            }
          })
        Text('close context')
          .id('formLocation_ability_close')
          .onClick(async () => {
            await formHost.deleteForm(this.accessoryFormId);
            this.getUIContext();
            let context = getContext(this) as common.UIAbilityContext;
            context.terminateSelf();
          })
        FormComponent({
          id: 0,
          name: formStartData.name,
          bundle: 'com.example.hitsformsetformlocationhap',
          ability: 'EntryFormAbility',
          module: 'entry',
          temporary: formStartData.temporary,
          want: {
            parameters: {
              'ohos.extra.param.key.form_location': formStartData.location
            }
          }
        })
          .onAcquired((formInfo:FormCallbackInfo) => {
            hilog.info(0x0000, 'testTag', '%{public}s', `FormComponent formid ${formInfo.id}`);
            this.accessoryFormId = formInfo.id.toString();
          })
          .visibility(formStartData.visibility ? Visibility.Visible : Visibility.Hidden)
          .width(200)
          .height(200)
      }
      .width('100%')
    }
  }
}