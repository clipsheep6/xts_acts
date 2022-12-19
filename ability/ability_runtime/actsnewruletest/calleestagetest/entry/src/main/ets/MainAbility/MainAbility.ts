/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
import Ability from '@ohos.application.Ability';
import commonEvent from '@ohos.commonEvent';

var subscriberInfo = {
    events: ['TestFinish'],
};

var subscriberInfo2 = {
    events: ['StartWindowMode'],
};
var g_subscriber = null;

function subscribeCallBack(err, data) {
    console.log('com.example.callee_stage subscribeCallBack  terminateSelf===========================================')
    globalThis.mainContext.terminateSelf();
}

const TAG1 = 'newRule:callee_stage:MainAbility:';
export default class MainAbility extends Ability {
    onCreate(want, launchParam) {
        console.log(TAG1 + "onCreate");
        globalThis.mainContext = this.context;

        commonEvent.createSubscriber(subscriberInfo, (err, subscriber) => {
            if (err.code) {
                console.info("TestFinish subscriber err" + JSON.stringify(err));
            } else {
                console.info("TestFinish subscriber start" + JSON.stringify(err));
                commonEvent.subscribe(subscriber, subscribeCallBack)
            }
        })
    }

    onDestroy() {
        console.log(TAG1 + "onDestroy");
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log(TAG1 + "onWindowStageCreate");

        windowStage.loadContent('pages/index', (err, data) => {
            if (err.code) {
                console.log(TAG1 + 'loadContent err : ' + err.code);
                return;
            }
            console.log(TAG1 + 'loadContent success!');
        });

        commonEvent.publish('CalleeWindowCreate', (err) => {
            console.log(`CalleeWindowCreate  ======>commonEvent publish TestFinish<======`)
        })
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log(TAG1 + "onWindowStageDestroy");
    }

    onForeground() {
        // Ability has brought to foreground
        console.log(TAG1 + "onForeground");
    }

    onBackground() {
        // Ability has back to background
        console.log(TAG1 + "onBackground");
    }
};
