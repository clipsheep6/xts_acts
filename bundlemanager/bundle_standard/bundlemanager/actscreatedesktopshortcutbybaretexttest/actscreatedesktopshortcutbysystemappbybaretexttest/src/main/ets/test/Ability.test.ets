/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import Base from '@ohos.base';

import launcherBundleManager from '@ohos.bundle.launcherBundleManager';
import shortcutManager from '@ohos.bundle.shortcutManager';
import bundleManager from '@ohos.bundle.bundleManager';
import hilog from '@ohos.hilog';

let iconBaseStr: string = 'data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACkAAAApCAYAAACoYAD2AAAAGXRFWHRTb2Z0d2FyZQB' +
  'BZG9iZSBJbWFnZVJlYWR5ccllPAAAAyVpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2Vo' +
  'aUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDYuMC1jM' +
  'DA2IDc5LjE2NDc1MywgMjAyMS8wMi8xNS0xMTo1MjoxMyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOT' +
  'k5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29' +
  'tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9i' +
  'ZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIDIyLjMgKE1hY2ludG9zaCkiI' +
  'HhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6ODQxMEIzN0QyRjQ1MTFFRUJFNUNFRTAwRjBCQTg0NkYiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaW' +
  'Q6ODQxMEIzN0UyRjQ1MTFFRUJFNUNFRTAwRjBCQTg0NkYiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo4NDE' +
  'wQjM3QjJGNDUxMUVFQkU1Q0VFMDBGMEJBODQ2RiIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo4NDEwQjM3QzJGNDUxMUVFQkU1Q0VFMDBGMEJB' +
  'ODQ2RiIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PjnaUHsAAARqSURBVHjaz' +
  'FlNbFVFFP7u7Xul4ceYtkANBCUYFkQCttUFC8WkpIKEgMqqtZgILmRTMLIwwZgYWWCsbGRTSUi1KyT8pAoGE4kLN20KpmICIWk1EmgpBFtLsK/t9T' +
  'sz0+a919uZeT/Fd5KZc++8me98M2/mnDPvBfg4ghKjEJjnCNtZ72Cp5fNq6gSKLxO010/dy3Kez10z9qe5KJVNEtiMKRylfgGPX7oR4hD15XSSYUa' +
  'XCAdJ8Kf/iSCUXbEvPNIknWQrP/wcpSCaR2smyQj1nMEXKCURPsJrhuQUOlGKYniFZNtAvTbHryP9oM3fGOFFfglWLc6ugSmjLGMsZaZ9kmURy2Jk' +
  'e4iZk4l/5hizxJM4+Ynvq3MSnGAZBqpWAW+8DDz/lG6+egc4/Rtwd4Av1SxJ9RXpTZTSY5Y+wzGbgY01ms+V2xzTB9z704xJOIhGqAtwOLrHx8o5C' +
  'crM7wLvbAHa6N6fqMjsMjYOHPoOOP4DX6qMUZkUUd9rBI6+xoUrzxwz8gg42AWcuMSXpWaV5yZ6XyDLrStJgi3ctV+9Gf+xEPhyFxeOE2r/ng0r9J' +
  'h929i+M36MTFTwUiTW8SMbaqwMymUl/5ZxsR9zL1U+yUU57LfLlx8BhhjkljGIDn7oN6bqEy7VA7NP42UktCLwoDTV+x/FtyVODRrtKQp/1N4ntLo' +
  'MbobaGn+D65exqjDaUxS+4/CETu8T+BtMlmmDyTL/MT74ocv1XB30Nzg5lal9ROFPpPnVnFeSDvebnvmNfAp/Sb4rCR1Jhv8A9p7xMxgGmdolgiv4' +
  'MxEr3z0pzvYEHfV+Aj5M2btWL2T1r9EWERzBE1zlzB2ScCYFSR1Jjl8Ezl0Hdm/QIS77cEjXzl917Gr7hZ5obPY2S03qUHqK/W71Z4VSa2S2OfP0Q' +
  'yRr/pcOdypGhTETkq/tWZabJrEIZqVewLgJnyvNuzszGkl4nX+TLKxYw5V83b6SF34Gtr5EJ72heCuZcK5gyiQLrwKfMcFYmLSERYa2C2eZPGwCGt' +
  'bE99nD8ilzgQ+6spKSQpy5yoAadRJhIygy/JDVAqMtIjiCJ7iCn78zNwlr9dPMWHZ5ZvtRpnaJ4Aq+2r95k2Tgb67HvEpzMRKMjcv9DZaFmdpHFH6' +
  'hezLK4fIkp1fisNK+97OokD1pEozeO/4G+4ZYPTLaUxR+oQlGZw4Jxslu8UNGe0qnZ4IR2hKM+4wye065jb1L/zg0oCOJaHl3ieAKviPBCEMTqKwJ' +
  'hlyW9n6rb3mzrkHjOllov2iShSmt5V3ax2LQBUfw1CXMnWCMB/gousaTtc773r0+j3v3cwXcu4HfhWQHO71Vsr9gBPg6wcpNchpskSlZv8TGGppum' +
  '2uM7xWD/EJWsjNu5BQmArvLKNoY4UV+oTnjTSX505/hFZpZ9vDpQIkRPKB4ZfnIY2x8vyQIah7H4iNOgDa2vAL5FwDe6X0xpVvZFx7WzDzAZXZ8kQ' +
  'S38y6zgyRr6SdXs/3x/49j5D8BBgDvR27YO5AMoAAAAABJRU5ErkJggg==';
