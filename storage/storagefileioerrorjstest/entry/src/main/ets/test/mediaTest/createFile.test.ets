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
const TAG = 'mediaCreateFileTest';

export default function createFileTest(helper) {

  describe('mediaCreateFileTest', function () {

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_CREATE_FILE_0000
     * @tc.name media_file_access_test_create_file_async_000
     * @tc.desc Test createFile() interfaces, return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_create_file_async_000', 0, async (done) => {
      try {
        let name = `mediaFile${new Date().getTime()}.txt`;
        let uri = await getDownloadUri(helper);
        let result = await helper.createFile(uri, name);
        let fileId = result.substring(result.lastIndexOf('/') + 1);
        expect(typeof result == 'string').assertTrue();
        expect(fileId > 0).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_create_file_async_000 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_CREATE_FILE_0100
     * @tc.name media_file_access_test_create_file_async_001
     * @tc.desc Test createFile() interfaces, return in callback mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_create_file_async_001', 0, async (done) => {
      try {
        let name = `mediaFile1${new Date().getTime()}.txt`;
        let uri = await getDownloadUri(helper);
        helper.createFile(uri, name, (err, result) => {
          if (err) {
            hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_create_file_async_001 has failed for ' + err);
            expect(false).assertTrue();
            done();
          }
          let fileId = result.substring(result.lastIndexOf('/') + 1);
          expect(typeof result == 'string').assertTrue();
          expect(fileId > 0).assertTrue();
          done();
        });
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_create_file_async_001 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_CREATE_FILE_0200
     * @tc.name media_file_access_test_create_file_async_002
     * @tc.desc Test createFile() interfaces, file name contains special characters.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_create_file_async_002', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let name = `a%#$_${new Date().getTime()}.txt`;
        let result = await helper.createFile(uri, name);
        let fileId = result.substring(result.lastIndexOf('/') + 1);
        expect(typeof result == 'string').assertTrue();
        expect(fileId > 0).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_create_file_async_002 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_CREATE_FILE_0300
     * @tc.name media_file_access_test_create_file_async_003
     * @tc.desc Test createFile() interfaces, path is absolute.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_create_file_async_003', 0, async (done) => {
      try {
        await helper.createFile("/data", "a.txt");
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_create_file_async_003 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })
    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_CREATE_FILE_0400
    * @tc.name media_file_access_test_create_file_async_004
    * @tc.desc Test createFile() interfaces, The file name contains special characters that cannot be used.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('media_file_access_test_create_file_async_004', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        await helper.createFile(uri, "\\*?[]");
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_create_file_async_004 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_CREATE_FILE_0500
     * @tc.name media_file_access_test_create_file_async_005
     * @tc.desc Test createFile() interfaces, concurrent file creation.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_create_file_async_005', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let name = `test${new Date().getTime()}.txt`;
        const delay = function delay() {
          return new Promise((resolve, reject) => {
            helper.createFile(uri, name, (err, result) => {
              resolve(result);
            })
          });
        };
        let tasks = [delay(), delay(), delay(), delay()];
        Promise.all(tasks).then(results => {
          let flag = results.some(item => item != null);
          hilog.error(DOMAIN_CODE, TAG, 'createFile concurrent request:' + JSON.stringify(results));
          expect(flag).assertTrue();
          expect(results.length == tasks.length).assertTrue();
          done();
        });
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_create_file_async_005 has failed for ' + err);
      }
    })
  })
}