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
import hilog from '@ohos.hilog';

let shortcutInfo: launcherBundleManager.ShortcutInfo = {
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
let userId: number = 100;

export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_0400
     * @tc.name: Add desktop shortcut by system app.
     * @tc.desc: System application does not have permission to add desktop shortcut, returns 201.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_0400', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0400 start');
      try {
        await shortcutManager.addDesktopShortcutInfo(shortcutInfo, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0400 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0400 err is:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(201);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0400 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_0500
     * @tc.name: Delete desktop shortcut by system app.
     * @tc.desc: System application does not have permission to delete desktop shortcut, returns 201.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_0500', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0500 start');
      try {
        await shortcutManager.deleteDesktopShortcutInfo(shortcutInfo, userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0500 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0500 err is:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(201);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0500 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: Sub_Bms_Framework_Create_Desktop_Shortcut_0600
     * @tc.name: Query desktop shortcut by system app.
     * @tc.desc: System application does not have permission to query desktop shortcut, returns 201.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Sub_Bms_Framework_Create_Desktop_Shortcut_0600', 0, async function (done) {
      hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0600 start');
      try {
        await shortcutManager.getAllDesktopShortcutInfo(userId).then(() => {
          hilog.info(0x0000, 'testTag', '%{public}s', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0600 successful');
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0600 err is:%{public}s',
            JSON.stringify(err));
          expect(err.code).assertEqual(201);
          done();
        })
      } catch (errCode) {
        hilog.info(0x0000, 'testTag', 'Sub_Bms_Framework_Create_Desktop_Shortcut_0600 errCode is:%{public}s',
          JSON.stringify(errCode));
        expect().assertFail();
        done();
      }
    })
  })
}