/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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
import fileIO from '@ohos.file.fs';
import { describe, beforeAll, it, expect } from "deccjsunit/index";
import { sleep, isIntNum, getPermission } from './Common'

export default function backupTest(abilityContext) {
  describe("backupTest", function () {
    beforeAll(async function () {
      console.info("beforeAll case");
      // await getPermission(null, abilityContext);
    });

  function createSessionBackup(testNum) {
    let session = new backup.SessionBackup({
      onFileReady: async (err, file) => {
        if (err) {
          console.log(`callback: ${testNum}-onFileReady error: {message: ${err.message}; code: ${err.code}}`);
          expect(false).assertTrue();
        }
        try {
          console.log(`callback: ${testNum}-fileReady: {${file.fd}, ${file.fileName}, ${file.bundleName}}`);
          let bundlePath = abilityContext.filesDir + '/' + file.bundleName;
          fileIO.mkdirSync(bundlePath);
          console.log(`callback: ${testNum}-fpath = ${bundlePath}`);
          fileIO.copyFile(file.fd, bundlePath, (err) => {
            fileIO.closeSync(file.fd);
            if (err) {
              console.log(`callback: ${testNum}-copyFile error: {message: ${err.message}; code: ${err.code}}`);
              expect(false).assertTrue();
            }
          }); // 目前使用：“应用沙箱路径/bundleName”目录存放备份文件
          console.log(`callback: ${testNum}-fileReady finish`);
        } catch (e) {
          console.log(`callback: ${testNum}-fileReady error: {message: ${e.message}; code: ${e.code}}`);
          expect(false).assertTrue();
        }
      },
      onBundleStarted: (err, bundleName) => {
        if (err) {
          console.log(`callback: ${testNum}-bundleStarted error: {message: ${err.message}; code: ${err.code}}`);
          expect(false).assertTrue();
        } else {
          console.log(`callback: ${testNum}-bundleStarted, bundleName = ${bundleName}`);
        }
      },
      onBundleFinished: (err, bundleName) => {
        if (err) {
          console.log(`callback: ${testNum}-bundleFinished has failed for: {message: ${err.message}; code: ${err.code}}`);
          expect(false).assertTrue();
        } else {
          console.log(`callback: ${testNum}-bundleFinished, bundleName = ${bundleName}`);
        }
      },
      onAllBundlesFinished: (err) => {
        if (err) {
          console.log(`callback: ${testNum}-allBundlesFinished error: {message: ${err.message}; code: ${err.code}}`);
          expect(false).assertTrue();
        } else {
          console.log(`callback: ${testNum}-allBundlesFinished`);
        }
      },
      onBackupServiceDied: () => {
        console.log(`callback: ${testNum}-onBackupServiceDied has been invoked`);
        expect(false).assertTrue();
      },
    });
    return session;
    }

  /**
   * @tc.number    : SUB_STORAGE_BACKUP_GETLOCALCAPABILITIES_0000
   * @tc.name      : Backup_GetLocalCapabilities_000
   * @tc.desc      : Verify the normal functionality of the getLocalCapabilities API. Callback.
   * @tc.size      : MEDIUM
   * @tc.type      : Function
   * @tc.level     : Level 3
   */
  it('Backup_GetLocalCapabilities_000', 0, async function (done) {
    let testNum = 'Backup_GetLocalCapabilities_000';

    try {
      backup.getLocalCapabilities((err, fileData) => {
        if (err) {
          console.log(`${testNum} error: {message: ${err.message}; code: ${err.code}}`);
          expect(false).assertTrue();
        }
        expect(isIntNum(fileData)).assertTrue();
        console.log(`${testNum} fileDataFd = ${fileData.fd}`);
        done();
      });
    } catch (e) {
      console.log(`${testNum} has failed for ${e.message}, code: ${e.code}`);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number    : SUB_STORAGE_BACKUP_GETLOCALCAPABILITIES_0100
   * @tc.name      : Backup_GetLocalCapabilities_001
   * @tc.desc      : Verify the normal functionality of the getLocalCapabilities API. Promise.
   * @tc.size      : MEDIUM
   * @tc.type      : Function
   * @tc.level     : Level 3
   */
  it('Backup_GetLocalCapabilities_001', 0, async function (done) {
    let testNum = 'Backup_GetLocalCapabilities_001';

    try {
      let fileData = await backup.getLocalCapabilities();
      expect(isIntNum(fileData)).assertTrue();
      console.log(`${testNum} fileDataFd = ${fileData.fd}`);
      done();
    } catch (e) {
      console.log(`${testNum} has failed for: {message: ${e.message}; code: ${e.code}}`);
      expect(false).assertTrue();
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
    const app2backup = [
      "com.example.app2backup",
      "com.example.app3backup",
      "com.example.app4backup",
    ]

    try {
      let session = createSessionBackup(testNum);
      expect(session != null).assertTrue();
      await session.appendBundles(app2backup);
      console.log(`${testNum} appendBundles success!`);
      await session.start();
      console.log(`${testNum} start success!`);
      await session.finish();
      console.log(`${testNum} finish success!`);
      await sleep(3000);
      done();
    } catch (e) {
      console.log(`${testNum} has failed for: {message: ${e.message}; code: ${e.code}}`);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number    : SUB_STORAGE_BACKUP_SESSIONBACKUP_0100
   * @tc.name      : Backup_Test_SessionBackup_001
   * @tc.desc      : Back up the three applications and verify the basic functionality. Callback.
   * @tc.size      : MEDIUM
   * @tc.type      : Function
   * @tc.level     : Level 0
   */
  it('Backup_Test_SessionBackup_001', 0, async function (done) {
    let testNum = 'Backup_Test_SessionBackup_001';
    const app2backup = [
      "com.example.app2backup",
      "com.example.app3backup",
      "com.example.app4backup",
    ]

    try {
      let session = createSessionBackup(testNum);
      expect(session != null).assertTrue();
      session.appendBundles(app2backup, (err) => {
        if (err) {
          console.log(`${testNum}-appendBundles error: {message: ${err.message}; code: ${err.code}}`);
          expect(false).assertTrue();
        }
        console.log(`${testNum} appendBundles success!`);
        session.start((err) => {
          if (err) {
            console.log(`${testNum}-start error: {message: ${err.message}; code: ${err.code}}`);
            expect(false).assertTrue();
          }
          console.log(`${testNum} start success!`);
          session.finish((err) => {
            if (err) {
              console.log(`${testNum}-finish error: {message: ${err.message}; code: ${err.code}}`);
              expect(false).assertTrue();
            }
            console.log(`${testNum} finish success!`);
            done();
          });
        });
      });
    } catch (e) {
      console.log(`${testNum} has failed for: {message: ${e.message}; code: ${e.code}}`);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number    : SUB_STORAGE_BACKUP_SESSIONBACKUP_0200
   * @tc.name      : Backup_Test_SessionBackup_002
   * @tc.desc      : Exception is thrown due to the second invoke of appendBundles API.
   * @tc.size      : MEDIUM
   * @tc.type      : Function
   * @tc.level     : Level 3
   */
  it('Backup_Test_SessionBackup_002', 0, async function (done) {
    let testNum = 'Backup_Test_SessionBackup_002';

    try {
      let session = createSessionBackup(testNum);
      expect(session != null).assertTrue();
      await session.appendBundles(["com.example.app2backup"]);
      console.log(`${testNum} appendBundles2 success!`);
      await session.start();
      console.log(`${testNum} start1 success!`);
      await session.appendBundles(["com.example.app3backup"]);
      expect(false).assertTrue();
    } catch (e) {
      await sleep(5000);
      console.log(`${testNum} has failed for: {message: ${e.message}; code: ${e.code}}`);
      expect(e.message == 'Operation not permitted' && e.code == 13500002).assertTrue();
      done();
    }
  });

  /**
   * @tc.number    : SUB_STORAGE_BACKUP_SESSIONBACKUP_0300
   * @tc.name      : Backup_Test_SessionBackup_003
   * @tc.desc      : Apps that don't exist can't be backed up.
   * @tc.size      : MEDIUM
   * @tc.type      : Function
   * @tc.level     : Level 3
   */
  it('Backup_Test_SessionBackup_003', 0, async function (done) {
    let testNum = 'Backup_Test_SessionBackup_003';

    try {
      let session = createSessionBackup(testNum);
      expect(session != null).assertTrue();
      await session.appendBundles(["com.example.invalidApp"]);
      expect(false).assertTrue();
    } catch (e) {
      await sleep(5000);
      console.log(`${testNum} has failed for: {message: ${e.message}; code: ${e.code}}`);
      expect(e.message == 'Invalid argument' && e.code == 13500003).assertTrue();
      done();
    }
  });

  /**
   * @tc.number    : SUB_STORAGE_BACKUP_SESSIONBACKUP_0400
   * @tc.name      : Backup_Test_SessionBackup_004
   * @tc.desc      : Exception is thrown due to invalid parametor.
   * @tc.size      : MEDIUM
   * @tc.type      : Function
   * @tc.level     : Level 3
   */
  it('Backup_Test_SessionBackup_004', 0, async function (done) {
    let testNum = 'Backup_Test_SessionBackup_004';

    try {
      let session = createSessionBackup(testNum);
      expect(session != null).assertTrue();
      await session.appendBundles(["com.example.app2backup"]);
      console.log(`${testNum} appendBundles success!`);
      // @ts-ignore
      await session.start(-1);
      expect(false).assertTrue();
    } catch (e) {
      await sleep(5000);
      console.log(`${testNum} has failed for: {message: ${e.message}; code: ${e.code}}`);
      expect(e.message == 'Invalid argument' && e.code == 13500003).assertTrue();
      done();
    }
  });

  /**
   * @tc.number    : SUB_STORAGE_BACKUP_SESSIONBACKUP_0500
   * @tc.name      : Backup_Test_SessionBackup_005
   * @tc.desc      : Exception is thrown due to invalid parametor.
   * @tc.size      : MEDIUM
   * @tc.type      : Function
   * @tc.level     : Level 3
   */
  it('Backup_Test_SessionBackup_005', 0, async function (done) {
    let testNum = 'Backup_Test_SessionBackup_005';

    try {
      let session = createSessionBackup(testNum);
      expect(session != null).assertTrue();
      await session.appendBundles(["com.example.app2backup"]);
      console.log(`${testNum} appendBundles success!`);
      await session.start();
      console.log(`${testNum} start success!`);
      // @ts-ignore
      await session.finish(-1);
      expect(false).assertTrue();
    } catch (e) {
      await sleep(5000);
      console.log(`${testNum} has failed for: {message: ${e.message}; code: ${e.code}}`);
      expect(e.message == 'Invalid argument' && e.code == 13500003).assertTrue();
      done();
    }
  });

  /**
   * @tc.number    : SUB_STORAGE_BACKUP_SESSIONBACKUP_0600
   * @tc.name      : Backup_Test_SessionBackup_006
   * @tc.desc      : Can't invoke the appendBundles API, after the backup process is complete.
   * @tc.size      : MEDIUM
   * @tc.type      : Function
   * @tc.level     : Level 3
   */
  it('Backup_Test_SessionBackup_006', 0, async function (done) {
    let testNum = 'Backup_Test_SessionBackup_006';

    try {
      let session = createSessionBackup(testNum);
      expect(session != null).assertTrue();
      await session.finish();
      console.log(`${testNum} finish success!`);
      await session.appendBundles(["com.example.app2backup"]);
      expect(false).assertTrue();
    } catch (e) {
      await sleep(5000);
      console.log(`${testNum} has failed for: {message: ${e.message}; code: ${e.code}}`);
      expect(e.message == 'Operation not permitted' && e.code == 13500002).assertTrue();
      done();
    }
  });
});
}



