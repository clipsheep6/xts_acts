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
const TAG = 'shareCreateFileTest';

export default function createFileTest(helper) {

  describe('shareCreateFileTest', function () {

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_CREATE_FILE_0000
     * @tc.name share_file_access_test_create_file_async_000
     * @tc.desc Test createFile() interfaces, return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_create_file_async_000', 0, async (done) => {
      try {
        let name = "file_access_test_create_file_async_000.txt";
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let result = await helper.createFile(uri, name);
          globalThis.fileList.push(result);
          expect(typeof result == 'string').assertTrue();
          expect(result == `${uri}/${name}`).assertTrue();
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_create_file_async_000 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_CREATE_FILE_0100
     * @tc.name share_file_access_test_create_file_async_001
     * @tc.desc Test createFile() interfaces, return in callback mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_create_file_async_001', 0, async (done) => {
      try {
        let name = "file_access_test_create_file_async_001.txt";
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          helper.createFile(uri, name, (err, result) => {
            if (err) {
              hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_create_file_async_001 has failed for ' + err);
              expect(false).assertTrue();
              done();
            }
            globalThis.fileList.push(result);
            expect(typeof result == 'string').assertTrue();
            expect(result == `${uri}/${name}`).assertTrue();
            done();
          });
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_create_file_async_001 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_CREATE_FILE_0200
     * @tc.name share_file_access_test_create_file_async_002
     * @tc.desc Test createFile() interfaces, file name contains special characters.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_create_file_async_002', 0, async (done) => {
      try {
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let name = "a%#$_.txt";
          let uri = globalThis.fileExtensionList[i].uri;
          let result = await helper.createFile(uri, name);
          globalThis.fileList.push(result);
          expect(typeof result == 'string').assertTrue();
          expect(result == `${uri}/${name}`).assertTrue();
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_create_file_async_002 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_CREATE_FILE_0300
     * @tc.name share_file_access_test_create_file_async_003
     * @tc.desc Test createFile() interfaces, path is absolute.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_create_file_async_003', 0, async (done) => {
      try {
        await helper.createFile("/data", "a.txt");
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_create_file_async_003 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_CREATE_FILE_0400
     * @tc.name share_file_access_test_create_file_async_004
     * @tc.desc Test createFile() interfaces, concurrent file creation.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_create_file_async_004', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          const delay = function delay() {
            return new Promise((resolve, reject) => {
              helper.createFile(uri, 'test.txt', (err, result) => {
                resolve(result);
              })
            });
          };
          let tasks = [delay(), delay(), delay(), delay()];
          Promise.all(tasks).then(results => {
            let filePathArr = results.filter(item => item != null);
            globalThis.fileList.push(filePathArr[filePathArr.length - 1]);
            expect(filePathArr.length == 1).assertTrue();
            expect(results.length == tasks.length).assertTrue();
            done();
          });
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_create_file_async_004 has failed for ' + err);
      }
    })
  })
}