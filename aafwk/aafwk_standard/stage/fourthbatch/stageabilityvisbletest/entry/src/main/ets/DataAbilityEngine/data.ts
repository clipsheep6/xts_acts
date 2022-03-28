/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
import dataRdb from '@ohos.data.rdb'
import dataAbility from '@ohos.data.dataability'

const TABLE_NAME = 'book'
const STORE_CONFIG = { name: 'book.db', encryptKey: new Uint8Array([]) }
const SQL_CREATE_TABLE = 'CREATE TABLE IF NOT EXISTS book(id INTEGER PRIMARY KEY AUTOINCREMENT,' +
' name TEXT NOT NULL, age INTEGER, introduction TEXT NOT NULL)'
let rdbStore = undefined

export default {
    onInitialized(abilityInfo) {
        console.info('DataAbilityEngine onInitialized,abilityInfo=' + abilityInfo.bundleName)
        dataRdb.getRdbStore(STORE_CONFIG, 1, (err, store) => {
            console.info('[data]getRdbStoreThen')
            store.executeSql(SQL_CREATE_TABLE, [])
            rdbStore = store
        });
    },
    insert(uri, valueBucket, callback) {
        console.info('DataAbility insert start')
        rdbStore.insert(TABLE_NAME, valueBucket, callback)
    },
    batchInsert(uri, valueBuckets, callback) {
        console.info('DataAbility batch insert start')
        for (let i = 0;i < valueBuckets.length; i++) {
            console.info('DataAbility batch insert i=' + i)
            if (i < valueBuckets.length - 1) {
                rdbStore.insert(TABLE_NAME, valueBuckets[i], (num: number) => {
                    console.info('DataAbility batch insert ret=' + num)
                })
            } else {
                rdbStore.insert(TABLE_NAME, valueBuckets[i], callback)
            }
        }
    },
    query(uri, columns, predicates, callback) {
        console.info('DataAbility query start')
        let rdbPredicates = dataAbility.createRdbPredicates(TABLE_NAME, predicates)
        rdbStore.query(rdbPredicates, columns, callback)
    },
    update(uri, valueBucket, predicates, callback) {
        console.info('DataAbilityupdate start')
        let rdbPredicates = dataAbility.createRdbPredicates(TABLE_NAME, predicates)
        rdbStore.update(valueBucket, rdbPredicates, callback)
    },
    delete(uri, predicates, callback) {
        console.info('DataAbilitydelete start')
        let rdbPredicates = dataAbility.createRdbPredicates(TABLE_NAME, predicates)
        rdbStore.delete(rdbPredicates, callback)
    }
};