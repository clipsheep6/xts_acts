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
import ServiceExtension from '@ohos.application.ServiceExtension'
import AppManager from '@ohos.application.AppManager'
import commonEvent from '@ohos.commonevent'

var conn = -1;
let callBack = {
    onForegroundApplicationChanged: function(appStateData) {
        console.log('ServiceAbility onForegroundApplicationChanged, bundle:' + appStateData.bundleName);
        console.log('ServiceAbility onForegroundApplicationChanged, uid:' + appStateData.uid);
        console.log('ServiceAbility onForegroundApplicationChanged, state:' + appStateData.state);
    },

    onAbilityStateChanged: function(abilityStateData) {
        console.log('ServiceAbility onAbilityStateChanged, bundle:' + abilityStateData.bundleName);
        console.log('ServiceAbility onAbilityStateChanged, abilityName:' + abilityStateData.abilityName);
        console.log('ServiceAbility onAbilityStateChanged, pid:' + abilityStateData.pid);
        console.log('ServiceAbility onAbilityStateChanged, uid:' + abilityStateData.uid);
        console.log('ServiceAbility onAbilityStateChanged, state:' + abilityStateData.state);
    },

    onExtensionStateChanged: function(abilityStateData) {
        console.log('ServiceAbility onExtensionStateChanged, bundle:' + abilityStateData.bundleName);
        console.log('ServiceAbility onExtensionStateChanged, abilityName:' + abilityStateData.abilityName);
        console.log('ServiceAbility onExtensionStateChanged, pid:' + abilityStateData.pid);
        console.log('ServiceAbility onExtensionStateChanged, uid:' + abilityStateData.uid);
        console.log('ServiceAbility onExtensionStateChanged, state:' + abilityStateData.state);
    },

    onProcessCreated: function(processData) {
        console.log('ServiceAbility onProcessCreated, bundle:' + processData.bundleName);
        console.log('ServiceAbility onProcessCreated, pid:' + processData.pid);
        console.log('ServiceAbility onProcessCreated, uid:' + processData.uid);
    },

    onProcessDied: function(processData) {
        console.log('jws success onProcessDied, bundle:' + processData.bundleName);
        console.log('jws success onProcessDied, pid:' + processData.pid);
        console.log('jws success onProcessDied, uid:' + processData.uid);
    },
}

export default class ServiceAbility extends ServiceExtension {
    onCreate(want) {
        console.log('ServiceAbilityappb onCreate, want: ' + want.abilityName);
    }

    onRequest(want, startId) {
        console.log('ServiceAbility onRequest, want: ' + want.abilityName + ', startId: ' + startId);

        console.log('ServiceAbility registerApplicationStateObserver begin');
        conn = AppManager.registerApplicationStateObserver(callBack);
        console.log('ServiceAbility registerApplicationStateObserver end, conn: ' + conn);
    }

    onConnect(want) {
        console.log('ServiceAbilityappb onConnect, want:' + want.abilityName);
        //发事件，通知test
        commonEvent.publish("ACTS_ConnectAbility_0200_CommonEvent", () => {
            console.log('===========>ServiceAbility ConnectAbility_0200 success======>' );
        });

    }

    onDisconnect(want) {
        console.log('ServiceAbilityappb onDisconnect, want:' + want.abilityName);

        console.log('ServiceAbility unregister begin, conn: ' + conn);
//        AppManager.unregisterApplicationStateObserver(conn, (error) => {
//            console.log('ServiceAbility unregister error: ' + error.code + ', msg: ' + error.message);
//        });
//        console.log('ServiceAbility unregister end, conn: ' + conn);
    }

    onDestroy() {
        console.log('ServiceAbility onDestroy');
    }
}