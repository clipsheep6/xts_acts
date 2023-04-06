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
import { listFile } from "../common"
import hilog from '@ohos.hilog'

const DOMAIN_CODE = 0x0001;
const TAG = 'shareDeleteTest';

export default function deleteTest(helper) {

  describe('shareDeleteTest', function () {

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_DELETE_0000
     * @tc.name share_file_access_test_delete_async_000
     * @tc.desc Test delete() interfaces, return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_delete_async_000', 0, async (done) => {
      try {
        let flag = true;
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let result = await helper.createFile(uri, "file_access_test_delete_async_000.txt");
          let number = await helper.delete(result);
          expect(number >= 0).assertTrue();
          if (number < 0) {
            hilog.error(DOMAIN_CODE, TAG, 'delete Fail:' + result);
            flag = false;
            break;
          }
        }
        expect(flag).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_delete_async_000 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_DELETE_0100
     * @tc.name share_file_access_test_delete_async_001
     * @tc.desc Test delete() interfaces, return in callback mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_delete_async_001', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          let result = await helper.createFile(uri, "file_access_test_delete_async_001.txt");
          helper.delete(result, (err, number) => {
            if (err) {
              hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_delete_async_001 has failed for ' + err);
              expect(false).assertTrue();
              done();
            }
            expect(number >= 0).assertTrue();
            done();
          });
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_delete_async_001 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_DELETE_0200
     * @tc.name share_file_access_test_delete_async_002
     * @tc.desc Test delete() interfaces, delete nonexistent files.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_delete_async_002', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          let number = await helper.delete(`${uri}/${new Date().getTime()}.txt`);
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_delete_async_002 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })

    /**
    * @tc.number SUB_DF_SHARE_FILE_ACCESS_DELETE_0300
    * @tc.name share_file_access_test_delete_async_003
    * @tc.desc Test delete() interfaces, delete directory.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('share_file_access_test_delete_async_003', 0, async (done) => {
      try {
        let flag = true;
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let result = await helper.mkDir(uri, 'deleteDir');
          let number = await helper.delete(result);
          expect(number >= 0).assertTrue();
          if (number < 0) {
            hilog.error(DOMAIN_CODE, TAG, 'deleteDir Fail:' + result);
            flag = false;
            break;
          }
        }
        expect(flag).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_delete_async_003 has failed for ' + err);
      }
    })

    /**
   * @tc.number SUB_DF_SHARE_FILE_ACCESS_DELETE_0400
   * @tc.name share_file_access_test_delete_async_004
   * @tc.desc Test delete() interfaces, delete directories with files.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
    it('share_file_access_test_delete_async_004', 0, async (done) => {
      try {
        let flag = true;
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let result = await helper.mkDir(uri, 'deleteDir1');
          let filePath = await helper.createFile(result, 'b.txt');
          let number = await helper.delete(result);
          expect(number >= 0).assertTrue();
          if (number < 0) {
            hilog.error(DOMAIN_CODE, TAG, 'deleteDirWithFies Fail:' + result);
            flag = false;
            break;
          }
        }
        expect(flag).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_delete_async_004 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_SHARE_FILE_ACCESS_DELETE_0500
    * @tc.name share_file_access_test_delete_async_005
    * @tc.desc Test delete() interfaces, concurrent requests.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('share_file_access_test_delete_async_005', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          let fileUri = await helper.createFile(uri, "delete.txt");
          const delay = function delay() {
            return new Promise((resolve, reject) => {
              helper.delete(fileUri, (err, result) => {
                resolve(result);
              })
            });
          };
          let tasks = [delay(), delay(), delay(), delay()];
          Promise.all(tasks).then(results => {
            let result = results.filter(item => item >= 0);
            expect(result.length == 1).assertTrue();
            expect(results.length == tasks.length).assertTrue();
            done();
          });
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_delete_async_005 has failed for ' + err);
      }
    })

    /**
   * @tc.number SUB_DF_SHARE_FILE_ACCESS_DELETE_0600
   * @tc.name share_file_access_test_delete_async_006
   * @tc.desc Test delete() interfaces, clean up the environment.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
    it('share_file_access_test_delete_async_006', 0, async (done) => {
      try {
        let flag = true;
        for (let i = 0; i < globalThis.fileList.length; i++) {
          let uri = globalThis.fileList[i];
          let number = await helper.delete(uri);
          expect(number >= 0).assertTrue();
          if (number < 0) {
            hilog.error(DOMAIN_CODE, TAG, 'delete Fail:' + uri);
            flag = false;
            break;
          }
        }
        expect(flag).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_delete_async_006 has failed for ' + err);
      }
    })
  })
}