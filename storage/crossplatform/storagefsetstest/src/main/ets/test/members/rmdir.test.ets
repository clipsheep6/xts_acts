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

import { FILE_CONTENT, prepareFile, nextFileName, describe, it, expect } from "../Common";
import fileIO from "@ohos.file.fs";

export default function fileIORmdir() {
  describe("fileIO_fs_rmdir", function () {
    /**
     * @tc.number : TEST_FILEIO_RMDIR_ASYNC_001
     * @tc.name   : testFileIoRmdirAsync001
     * @tc.desc   : Test rmdir() interfaces. Promise.
     * Recursively delete all files and subfolders in a directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRmdirAsync001", 0, async function (done) {
      let dpath = (await nextFileName("testFileIoRmdirAsync001")) + "d";
      let fpath = dpath + "/rmdir_async_000";
      let ffpath = dpath + "/rmdir_async_000_1";
      let ddpath = dpath + "/rmdir_async_000_1d";
      let fffpath = ddpath + "/rmdir_async_000_2";
      fileIO.mkdirSync(dpath);
      fileIO.mkdirSync(ddpath);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      expect(prepareFile(ffpath, FILE_CONTENT)).assertTrue();
      expect(prepareFile(fffpath, FILE_CONTENT)).assertTrue();

      try {
        await fileIO.rmdir(dpath);
        expect(true).assertTrue();
        done();
      } catch (e) {
        console.log("testFileIoRmdirAsync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RMDIR_ASYNC_002
     * @tc.name   : testFileIoRmdirAsync002
     * @tc.desc   : Test rmdir() interfaces. Promise.
     * Invalid path.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRmdirAsync002", 0, async function (done) {
      let dpath = (await nextFileName("testFileIoRmdirAsync002")) + "d";

      try {
        await fileIO.rmdir(dpath);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoRmdirAsync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900002 && e.message == "No such file or directory").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RMDIR_ASYNC_003
     * @tc.name   : testFileIoRmdirAsync003
     * @tc.desc   : Test rmdir() interfaces. Promise.
     * The path contains ../, normal call.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRmdirAsync003", 0, async function () {
      let dpath = (await nextFileName("../cache/testFileIoRmdirAsync003")) + "d";

      try {
        fileIO.mkdirSync(dpath);
        await fileIO.rmdir(dpath);
        expect(true).assertTrue();
      } catch (e) {
        console.log("testFileIoRmdirAsync003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RMDIR_ASYNC_004
     * @tc.name   : testFileIoRmdirAsync004
     * @tc.desc   : Test rmdir() interfaces. Callback.
     * Recursively delete all files and subfolders in a directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRmdirAsync004", 0, async function (done) {
      let dpath = (await nextFileName("testFileIoRmdirAsync004")) + "d";
      let fpath = dpath + "/rmdir_async_001";
      let ffpath = dpath + "/rmdir_async_001_1";
      let ddpath = dpath + "/rmdir_async_001_1d";
      let fffpath = ddpath + "/rmdir_async_001_2";
      fileIO.mkdirSync(dpath);
      fileIO.mkdirSync(ddpath);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      expect(prepareFile(ffpath, FILE_CONTENT)).assertTrue();
      expect(prepareFile(fffpath, FILE_CONTENT)).assertTrue();

      try {
        expect(fileIO.accessSync(ddpath)).assertTrue();
        expect(fileIO.accessSync(fffpath)).assertTrue();
        fileIO.rmdir(dpath, (err) => {
          if (err) {
            console.log("testFileIoRmdirAsync004 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(true).assertTrue();
          done();
        });
      } catch (e) {
        console.log("testFileIoRmdirAsync004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RMDIR_ASYNC_005
     * @tc.name   : testFileIoRmdirAsync005
     * @tc.desc   : Test rmdir() interfaces. Callback.
     * Invalid path.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRmdirAsync005", 0, async function (done) {
      let dpath = (await nextFileName("testFileIoRmdirAsync005")) + "d";

      try {
        fileIO.rmdir(dpath, (err) => {
          if (err) {
            console.log("testFileIoRmdirAsync005 error: {message: " + err.message + ", code: " + err.code + "}");
            expect(err.code == 13900002 && err.message == "No such file or directory").assertTrue();
            done();
          }
        });
      } catch (e) {
        console.log("testFileIoRmdirAsync005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RMDIR_ASYNC_006
     * @tc.name   : testFileIoRmdirAsync006
     * @tc.desc   : Test rmdir() interfaces. Callback.
     * The path contains ../, normal call.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRmdirAsync006", 0, async function (done) {
      let dpath = (await nextFileName("../cache/testFileIoRmdirAsync006")) + "d";
      fileIO.mkdirSync(dpath);

      try {
        fileIO.rmdir(dpath, (err) => {
          if (err) {
            console.log("testFileIoRmdirAsync006 error: {message: " + err.message + ", code: " + err.code + "}");
            expect(err.code == 13900002 && err.message == "No such file or directory").assertTrue();
          }
          expect(true).assertTrue();
          done();
        });
      } catch (e) {
        console.log("testFileIoRmdirAsync006 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RMDIR_SYNC_001
     * @tc.name   : testFileIoRmdirSync001
     * @tc.desc   : Test rmdirSync() interfaces.
     * Recursively delete all files and subfolders in a directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRmdirSync001", 0, async function () {
      let dpath = (await nextFileName("testFileIoRmdirSync001")) + "d";
      let fpath = dpath + "/rmdir_sync_000";
      let ffpath = dpath + "/rmdir_sync_000_1";
      let ddpath = dpath + "/rmdir_sync_000_1d";
      let fffpath = ddpath + "/rmdir_sync_000";
      fileIO.mkdirSync(dpath);
      fileIO.mkdirSync(ddpath);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      expect(prepareFile(ffpath, FILE_CONTENT)).assertTrue();
      expect(prepareFile(fffpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.rmdirSync(dpath);
        expect(true).assertTrue();
      } catch (e) {
        console.log("testFileIoRmdirSync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RMDIR_SYNC_002
     * @tc.name   : testFileIoRmdirSync002
     * @tc.desc   : Test rmdirSync() interfaces.
     * Invalid path.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRmdirSync002", 0, async function () {
      let dpath = (await nextFileName("testFileIoRmdirSync002")) + "d";

      try {
        fileIO.rmdirSync(dpath);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoRmdirSync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900002 && e.message == "No such file or directory").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RMDIR_SYNC_003
     * @tc.name   : testFileIoRmdirSync003
     * @tc.desc   : Test rmdirSync() interfaces.
     * The path contains ../, normal call.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRmdirSync003", 0, async function () {
      let dpath = (await nextFileName("../cache/testFileIoRmdirSync003")) + "d";

      try {
        fileIO.mkdirSync(dpath);
        fileIO.rmdirSync(dpath);
        expect(true).assertTrue();
      } catch (e) {
        console.log("testFileIoRmdirSync003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });
  });
}
