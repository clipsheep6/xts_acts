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
import { describe, it, expect, beforeAll }from '@ohos/hypium'
import hilog from '@ohos.hilog'
import fileAccess from '@ohos.file.fileAccess'
import fileExtensionInfo from "@ohos.file.fileExtensionInfo"
import { listFile } from "../common"

const DOMAIN_CODE = 0x0001;
const TAG = 'shareGetFileInfoFromUriTest';

export default function getFileInfoFromUriTest(helper) {

function getFileInfoList(fileinfo){
  let isDone = false;
  let filesArrData = [];
  let fileIterator = fileinfo.listFile();
  while(!isDone){
    try {
      let result = fileIterator.next();
      if (result) {
        isDone = result.done;
        if (!isDone) {
          filesArrData.push(result.value);
        }
      } else {
        isDone = true;
      }
    } catch (e) {
      isDone = true;
    }
  }
  return filesArrData;
}

  describe('shareGetFileInfoFromUriTest', function () {

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_GETFILEINFOFROMURI_0000
     * @tc.name share_file_access_test_getFileInfoFromUri_async_000
     * @tc.desc Test getFileInfoFromUri() interfaces, make a subdir of root and create a new file in it,
     *  then transform it to FileInfo object.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_getFileInfoFromUri_async_000', 0, async (done) => {
      try {
        let testDir = "getFileInfoFromUriTestDir_000";
        let name = "external_file_access_getFileInfoFromUri_0000.txt";
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let rootUri = globalThis.fileExtensionList[i].uri;
          let dirTest = await helper.mkDir(rootUri, testDir);
          expect(typeof dirTest == 'string').assertTrue();

          let newFileUri = await helper.createFile(dirTest, name);
          expect(typeof newFileUri == 'string').assertTrue();
          expect(newFileUri == `${dirTest}/${name}`).assertTrue();

          let fileinfo = await helper.getFileInfoFromUri(newFileUri);
          expect(fileinfo != null).assertTrue();

          console.info('----------uri ' + typeof fileinfo.uri + JSON.stringify(fileinfo.uri));
          console.info('----------fileName ' + typeof fileinfo.fileName + JSON.stringify(fileinfo.fileName));
          console.info('----------mode ' + typeof fileinfo.mode + JSON.stringify(fileinfo.mode));
          console.info('----------size ' + typeof fileinfo.size + JSON.stringify(fileinfo.size));
          console.info('----------mtime ' + typeof fileinfo.mtime + JSON.stringify(fileinfo.mtime));
          console.info('----------mimeType ' + typeof fileinfo.mimeType + JSON.stringify(fileinfo.mimeType));

          let number = await helper.delete(dirTest);
          expect(number >= 0).assertTrue();
        }
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_getFileInfoFromUri_async_000 has failed for ' + err);
      };
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_GETFILEINFOFROMURI_0001
     * @tc.name share_file_access_test_getFileInfoFromUri_async_001
     * @tc.desc Test getFileInfoFromUri() interfaces, make a subdir of root and then transform it to FileInfo object.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_getFileInfoFromUri_async_001', 0, async (done) => {
      try {
        let testDir = 'getFileInfoFromUriTestDir_001';
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let rootUri = globalThis.fileExtensionList[i].uri;
          let dirTest = await helper.mkDir(rootUri, testDir);
          expect(typeof dirTest == 'string').assertTrue();

          let fileinfo = await helper.getFileInfoFromUri(dirTest);
          expect(fileinfo != null).assertTrue();

          console.info('----------uri ' + typeof fileinfo.uri + JSON.stringify(fileinfo.uri));
          console.info('----------fileName ' + typeof fileinfo.fileName + JSON.stringify(fileinfo.fileName));
          console.info('----------mode ' + typeof fileinfo.mode + JSON.stringify(fileinfo.mode));
          console.info('----------size ' + typeof fileinfo.size + JSON.stringify(fileinfo.size));
          console.info('----------mtime ' + typeof fileinfo.mtime + JSON.stringify(fileinfo.mtime));
          console.info('----------mimeType ' + typeof fileinfo.mimeType + JSON.stringify(fileinfo.mimeType));

          let filesArrData = getFileInfoList(fileinfo);
          expect(filesArrData.length == 0).assertTrue();

          let number = await helper.delete(dirTest);
          expect(number >= 0).assertTrue();
        }
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_getFileInfoFromUri_async_001 has failed for ' + err);
      };
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_GETFILEINFOFROMURI_0002
     * @tc.name share_file_access_test_getFileInfoFromUri_async_002
     * @tc.desc Test getFileInfoFromUri() interfaces, transform root directory to FileInfo object.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_getFileInfoFromUri_async_002', 0, async (done) => {
      try {
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let rootUri = globalThis.fileExtensionList[i].uri;
          let fileinfo = await helper.getFileInfoFromUri(rootUri);
          expect(fileinfo != null).assertTrue();

          console.info('----------uri ' + typeof fileinfo.uri + JSON.stringify(fileinfo.uri));
          console.info('----------fileName ' + typeof fileinfo.fileName + JSON.stringify(fileinfo.fileName));
          console.info('----------mode ' + typeof fileinfo.mode + JSON.stringify(fileinfo.mode));
          console.info('----------size ' + typeof fileinfo.size + JSON.stringify(fileinfo.size));
          console.info('----------mtime ' + typeof fileinfo.mtime + JSON.stringify(fileinfo.mtime));
          console.info('----------mimeType ' + typeof fileinfo.mimeType + JSON.stringify(fileinfo.mimeType));

          let filesArrData = getFileInfoList(fileinfo);
          expect(filesArrData.length >= 0).assertTrue();
        }
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_getFileInfoFromUri_async_002 has failed for ' + err);
      };
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_GETFILEINFOFROMURI_0003
     * @tc.name share_file_access_test_getFileInfoFromUri_async_003
     * @tc.desc Test getFileInfoFromUri() interfaces, transform root directory to FileInfo object,
     *  return in callback mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_getFileInfoFromUri_async_003', 0, async (done) => {
      try {
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let rootUri = globalThis.fileExtensionList[i].uri;
          await helper.getFileInfoFromUri(rootUri, async (err, fileinfo) => {
            if (err) {
              hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_getFileInfoFromUri_async_003 has failed for ' + err);
              expect(false).assertTrue();
              done();
            }
            expect(fileinfo != null).assertTrue();

            console.info('----------uri ' + typeof fileinfo.uri + JSON.stringify(fileinfo.uri));
            console.info('----------fileName ' + typeof fileinfo.fileName + JSON.stringify(fileinfo.fileName));
            console.info('----------mode ' + typeof fileinfo.mode + JSON.stringify(fileinfo.mode));
            console.info('----------size ' + typeof fileinfo.size + JSON.stringify(fileinfo.size));
            console.info('----------mtime ' + typeof fileinfo.mtime + JSON.stringify(fileinfo.mtime));
            console.info('----------mimeType ' + typeof fileinfo.mimeType + JSON.stringify(fileinfo.mimeType));

            let filesArrData = getFileInfoList(fileinfo);
            expect(filesArrData.length >= 0).assertTrue();
          });
        }
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_getFileInfoFromUri_async_003 has failed for ' + err);
      };
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_GETFILEINFOFROMURI_0004
     * @tc.name share_file_access_test_getFileInfoFromUri_async_004
     * @tc.desc Test getFileInfoFromUri() interfaces,  transform not allowed uri to FileInfo object for failed.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_getFileInfoFromUri_async_004', 0, async (done) => {
      try {
        let uri = "notAllowed";
        let fileinfo = await helper.getFileInfoFromUri(uri);
        expect(fileinfo == null).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_getFileInfoFromUri_async_004 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_GETFILEINFOFROMURI_0005
     * @tc.name share_file_access_test_getFileInfoFromUri_async_005
     * @tc.desc Test getFileInfoFromUri() interfaces, transform regular file uri to FileInfo object
     * and call listfile for failed.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_getFileInfoFromUri_async_005', 0, async (done) => {
      try {
        let iter = await helper.getRoots();
        let uri = iter.next().value.uri;
        let filePath = await helper.createFile(uri, "getFileInfoFromUri_async_005.txt");
        globalThis.fileList.push(filePath);
        let fileinfo = await helper.getFileInfoFromUri(filePath);
        expect(fileinfo != null).assertTrue();

        iter = fileinfo.listFile();
        expect(iter == null).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_getFileInfoFromUri_async_005 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_GETFILEINFOFROMURI_0006
     * @tc.name share_file_access_test_getFileInfoFromUri_async_006
     * @tc.desc Test getFileInfoFromUri() interfaces, transform invalid uri to FileInfo object for failed.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_getFileInfoFromUri_async_006', 0, async (done) => {
      try {
        let fileinfo = await helper.getFileInfoFromUri("");
        expect(fileinfo == null).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_getFileInfoFromUri_async_006 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_GETFILEINFOFROMURI_0007
     * @tc.name share_file_access_test_getFileInfoFromUri_async_007
     * @tc.desc Test getFileInfoFromUri() interfaces, transform invalid uri to FileInfo object for failed.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_getFileInfoFromUri_async_007', 0, async (done) => {
      try {
        let fileinfo = await helper.getFileInfoFromUri("/");
        expect(fileinfo == null).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_getFileInfoFromUri_async_007 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      };
    })
  })
}

