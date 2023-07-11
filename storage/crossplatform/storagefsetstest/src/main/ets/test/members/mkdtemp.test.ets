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

import { nextFileName, describe, it, expect } from "../Common";
import fileIO from "@ohos.file.fs";

export default function fileIOMkdtemp() {
  describe("fileIO_fs_mkdtemp", function () {
    /**
     * @tc.number : TEST_FILEIO_MKDTEMP_ASYNC_001
     * @tc.name   : testFileIoMkdtempAsync001
     * @tc.desc   : Test mkdtemp() interfaces. Promise.
     * Create a temporary directory, verify the normal function.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoMkdtempAsync001", 0, async function (done) {
      let dpath = await nextFileName("testFileIoMkdtempAsync001");

      try {
        dpath = dpath + "XXXXXX";
        let res = await fileIO.mkdtemp(dpath);
        expect(true).assertTrue();
        fileIO.rmdirSync(res);
        done();
      } catch (e) {
        console.log("testFileIoMkdtempAsync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_MKDTEMP_ASYNC_002
     * @tc.name   : testFileIoMkdtempAsync002
     * @tc.desc   : Test mkdtemp() interfaces. Promise.
     * The directory should end in XXXXXX.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoMkdtempAsync002", 0, async function (done) {
      let dpath = await nextFileName("testFileIoMkdtempAsync002");

      try {
        await fileIO.mkdtemp(dpath);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoMkdtempAsync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
        done();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_MKDTEMP_ASYNC_003
     * @tc.name   : testFileIoMkdtempAsync003
     * @tc.desc   : Test mkdtemp() interfaces. Callback.
     * Create a temporary directory, verify the normal function.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoMkdtempAsync003", 0, async function (done) {
      let dpath = await nextFileName("testFileIoMkdtempAsync003");

      try {
        dpath = dpath + "XXXXXX";
        fileIO.mkdtemp(dpath, (err, res) => {
          if (err) {
            console.log("testFileIoMkdtempAsync003 error package: " + JSON.stringify(err));
            expect(false).assertTrue();
          }
          expect(true).assertTrue();
          fileIO.rmdirSync(res);
          done();
        });
      } catch (e) {
        console.log("testFileIoMkdtempAsync003 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_MKDTEMP_ASYNC_004
     * @tc.name   : testFileIoMkdtempAsync004
     * @tc.desc   : Test mkdtemp() interfaces. Callback.
     * The directory should end in XXXXXX.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoMkdtempAsync004", 0, async function (done) {
      let dpath = await nextFileName("testFileIoMkdtempAsync004");

      try {
        fileIO.mkdtemp(dpath, (err) => {
          if (err) {
            console.log("testFileIoMkdtempAsync004 error package: " + JSON.stringify(err));
            expect(err.code == 13900020 && err.message == "Invalid argument").assertTrue();
            done();
          }
        });
      } catch (e) {
        console.log("testFileIoMkdtempAsync004 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_MKDTEMP_SYNC_001
     * @tc.name   : testFileIoMkdtempSync001
     * @tc.desc   : Test mkdtempSync() interfaces.
     * Create a temporary directory, verify the normal function.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoMkdtempSync001", 0, async function () {
      let dpath = await nextFileName("testFileIoMkdtempSync001");

      try {
        dpath = dpath + "XXXXXX";
        let res = fileIO.mkdtempSync(dpath);
        expect(true).assertTrue();
        fileIO.rmdirSync(res);
      } catch (e) {
        console.log("testFileIoMkdtempSync001 has failed for " + e.message + ", code: " + e.code);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number : TEST_FILEIO_MKDTEMP_SYNC_002
     * @tc.name   : testFileIoMkdtempSync002
     * @tc.desc   : Test mkdtempSync() interfaces.
     * The directory should end in XXXXXX.
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 2
     */
    it("testFileIoMkdtempSync002", 0, async function () {
      let dpath = await nextFileName("testFileIoMkdtempSync002");

      try {
        fileIO.mkdtempSync(dpath);
        expect(false).assertTrue();
      } catch (e) {
        console.log("testFileIoMkdtempSync002 has failed for " + e.message + ", code: " + e.code);
        expect(e.code == 13900020 && e.message == "Invalid argument").assertTrue();
      }
    });
  });
}
