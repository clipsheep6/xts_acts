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
import fileio from "@ohos.fileio"
import hilog from '@ohos.hilog'

const DOMAIN_CODE = 0x0001;
const TAG = 'shareOpenFileTest';

export default function openFileTest(helper) {

  describe('shareOpenFileTest', function () {

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_OPEN_FILE_0000
     * @tc.name share_file_access_test_open_file_async_000
     * @tc.desc Test openFile() interfaces, flags=0o0, return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_open_file_async_000', 0, async (done) => {
      try {
        let flag = true;
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let result = await helper.createFile(uri, "file_access_test_open_file_async_000.txt");
          globalThis.fileList.push(result);
          let number = await helper.openFile(result, 0o0);
          if (number < 0) {
            hilog.error(DOMAIN_CODE, TAG, 'openFile Fail:' + result);
            flag = false;
            break;
          }
          let readNum = fileio.readSync(number, new ArrayBuffer(4096));
          expect(readNum == 0).assertTrue();
          expect(number >= 0).assertTrue();
          fileio.closeSync(number);
        }
        expect(flag).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_open_file_async_000 has failed for ' + err);
      }
    })


    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_OPEN_FILE_0100
     * @tc.name share_file_access_test_open_file_async_001
     * @tc.desc Test openFile() interfaces, flags=0o1, return in callback mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_open_file_async_001', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let content = "hello, world";
          let uri = globalThis.fileExtensionList[0].uri;
          let result = await helper.createFile(uri, "file_access_test_open_file_async_001.txt");
          globalThis.fileList.push(result);
          helper.openFile(result, 0o1, function (err, number) {
            if (err) {
              hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_open_file_async_001 has failed for ' + err);
              expect(false).assertTrue();
              done();
            }
            let writeNum = fileio.writeSync(number, content);
            expect(writeNum == content.length).assertTrue();
            expect(number >= 0).assertTrue();
            fileio.closeSync(number);
            done();
          });
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_open_file_async_001 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_OPEN_FILE_0200
     * @tc.name share_file_access_test_open_file_async_002
     * @tc.desc Test openFile() interfaces, flags=0o2, return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_open_file_async_002', 0, async (done) => {
      try {
        let flag = true;
        let content = "hello, world";
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let result = await helper.createFile(uri, "file_access_test_open_file_async_002.txt");
          globalThis.fileList.push(result);
          let number = await helper.openFile(result, 0o2);
          if (number < 0) {
            hilog.error(DOMAIN_CODE, TAG, 'openFile Fail:' + result);
            flag = false;
            break;
          }
          let writeNum = fileio.writeSync(number, content);
          let readNum = fileio.readSync(number, new ArrayBuffer(4096), {
            position: 0
          });
          expect(writeNum == content.length).assertTrue();
          expect(readNum == content.length).assertTrue();
          expect(number >= 0).assertTrue();
          fileio.closeSync(number);
        }
        expect(flag).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_open_file_async_002 has failed for ' + err);
      }
    })


    /**
    * @tc.number SUB_DF_SHARE_FILE_ACCESS_OPEN_FILE_0300
    * @tc.name share_file_access_test_open_file_async_003
    * @tc.desc Test openFile() interfaces, flags is error.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('share_file_access_test_open_file_async_003', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          let fileUri = await helper.createFile(uri, "share_file_access_test_open_file_async_003.txt");
          globalThis.fileList.push(fileUri);
          await helper.openFile(fileUri, 0o700);
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_open_file_async_003 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })

    /**
    * @tc.number SUB_DF_SHARE_FILE_ACCESS_OPEN_FILE_0400
    * @tc.name share_file_access_test_open_file_async_004
    * @tc.desc Test openFile() interfaces, file does not exist.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('share_file_access_test_open_file_async_004', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length) {
          let uri = globalThis.fileExtensionList[0].uri;
          await helper.openFile(`${uri}/share_file_access_test_open_file_async_004.txt`, 0o1);
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_open_file_async_004 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })

    /**
   * @tc.number SUB_DF_SHARE_FILE_ACCESS_OPEN_FILE_0500
   * @tc.name share_file_access_test_open_file_async_005
   * @tc.desc Test openFile() interfaces, concurrent requests.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
    it('share_file_access_test_open_file_async_005', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          let fileUri = await helper.createFile(uri, "open.txt");
          globalThis.fileList.push(fileUri);
          const delay = function delay() {
            return new Promise((resolve, reject) => {
              helper.openFile(fileUri, 0o2, (err, result) => {
                resolve(result);
              })
            });
          };
          let tasks = [delay(), delay(), delay(), delay()];
          Promise.all(tasks).then(results => {
            let flag = results.every(item => item >= 0);
            expect(flag).assertTrue();
            expect(results.length == tasks.length).assertTrue();
            done();
          });
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_open_file_async_005 has failed for ' + err);
      }
    })
  })
}