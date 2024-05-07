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

import { BusinessError } from '@ohos.base';
import { describe, expect, it, Level } from '@ohos/hypium';
import { ENTINFO1, SELFWANT, SELFHAPNAME } from '../commom';

import adminManager from '@ohos.enterprise.adminManager';
import systemManager from '@ohos.enterprise.systemManager';

export default function systemManagerTest() {
  describe('systemManager_test', () => {
    testSetNTPSever();
    testGetNTPSever();
    testSetOtaUpdatePolicy();
    testGetOtaUpdatePolicy();
    testNotifyUpgradePackages();
    testGetupgradeResult();
  })
}

function testSetNTPSever() {
  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_SET_NTP_SERVER_JS_0100
   * @tc.name      : test_set_ntp_sever_0100
   * @tc.desc      : test systemManager setNTPServer without admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_set_ntp_sever_0100", Level.LEVEL2, async (done: Function) => {
    try {
      systemManager.setNTPServer(SELFWANT, '');
      expect(false).assertTrue();
    } catch (error) {
      expect(error.code == 9200001).assertTrue();
    }
    done();
  });
}

function testGetNTPSever() {
  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_GET_NTP_SERVER_JS_0100
   * @tc.name      : test_get_ntp_sever_0100
   * @tc.desc      : test systemManager getNTPServer without admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_get_ntp_sever_0100", Level.LEVEL2, async (done: Function) => {
    try {
      systemManager.getNTPServer(SELFWANT);
      expect(false).assertTrue();
    } catch (error) {
      expect(error.code == 9200001).assertTrue();
    }
    done();
  });
}

