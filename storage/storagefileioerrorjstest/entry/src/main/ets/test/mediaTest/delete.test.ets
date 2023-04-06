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
import { getDownloadUri,listFile } from "../common"

const DOMAIN_CODE = 0x0001;
const TAG = 'mediaDeleteTest';

export default function deleteTest(helper) {

  describe('mediaDeleteTest', function () {

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_DELETE_0000
     * @tc.name media_file_access_test_delete_async_000
     * @tc.desc Test delete() interfaces, return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_delete_async_000', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let name = `delete${new Date().getTime()}.txt`;
        let result = await helper.createFile(uri, name);
        let number = await helper.delete(result);
        expect(number >= 0).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_delete_async_000 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_DELETE_0100
     * @tc.name media_file_access_test_delete_async_001
     * @tc.desc Test delete() interfaces, return in callback mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_delete_async_001', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let name = `delete1${new Date().getTime()}.txt`;
        let result = await helper.createFile(uri, name);
        helper.delete(result, (err, number) => {
          if (err) {
            hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_delete_async_001 has failed for ' + err);
            expect(false).assertTrue();
            done();
          }
          expect(number >= 0).assertTrue();
          done();
        });
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_delete_async_001 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_DELETE_0200
     * @tc.name media_file_access_test_delete_async_002
     * @tc.desc Test delete() interfaces, delete nonexistent files.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_delete_async_002', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let number = await helper.delete(`${uri}/abc.txt`);
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_delete_async_002 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_DELETE_0300
    * @tc.name media_file_access_test_delete_async_003
    * @tc.desc Test delete() interfaces, delete directory.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('media_file_access_test_delete_async_003', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let name = `deleteDir${new Date().getTime()}`;
        let result = await helper.mkDir(uri, name);
        let number = await helper.delete(result);
        expect(number >= 0).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_delete_async_003 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_DELETE_0400
    * @tc.name media_file_access_test_delete_async_004
    * @tc.desc Test delete() interfaces, delete directories with files.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('media_file_access_test_delete_async_004', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let name = `deleteDir1${new Date().getTime()}`;
        let result = await helper.mkDir(uri, name);
        let filePath = await helper.createFile(result, 'b.txt');
        let number = await helper.delete(result);
        expect(number >= 0).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_delete_async_004 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_DELETE_0500
    * @tc.name media_file_access_test_delete_async_005
    * @tc.desc Test delete() interfaces, concurrent requests.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('media_file_access_test_delete_async_005', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let name = `delete${new Date().getTime()}.txt`;
        let fileUri = await helper.createFile(uri, name);
        const delay = function delay() {
          return new Promise((resolve, reject) => {
            helper.delete(fileUri, (err, result) => {
              resolve(result);
            })
          });
        };
        let tasks = [delay(), delay(), delay(), delay()];
        Promise.all(tasks).then(results => {
          hilog.error(DOMAIN_CODE, TAG, 'delete concurrent request:' + JSON.stringify(results));
          let flag = results.some(item => item >= 0);
          expect(flag).assertTrue();
          expect(results.length == tasks.length).assertTrue();
          done();
        });
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_delete_async_005 has failed for ' + err);
      }
    })
  })
}