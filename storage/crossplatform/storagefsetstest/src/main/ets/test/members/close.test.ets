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

export default function fileIOClose() {
  describe("fileIO_fs_close", function () {
    /**
     * @tc.number : TEST_FILEIO_CLOSE_ASYNC_001
     * @tc.name   : testFileIoCloseAsync001
     * @tc.desc   : Test close() interfaces. Promise.
     * Open file and close file by fd.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoCloseAsync001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoCloseAsync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        await fileIO.close(file.fd);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoCloseAsync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_CLOSE_ASYNC_002
     * @tc.name   : testFileIoCloseAsync002
     * @tc.desc   : Test close() interfaces. Promise.
     * Open file and close file by file object.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoCloseAsync002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoCloseAsync002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        await fileIO.close(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoCloseAsync002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_CLOSE_ASYNC_003
     * @tc.name   : testFileIoCloseAsync003
     * @tc.desc   : Test close() interfaces. Promise.
     * Test file has been closed.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoCloseAsync003", 0, async function (done) {
      let fpath = await nextFileName("testFileIoCloseAsync003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        await fileIO.close(file);
        await fileIO.close(file);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.unlinkSync(fpath);
        console.log("testFileIoCloseAsync003 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_CLOSE_ASYNC_004
     * @tc.name   : testFileIoCloseAsync004
     * @tc.desc   : Test close() interfaces. Promise.
     * Illegal type of parameter.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoCloseAsync004", 0, async function (done) {
      let fpath = await nextFileName("testFileIoCloseAsync004");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);

      try {
        await fileIO.close(-1);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoCloseAsync004 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_CLOSE_ASYNC_005
     * @tc.name   : testFileIoCloseAsync005
     * @tc.desc   : Test close() interfaces. Callback.
     * Open file and close file by fd.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoCloseAsync005", 0, async function (done) {
      let fpath = await nextFileName("testFileIoCloseAsync005");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        fileIO.close(file.fd, (err) => {
          if (err) {
            console.log("testFileIoCloseAsync005 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoCloseAsync005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_CLOSE_ASYNC_006
     * @tc.name   : testFileIoCloseAsync006
     * @tc.desc   : Test close() interfaces. Callback.
     * Open file and close file by file object.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoCloseAsync006", 0, async function (done) {
      let fpath = await nextFileName("testFileIoCloseAsync006");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        fileIO.close(file, (err) => {
          if (err) {
            console.log("testFileIoCloseAsync006 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoCloseAsync006 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_CLOSE_SYNC_001
     * @tc.name   : testFileIoCloseSync001
     * @tc.desc   : Test closeSync() interfaces.
     * Open file and close file by fd.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoCloseSync001", 0, async function () {
      let fpath = await nextFileName("testFileIoCloseSync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        fileIO.closeSync(file.fd);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoCloseSync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_CLOSE_SYNC_002
     * @tc.name   : testFileIoCloseSync002
     * @tc.desc   : Test closeSync() interfaces.
     * Open file and close file by file object.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoCloseSync002", 0, async function () {
      let fpath = await nextFileName("testFileIoCloseSync002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoCloseSync002 for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_CLOSE_SYNC_003
     * @tc.name   : testFileIoCloseSync003
     * @tc.desc   : Test closeSync() interfaces.
     * Test fd has been closed.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoCloseSync003", 0, async function () {
      let fpath = await nextFileName("testFileIoCloseSync003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        let fd = file.fd;
        fileIO.closeSync(file);
        fileIO.closeSync(fd);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.unlinkSync(fpath);
        console.log("testFileIoCloseSync003 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900008 && e.message == "Bad file descriptor").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_CLOSE_SYNC_004
     * @tc.name   : testFileIoCloseSync004
     * @tc.desc   : Test closeSync() interfaces.
     * Test file has been closed.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoCloseSync004", 0, async function () {
      let fpath = await nextFileName("testFileIoCloseSync004");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        fileIO.closeSync(file);
        fileIO.closeSync(file);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.unlinkSync(fpath);
        console.log("testFileIoCloseSync004 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_CLOSE_SYNC_005
     * @tc.name   : testFileIoCloseSync005
     * @tc.desc   : Test closeSync() interfaces.
     * Illegal type of parameter.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoCloseSync005", 0, function () {
      try {
        fileIO.closeSync(-1);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoCloseSync005 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
      }
    });
  });
}
