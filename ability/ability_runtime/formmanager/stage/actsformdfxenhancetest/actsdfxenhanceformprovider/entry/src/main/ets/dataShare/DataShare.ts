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

import rdb from '@ohos.data.relationalStore';
import DataShareExtensionAbility from '@ohos.application.DataShareExtensionAbility';
import hilog from '@ohos.hilog';

const DB_NAME = 'DB00.db';
const TBL_NAME = 'TBL00';
const DDL_TBL_CREATE = 'CREATE TABLE IF NOT EXISTS ' + TBL_NAME +
' (cityId INTEGER PRIMARY KEY, cityName TEXT, cityTemperature INTEGER)';
let rdbStore;

export default class DataShareExtAbility extends DataShareExtensionAbility {
  async onCreate(want, callback) {
    rdbStore = await rdb.getRdbStore(this.context, {
      name: DB_NAME, securityLevel: rdb.SecurityLevel.S1
    });
    await rdbStore.executeSql(DDL_TBL_CREATE, []);
    let err = {
      'code': 0
    };
    callback(err);
  }

  async update(uri, predicates, value, callback) {
    if (predicates === null || predicates === undefined) {
      return;
    }
    try {
      await rdbStore.update(TBL_NAME, value, predicates, function (err, ret) {
        if (callback !== undefined) {
          callback(err, ret);
        }
      });
    } catch (error) {
      hilog.info(0x0000, 'dataShareTag', 'update : err : %{public}s', JSON.stringify(error) ?? '');
    }
  }
};