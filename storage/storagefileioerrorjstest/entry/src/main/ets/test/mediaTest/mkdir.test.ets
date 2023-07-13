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
const TAG = 'mediaMkdirTest';

export default function mkdirTest(helper) {

  describe('mediaMkdirTest', function () {

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_MKDIR_0000
     * @tc.name media_file_access_test_mkdir_async_000
     * @tc.desc Test mkdir() interfaces, return in callback mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_mkdir_async_000', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        hilog.info(DOMAIN_CODE, TAG, 'Uri is ' + uri);
        let name = `dir${new Date().getTime()}`;
        helper.mkDir(uri, name, (err, result) => {
          if (err) {
            hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_mkdir_async_000 has failed for ' + err);
            expect(false).assertTrue();
            done();
          }
          let fileId = result.substring(result.lastIndexOf('/') + 1);
          expect(typeof result == 'string').assertTrue();
          expect(fileId > 0).assertTrue();
          done();
        });
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_mkdir_async_000 has failed for ' + err);
      }
    })


    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_MKDIR_0200
     * @tc.name media_file_access_test_mkdir_async_002
     * @tc.desc Test mkdir() interfaces, directory name contains special characters.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_mkdir_async_001', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        hilog.info(DOMAIN_CODE, TAG, 'Uri is ' + uri);
        let name = `&@#_^%${new Date().getTime()}`;
        let result = await  helper.mkDir(uri, name);
        hilog.info(DOMAIN_CODE, TAG, 'result uri is ' + result);
        let fileId = result.substring(result.lastIndexOf('/') + 1);
        expect(typeof result == 'string').assertTrue();
        expect(fileId > 0).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_mkdir_async_001 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_MKDIR_0200
     * @tc.name media_file_access_test_mkdir_async_002
     * @tc.desc Test mkdir() interfaces, when path does not exist.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_mkdir_async_002', 0, async (done) => {
      try {
        await helper.mkDir('/a', 'd');
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_mkdir_async_002 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_MKDIR_0300
     * @tc.name media_file_access_test_mkdir_async_003
     * @tc.desc Test mkdir() interfaces, Create an existing directory.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_mkdir_async_003', 0, async (done) => {
      try {
        let name = `dirExist${new Date().getTime()}`;
        let uri = await getDownloadUri(helper);
        hilog.info(DOMAIN_CODE, TAG, 'Uri is ' + uri);
        await helper.mkDir(uri, name);
        await helper.mkDir(uri, name);
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_mkdir_async_003 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_MKDIR_0400
     * @tc.name media_file_access_test_mkdir_async_004
     * @tc.desc Test mkdir() interfaces, concurrent requests.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_mkdir_async_004', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        hilog.info(DOMAIN_CODE, TAG, 'Uri is ' + uri);
        let name = `testConcurrent${new Date().getTime()}`;
        const delay = function delay() {
          return new Promise((resolve, reject) => {
            helper.mkDir(uri, name, (err, result) => {
              resolve(result);
            })
          });
        };
        let tasks = [delay(), delay(), delay(), delay()]
        Promise.all(tasks).then(results => {
          let flag = results.some(item => item != null);
          expect(flag).assertTrue();
          expect(results.length == tasks.length).assertTrue();
          done();
        });
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_mkdir_async_004 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_MKDIR_0500
     * @tc.name media_file_access_test_mkdir_async_005
     * @tc.desc Test mkdir() interfaces, Create illegal folder.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_mkdir_async_005', 0, async (done) => {
      try {
        let uri = globalThis.localUri;
        hilog.info(DOMAIN_CODE, TAG, 'Uri is ' + uri);
        await helper.mkDir(uri, 'test');
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_mkdir_async_005 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })
  })
}