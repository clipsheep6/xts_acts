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
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import { Hypium } from '@ohos/hypium';
import testsuite from '../test/List.test';

const TAG1 = 'newRule:ByCallnBackground:TestAbility:';
export default class TestAbility extends Ability {
    onCreate(want, launchParam) {
        console.log(TAG1 + 'onCreate');

        globalThis.abilityWant = want;
        globalThis.testContext = this.context;
        globalThis.isBackground = false;

        var abilityDelegator: any;
        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
        var abilityDelegatorArguments: any;
        abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments();
        console.info('start run testcase!!!');
        Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite);
    }

    onDestroy() {
        console.log(TAG1 + 'onDestroy');
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log(TAG1 + 'onWindowStageCreate');

        windowStage.loadContent('pages/One', (err, data) => {
            if (err.code) {
                console.log(TAG1 + 'loadContent err : ' + err.code);
                return;
            }
            console.log(TAG1 + 'loadContent success!');
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log(TAG1 + 'onWindowStageDestroy');
    }

    onForeground() {
        // Ability has brought to foreground
        globalThis.isBackground = false;
        console.log(TAG1 + 'onForeground');
    }

    onBackground() {
        // Ability has back to background
        globalThis.isBackground = true;
        console.log(TAG1 + 'onBackground');
    }
};