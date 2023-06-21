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
import commonEvent from '@ohos.commonEventManager'
import formInfo from '@ohos.app.form.formInfo'
import formHost from '@ohos.app.form.formHost'
var ACTS_WaitFormId = {
  events: ['ACTS_FirstAppFirstAbilityWait']
};
@Entry
@Component
struct Index {
  @StorageLink('formId') formId: number = 0;
  @State message: string = 'entry';
  @State bundleName: string = "com.example.providerform";
  @State abilityName: string = "EntryFormAbility";
  @State moduleName: string = "entry";
  @State formName: string = "widget";
  @State isShow: boolean = true;
  @State dimension: formInfo.FormDimension = formInfo.FormDimension.Dimension_2_2;

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
        FormComponent({
          id: 0,
          name: this.formName,
          bundle: this.bundleName,
          ability: this.abilityName,
          module: this.moduleName,
          dimension: this.dimension,
        })
          .allowUpdate(true)
          .visibility(Visibility.Visible)
          .onAcquired(async(form) => this.HandleForm(form))
          .onError((err) => {
            console.error(`====>failed to add form, err: ${JSON.stringify(err)}`)
          })
          .size({ width: 360, height: 180 })
      }
      .alignItems(HorizontalAlign.Start)
      .width('100%')
    }
  }

  async HandleForm(form) {
    setTimeout(() => {
      this.HandleNotify(form.id);
    }, 50);
    let commonEventData = {
      parameters: {
        "formId": form.id
      }
    };
    setTimeout(() => {
      commonEvent.publish("ACTS_FirstAppFirstAbilityFirst", commonEventData, () => {});
    }, 150);
    var tempPtr = this;
    await commonEvent.createSubscriber(ACTS_WaitFormId).then((data) => {
      var subscriber = data;
      var flag = false;
      commonEvent.subscribe(subscriber, subscribeCallBack);
      function subscribeCallBack(err, data) {
        if (data.event == 'ACTS_FirstAppFirstAbilityWait') {
          flag = true;
          setTimeout(() => {
            tempPtr.HandleNotify(form.id);
          }, 50);
          setTimeout(() => {
            commonEvent.publish("ACTS_FirstAppFirstAbilitySecond", {}, () => {});
          }, 150);
          setTimeout(() => {
            commonEvent.unsubscribe(subscriber, function () {});
          }, 200);
        }
      }
      setTimeout(() => {
        if (flag == false) {
          commonEvent.unsubscribe(subscriber, function () {});
        }
      }, 1000);
    })
  }

  HandleNotify(formId) {
    switch (globalThis.isVisible) {
      case 'notifyVisible' :
        formHost.notifyVisibleForms([formId + ""]);
        break;
      case 'notifyInvisible' :
        formHost.notifyInvisibleForms([formId + ""]);
        break;
      default :
        console.log('====>notify null');
        break;
    }
  }
}