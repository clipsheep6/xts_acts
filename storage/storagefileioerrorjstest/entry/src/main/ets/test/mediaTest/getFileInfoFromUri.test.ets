/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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
import { listFile, getDownloadUri } from "../common"

const DOMAIN_CODE = 0x0001;
const TAG = 'mediaGetFileInfoFromUriTest';

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

  describe('mediaGetFileInfoFromUriTest', function () {

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GETFILEINFOFROMURI_0000
     * @tc.name media_file_access_test_getFileInfoFromUri_async_000
     * @tc.desc Test getFileInfoFromUri() interfaces, make a subdir of root and create a new file in it,
     *  then transform it to FileInfo object.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_getFileInfoFromUri_async_000', 0, async (done) => {
      try {
        let testDir = "getFileInfoFromUriTestDir_000";
        let name = "media_file_access_getFileInfoFromUri_0000.txt";
        let uri = await getDownloadUri(helper);
        let dirTest = await helper.mkDir(uri, testDir);
        expect(typeof dirTest == 'string').assertTrue();

        let newFileUri = await helper.createFile(dirTest, name);
        expect(typeof newFileUri == 'string').assertTrue();

        let fileinfo = await helper.getFileInfoFromUri(newFileUri);
        expect(fileinfo != null).assertTrue();

        let number = await helper.delete(dirTest);
        expect(number == 0).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromUri_async_000 has failed for ' + err);
        expect(false).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GETFILEINFOFROMURI_0001
     * @tc.name media_file_access_test_getFileInfoFromUri_async_001
     * @tc.desc Test getFileInfoFromUri() interfaces, make a subdir of root and then transform it to FileInfo object.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_getFileInfoFromUri_async_001', 0, async (done) => {
      try {
        let testDir = 'getFileInfoFromUriTestDir_001';
        let uri = await getDownloadUri(helper);
        let dirTest = await helper.mkDir(uri, testDir);
        expect(typeof dirTest == 'string').assertTrue();

        let fileinfo = await helper.getFileInfoFromUri(dirTest);
        expect(fileinfo != null).assertTrue();

        let filesArrData = getFileInfoList(fileinfo);
        expect(filesArrData.length == 0).assertTrue();

        let number = await helper.delete(dirTest);
        expect(number == 0).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromUri_async_001 has failed for ' + err);
        expect(false).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GETFILEINFOFROMURI_0002
     * @tc.name media_file_access_test_getFileInfoFromUri_async_002
     * @tc.desc Test getFileInfoFromUri() interfaces, transform root directory to FileInfo object.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_getFileInfoFromUri_async_002', 0, async (done) => {
      try {
        let iter = await helper.getRoots();
        let uri = iter.next().value.uri;
        let fileinfo = await helper.getFileInfoFromUri(uri);
        expect(fileinfo != null).assertTrue();

        let filesArrData = getFileInfoList(fileinfo);
        expect(filesArrData.length >= 0).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromUri_async_002 has failed for ' + err);
        expect(false).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GETFILEINFOFROMURI_0003
     * @tc.name media_file_access_test_getFileInfoFromUri_async_003
     * @tc.desc Test getFileInfoFromUri() interfaces, convert the directory to fileinfo and call listfile for success.
     *  return in callback mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_getFileInfoFromUri_async_003', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let dir = await helper.mkDir(uri, "getFileInfoFromUriTestdir");
        let filePath = await helper.createFile(dir, "file1.jpg");
        filePath = await helper.createFile(dir, "file2.jpg");
        await helper.getFileInfoFromUri(dir, async (err, fileinfo) => {
          if (err) {
            hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromUri_async_003 has failed for ' + err);
            expect(false).assertTrue();
            done();
          }
          expect(fileinfo != null).assertTrue();

          let filesArrData = getFileInfoList(fileinfo);
          expect(filesArrData.length > 0).assertTrue();
        });
        
        let number = await helper.delete(dir);
        expect(number == 0).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromUri_async_003 has failed for ' + err);
        expect(false).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GETFILEINFOFROMURI_0004
     * @tc.name media_file_access_test_getFileInfoFromUri_async_004
     * @tc.desc Test getFileInfoFromUri() interfaces, transform not allowed uri to FileInfo object for failed.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_getFileInfoFromUri_async_004', 0, async (done) => {
      try {
        let uri = "notAllowed";
        let fileinfo = await helper.getFileInfoFromUri(uri);
        expect(fileinfo == null).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromUri_async_004 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GETFILEINFOFROMURI_0005
     * @tc.name media_file_access_test_getFileInfoFromUri_async_005
     * @tc.desc Test getFileInfoFromUri() interfaces, transform regular file uri to FileInfo object
     * and call listfile for failed.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_getFileInfoFromUri_async_005', 0, async (done) => {
      try {
        let name = `mediaFile1${new Date().getTime()}.txt`;
        let uri = await getDownloadUri(helper);
        let filePath = await helper.createFile(uri, name);
        let fileinfo = await helper.getFileInfoFromUri(filePath);
        expect(fileinfo != null).assertTrue();

        let iter = fileinfo.listFile();
        expect(iter == null).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromUri_async_005 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GETFILEINFOFROMURI_0006
     * @tc.name media_file_access_test_getFileInfoFromUri_async_006
     * @tc.desc Test getFileInfoFromUri() interfaces, transform invalid uri to FileInfo object
     * and call listfile for failed.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_getFileInfoFromUri_async_006', 0, async (done) => {
      try {
        let fileinfo = await helper.getFileInfoFromUri("");
        expect(fileinfo == null).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromUri_async_006 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GETFILEINFOFROMURI_0007
     * @tc.name media_file_access_test_getFileInfoFromUri_async_007
     * @tc.desc Test getFileInfoFromUri() interfaces, transform invalid uri to FileInfo object
     * and call listfile for failed.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_getFileInfoFromUri_async_007', 0, async (done) => {
      try {
        let fileinfo = await helper.getFileInfoFromUri("/");
        expect(fileinfo == null).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromUri_async_007 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      };
    })
  })
}

