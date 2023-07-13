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
const TAG = 'shareAccessTest';

export default function accessTest(helper) {

  describe('shareAccessTest', function () {

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_ACCESS_0000
     * @tc.name share_file_access_test_access_async_000
     * @tc.desc Test getRoots() interfaces, return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_access_async_000', 0, async (done) => {
      try {
        let name = "share_file_access_test_access_async_000.txt";
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let result = await helper.createFile(uri, name);
          let isFileExist = await helper.access(result);
          globalThis.fileList.push(result);
          expect(typeof result == 'string').assertTrue();
          expect(result == `${uri}/${name}`).assertTrue();
          expect(isFileExist).assertTrue();
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_access_async_000 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_ACCESS_0100
     * @tc.name share_file_access_test_access_async_001
     * @tc.desc Test isFileExist() interfaces, return in callback mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_access_async_001', 0, async (done) => {
      try {
        let name = "share_file_access_test_access_async_001.txt";
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          let result = await helper.createFile(uri, name);
          globalThis.fileList.push(result);
          expect(typeof result == 'string').assertTrue();
          expect(result == `${uri}/${name}`).assertTrue();
          helper.access(result, (err, isFileExist) => {
            if (err) {
              hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_access_async_001 has failed for ' + err);
              expect(false).assertTrue();
              done();
            }
            expect(isFileExist).assertTrue();
            done();
          });
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_access_async_001 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_ACCESS_0200
     * @tc.name share_file_access_test_access_async_002
     * @tc.desc Test isFileExist() interfaces, When the file does not exist.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_access_async_002', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri + '/' + new Date().getTime();
          let isFileExist = await helper.access(uri);
          expect(isFileExist == false).assertTrue();
          done();
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_access_async_002 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_SHARE_FILE_ACCESS_ACCESS_0300
    * @tc.name share_file_access_test_access_async_003
    * @tc.desc Test isFileExist() interfaces, concurrent requests.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('share_file_access_test_access_async_003', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          let fileUri = await helper.createFile(uri, 'fileTestExist.txt');
          globalThis.fileList.push(fileUri);
          const delay = function delay() {
            return new Promise((resolve, reject) => {
              helper.access(fileUri, (err, result) => {
                resolve(result);
              })
            });
          };
          let tasks = [delay(), delay(), delay(), delay()];
          Promise.all(tasks).then(results => {
            let flag = results.every(item => item === true);
            expect(flag).assertTrue();
            expect(results.length == tasks.length).assertTrue();
            done();
          });
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_access_async_003 has failed for ' + err);
      }
    })
  })
}