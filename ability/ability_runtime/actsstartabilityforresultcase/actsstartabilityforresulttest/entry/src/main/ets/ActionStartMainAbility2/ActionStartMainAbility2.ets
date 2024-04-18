/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

 
import hilog from '@ohos.hilog';
import Window from '@ohos.window'
import UIAbility from '@ohos.app.ability.UIAbility';
import CommonEventManager from '@ohos.commonEventManager';

export default class ActionStartMainAbility2 extends UIAbility {
    resultNum:number = 0;
    optionsData = '';
    onCreate(want, launchParam) {
        console.log('ActionStartMainAbility2 onCreate')
        this.optionsData = this.optionsData + '_onCreate';
    }

    onDestroy() {
        console.log('ActionStartMainAbility2 onDestroy')

    }

    onWindowStageCreate(windowStage: Window.WindowStage) {
        this.optionsData = this.optionsData + '_onWindowStageCreate';

        windowStage.loadContent('ActionStartMainAbility2/pages/index', (err, data) => {
            if (err.code) {
                hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
                return;
            }
        });
       globalThis.ActionStartMainAbility2Context = this.context;
    }

    onWindowStageDestroy() {
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'TestAbility onWindowStageDestroy');
    }

    onForeground() {
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'TestAbility onForeground');
        this.optionsData = this.optionsData + '_onForeground';
        //公共事件相关信息
        var options = {
            code: 0,			 //公共事件的初始代码
            data: this.optionsData,//公共事件的初始数据
            isOrdered: true	 //有序公共事件
        }

        //发布公共事件回调
        function publishCallBack(err) {
            if (err) {
                console.error("testTag publish failed " + JSON.stringify(err));
            } else {
                console.info("testTag publish");
            }
        }

        //发布公共事件
        try {
            CommonEventManager.publish("com.acts.startabilityforresult.action", options, publishCallBack);
        } catch (err) {
            console.error('publish failed, catch error' + JSON.stringify(err));
        }
    }

    onBackground() {
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'TestAbility onBackground');
    }
}