let shortcutInfoForNormal: launcherBundleManager.ShortcutInfo = {
  id: 'shortcutInfoid',
  bundleName: 'com.acts.createdesktopshortcutbynormalapp',
  moduleName: 'moduleName',
  hostAbility: 'hostAbility',
  icon: iconBaseStr,
  iconId: 1,
  label: 'label',
  labelId: 1,
  wants: [],
  appIndex: 0,
  sourceType: 0
};
let shortcutInfoAppIndexIsNull: launcherBundleManager.ShortcutInfo = {
  id: 'shortcutInfoid',
  bundleName: 'com.acts.createdesktopshortcutbynormalapp',
  moduleName: 'moduleName',
  hostAbility: 'hostAbility',
  icon: iconBaseStr,
  iconId: 1,
  label: 'label',
  labelId: 1,
  wants: [],
  appIndex: null,
  sourceType: 0
};
let shortcutInfoAppIndexIsUndefined: launcherBundleManager.ShortcutInfo = {
  id: 'shortcutInfoid',
  bundleName: 'com.acts.createdesktopshortcutbynormalapp',
  moduleName: 'moduleName',
  hostAbility: 'hostAbility',
  icon: iconBaseStr,
  iconId: 1,
  label: 'label',
  labelId: 1,
  wants: [],
  appIndex: undefined,
  sourceType: 0
};
let shortcutInfoTypeIsNull: launcherBundleManager.ShortcutInfo = {
  id: 'shortcutInfoid',
  bundleName: 'com.acts.createdesktopshortcutbynormalapp',
  moduleName: 'moduleName',
  hostAbility: 'hostAbility',
  icon: iconBaseStr,
  iconId: 1,
  label: 'label',
  labelId: 1,
  wants: [],
  appIndex: 0,
  sourceType: null
};
let shortcutInfoTypeIsUndefined: launcherBundleManager.ShortcutInfo = {
  id: 'shortcutInfoid',
  bundleName: 'com.acts.createdesktopshortcutbynormalapp',
  moduleName: 'moduleName',
  hostAbility: 'hostAbility',
  icon: iconBaseStr,
  iconId: 1,
  label: 'label',
  labelId: 1,
  wants: [],
  appIndex: 0,
  sourceType: undefined
};
let shortcutInfoForSystemApp: launcherBundleManager.ShortcutInfo = {
  id: 'shortcutInfoid',
  bundleName: 'com.acts.createdesktopshortcutbysystemappbybaretext',
  moduleName: 'moduleName',
  hostAbility: 'hostAbility',
  icon: iconBaseStr,
  iconId: 1,
  label: 'label',
  labelId: 1,
  wants: [],
  appIndex: 0,
  sourceType: 0
};
let shortcutInfoIsNull: launcherBundleManager.ShortcutInfo | null = null;
let shortcutInfoIsUndefined: launcherBundleManager.ShortcutInfo | undefined = undefined;
let userIdIsNull: number | null = null;
let userIdIsUndefined: number | undefined = undefined;

