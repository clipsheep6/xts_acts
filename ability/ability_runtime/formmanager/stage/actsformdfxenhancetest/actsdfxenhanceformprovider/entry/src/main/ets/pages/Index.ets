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

import common from '@ohos.app.ability.common';
import dataShare from '@ohos.data.dataShare';
import prompt from '@ohos.promptAction';
import base from '@ohos.base';
import commonEventManager from '@ohos.commonEventManager';
import { ValuesBucket, ValueType } from '@ohos.data.ValuesBucket';
import hilog from '@ohos.hilog';

let CityName = '沈阳';
let CityTemperature = '15';
let ConditionID = '';
let context: common.UIAbilityContext;

function PublishCityName(context: common.UIAbilityContext): void {
  dataShare.createDataShareHelper(context, "datashareproxy://com.acts.actsdfxenhanceformprovider", {
    isProxy: true
  }, (err, dataHelper) => {
    let dataShareHelper = dataHelper;
    let conditionID = ConditionID;
    if (err !== undefined) {
      prompt.showToast({ message: 'createDataShareHelper:' + err.message, duration: 5000 });
    } else {
      let publishedItemData: Array<dataShare.PublishedItem> = [
        { key: 'cityName', data: JSON.stringify(CityName), subscriberId: conditionID },
      ];
      dataShareHelper.publish(publishedItemData, 'com.acts.actsdfxenhanceformprovider').then((data: Object) => {
        commonEventManager.publish('FMS_updateForm_commonEvent', async () => {
        })
        prompt.showToast(
          { message: `[cz] publish success CityName ${CityName}`, duration: 5000 });
      }).catch((err: base.BusinessError<void>) => {
        prompt.showToast({ message: `publish err: ${JSON.stringify(err)}`, duration: 5000 });
      });
    }
  });
}

function PublishTemperature(context: common.UIAbilityContext): void {
  dataShare.createDataShareHelper(context, "datashareproxy://com.acts.actsdfxenhanceformprovider", {
    isProxy: true
  }, (err, dataHelper) => {
    let dataShareHelper = dataHelper;
    let conditionID = ConditionID;
    if (err !== undefined) {
      prompt.showToast({ message: 'createDataShareHelper:' + err.message, duration: 5000 });
    } else {
      let publishedItemData: Array<dataShare.PublishedItem> = [
        { key: 'cityTemperature', data: JSON.stringify(CityTemperature), subscriberId: conditionID },
      ];
      dataShareHelper.publish(publishedItemData, 'com.acts.actsdfxenhanceformprovider').then((data: Object) => {
        prompt.showToast(
          { message: `[cz] publish success CityTemperature ${CityTemperature}`, duration: 5000 });
      }).catch((err: base.BusinessError<void>) => {
        prompt.showToast({ message: `publish err: ${JSON.stringify(err)}`, duration: 5000 });
      });
    }
  });
}

function RDBTemperature(context: common.UIAbilityContext): void {

  dataShare.createDataShareHelper(context, 'datashareproxy://com.acts.actsdfxenhanceformprovider', { isProxy: true })
    .then(data => {
      let dataShareHelper = data;
      let rdata: ValuesBucket = {
        cityTemperature: CityTemperature
      };
      dataShareHelper.insert("datashareproxy://com.acts.actsdfxenhanceformprovider/test", rdata).then((data) => {
        prompt.showToast(
          { message: `publish success CityTemperature ${CityTemperature}`, duration: 5000 });
      }).catch((err: base.BusinessError<void>) => {
        prompt.showToast({ message: `publish err: ${JSON.stringify(err)}`, duration: 5000 });
      });
    })
}


@Entry
@Component
struct Index {
  @State message: string = 'Hello World'

  aboutToAppear() {
    context = getContext(this) as common.UIAbilityContext;
    let testcase = AppStorage.get<string>('testcase') as string;
    let formId = AppStorage.get<string>('formId') as string;
    if (testcase === 'Acts_HiDumpFormSubscribedKeysByFormId_0300') {
      ConditionID = formId;
      PublishCityName(context);
    } else if (testcase === 'Acts_HiDumpFormSubscribedKeysByFormId_0400') {
      ConditionID = formId;
      PublishCityName(context);
    } else if (testcase === 'Acts_HiDumpFormSubscribedKeysByFormId_0500') {
      ConditionID = formId;
      PublishTemperature(context);
      PublishCityName(context);
    } else if (testcase === 'Acts_HiDumpFormSubscribedKeysByFormId_0600') {
      ConditionID = formId;
      RDBTemperature(context);
      PublishCityName(context);
    }
  }

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
      }
      .width('100%')
    }
    .height('100%')
  }
}
