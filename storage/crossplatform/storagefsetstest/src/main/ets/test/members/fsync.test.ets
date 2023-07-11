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

export default function fileIOFsync() {
  describe("fileIO_fs_fsync", function () {
    /**
     * @tc.number : TEST_FILEIO_FSYNC_ASYNC_001
     * @tc.name   : testFileIoFsyncAsync001
     * @tc.desc   : Test fsync() interfaces. Promise.
     * Open the file in read-write mode, and synchronize the file content data.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoFsyncAsync001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoFsyncAsync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        await fileIO.fsync(file.fd);
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoFsyncAsync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_FSYNC_ASYNC_002
     * @tc.name   : testFileIoFsyncAsync002
     * @tc.desc   : Test fsync() interfaces. Promise.
     * Invalid fd parameter.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoFsyncAsync002", 0, async function (done) {
      try {
        await fileIO.fsync(-1);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoFsyncAsync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900008 && e.message == "Bad file descriptor").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_FSYNC_ASYNC_003
     * @tc.name   : testFileIoFsyncAsync003
     * @tc.desc   : Test fsync() interfaces. Callback.
     * Open the file in read-write mode, and synchronize the file content data.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoFsyncAsync003", 0, async function (done) {
      let fpath = await nextFileName("testFileIoFsyncAsync003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        fileIO.fsync(file.fd, (err) => {
          if (err) {
            console.log("testFileIoFsyncAsync003 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
        });
        done();
      } catch (e) {
        console.log("testFileIoFsyncAsync003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_FSYNC_ASYNC_004
     * @tc.name   : testFileIoFsyncAsync004
     * @tc.desc   : Test fsync() interfaces. Callback.
     * Invalid fd parameter.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoFsyncAsync004", 0, async function (done) {
      try {
        fileIO.fsync(-1, (err) => {
          if (err) {
            console.log("testFileIoFsyncAsync004 error: {message: " + err.message + ", code: " + err.code + "}");
            expect(err.code == 13900008 && err.message == "Bad file descriptor").assertTrue();
            done();
          }
        });
      } catch (e) {
        console.log("testFileIoFsyncAsync004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_FSYNC_SYNC_001
     * @tc.name   : testFileIoFsyncSync001
     * @tc.desc   : Test fsyncSync() interfaces.
     * Open the file in read-write mode, and synchronize the file content data.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoFsyncSync001", 0, async function () {
      let fpath = await nextFileName("testFileIoFsyncSync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        fileIO.fsyncSync(file.fd);
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoFsyncSync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_FSYNC_SYNC_002
     * @tc.name   : testFileIoFsyncSync002
     * @tc.desc   : Test fsyncSync() interfaces.
     * Invalid fd parameter.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoFsyncSync002", 0, function () {
      try {
        fileIO.fsyncSync(-1);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoFsyncSync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900008 && e.message == "Bad file descriptor").assertTrue();
      }
    });
  });
}
