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

import { FILE_CONTENT, prepareFile, nextFileName, isIntNum, describe, it, expect, util } from "../Common";
import fileIO from "@ohos.file.fs";

export default function fileIORead() {
  describe("fileIO_fs_read", function () {
    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_001
     * @tc.name   : testFileIoReadAsync001
     * @tc.desc   : Test read() interfaces. Promise.
     * Open the file in read-only mode, default read from current offset.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoReadAsync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen1 = await fileIO.read(file.fd, new ArrayBuffer(16));
        expect(readLen1 == FILE_CONTENT.length).assertTrue();
        let readLen2 = await fileIO.read(file.fd, new ArrayBuffer(8));
        expect(readLen2 == 0).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoReadAsync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_002
     * @tc.name   : testFileIoReadAsync002
     * @tc.desc   : Test read() interfaces. Promise.
     * Open the file in write-only mode, verifying it is not readable.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoReadAsync002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);

      try {
        expect(isIntNum(file.fd)).assertTrue();
        await fileIO.read(file.fd, new ArrayBuffer(4096));
        expect(false).assertTrue();
      } catch (e) {
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        console.log("testFileIoReadAsync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900008 && e.message == "Bad file descriptor").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_003
     * @tc.name   : testFileIoReadAsync003
     * @tc.desc   : Test read() interfaces. Promise.
     * Open the file in read-only mode, reading the file with offset(position) = 1.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync003", 0, async function (done) {
      let fpath = await nextFileName("testFileIoReadAsync003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let readlen = await fileIO.read(file.fd, new ArrayBuffer(4096), {
          offset: 1,
        });
        expect(readlen == FILE_CONTENT.length - 1).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoReadAsync003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_004
     * @tc.name   : testFileIoReadAsync004
     * @tc.desc   : Test read() interfaces. Promise.
     * Open the file in read-only mode, reading the file with length = 3.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync004", 0, async function (done) {
      let fpath = await nextFileName("testFileIoReadAsync004");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen = await fileIO.read(file.fd, new ArrayBuffer(4096), {
          length: 3,
        });
        expect(readLen == 3).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoReadAsync004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_005
     * @tc.name   : testFileIoReadAsync005
     * @tc.desc   : Test read() interfaces. Promise.
     * Open the file in read-only mode, reading the file with offset > the content of file(Read normal).
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync005", 0, async function (done) {
      let fpath = await nextFileName("testFileIoReadAsync005");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen = await fileIO.read(file.fd, new ArrayBuffer(4096), {
          offset: FILE_CONTENT.length + 1,
        });
        expect(readLen == 0).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoReadAsync005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_006
     * @tc.name   : testFileIoReadAsync006
     * @tc.desc   : Test read() interfaces. Promise.
     * Open the file in read-only mode, reading the file with offset(position) = 1, length = 11.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync006", 0, async function (done) {
      let fpath = await nextFileName("testFileIoReadAsync006");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen = await fileIO.read(file.fd, new ArrayBuffer(4096), {
          offset: 1,
          length: 11,
        });
        expect(readLen == 10).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoReadAsync006 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_007
     * @tc.name   : testFileIoReadAsync007
     * @tc.desc   : Test read() interfaces. Promise.
     * Read with invalid fd parameters.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync007", 0, async function (done) {
      try {
        await fileIO.read(-1, new ArrayBuffer(4096));
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoReadAsync007 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_008
     * @tc.name   : testFileIoReadAsync008
     * @tc.desc   : Test read() interfaces. Promise.
     * Open the file in read-only mode, reading the file with empty option.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync008", 0, async function (done) {
      let fpath = await nextFileName("testFileIoReadAsync008");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen = await fileIO.read(file.fd, new ArrayBuffer(4096), {});
        expect(readLen == FILE_CONTENT.length).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoReadAsync008 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_009
     * @tc.name   : testFileIoReadAsync009
     * @tc.desc   : Test read() interfaces. Promise.
     * Undefined option arguments, use default options.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync009", 3, async function (done) {
      let fpath = await nextFileName("testFileIoReadAsync009");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen1 = await fileIO.read(file.fd, new ArrayBuffer(16), undefined);
        expect(readLen1 == FILE_CONTENT.length).assertTrue();
        let readLen2 = await fileIO.read(file.fd, new ArrayBuffer(8), undefined);
        expect(readLen2 == 0).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoReadAsync009 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_010
     * @tc.name   : testFileIoReadAsync010
     * @tc.desc   : Test read() interfaces. Callback.
     * Open the file in read-only mode, default read from current offset.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync010", 0, async function (done) {
      let fpath = await nextFileName("testFileIoReadAsync010");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.read(file.fd, new ArrayBuffer(16), (err, readlen1) => {
          if (err) {
            console.log("testFileIoReadAsync010 err package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(readlen1 == FILE_CONTENT.length).assertTrue();
          fileIO.read(file.fd, new ArrayBuffer(8), (err, readLen2) => {
            if (err) {
              console.log("testFileIoReadAsync010 err package2: " + JSON.stringify(err));
              expect(false).assertTrue();
            }
            expect(readLen2 == 0).assertTrue();
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
            done();
          });
        });
      } catch (e) {
        console.log("testFileIoReadAsync010 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_011
     * @tc.name   : testFileIoReadAsync011
     * @tc.desc   : Test read() interfaces. Callback.
     * Open the file in write-only mode, verifying it is not readable.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync011", 0, async function (done) {
      let fpath = await nextFileName("testFileIoReadAsync011");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file;

      try {
        file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.read(file.fd, new ArrayBuffer(4096), (err) => {
          if (err) {
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
            console.log("testFileIoReadAsync011 error: {message: " + err.message + ", code: " + err.code + "}");
            expect(err.code == 13900008 && err.message == "Bad file descriptor").assertTrue();
            done();
          }
        });
      } catch (e) {
        console.log("testFileIoReadAsync011 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_012
     * @tc.name   : testFileIoReadAsync012
     * @tc.desc   : Test read() interfaces. Callback.
     * Open the file in read-only mode, reading the file with offset(position) = 1.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync012", 0, async function (done) {
      let fpath = await nextFileName("testFileIoReadAsync012");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.read(
          file.fd,
          new ArrayBuffer(4096),
          {
            offset: 1,
          },
          (err, readLen) => {
            if (err) {
              console.log("testFileIoReadAsync012 err package" + JSON.stringify(err));
              expect(false).assertTrue();
            }
            expect(readLen == FILE_CONTENT.length - 1).assertTrue();
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
            done();
          }
        );
      } catch (e) {
        console.log("testFileIoReadAsync012 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_013
     * @tc.name   : testFileIoReadAsync013
     * @tc.desc   : Test read() interfaces. Callback.
     * Open the file in read-only mode, reading the file with length = 3.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync013", 0, async function (done) {
      let fpath = await nextFileName("testFileIoReadAsync013");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.read(
          file.fd,
          new ArrayBuffer(4096),
          {
            length: 3,
          },
          (err, readLen) => {
            if (err) {
              console.log("testFileIoReadAsync013 err package" + JSON.stringify(err));
              expect(false).assertTrue();
            }
            expect(readLen == 3).assertTrue();
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
            done();
          }
        );
      } catch (e) {
        console.log("testFileIoReadAsync013 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_014
     * @tc.name   : testFileIoReadAsync014
     * @tc.desc   : Test read() interfaces. Callback.
     * Open the file in read-only mode, reading the file with offset > the content of file(Read normal).
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync014", 0, async function (done) {
      let fpath = await nextFileName("testFileIoReadAsync014");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.read(
          file.fd,
          new ArrayBuffer(4096),
          {
            offset: FILE_CONTENT.length + 1,
          },
          (err, readLen) => {
            if (err) {
              console.log("testFileIoReadAsync014 err package" + JSON.stringify(err));
              expect(false).assertTrue();
            }
            expect(readLen == 0).assertTrue();
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
            done();
          }
        );
      } catch (e) {
        console.log("testFileIoReadAsync014 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_015
     * @tc.name   : testFileIoReadAsync015
     * @tc.desc   : Test read() interfaces. Callback.
     * Open the file in read-only mode, reading the file with offset(position) = 1, length = 11.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync015", 0, async function (done) {
      let fpath = await nextFileName("testFileIoReadAsync015");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.read(
          file.fd,
          new ArrayBuffer(4096),
          {
            offset: 1,
            length: 11,
          },
          (err, readLen) => {
            if (err) {
              console.log("testFileIoReadAsync015 err package: " + JSON.stringify(err));
              expect(false).assertTrue();
            }
            expect(readLen == 10).assertTrue();
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
            done();
          }
        );
      } catch (e) {
        console.log("testFileIoReadAsync015 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_016
     * @tc.name   : testFileIoReadAsync016
     * @tc.desc   : Test read() interfaces. Callback.
     * Read with invalid fd parameters.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync016", 0, async function (done) {
      try {
        fileIO.read(-1, new ArrayBuffer(4096), (err) => {
          if (err) {
            expect(false).assertTrue();
          }
        });
      } catch (e) {
        console.log("testFileIoReadAsync016 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_017
     * @tc.name   : testFileIoReadAsync017
     * @tc.desc   : Test read() interfaces. Callback.
     * Open the file in read-only mode, reading the file with empty option.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync017", 0, async function (done) {
      let fpath = await nextFileName("testFileIoReadAsync017");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.read(file.fd, new ArrayBuffer(4096), {}, (err, readLen) => {
          if (err) {
            console.log("testFileIoReadAsync017 err package " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(readLen == FILE_CONTENT.length).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoReadAsync017 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_ASYNC_018
     * @tc.name   : testFileIoReadAsync018
     * @tc.desc   : Test read() interfaces. Callback.
     * Undefined option arguments, use default options.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadAsync018", 3, async function (done) {
      let fpath = await nextFileName("testFileIoReadAsync018");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.read(file.fd, new ArrayBuffer(16), undefined, (err, readlen1) => {
          if (err) {
            console.log("testFileIoReadAsync018 err package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(readlen1 == FILE_CONTENT.length).assertTrue();
          fileIO.read(file.fd, new ArrayBuffer(8), undefined, (err, readLen2) => {
            if (err) {
              console.log("testFileIoReadAsync018 err package2: " + JSON.stringify(err));
              expect(false).assertTrue();
            }
            expect(readLen2 == 0).assertTrue();
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
            done();
          });
        });
      } catch (e) {
        console.log("testFileIoReadAsync018 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_SYNC_001
     * @tc.name   : testFileIoReadSync001
     * @tc.desc   : Test readSync() interfaces.
     * Open the file in read-only mode, default read from current offset.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadSync001", 0, async function () {
      let fpath = await nextFileName("testFileIoReadSync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen1 = fileIO.readSync(file.fd, new ArrayBuffer(16));
        expect(readLen1 == FILE_CONTENT.length).assertTrue();
        let readLen2 = fileIO.readSync(file.fd, new ArrayBuffer(8));
        expect(readLen2 == 0).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoReadSync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_SYNC_002
     * @tc.name   : testFileIoReadSync002
     * @tc.desc   : Test readSync() interfaces.
     * Open the file in write-only mode, verifying it is not readable.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadSync002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoReadSync002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);

      try {
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.readSync(file.fd, new ArrayBuffer(4096));
        expect(false).assertTrue();
      } catch (e) {
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        console.log("testFileIoReadSync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900008 && e.message == "Bad file descriptor").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_SYNC_003
     * @tc.name   : testFileIoReadSync003
     * @tc.desc   : Test readSync() interfaces.
     * Open the file in read-only mode, reading the file with offset(position) = 1.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("fileIO_test_read_sync_005", 0, async function () {
      let fpath = await nextFileName("fileIO_test_read_sync_005");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096), {
          offset: 1,
        });
        expect(readLen == FILE_CONTENT.length - 1).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("fileIO_test_read_sync_005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_SYNC_004
     * @tc.name   : testFileIoReadSync004
     * @tc.desc   : Test readSync() interfaces.
     * Open the file in read-only mode, reading the file with length = 3.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("fileIO_test_read_sync_001", 0, async function () {
      let fpath = await nextFileName("fileIO_test_read_sync_001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096), {
          length: 3,
        });
        expect(readLen == 3).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("fileIO_test_read_sync_001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_SYNC_005
     * @tc.name   : testFileIoReadSync005
     * @tc.desc   : Test readSync() interfaces.
     * Open the file in read-only mode, reading the file with offset(position) > the content of file(Read normal).
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadSync005", 0, async function () {
      let fpath = await nextFileName("testFileIoReadSync005");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096), {
          offset: FILE_CONTENT.length + 1,
        });
        expect(readLen == 0).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoReadSync005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_SYNC_006
     * @tc.name   : testFileIoReadSync006
     * @tc.desc   : Test readSync() interfaces.
     * Open the file in read-only mode, reading the file with offset(position) = 1, length = 11.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadSync006", 0, async function () {
      let fpath = await nextFileName("testFileIoReadSync006");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096), {
          offset: 1,
          length: 11,
        });
        expect(readLen == 10).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoReadSync006 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_SYNC_007
     * @tc.name   : testFileIoReadSync007
     * @tc.desc   : Test readSync() interfaces.
     * Read the file with invalid fd.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadSync007", 0, async function () {
      try {
        fileIO.readSync(-1, new ArrayBuffer(4096));
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoReadSync007 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_SYNC_008
     * @tc.name   : testFileIoReadSync008
     * @tc.desc   : Test readSync() interfaces.
     * Open the file in read-only mode, reading the file with empty option.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadSync008", 3, async function () {
      let fpath = await nextFileName("testFileIoReadSync008");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen1 = fileIO.readSync(file.fd, new ArrayBuffer(16));
        expect(readLen1 == FILE_CONTENT.length).assertTrue();
        let readLen2 = fileIO.readSync(file.fd, new ArrayBuffer(8));
        expect(readLen2 == 0).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoReadSync008 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_SYNC_009
     * @tc.name   : testFileIoReadSync009
     * @tc.desc   : Test readSync() interfaces.
     * Undefined option arguments, use default options.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadSync009", 3, async function () {
      let fpath = await nextFileName("testFileIoReadSync009");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen1 = fileIO.readSync(file.fd, new ArrayBuffer(16), undefined);
        expect(readLen1 == FILE_CONTENT.length).assertTrue();
        let readLen2 = fileIO.readSync(file.fd, new ArrayBuffer(8), undefined);
        expect(readLen2 == 0).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoReadSync009 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_SYNC_010
     * @tc.name   : testFileIoReadSync010
     * @tc.desc   : Test readSync() interfaces.
     * Read the file with invalid offset = -1.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadSync010", 0, async function () {
      let fpath = await nextFileName("testFileIoReadSync010");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
      const invalidOffset = -1;

      try {
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.readSync(file.fd, new ArrayBuffer(4096), {
          offset: invalidOffset,
        });
        expect(false).assertTrue();
      } catch (e) {
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        console.log("testFileIoReadSync010 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_SYNC_011
     * @tc.name   : testFileIoReadSync011
     * @tc.desc   : Test readSync() interfaces.
     * Read the file with invalid length > size of ArrayBuffer.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadSync011", 0, async function () {
      let fpath = await nextFileName("testFileIoReadSync011");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);

      try {
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.readSync(file.fd, new ArrayBuffer(4096), {
          length: 4097,
        });
        expect(false).assertTrue();
      } catch (e) {
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        console.log("testFileIoReadSync011 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_READ_SYNC_012
     * @tc.name   : testFileIoReadSync012
     * @tc.desc   : Test readSync() interfaces.
     * Open the file in read-only mode, reading the file with length > the content of file(Read normal).
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoReadSync012", 0, async function () {
      let fpath = await nextFileName("testFileIoReadSync012");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096), {
          length: FILE_CONTENT.length + 1,
        });
        expect(readLen == FILE_CONTENT.length).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoReadSync012 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });
  });
}
