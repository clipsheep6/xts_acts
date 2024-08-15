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
import shortcutManager from '@ohos.bundle.shortcutManager';
import launcherBundleManager from '@ohos.bundle.launcherBundleManager';
import installer from '@ohos.bundle.installer';
import bundleManager from '@ohos.bundle.bundleManager';
import hilog from '@ohos.hilog';

let shortcutInfoForNormal: launcherBundleManager.ShortcutInfo = {
  id: 'shortcutInfoid',
  bundleName: 'com.acts.createdesktopshortcutbynormalapp',
  moduleName: 'moduleName',
  hostAbility: 'hostAbility',
  icon: 'icon',
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
  icon: 'icon',
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
  icon: 'icon',
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
  icon: 'icon',
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
  icon: 'icon',
  iconId: 1,
  label: 'label',
  labelId: 1,
  wants: [],
  appIndex: 0,
  sourceType: undefined
};
let shortcutInfoForSystemApp: launcherBundleManager.ShortcutInfo = {
  id: 'shortcutInfoid',
  bundleName: 'com.acts.createdesktopshortcutbysystemapp',
  moduleName: 'moduleName',
  hostAbility: 'hostAbility',
  icon: 'icon',
  iconId: 1,
  label: 'label',
  labelId: 1,
  wants: [],
  appIndex: 0,
  sourceType: 0
};
let shortcutInfoIdIsNull: launcherBundleManager.ShortcutInfo = {
  id: null,
  bundleName: 'com.acts.createdesktopshortcutbynormalapp',
  moduleName: 'moduleName',
  hostAbility: 'hostAbility',
  icon: 'icon',
  iconId: 1,
  label: 'label',
  labelId: 1,
  wants: [],
  appIndex: null,
  sourceType: 0
};
let shortcutInfoIdIsUndefined: launcherBundleManager.ShortcutInfo = {
  id: undefined,
  bundleName: 'com.acts.createdesktopshortcutbynormalapp',
  moduleName: 'moduleName',
  hostAbility: 'hostAbility',
  icon: 'icon',
  iconId: 1,
  label: 'label',
  labelId: 1,
  wants: [],
  appIndex: null,
  sourceType: 0
};
let shortcutInfoBundleNameIsNull: launcherBundleManager.ShortcutInfo = {
  id: null,
  bundleName: 'com.acts.createdesktopshortcutbynormalapp',
  moduleName: 'moduleName',
  hostAbility: 'hostAbility',
  icon: 'icon',
  iconId: 1,
  label: 'label',
  labelId: 1,
  wants: [],
  appIndex: null,
  sourceType: 0
};
let shortcutInfoBundleNameIsUndefined: launcherBundleManager.ShortcutInfo = {
  id: undefined,
  bundleName: 'com.acts.createdesktopshortcutbynormalapp',
  moduleName: 'moduleName',
  hostAbility: 'hostAbility',
  icon: 'icon',
  iconId: 1,
  label: 'label',
  labelId: 1,
  wants: [],
  appIndex: null,
  sourceType: 0
};
let shortcutInfoIsNull: launcherBundleManager.ShortcutInfo | null = null;
let shortcutInfoIsUndefined: launcherBundleManager.ShortcutInfo | undefined = undefined;
let userIdIsNull: number | null = null;
let userIdIsUndefined: number | undefined = undefined;
let str: string = '[{\"id\":\"shortcutInfoid\",\"bundleName\":\"com.acts.createdesktopshortcutrely\",' +
  '\"moduleName\":\"\",\"hostAbility\":\"\",\"icon\":\"\",\"iconId\":0,\"label\":\"\",\"labelId\":0,\"wants\":[],' +
  '\"appIndex\":0,\"sourceType\":0}]';

