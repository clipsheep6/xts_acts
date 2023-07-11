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

import { FILE_CONTENT, prepareFile, nextFileName, isIntNum, isBigInt, describe, it, expect } from "../Common";
import fileIO from "@ohos.file.fs";

export default function fileIOStat() {
  describe("fileIO_fs_stat", function () {
    /**
     * @tc.number : TEST_FILEIO_STAT_ASYNC_001
     * @tc.name   : testFileIoStatAsync001
     * @tc.desc   : Test stat() interfaces. Promise.
     * Enter the path or fd parameter to get the file stat.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatAsync001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatAsync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = await fileIO.stat(fpath);
        expect(stat !== null).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = await fileIO.stat(file.fd);
        expect(stat2 !== null).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatAsync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_ASYNC_002
     * @tc.name   : testFileIoStatAsync002
     * @tc.desc   : Test stat() interfaces. Promise.
     * The path point to nothing, no such file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatAsync002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatAsync002");

      try {
        await fileIO.stat(fpath);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoStatAsync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900002 && e.message == "No such file or directory").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_ASYNC_003
     * @tc.name   : testFileIoStatAsync003
     * @tc.desc   : Test stat() interfaces. Promise.
     * Invalid path or fd parameter.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatAsync003", 0, async function (done) {
      try {
        await fileIO.stat(-1);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoStatAsync003 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_ASYNC_004
     * @tc.name   : testFileIoStatAsync004
     * @tc.desc   : Test stat() interfaces. Callback.
     * Enter the path or fd parameter to get the file stat.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatAsync004", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatAsync004");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.stat(fpath, (err, stat) => {
          if (err) {
            console.log("testFileIoStatAsync004 error package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(stat !== null).assertTrue();
        });

        let file = fileIO.openSync(fpath);
        fileIO.stat(file.fd, (err, stat2) => {
          if (err) {
            console.log("testFileIoStatAsync004 error package2: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(stat2 !== null).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoStatAsync004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_ASYNC_005
     * @tc.name   : testFileIoStatAsync005
     * @tc.desc   : Test stat() interfaces. Callback.
     * The path point to nothing, no such file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatAsync005", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatAsync005");

      try {
        fileIO.stat(fpath, (err) => {
          if (err) {
            console.log("testFileIoStatAsync005 error: {message: " + err.message + ", code: " + err.code + "}");
            expect(err.code == 13900002 && err.message == "No such file or directory").assertTrue();
            done();
          }
        });
      } catch (e) {
        console.log("testFileIoStatAsync005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_ASYNC_006
     * @tc.name   : testFileIoStatAsync006
     * @tc.desc   : Test stat() interfaces. Callback.
     * Invalid path or fd parameter.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatAsync006", 0, async function (done) {
      try {
        fileIO.stat(-1, (err) => {
          expect(false).assertTrue();
        });
      } catch (e) {
        console.log("testFileIoStatAsync006 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_SYNC_001
     * @tc.name   : testFileIoStatSync001
     * @tc.desc   : Test statSync() interfaces.
     * Enter the path or fd parameter to get the file stat.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatSync001", 0, async function () {
      let fpath = await nextFileName("testFileIoStatSync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(stat !== null).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = fileIO.statSync(file.fd);
        expect(stat2 !== null).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoStatSync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_SYNC_002
     * @tc.name   : testFileIoStatSync002
     * @tc.desc   : Test statSync() interfaces.
     * The path point to nothing, no such file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatSync002", 0, async function () {
      let fpath = await nextFileName("testFileIoStatSync002");

      try {
        fileIO.statSync(fpath);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoStatSync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900002 && e.message == "No such file or directory").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_SYNC_003
     * @tc.name   : testFileIoStatSync003
     * @tc.desc   : Test statSync() interfaces.
     * Invalid path or fd parameter.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatSync003", 0, async function () {
      try {
        fileIO.statSync(-1);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoStatSync003 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_SYNC_004
     * @tc.name   : testFileIoStatSync004
     * @tc.desc   : Test statSync() interfaces.
     * Modify the file, view the file status changes by path.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatSync004", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatSync004");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(isIntNum(stat.size)).assertTrue();

        let file = fileIO.openSync(fpath, fileIO.OpenMode.APPEND | fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        expect(fileIO.writeSync(file.fd, FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
        fileIO.closeSync(file);

        stat = fileIO.statSync(fpath);
        expect(stat.size == FILE_CONTENT.length * 2).assertTrue();
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatSync004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_SYNC_005
     * @tc.name   : testFileIoStatSync005
     * @tc.desc   : Test statSync() interfaces.
     * Modify the file, view the file status changes by fd.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatSync005", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatSync005");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.APPEND | fileIO.OpenMode.READ_WRITE);
        let stat = fileIO.statSync(file.fd);
        expect(isIntNum(stat.size)).assertTrue();
        expect(isIntNum(file.fd)).assertTrue();
        expect(fileIO.writeSync(file.fd, FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
        fileIO.closeSync(file);

        let file2 = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        stat = fileIO.statSync(file2.fd);
        expect(stat.size == FILE_CONTENT.length * 2).assertTrue();
        fileIO.closeSync(file2);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatSync005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_INO_001
     * @tc.name   : testFileIoStatIno001
     * @tc.desc   : Test the ino member of class Stat. Promise.
     * Enter the path or fd parameter to get stat.ino of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIno001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatIno001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = await fileIO.stat(fpath);
        expect(isBigInt(stat.ino)).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = await fileIO.stat(file.fd);
        expect(isBigInt(stat2.ino)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatIno001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_INO_002
     * @tc.name   : testFileIoStatIno002
     * @tc.desc   : Test the ino member of class Stat. Callback.
     * Enter the path or fd parameter to get stat.ino of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIno002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatIno002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.stat(fpath, (err, stat) => {
          if (err) {
            console.log("testFileIoStatIno002 error package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isBigInt(stat.ino)).assertTrue();
        });

        let file = fileIO.openSync(fpath);
        fileIO.stat(file.fd, (err, stat2) => {
          if (err) {
            console.log("testFileIoStatIno002 error package2: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isBigInt(stat2.ino)).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoStatIno002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_INO_003
     * @tc.name   : testFileIoStatIno003
     * @tc.desc   : Test the ino member of class Stat.
     * Enter the path or fd parameter to get stat.ino of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIno003", 0, async function () {
      let fpath = await nextFileName("testFileIoStatIno003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(isBigInt(stat.ino)).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = fileIO.statSync(file.fd);
        expect(isBigInt(stat2.ino)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoStatIno003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_MODE_001
     * @tc.name   : testFileIoStatMode001
     * @tc.desc   : Test the mode member of class Stat. Promise.
     * Enter the path or fd parameter to get stat.mode of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatMode001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatMode001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = await fileIO.stat(fpath);
        expect(isIntNum(stat.mode)).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = await fileIO.stat(file.fd);
        expect(isIntNum(stat2.mode)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatMode001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_MODE_002
     * @tc.name   : testFileIoStatMode002
     * @tc.desc   : Test the mode member of class Stat. Callback.
     * Enter the path or fd parameter to get stat.mode of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatMode002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatMode002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.stat(fpath, (err, stat) => {
          if (err) {
            console.log("testFileIoStatMode002 error package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(stat.mode)).assertTrue();
        });

        let file = fileIO.openSync(fpath);
        fileIO.stat(file.fd, (err, stat2) => {
          if (err) {
            console.log("testFileIoStatMode002 error package2: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(stat2.mode)).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoStatMode002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_MODE_003
     * @tc.name   : testFileIoStatMode003
     * @tc.desc   : Test the mode member of class Stat.
     * Enter the path or fd parameter to get stat.mode of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatMode003", 0, async function () {
      let fpath = await nextFileName("testFileIoStatMode003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(isIntNum(stat.mode)).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = fileIO.statSync(file.fd);
        expect(isIntNum(stat2.mode)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoStatMode003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_UID_001
     * @tc.name   : testFileIoStatUid001
     * @tc.desc   : Test the uid member of class Stat. Promise.
     * Enter the path or fd parameter to get stat.uid of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatUid001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatUid001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = await fileIO.stat(fpath);
        expect(isIntNum(stat.uid)).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = await fileIO.stat(file.fd);
        expect(isIntNum(stat2.uid)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatUid001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_UID_002
     * @tc.name   : testFileIoStatUid002
     * @tc.desc   : Test the uid member of class Stat. Callback.
     * Enter the path or fd parameter to get stat.uid of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatUid002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatUid002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.stat(fpath, (err, stat) => {
          if (err) {
            console.log("testFileIoStatUid002 error package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(stat.uid)).assertTrue();
        });

        let file = fileIO.openSync(fpath);
        fileIO.stat(file.fd, (err, stat2) => {
          if (err) {
            console.log("testFileIoStatUid002 error package2: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(stat2.uid)).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoStatUid002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_UID_003
     * @tc.name   : testFileIoStatUid003
     * @tc.desc   : Test the uid member of class Stat.
     * Enter the path or fd parameter to get stat.uid of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatUid003", 0, async function () {
      let fpath = await nextFileName("testFileIoStatUid003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(isIntNum(stat.uid)).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = fileIO.statSync(file.fd);
        expect(isIntNum(stat2.uid)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoStatUid003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_GID_001
     * @tc.name   : testFileIoStatGid001
     * @tc.desc   : Test the gid member of class Stat. Promise.
     * Enter the path or fd parameter to get stat.gid of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatGid001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatGid001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = await fileIO.stat(fpath);
        expect(isIntNum(stat.gid)).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = await fileIO.stat(file.fd);
        expect(isIntNum(stat2.gid)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatGid001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_GID_002
     * @tc.name   : testFileIoStatGid002
     * @tc.desc   : Test the gid member of class Stat. Callback.
     * Enter the path or fd parameter to get stat.gid of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatGid002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatGid002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.stat(fpath, (err, stat) => {
          if (err) {
            console.log("testFileIoStatGid002 error package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(stat.gid)).assertTrue();
        });

        let file = fileIO.openSync(fpath);
        fileIO.stat(file.fd, (err, stat2) => {
          if (err) {
            console.log("testFileIoStatGid002 error package2: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(stat2.gid)).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoStatGid002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_GID_003
     * @tc.name   : testFileIoStatGid003
     * @tc.desc   : Test the gid member of class Stat.
     * Enter the path or fd parameter to get stat.gid of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatGid003", 0, async function () {
      let fpath = await nextFileName("testFileIoStatGid003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(isIntNum(stat.gid)).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = fileIO.statSync(file.fd);
        expect(isIntNum(stat2.gid)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoStatGid003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_SIZE_001
     * @tc.name   : testFileIoStatSize001
     * @tc.desc   : Test the size member of class Stat. Promise.
     * Enter the path or fd parameter to get stat.size of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatSize001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatSize001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = await fileIO.stat(fpath);
        expect(isIntNum(stat.size)).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = await fileIO.stat(file.fd);
        expect(isIntNum(stat2.size)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatSize001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_SIZE_002
     * @tc.name   : testFileIoStatSize002
     * @tc.desc   : Test the size member of class Stat. Callback.
     * Enter the path or fd parameter to get stat.size of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatSize002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatSize002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.stat(fpath, (err, stat) => {
          if (err) {
            console.log("testFileIoStatSize002 error package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(stat.size)).assertTrue();
        });

        let file = fileIO.openSync(fpath);
        fileIO.stat(file.fd, (err, stat2) => {
          if (err) {
            console.log("testFileIoStatSize002 error package2: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(stat2.size)).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoStatSize002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_SIZE_003
     * @tc.name   : testFileIoStatSize003
     * @tc.desc   : Test the size member of class Stat.
     * Enter the path or fd parameter to get stat.size of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatSize003", 0, async function () {
      let fpath = await nextFileName("testFileIoStatSize003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(isIntNum(stat.size)).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = fileIO.statSync(file.fd);
        expect(isIntNum(stat2.size)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoStatSize003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_ATIME_001
     * @tc.name   : testFileIoStatAtime001
     * @tc.desc   : Test the atime member of class Stat. Promise.
     * Enter the path or fd parameter to get stat.atime of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatAtime001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatAtime001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = await fileIO.stat(fpath);
        expect(isIntNum(stat.atime)).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = await fileIO.stat(file.fd);
        expect(isIntNum(stat2.atime)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatAtime001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_ATIME_002
     * @tc.name   : testFileIoStatAtime002
     * @tc.desc   : Test the atime member of class Stat. Callback.
     * Enter the path or fd parameter to get stat.atime of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatAtime002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatAtime002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.stat(fpath, (err, stat) => {
          if (err) {
            console.log("testFileIoStatAtime002 error package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(stat.atime)).assertTrue();
        });

        let file = fileIO.openSync(fpath);
        fileIO.stat(file.fd, (err, stat2) => {
          if (err) {
            console.log("testFileIoStatAtime002 error package2: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(stat2.atime)).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoStatAtime002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_ATIME_003
     * @tc.name   : testFileIoStatAtime003
     * @tc.desc   : Test the atime member of class Stat.
     * Enter the path or fd parameter to get stat.atime of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatAtime003", 0, async function () {
      let fpath = await nextFileName("testFileIoStatAtime003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(isIntNum(stat.atime)).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = fileIO.statSync(file.fd);
        expect(isIntNum(stat2.atime)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoStatAtime003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_MTIME_001
     * @tc.name   : testFileIoStatMtime001
     * @tc.desc   : Test the mtime member of class Stat. Promise.
     * Enter the path or fd parameter to get stat.mtime of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatMtime001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatMtime001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = await fileIO.stat(fpath);
        expect(isIntNum(stat.mtime)).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = await fileIO.stat(file.fd);
        expect(isIntNum(stat2.mtime)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatMtime001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_MTIME_002
     * @tc.name   : testFileIoStatMtime002
     * @tc.desc   : Test the mtime member of class Stat. Callback.
     * Enter the path or fd parameter to get stat.mtime of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatMtime002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatMtime002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.stat(fpath, (err, stat) => {
          if (err) {
            console.log("testFileIoStatMtime002 error package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(stat.mtime)).assertTrue();
        });

        let file = fileIO.openSync(fpath);
        fileIO.stat(file.fd, (err, stat2) => {
          if (err) {
            console.log("testFileIoStatMtime002 error package2: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(stat2.mtime)).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoStatMtime002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_MTIME_003
     * @tc.name   : testFileIoStatMtime003
     * @tc.desc   : Test the mtime member of class Stat.
     * Enter the path or fd parameter to get stat.mtime of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatMtime003", 0, async function () {
      let fpath = await nextFileName("testFileIoStatMtime003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(isIntNum(stat.mtime)).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = fileIO.statSync(file.fd);
        expect(isIntNum(stat2.mtime)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoStatMtime003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_CTIME_001
     * @tc.name   : testFileIoStatCtime001
     * @tc.desc   : Test the ctime member of class Stat. Promise.
     * Enter the path or fd parameter to get stat.ctime of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatCtime001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatCtime001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = await fileIO.stat(fpath);
        expect(isIntNum(stat.ctime)).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = await fileIO.stat(file.fd);
        expect(isIntNum(stat2.ctime)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatCtime001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_CTIME_002
     * @tc.name   : testFileIoStatCtime002
     * @tc.desc   : Test the ctime member of class Stat. Callback.
     * Enter the path or fd parameter to get stat.ctime of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatCtime002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatCtime002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.stat(fpath, (err, stat) => {
          if (err) {
            console.log("testFileIoStatCtime002 error package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(stat.ctime)).assertTrue();
        });

        let file = fileIO.openSync(fpath);
        fileIO.stat(file.fd, (err, stat2) => {
          if (err) {
            console.log("testFileIoStatCtime002 error package2: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(stat2.ctime)).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoStatCtime002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_CTIME_003
     * @tc.name   : testFileIoStatCtime003
     * @tc.desc   : Test the ctime member of class Stat.
     * Enter the path or fd parameter to get stat.ctime of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatCtime003", 0, async function () {
      let fpath = await nextFileName("testFileIoStatCtime003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(isIntNum(stat.ctime)).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = fileIO.statSync(file.fd);
        expect(isIntNum(stat2.ctime)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoStatCtime003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_BLOCK_DEVICE_001
     * @tc.name   : testFileIoStatIsBlockDevice001
     * @tc.desc   : Test the isBlockDevice() method of class Stat. Promise.
     * This interface shall not treat a normal file as a block special device.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsBlockDevice001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatIsBlockDevice001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = await fileIO.stat(fpath);
        expect(stat.isBlockDevice() === false).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = await fileIO.stat(file.fd);
        expect(stat2.isBlockDevice() === false).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatIsBlockDevice001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_BLOCK_DEVICE_002
     * @tc.name   : testFileIoStatIsBlockDevice002
     * @tc.desc   : Test the isBlockDevice() method of class Stat. Callback.
     * This interface shall not treat a normal file as a block special device.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsBlockDevice002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatIsBlockDevice002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.stat(fpath, (err, stat) => {
          if (err) {
            console.log("testFileIoStatIsBlockDevice002 error package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(stat.isBlockDevice() === false).assertTrue();
        });

        let file = fileIO.openSync(fpath);
        fileIO.stat(file.fd, (err, stat2) => {
          if (err) {
            console.log("testFileIoStatIsBlockDevice002 error package2: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(stat2.isBlockDevice() === false).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoStatIsBlockDevice002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_BLOCK_DEVICE_003
     * @tc.name   : testFileIoStatIsBlockDevice003
     * @tc.desc   : Test the isBlockDevice() method of class Stat.
     * This interface shall not treat a normal file as a block special device.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsBlockDevice003", 0, async function () {
      let fpath = await nextFileName("testFileIoStatIsBlockDevice003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(stat.isBlockDevice() === false).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = fileIO.statSync(file.fd);
        expect(stat2.isBlockDevice() === false).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoStatIsBlockDevice003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_CHARACTER_DEVICE_001
     * @tc.name   : testFileIoStatIsCharacterDevice001
     * @tc.desc   : Test the isCharacterDevice() method of class Stat. Promise.
     * This interface shall not treat a normal file as a character special device.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsCharacterDevice001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatIsCharacterDevice001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = await fileIO.stat(fpath);
        expect(stat.isCharacterDevice() === false).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = await fileIO.stat(file.fd);
        expect(stat2.isCharacterDevice() === false).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatIsCharacterDevice001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_CHARACTER_DEVICE_002
     * @tc.name   : testFileIoStatIsCharacterDevice002
     * @tc.desc   : Test the isCharacterDevice() method of class Stat. Callback.
     * This interface shall not treat a normal file as a character special device.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsCharacterDevice002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatIsCharacterDevice002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.stat(fpath, (err, stat) => {
          if (err) {
            console.log("testFileIoStatIsCharacterDevice002 error package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(stat.isCharacterDevice() === false).assertTrue();
        });

        let file = fileIO.openSync(fpath);
        fileIO.stat(file.fd, (err, stat2) => {
          if (err) {
            console.log("testFileIoStatIsCharacterDevice002 error package2: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(stat2.isCharacterDevice() === false).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoStatIsCharacterDevice002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_CHARACTER_DEVICE_003
     * @tc.name   : testFileIoStatIsCharacterDevice003
     * @tc.desc   : Test the isCharacterDevice() method of class Stat.
     * This interface shall not treat a normal file as a character special device.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsCharacterDevice003", 0, async function () {
      let fpath = await nextFileName("testFileIoStatIsCharacterDevice003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(stat.isCharacterDevice() === false).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = fileIO.statSync(file.fd);
        expect(stat2.isCharacterDevice() === false).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoStatIsCharacterDevice003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_DIRECTORY_001
     * @tc.name   : testFileIoStatIsDirectory001
     * @tc.desc   : Test the isDirectory() method of class Stat. Promise.
     * This interface shall not treat a normal file as a directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsDirectory001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatIsDirectory001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = await fileIO.stat(fpath);
        expect(stat.isDirectory() === false).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = await fileIO.stat(file.fd);
        expect(stat2.isDirectory() === false).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatIsDirectory001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_DIRECTORY_002
     * @tc.name   : testFileIoStatIsDirectory002
     * @tc.desc   : Test the isDirectory() method of class Stat. Promise.
     * This interface shall treat a directory as a directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsDirectory002", 0, async function (done) {
      let dpath = (await nextFileName("testFileIoStatIsDirectory002")) + "d";

      try {
        fileIO.mkdirSync(dpath);
        let stat = await fileIO.stat(dpath);
        expect(stat.isDirectory() === true).assertTrue();

        let file = fileIO.openSync(dpath, fileIO.OpenMode.DIR);
        let stat2 = await fileIO.stat(file.fd);
        expect(stat2.isDirectory() === true).assertTrue();
        fileIO.closeSync(file);
        fileIO.rmdirSync(dpath);
        done();
      } catch (e) {
        console.log("testFileIoStatIsDirectory002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_DIRECTORY_003
     * @tc.name   : testFileIoStatIsDirectory003
     * @tc.desc   : Test the isDirectory() method of class Stat. Callback.
     * This interface shall treat a directory as a directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsDirectory003", 0, async function (done) {
      let dpath = (await nextFileName("testFileIoStatIsDirectory003")) + "d";

      try {
        fileIO.mkdirSync(dpath);
        fileIO.stat(dpath, (err, stat) => {
          if (err) {
            console.log("testFileIoStatIsDirectory003 error package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(stat.isDirectory() === true).assertTrue();
        });

        let file = fileIO.openSync(dpath, fileIO.OpenMode.DIR);
        fileIO.stat(file.fd, (err, stat2) => {
          if (err) {
            console.log("testFileIoStatIsDirectory003 error package2: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(stat2.isDirectory() === true).assertTrue();
          fileIO.closeSync(file);
          fileIO.rmdirSync(dpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoStatIsDirectory003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_DIRECTORY_004
     * @tc.name   : testFileIoStatIsDirectory004
     * @tc.desc   : Test the isDirectory() method of class Stat.
     * This interface shall not treat a normal file as a directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsDirectory004", 0, async function () {
      let fpath = await nextFileName("testFileIoStatIsDirectory004");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(stat.isDirectory() === false).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = fileIO.statSync(file.fd);
        expect(stat2.isDirectory() === false).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoStatIsDirectory004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_DIRECTORY_005
     * @tc.name   : testFileIoStatIsDirectory005
     * @tc.desc   : Test the isDirectory() method of class Stat.
     * This interface shall treat a directory as a directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsDirectory005", 0, async function () {
      let dpath = await nextFileName("testFileIoStatIsDirectory005");

      try {
        fileIO.mkdirSync(dpath);
        let stat = fileIO.statSync(dpath);
        expect(stat.isDirectory() === true).assertTrue();

        let file = fileIO.openSync(dpath, fileIO.OpenMode.DIR);
        let stat2 = fileIO.statSync(file.fd);
        expect(stat2.isDirectory() === true).assertTrue();
        fileIO.closeSync(file);
        fileIO.rmdirSync(dpath);
      } catch (e) {
        console.log("testFileIoStatIsDirectory005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_FIFO_001
     * @tc.name   : testFileIoStatIsFIFO001
     * @tc.desc   : Test the isFIFO() method of class Stat. Promise.
     * This interface shall not treat a normal file as a FIFO.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsFIFO001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatIsFIFO001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = await fileIO.stat(fpath);
        expect(stat.isFIFO() === false).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = await fileIO.stat(file.fd);
        expect(stat2.isFIFO() === false).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatIsFIFO001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_FIFO_002
     * @tc.name   : testFileIoStatIsFIFO002
     * @tc.desc   : Test the isFIFO() method of class Stat. Callback.
     * This interface shall not treat a normal file as a FIFO.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsFIFO002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatIsFIFO002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.stat(fpath, (err, stat) => {
          if (err) {
            console.log("testFileIoStatIsFIFO002 error package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(stat.isFIFO() === false).assertTrue();
        });

        let file = fileIO.openSync(fpath);
        fileIO.stat(file.fd, (err, stat2) => {
          if (err) {
            console.log("testFileIoStatIsFIFO002 error package2: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(stat2.isFIFO() === false).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoStatIsFIFO002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_FIFO_003
     * @tc.name   : testFileIoStatIsFIFO003
     * @tc.desc   : Test the isFIFO() method of class Stat.
     * This interface shall not treat a normal file as a FIFO.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsFIFO003", 0, async function () {
      let fpath = await nextFileName("testFileIoStatIsFIFO003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(stat.isFIFO() === false).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = fileIO.statSync(file.fd);
        expect(stat2.isFIFO() === false).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoStatIsFIFO003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_FILE_001
     * @tc.name   : testFileIoStatIsFile001
     * @tc.desc   : Test the isFile() method of class Stat. Promise.
     * This interface shall treat a normal file as a normal file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsFile001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatIsFile001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = await fileIO.stat(fpath);
        expect(stat.isFile() === true).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = await fileIO.stat(file.fd);
        expect(stat2.isFile() === true).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatIsFile001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_FILE_002
     * @tc.name   : testFileIoStatIsFile002
     * @tc.desc   : Test the isFile() method of class Stat. Promise.
     * This interface shall not treat a directory as a normal file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsFile002", 0, async function (done) {
      let dpath = await nextFileName("testFileIoStatIsFile002");

      try {
        fileIO.mkdirSync(dpath);
        let stat = await fileIO.stat(dpath);
        expect(stat.isFile() === false).assertTrue();

        let file = fileIO.openSync(dpath, fileIO.OpenMode.DIR);
        let stat2 = await fileIO.stat(file.fd);
        expect(stat2.isFile() === false).assertTrue();
        fileIO.closeSync(file);
        fileIO.rmdirSync(dpath);
        done();
      } catch (e) {
        console.log("testFileIoStatIsFile002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_FILE_003
     * @tc.name   : testFileIoStatIsFile003
     * @tc.desc   : Test the isFile() method of class Stat. Callback.
     * This interface shall treat a normal file as a normal file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsFile003", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatIsFile003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.stat(fpath, (err, stat) => {
          if (err) {
            console.log("testFileIoStatIsFile003 error package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(stat.isFile() === true).assertTrue();
        });

        let file = fileIO.openSync(fpath);
        fileIO.stat(file.fd, (err, stat2) => {
          if (err) {
            console.log("testFileIoStatIsFile003 error package2: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(stat2.isFile() === true).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoStatIsFile003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_FILE_004
     * @tc.name   : testFileIoStatIsFile004
     * @tc.desc   : Test the isFile() method of class Stat.
     * This interface shall treat a normal file as a normal file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsFile004", 0, async function () {
      let fpath = await nextFileName("testFileIoStatIsFile004");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(stat.isFile() === true).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = fileIO.statSync(file.fd);
        expect(stat2.isFile() === true).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoStatIsFile004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_FILE_005
     * @tc.name   : testFileIoStatIsFile005
     * @tc.desc   : Test the isFile() method of class Stat.
     * This interface shall not treat a directory as a normal file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsFile005", 0, async function () {
      let dpath = await nextFileName("testFileIoStatIsFile005");

      try {
        fileIO.mkdirSync(dpath);
        let stat = fileIO.statSync(dpath);
        expect(stat.isFile() === false).assertTrue();

        let file = fileIO.openSync(dpath, fileIO.OpenMode.DIR);
        let stat2 = fileIO.statSync(file.fd);
        expect(stat2.isFile() === false).assertTrue();
        fileIO.closeSync(file);
        fileIO.rmdirSync(dpath);
      } catch (e) {
        console.log("testFileIoStatIsFile005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_SOCKET_001
     * @tc.name   : testFileIoStatIsSocket001
     * @tc.desc   : Test the isSocket() method of class Stat. Promise.
     * This interface shall not treat a file as a socket.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsSocket001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatIsSocket001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = await fileIO.stat(fpath);
        expect(stat.isSocket() === false).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = await fileIO.stat(file.fd);
        expect(stat2.isSocket() === false).assertTrue();
        fileIO.closeSync(file);
        done();
      } catch (e) {
        console.log("testFileIoStatIsSocket001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_SOCKET_002
     * @tc.name   : testFileIoStatIsSocket002
     * @tc.desc   : Test the isSocket() method of class Stat. Callback.
     * This interface shall not treat a file as a socket.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsSocket002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatIsSocket002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.stat(fpath, (err, stat) => {
          if (err) {
            console.log("testFileIoStatIsSocket002 error package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(stat.isSocket() === false).assertTrue();
        });

        let file = fileIO.openSync(fpath);
        fileIO.stat(file.fd, (err, stat2) => {
          if (err) {
            console.log("testFileIoStatIsSocket002 error package2: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(stat2.isSocket() === false).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoStatIsSocket002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_SOCKET_003
     * @tc.name   : testFileIoStatIsSocket003
     * @tc.desc   : Test the isSocket() method of class Stat.
     * This interface shall not treat a file as a socket.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsSocket003", 0, async function () {
      let fpath = await nextFileName("testFileIoStatIsSocket003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(stat.isSocket() === false).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = fileIO.statSync(file.fd);
        expect(stat2.isSocket() === false).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoStatIsSocket003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_SYMBOLIC_LINK_001
     * @tc.name   : testFileIoStatIsSymbolicLink001
     * @tc.desc   : Test the isSymbolicLink() method of class Stat. Promise.
     * This interface shall not treat a normal file as a symbolic link.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsSymbolicLink001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatIsSymbolicLink001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = await fileIO.stat(fpath);
        expect(stat.isSymbolicLink() === false).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = await fileIO.stat(file.fd);
        expect(stat2.isSymbolicLink() === false).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoStatIsSymbolicLink001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_SYMBOLIC_LINK_002
     * @tc.name   : testFileIoStatIsSymbolicLink002
     * @tc.desc   : Test the isSymbolicLink() method of class Stat.  Callback.
     * This interface shall not treat a normal file as a symbolic link.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsSymbolicLink002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoStatIsSymbolicLink002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.stat(fpath, (err, stat) => {
          if (err) {
            console.log("testFileIoStatIsSymbolicLink002 error package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(stat.isSymbolicLink() === false).assertTrue();
        });

        let file = fileIO.openSync(fpath);
        fileIO.stat(file.fd, (err, stat2) => {
          if (err) {
            console.log("testFileIoStatIsSymbolicLink002 error package2: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(stat2.isSymbolicLink() === false).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoStatIsSymbolicLink002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_STAT_IS_SYMBOLIC_LINK_003
     * @tc.name   : testFileIoStatIsSymbolicLink003
     * @tc.desc   : Test the isSymbolicLink() method of class Stat.
     * This interface shall not treat a normal file as a symbolic link.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoStatIsSymbolicLink003", 0, async function () {
      let fpath = await nextFileName("testFileIoStatIsSymbolicLink003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let stat = fileIO.statSync(fpath);
        expect(stat.isSymbolicLink() === false).assertTrue();

        let file = fileIO.openSync(fpath);
        let stat2 = fileIO.statSync(file.fd);
        expect(stat2.isSymbolicLink() === false).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoStatIsSymbolicLink003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });
  });
}
