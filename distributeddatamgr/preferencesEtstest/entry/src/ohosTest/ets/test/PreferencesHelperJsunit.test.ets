/*
* Copyright (c) 2024 Huawei Device Co., Ltd.
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium'
import dataPreferences from '@ohos.data.preferences'
import common from "@ohos.app.ability.common";

let context: common.UIAbilityContext;
const NAME = 'test_preferences';
const KEY_TEST_STRING_ELEMENT = 'key_test_string';
let mPreferences;
export default function preferencesHelperTest(){
    describe('preferencesHelperTest', function () {
        beforeAll(async function () {
            console.info('beforeAll')
            context = AppStorage.Get<common.UIAbilityContext>("TestAbilityContext") as common.UIAbilityContext
        })

        afterAll(async function () {
            console.info('afterAll')
        })

        beforeEach(async function () {
            console.info('beforeEach')
            mPreferences = await dataPreferences.getPreferences(context, NAME);
        })
        
        afterEach(async function () {
            console.info('afterEach')
            await dataPreferences.deletePreferences(context, NAME);
        })
        /**
         * @tc.name testGetPreferencesHelper001
         * @tc.number SUB_DistributedData_Preference_SDK_PreferenceHelperEtsTest_3000
         * @tc.desc getPreferencesSync interface test
         * @tc.size MediumTest
         * @tc.type Function
         * @tc.level Level 2
         */
        it('testGetPreferencesHelper001', 0, async function () {
            mPreferences = await dataPreferences.getPreferences(context, NAME);
            await mPreferences.put('test', 2);
            await mPreferences.flush();
            var value = await mPreferences.get('test', 0);
            expect(value).assertEqual(2);
        })

        /**
         * @tc.name testGetPreferencesHelper002
         * @tc.number SUB_DistributedData_Preference_SDK_PreferenceHelperEtsTest_2300
         * @tc.desc getPreferences interface test
         * @tc.size MediumTest
         * @tc.type Function
         * @tc.level Level 2
         */
        it('testGetPreferencesHelper002', 0, async function (done) {
            const promise = dataPreferences.getPreferences(context, NAME);
            await promise.then(async (pref) => {
                await pref.put('test', 2);
                await pref.flush();
                var value = await mPreferences.get('test', 0);
                expect(value).assertEqual(2);
            }).catch((err) => {
                expect(null).assertFail();
            });
            done();
        })

        /**
         * @tc.name testRemovePreferencesFromCache001
         * @tc.number SUB_DistributedData_Preference_SDK_PreferenceHelperEtsTest_2100
         * @tc.desc removePreferencesFromCache interface test
         * @tc.size MediumTest
         * @tc.type Function
         * @tc.level Level 2
         */
        it('testRemovePreferencesFromCache001', 0, async function (done) {
            let perf = await dataPreferences.getPreferences(context, NAME);
            perf = null;
            const promise = dataPreferences.removePreferencesFromCache(context, NAME);
            await promise.then((pref) => {
            }).catch((err) => {
                expect(null).assertFail();
            });
            done();
        })

        /**
         * @tc.name testDeletePreferencesHelper002
         * @tc.number SUB_DistributedData_Preference_SDK_PreferenceHelperEtsTest_2200
         * @tc.desc deletePreferences interface test
         * @tc.size MediumTest
         * @tc.type Function
         * @tc.level Level 2
         */
        it('testDeletePreferencesHelper002', 0, async function (done) {
            let perf = await dataPreferences.getPreferences(context, NAME);
            perf = null;
            const promise = dataPreferences.deletePreferences(context, NAME);
            await promise.then((pref) => {
            }).catch((err) => {
                expect(null).assertFail();
            });
            done();
        })

        /**
         * @tc.name testPreferencesRegisterObserver001
         * @tc.number SUB_DistributedData_Preference_SDK_PreferenceHelperEtsTest_1000
         * @tc.desc put interface test
         * @tc.size MediumTest
         * @tc.type Function
         * @tc.level Level 2
         */
        it('testPreferencesRegisterObserver001', 0, async function () {
            await mPreferences.clear();
            var observer = function (key) {
                console.info('testPreferencesRegisterObserver001 key' + key);
                expect('abcd').assertEqual(key);
            };
            await mPreferences.on('change', observer);
            await mPreferences.put(KEY_TEST_STRING_ELEMENT, "abcd");
        })

        /**
         * @tc.name testPreferencesRegisterObserver002
         * @tc.number SUB_DistributedData_Preference_SDK_PreferenceHelperEtsTest_1100
         * @tc.desc repeat on interface test
         * @tc.size MediumTest
         * @tc.type Function
         * @tc.level Level 2
         */
        it('testPreferencesRegisterObserver002', 0, async function () {
            await mPreferences.clear();
            var observer = function (key) {
                console.info('testPreferencesRegisterObserver002 key' + key);
                expect('abc').assertEqual(key);
            };
            await mPreferences.on('change', observer);
            await mPreferences.on('change', observer);
            await mPreferences.put(KEY_TEST_STRING_ELEMENT, "abc");
        })

        /**
         * @tc.name testPreferencesUnRegisterObserver001
         * @tc.number SUB_DistributedData_Preference_SDK_PreferenceHelperEtsTest_0900
         * @tc.desc off interface test
         * @tc.size MediumTest
         * @tc.type Function
         * @tc.level Level 2
         */
        it('testPreferencesUnRegisterObserver001', 0, async function () {
            var observer = function (key) {
                console.info('testPreferencesUnRegisterObserver001 key' + key);
                expect('').assertEqual(key);
            };
            await mPreferences.on('change', observer);
            await mPreferences.off('change', observer);
            await mPreferences.put(KEY_TEST_STRING_ELEMENT, "abc");
        })

        /**
         * @tc.name testGetPreferencesSyncinterface001
         * @tc.number SUB_DistributedData_Preference_SDK_PreferenceHelperEtsTest_3100
         * @tc.desc getPreferencesSync interface test
         * @tc.size MediumTest
         * @tc.type Function
         * @tc.level Level 2
         */
        it('testGetPreferencesSyncinterface001', 0, async function () {
            mPreferences = dataPreferences.getPreferencesSync(context, { name: 'test_preferences' });
            mPreferences.putSync("test", 2);
            mPreferences.flushSync();
            var value = mPreferences.getSync('test', 0);
            expect(value).assertEqual(2);
        })

    })
}