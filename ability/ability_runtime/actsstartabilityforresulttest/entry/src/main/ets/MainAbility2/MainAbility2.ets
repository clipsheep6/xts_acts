import hilog from '@ohos.hilog';
import commonEvent from '@ohos.commonEvent'
import Window from '@ohos.window'
import Ability from '@ohos.app.ability.Ability';
import UIAbility from '@ohos.app.ability.UIAbility';

export default class MainAbility2 extends UIAbility {
    onCreate(want, launchParam) {
        console.log('MainAbility2 onCreate')
    }

    onDestroy() {
        console.log('MainAbility2 onDestroy')
    }

    onWindowStageCreate(windowStage: Window.WindowStage) {
        windowStage.loadContent('MainAbility2/pages/index', (err, data) => {
            if (err.code) {
                hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
                return;
            }
        });
        globalThis.context2 = this.context

    }

    onWindowStageDestroy() {
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'TestAbility onWindowStageDestroy');
    }

    onForeground() {
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'TestAbility onForeground');
    }

    onBackground() {
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'TestAbility onBackground');
    }
}