function testSetOtaUpdatePolicy() {
  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_SET_OTA_UPDATE_POLICY_JS_0100
   * @tc.name      : test_set_ota_update_policy_0100
   * @tc.desc      : test systemManager setOtaUpdatePolicy without admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_set_ota_update_policy_0100", Level.LEVEL2, async (done: Function) => {
    let policy: systemManager.OtaUpdatePolicy = {
      "policyType": systemManager.PolicyType.DEFAULT,
      "version": "version1.0",
    }
    try {
      systemManager.setOtaUpdatePolicy(SELFWANT, policy);
      expect(false).assertTrue();
    } catch (error) {
      expect(error.code == 9200001).assertTrue();
    }
    done();
  });

  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_SET_OTA_UPDATE_POLICY_JS_0200
   * @tc.name      : test_set_ota_update_policy_0200
   * @tc.desc      : test systemManager setOtaUpdatePolicy with normal admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_set_ota_update_policy_0200", Level.LEVEL2, async (done: Function) => {
    await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_NORMAL);
    let policy: systemManager.OtaUpdatePolicy = {
      "policyType": systemManager.PolicyType.PROHIBIT,
      "version": "version1.0",
    }
    try {
      systemManager.setOtaUpdatePolicy(SELFWANT, policy);
      expect(false).assertTrue();
    } catch (error) {
      expect(error.code == 9200002).assertTrue();
    } finally {
      await adminManager.disableAdmin(SELFWANT);
    }
    done();
  });

  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_SET_OTA_UPDATE_POLICY_JS_0300
   * @tc.name      : test_set_ota_update_policy_0300
   * @tc.desc      : test systemManager setOtaUpdatePolicy with super admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_set_ota_update_policy_0300", Level.LEVEL2, async (done: Function) => {
    await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
    let policy: systemManager.OtaUpdatePolicy = {
      "policyType": systemManager.PolicyType.UPDATE_TO_SPECIFIC_VERSION,
      "version": "version1.0",
      "latestUpdateTime": 110000000,
    }
    try {
      systemManager.setOtaUpdatePolicy(SELFWANT, policy);

      let getPolicy: systemManager.OtaUpdatePolicy = systemManager.getOtaUpdatePolicy(SELFWANT);
      expect(getPolicy.policyType == systemManager.PolicyType.UPDATE_TO_SPECIFIC_VERSION).assertTrue();
      expect(getPolicy.version == policy.version).assertTrue();
    } catch (error) {
      expect(error.code == 801).assertTrue();
    } finally {
      await adminManager.disableSuperAdmin(SELFHAPNAME);
    }
    done();
  });

  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_SET_OTA_UPDATE_POLICY_JS_0400
   * @tc.name      : test_set_ota_update_policy_0400
   * @tc.desc      : test systemManager setOtaUpdatePolicy with super admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_set_ota_update_policy_0400", Level.LEVEL2, async (done: Function) => {
    await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
    let policy: systemManager.OtaUpdatePolicy = {
      "policyType": systemManager.PolicyType.FORCE_IMMEDIATE_UPDATE,
      "version": "version1.0",
    }
    try {
      systemManager.setOtaUpdatePolicy(SELFWANT, policy);
      expect(false).assertTrue();
    } catch (error) {
      expect(error.code == 401).assertTrue();
    } finally {
      await adminManager.disableSuperAdmin(SELFHAPNAME);
    }
    done();
  });

  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_SET_OTA_UPDATE_POLICY_JS_0500
   * @tc.name      : test_set_ota_update_policy_0500
   * @tc.desc      : test systemManager setOtaUpdatePolicy with super admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_set_ota_update_policy_0500", Level.LEVEL2, async (done: Function) => {
    await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
    let policy: systemManager.OtaUpdatePolicy = {
      "policyType": systemManager.PolicyType.FORCE_IMMEDIATE_UPDATE,
      "version": "version1.0",
      "latestUpdateTime": 110000000,
    }
    try {
      systemManager.setOtaUpdatePolicy(SELFWANT, policy);
      expect(true).assertTrue();
    } catch (error) {
      expect(error.code == 801).assertTrue();
    } finally {
      await adminManager.disableSuperAdmin(SELFHAPNAME);
    }
    done();
  });

  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_SET_OTA_UPDATE_POLICY_JS_0600
   * @tc.name      : test_set_ota_update_policy_0600
   * @tc.desc      : test systemManager setOtaUpdatePolicy with super admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_set_ota_update_policy_0600", Level.LEVEL2, async (done: Function) => {
    await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
    let policy: systemManager.OtaUpdatePolicy = {
      "policyType": systemManager.PolicyType.WINDOWS,
      "version": "version1.0",
    }
    try {
      systemManager.setOtaUpdatePolicy(SELFWANT, policy);
      expect(false).assertTrue();
    } catch (error) {
      expect(error.code == 401).assertTrue();
    } finally {
      await adminManager.disableSuperAdmin(SELFHAPNAME);
    }
    done();
  });

  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_SET_OTA_UPDATE_POLICY_JS_0700
   * @tc.name      : test_set_ota_update_policy_0700
   * @tc.desc      : test systemManager setOtaUpdatePolicy with super admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_set_ota_update_policy_0700", Level.LEVEL2, async (done: Function) => {
    await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
    let policy: systemManager.OtaUpdatePolicy = {
      "policyType": systemManager.PolicyType.WINDOWS,
      "version": "version1.0",
      "installStartTime": 110000000,
      "installEndTime": 110000001, 
    }
    try {
      systemManager.setOtaUpdatePolicy(SELFWANT, policy);
      expect(true).assertTrue();
    } catch (error) {
      expect(error.code == 801).assertTrue();
    } finally {
      await adminManager.disableSuperAdmin(SELFHAPNAME);
    }
    done();
  });

  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_SET_OTA_UPDATE_POLICY_JS_0800
   * @tc.name      : test_set_ota_update_policy_0800
   * @tc.desc      : test systemManager setOtaUpdatePolicy with super admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_set_ota_update_policy_0800", Level.LEVEL2, async (done: Function) => {
    await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
    let policy: systemManager.OtaUpdatePolicy = {
      "policyType": systemManager.PolicyType.POSTPONE,
      "version": "version1.0",
    }
    try {
      systemManager.setOtaUpdatePolicy(SELFWANT, policy);
      expect(false).assertTrue();
    } catch (error) {
      expect(error.code == 401).assertTrue();
    } finally {
      await adminManager.disableSuperAdmin(SELFHAPNAME);
    }
    done();
  });

  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_SET_OTA_UPDATE_POLICY_JS_0900
   * @tc.name      : test_set_ota_update_policy_0900
   * @tc.desc      : test systemManager setOtaUpdatePolicy with super admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_set_ota_update_policy_0900", Level.LEVEL2, async (done: Function) => {
    await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
    let policy: systemManager.OtaUpdatePolicy = {
      "policyType": systemManager.PolicyType.POSTPONE,
      "version": "version1.0",
      "delayUpdateTime": 110000000, 
    }
    try {
      systemManager.setOtaUpdatePolicy(SELFWANT, policy);
      expect(true).assertTrue();
    } catch (error) {
      expect(error.code == 801).assertTrue();
    } finally {
      await adminManager.disableSuperAdmin(SELFHAPNAME);
    }
    done();
  });
}

