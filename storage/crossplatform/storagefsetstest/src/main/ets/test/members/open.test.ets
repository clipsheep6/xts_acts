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

import { FILE_CONTENT, nextFileName, prepareFile, isIntNum, describe, it, expect } from "../Common";
import fileIO from "@ohos.file.fs";

export default function fileIOOpen() {
  describe("fileIO_fs_open", function () {
    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_001
     * @tc.name   : testFileIoOpenAsync001
     * @tc.desc   : Test open() interfaces. mode=0o0. Promise.
     * Open the file in read-only mode, verifying the file is readable.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = await fileIO.open(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.read(file.fd, new ArrayBuffer(4096)).then((readLen) => {
          expect(readLen == FILE_CONTENT.length).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoOpenAsync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_002
     * @tc.name   : testFileIoOpenAsync002
     * @tc.desc   : Test open() interfaces.  mode=0o1. Promise.
     * Open the file in write-only mode, verifying the file is writable.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let length = 20;

      try {
        let file = await fileIO.open(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.write(file.fd, new ArrayBuffer(length)).then((bytesWritten) => {
          expect(bytesWritten == length).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoOpenAsync002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_003
     * @tc.name   : testFileIoOpenAsync003
     * @tc.desc   : Test open() interfaces.  mode=0o2. Promise.
     * The path point to nothing, no such file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync003", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync003");

      try {
        await fileIO.open(fpath, fileIO.OpenMode.READ_WRITE);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoOpenAsync003 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900002 && e.message == "No such file or directory").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_004
     * @tc.name   : testFileIoOpenAsync004
     * @tc.desc   : Test open() interfaces.  mode=0o102. Promise.
     * If the path point to the file which does not exist, the file can be created.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync004", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync004");

      try {
        let file = await fileIO.open(fpath, fileIO.OpenMode.CREATE | fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoOpenAsync004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_005
     * @tc.name   : testFileIoOpenAsync005
     * @tc.desc   : Test open() interfaces.  mode=0o1002. Promise.
     * If the file exists and the file is opened for read-write, trim its length to zero.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync005", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync005");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = await fileIO.open(fpath, fileIO.OpenMode.TRUNC | fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.read(file.fd, new ArrayBuffer(4096)).then((readLen) => {
          expect(readLen == 0).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
        });
        done();
      } catch (e) {
        console.log("testFileIoOpenAsync005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_006
     * @tc.name   : testFileIoOpenAsync006
     * @tc.desc   : Test open() interfaces.  mode=0o2002. Promise.
     * Open as append, subsequent writes will append to the end of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync006", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync006");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let length = 100;

      try {
        let file = await fileIO.open(fpath, fileIO.OpenMode.APPEND | fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.writeSync(file.fd, new ArrayBuffer(length));
        fileIO.read(file.fd, new ArrayBuffer(4096), { offset: 0 }).then((readLen) => {
          expect(readLen == length + FILE_CONTENT.length).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
        });
        done();
      } catch (e) {
        console.log("testFileIoOpenAsync006 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_007
     * @tc.name   : testFileIoOpenAsync007
     * @tc.desc   : Test open() interfaces.  mode=0o4002. Promise.
     * If the file is a special file, the opening and subsequent IOs perform non-blocking operations.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync007", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync007");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = await fileIO.open(fpath, fileIO.OpenMode.NONBLOCK | fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoOpenAsync007 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_008
     * @tc.name   : testFileIoOpenAsync008
     * @tc.desc   : Test open() interfaces.  mode=0o200000. Promise.
     * The path points to a directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync008", 0, async function (done) {
      let dpath = await nextFileName("testFileIoOpenAsync008");
      fileIO.mkdirSync(dpath);

      try {
        let file = await fileIO.open(dpath, fileIO.OpenMode.DIR);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.rmdirSync(dpath);
        done();
      } catch (e) {
        console.log("testFileIoOpenAsync008 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_009
     * @tc.name   : testFileIoOpenAsync009
     * @tc.desc   : Test open() interfaces.  mode=0o200000. Promise.
     * The path does not point to a directory, throw error.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync009", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync009");
      expect(prepareFile(fpath, "")).assertTrue();

      try {
        await fileIO.open(fpath, fileIO.OpenMode.DIR);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.unlinkSync(fpath);
        console.log("testFileIoOpenAsync009 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900018 && e.message == "Not a directory").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_010
     * @tc.name   : testFileIoOpenAsync010
     * @tc.desc   : Test open() interfaces.  mode=0o400002. Promise.
     * The path does not point to a symbolic link.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync010", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync010");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = await fileIO.open(fpath, fileIO.OpenMode.NOFOLLOW | fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoOpenAsync010 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    // /**
    //  * @tc.number : TEST_FILEIO_OPEN_ASYNC_011
    //  * @tc.name   : testFileIoOpenAsync011
    //  * @tc.desc   : Test open() interfaces.  mode=0o400002. Promise.
    //  * The path point to a symbolic link, throw error.
    //  * @tc.size   : MediumTest
    //  * @tc.type   : Function
    //  * @tc.level  : Level 2
    //  */
    // it('testFileIoOpenAsync011', 0, async function (done) {
    //     let fpath = await nextFileName('testFileIoOpenAsync011');
    //     let ffpath = fpath + 'aaaa';
    //     expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    //     try {
    //         fileIO.symlinkSync(fpath, ffpath);
    //         await fileIO.open(ffpath, fileIO.OpenMode.NOFOLLOW | fileIO.OpenMode.READ_WRITE);
    //         expect(false).assertTrue();
    //     } catch (e) {
    //     fileIO.unlinkSync(fpath);
    //     // fileIO.unlinkSync(ffpath);
    //     console.log('testFileIoOpenAsync011 has failed for ' + e.message + ', code: ' + e.code);
    //     expect(e.code == 13900033 && e.message == 'Too many symbolic links encountered').assertTrue();
    //     done();
    //     }
    // });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_012
     * @tc.name   : testFileIoOpenAsync012
     * @tc.desc   : Test open() interfaces.  mode=0o4010002. Promise.
     * Open the file in the way of synchronous IO.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync012", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync012");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = await fileIO.open(fpath, fileIO.OpenMode.SYNC | fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        done();
      } catch (e) {
        console.log("testFileIoOpenAsync012 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_013
     * @tc.name   : testFileIoOpenAsync013
     * @tc.desc   : Test open() interfaces. Promise.
     * The path refers to a file, not a directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync013", 0, async function (done) {
      let dpath = await nextFileName("testFileIoOpenAsync013");
      fileIO.mkdirSync(dpath);

      try {
        await fileIO.open(dpath, fileIO.OpenMode.READ_WRITE);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.rmdirSync(dpath);
        console.log("testFileIoOpenAsync013 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900019 && e.message == "Is a directory").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_014
     * @tc.name   : testFileIoOpenAsync014
     * @tc.desc   : Test open() interfaces. Promise.
     * Undefined option arguments, use default mode = 0o0.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync014", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync014");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file;

      try {
        file = await fileIO.open(fpath);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096));
        expect(readLen == FILE_CONTENT.length).assertTrue();
        fileIO.writeSync(file.fd, new ArrayBuffer(4096));
        expect(false).assertTrue();
      } catch (e) {
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        console.log("testFileIoOpenAsync014 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900008 && e.message == "Bad file descriptor").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_015
     * @tc.name   : testFileIoOpenAsync015
     * @tc.desc   : Test open() interfaces. mode=0o0. Callback.
     * Open the file in read-only mode, verifying the file is readable.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync015", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync015");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.open(fpath, fileIO.OpenMode.READ_ONLY, (err, file) => {
          if (err) {
            console.log("testFileIoOpenAsync015 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(file.fd)).assertTrue();
          fileIO.read(file.fd, new ArrayBuffer(4096)).then((readLen) => {
            expect(readLen == FILE_CONTENT.length).assertTrue();
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
            done();
          });
        });
      } catch (e) {
        console.log("testFileIoOpenAsync015 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_016
     * @tc.name   : testFileIoOpenAsync016
     * @tc.desc   : Test open() interfaces. mode=0o1. Callback.
     * Open the file in write-only mode, verifying the file is writable.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync016", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync016");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let length = 20;

      try {
        fileIO.open(fpath, fileIO.OpenMode.WRITE_ONLY, (err, file) => {
          if (err) {
            console.log("testFileIoOpenAsync016 error package" + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(file.fd)).assertTrue();
          fileIO.write(file.fd, new ArrayBuffer(length)).then((bytesWritten) => {
            expect(bytesWritten == length).assertTrue();
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
          });
        });
        done();
      } catch (e) {
        console.log("testFileIoOpenAsync016 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_017
     * @tc.name   : testFileIoOpenAsync017
     * @tc.desc   : Test open() interfaces. mode=0o2. Callback.
     * The path point to nothing, no such file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync017", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync017");

      try {
        fileIO.open(fpath, fileIO.OpenMode.READ_WRITE, (err) => {
          if (err) {
            console.log("testFileIoOpenAsync017 error: {message: " + err.message + ", code: " + err.code + "}");
            expect(err.code == 13900002 && err.message == "No such file or directory").assertTrue();
            done();
          }
        });
      } catch (e) {
        console.log("testFileIoOpenAsync017 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_018
     * @tc.name   : testFileIoOpenAsync018
     * @tc.desc   : Test open() interfaces. mode=0o102. Callback.
     * If the path point to the file which does not exist, the file can be created.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync018", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync018");

      try {
        fileIO.open(fpath, fileIO.OpenMode.CREATE | fileIO.OpenMode.WRITE_ONLY, (err, file) => {
          if (err) {
            console.log("testFileIoOpenAsync018 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(file.fd)).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoOpenAsync018 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_019
     * @tc.name   : testFileIoOpenAsync019
     * @tc.desc   : Test open() interfaces. mode=0o1002. Callback.
     * If the file exists and the file is opened for read-write, trim its length to zero.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync019", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync019");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.open(fpath, fileIO.OpenMode.TRUNC | fileIO.OpenMode.READ_WRITE, (err, file) => {
          if (err) {
            console.log("testFileIoOpenAsync019 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(file.fd)).assertTrue();
          fileIO.read(file.fd, new ArrayBuffer(4096)).then((readLen) => {
            expect(readLen == 0).assertTrue();
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
          });
          done();
        });
      } catch (e) {
        console.log("testFileIoOpenAsync019 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_020
     * @tc.name   : testFileIoOpenAsync020
     * @tc.desc   : Test open() interfaces. mode=0o2002. Callback.
     * Open as append, subsequent writes will append to the end of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync020", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync020");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let length = 100;

      try {
        fileIO.open(fpath, fileIO.OpenMode.APPEND | fileIO.OpenMode.READ_WRITE, (err, file) => {
          if (err) {
            console.log("testFileIoOpenAsync020 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(file.fd)).assertTrue();
          fileIO.writeSync(file.fd, new ArrayBuffer(length));
          fileIO.read(file.fd, new ArrayBuffer(4096), { offset: 0 }).then((readLen) => {
            expect(readLen == length + FILE_CONTENT.length).assertTrue();
            fileIO.closeSync(file);
            fileIO.unlinkSync(fpath);
          });
          done();
        });
      } catch (e) {
        console.log("testFileIoOpenAsync020 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_021
     * @tc.name   : testFileIoOpenAsync021
     * @tc.desc   : Test open() interfaces. mode=0o4002. Callback.
     * If the file is a special file, the opening and subsequent IOs perform non-blocking operations.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync021", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync021");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.open(fpath, fileIO.OpenMode.NONBLOCK | fileIO.OpenMode.READ_WRITE, (err, file) => {
          if (err) {
            console.log("testFileIoOpenAsync021 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(file.fd)).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoOpenAsync021 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_022
     * @tc.name   : testFileIoOpenAsync022
     * @tc.desc   : Test open() interfaces. mode=0o200000. Callback.
     * The path points to a directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync022", 0, async function (done) {
      let dpath = await nextFileName("testFileIoOpenAsync022");
      fileIO.mkdirSync(dpath);

      try {
        fileIO.open(dpath, fileIO.OpenMode.DIR, (err, file) => {
          if (err) {
            console.log("testFileIoOpenAsync022 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(file.fd)).assertTrue();
          fileIO.rmdirSync(dpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoOpenAsync022 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_023
     * @tc.name   : testFileIoOpenAsync023
     * @tc.desc   : Test open() interfaces. mode=0o200000. Callback.
     * The path does not point to a directory, throw error.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync023", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync023");
      expect(prepareFile(fpath, "")).assertTrue();

      try {
        fileIO.open(fpath, fileIO.OpenMode.DIR, (err) => {
          if (err) {
            fileIO.unlinkSync(fpath);
            console.log("testFileIoOpenAsync023 error: {message: " + err.message + ", code: " + err.code + "}");
            expect(err.code == 13900018 && err.message == "Not a directory").assertTrue();
            done();
          }
        });
      } catch (e) {
        console.log("testFileIoOpenAsync023 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_024
     * @tc.name   : testFileIoOpenAsync024
     * @tc.desc   : Test open() interfaces. mode=0o400002. Callback.
     * The path does not point to a symbolic link.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync024", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync024");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.open(fpath, fileIO.OpenMode.NOFOLLOW | fileIO.OpenMode.READ_WRITE, (err, file) => {
          if (err) {
            console.log("testFileIoOpenAsync024 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(file.fd)).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoOpenAsync024 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    // /**
    //  * @tc.number : TEST_FILEIO_OPEN_ASYNC_025
    //  * @tc.name   : testFileIoOpenAsync025
    //  * @tc.desc   : Test open() interfaces. mode=0o400002. Callback.
    //  * The path point to a symbolic link, throw error.
    //  * @tc.size   : MediumTest
    //  * @tc.type   : Function
    //  * @tc.level  : Level 2
    //  */
    // it('testFileIoOpenAsync025', 0, async function (done) {
    //     let fpath = await nextFileName('testFileIoOpenAsync025');
    //     let ffpath = fpath + 'link';
    //     expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    //     try {
    //     fileIO.symlinkSync(fpath, ffpath);
    //     fileIO.open(ffpath, fileIO.OpenMode.NOFOLLOW | fileIO.OpenMode.READ_WRITE, (err) => {
    //         if(err) {
    //         console.log('testFileIoOpenAsync025 error: {message: ' + err.message + ', code: ' + err.code + '}');
    //         expect(err.code == 13900033 && err.message == 'Too many symbolic links encountered').assertTrue();
    //         }
    //         fileIO.unlinkSync(fpath);
    //         // fileIO.unlinkSync(ffpath);
    //         done();
    //     });
    //     } catch (e) {
    //     console.log('testFileIoOpenAsync025 has failed for ' + e.message + ', code: ' + e.code);
    //     expect(false).assertTrue();
    //     }
    // });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_026
     * @tc.name   : testFileIoOpenAsync026
     * @tc.desc   : Test open() interfaces. mode=0o4010002. Callback.
     * Open the file in the way of synchronous IO.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync026", 0, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync026");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.open(fpath, fileIO.OpenMode.SYNC | fileIO.OpenMode.READ_WRITE, (err, file) => {
          if (err) {
            console.log("testFileIoOpenAsync026 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(file.fd)).assertTrue();
          fileIO.closeSync(file);
          fileIO.unlinkSync(fpath);
          done();
        });
      } catch (e) {
        console.log("testFileIoOpenAsync026 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_027
     * @tc.name   : testFileIoOpenAsync027
     * @tc.desc   : Test open() interfaces. Callback.
     * The path refers to a file, not a directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync027", 0, async function (done) {
      let dpath = await nextFileName("testFileIoOpenAsync027");
      fileIO.mkdirSync(dpath);

      try {
        fileIO.open(dpath, fileIO.OpenMode.READ_WRITE, (err, file) => {
          if (err) {
            fileIO.rmdirSync(dpath);
            console.log("testFileIoOpenAsync027 error: {message: " + err.message + ", code: " + err.code + "}");
            expect(err.code == 13900019 && err.message == "Is a directory").assertTrue();
            done();
          }
        });
      } catch (e) {
        console.log("testFileIoOpenAsync027 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_ASYNC_028
     * @tc.name   : testFileIoOpenAsync028
     * @tc.desc   : Test open() interfaces. Callback.
     * Undefined option arguments, use default mode = 0o0.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenAsync028", 3, async function (done) {
      let fpath = await nextFileName("testFileIoOpenAsync028");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.open(fpath, (err, file) => {
          if (err) {
            console.log("testFileIoOpenAsync028 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(isIntNum(file.fd)).assertTrue();
          let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096));
          expect(readLen == FILE_CONTENT.length).assertTrue();
          fileIO.write(file.fd, new ArrayBuffer(4096), (err, bytesWritten) => {
            if (err) {
              fileIO.closeSync(file);
              fileIO.unlinkSync(fpath);
              console.log("testFileIoOpenAsync028 error: {message: " + err.message + ", code: " + err.code + "}");
              expect(err.code == 13900008 && err.message == "Bad file descriptor").assertTrue();
              done();
            } else {
              expect(false).assertTrue();
            }
          });
        });
      } catch (e) {
        console.log("testFileIoOpenAsync028 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_SYNC_001
     * @tc.name   : testFileIoOpenSync001
     * @tc.desc   : Test openSync() interfaces. mode=0o0.
     * Open the file in read-only mode, verifying the file is readable.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenSync001", 0, async function () {
      let fpath = await nextFileName("testFileIoOpenSync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let readlen = fileIO.readSync(file.fd, new ArrayBuffer(4096));
        expect(readlen == FILE_CONTENT.length).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoOpenSync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_SYNC_002
     * @tc.name   : testFileIoOpenSync002
     * @tc.desc   : Test openSync() interfaces. mode=0o1.
     * Open the file in write-only mode, verifying the file is writable.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenSync002", 0, async function () {
      let fpath = await nextFileName("testFileIoOpenSync002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.WRITE_ONLY);
        expect(isIntNum(file.fd)).assertTrue();
        let bytesWritten = fileIO.writeSync(file.fd, FILE_CONTENT);
        expect(bytesWritten == FILE_CONTENT.length).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoOpenSync002 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_SYNC_003
     * @tc.name   : testFileIoOpenSync003
     * @tc.desc   : Test openSync() interfaces. mode=0o2.
     * Open the file in read-write mode, verifying the file is readable and writable.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenSync003", 0, async function () {
      let fpath = await nextFileName("testFileIoOpenSync003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        let readlen = fileIO.readSync(file.fd, new ArrayBuffer(4096));
        expect(readlen == FILE_CONTENT.length).assertTrue();
        let length = 20;
        let bytesWritten = fileIO.writeSync(file.fd, new ArrayBuffer(length), { offset: 0 });
        expect(bytesWritten == length).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoOpenSync003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_SYNC_004
     * @tc.name   : testFileIoOpenSync004
     * @tc.desc   : Test openSync() interfaces. mode=0o102.
     * If the path point to the file which does not exist, the file can be created.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenSync004", 0, async function () {
      let fpath = await nextFileName("testFileIoOpenSync004");

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.CREATE | fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoOpenSync004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_SYNC_005
     * @tc.name   : testFileIoOpenSync005
     * @tc.desc   : Test openSync() interfaces. mode=0o1002.
     * If the file exists and the file is opened for read-write, trim its length to zero.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenSync005", 0, async function () {
      let fpath = await nextFileName("testFileIoOpenSync005");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.TRUNC | fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096));
        expect(readLen == 0).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoOpenSync005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_SYNC_006
     * @tc.name   : testFileIoOpenSync006
     * @tc.desc   : Test openSync() interfaces. mode=0o2002.
     * Open as append, subsequent writes will append to the end of the file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenSync006", 0, async function () {
      let fpath = await nextFileName("testFileIoOpenSync006");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.APPEND | fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        let length = 100;
        let bytesWritten = fileIO.writeSync(file.fd, new ArrayBuffer(length));
        expect(bytesWritten == length).assertTrue();
        let readLen = fileIO.readSync(file.fd, new ArrayBuffer(4096), { offset: 0 });
        expect(readLen == length + FILE_CONTENT.length).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoOpenSync006 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_SYNC_007
     * @tc.name   : testFileIoOpenSync007
     * @tc.desc   : Test openSync() interfaces. mode=0o4002.
     * If the file is a special file, the opening and subsequent IOs perform non-blocking operations.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenSync007", 0, async function () {
      let fpath = await nextFileName("testFileIoOpenSync007");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.NONBLOCK | fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoOpenSync007 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_SYNC_008
     * @tc.name   : testFileIoOpenSync008
     * @tc.desc   : Test openSync() interfaces. mode=0o200000.
     * The path points to a directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenSync008", 0, async function () {
      let dpath = await nextFileName("testFileIoOpenSync008");
      fileIO.mkdirSync(dpath);

      try {
        let file = fileIO.openSync(dpath, fileIO.OpenMode.DIR);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.rmdirSync(dpath);
      } catch (e) {
        console.log("testFileIoOpenSync008 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_SYNC_009
     * @tc.name   : testFileIoOpenSync009
     * @tc.desc   : Test openSync() interfaces. mode=0o200000.
     * The path does not a directory, throw error.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenSync009", 0, async function () {
      let fpath = await nextFileName("testFileIoOpenSync009");
      expect(prepareFile(fpath, "")).assertTrue();

      try {
        fileIO.openSync(fpath, fileIO.OpenMode.DIR);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.unlinkSync(fpath);
        console.log("testFileIoOpenSync009 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900018 && e.message == "Not a directory").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_SYNC_010
     * @tc.name   : testFileIoOpenSync010
     * @tc.desc   : Test openSync() interfaces. mode=0o400002.
     * The path does not point to a symbolic link.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenSync010", 0, async function () {
      let fpath = await nextFileName("testFileIoOpenSync010");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.NOFOLLOW | fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoOpenSync010 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    // /**
    //  * @tc.number : TEST_FILEIO_OPEN_SYNC_011
    //  * @tc.name   : testFileIoOpenSync011
    //  * @tc.desc   : Test openSync() interfaces. mode=0o400002.
    //  * The path points to a symbolic link, throw error.
    //  * @tc.size   : MediumTest
    //  * @tc.type   : Function
    //  * @tc.level  : Level 2
    //  */
    // it('testFileIoOpenSync011', 0, async function () {
    //     let fpath = await nextFileName('testFileIoOpenSync011');
    //     let ffpath = fpath + 'aaaa';
    //     expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    //     try {
    //     fileIO.symlinkSync(fpath, ffpath);
    //     fileIO.openSync(ffpath, fileIO.OpenMode.NOFOLLOW | fileIO.OpenMode.READ_WRITE);
    //     expect(false).assertTrue();
    //     } catch (e) {
    //     fileIO.unlinkSync(fpath);
    //     // fileIO.unlinkSync(ffpath);
    //     console.log('testFileIoOpenSync011 has failed for ' + e.message + ', code: ' + e.code);
    //     expect(e.code == 13900033 && e.message == 'Too many symbolic links encountered').assertTrue();
    //     }
    // });

    /**
     * @tc.number : TEST_FILEIO_OPEN_SYNC_012
     * @tc.name   : testFileIoOpenSync012
     * @tc.desc   : Test openSync() interfaces. mode=0o4010002.
     * Open the file in the way of synchronous IO.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenSync012", 0, async function () {
      let fpath = await nextFileName("testFileIoOpenSync012");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.SYNC | fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
      } catch (e) {
        console.log("testFileIoOpenSync012 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_SYNC_013
     * @tc.name   : testFileIoOpenSync013
     * @tc.desc   : Test openSync() interfaces.
     * The path refers to a file, not a directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenSync013", 0, async function () {
      let dpath = await nextFileName("testFileIoOpenSync013");
      fileIO.mkdirSync(dpath);

      try {
        fileIO.openSync(dpath, fileIO.OpenMode.READ_WRITE);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.rmdirSync(dpath);
        console.log("testFileIoOpenSync013 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900019 && e.message == "Is a directory").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_OPEN_SYNC_014
     * @tc.name   : testFileIoOpenSync014
     * @tc.desc   : Test openSync() interfaces.
     * Undefined option arguments, use default mode = 0o0.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoOpenSync014", 3, async function () {
      let fpath = await nextFileName("testFileIoOpenSync014");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let file;

      try {
        file = fileIO.openSync(fpath, undefined);
        expect(isIntNum(file.fd)).assertTrue();
        let readlen = fileIO.readSync(file.fd, new ArrayBuffer(4096));
        expect(readlen == FILE_CONTENT.length).assertTrue();
        fileIO.writeSync(file.fd, new ArrayBuffer(4096));
        expect(false).assertTrue();
      } catch (e) {
        fileIO.closeSync(file);
        fileIO.unlinkSync(fpath);
        console.log("testFileIoOpenSync014 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900008 && e.message == "Bad file descriptor").assertTrue();
      }
    });
  });
}
