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
const injectRef = Object.getPrototypeOf(global) || global
injectRef.regeneratorRuntime = require("@babel/runtime/regenerator")

export default {
    data: {
        title: ""
    },
    onInit() {
        console.info("ResidentProcessFirstStage onInit");
        this.title = "ResidentProcessFirstStage";
    },
    onReady() {
        console.info("ResidentProcessFirstStage onReady");
    },
    onActive() {
        console.info("ResidentProcessFirstStage onActive");
    },
    onShow() {
        console.info("ResidentProcessFirstStage onShow");
    },
    onInactive() {
        console.info("ResidentProcessFirstStage onInactive");
    },
    onHide() {
        console.info("ResidentProcessFirstStage onHide");
    },
    onDestroy() {
        console.info("ResidentProcessFirstStage onDestroy");
    },
    onBackPress() {
        console.info("ResidentProcessFirstStage onBackPress");
    },
    onNewRequest() {
        console.info("ResidentProcessFirstStage onNewRequest");
    },
    onStartContinuation() {
        console.info("ResidentProcessFirstStage onStartContinuation");
    },
    onSaveData(value) {
        console.info("ResidentProcessFirstStage onSaveData:" + JSON.stringify(value));
    },
    onRestoreData(value) {
        console.info("ResidentProcessFirstStage onRestoreData:" + JSON.stringify(value));
    },
    onCompleteContinuation(code) {
        console.info("ResidentProcessFirstStage onCompleteContinuation:" + JSON.stringify(code));
    },
    onConfigurationUpdated(configuration) {
        console.info("ResidentProcessFirstStage onConfigurationUpdated:" + JSON.stringify(configuration));
    },
    onStart(want) {
        console.info("ResidentProcessFirstStage onStart");
    },
    onConnect(want) {
        console.info("ResidentProcessFirstStage onConnect");
    },
    onDisconnect(want) {
        console.info("ResidentProcessFirstStage onDisconnect");
    },
    onReconnect(want) {
        console.info("ResidentProcessFirstStage onReconnect");
    },
    onCommand(want, isRestart, startId) {
        console.info("ResidentProcessFirstStage onCommand");
    },
    onStop() {
        console.info("ResidentProcessFirstStage onStop");
    },
    OnAbilityConnectDone(element, remoteObject, resultCode) {
        console.info("ResidentProcessFirstStage OnAbilityConnectDone");
    },
    onAbilityDisconnectDone(element, resultCode) {
        console.info("ResidentProcessFirstStage onAbilityDisconnectDone");
    }
}
