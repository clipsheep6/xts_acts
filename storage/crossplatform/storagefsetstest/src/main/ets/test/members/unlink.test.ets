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

export default function fileIOUnlink() {
  describe("fileIO_fs_unlink", function () {
    /**
     * @tc.number : TEST_FILEIO_UNLINK_ASYNC_001
     * @tc.name   : testFileIoUnlinkAsync001
     * @tc.desc   : Test unlink() interfaces. Promise.
     * Delete the file by path, verify the normal function.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoUnlinkAsync001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoUnlinkAsync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        await fileIO.unlink(fpath);
        expect(true).assertTrue();
        done();
      } catch (e) {
        console.log("testFileIoUnlinkAsync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_UNLINK_ASYNC_002
     * @tc.name   : testFileIoUnlinkAsync002
     * @tc.desc   : Test unlink() interfaces. Promise.
     * The path point to nothing, no such file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoUnlinkAsync002", 0, async function (done) {
      let fpath = await nextFileName("fileIOTest");

      try {
        await fileIO.unlink(fpath);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoUnlinkAsync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900002 && e.message == "No such file or directory").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_UNLINK_ASYNC_003
     * @tc.name   : testFileIoUnlinkAsync003
     * @tc.desc   : Test unlink() interfaces. Promise.
     * The path refers to a directory, not a file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoUnlinkAsync003", 0, async function (done) {
      let dpath = await nextFileName("testFileIoUnlinkAsync003");
      fileIO.mkdirSync(dpath);

      try {
        await fileIO.unlink(dpath);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.rmdirSync(dpath);
        console.log("testFileIoUnlinkAsync003 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900019 && e.message == "Is a directory").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_UNLINK_ASYNC_004
     * @tc.name   : testFileIoUnlinkAsync004
     * @tc.desc   : Test unlink() interfaces. Callback.
     * Delete the file by path, verify the normal function.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoUnlinkAsync004", 0, async function (done) {
      let fpath = await nextFileName("testFileIoUnlinkAsync004");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.unlink(fpath, (err) => {
          if (err) {
            console.log("testFileIoUnlinkAsync004 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(true).assertTrue();
          done();
        });
      } catch (e) {
        console.log("testFileIoUnlinkAsync004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_UNLINK_ASYNC_005
     * @tc.name   : testFileIoUnlinkAsync005
     * @tc.desc   : Test unlink() interfaces. Callback.
     * The path point to nothing, no such file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoUnlinkAsync005", 0, async function (done) {
      let fpath = await nextFileName("fileIOTest");

      try {
        fileIO.unlink(fpath, (err) => {
          if (err) {
            console.log("testFileIoUnlinkAsync005 error: {message: " + err.message + ", code: " + err.code + "}");
            expect(err.code == 13900002 && err.message == "No such file or directory").assertTrue();
            done();
          }
        });
      } catch (e) {
        console.log("testFileIoUnlinkAsync005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_UNLINK_ASYNC_006
     * @tc.name   : testFileIoUnlinkAsync006
     * @tc.desc   : Test unlink() interfaces. Callback.
     * The path refers to a directory, not a file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoUnlinkAsync006", 0, async function (done) {
      let dpath = await nextFileName("testFileIoUnlinkAsync006");
      fileIO.mkdirSync(dpath);

      try {
        fileIO.unlink(dpath, (err) => {
          if (err) {
            fileIO.rmdirSync(dpath);
            console.log("testFileIoUnlinkAsync006 error: {message: " + err.message + ", code: " + err.code + "}");
            expect(err.code == 13900019 && err.message == "Is a directory").assertTrue();
            done();
          }
        });
      } catch (e) {
        console.log("testFileIoUnlinkAsync006 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_UNLINK_SYNC_001
     * @tc.name   : testFileIoUnlinkSync001
     * @tc.desc   : Test unlinkSync() interfaces.
     * Delete the file by path, verify the normal function.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoUnlinkSync001", 0, async function () {
      let fpath = await nextFileName("testFileIoUnlinkSync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.unlinkSync(fpath);
        expect(true).assertTrue();
      } catch (e) {
        console.log("testFileIoUnlinkSync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_UNLINK_SYNC_002
     * @tc.name   : testFileIoUnlinkSync002
     * @tc.desc   : Test unlinkSync() interfaces.
     * The path point to nothing, no such file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoUnlinkSync002", 0, async function () {
      let fpath = await nextFileName("fileIOTest");

      try {
        fileIO.unlinkSync(fpath);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoUnlinkSync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900002 && e.message == "No such file or directory").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_UNLINK_SYNC_003
     * @tc.name   : testFileIoUnlinkSync003
     * @tc.desc   : Test unlinkSync() interfaces.
     * The path refers to a directory, not a file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoUnlinkSync003", 0, async function () {
      let dpath = await nextFileName("testFileIoUnlinkSync003");
      fileIO.mkdirSync(dpath);

      try {
        fileIO.unlinkSync(dpath);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.rmdirSync(dpath);
        console.log("testFileIoUnlinkSync003 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900019 && e.message == "Is a directory").assertTrue();
      }
    });
  });
}
