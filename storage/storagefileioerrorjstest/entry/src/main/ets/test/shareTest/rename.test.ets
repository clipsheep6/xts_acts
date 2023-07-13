/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import { describe, it, expect }from '@ohos/hypium'
import hilog from '@ohos.hilog'

const DOMAIN_CODE = 0x0001;
const TAG = 'shareRenameTest';

export default function renameTest(helper) {

  describe('shareRenameTest', function () {

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_RENAME_0000
     * @tc.name share_file_access_test_rename_async_000
     * @tc.desc Test rename() interfaces, return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_rename_async_000', 0, async (done) => {
      try {
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let filePath = await helper.createFile(uri, "file_access_test_rename_async_000.txt");
          let result = await helper.rename(filePath, "a.txt");
          globalThis.fileList.push(result);
          expect(typeof result == 'string').assertTrue();
          expect(result == `${uri}/a.txt`).assertTrue();
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_rename_async_000 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_RENAME_0100
     * @tc.name share_file_access_test_rename_async_001
     * @tc.desc Test rename() interfaces, return in callback mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_rename_async_001', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          let filePath = await helper.createFile(uri, "file_access_test_rename_async_001.txt");
          helper.rename(filePath, "b.txt", (err, result) => {
            if (err) {
              hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_rename_async_001 has failed for ' + err);
              expect(false).assertTrue();
              done();
            }
            globalThis.fileList.push(result);
            expect(typeof result == 'string').assertTrue();
            expect(result == `${uri}/b.txt`).assertTrue();
            done();
          });
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_rename_async_001 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_RENAME_0200
     * @tc.name share_file_access_test_rename_async_002
     * @tc.desc Test rename() interfaces, file does not exist.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_rename_async_002', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          await helper.rename(`${uri}/file_access_test_rename_async_003.txt`, "test.txt");
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_rename_async_002 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_RENAME_0300
     * @tc.name share_file_access_test_rename_async_003
     * @tc.desc Test rename() interfaces, file name contains special characters.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_rename_async_003', 0, async (done) => {
      try {
        let name = "%^@#_.txt";
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let filePath = await helper.createFile(uri, "file_access_test_rename_async_004.txt");
          let result = await helper.rename(filePath, name);
          globalThis.fileList.push(result);
          expect(typeof result == 'string').assertTrue();
          expect(result == `${uri}/${name}`).assertTrue();
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_rename_async_003 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_SHARE_FILE_ACCESS_RENAME_0400
    * @tc.name share_file_access_test_rename_async_004
    * @tc.desc Test rename() interfaces, rename directory.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('share_file_access_test_rename_async_006', 0, async (done) => {
      try {
        let name = "dirRename";
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let dirPath = await helper.mkDir(uri, "dirRenameTest");
          let result = await helper.rename(dirPath, name);
          globalThis.fileList.push(result);
          expect(typeof result == 'string').assertTrue();
          expect(result == `${uri}/${name}`).assertTrue();
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_rename_async_006 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_RENAME_0500
     * @tc.name share_file_access_test_rename_async_005
     * @tc.desc Test rename() interfaces, concurrent requests.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_rename_async_005', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          let fileUri = await helper.createFile(uri, "rename.txt");
          const delay = function delay() {
            return new Promise((resolve, reject) => {
              helper.rename(fileUri, 'd.txt', (err, result) => {
                resolve(result);
              })
            });
          };
          let tasks = [delay(), delay(), delay(), delay()];
          Promise.all(tasks).then(results => {
            let result = results.filter(item => item != null);
            globalThis.fileList.push(result[result.length - 1]);
            expect(result.length == 1).assertTrue();
            expect(results.length == tasks.length).assertTrue();
            done();
          });
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_rename_async_005 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_RENAME_0600
     * @tc.name share_file_access_test_rename_async_006
     * @tc.desc Test rename() interfaces, inconsistent rename suffix.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_rename_async_006', 0, async (done) => {
      try {
        let name = "renameFile";
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let filePath = await helper.createFile(uri, "share_file_access_test_rename_async_006.txt");
          let result = await helper.rename(filePath, name);
          globalThis.fileList.push(result);
          expect(typeof result == 'string').assertTrue();
          expect(result == `${uri}/${name}`).assertTrue();
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_rename_async_006 has failed for ' + err);
      }
    })
  })
}