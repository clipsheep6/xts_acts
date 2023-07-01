import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import window from '@ohos.window';
import commonEvent from '@ohos.commonEventManager';

let message;
let commonEventData = {
  parameters:{
    message:message,
  }
};
export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability4 onCreate');
    console.info('Ability4 onCreate' + JSON.stringify(want));
    let actionStr = want.action;
    let typestr = want.type;
    if ( actionStr === 'ohos.nfc.tag.action.TAG_FOUND' && typestr === 'a' ) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'aAbility ok');
      commonEventData.parameters.message = 'select';
      commonEvent.publish('ACTS_CROSS_CALL_EVENT', commonEventData, (err) => {
        console.info('====>' + actionStr + ' apublish err:' + JSON.stringify(err));
        //globalThis.terminate();
      });
    }
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability4 onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability4 onWindowStageCreate');

    windowStage.loadContent('pages/Index', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, 'testTag', 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
    });
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability4 onWindowStageDestroy');
  }

  onForeground() {
    // Ability has brought to foreground
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability4 onForeground');
  }

  onBackground() {
    // Ability has back to background
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability4 onBackground');
  }
}