function testGetOtaUpdatePolicy() {
  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_GET_OTA_UPDATE_POLICY_JS_0100
   * @tc.name      : test_set_ota_update_policy_0100
   * @tc.desc      : test systemManager setOtaUpdatePolicy without admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_get_ota_update_policy_0100", Level.LEVEL2, async (done: Function) => {
    try {
      systemManager.getOtaUpdatePolicy(SELFWANT);
      expect(false).assertTrue();
    } catch (error) {
      expect(error.code == 9200001).assertTrue();
    }
    done();
  });

  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_GET_OTA_UPDATE_POLICY_JS_0200
   * @tc.name      : test_get_ota_update_policy_0200
   * @tc.desc      : test systemManager setOtaUpdatePolicy with normal admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_get_ota_update_policy_0200", Level.LEVEL2, async (done: Function) => {
    await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_NORMAL);
    try {
      systemManager.getOtaUpdatePolicy(SELFWANT);
      expect(false).assertTrue();
    } catch (error) {
      expect(error.code == 9200002).assertTrue();
    } finally {
      await adminManager.disableAdmin(SELFWANT);
    }
    done();
  });
}

function testNotifyUpgradePackages() {
  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_NOTIFY_UPGRADE_PACKAGES_JS_0100
   * @tc.name      : test_notify_upgrade_packages_0100
   * @tc.desc      : test systemManager notifyUpgradePackages without admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_notify_upgrade_packages_0100", Level.LEVEL2, async (done: Function) => {
    let updatePaskageInfo: Array<systemManager.Package> = [{
      "type": systemManager.PackageType.FIRMWARE,
      "path": "path"
    }]
    let upgradePackageInfo: systemManager.UpgradePackageInfo = {
      "version" : "version1.0",
      "packages" : updatePaskageInfo,
    };
    try {
      systemManager.notifyUpgradePackages(SELFWANT, upgradePackageInfo);
      expect(false).assertTrue();
    } catch (error) {
      expect(error.code == 9200001).assertTrue();
    }
    done();
  });

  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_NOTIFY_UPGRADE_PACKAGES_JS_0200
   * @tc.name      : test_notify_upgrade_packages_0200
   * @tc.desc      : test systemManager notifyUpgradePackages without admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_notify_upgrade_packages_0200", Level.LEVEL2, async (done: Function) => {
    await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_NORMAL);
    let updatePaskageInfo: Array<systemManager.Package> = [{
      "type": systemManager.PackageType.FIRMWARE,
      "path": "path"
    }]
    let upgradePackageInfo: systemManager.UpgradePackageInfo = {
      "version" : "version1.0",
      "packages" : updatePaskageInfo,
    };
    try {
      systemManager.notifyUpgradePackages(SELFWANT, upgradePackageInfo);
      expect(false).assertTrue();
    } catch (error) {
      expect(error.code == 9200002).assertTrue();
    } finally {
      await adminManager.disableAdmin(SELFWANT);
    }
    done();
  });

  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_NOTIFY_UPGRADE_PACKAGES_JS_0300
   * @tc.name      : test_notify_upgrade_packages_0300
   * @tc.desc      : test systemManager notifyUpgradePackages without admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_notify_upgrade_packages_0300", Level.LEVEL2, async (done: Function) => {
    await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
    let notify: systemManager.NotifyDescription = {
      "installTips": "installTips",
      "installTipsDetail": "installTips detail"
    }
    let description: systemManager.PackageDescription = {
      "notify": notify,
    }
    let updatePaskageInfo: Array<systemManager.Package> = [{
      "type": systemManager.PackageType.FIRMWARE,
      "path": "path"
    }]
    let upgradePackageInfo: systemManager.UpgradePackageInfo = {
      "version" : "version1.0",
      "packages" : updatePaskageInfo,
      "description" : description,
    };
    try {
      systemManager.notifyUpgradePackages(SELFWANT, upgradePackageInfo);
      expect(true).assertTrue();
    } catch (error) {
      expect(error.code == 801).assertTrue();
    } finally {
      await adminManager.disableSuperAdmin(SELFHAPNAME);
    }
    done();
  });
}

