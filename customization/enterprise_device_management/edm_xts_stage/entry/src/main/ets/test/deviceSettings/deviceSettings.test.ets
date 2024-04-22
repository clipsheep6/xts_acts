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

import { describe, expect, it } from '@ohos/hypium';
import { ENTINFO1, SELFHAPNAME, SELFWANT } from '../commom';

import adminManager from '@ohos.enterprise.adminManager';
import deviceSettings from '@ohos.enterprise.deviceSettings';

const ITEM_SCREEN_OFF: string = 'screenOff';
const ITEM_POWER_POLICY: string = 'powerPolicy';
const ITEM_DATE_TIME: string = 'dateTime';

export default function deviceSettingsTest() {
  describe('deviceSettings_test', () => {
    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_001
     * @tc.name      : deviceSettings_test_001
     * @tc.desc      : test deviceSettings getValue without admin
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_001", 0, async (done: Function) => {
      try {
        deviceSettings.getValue(SELFWANT, ITEM_SCREEN_OFF);
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 9200001).assertTrue();
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_002
     * @tc.name      : deviceSettings_test_002
     * @tc.desc      : test deviceSettings getValue with normal admin
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_002", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_NORMAL);
      try {
        deviceSettings.getValue(SELFWANT, ITEM_SCREEN_OFF);
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 9200002).assertTrue();
      } finally {
        await adminManager.disableAdmin(SELFWANT);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_003
     * @tc.name      : deviceSettings_test_003
     * @tc.desc      : test deviceSettings getValue unsupported item
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_003", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        deviceSettings.getValue(SELFWANT, '123');
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 801).assertTrue();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_004
     * @tc.name      : deviceSettings_test_004
     * @tc.desc      : test deviceSettings getValue, item = screenOff
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_004", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        let result: string = deviceSettings.getValue(SELFWANT, ITEM_SCREEN_OFF);
        expect(result).not().assertUndefined();
      } catch (error) {
        expect().assertFail();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_005
     * @tc.name      : deviceSettings_test_005
     * @tc.desc      : test deviceSettings getValue, item = powerPolicy
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_005", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        let result: string = deviceSettings.getValue(SELFWANT, ITEM_POWER_POLICY);
        expect(JSON.parse(result)).not().assertUndefined();
      } catch (error) {
        expect().assertFail();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_006
     * @tc.name      : deviceSettings_test_006
     * @tc.desc      : test deviceSettings setValue without admin
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_006", 0, async (done: Function) => {
      try {
        deviceSettings.setValue(SELFWANT, ITEM_SCREEN_OFF, '30000');
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 9200001).assertTrue();
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_007
     * @tc.name      : deviceSettings_test_007
     * @tc.desc      : test deviceSettings setValue with normal admin
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_007", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_NORMAL);
      try {
        deviceSettings.setValue(SELFWANT, ITEM_SCREEN_OFF, '30000');
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 9200002).assertTrue();
      } finally {
        await adminManager.disableAdmin(SELFWANT);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_008
     * @tc.name      : deviceSettings_test_008
     * @tc.desc      : test deviceSettings setValue unsupported item
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_008", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        deviceSettings.setValue(SELFWANT, '123', '30000');
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 801).assertTrue();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_009
     * @tc.name      : deviceSettings_test_009
     * @tc.desc      : test deviceSettings setValue, item = screenOff
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_009", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        deviceSettings.setValue(SELFWANT, ITEM_SCREEN_OFF, '30000');
        expect(true).assertTrue();
      } catch (error) {
        expect().assertFail();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_010
     * @tc.name      : deviceSettings_test_010
     * @tc.desc      : test deviceSettings setValue, item = screenOff, time overflow
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_010", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        deviceSettings.setValue(SELFWANT, ITEM_SCREEN_OFF, '1234567891023687999710');
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 401).assertTrue();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_011
     * @tc.name      : deviceSettings_test_011
     * @tc.desc      : test deviceSettings setValue, item = dateTime
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_011", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        deviceSettings.setValue(SELFWANT, ITEM_DATE_TIME, new Date().getTime().toString());
        expect(true).assertTrue();
      } catch (error) {
        expect().assertFail();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_012
     * @tc.name      : deviceSettings_test_012
     * @tc.desc      : test deviceSettings setValue, item = dateTime, time overflow
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_012", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        deviceSettings.setValue(SELFWANT, ITEM_DATE_TIME, '12345678910236879997100');
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 401).assertTrue();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_013
     * @tc.name      : deviceSettings_test_013
     * @tc.desc      : test deviceSettings setValue, item = powerPolicy
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_013", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        let powerPolicy: deviceSettings.PowerPolicy = {
          powerPolicyAction: deviceSettings.PowerPolicyAction.AUTO_SUSPEND,
          delayTime: 30000
        }
        let powerScene: deviceSettings.PowerScene = deviceSettings.PowerScene.TIME_OUT;
        let value: string = JSON.stringify({
          powerScene: powerScene,
          powerPolicy: powerPolicy
        });
        deviceSettings.setValue(SELFWANT, ITEM_POWER_POLICY, value);
        expect(true).assertTrue();
      } catch (error) {
        expect().assertFail();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_014
     * @tc.name      : deviceSettings_test_014
     * @tc.desc      : test deviceSettings setValue, item = powerPolicy, error powerPolicy undefined
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_014", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        let powerScene: deviceSettings.PowerScene = deviceSettings.PowerScene.TIME_OUT;
        let value: string = JSON.stringify({
          powerScene: powerScene,
          powerPolicy: undefined
        });
        deviceSettings.setValue(SELFWANT, ITEM_POWER_POLICY, value);
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 401).assertTrue();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_015
     * @tc.name      : deviceSettings_test_015
     * @tc.desc      : test deviceSettings setValue, item = powerPolicy, empty value
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_015", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        deviceSettings.setValue(SELFWANT, ITEM_POWER_POLICY, '');
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 401).assertTrue();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_016
     * @tc.name      : deviceSettings_test_016
     * @tc.desc      : test deviceSettings setValue, item = powerPolicy, error value
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_016", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        deviceSettings.setValue(SELFWANT, ITEM_POWER_POLICY, JSON.stringify({
          test: 1,
          testKey: '123'
        }));
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 401).assertTrue();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_017
     * @tc.name      : deviceSettings_test_017
     * @tc.desc      : test deviceSettings setValue, item = powerPolicy, lost powerScene
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_017", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        let powerPolicy: deviceSettings.PowerPolicy = {
          powerPolicyAction: deviceSettings.PowerPolicyAction.AUTO_SUSPEND,
          delayTime: 30000
        }
        let value: string = JSON.stringify({
          powerPolicy: powerPolicy
        });
        deviceSettings.setValue(SELFWANT, ITEM_POWER_POLICY, value);
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 401).assertTrue();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_018
     * @tc.name      : deviceSettings_test_018
     * @tc.desc      : test deviceSettings setValue, item = powerPolicy, lost powerPolicy
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_018", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        let powerScene: deviceSettings.PowerScene = deviceSettings.PowerScene.TIME_OUT;
        let value: string = JSON.stringify({
          powerScene: powerScene,
        });
        deviceSettings.setValue(SELFWANT, ITEM_POWER_POLICY, value);
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 401).assertTrue();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_019
     * @tc.name      : deviceSettings_test_019
     * @tc.desc      : test deviceSettings setValue, item = powerPolicy, error powerScene
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_019", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        let value: string = JSON.stringify({
          powerScene: '0',
        });
        deviceSettings.setValue(SELFWANT, ITEM_POWER_POLICY, value);
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 401).assertTrue();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_SETTINGS_JS_020
     * @tc.name      : deviceSettings_test_020
     * @tc.desc      : test deviceSettings setValue, item = powerPolicy, error powerPolicy
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceSettings_test_020", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        let value: string = JSON.stringify({
          powerPolicy: '123456'
        });
        deviceSettings.setValue(SELFWANT, ITEM_POWER_POLICY, value);
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 401).assertTrue();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });
  })
}