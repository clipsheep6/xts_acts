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
import { getDownloadUri } from "../common"

const DOMAIN_CODE = 0x0001;
const TAG = 'mediaOpenFileTest';

export default function openFileTest(helper) {

  describe('mediaOpenFileTest', function () {

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_OPEN_FILE_0000
     * @tc.name media_file_access_test_open_file_async_000
     * @tc.desc Test openFile() interfaces, flags=0o0, return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_open_file_async_000', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let name = `open${new Date().getTime()}.txt`;
        let result = await helper.createFile(uri, name);
        let number = await helper.openFile(result, 0o0);
        let readNum = fileio.readSync(number, new ArrayBuffer(4096), {
          position: 0
        });
        expect(readNum == 0).assertTrue();
        expect(number >= 0).assertTrue();
        fileio.closeSync(number);
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_open_file_async_000 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_OPEN_FILE_0100
     * @tc.name media_file_access_test_open_file_async_001
     * @tc.desc Test openFile() interfaces, flags=0o1, return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_open_file_async_001', 0, async (done) => {
      try {
        let content = "hello, world";
        let uri = await getDownloadUri(helper);
        let name = `open1${new Date().getTime()}.txt`;
        let result = await helper.createFile(uri, name);
        helper.openFile(result, 0o1, (err, number) => {
          let writeNum = fileio.writeSync(number, content);
          expect(writeNum == content.length).assertTrue();
          expect(number >= 0).assertTrue();
          fileio.closeSync(number);
          done();
        });
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_open_file_async_001 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_OPEN_FILE_0200
     * @tc.name media_file_access_test_open_file_async_002
     * @tc.desc Test openFile() interfaces, flags=0o2, return in callback mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_open_file_async_002', 0, async (done) => {
      try {
        let content = "hello, world";
        let uri = await getDownloadUri(helper);
        let name = `open2${new Date().getTime()}.txt`;
        let result = await helper.createFile(uri, name);
        let number = await helper.openFile(result, 0o2);
        let writeNum = fileio.writeSync(number, content);
        let readNum = fileio.readSync(number, new ArrayBuffer(4096), {
          position: 0
        });
        expect(writeNum == content.length).assertTrue();
        expect(readNum == content.length).assertTrue();
        expect(number >= 0).assertTrue();
        fileio.closeSync(number);
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_open_file_async_002 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_OPEN_FILE_0300
    * @tc.name media_file_access_test_open_file_async_003
    * @tc.desc Test openFile() interfaces, flags is error.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('media_file_access_test_open_file_async_003', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let name = `open3${new Date().getTime()}.txt`;
        let fileUri = await helper.createFile(uri, name);
        await helper.openFile(fileUri, 0o700);
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_open_file_async_003 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_OPEN_FILE_0400
    * @tc.name media_file_access_test_open_file_async_004
    * @tc.desc Test openFile() interfaces, file does not exist.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('media_file_access_test_open_file_async_004', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        await helper.openFile(`${uri}/file_access_test_open_file_async_006.txt`, 0o1);
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_open_file_async_004 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })

    /**
   * @tc.number SUB_DF_MEDIA_FILE_ACCESS_OPEN_FILE_0500
   * @tc.name media_file_access_test_open_file_async_005
   * @tc.desc Test openFile() interfaces, concurrent requests.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
    it('media_file_access_test_open_file_async_005', 0, async (done) => {
      try {
        let name = `openConcurrent${new Date().getTime()}.txt`;
        let uri = await getDownloadUri(helper);
        let fileUri = await helper.createFile(uri, name);
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
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_open_file_async_005 has failed for ' + err);
      }
    })
  })
}