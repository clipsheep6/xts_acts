/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import { FILE_CONTENT, nextFileName, prepareFile, describe, it, expect } from "../Common";
import fileIO from "@ohos.file.fs";

export default function fileIOFdatasync() {
  describe("fileIO_fs_fdatasync", async function () {
    /**
     * @tc.number : TEST_FILEIO_FDATASYNC_ASYNC_001
     * @tc.name   : testFileIoFdatasyncAsync001
     * @tc.desc   : Test fdatasync() interfaces. Promise.
     * Open the file in read-write mode, and synchronize the file content data.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoFdatasyncAsync001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoFdatasyncAsync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        await fileIO.fdatasync(file.fd);
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoFdatasyncAsync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_FDATASYNC_ASYNC_002
     * @tc.name   : testFileIoFdatasyncAsync002
     * @tc.desc   : Test fdatasync() interfaces. Promise.
     * Invalid fd parameter.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoFdatasyncAsync002", 0, async function (done) {
      try {
        await fileIO.fdatasync(-1);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoFdatasyncAsync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900008 && e.message == "Bad file descriptor").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_FDATASYNC_ASYNC_003
     * @tc.name   : testFileIoFdatasyncAsync003
     * @tc.desc   : Test fdatasync() interfaces. Callback.
     * Open the file in read-write mode, and synchronize the file content data.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoFdatasyncAsync003", 0, async function (done) {
      let fpath = await nextFileName("testFileIoFdatasyncAsync003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        fileIO.fdatasync(file.fd, (err) => {
          if (err) {
            console.log("testFileIoFdatasyncAsync003 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoFdatasyncAsync003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_FDATASYNC_ASYNC_004
     * @tc.name   : testFileIoFdatasyncAsync004
     * @tc.desc   : Test fdatasync() interfaces. Callback.
     * Invalid fd parameter.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoFdatasyncAsync004", 0, async function (done) {
      try {
        fileIO.fdatasync(-1, (err) => {
          if (err) {
            console.log("testFileIoFdatasyncAsync004 error: {message: " + err.message + ", code: " + err.code + "}");
            expect(err.code == 13900008 && err.message == "Bad file descriptor").assertTrue();
            done();
          }
        });
      } catch (e) {
        console.log("testFileIoFdatasyncAsync004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_FDATASYNC_SYNC_001
     * @tc.name   : testFileIoFdatasyncSync001
     * @tc.desc   : Test fdatasyncSync() interfaces.
     * Open the file in read-write mode, and synchronize the file content data.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoFdatasyncSync001", 0, async function () {
      let fpath = await nextFileName("testFileIoFdatasyncSync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        fileIO.fdatasyncSync(file.fd);
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoFdatasyncSync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_FDATASYNC_SYNC_002
     * @tc.name   : testFileIoFdatasyncSync002
     * @tc.desc   : Test fdatasyncSync() interfaces.
     * Invalid fd parameter.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoFdatasyncSync002", 0, async function () {
      try {
        fileIO.fdatasyncSync(-1);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoFdatasyncSync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900008 && e.message == "Bad file descriptor").assertTrue();
      }
    });
  });
}
