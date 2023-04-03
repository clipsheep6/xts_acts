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
import { isIntNum, untarAppHap, installApp, uninstallApp, untarAppBackupResource } from './common'

const DOMAIN_CODE = 0x0001;
const TAG = 'restoreTest';

export default function restoreTest(helper) {

  describe('restoreTest', function () {
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

      hilog.info(DOMAIN_CODE, TAG, "untar applications resource begin");
      await untarAppBackupResource(helper, "com.example.app2backup", "app2backup_1.tar", "1.tar");
      await untarAppBackupResource(helper, "com.example.app2backup", "app2backup_manage.json", "manage.json");
      await untarAppBackupResource(helper, "com.example.app3backup", "app3backup_1.tar", "1.tar");
      await untarAppBackupResource(helper, "com.example.app3backup", "app3backup_manage.json", "manage.json");
      await untarAppBackupResource(helper, "com.example.app4backup", "app4backup_1.tar", "1.tar");
      await untarAppBackupResource(helper, "com.example.app4backup", "app4backup_manage.json", "manage.json");
      hilog.info(DOMAIN_CODE, TAG, "untar applications resource end");
    });

    afterAll(async function () {
      console.info("afterAll case");

      hilog.info(DOMAIN_CODE, TAG, "uninstall applications begin");
      await uninstallApp("com.example.app2backup");
      await uninstallApp("com.example.app3backup");
      await uninstallApp("com.example.app4backup");
      hilog.info(DOMAIN_CODE, TAG, "uninstall applications end");
    });

    let g_session;

    function createSessionRestore(testNum, done) {
      let session = new backup.SessionRestore({
        onFileReady: async (err, file) => {
          if (err) {
            hilog.error(DOMAIN_CODE, TAG,
              `${testNum} callback onFileReady error: {message: ${err.message}; code: ${err.code}}`);
            expect(false).assertTrue();
          }
          try {
            hilog.info(DOMAIN_CODE, TAG,
              `${testNum} callback onFileReady: {${file.fd}, ${file.uri}, ${file.bundleName}}`);
            let filePath = await globalThis.abilityContext.filesDir + '/' + file.bundleName + '/' + file.uri;
            fileIO.copyFile(filePath, file.fd, (err) => {
              fileIO.closeSync(file.fd);
              if (err) {
                hilog.info(DOMAIN_CODE, TAG,
                  `${testNum} callback copyFile error: {message: ${err.message}; code: ${err.code}}`);
                expect(false).assertTrue();
              }
            });
            await g_session.publishFile({
              bundleName: file.bundleName,
              fileName: file.uri
            });
            hilog.info(DOMAIN_CODE, TAG, `${testNum} callback onFileReady finish`);
          } catch (e) {
            hilog.error(DOMAIN_CODE, TAG,
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
              `${testNum} callback onBundleEnd error: {message: ${err.message}; code: ${err.code}}`);
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
       * @tc.number    : SUB_STORAGE_RESTORE_GETLOCALCAPABILITIES_0000
       * @tc.name      : Restore_GetLocalCapabilities_000
       * @tc.desc      : Verify the normal functionality of the getLocalCapabilities API. Callback.
       * @tc.size      : MEDIUM
       * @tc.type      : Function
       * @tc.level     : Level 3
       */
    it('Restore_GetLocalCapabilities_000', 3, async (done) => {
      let testNum = 'Restore_GetLocalCapabilities_000';
      try {
        backup.getLocalCapabilities((err, fileData) => {
          if (err) {
            hilog.error(DOMAIN_CODE, TAG,
              `${testNum} GetLocalCapabilities error: {message: ${err.message}; code: ${err.code}}`);
            expect(false).assertTrue();
          }

          expect(isIntNum(fileData.fd)).assertTrue();
          expect(fileData.fd > 0).assertTrue();
          hilog.info(DOMAIN_CODE, TAG, `${testNum} fileDataFd = ${fileData.fd}`);
          fileIO.closeSync(fileData.fd);
          done();
        });
      } catch (e) {
        hilog.error(DOMAIN_CODE, TAG, `${testNum} has failed for: {message: ${e.message}; code: ${e.code}}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_STORAGE_RESTORE_SESSIONRESTORE_0000
     * @tc.name      : Restore_Test_SessionRestore_000
     * @tc.desc      : @tc.desc Restore the three applications and verify the basic functionality.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('Restore_Test_SessionRestore_000', 0, async (done) => {
      let testNum = 'Restore_Test_SessionRestore_000';
      const restoreApps = [
        "com.example.app2backup",
        "com.example.app3backup",
        "com.example.app4backup",
      ];

      try {
        let fileData = await backup.getLocalCapabilities();
        expect(isIntNum(fileData.fd)).assertTrue();
        expect(fileData.fd > 0).assertTrue();
        hilog.info(DOMAIN_CODE, TAG, `${testNum} fileDataFd = ${fileData.fd}`);

        let session = createSessionRestore(testNum, done);
        g_session = session;

        await session.appendBundles(fileData.fd, restoreApps);
        hilog.info(DOMAIN_CODE, TAG, `${testNum} appendBundles success!`);
        for (let index in restoreApps) {
          await session.getFileHandle({
            bundleName: restoreApps[index],
            fileName: "manage.json"
          });
          await session.getFileHandle({
            bundleName: restoreApps[index],
            fileName: "1.tar"
          });
        }
      } catch (e) {
        hilog.error(DOMAIN_CODE, TAG, `${testNum} has failed for: {message: ${e.message}; code: ${e.code}}`);
        expect(false).assertTrue();
        done();
      }
    });
  })
}