/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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

import { FILE_CONTENT, prepareFile, nextFileName, isIntNum, describe, it, expect } from "../Common";
import fileIO from "@ohos.file.fs";

export default function fileIOTruncate() {
  describe("fileIO_fs_truncate", function () {
    /**
     * @tc.number : TEST_FILEIO_TRUNCATE_ASYNC_001
     * @tc.name   : testFileIoTruncateAsync001
     * @tc.desc   : Test the truncate() interface. Promise.
     * Truncate the file with path and truncateLen = 5.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoTruncateAsync001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoTruncateAsync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let truncateLen = 5;

      try {
        await fileIO.truncate(fpath, truncateLen);
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096));
        expect(readLen == truncateLen).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoTruncateAsync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_TRUNCATE_ASYNC_002
     * @tc.name   : testFileIoTruncateAsync002
     * @tc.desc   : Test the truncate() interface. Promise.
     * Truncate the file with fd and truncateLen = 5.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoTruncateAsync002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoTruncateAsync002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
      let truncateLen = 5;

      try {
        expect(isIntNum(file.fd)).assertTrue();
        await fileIO.truncate(file.fd, truncateLen);
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096));
        expect(readLen == truncateLen).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoTruncateAsync002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_TRUNCATE_ASYNC_003
     * @tc.name   : testFileIoTruncateAsync003
     * @tc.desc   : Test the truncate() interface. Promise.
     * The path point to nothing, no such file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoTruncateAsync003", 0, async function (done) {
      let fpath = await nextFileName("testFileIoTruncateAsync003");
      let truncateLen = 2;

      try {
        await fileIO.truncate(fpath, truncateLen);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoTruncateAsync003 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900002 && e.message == "No such file or directory").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_TRUNCATE_ASYNC_004
     * @tc.name   : testFileIoTruncateAsync004
     * @tc.desc   : Test the truncate() interface. Promise.
     * Use default truncateLen = 0.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoTruncateAsync004", 3, async function (done) {
      let fpath = await nextFileName("testFileIoTruncateAsync004");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        await fileIO.truncate(fpath);
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096));
        expect(readLen == 0).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoTruncateAsync004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_TRUNCATE_ASYNC_005
     * @tc.name   : testFileIoTruncateAsync005
     * @tc.desc   : Test the truncate() interface. Callback.
     * Truncate the file with path and truncateLen = 5.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoTruncateAsync005", 0, async function (done) {
      let fpath = await nextFileName("testFileIoTruncateAsync005");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let truncateLen = 5;

      try {
        fileIO.truncate(fpath, truncateLen, (err) => {
          if (err) {
            console.log("testFileIoTruncateAsync005 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
          expect(isIntNum(file.fd)).assertTrue();
          let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096));
          expect(readLen == truncateLen).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoTruncateAsync005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_TRUNCATE_ASYNC_006
     * @tc.name   : testFileIoTruncateAsync006
     * @tc.desc   : Test the truncate() interface. Callback.
     * Truncate the file with fd and truncateLen = 5.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoTruncateAsync006", 0, async function (done) {
      let fpath = await nextFileName("testFileIoTruncateAsync006");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
      let truncateLen = 5;

      try {
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.truncate(file.fd, truncateLen, (err) => {
          if (err) {
            console.log("testFileIoTruncateAsync006 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096));
          expect(readLen == truncateLen).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoTruncateAsync006 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_TRUNCATE_ASYNC_007
     * @tc.name   : testFileIoTruncateAsync007
     * @tc.desc   : Test the truncate() interface. Callback.
     * The path point to nothing, no such file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoTruncateAsync007", 0, async function (done) {
      let fpath = await nextFileName("testFileIoTruncateAsync007");
      let truncateLen = 2;

      try {
        fileIO.truncate(fpath, truncateLen, (err) => {
          if (err) {
            console.log("testFileIoTruncateAsync007 error: {message: " + err.message + ", code: " + err.code + "}");
            expect(err.code == 13900002 && err.message == "No such file or directory").assertTrue();
            done();
          }
        });
      } catch (e) {
        console.log("testFileIoTruncateAsync007 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_TRUNCATE_ASYNC_008
     * @tc.name   : testFileIoTruncateAsync008
     * @tc.desc   : Test the truncate() interface. Callback.
     * Use default truncateLen = 0.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoTruncateAsync008", 0, async function (done) {
      let fpath = await nextFileName("testFileIoTruncateAsync008");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.truncate(fpath, (err) => {
          if (err) {
            console.log("testFileIoTruncateAsync008 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
          expect(isIntNum(file.fd)).assertTrue();
          let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096));
          expect(readLen == 0).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoTruncateAsync008 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_TRUNCATE_SYNC_001
     * @tc.name   : testFileIoTruncateSync001
     * @tc.desc   : Test the truncateSync() interface.
     * Truncate the file with path and truncateLen = 5.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoTruncateSync001", 0, async function () {
      let fpath = await nextFileName("testFileIoTruncateSync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let truncateLen = 5;

      try {
        fileIO.truncateSync(fpath, truncateLen);
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096));
        expect(readLen == truncateLen).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoTruncateSync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_TRUNCATE_SYNC_002
     * @tc.name   : testFileIoTruncateSync002
     * @tc.desc   : Test the truncateSync() interface.
     * Truncate the file with fd and truncateLen = 5.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoTruncateSync002", 0, async function () {
      let fpath = await nextFileName("testFileIoTruncateSync002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
      let truncateLen = 5;

      try {
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.truncateSync(file.fd, truncateLen);
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096));
        expect(readLen == truncateLen).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoTruncateSync002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_TRUNCATE_SYNC_003
     * @tc.name   : testFileIoTruncateSync003
     * @tc.desc   : Test the truncateSync() interface.
     * The path point to nothing, no such file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoTruncateSync003", 0, async function () {
      let fpath = await nextFileName("testFileIoTruncateSync003");

      try {
        fileIO.truncateSync(fpath);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoTruncateSync003 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900002 && e.message == "No such file or directory").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_TRUNCATE_SYNC_004
     * @tc.name   : testFileIoTruncateSync004
     * @tc.desc   : Test the truncateSync() interface.
     * Use default truncateLen = 0.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoTruncateSync004", 3, async function () {
      let fpath = await nextFileName("testFileIoTruncateSync004");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);

      try {
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.truncateSync(file.fd);
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096));
        expect(readLen == 0).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoTruncateSync004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_TRUNCATE_SYNC_005
     * @tc.name   : testFileIoTruncateSync005
     * @tc.desc   : Test the truncateSync() interface.
     * Invalid parameter.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoTruncateSync005", 0, async function () {
      let truncateLen = 2;

      try {
        fileIO.truncateSync(-1, truncateLen);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoTruncateSync005 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
      }
    });
  });
}
