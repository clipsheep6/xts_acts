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

export default function fileIOWrite() {
  describe("fileIO_fs_write", function () {
    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_001
     * @tc.name   : testFileIoWriteAsync001
     * @tc.desc   : Test write() interfaces. Promise.
     * Open the file in write-only mode, default write from current offset.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten1 = await fileIO.write(file.fd, FILE_CONTENT);
        expect(bytesWritten1 == FILE_CONTENT.length).assertTrue();
        let bytesWritten2 = await fileIO.write(file.fd, new ArrayBuffer(FILE_CONTENT.length));
        expect(bytesWritten2 == FILE_CONTENT.length).assertTrue();
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096), { offset: 0 });
        expect(readLen == FILE_CONTENT.length * 2).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoWriteAsync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_002
     * @tc.name   : testFileIoWriteAsync002
     * @tc.desc   : Test write() interfaces. Promise.
     * Open the file in read-only mode, verifying that it is not writable.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);

      try {
        expect(isIntNum(file.fd)).assertTrue();
        await fileIO.write(file.fd, FILE_CONTENT);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        console.log("testFileIoWriteAsync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900008 && e.message == "Bad file descriptor").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_003
     * @tc.name   : testFileIoWriteAsync003
     * @tc.desc   : Test write() interfaces. Promise.
     * Open the file in write-only mode, writing a string of length = 3.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync003", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten = await fileIO.write(file.fd, FILE_CONTENT, {
          length: 3,
        });
        expect(bytesWritten == 3).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoWriteAsync003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_004
     * @tc.name   : testFileIoWriteAsync004
     * @tc.desc   : Test write() interfaces. Promise.
     * Open the file in write-only mode, writing a string from offset(position) = 5.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync004", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync004");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten = await fileIO.write(file.fd, FILE_CONTENT, {
          offset: 5,
        });
        expect(bytesWritten == FILE_CONTENT.length).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoWriteAsync004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_005
     * @tc.name   : testFileIoWriteAsync005
     * @tc.desc   : Test write() interfaces. Promise.
     * Open the file in write-only mode, writing a string of with length = 3 and offset = 5.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync005", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync005");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten = await fileIO.write(file.fd, FILE_CONTENT, {
          length: 3,
          offset: 5,
        });
        expect(bytesWritten == 3).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoWriteAsync005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_006
     * @tc.name   : testFileIoWriteAsync006
     * @tc.desc   : Test write() interfaces. Promise.
     * Open the file in write-only mode, writing a string of with length = 3, offset = 5 and encoding = 'utf-8'.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync006", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync006");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten = await fileIO.write(file.fd, FILE_CONTENT, {
          length: 3,
          offset: 5,
          encoding: "utf-8",
        });
        expect(bytesWritten == 3).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoWriteAsync006 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_007
     * @tc.name   : testFileIoWriteAsync007
     * @tc.desc   : Test write() interfaces. Promise.
     * Open the file in write-only mode, writing an ArrayBuffer(4096).
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync007", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync007");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten = await fileIO.write(file.fd, new ArrayBuffer(4096));
        expect(bytesWritten == 4096).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoWriteAsync007 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_008
     * @tc.name   : testFileIoWriteAsync008
     * @tc.desc   : Test write() interfaces. Promise.
     * Open the file in write-only mode, writing a string with empty option parameters.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("fileIO_test_write_async_014", 0, async function (done) {
      let fpath = await nextFileName("fileIO_test_write_async_014");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten = await fileIO.write(file.fd, FILE_CONTENT, {});
        expect(bytesWritten == FILE_CONTENT.length).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("fileIO_test_write_async_014 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_009
     * @tc.name   : testFileIoWriteAsync009
     * @tc.desc   : Test write() interfaces. Promise.
     * Write with invalid fd parameters.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync009", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync009");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        await fileIO.write(-1, FILE_CONTENT);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.unlinkSync(fpath);
        console.log("testFileIoWriteAsync009 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_010
     * @tc.name   : testFileIoWriteAsync010
     * @tc.desc   : Test write() interfaces. Promise.
     * Undefined option arguments, use default options.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync010", 3, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync010");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten1 = await fileIO.write(file.fd, FILE_CONTENT, undefined);
        expect(bytesWritten1 == FILE_CONTENT.length).assertTrue();
        let bytesWritten2 = await fileIO.write(file.fd, new ArrayBuffer(FILE_CONTENT.length), undefined);
        expect(bytesWritten2 == FILE_CONTENT.length).assertTrue();
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096), { offset: 0 });
        expect(readLen == FILE_CONTENT.length * 2).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoWriteAsync010 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_011
     * @tc.name   : testFileIoWriteAsync011
     * @tc.desc   : Test write() interfaces. Callback.
     * Open the file in write-only mode, default write from current offset.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync011", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync011");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.write(file.fd, FILE_CONTENT, (err, bytesWritten1) => {
          if (err) {
            console.log("testFileIoWriteAsync011 err package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(bytesWritten1 == FILE_CONTENT.length).assertTrue();
          fileIO.write(file.fd, new ArrayBuffer(FILE_CONTENT.length), (err, bytesWritten2) => {
            if (err) {
              console.log("testFileIoWriteAsync011 err package2: " + JSON.stringify(err));
              expect(false).assertTrue();
            }
            expect(bytesWritten2 == FILE_CONTENT.length).assertTrue();
            let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096), { offset: 0 });
            expect(readLen == FILE_CONTENT.length * 2).assertTrue();
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
            done();
          });
        });
      } catch (e) {
        console.log("testFileIoWriteAsync011 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_012
     * @tc.name   : testFileIoWriteAsync012
     * @tc.desc   : Test write() interfaces. Callback.
     * Open the file in read-only mode, verifying that it is not writable.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync012", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync012");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);

      try {
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.write(file.fd, FILE_CONTENT, (err) => {
          if (err) {
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
            console.log("testFileIoWriteAsync012 error: {message: " + err.message + ", code: " + err.code + "}");
            expect(err.code == 13900008 && err.message == "Bad file descriptor").assertTrue();
            done();
          }
        });
      } catch (e) {
        console.log("testFileIoWriteAsync012 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_013
     * @tc.name   : testFileIoWriteAsync013
     * @tc.desc   : Test write() interfaces. Callback.
     * Open the file in write-only mode, writing a string of length = 3.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync013", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync013");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.write(
          file.fd,
          FILE_CONTENT,
          {
            length: 3,
          },
          (err, bytesWritten) => {
            if (err) {
              console.log("testFileIoWriteAsync013 err package: " + JSON.stringify(err));
              expect(false).assertTrue();
            }
            expect(bytesWritten == 3).assertTrue();
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
            done();
          }
        );
      } catch (e) {
        console.log("testFileIoWriteAsync013 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_014
     * @tc.name   : testFileIoWriteAsync014
     * @tc.desc   : Test write() interfaces. Callback.
     * Open the file in write-only mode, writing a string from offset(position) = 5.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync014", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync014");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.write(
          file.fd,
          FILE_CONTENT,
          {
            offset: 5,
          },
          (err, bytesWritten) => {
            if (err) {
              console.log("testFileIoWriteAsync014 err package: " + JSON.stringify(err));
              expect(false).assertTrue();
            }
            expect(bytesWritten == FILE_CONTENT.length).assertTrue();
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
            done();
          }
        );
      } catch (e) {
        console.log("testFileIoWriteAsync014 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_015
     * @tc.name   : testFileIoWriteAsync015
     * @tc.desc   : Test write() interfaces. Callback.
     * Open the file in write-only mode, writing a string of with length = 3 and offset = 5.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync015", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync015");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.write(
          file.fd,
          FILE_CONTENT,
          {
            length: 3,
            offset: 5,
          },
          (err, bytesWritten) => {
            if (err) {
              console.log("testFileIoWriteAsync015 err package: " + JSON.stringify(err));
              expect(false).assertTrue();
            }
            expect(bytesWritten == 3).assertTrue();
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
            done();
          }
        );
      } catch (e) {
        console.log("testFileIoWriteAsync015 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_016
     * @tc.name   : testFileIoWriteAsync016
     * @tc.desc   : Test write() interfaces. Callback.
     * Open the file in write-only mode, writing a string of with length = 3, offset = 5 and encoding = 'utf-8'.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync016", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync016");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.write(
          file.fd,
          FILE_CONTENT,
          {
            length: 3,
            offset: 5,
            encoding: "utf-8",
          },
          (err, bytesWritten) => {
            if (err) {
              console.log("testFileIoWriteAsync016 err package: " + JSON.stringify(err));
              expect(false).assertTrue();
            }
            expect(bytesWritten == 3).assertTrue();
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
            done();
          }
        );
      } catch (e) {
        console.log("testFileIoWriteAsync016 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_017
     * @tc.name   : testFileIoWriteAsync017
     * @tc.desc   : Test write() interfaces. Callback.
     * Open the file in write-only mode, writing an ArrayBuffer(4096).
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync017", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync017");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.write(file.fd, new ArrayBuffer(4096), (err, bytesWritten) => {
          if (err) {
            console.log("testFileIoWriteAsync017 err package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(bytesWritten == 4096).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoWriteAsync017 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_018
     * @tc.name   : testFileIoWriteAsync018
     * @tc.desc   : Test write() interfaces. Callback.
     * Open the file in write-only mode, writing a string with empty option parameters.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync018", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync018");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.write(file.fd, new ArrayBuffer(4096), {}, (err, bytesWritten) => {
          if (err) {
            console.log("testFileIoWriteAsync018 err package " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(bytesWritten == 4096).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoWriteAsync018 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_019
     * @tc.name   : testFileIoWriteAsync019
     * @tc.desc   : Test write() interfaces. Callback.
     * Write with invalid fd parameters.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync019", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync019");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.write(-1, FILE_CONTENT, (err) => {
          expect(false).assertTrue();
        });
      } catch (e) {
        fileIO.unlinkSync(fpath);
        console.log("testFileIoWriteAsync019 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_020
     * @tc.name   : testFileIoWriteAsync020
     * @tc.desc   : Test write() interfaces. Callback.
     * Undefined option arguments, use default options.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync020", 3, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync020");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.write(file.fd, FILE_CONTENT, undefined, (err, bytesWritten1) => {
          if (err) {
            console.log("testFileIoWriteAsync020 err package1: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(bytesWritten1 == FILE_CONTENT.length).assertTrue();
          fileIO.write(file.fd, new ArrayBuffer(FILE_CONTENT.length), undefined, (err, bytesWritten2) => {
            if (err) {
              console.log("testFileIoWriteAsync020 err package2: " + JSON.stringify(err));
              expect(false).assertTrue();
            }
            expect(bytesWritten2 == FILE_CONTENT.length).assertTrue();
            let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096), { offset: 0 });
            expect(readLen == FILE_CONTENT.length * 2).assertTrue();
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
            done();
          });
        });
      } catch (e) {
        console.log("testFileIoWriteAsync020 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_021
     * @tc.name   : testFileIoWriteAsync021
     * @tc.desc   : Test write() interfaces. Callback.
     * Write with invalid offset parameters.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync021", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync021");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
      const invalidOffset = -1;

      try {
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.write(
          file.fd,
          FILE_CONTENT,
          {
            offset: invalidOffset,
          },
          (err) => {
            expect(false).assertTrue();
          }
        );
      } catch (e) {
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        console.log("testFileIoWriteAsync021 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_ASYNC_022
     * @tc.name   : testFileIoWriteAsync022
     * @tc.desc   : Test write() interfaces. Callback.
     * Write with invalid length parameters.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteAsync022", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteAsync022");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
      const invalidLength = 9999;

      try {
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.write(
          file.fd,
          FILE_CONTENT,
          {
            length: invalidLength,
          },
          (err) => {
            expect(false).assertTrue();
          }
        );
      } catch (e) {
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        console.log("testFileIoWriteAsync022 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_SYNC_001
     * @tc.name   : testFileIoWriteSync001
     * @tc.desc   : Test writeSync() interfaces.
     * Open the file in write-only mode, default write from current offset.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteSync001", 0, async function () {
      let fpath = await nextFileName("testFileIoWriteSync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten1 = fileIO.writeSync(file.fd, FILE_CONTENT);
        expect(bytesWritten1 == FILE_CONTENT.length).assertTrue();
        let bytesWritten2 = fileIO.writeSync(file.fd, new ArrayBuffer(FILE_CONTENT.length));
        expect(bytesWritten2 == FILE_CONTENT.length).assertTrue();
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096), { offset: 0 });
        expect(readLen == FILE_CONTENT.length * 2).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoWriteSync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_SYNC_002
     * @tc.name   : testFileIoWriteSync002
     * @tc.desc   : Test writeSync() interfaces.
     * Open the file in read-only mode, verifying that it is not writable.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteSync002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteSync002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);

      try {
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.writeSync(file.fd, FILE_CONTENT);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        console.log("testFileIoWriteSync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900008 && e.message == "Bad file descriptor").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_SYNC_003
     * @tc.name   : testFileIoWriteSync003
     * @tc.desc   : Test writeSync() interfaces.
     * Open the file in write-only mode, writing a string of length = 3.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteSync003", 0, async function () {
      let fpath = await nextFileName("testFileIoWriteSync003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten = fileIO.writeSync(file.fd, FILE_CONTENT, {
          length: 3,
        });
        expect(bytesWritten == 3).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoWriteSync003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_SYNC_004
     * @tc.name   : testFileIoWriteSync004
     * @tc.desc   : Test writeSync() interfaces.
     * Open the file in write-only mode, writing a string from offset(position) = 5.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteSync004", 0, async function () {
      let fpath = await nextFileName("testFileIoWriteSync004");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten = fileIO.writeSync(file.fd, FILE_CONTENT, {
          offset: 5,
        });
        expect(bytesWritten == FILE_CONTENT.length).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoWriteSync004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_SYNC_005
     * @tc.name   : testFileIoWriteSync005
     * @tc.desc   : Test writeSync() interfaces.
     * Open the file in write-only mode, writing a string of length = 3 and offset(position) = 5.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteSync005", 0, async function () {
      let fpath = await nextFileName("testFileIoWriteSync005");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten = fileIO.writeSync(file.fd, FILE_CONTENT, {
          offset: 5,
          length: 3,
        });
        expect(bytesWritten == 3).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoWriteSync005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_SYNC_006
     * @tc.name   : testFileIoWriteSync006
     * @tc.desc   : Test writeSync() interfaces.
     * Open the file in write-only mode, writing a string of length = 3, offset(position) = 5, encoding = 'utf-8'.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteSync006", 0, async function () {
      let fpath = await nextFileName("testFileIoWriteSync006");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten = fileIO.writeSync(file.fd, FILE_CONTENT, {
          offset: 5,
          length: 3,
          encoding: "utf-8",
        });
        expect(bytesWritten == 3).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoWriteSync006 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_SYNC_007
     * @tc.name   : testFileIoWriteSync007
     * @tc.desc   : Test writeSync() interfaces.
     * Open the file in write-only mode, writing an ArrayBuffer(4096).
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteSync007", 0, async function () {
      let fpath = await nextFileName("testFileIoWriteSync007");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten = fileIO.writeSync(file.fd, new ArrayBuffer(4096));
        expect(bytesWritten == 4096).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoWriteSync007 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_SYNC_008
     * @tc.name   : testFileIoWriteSync008
     * @tc.desc   : Test writeSync() interfaces.
     * Open the file in write-only mode, writing a string with empty option parameters.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteSync008", 0, async function (done) {
      let fpath = await nextFileName("testFileIoWriteSync008");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten = fileIO.writeSync(file.fd, FILE_CONTENT, {});
        expect(bytesWritten == FILE_CONTENT.length).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoWriteSync008 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_SYNC_009
     * @tc.name   : testFileIoWriteSync009
     * @tc.desc   : Test writeSync() interfaces.
     * Write with invalid fd parameters.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteSync009", 0, function () {
      try {
        fileIO.writeSync(-1, FILE_CONTENT);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoWriteSync009 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_SYNC_010
     * @tc.name   : testFileIoWriteSync010
     * @tc.desc   : Test writeSync() interfaces.
     * Undefined option arguments, use default options.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteSync010", 3, async function () {
      let fpath = await nextFileName("testFileIoWriteSync010");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten1 = fileIO.writeSync(file.fd, FILE_CONTENT, undefined);
        expect(bytesWritten1 == FILE_CONTENT.length).assertTrue();
        let bytesWritten2 = fileIO.writeSync(file.fd, new ArrayBuffer(FILE_CONTENT.length), undefined);
        expect(bytesWritten2 == FILE_CONTENT.length).assertTrue();
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096), { offset: 0 });
        expect(readLen == FILE_CONTENT.length * 2).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoWriteSync010 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_SYNC_011
     * @tc.name   : testFileIoWriteSync011
     * @tc.desc   : Test writeSync() interfaces.
     * Write with invalid 'offset' option.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteSync011", 0, async function () {
      let fpath = await nextFileName("testFileIoWriteSync011");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
      const invalidOffset = -1;

      try {
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.writeSync(file.fd, FILE_CONTENT, { offset: invalidOffset });
        expect(false).assertTrue();
      } catch (e) {
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        console.log("testFileIoWriteSync011 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_WRITE_SYNC_012
     * @tc.name   : testFileIoWriteSync012
     * @tc.desc   : Test writeSync() interfaces.
     * Write with invalid 'length' option.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoWriteSync012", 0, async function () {
      let fpath = await nextFileName("testFileIoWriteSync012");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
      const invalidLength = 4097;

      try {
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.writeSync(file.fd, new ArrayBuffer(4096), { length: invalidLength });
        expect(false).assertTrue();
      } catch (e) {
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        console.log("testFileIoWriteSync012 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
      }
    });
  });
}
