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
import { getDownloadUri } from "../common"

const DOMAIN_CODE = 0x0001;
const TAG = 'mediaRenameTest';

export default function renameTest(helper) {

  describe('mediaRenameTest', function () {

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_RENAME_0000
     * @tc.name media_file_access_test_rename_async_000
     * @tc.desc Test rename() interfaces, return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_rename_async_000', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let name = `rename${new Date().getTime()}.txt`;
        let filePath = await helper.createFile(uri, name);
        let result = await helper.rename(filePath, `new${name}`);
        let fileId = result.substring(result.lastIndexOf('/') + 1);
        expect(typeof result == 'string').assertTrue();
        expect(fileId > 0).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_rename_async_000 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_RENAME_0100
     * @tc.name media_file_access_test_rename_async_001
     * @tc.desc Test rename() interfaces, return in callback mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_rename_async_001', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let name = `rename1${new Date().getTime()}.txt`;
        let filePath = await helper.createFile(uri, name);
        helper.rename(filePath, `new${name}`, (err, result) => {
          if (err) {
            hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_rename_async_001 has failed for ' + err);
            expect(false).assertTrue();
            done();
          }
          let fileId = result.substring(result.lastIndexOf('/') + 1);
          expect(typeof result == 'string').assertTrue();
          expect(fileId > 0).assertTrue();
          done();
        });
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_rename_async_001 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_RENAME_0200
     * @tc.name media_file_access_test_rename_async_002
     * @tc.desc Test rename() interfaces, file does not exist.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_rename_async_002', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        await helper.rename(`${uri}/file_access_test_rename_async_003.txt`, "test.txt");
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_rename_async_002 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_RENAME_0300
     * @tc.name media_file_access_test_rename_async_003
     * @tc.desc Test rename() interfaces, file name contains special characters.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_rename_async_003', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let name = `rename3${new Date().getTime()}.txt`;
        let filePath = await helper.createFile(uri, name);
        let result = await helper.rename(filePath, `%^@#_${name}`);
        let fileId = result.substring(result.lastIndexOf('/') + 1);
        expect(typeof result == 'string').assertTrue();
        expect(fileId > 0).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_rename_async_003 has failed for ' + err);
      }
    })


    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_RENAME_0400
     * @tc.name media_file_access_test_rename_async_004
     * @tc.desc Test rename() interfaces, concurrent requests.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_rename_async_004', 0, async (done) => {
      try {
        let name = `renameConcurrent${new Date().getTime()}.txt`;
        let uri = await getDownloadUri(helper);
        let fileUri = await helper.createFile(uri, name);
        const delay = function delay() {
          return new Promise((resolve, reject) => {
            helper.rename(fileUri, `new${name}`, (err, result) => {
              resolve(result);
            })
          });
        };
        let tasks = [delay(), delay(), delay(), delay()];
        Promise.all(tasks).then(results => {
          hilog.error(DOMAIN_CODE, TAG, 'rename concurrent request:' + JSON.stringify(results));
          let result = results.some(item => item != null);
          expect(result).assertTrue();
          expect(results.length == tasks.length).assertTrue();
          done();
        });
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_rename_async_004 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_RENAME_0500
     * @tc.name media_file_access_test_rename_async_005
     * @tc.desc Test rename() interfaces, rename directory.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_rename_async_005', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let name = `dirRename${new Date().getTime()}`;
        let dirPath = await helper.mkDir(uri, name);
        let result = await helper.rename(dirPath, `new${name}`);
        let fileId = result.substring(result.lastIndexOf('/') + 1);
        expect(typeof result == 'string').assertTrue();
        expect(fileId > 0).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_rename_async_005 has failed for ' + err);
      }
    })
  })
}