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
import { sleep, isIntNum, getPermission } from './Common';

export default function restoreTest(abilityContext) {
  describe("restoreTest", function () {

  beforeAll(async function () {
    console.info("beforeAll case");
    // await getPermission(null, abilityContext);
  });

  async function createSessionRestore(testNum) {
    let session = new backup.SessionRestore({
      onFileReady: async (err, file) => {
        if (err) {
          console.log(`callback: ${testNum}-onFileReady error: {message: ${err.message}; code: ${err.code}}`);
          expect(false).assertTrue();
        }
        try {
          console.log(`callback: ${testNum}-fileReady: {${file.fd}, ${file.fileName}, ${file.bundleName}}`);
          let bundlePath = abilityContext.filesDir + '/' + file.bundleName;
          fileIO.copyFile(bundlePath, file.fd, (err) => {
            fileIO.closeSync(file.fd);
            if (err) {
              console.log(`callback: ${testNum}-copyFile error: {message: ${err.message}; code: ${err.code}}`);
              expect(false).assertTrue();
            }
          });
          await this.session.publishfile([file.bundleName, file.fileName]);
          console.log(`callback: ${testNum}-fileReady finish`);
        } catch (e) {
          console.log(`callback: ${testNum}-fileReady error: {message: ${e.message}; code: ${e.code}}`);
          expect(false).assertTrue();
        }
      },
      onBundleStarted: (err, bundleName) => {
        if (err) {
          console.log(`callback: ${testNum}-onBundleStarted error: {message: ${err.message}; code: ${err.code}}`);
          expect(false).assertTrue();
        } else {
          console.log(`callback: ${testNum}-onBundleStarted, bundleName = ${bundleName}`);
        }
      },
      onBundleFinished: (err, bundleName) => {
        if (err) {
          console.log(`callback: ${testNum}-onBundleFinished error: {message: ${err.message}; code: ${err.code}}`);
          expect(false).assertTrue();
        } else {
          console.log(`callback: ${testNum}-onBundleFinished, bundleName = ${bundleName}`);
        }
      },
      onAllBundlesFinished: (err) => {
        if (err) {
          console.log(`callback: ${testNum}-onAllBundlesFinished error: {message: ${err.message}; code: ${err.code}}`);
          expect(false).assertTrue();
        } else {
          console.log(`callback: ${testNum}-onAllBundlesFinished`);
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
   * @tc.number    : SUB_STORAGE_RESTORE_SESSIONBACKUP_0000
   * @tc.name      : Restore_Test_SessionBackup_000
   * @tc.desc      : @tc.desc Restore the three applications and verify the basic functionality.
   * @tc.size      : MEDIUM
   * @tc.type      : Function
   * @tc.level     : Level 0
   */
  it('Restore_Test_SessionBackup_000', 0, async function (done) {
    let testNum = 'Restore_Test_SessionBackup_000';
    const app2backup = [
      "com.example.app2backup", 
      "com.example.app3backup",
      "com.example.app4backup",
    ];

    try {
      let session = await createSessionRestore(testNum);
      // await session.appendBundles(app2backup); // fd 入参
      // await session.appendBundles(['com.example.app2backup']);
      console.log(`${testNum} appendBundles success!`);
//      function () { // 循环过滤bundleName下的文件, 考虑fileIO.listfile
//        await session.getFileHandle(app2backup[0], filePath[index]);
//      }
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
});
}
