/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import window from '@ohos.window';

const TAG = '[EntryAbility]'

export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    hilog.info(0x0000, TAG, 'testTag', '%{public}s', 'Ability onCreate');
    hilog.info(0x0000, TAG, 'testTag', '%{public}s', 'want param:' + JSON.stringify(want) ?? '');
    hilog.info(0x0000, TAG, 'testTag', '%{public}s', 'launchParam:' + JSON.stringify(launchParam) ?? '');
    if (want.parameters.parameters === 'Acts_SwitchUserExtension_1600') {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "ServiceExtensionAbility",
          parameters: {
            'parameters': 'Acts_SwitchUserExtension_1600',
          },
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
      })
    }

    globalThis.dialog = () => {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "SecondAbility"
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
      })
    };

    globalThis.systemAlert = () => {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "ServiceExtensionAbility",
          parameters:
          {
            "winType": window.WindowType.TYPE_SYSTEM_ALERT,
          },
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
      })
    };
    globalThis.inputMethod = () => {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "ServiceExtensionAbility",
          parameters:
          {
            "winType": window.WindowType.TYPE_INPUT_METHOD,
          },
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
      })
    };
    globalThis.statusBar = () => {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "ServiceExtensionAbility",
          parameters:
          {
            "winType": window.WindowType.TYPE_STATUS_BAR,
          },
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
      })
    };
    globalThis.panel = () => {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "ServiceExtensionAbility",
          parameters:
          {
            "winType": window.WindowType.TYPE_PANEL,
          },
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
      })
    };
    globalThis.keyguard = () => {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "ServiceExtensionAbility",
          parameters:
          {
            "winType": window.WindowType.TYPE_KEYGUARD,
          },
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
      })
    };
    globalThis.volumeOverlay = () => {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "ServiceExtensionAbility",
          parameters:
          {
            "winType": window.WindowType.TYPE_VOLUME_OVERLAY,
          },
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
      })
    };
    globalThis.navigationBar = () => {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "ServiceExtensionAbility",
          parameters:
          {
            "winType": window.WindowType.TYPE_NAVIGATION_BAR,
          },
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
      })
    };
    globalThis.startAbilityFloat = () => {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "ServiceExtensionAbility",
          parameters:
          {
            "winType": window.WindowType.TYPE_FLOAT,
          },
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
      })
    };
    globalThis.launcherRecent = () => {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "ServiceExtensionAbility",
          parameters:
          {
            "winType": window.WindowType.TYPE_LAUNCHER_RECENT,
          },
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
      })
    };
    globalThis.launcherDock = () => {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "ServiceExtensionAbility",
          parameters:
          {
            "winType": window.WindowType.TYPE_LAUNCHER_DOCK,
          },
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
      })
    };
    globalThis.voiceInteraction = () => {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "ServiceExtensionAbility",
          parameters:
          {
            "winType": window.WindowType.TYPE_VOICE_INTERACTION,
          },
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
      })
    };
    globalThis.pointer = () => {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "ServiceExtensionAbility",
          parameters:
          {
            "winType": window.WindowType.TYPE_POINTER,
          },
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
      })
    };
    globalThis.floatCamera = () => {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "ServiceExtensionAbility",
          parameters:
          {
            "winType": window.WindowType.TYPE_FLOAT_CAMERA,
          },
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
      })
    };
    globalThis.screenshot = () => {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "ServiceExtensionAbility",
          parameters:
          {
            "winType": window.WindowType.TYPE_SCREENSHOT,
          },
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
      })
    };
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageCreate');

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
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground() {
    // Ability has brought to foreground
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');
  }

  onBackground() {
    // Ability has back to background
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