function testGetupgradeResult() {
  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_GET_UPGRADE_RESULT_JS_0100
   * @tc.name      : test_get_upgrade_result_0100
   * @tc.desc      : test systemManager getOtaUpdatePolicy without admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_get_upgrade_result_0100", Level.LEVEL2, async (done: Function) => {
    await systemManager.getUpgradeResult(SELFWANT).then((data: systemManager.OtaUpdatePolicy) => {
      expect(false).assertTrue();
    }).catch((error: BusinessError) => {
      expect(error.code == 9200001).assertTrue();
    });
    done();
  });

  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_GET_UPGRADE_RESULT_JS_0200
   * @tc.name      : test_get_upgrade_result_0200
   * @tc.desc      : test systemManager getOtaUpdatePolicy without admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_get_upgrade_result_0200", Level.LEVEL2, async (done: Function) => {
    await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_NORMAL);
    await systemManager.getUpgradeResult(SELFWANT).then((data: systemManager.OtaUpdatePolicy) => {
      expect(false).assertTrue();
    }).catch((error: BusinessError) => {
      expect(error.code == 9200002).assertTrue();
    });
    await adminManager.disableAdmin(SELFWANT);
    done();
  });

  /**
   * @tc.number    : SUB_CUSTOMIZATION_EDM_GET_UPGRADE_RESULT_JS_0300
   * @tc.name      : test_get_upgrade_result_0300
   * @tc.desc      : test systemManager getOtaUpdatePolicy without admin
   * @tc.level     : Level 2
   * @tc.type      : Function
   * @tc.size      : MediumTest
   */
  it("test_get_upgrade_result_0300", Level.LEVEL2, async (done: Function) => {
    await adminManager.enableAdmin(SELFWANT, ENTINFO1, adminManager.AdminType.ADMIN_TYPE_SUPER);
    await systemManager.getUpgradeResult(SELFWANT).then((data: systemManager.OtaUpdatePolicy) => {
      console.log(`get upgrade result success. version: ${data.version}, status: ${data.status},
        errorCode: ${data.errorInfo.code}, errorMsg: ${data.errorInfo.message}`)
      expect(data != null).assertTrue();
      let status: boolean = data.status == systemManager.UpgradeStatus.NO_UPGRADE_PACKAGE ||
        data.status == systemManager.UpgradeStatus.UPGRADE_WAITING ||
        data.status == systemManager.UpgradeStatus.UPGRADING ||
        data.status == systemManager.UpgradeStatus.UPGRADE_FAILURE ||
        data.status == systemManager.UpgradeStatus.UPGRADE_SUCCESS;
      expect(status).assertTrue();
    }).catch((error: BusinessError) => {
      expect(error.code == 801).assertTrue();
    });
    await adminManager.disableSuperAdmin(SELFHAPNAME);;
    done();
  });
}