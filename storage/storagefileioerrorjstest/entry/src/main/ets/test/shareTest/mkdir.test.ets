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
const TAG = 'shareMkdirTest';

export default function mkdirTest(helper) {

  describe('shareMkdirTest', function () {

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_MKDIR_0000
     * @tc.name share_file_access_test_mkdir_async_000
     * @tc.desc Test mkdir() interfaces, return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_mkdir_async_000', 0, async (done) => {
      try {
        let dirName = 'dir';
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let result = await helper.mkDir(uri, dirName);
          globalThis.fileList.push(result);
          expect(typeof result == 'string').assertTrue();
          expect(result == `${uri}/${dirName}`).assertTrue();
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_mkdir_async_000 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_MKDIR_0100
     * @tc.name share_file_access_test_mkdir_async_001
     * @tc.desc Test mkdir() interfaces, return in callback mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_mkdir_async_001', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let dirName = 'dir1';
          let uri = globalThis.fileExtensionList[0].uri;
          helper.mkDir(uri, dirName, (err, result) => {
            if (err) {
              hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_mkdir_async_001 has failed for ' + err);
              expect(false).assertTrue();
              done();
            }
            globalThis.fileList.push(result);
            expect(typeof result == 'string').assertTrue();
            expect(result == `${uri}/${dirName}`).assertTrue();
            done();
          });
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_mkdir_async_001 has failed for ' + err);
      }
    })


    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_MKDIR_0200
     * @tc.name share_file_access_test_mkdir_async_002
     * @tc.desc Test mkdir() interfaces, directory name contains special characters.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_mkdir_async_002', 0, async (done) => {
      try {
        let dirName = '&@#_^%';
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let result = await helper.mkDir(uri, dirName);
          globalThis.fileList.push(result);
          let ret = `${uri}/${dirName}`;
          expect(typeof result == 'string').assertTrue();
          expect(result == ret).assertTrue();
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_mkdir_async_002 has failed for ' + err);
      }
    })


    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_MKDIR_0300
     * @tc.name share_file_access_test_mkdir_async_003
     * @tc.desc Test mkdir() interfaces, when path does not exist.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_mkdir_async_003', 0, async (done) => {
      try {
        await helper.mkDir('/a', 'd');
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_mkdir_async_003 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })


    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_MKDIR_0400
     * @tc.name share_file_access_test_mkdir_async_004
     * @tc.desc Test mkdir() interfaces, Create an existing directory.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_mkdir_async_004', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          await helper.mkDir(uri, "dir1");
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_mkdir_async_004 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_MKDIR_0500
     * @tc.name share_file_access_test_mkdir_async_005
     * @tc.desc Test mkdir() interfaces, concurrent requests.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_mkdir_async_005', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          const delay = function delay() {
            return new Promise((resolve, reject) => {
              helper.mkDir(uri, 'test', (err, result) => {
                resolve(result);
              })
            });
          };
          let tasks = [delay(), delay(), delay(), delay()]
          Promise.all(tasks).then(results => {
            let dirPathArr = results.filter(item => item != null);
            globalThis.fileList.push(dirPathArr[dirPathArr.length - 1]);
            expect(dirPathArr.length == 1).assertTrue();
            expect(results.length == tasks.length).assertTrue();
            done();
          });
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_mkdir_async_005 has failed for ' + err);
      }
    })
  })
}