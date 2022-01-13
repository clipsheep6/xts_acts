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
        console.info("ResidentProcessSecondStage onInit");
        this.title = "ResidentProcessSecondStage";
    },
    onReady() {
        console.info("ResidentProcessSecondStage onReady");
    },
    onActive() {
        console.info("ResidentProcessSecondStage onActive");
    },
    onShow() {
        console.info("ResidentProcessSecondStage onShow");
    },
    onInactive() {
        console.info("ResidentProcessSecondStage onInactive");
    },
    onHide() {
        console.info("ResidentProcessSecondStage onHide");
    },
    onDestroy() {
        console.info("ResidentProcessSecondStage onDestroy");
    },
    onBackPress() {
        console.info("ResidentProcessSecondStage onBackPress");
    },
    onNewRequest() {
        console.info("ResidentProcessSecondStage onNewRequest");
    },
    onStartContinuation() {
        console.info("ResidentProcessSecondStage onStartContinuation");
    },
    onSaveData(value) {
        console.info("ResidentProcessSecondStage onSaveData:" + JSON.stringify(value));
    },
    onRestoreData(value) {
        console.info("ResidentProcessSecondStage onRestoreData:" + JSON.stringify(value));
    },
    onCompleteContinuation(code) {
        console.info("ResidentProcessSecondStage onCompleteContinuation:" + JSON.stringify(code));
    },
    onConfigurationUpdated(configuration) {
        console.info("ResidentProcessSecondStage onConfigurationUpdated:" + JSON.stringify(configuration));
    },
    onStart(want) {
        console.info("ResidentProcessSecondStage onStart");
    },
    onConnect(want) {
        console.info("ResidentProcessSecondStage onConnect");
    },
    onDisconnect(want) {
        console.info("ResidentProcessSecondStage onDisconnect");
    },
    onReconnect(want) {
        console.info("ResidentProcessSecondStage onReconnect");
    },
    onCommand(want, isRestart, startId) {
        console.info("ResidentProcessSecondStage onCommand");
    },
    onStop() {
        console.info("ResidentProcessSecondStage onStop");
    },
    OnAbilityConnectDone(element, remoteObject, resultCode) {
        console.info("ResidentProcessSecondStage OnAbilityConnectDone");
    },
    onAbilityDisconnectDone(element, resultCode) {
        console.info("ResidentProcessSecondStage onAbilityDisconnectDone");
    }
}