export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0700
     * @tc.name: Add desktop shortcut by system app, shortcutInfo is null.
     * @tc.desc: Add desktop shortcut by system app. If shortcutInfo is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0700', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0700 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoIsNull, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0700 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0700 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0700 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0800
     * @tc.name: Add desktop shortcut by system app, shortcutInfo is undefined.
     * @tc.desc: Add desktop shortcut by system app. If shortcutInfo is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0800', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0800 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoIsUndefined, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0800 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0800 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0800 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0900
     * @tc.name: Add desktop shortcut by system app, userId is null.
     * @tc.desc: Add desktop shortcut by system app. If userId is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0900', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0900 start');
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForNormal, userIdIsNull).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0900 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0900 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_0900 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1000
     * @tc.name: Add desktop shortcut by system app, userId is undefined.
     * @tc.desc: Add desktop shortcut by system app. If userId is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1000', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1000 start');
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForNormal, userIdIsUndefined).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1000 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1000 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1000 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1100
     * @tc.name: Add desktop shortcut by system app, userId is not exist.
     * @tc.desc: Add desktop shortcut by system app. If userId is not exist, return 17700004.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1100', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1100 start');
      let userId: number = 200;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForNormal, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1100 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1100 err:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700004);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1100 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1200
     * @tc.name: Add desktop shortcut by system app, the specified bundle is disabled.
     * @tc.desc: Add desktop shortcut by system app. If the specified bundle is disabled, return 17700026.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1200', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1200 start');
      let userId: number = 100;
      let appBundleName: string = 'com.acts.createdesktopshortcutbysystemappbybaretext';
      let appIndex: number = 0;
      let appIsEnabled: boolean = false;
      await bundleManager.setApplicationEnabled(appBundleName, appIndex, appIsEnabled).then(() => {
        hilog.info(0x0000, 'testTag', '%{public}s',
          'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1200 disabled successful');
      }).catch((err: Base.BusinessError) => {
        hilog.info(0x0000, 'testTag',
          'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1200 disabled err is:%{public}s',
          JSON.stringify(err));
        expect().assertFail();
        done();
      });
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1200 successful');
          expect().assertFail();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1200 err:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700026);
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1200 err is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      appIsEnabled = true;
      await bundleManager.setApplicationEnabled(appBundleName, appIndex, appIsEnabled).then(() => {
        hilog.info(0x0000, 'testTag', '%{public}s',
          'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1200 enabled successful');
        done();
      }).catch((err: Base.BusinessError) => {
        hilog.info(0x0000, 'testTag',
          'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1200 enabled err is:%{public}s',
          JSON.stringify(err));
        expect().assertFail();
        done();
      });
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1300
     * @tc.name: Delete desktop shortcut by system app, shortcutInfo is null.
     * @tc.desc: Delete desktop shortcut by system app. If shortcutInfo is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1300', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1300 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoIsNull, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1300 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1300 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1300 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1400
     * @tc.name: Delete desktop shortcut by system app, shortcutInfo is undefined.
     * @tc.desc: Delete desktop shortcut by system app. If shortcutInfo is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1400', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1400 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoIsUndefined, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1400 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1400 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1400 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1500
     * @tc.name: Delete desktop shortcut by system app, userId is null.
     * @tc.desc: Delete desktop shortcut by system app. If userId is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1500', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1500 start');
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoForNormal, userIdIsNull).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1500 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1500 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1500 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1600
     * @tc.name: Delete desktop shortcut by system app, userId is undefined.
     * @tc.desc: Delete desktop shortcut by system app. If userId is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1600', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1600 start');
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoForNormal, userIdIsUndefined).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1600 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1600 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1600 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1700
     * @tc.name: Delete desktop shortcut by system app, userId is not exist.
     * @tc.desc: Delete desktop shortcut by system app. If userId is not exist, return 17700004.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1700', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1700 start');
      let userId: number = 200;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoForNormal, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1700 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1700 err:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700004);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1700 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1800
     * @tc.name: Query desktop shortcut by system app, userId is null.
     * @tc.desc: Query desktop shortcut by system app. If userId is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1800', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1800 start');
      try {
        await shortcutManager.getAllDesktopShortcutInfo(userIdIsNull).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1800 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1800 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1800 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1900
     * @tc.name: Query desktop shortcut by system app, userId is undefined.
     * @tc.desc: Query desktop shortcut by system app. If userId is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1900', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1900 start');
      try {
        await shortcutManager.getAllDesktopShortcutInfo(userIdIsUndefined).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1900 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1900 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_1900 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2000
     * @tc.name: Query desktop shortcut by system app, userId is not exist.
     * @tc.desc: Query desktop shortcut by system app. If userId is not exist, return 17700004.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2000', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2000 start');
      let userId: number = 200;
      try {
        await shortcutManager.getAllDesktopShortcutInfo(userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2000 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2000 err:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700004);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2000 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2100
     * @tc.name: Add desktop shortcut by system app. The parameters are correct.
     * @tc.desc: Add desktop shortcut by system app. If the parameters are correct, the shortcut can be added.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2100', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2100 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2100 successful');
          expect(data).assertEqual(undefined);
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2100 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2100 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2100 delete successful');
          expect(data).assertEqual(undefined);
          done();
        }).catch((errDel: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2100 delete failed');
          expect().assertFail();
          done();
        })
      } catch (errCodeDel) {
        hilog.info(0x0000, 'testTag', '%{public}s',
          'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2100  delete failed');
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2200
     * @tc.name: Delete desktop shortcut by system app. The parameters are correct.
     * @tc.desc: Delete desktop shortcut by system app. If the parameters are correct, the shortcut can be deleted.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2200', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2200 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoForNormal, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2200 successful');
          expect(data).assertEqual(undefined);
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2200 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2200 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2300
     * @tc.name: Query desktop shortcut by system app. The parameters are correct.
     * @tc.desc: Query desktop shortcut by system app. If the parameters are correct, the shortcut can be Queried.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2300', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2300 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2300 successful');
          expect(data).assertEqual(undefined);
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2300 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2300 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
      try {
        await shortcutManager.getAllDesktopShortcutInfo(userId)
          .then((shortcutInfos: launcherBundleManager.ShortcutInfo[]) => {
            let list: string = JSON.stringify(shortcutInfos)
            hilog.info(0x0000, 'testTag',
              'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2300 shortcutInfos:%{public}s', list);
            expect(list).assertContain('com.acts.createdesktopshortcutbysystemapp');
          })
          .catch((err: Base.BusinessError) => {
            hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2300 err:%{public}s',
              JSON.stringify(err));
            expect().assertFail();
          })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2300 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2300 delete successful');
          expect(data).assertEqual(undefined);
          done();
        }).catch((errDel: Base.BusinessError) => {
          let delResult: string = JSON.stringify(errDel.code);
          hilog.info(0x0000, 'testTag',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2300 delete failed%{public}s',
            JSON.stringify(errDel));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2300 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2400
     * @tc.name: Add desktop shortcut by system app, appIndex is null.
     * @tc.desc: Add desktop shortcut by system app. If appIndex is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2400', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2400 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoAppIndexIsNull, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2400 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2400 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2400 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2500
     * @tc.name: Add desktop shortcut by system app, appIndex is undefined.
     * @tc.desc: Add desktop shortcut by system app. If appIndex is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2500', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2500 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoAppIndexIsUndefined, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2500 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2500 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2500 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2600
     * @tc.name: Add desktop shortcut by system app, type is null.
     * @tc.desc: Add desktop shortcut by system app. If type is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2600', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2600 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoTypeIsNull, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2600 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2600 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2600 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2700
     * @tc.name: Add desktop shortcut by system app, type is undefined.
     * @tc.desc: Add desktop shortcut by system app. If type is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2700', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2700 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoTypeIsUndefined, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2700 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2700 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2700 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2800
     * @tc.name: Delete desktop shortcut by system app, appIndex is null.
     * @tc.desc: Delete desktop shortcut by system app. If appIndex is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2800', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2800 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoAppIndexIsNull, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2800 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2800 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2800 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2900
     * @tc.name: Delete desktop shortcut by system app, appIndex is undefined.
     * @tc.desc: Delete desktop shortcut by system app. If appIndex is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2900', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2900 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoAppIndexIsUndefined, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2900 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2900 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_2900 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3000
     * @tc.name: Delete desktop shortcut by system app, type is null.
     * @tc.desc: Delete desktop shortcut by system app. If type is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3000', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3000 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoTypeIsNull, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3000 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3000 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3000 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3100
     * @tc.name: Delete desktop shortcut by system app, type is undefined.
     * @tc.desc: Delete desktop shortcut by system app. If type is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3100', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3100 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoTypeIsUndefined, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3100 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3100 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3100 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3200
     * @tc.name: Add desktop shortcut by system app, bundleName is not exist.
     * @tc.desc: Add desktop shortcut by system app. If bundleName is not exist, return 17700001.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3200', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3200 start');
      let shortcutInfo: launcherBundleManager.ShortcutInfo = {
        id: 'shortcutInfoid',
        bundleName: 'com.acts.notexistapp',
        moduleName: 'moduleName',
        hostAbility: 'hostAbility',
        icon: iconBaseStr,
        iconId: 1,
        label: 'label',
        labelId: 1,
        wants: [],
        appIndex: 0,
        sourceType: 0
      };
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfo, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3200 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3200 err:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700001);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3200 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3300
     * @tc.name: Add desktop shortcut by system app, appIndex is less than zero.
     * @tc.desc: Add desktop shortcut by system app. If appIndex is less than zero, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3300', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3300 start');
      let shortcutInfo: launcherBundleManager.ShortcutInfo = {
        id: 'shortcutInfoid',
        bundleName: 'com.acts.createdesktopshortcutbysystemappbybaretext',
        moduleName: 'moduleName',
        hostAbility: 'hostAbility',
        icon: iconBaseStr,
        iconId: 1,
        label: 'label',
        labelId: 1,
        wants: [],
        appIndex: -1,
        sourceType: 0
      };
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfo, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3300 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3300 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3300 errCode:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3400
     * @tc.name: Add desktop shortcut by system app, appIndex is less than zero.
     * @tc.desc: Add desktop shortcut by system app. If appIndex is greater than 1000, return 17700061.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3400', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3400 start');
      let shortcutInfo: launcherBundleManager.ShortcutInfo = {
        id: 'shortcutInfoid',
        bundleName: 'com.acts.createdesktopshortcutbysystemappbybaretext',
        moduleName: 'moduleName',
        hostAbility: 'hostAbility',
        icon: iconBaseStr,
        iconId: 1,
        label: 'label',
        labelId: 1,
        wants: [],
        appIndex: 1001,
        sourceType: 0
      };
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfo, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3400 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3400 err:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700061);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3400 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3500
     * @tc.name: Query desktop shortcut by system app, query result is empty.
     * @tc.desc: Query desktop shortcut by system app. If result is empty, return empty list.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3500', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3500 start');
      let userId: number = 100;
      try {
        await shortcutManager.getAllDesktopShortcutInfo(userId)
          .then((data: launcherBundleManager.ShortcutInfo[]) => {
            hilog.info(0x0000, 'testTag', '%{public}s',
              'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3500 successful');
            expect(data.length).assertEqual(0);
            done();
          })
          .catch((err: Base.BusinessError) => {
            hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3500 err:%{public}s',
              JSON.stringify(err));
            expect().assertFail();
            done();
          })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3500 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3600
     * @tc.name: Add desktop shortcut by system app, bundlename and id are same with existing data.
     * @tc.desc: Add desktop shortcut by system app. If bundlename and id are same with existing data, return 17700070.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3600', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3600 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3600 successful');
          expect(data).assertEqual(undefined);
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3600 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3600 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3600 successful');
          expect().assertFail();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3600 err:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700070);
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3600 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3600 delete successful');
          expect(data).assertEqual(undefined);
          done();
        }).catch((errDel: Base.BusinessError) => {
          let delResult = JSON.stringify(errDel.code);
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3600 errDel:%{public}s',
            delResult);
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_By_Bare_Text_3600 errCode:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })
  })
}