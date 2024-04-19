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
import { ENTINFO1, SELFWANT, SELFHAPNAME } from '../commom';

import adminManager from '@ohos.enterprise.adminManager';
import deviceInfo from '@ohos.enterprise.deviceInfo';

const LABEL_DEVICE_NAME: string = 'deviceName';
const LABEL_DEVICE_SERIAL: string = 'deviceSerial';
const LABEL_SIM_INFO: string = 'simInfo';

export default function deviceInfoTest() {
  describe('deviceInfo_test', () => {
    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_INFO_JS_001
     * @tc.name      : deviceInfo_test_001
     * @tc.desc      : test deviceInfo getDeviceInfo without admin
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceInfo_test_001", 0, async (done: Function) => {
      try {
        deviceInfo.getDeviceInfo(SELFWANT, LABEL_DEVICE_NAME);
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 9200001).assertTrue();
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_INFO_JS_002
     * @tc.name      : deviceInfo_test_002
     * @tc.desc      : test deviceInfo getDeviceInfo with normal admin
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceInfo_test_002", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_NORMAL);
      try {
        deviceInfo.getDeviceInfo(SELFWANT, LABEL_DEVICE_NAME);
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 9200002).assertTrue();
      } finally {
        await adminManager.disableAdmin(SELFWANT);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_INFO_JS_003
     * @tc.name      : deviceInfo_test_003
     * @tc.desc      : test deviceInfo getDeviceInfo unsupported item
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceInfo_test_003", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        deviceInfo.getDeviceInfo(SELFWANT, '123');
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 801).assertTrue();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_INFO_JS_004
     * @tc.name      : deviceInfo_test_004
     * @tc.desc      : test deviceInfo getDeviceInfo, item = deviceName
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceInfo_test_004", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        let result: string = deviceInfo.getDeviceInfo(SELFWANT, LABEL_DEVICE_NAME);
        expect(result).not().assertUndefined();
      } catch (error) {
        expect().assertFail();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_INFO_JS_005
     * @tc.name      : deviceInfo_test_005
     * @tc.desc      : test deviceInfo getDeviceInfo, item = deviceSerial
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceInfo_test_005", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        let result: string = deviceInfo.getDeviceInfo(SELFWANT, LABEL_DEVICE_SERIAL);
        expect(result).not().assertUndefined();
      } catch (error) {
        expect().assertFail();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });

    /**
     * @tc.number    : SUB_CUSTOMIZATION_EDM_DEVICE_INFO_JS_006
     * @tc.name      : deviceInfo_test_006
     * @tc.desc      : test deviceInfo getDeviceInfo, item = deviceSerial
     * @tc.level     : Level 2
     * @tc.type      : Function
     * @tc.size      : MediumTest
     */
    it("deviceInfo_test_006", 0, async (done: Function) => {
      await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
      try {
        let result: string = deviceInfo.getDeviceInfo(SELFWANT, LABEL_SIM_INFO);
        expect(JSON.parse(result)).not().assertUndefined();
      } catch (error) {
        expect().assertFail();
      } finally {
        await adminManager.disableSuperAdmin(SELFHAPNAME);
      }
      done();
    });
  })
}