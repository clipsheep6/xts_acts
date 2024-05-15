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

import display from '@ohos.display';
import hilog from '@ohos.hilog';
import window from '@ohos.window';
import extension from '@ohos.app.ability.ServiceExtensionAbility';
import dataShare from '@ohos.data.dataShare';

const BASE_URI = 'datashare:///com.acts.switchuserextensionrely.DataShare';
const TAG = '[ServiceExtension]';

let winNum = 1;
let win;

export default class ServiceExtensionAbility extends extension {
  async onCreate(want) {
    console.debug(TAG, 'onCreate, want: ' + JSON.stringify(want));
    globalThis.selectExtensionContext = this.context;

    if (want.parameters.parameters === 'Acts_SwitchUserExtension_1600') {
      console.error(TAG, 'want.parameters.parameters === Acts_SwitchUserExtension_1600');
      try {
        let dataHelper = await dataShare.createDataShareHelper(this.context, BASE_URI);
        if (dataHelper === null || dataHelper === undefined) {
          console.error(TAG, 'createDataShareHelper failed, error is ' + JSON.stringify(dataHelper));
          return;
        }
      } catch (err) {
        console.error(TAG, 'createDataShareHelper failed, error is ' + JSON.stringify(err));
      }
    }

    globalThis.ExtensionCancel = () => {
      console.info(TAG, 'ExtensionCancel called');
      this.context.terminateSelf().then(() => {
        console.info(TAG, 'terminateSelf ok');
      }).catch((err) => {
        console.error(TAG, 'terminateSelf err is ' + JSON.stringify(err));
      })
    }
  }

  async onRequest(want, startId) {
    console.debug(TAG, 'onRequest, want: ' + JSON.stringify(want));

    try {
      globalThis.callerToken = want.parameters.callerToken;
      display.getDefaultDisplay().then((dis) => {
        let navigationBarRect = {
          left: 10,
          top: 100,
          width: 710,
          height: 300
        };

        let winType = want.parameters.winType;
        if (typeof winType !== 'number') {
          console.error(TAG, 'winType is invalid value');
          return;
        }

        AppStorage.SetOrCreate('message', this.windowTypeToString(winType));
        console.info(TAG, ' this.windowTypeToString(winType) is ' + this.windowTypeToString(winType));

        if (winNum > 1) {
          win.destroy().then(() => {
            console.debug(TAG, 'destroy, called');
            setTimeout(() => {
              console.debug(TAG, 'During the destruction process, createWindow is called after 100ms is delayed.');
              this.createWindow('ServiceDialog' + startId, winType, navigationBarRect);
            }, 100);
            winNum--;
          }).catch ((err) => {
            console.debug(TAG, 'destroy, err: ' + JSON.stringify(err));
          })
        } else {
          this.createWindow('ServiceDialog' + startId, winType, navigationBarRect);
        }
      });
    } catch (err) {
      console.error(TAG, ' onRequest err is ' + JSON.stringify(err));
    }
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
  }

  private windowTypeToString(type: number): string {
    let typeList = new Map();
    typeList.set(window.WindowType.TYPE_SYSTEM_ALERT, 'TYPE_SYSTEM_ALERT');
    typeList.set(window.WindowType.TYPE_INPUT_METHOD, 'TYPE_INPUT_METHOD');
    typeList.set(window.WindowType.TYPE_STATUS_BAR, 'TYPE_STATUS_BAR');
    typeList.set(window.WindowType.TYPE_PANEL, 'TYPE_PANEL');
    typeList.set(window.WindowType.TYPE_KEYGUARD, 'TYPE_KEYGUARD');
    typeList.set(window.WindowType.TYPE_VOLUME_OVERLAY, 'TYPE_VOLUME_OVERLAY');
    typeList.set(window.WindowType.TYPE_NAVIGATION_BAR, 'TYPE_NAVIGATION_BAR');
    typeList.set(window.WindowType.TYPE_FLOAT, 'TYPE_FLOAT');
    typeList.set(window.WindowType.TYPE_LAUNCHER_RECENT, 'TYPE_LAUNCHER_RECENT');
    typeList.set(window.WindowType.TYPE_LAUNCHER_DOCK, 'TYPE_LAUNCHER_DOCK');
    typeList.set(window.WindowType.TYPE_VOICE_INTERACTION, 'TYPE_VOICE_INTERACTION');
    typeList.set(window.WindowType.TYPE_POINTER, 'TYPE_POINTER');
    typeList.set(window.WindowType.TYPE_FLOAT_CAMERA, 'TYPE_FLOAT_CAMERA');
    typeList.set(window.WindowType.TYPE_SCREENSHOT, 'TYPE_SCREENSHOT');
    let result;
    try {
      result = typeList.get(type);
    } catch (err) {
      console.error(TAG, ' typeList.get(' + type + ') error is ' + JSON.stringify(err));
    }
    console.info(TAG, ' result is ' + JSON.stringify(result));
    if (result === undefined) {
      return 'Invalid type';
    }
    return result;
  }

  private async createWindow(name: string, windowType: number, rect) {
    console.info(TAG, 'create window');
    try {
      win = await window.create(globalThis.selectExtensionContext, name, windowType);
      globalThis.win = win;
      winNum++;
      await win.moveTo(rect.left, rect.top);
      await win.resetSize(rect.width, rect.height);
      await win.loadContent('pages/Dialog');
      await win.setBackgroundColor('#FF00FF');
      await win.show();
    } catch (e) {
      console.error(TAG, 'window create failed: ' + JSON.stringify(e));
    }
  }
}
