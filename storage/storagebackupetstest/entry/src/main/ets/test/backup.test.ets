/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
import backup from "@ohos.backup";
import { describe, beforeAll, afterAll, it, expect } from '@ohos/hypium'
import fileIO from '@ohos.file.fs';
import hilog from '@ohos.hilog'
import { isIntNum, untarAppHap, installApp, uninstallApp } from './common'

const DOMAIN_CODE = 0x0001;
const TAG = 'backupTest';

export default function backupTest(helper) {

  describe('backupTest', function () {
    beforeAll(async function () {
      console.info("beforeAll case");

      hilog.info(DOMAIN_CODE, TAG, "untar applications begin");
      await untarAppHap(helper, "com.example.app2backup.hap");
      await untarAppHap(helper, "com.example.app3backup.hap");
      await untarAppHap(helper, "com.example.app4backup.hap");
      hilog.info(DOMAIN_CODE, TAG, "untar applications end");

      hilog.info(DOMAIN_CODE, TAG, "install applications begin");
      await installApp("com.example.app2backup.hap");
      await installApp("com.example.app3backup.hap");
      await installApp("com.example.app4backup.hap");
      hilog.info(DOMAIN_CODE, TAG, "install applications end");
    });

    afterAll(async function () {
      console.info("afterAll case");

      hilog.info(DOMAIN_CODE, TAG, "uninstall applications begin");
      await uninstallApp("com.example.app2backup");
      await uninstallApp("com.example.app3backup");
      await uninstallApp("com.example.app4backup");
      hilog.info(DOMAIN_CODE, TAG, "uninstall applications end");
    });

    function createSessionBackup(testNum, done) {
      let session = new backup.SessionBackup({
        onFileReady: async (err, file) => {
          if (err) {
            hilog.error(DOMAIN_CODE, TAG,
              `${testNum} callback onFileReady error: {message: ${err.message}; code: ${err.code}}`);
            expect(false).assertTrue();
          }
          try {
            hilog.info(DOMAIN_CODE, TAG,
              `${testNum} callback onFileReady: {${file.fd}, ${file.uri}, ${file.bundleName}}`);
            let bundlePath = await globalThis.abilityContext.filesDir + '/' + file.bundleName;
            if (!fileIO.accessSync(bundlePath)) {
              fileIO.mkdirSync(bundlePath);
            }
            hilog.info(DOMAIN_CODE, TAG, `${testNum} callback backup to path = ${bundlePath}`);
            fileIO.copyFileSync(file.fd, bundlePath + `/${file.uri}`);
            fileIO.closeSync(file.fd);
            hilog.info(DOMAIN_CODE, TAG, `${testNum} callback onFileReady finish`);
          } catch (e) {
            hilog.info(DOMAIN_CODE, TAG,
              `${testNum} callback onFileReady error: {message: ${e.message}; code: ${e.code}}`);
            expect(false).assertTrue();
          }
        },
        onBundleBegin: (err, bundleName) => {
          if (err) {
            hilog.error(DOMAIN_CODE, TAG,
              `${testNum} callback onBundleBegin error: {message: ${err.message}; code: ${err.code}}`);
            expect(false).assertTrue();
          } else {
            hilog.info(DOMAIN_CODE, TAG, `${testNum} callback onBundleBegin, bundleName = ${bundleName}`);
          }
        },
        onBundleEnd: (err, bundleName) => {
          if (err) {
            hilog.error(DOMAIN_CODE, TAG,
              `${testNum} callback onBundleEnd has failed for: {message: ${err.message}; code: ${err.code}}`);
            expect(false).assertTrue();
          } else {
            hilog.info(DOMAIN_CODE, TAG, `${testNum} callback onBundleEnd, bundleName = ${bundleName}`);
          }
        },
        onAllBundlesEnd: (err) => {
          if (err) {
            hilog.error(DOMAIN_CODE, TAG,
              `${testNum} callback onAllBundlesEnd error: {message: ${err.message}; code: ${err.code}}`);
            expect(false).assertTrue();
          } else {
            hilog.info(DOMAIN_CODE, TAG, `${testNum} callback onAllBundlesEnd`);
          }
          done();
        },
        onBackupServiceDied: () => {
          hilog.error(DOMAIN_CODE, TAG, `${testNum} callback onBackupServiceDied has been invoked`);
          expect(false).assertTrue();
          done();
        },
      });
      return session;
    }

    /**
     * @tc.number    : SUB_STORAGE_BACKUP_GETLOCALCAPABILITIES_0000
     * @tc.name      : Backup_GetLocalCapabilities_000
     * @tc.desc      : Verify the normal functionality of the getLocalCapabilities API. Promise.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('Backup_GetLocalCapabilities_000', 3, async (done) => {
      let testNum = 'Backup_GetLocalCapabilities_000';
      try {
        let fileData = await backup.getLocalCapabilities();
        expect(isIntNum(fileData.fd)).assertTrue();
        expect(fileData.fd > 0).assertTrue();
        hilog.info(DOMAIN_CODE, TAG, `${testNum} fileDataFd = ${fileData.fd}`);
        fileIO.closeSync(fileData.fd);
        done();
      } catch (e) {
        hilog.error(DOMAIN_CODE, TAG, `${testNum} has failed for: {message: ${e.message}; code: ${e.code}}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_STORAGE_BACKUP_SESSIONBACKUP_0000
     * @tc.name      : Backup_Test_SessionBackup_000
     * @tc.desc      : Back up the three applications and verify the basic functionality. Promise.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('Backup_Test_SessionBackup_000', 0, async function (done) {
      let testNum = 'Backup_Test_SessionBackup_000';
      const backupApps = [
        "com.example.app2backup",
        "com.example.app3backup",
        "com.example.app4backup",
      ]

      try {
        let session = createSessionBackup(testNum, done);
        expect(session != null).assertTrue();
        await session.appendBundles(backupApps);
        hilog.info(DOMAIN_CODE, TAG, `${testNum} appendBundles success!`);
      } catch (e) {
        hilog.error(DOMAIN_CODE, TAG, `${testNum} has failed for: {message: ${e.message}; code: ${e.code}}`);
        expect(false).assertTrue();
        done();
      }
    });
  })
}