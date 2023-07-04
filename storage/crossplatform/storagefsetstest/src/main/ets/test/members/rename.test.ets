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

//import featureAbility from '@ohos.ability.featureAbility';
import { FILE_CONTENT, prepareFile, nextFileName, describe, it, expect, randomString } from "../Common";
import fileIO from "@ohos.file.fs";

export default function fileIORename() {
  describe("fileIO_fs_rename", function () {
    /**
     * @tc.number : TEST_FILEIO_RENAME_ASYNC_001
     * @tc.name   : testFileIoRenameAsync001
     * @tc.desc   : Test rename() interfaces. Promise.
     * Rename the file by path, verify the normal function.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRenameAsync001", 0, async function (done) {
      let fpath = await nextFileName("testFileIoRenameAsync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let newf = fpath + "123";

      try {
        await fileIO.rename(fpath, newf);
        expect(true).assertTrue();
        fileIO.unlinkSync(newf);
        done();
      } catch (e) {
        console.log("testFileIoRenameAsync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RENAME_ASYNC_002
     * @tc.name   : testFileIoRenameAsync002
     * @tc.desc   : Test rename() interfaces. Promise.
     * The path point to nothing, no such file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRenameAsync002", 0, async function (done) {
      let fpath = await nextFileName("testFileIoRenameAsync002");

      try {
        await fileIO.rename(fpath, fpath + "bbb");
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoRenameAsync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900002 && e.message == "No such file or directory").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RENAME_ASYNC_003
     * @tc.name   : testFileIoRenameAsync003
     * @tc.desc   : Test rename() interfaces. Promise.
     * Illegal second parameter.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRenameAsync003", 0, async function (done) {
      let fpath = await nextFileName("testFileIoRenameAsync003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        await fileIO.rename(fpath, null);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.unlinkSync(fpath);
        console.log("testFileIoRenameAsync003 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RENAME_ASYNC_004
     * @tc.name   : testFileIoRenameAsync004
     * @tc.desc   : Test rename() interfaces. Promise.
     * Illegal second parameter.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRenameAsync004", 0, async function (done) {
      let fpath = await nextFileName("testFileIoRenameAsync004");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        await fileIO.rename(fpath, undefined);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.unlinkSync(fpath);
        console.log("testFileIoRenameAsync004 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RENAME_ASYNC_005
     * @tc.name   : testFileIoRenameAsync005
     * @tc.desc   : Test rename() interfaces. Promise.
     * Modify file names across directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRenameAsync005", 0, async function (done) {
      let dpath = await nextFileName("testFileIoRenameAsync005");
      let fpath = dpath + "/file_001";
      fileIO.mkdirSync(dpath);
      fileIO.mkdirSync(dpath + "/dir_001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let newf = dpath + "/dir_001/newFileName";
        await fileIO.rename(fpath, newf);
        expect(true).assertTrue();
        fileIO.rmdirSync(dpath);
        done();
      } catch (e) {
        console.log("testFileIoRenameAsync005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RENAME_ASYNC_006
     * @tc.name   : testFileIoRenameAsync006
     * @tc.desc   : Test rename() interfaces. Promise.
     * The length of file name is too long.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRenameAsync006", 0, async function (done) {
      let fpath = await nextFileName("testFileIoRenameAsync006");
      let fpathTarget = fpath + randomString(250);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        await fileIO.rename(fpath, fpathTarget);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.unlinkSync(fpath);
        console.log("testFileIoRenameAsync006 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900030 && e.message == "File name too long").assertTrue();
        done();
      }
    });

    // /**
    //  * @tc.number : TEST_FILEIO_RENAME_ASYNC_007
    //  * @tc.name   : testFileIoRenameAsync007
    //  * @tc.desc   : Test rename() interfaces. Promise.
    //  * Don't have permission to operate on the root directory.
    //  * @tc.size   : MediumTest
    //  * @tc.type   : Function
    //  * @tc.level  : Level 2
    //  */
    // it('testFileIoRenameAsync007', 0, async function (done) {

    //     try {
    //     await fileIO.rename('/data', '/data_new');
    //     expect(false).assertTrue();
    //     } catch (e) {
    //     console.log('testFileIoRenameAsync007 has failed for ' + e.message + ', code: ' + e.code);
    //     expect(e.code == 13900012 && e.message == 'Permission denied').assertTrue();
    //     done();
    //     }
    // });

    /**
     * @tc.number : TEST_FILEIO_RENAME_ASYNC_008
     * @tc.name   : testFileIoRenameAsync008
     * @tc.desc   : Test rename() interfaces. Callback.
     * Rename the file by path, verify the normal function.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRenameAsync008", 0, async function (done) {
      let fpath = await nextFileName("testFileIoRenameAsync008");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let newf = fpath + "aaa";

      try {
        fileIO.rename(fpath, newf, (err) => {
          if (err) {
            console.log("testFileIoRenameAsync008 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(true).assertTrue();
          fileIO.unlinkSync(newf);
          done();
        });
      } catch (e) {
        console.log("testFileIoRenameAsync008 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RENAME_ASYNC_009
     * @tc.name   : testFileIoRenameAsync009
     * @tc.desc   : Test rename() interfaces. Callback.
     * The path point to nothing, no such file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRenameAsync009", 0, async function (done) {
      let fpath = await nextFileName("testFileIoRenameAsync009");

      try {
        fileIO.rename(fpath, fpath + "bbb", (err) => {
          if (err) {
            console.log("testFileIoRenameAsync009 error: {message: " + err.message + ", code: " + err.code + "}");
            expect(err.code == 13900002 && err.message == "No such file or directory").assertTrue();
            done();
          }
        });
      } catch (e) {
        console.log("testFileIoRenameAsync009 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RENAME_ASYNC_010
     * @tc.name   : testFileIoRenameAsync010
     * @tc.desc   : Test rename() interfaces. Callback.
     * Modify file names across directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRenameAsync010", 0, async function (done) {
      let dpath = await nextFileName("testFileIoRenameAsync010");
      let fpath = dpath + "/file_002";
      fileIO.mkdirSync(dpath);
      fileIO.mkdirSync(dpath + "/dir_002");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let newf = dpath + "/dir_002/newFileName";
        fileIO.rename(fpath, newf, (err) => {
          if (err) {
            console.log("testFileIoRenameAsync010 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(true).assertTrue();
          fileIO.rmdirSync(dpath);
        });
        done();
      } catch (e) {
        console.log("testFileIoRenameAsync010 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RENAME_ASYNC_011
     * @tc.name   : testFileIoRenameAsync011
     * @tc.desc   : Test rename() interfaces. Callback.
     * The length of file name is too long.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRenameAsync011", 0, async function (done) {
      let fpath = await nextFileName("testFileIoRenameAsync011");
      let fpathTarget = fpath + randomString(250);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.rename(fpath, fpathTarget, (err) => {
          if (err) {
            fileIO.unlinkSync(fpath);
            console.log("testFileIoRenameAsync011 error: {message: " + err.message + ", code: " + err.code + "}");
            expect(err.code == 13900030 && err.message == "File name too long").assertTrue();
            done();
          }
        });
      } catch (e) {
        console.log("testFileIoRenameAsync011 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RENAME_SYNC_001
     * @tc.name   : testFileIoRenameSync001
     * @tc.desc   : Test renameSync() interfaces.
     * Rename the file by path, verify the normal function.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRenameSync001", 0, async function () {
      let fpath = await nextFileName("testFileIoRenameSync001");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let newf = fpath + "test";
        fileIO.renameSync(fpath, newf);
        expect(true).assertTrue();
        fileIO.unlinkSync(newf);
      } catch (e) {
        console.log("testFileIoRenameSync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RENAME_SYNC_002
     * @tc.name   : testFileIoRenameSync002
     * @tc.desc   : Test renameSync() interfaces.
     * The path point to nothing, no such file.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRenameSync002", 0, async function () {
      let fpath = await nextFileName("testFileIoRenameSync002");

      try {
        fileIO.renameSync(fpath, fpath + "test");
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoRenameSync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900002 && e.message == "No such file or directory").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RENAME_SYNC_003
     * @tc.name   : testFileIoRenameSync003
     * @tc.desc   : Test renameSync() interfaces.
     * Illegal second parameter.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRenameSync003", 0, async function () {
      let fpath = await nextFileName("testFileIoRenameSync003");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.renameSync(fpath, null);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.unlinkSync(fpath);
        console.log("testFileIoRenameSync003 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RENAME_SYNC_004
     * @tc.name   : testFileIoRenameSync004
     * @tc.desc   : Test renameSync() interfaces.
     * Illegal second parameter.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRenameSync004", 0, async function () {
      let fpath = await nextFileName("testFileIoRenameSync004");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.renameSync(fpath, undefined);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.unlinkSync(fpath);
        console.log("testFileIoRenameSync004 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RENAME_SYNC_005
     * @tc.name   : testFileIoRenameSync005
     * @tc.desc   : Test renameSync() interfaces.
     * Modify file names across directory.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRenameSync005", 0, async function () {
      let dpath = await nextFileName("testFileIoRenameSync005");
      let fpath = dpath + "/file_000";
      fileIO.mkdirSync(dpath);
      fileIO.mkdirSync(dpath + "/dir_000");
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        let newf = dpath + "/dir_000/newFileName";
        fileIO.renameSync(fpath, newf);
        expect(true).assertTrue();
        fileIO.rmdirSync(dpath);
      } catch (e) {
        console.log("testFileIoRenameSync005 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_RENAME_SYNC_006
     * @tc.name   : testFileIoRenameSync006
     * @tc.desc   : Test renameSync() interfaces.
     * The length of file name is too long.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoRenameSync006", 0, async function () {
      let fpath = await nextFileName("testFileIoRenameSync006");
      let fpathTarget = fpath + randomString(250);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

      try {
        fileIO.renameSync(fpath, fpathTarget);
        expect(false).assertTrue();
      } catch (e) {
        fileIO.unlinkSync(fpath);
        console.log("testFileIoRenameSync006 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900030 && e.message == "File name too long").assertTrue();
      }
    });

    // /**
    //  * @tc.number : TEST_FILEIO_RENAME_SYNC_007
    //  * @tc.name   : testFileIoRenameSync007
    //  * @tc.desc   : Test renameSync() interfaces.
    //  * Don't have permission to operate on the root directory.
    //  * @tc.size   : MediumTest
    //  * @tc.type   : Function
    //  * @tc.level  : Level 2
    //  */
    // it('testFileIoRenameSync007', 0, async function () {

    //     try {
    //     fileIO.renameSync('/data', '/data_new');
    //     expect(false).assertTrue();
    //     } catch (e) {
    //     console.log('testFileIoRenameSync007 has failed for ' + e.message + ', code: ' + e.code);
    //     expect(e.code == 13900012 && e.message == 'Permission denied').assertTrue();
    //     }
    // });
  });
}