export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_0700
     * @tc.name: Add desktop shortcut by system app, shortcutInfo is null.
     * @tc.desc: Add desktop shortcut by system app. If shortcutInfo is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_0700', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0700 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoIsNull, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0700 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0700 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0700 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_0800
     * @tc.name: Add desktop shortcut by system app, shortcutInfo is undefined.
     * @tc.desc: Add desktop shortcut by system app. If shortcutInfo is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_0800', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0800 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoIsUndefined, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0800 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0800 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0800 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_0900
     * @tc.name: Add desktop shortcut by system app, userId is null.
     * @tc.desc: Add desktop shortcut by system app. If userId is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_0900', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0900 start');
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForNormal, userIdIsNull).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0900 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0900 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0900 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_1000
     * @tc.name: Add desktop shortcut by system app, userId is undefined.
     * @tc.desc: Add desktop shortcut by system app. If userId is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_1000', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1000 start');
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForNormal, userIdIsUndefined).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1000 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1000 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1000 errCode is%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_1100
     * @tc.name: Add desktop shortcut by system app, userId is not exist.
     * @tc.desc: Add desktop shortcut by system app. If userId is not exist, return 17700004.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_1100', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1100 start');
      let userId: number = 200;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForNormal, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1100 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1100 err is:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700004);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1100 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_1200
     * @tc.name: Add desktop shortcut by system app, the specified bundle is disabled.
     * @tc.desc: Add desktop shortcut by system app. If the specified bundle is disabled, return 17700026.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_1200', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1200 start');
      let userId: number = 100;
      let appBundleName: string = 'com.acts.createdesktopshortcutbysystemapp';
      let appIndex: number = 0;
      let appIsEnabled: boolean = false;
      await bundleManager.setApplicationEnabled(appBundleName, appIndex, appIsEnabled).then(() => {
        hilog.info(0x0000, 'testTag', '%{public}s',
          'Sub_Bms_Framework_Create_Desktop_Shortcut_1200 disabled successful');
      }).catch((err: Base.BusinessError) => {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1200 disabled err is:%{public}s',
          JSON.stringify(err));
        expect().assertFail();
        done();
      });
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1200 successful');
          expect().assertFail();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1200 errorcode is:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700026);
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1200 err is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      appIsEnabled = true;
      await bundleManager.setApplicationEnabled(appBundleName, appIndex, appIsEnabled).then(() => {
        hilog.info(0x0000, 'testTag', '%{public}s',
          'Sub_Bms_Framework_Create_Desktop_Shortcut_1200 enabled successful');
        done();
      }).catch((err: Base.BusinessError) => {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1200 enabled err is:%{public}s',
          JSON.stringify(err));
        expect().assertFail();
        done();
      });
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_1300
     * @tc.name: Delete desktop shortcut by system app, shortcutInfo is null.
     * @tc.desc: Delete desktop shortcut by system app. If shortcutInfo is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_1300', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1300 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoIsNull, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1300 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1300 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1300 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_1400
     * @tc.name: Delete desktop shortcut by system app, shortcutInfo is undefined.
     * @tc.desc: Delete desktop shortcut by system app. If shortcutInfo is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_1400', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1400 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoIsUndefined, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1400 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1400 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1400 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_1500
     * @tc.name: Delete desktop shortcut by system app, userId is null.
     * @tc.desc: Delete desktop shortcut by system app. If userId is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_1500', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1500 start');
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoForNormal, userIdIsNull).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1500 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1500 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1500 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_1600
     * @tc.name: Delete desktop shortcut by system app, userId is undefined.
     * @tc.desc: Delete desktop shortcut by system app. If userId is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_1600', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1600 start');
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoForNormal, userIdIsUndefined).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1600 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1600 errorcode err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1600 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_1700
     * @tc.name: Delete desktop shortcut by system app, userId is not exist.
     * @tc.desc: Delete desktop shortcut by system app. If userId is not exist, return 17700004.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_1700', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1700 start');
      let userId: number = 200;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoForNormal, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1700 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1700 err is:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700004);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1700 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_1800
     * @tc.name: Query desktop shortcut by system app, userId is null.
     * @tc.desc: Query desktop shortcut by system app. If userId is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_1800', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1800 start');
      try {
        await shortcutManager.getAllDesktopShortcutInfo(userIdIsNull).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1800 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1800 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1800 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_1900
     * @tc.name: Query desktop shortcut by system app, userId is undefined.
     * @tc.desc: Query desktop shortcut by system app. If userId is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_1900', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1900 start');
      try {
        await shortcutManager.getAllDesktopShortcutInfo(userIdIsUndefined).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1900 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1900 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_1900 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_2000
     * @tc.name: Query desktop shortcut by system app, userId is not exist.
     * @tc.desc: Query desktop shortcut by system app. If userId is not exist, return 17700004.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_2000', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2000 start');
      let userId: number = 200;
      try {
        await shortcutManager.getAllDesktopShortcutInfo(userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2000 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2000 err is:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700004);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2000 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_2100
     * @tc.name: Add desktop shortcut by system app. The parameters are correct.
     * @tc.desc: Add desktop shortcut by system app. If the parameters are correct, the shortcut can be added.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_2100', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2100 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2100 successful');
          expect(data).assertEqual(undefined);
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2100 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2100 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_2100 delete successful');
          expect(data).assertEqual(undefined);
          done();
        }).catch((errDel: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2100 errDel is:%{public}s',
            JSON.stringify(errDel));
          done();
        })
      } catch (errCodeDel) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2100 errCodeDel is:%{public}s',
          JSON.stringify(errCode));
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_2200
     * @tc.name: Delete desktop shortcut by system app. The parameters are correct.
     * @tc.desc: Delete desktop shortcut by system app. If the parameters are correct, the shortcut can be deleted.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_2200', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2200 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoForNormal, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2200 successful');
          expect(data).assertEqual(undefined);
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2200 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2200 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_2300
     * @tc.name: Query desktop shortcut by system app. The parameters are correct.
     * @tc.desc: Query desktop shortcut by system app. If the parameters are correct, the shortcut can be Queried.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_2300', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2300 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2300 successful');
          expect(data).assertEqual(undefined);
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2300 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2300 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
      try {
        await shortcutManager.getAllDesktopShortcutInfo(userId)
          .then((shortcutInfos: launcherBundleManager.ShortcutInfo[]) => {
            let shortcutInfoList: string = JSON.stringify(shortcutInfos);
            hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2300 shortcutInfos:%{public}s',
              shortcutInfoList);
            expect(shortcutInfoList).assertContain('com.acts.createdesktopshortcutbysystemapp');
          })
          .catch((err: Base.BusinessError) => {
            hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2300 err is:%{public}s',
              JSON.stringify(err));
            expect().assertFail();
          })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2300 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_2300 delete successful');
          expect(data).assertEqual(undefined);
          done();
        }).catch((errDel: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2300 errDel is:%{public}s',
            JSON.stringify(errDel));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2300 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_2400
     * @tc.name: Add desktop shortcut by system app, appIndex is null.
     * @tc.desc: Add desktop shortcut by system app. If appIndex is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_2400', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2400 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoAppIndexIsNull, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2400 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2400 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2400 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_2500
     * @tc.name: Add desktop shortcut by system app, appIndex is undefined.
     * @tc.desc: Add desktop shortcut by system app. If appIndex is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_2500', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2500 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoAppIndexIsUndefined, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2500 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2500 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2500 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_2600
     * @tc.name: Add desktop shortcut by system app, type is null.
     * @tc.desc: Add desktop shortcut by system app. If type is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_2600', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2600 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoTypeIsNull, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2600 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2600 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2600 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_2700
     * @tc.name: Add desktop shortcut by system app, type is undefined.
     * @tc.desc: Add desktop shortcut by system app. If type is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_2700', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2700 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoTypeIsUndefined, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2700 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2700 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2700 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_2800
     * @tc.name: Delete desktop shortcut by system app, appIndex is null.
     * @tc.desc: Delete desktop shortcut by system app. If appIndex is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_2800', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2800 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoAppIndexIsNull, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2800 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2800 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2800 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_2900
     * @tc.name: Delete desktop shortcut by system app, appIndex is undefined.
     * @tc.desc: Delete desktop shortcut by system app. If appIndex is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_2900', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2900 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoAppIndexIsUndefined, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2900 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2900 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_2900 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_3000
     * @tc.name: Delete desktop shortcut by system app, type is null.
     * @tc.desc: Delete desktop shortcut by system app. If type is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_3000', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3000 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoTypeIsNull, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3000 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3000 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3000 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_3100
     * @tc.name: Delete desktop shortcut by system app, type is undefined.
     * @tc.desc: Delete desktop shortcut by system app. If type is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_3100', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3100 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoTypeIsUndefined, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3100 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3100 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3100 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_3200
     * @tc.name: Add desktop shortcut by system app, bundleName is not exist.
     * @tc.desc: Add desktop shortcut by system app. If bundleName is not exist, return 17700001.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_3200', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3200 start');
      let shortcutInfo: launcherBundleManager.ShortcutInfo = {
        id: 'shortcutInfoid',
        bundleName: 'com.acts.notexistapp',
        moduleName: 'moduleName',
        hostAbility: 'hostAbility',
        icon: 'icon',
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
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3200 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3200 err is:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700001);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3200 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_3300
     * @tc.name: Add desktop shortcut by system app, appIndex is less than zero.
     * @tc.desc: Add desktop shortcut by system app. If appIndex is less than zero, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_3300', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3300 start');
      let shortcutInfo: launcherBundleManager.ShortcutInfo = {
        id: 'shortcutInfoid',
        bundleName: 'com.acts.createdesktopshortcutbysystemapp',
        moduleName: 'moduleName',
        hostAbility: 'hostAbility',
        icon: 'icon',
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
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3300 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3300 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3300 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_3400
     * @tc.name: Add desktop shortcut by system app, appIndex is less than zero.
     * @tc.desc: Add desktop shortcut by system app. If appIndex is greater than 1000, return 17700061.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_3400', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3400 start');
      let shortcutInfo: launcherBundleManager.ShortcutInfo = {
        id: 'shortcutInfoid',
        bundleName: 'com.acts.createdesktopshortcutbysystemapp',
        moduleName: 'moduleName',
        hostAbility: 'hostAbility',
        icon: 'icon',
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
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3400 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3400 err is:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700061);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3400 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_3500
     * @tc.name: Query desktop shortcut by system app, query result is empty.
     * @tc.desc: Query desktop shortcut by system app. If result is empty, return empty lsit.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_3500', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3500 start');
      let userId: number = 100;
      try {
        await shortcutManager.getAllDesktopShortcutInfo(userId)
          .then((data: launcherBundleManager.ShortcutInfo[]) => {
            hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3500 successful');
            expect(data.length).assertEqual(0);
            done();
          })
          .catch((err: Base.BusinessError) => {
            hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3500 err is:%{public}s',
              JSON.stringify(err));
            expect().assertFail();
            done();
          })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3500 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_3600
     * @tc.name: Add desktop shortcut by system app, bundlename and id are same with existing data.
     * @tc.desc: Add desktop shortcut by system app. If bundlename and id are same with existing data, return 17700070.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_3600', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3600 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3600 successful');
          expect(data).assertEqual(undefined);
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3600 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3600 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3600 successful');
          expect().assertFail();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3600 err is:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700070);
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3600 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_3600 delete successful');
          done();
        }).catch((errDel: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3600 errDel is:%{public}s',
            JSON.stringify(errDel));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3600 del errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_3700
     * @tc.name: Query desktop shortcut by system app.
     * @tc.desc: Query desktop shortcut by system app. The results do not include the disabled bundle.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_3700', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3700 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3700 successful');
          expect(data).assertEqual(undefined);
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3700 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3700 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
      let appBundleName: string = 'com.acts.createdesktopshortcutbysystemapp';
      let appIndex: number = 0;
      let appIsEnabled: boolean = false;
      await bundleManager.setApplicationEnabled(appBundleName, appIndex, appIsEnabled).then(() => {
        hilog.info(0x0000, 'testTag', '%{public}s',
          'Sub_Bms_Framework_Create_Desktop_Shortcut_3700 disabled successful');
      }).catch((err: Base.BusinessError) => {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3700 disabled err is:%{public}s',
          JSON.stringify(err));
        expect().assertFail();
      });
      try {
        await shortcutManager.getAllDesktopShortcutInfo(userId)
          .then((shortcutInfos: launcherBundleManager.ShortcutInfo[]) => {
            expect(shortcutInfos.length).assertEqual(0);
          })
          .catch((err: Base.BusinessError) => {
            hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3700 err is:%{public}s',
              JSON.stringify(err));
            expect().assertFail();
          })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3700 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoForSystemApp, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_3700 delete successful');
          expect(data).assertEqual(undefined);
        }).catch((errDel: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3700 errDel is:%{public}s',
            JSON.stringify(errDel));
          expect().assertFail();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3700 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      appIsEnabled = true;
      await bundleManager.setApplicationEnabled(appBundleName, appIndex, appIsEnabled).then(() => {
        hilog.info(0x0000, 'testTag', '%{public}s',
          'Sub_Bms_Framework_Create_Desktop_Shortcut_3700 enabled successful');
        done();
      }).catch((err: Base.BusinessError) => {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3700 enabled err is:%{public}s',
          JSON.stringify(err));
        expect().assertFail();
        done();
      });
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_3800
     * @tc.name: Add desktop shortcut by system app.
     * @tc.desc: Add desktop shortcut by system app. Doppelganger apps cannot be added.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_3800', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 start');
      let appCloneIndex: number = 1;
      let appCloneUserId: number = 100;
      let appCloneIsEnabled: boolean = false;
      let appCloneBundleName: string = 'com.acts.createdesktopshortcutrely';
      let paramForCreatingAppClone: installer.CreateAppCloneParam = {
        userId: appCloneUserId,
        appIndex: appCloneIndex,
      };
      let shortcutInfo: launcherBundleManager.ShortcutInfo = {
        id: 'shortcutInfoid',
        bundleName: 'com.acts.createdesktopshortcutrely',
        moduleName: 'moduleName',
        hostAbility: 'hostAbility',
        icon: 'icon',
        iconId: 1,
        label: 'label',
        labelId: 1,
        wants: [],
        appIndex: 1,
        sourceType: 0
      };
      let bundleInstaller = await installer.getBundleInstaller();
      await bundleInstaller.createAppClone(appCloneBundleName, paramForCreatingAppClone).then((appIndex: number) => {
        hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 success');
      }).catch((err: BusinessError) => {
        hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 fail');
        expect().assertFail();
        done();
      });
      await bundleManager.setApplicationEnabled(appCloneBundleName, appCloneIndex, appCloneIsEnabled).then(() => {
        hilog.info(0x0000, 'testTag', '%{public}s',
          'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 disabled successful');
      }).catch((err: Base.BusinessError) => {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 err is:%{public}s',
          JSON.stringify(err));
        expect().assertFail();
        done();
      });
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfo, appCloneUserId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 add successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 err is:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700026);
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
      appCloneIsEnabled = true;
      await bundleManager.setApplicationEnabled(appCloneBundleName, appCloneIndex, appCloneIsEnabled).then(() => {
        hilog.info(0x0000, 'testTag', '%{public}s',
          'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 enabled successful');
      }).catch((err: Base.BusinessError) => {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 err is:%{public}s',
          JSON.stringify(err));
        expect().assertFail();
        done();
      });
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfo, appCloneUserId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 add successful');
          expect(data).assertEqual(undefined);
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfo, appCloneUserId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 delete successful');
          expect(data).assertEqual(undefined);
        }).catch((errDel: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 errDel is:%{public}s',
            JSON.stringify(errDel));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
      await bundleInstaller.destroyAppClone(appCloneBundleName, appCloneIndex, appCloneUserId)
        .then((appIndex: number) => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3700 start');
          done();
        })
        .catch((err: BusinessError) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_3800 destroyAppClone fail');
          done();
        });
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_3900
     * @tc.name: Query desktop shortcut by system app.
     * @tc.desc: Query desktop shortcut by system app. Doppelganger apps cannot be Queried.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_3900', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3900 start');
      let appCloneIndex: number = 1;
      let appCloneUserId: number = 100;
      let appCloneIsEnabled: boolean = false;
      let appCloneBundleName: string = 'com.acts.createdesktopshortcutrely';
      let paramForCreatingAppClone: installer.CreateAppCloneParam = {
        userId: appCloneUserId,
        appIndex: appCloneIndex,
      };
      let shortcutInfo: launcherBundleManager.ShortcutInfo = {
        id: 'shortcutInfoid',
        bundleName: 'com.acts.createdesktopshortcutrely',
        moduleName: 'moduleName',
        hostAbility: 'hostAbility',
        icon: 'icon',
        iconId: 1,
        label: 'label',
        labelId: 1,
        wants: [],
        appIndex: 1,
        sourceType: 0
      };
      let bundleInstaller = await installer.getBundleInstaller();
      await bundleInstaller.createAppClone(appCloneBundleName, paramForCreatingAppClone).then((appIndex: number) => {
        hilog.info(0x0000, 'testTag', '%{public}s', 'app clone was created success');
      }).catch((err: BusinessError) => {
        hilog.info(0x0000, 'testTag', '%{public}s', 'create app clone failed');
        expect().assertFail();
        done();
      });
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfo, appCloneUserId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3900 add successful');
          expect(data).assertEqual(undefined);
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3900 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3900 add errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
      await bundleManager.setApplicationEnabled(appCloneBundleName, appCloneIndex, appCloneIsEnabled).then(() => {
        hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3900 enabled success');
      }).catch((err: Base.BusinessError) => {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3900 enabled err is:%{public}s',
          JSON.stringify(err));
        expect().assertFail();
        done();
      });
      try {
        await shortcutManager.getAllDesktopShortcutInfo(appCloneUserId)
          .then((data: launcherBundleManager.ShortcutInfo[]) => {
            hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3900 successful');
            expect(data.length).assertEqual(0);
          })
          .catch((err: Base.BusinessError) => {
            hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3900 get fail%{public}s',
              JSON.stringify(err));
            expect().assertFail();
            done();
          })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3900 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfo, appCloneUserId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_3900 delete successful');
          expect(data).assertEqual(undefined);
        }).catch((errDel: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3900 errDel is:%{public}s',
            JSON.stringify(errDel));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_3900 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
      await bundleInstaller.destroyAppClone(appCloneBundleName, appCloneIndex, appCloneUserId)
        .then((appIndex: number) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_3900 destroyAppClone success');
          done();
        })
        .catch((err: BusinessError) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_3900 destroyAppClone failed');
          expect().assertFail();
          done();
        });
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_4000
     * @tc.name: Add desktop shortcut by system app. The optional parameter is null.
     * @tc.desc: Add desktop shortcut by system app. The optional parameter is null, set the default value.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_4000', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4000 start');
      let userId: number = 100;
      let shortcutInfo: launcherBundleManager.ShortcutInfo = {
        id: 'shortcutInfoid',
        bundleName: 'com.acts.createdesktopshortcutrely',
        moduleName: null,
        hostAbility: null,
        icon: null,
        iconId: null,
        label: null,
        labelId: null,
        wants: null,
        appIndex: 0,
        sourceType: 0
      };
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfo, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4000 successful');
          expect(data).assertEqual(undefined);
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4000 add err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4000 add errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
      try {
        await shortcutManager.getAllDesktopShortcutInfo(userId)
          .then((shortcutInfos: launcherBundleManager.ShortcutInfo[]) => {
            let shortcutInfoList: string = JSON.stringify(shortcutInfos);
            hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4000 shortcutInfos:%{public}s',
              shortcutInfoList);
            expect(shortcutInfoList).assertContain(str);
          })
          .catch((err: Base.BusinessError) => {
            hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4000 err is:%{public}s',
              JSON.stringify(err));
            expect().assertFail();
          })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4000 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfo, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_4000 delete successful');
          expect(data).assertEqual(undefined);
          done();
        }).catch((errDel: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4000 errDel is:%{public}s',
            JSON.stringify(errDel));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4000 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_4100
     * @tc.name: Add desktop shortcut by system app. The optional parameter is undefined.
     * @tc.desc: Add desktop shortcut by system app. The optional parameter is undefined, set the default value.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_4100', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4100 start');
      let userId: number = 100;
      let shortcutInfo: launcherBundleManager.ShortcutInfo = {
        id: 'shortcutInfoid',
        bundleName: 'com.acts.createdesktopshortcutrely',
        moduleName: undefined,
        hostAbility: undefined,
        icon: undefined,
        iconId: undefined,
        label: undefined,
        labelId: undefined,
        wants: undefined,
        appIndex: 0,
        sourceType: 0
      };
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfo, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4100 successful');
          expect(data).assertEqual(undefined);
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4100 add err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4100 add errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
      try {
        await shortcutManager.getAllDesktopShortcutInfo(userId)
          .then((shortcutInfos: launcherBundleManager.ShortcutInfo[]) => {
            let shortcutInfoList: string = JSON.stringify(shortcutInfos)
            hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4100 shortcutInfos:%{public}s',
              shortcutInfoList);
            expect(shortcutInfoList).assertContain(str);
          })
          .catch((err: Base.BusinessError) => {
            hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4100 err is:%{public}s',
              JSON.stringify(err));
            expect().assertFail();
          })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4100 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfo, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_4100 delete successful');
          expect(data).assertEqual(undefined);
          done();
        }).catch((errDel: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4100 errDel is:%{public}s',
            JSON.stringify(errDel));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4100 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_4200
     * @tc.name: Add desktop shortcut by system app. The optional parameter is not given.
     * @tc.desc: Add desktop shortcut by system app. The optional parameter is not given, set the default value.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_4200', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4200 start');
      let userId: number = 100;
      let shortcutInfo: launcherBundleManager.ShortcutInfo = {
        id: 'shortcutInfoid',
        bundleName: 'com.acts.createdesktopshortcutrely',
        appIndex: 0,
        sourceType: 0
      };
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfo, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4200 successful');
          expect(data).assertEqual(undefined);
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4200 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4200 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
      try {
        await shortcutManager.getAllDesktopShortcutInfo(userId)
          .then((shortcutInfos: launcherBundleManager.ShortcutInfo[]) => {
            let shortcutInfoList: string = JSON.stringify(shortcutInfos);
            hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4200 shortcutInfos: %{public}s',
              shortcutInfoList);
            expect(shortcutInfoList).assertContain(str);
          })
          .catch((err: Base.BusinessError) => {
            hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4200 err is:%{public}s',
              JSON.stringify(err));
            expect().assertFail();
          })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4200 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfo, userId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_4200 delete successful');
          expect(data).assertEqual(undefined);
          done();
        }).catch((errDel: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4200 errDel is:%{public}s',
            JSON.stringify(errDel.code));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4200 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_4300
     * @tc.name: Add desktop shortcut by system app, shortcutInfo id is null.
     * @tc.desc: Add desktop shortcut by system app. If shortcutInfo id is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_4300', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4300 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoIdIsNull, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4300 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4300 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4300 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_4400
     * @tc.name: Add desktop shortcut by system app, shortcutInfo id is undefined.
     * @tc.desc: Add desktop shortcut by system app. If shortcutInfo id is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_4400', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4400 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoIdIsUndefined, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4400 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4400 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4400 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_4500
     * @tc.name: Add desktop shortcut by system app, shortcutInfo bundleName is null.
     * @tc.desc: Add desktop shortcut by system app. If shortcutInfo bundleName is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_4500', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4500 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoBundleNameIsNull, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4500 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4500 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4500 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_4600
     * @tc.name: Add desktop shortcut by system app, shortcutInfo bundleName is undefined.
     * @tc.desc: Add desktop shortcut by system app. If shortcutInfo bundleName is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_4600', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4600 start');
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfoBundleNameIsUndefined, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4600 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4600 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4600 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_4700
     * @tc.name: Delete desktop shortcut by system app, shortcutInfo id is null.
     * @tc.desc: Delete desktop shortcut by system app. If shortcutInfo id is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_4700', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4700 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoIdIsNull, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4700 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4700 err is:%{public}s',
            err.code);
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4700 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_4800
     * @tc.name: Delete desktop shortcut by system app, shortcutInfo id is undefined.
     * @tc.desc: Delete desktop shortcut by system app. If shortcutInfo id is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_4800', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4800 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoIdIsUndefined, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4800 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4800 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4800 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_4900
     * @tc.name: Delete desktop shortcut by system app, shortcutInfo bundleName is null.
     * @tc.desc: Delete desktop shortcut by system app. If shortcutInfo bundleName is null, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_4900', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4900 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoBundleNameIsNull, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4900 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4900 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_4900 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_5000
     * @tc.name: Delete desktop shortcut by system app, shortcutInfo bundleName is undefined.
     * @tc.desc: Delete desktop shortcut by system app. If shortcutInfo bundleName is undefined, return 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_5000', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5000 start');
      let userId: number = 100;
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfoBundleNameIsUndefined, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5000 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5000 err:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5000 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect(errCode.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_5500
     * @tc.name: Add desktop shortcut by system app.
     * @tc.desc: Add desktop shortcut by system app. Doppelganger apps can be added.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_5500', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5500 start');
      let appCloneIndex: number = 1;
      let appCloneUserId: number = 100;
      let appCloneBundleName: string = 'com.acts.createdesktopshortcutrely';
      let paramForCreatingAppClone: installer.CreateAppCloneParam = {
        userId: appCloneUserId,
        appIndex: appCloneIndex,
      };
      let shortcutInfo: launcherBundleManager.ShortcutInfo = {
        id: 'shortcutInfoid',
        bundleName: 'com.acts.createdesktopshortcutrely',
        moduleName: 'moduleName',
        hostAbility: 'hostAbility',
        icon: 'icon',
        iconId: 1,
        label: 'label',
        labelId: 1,
        wants: [],
        appIndex: 1,
        sourceType: 0
      };
      let bundleInstaller = await installer.getBundleInstaller();
      await bundleInstaller.createAppClone(appCloneBundleName, paramForCreatingAppClone).then((appIndex: number) => {
        hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5500 success');
      }).catch((err: BusinessError) => {
        hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5500 fail');
        expect().assertFail();
        done();
      });
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfo, appCloneUserId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5500 add successful');
          hilog.info(0x0000, 'testTag', 'ssssss:%{public}s', JSON.stringify(data));
          expect(data).assertEqual(undefined);
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5500 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5500 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      try {
        await shortcutManager.getAllDesktopShortcutInfo(appCloneUserId)
          .then((shortcutInfos: launcherBundleManager.ShortcutInfo[]) => {
            let shortcutInfoList: string = JSON.stringify(shortcutInfos);
            hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5500 shortcutInfos:%{public}s',
              shortcutInfoList);
            expect(shortcutInfoList).assertContain('com.acts.createdesktopshortcutrely');
          })
          .catch((err: Base.BusinessError) => {
            hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5500 err is:%{public}s',
              JSON.stringify(err));
            expect().assertFail();
          })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5500 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfo, appCloneUserId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_5500 delete successful');
          expect(data).assertEqual(undefined);
        }).catch((errDel: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5500 errDel is:%{public}s',
            JSON.stringify(errDel));
          expect().assertFail();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5500 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      await bundleInstaller.destroyAppClone(appCloneBundleName, appCloneIndex, appCloneUserId)
        .then((appIndex: number) => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5500 start');
          done();
        })
        .catch((err: BusinessError) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_5500 destroyAppClone fail');
          done();
        });
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_5600
     * @tc.name: Add desktop shortcut by system app.
     * @tc.desc: Add desktop shortcut by system app. The same doppelganger apps cannot be added, return 17700070.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_5600', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5600 start');
      let appCloneIndex: number = 1;
      let appCloneUserId: number = 100;
      let appCloneBundleName: string = 'com.acts.createdesktopshortcutrely';
      let paramForCreatingAppClone: installer.CreateAppCloneParam = {
        userId: appCloneUserId,
        appIndex: appCloneIndex,
      };
      let shortcutInfo: launcherBundleManager.ShortcutInfo = {
        id: 'shortcutInfoid',
        bundleName: 'com.acts.createdesktopshortcutrely',
        moduleName: 'moduleName',
        hostAbility: 'hostAbility',
        icon: 'icon',
        iconId: 1,
        label: 'label',
        labelId: 1,
        wants: [],
        appIndex: 1,
        sourceType: 0
      };
      let bundleInstaller = await installer.getBundleInstaller();
      await bundleInstaller.createAppClone(appCloneBundleName, paramForCreatingAppClone).then((appIndex: number) => {
        hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5600 success');
      }).catch((err: BusinessError) => {
        hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5600 fail');
        expect().assertFail();
        done();
      });
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfo, appCloneUserId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5600 add successful');
          expect(data).assertEqual(undefined);
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5600 err is:%{public}s',
            JSON.stringify(err));
          expect().assertFail();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5600 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfo, appCloneUserId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5600 add successful');
          expect().assertFail();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5600 err is:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700070);
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5600 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfo, appCloneUserId).then((data: void) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_5600 delete successful');
          expect(data).assertEqual(undefined);
        }).catch((errDel: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5600 errDel is:%{public}s',
            JSON.stringify(errDel));
          expect().assertFail();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5600 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
      }
      await bundleInstaller.destroyAppClone(appCloneBundleName, appCloneIndex, appCloneUserId)
        .then((appIndex: number) => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5600 start');
          done();
        })
        .catch((err: BusinessError) => {
          hilog.info(0x0000, 'testTag', '%{public}s',
            'Sub_Bms_Framework_Create_Desktop_Shortcut_5600 destroyAppClone fail');
          done();
        });
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_5700
     * @tc.name: Add desktop shortcut by system app, appIndex is greater than zero.
     * @tc.desc: Add desktop shortcut by system app. If the doppelganger app doesn't exist, return 17700061.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_5700', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5700 start');
      let shortcutInfo: launcherBundleManager.ShortcutInfo = {
        id: 'shortcutInfoid',
        bundleName: 'com.acts.createdesktopshortcutbysystemapp',
        moduleName: 'moduleName',
        hostAbility: 'hostAbility',
        icon: 'icon',
        iconId: 1,
        label: 'label',
        labelId: 1,
        wants: [],
        appIndex: 1,
        sourceType: 0
      };
      let userId: number = 100;
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfo, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5700 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5700 err is:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(17700061);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_5700 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })
  })
}