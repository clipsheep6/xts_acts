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
import commonEvent from '@ohos.commonevent'

const injectRef = Object.getPrototypeOf(global) || global
injectRef.regeneratorRuntime = require('@babel/runtime/regenerator')

export default {
    data: {
        title: ""
    },
    onInit() {
        console.info('ACTS_abilityStartSettingApp onInit');
        this.title = "ACTS_abilityStartSettingApp";
    },
    onReady() {
        console.info('ACTS_abilityStartSettingApp onReady');
    },
    onActive() {
        console.info('ACTS_abilityStartSettingApp onActive');
    },
    onShow() {
        console.info('ACTS_abilityStartSettingApp onShow');
    },
    onInactive() {
        console.info('ACTS_abilityStartSettingApp onInactive');
    },
    onHide() {
        console.info('ACTS_abilityStartSettingApp onHide');
    },
    onDestroy() {
        console.info('ACTS_abilityStartSettingApp onDestroy');
    },
    onBackPress() {
        console.info('ACTS_abilityStartSettingApp onBackPress');
    },
    onNewRequest() {
        console.info('ACTS_abilityStartSettingApp onNewRequest');
    },
    onStartContinuation() {
        console.info('ACTS_abilityStartSettingApp onStartContinuation');
    },
    onSaveData(value) {
        console.info('ACTS_abilityStartSettingApp onSaveData:' + JSON.stringify(value));
    },
    onRestoreData(value) {
        console.info('ACTS_abilityStartSettingApp onRestoreData:' + JSON.stringify(value));
    },
    onCompleteContinuation(code) {
        console.info('ACTS_abilityStartSettingApp onCompleteContinuation:' + JSON.stringify(code));
    },
    onConfigurationUpdated(configuration) {
        console.info('ACTS_abilityStartSettingApp onConfigurationUpdated:' + JSON.stringify(configuration));
    }
}