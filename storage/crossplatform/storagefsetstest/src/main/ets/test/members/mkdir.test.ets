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

export default function fileIOMkdir() {
  describe("fileIO_fs_mkdir", function () {
    /**
     * @tc.number : TEST_FILEIO_MKDIR_ASYNC_001
     * @tc.name   : testFileIoMkdirAsync001
     * @tc.desc   : Test mkdir() interfaces. Promise.
     * Create a directory, verify normal function.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoMkdirAsync001", 0, async function (done) {
      let dpath = (await nextFileName("testFileIoMkdirAsync001")) + "d";

      try {
        await fileIO.mkdir(dpath);
        expect(true).assertTrue();
        fileIO.rmdirSync(dpath);
        done();
      } catch (e) {
        console.log("testFileIoMkdirAsync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_MKDIR_ASYNC_002
     * @tc.name   : testFileIoMkdirAsync002
     * @tc.desc   : Test mkdir() interfaces. Promise.
     * The path has pointed to a file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoMkdirAsync002", 0, async function () {
      let fpath = await nextFileName("testFileIoMkdirAsync002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        await fileIO.mkdirSync(fpath);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoMkdirAsync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900015 && e.message == "File exists").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_MKDIR_ASYNC_003
     * @tc.name   : testFileIoMkdirAsync003
     * @tc.desc   : Test mkdir() interfaces. Callback.
     * Create a directory, verify normal function.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoMkdirAsync003", 0, async function (done) {
      let dpath = (await nextFileName("testFileIoMkdirAsync003")) + "d";

      try {
        fileIO.mkdir(dpath, (err) => {
          if (err) {
            console.log("fileIO_test_mkdir_async_001 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(true).assertTrue();
          fileIO.rmdirSync(dpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoMkdirAsync003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_MKDIR_ASYNC_004
     * @tc.name   : testFileIoMkdirAsync004
     * @tc.desc   : Test mkdir() interfaces. Callback.
     * The directory has been existed.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoMkdirAsync004", 0, async function (done) {
      try {
        fileIO.mkdir("/", (err) => {
          if (err) {
            console.log("testFileIoMkdirAsync004 error: {message: " + err.message + ", code: " + err.code + "}");
            expect(err.code == 13900015 && err.message == "File exists").assertTrue();
            done();
          }
        });
      } catch (e) {
        console.log("testFileIoMkdirAsync004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_MKDIR_SYNC_001
     * @tc.name   : testFileIoMkdirSync001
     * @tc.desc   : Test mkdirSync() interfaces.
     * Create a directory, verify normal function.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoMkdirSync001", 0, async function () {
      let dpath = (await nextFileName("testFileIoMkdirSync001")) + "d";

      try {
        fileIO.mkdirSync(dpath);
        expect(true).assertTrue();
        fileIO.rmdirSync(dpath);
      } catch (e) {
        console.log("testFileIoMkdirSync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_MKDIR_SYNC_002
     * @tc.name   : testFileIoMkdirSync002
     * @tc.desc   : Test mkdirSync() interfaces.
     * The directory has been existed.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoMkdirSync002", 0, async function () {
      try {
        fileIO.mkdirSync("/");
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoMkdirSync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900015 && e.message == "File exists").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_MKDIR_SYNC_003
     * @tc.name   : testFileIoMkdirSync003
     * @tc.desc   : Test mkdirSync() interfaces.
     * The path is empty.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoMkdirSync003", 0, async function () {
      try {
        fileIO.mkdirSync("");
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoMkdirSync003 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900002 && e.message == "No such file or directory").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_MKDIR_SYNC_004
     * @tc.name   : testFileIoMkdirSync004
     * @tc.desc   : Test mkdirSync() interfaces.
     * The path has pointed to a file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoMkdirSync004", 0, async function () {
      let fpath = await nextFileName("testFileIoMkdirSync004");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.mkdirSync(fpath);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoMkdirSync004 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900015 && e.message == "File exists").assertTrue();
      }
    });
  });
}
