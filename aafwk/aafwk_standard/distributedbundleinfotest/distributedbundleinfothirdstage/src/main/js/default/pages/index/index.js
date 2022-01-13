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
        console.info("ResidentProcessThirdStage onInit");
        this.title = "ResidentProcessThirdStage";
    },
    onReady() {
        console.info("ResidentProcessThirdStage onReady");
    },
    onActive() {
        console.info("ResidentProcessThirdStage onActive");
    },
    onShow() {
        console.info("ResidentProcessThirdStage onShow");
    },
    onInactive() {
        console.info("ResidentProcessThirdStage onInactive");
    },
    onHide() {
        console.info("ResidentProcessThirdStage onHide");
    },
    onDestroy() {
        console.info("ResidentProcessThirdStage onDestroy");
    },
    onBackPress() {
        console.info("ResidentProcessThirdStage onBackPress");
    },
    onNewRequest() {
        console.info("ResidentProcessThirdStage onNewRequest");
    },
    onStartContinuation() {
        console.info("ResidentProcessThirdStage onStartContinuation");
    },
    onSaveData(value) {
        console.info("ResidentProcessThirdStage onSaveData:" + JSON.stringify(value));
    },
    onRestoreData(value) {
        console.info("ResidentProcessThirdStage onRestoreData:" + JSON.stringify(value));
    },
    onCompleteContinuation(code) {
        console.info("ResidentProcessThirdStage onCompleteContinuation:" + JSON.stringify(code));
    },
    onConfigurationUpdated(configuration) {
        console.info("ResidentProcessThirdStage onConfigurationUpdated:" + JSON.stringify(configuration));
    },
    onStart(want) {
        console.info("ResidentProcessThirdStage onStart");
    },
    onConnect(want) {
        console.info("ResidentProcessThirdStage onConnect");
    },
    onDisconnect(want) {
        console.info("ResidentProcessThirdStage onDisconnect");
    },
    onReconnect(want) {
        console.info("ResidentProcessThirdStage onReconnect");
    },
    onCommand(want, isRestart, startId) {
        console.info("ResidentProcessThirdStage onCommand");
    },
    onStop() {
        console.info("ResidentProcessThirdStage onStop");
    },
    OnAbilityConnectDone(element, remoteObject, resultCode) {
        console.info("ResidentProcessThirdStage OnAbilityConnectDone");
    },
    onAbilityDisconnectDone(element, resultCode) {
        console.info("ResidentProcessThirdStage onAbilityDisconnectDone");
    }
}
