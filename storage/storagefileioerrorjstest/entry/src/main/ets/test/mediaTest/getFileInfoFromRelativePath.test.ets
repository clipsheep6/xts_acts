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

const DOMAIN_CODE = 0x0001;
const TAG = 'mediaGetFileInfoFromRelativePathTest';

export default function getFileInfoFromRelativePath(helper) {

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

  describe('mediaGetFileInfoFromRelativePathTest', function () {

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_FILEINFO_FROM_RELATIVEPATH_0000
     * @tc.name media_file_access_test_getFileInfoFromRelativePath_async_0000
     * @tc.desc Test getFileInfoFromRelativePath() interfaces for success,
     *  return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_getFileInfoFromRelativePath_async_000', 0, async (done) => {
      try {
        let relativePath = "Audios/";
        let fileinfo = await helper.getFileInfoFromRelativePath(relativePath);
        expect(fileinfo != null).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromRelativePath_async_000 has failed for ' + err);
        expect(false).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_FILEINFO_FROM_RELATIVEPATH_0001
     * @tc.name media_file_access_test_getFileInfoFromRelativePath_async_0001
     * @tc.desc Test getFileInfoFromRelativePath() interfaces for success,
     *  return in callback mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_getFileInfoFromRelativePath_async_001', 0, async (done) => {
      try {
        let relativePath = "Camera";
        helper.getFileInfoFromRelativePath(relativePath, function(err, fileinfo) {
          if (err) {
            hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromRelativePath_async_001 has failed for ' + err);
            expect(false).assertTrue();
            done();
          }
          expect(fileinfo != null).assertTrue();
          done();
        });
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromRelativePath_async_001 has failed for ' + err);
        expect(false).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_FILEINFO_FROM_RELATIVEPATH_0002
     * @tc.name media_file_access_test_getFileInfoFromRelativePath_async_0002
     * @tc.desc Test getFileInfoFromRelativePath() interfaces for falied,
     *  return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_getFileInfoFromRelativePath_async_002', 0, async (done) => {
      try {
        let relativePath = "test/";
        let fileinfo = await helper.getFileInfoFromRelativePath(relativePath);
        expect(fileinfo == null).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromRelativePath_async_002 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_FILEINFO_FROM_RELATIVEPATH_0003
     * @tc.name media_file_access_test_getFileInfoFromRelativePath_async_0003
     * @tc.desc Test getFileInfoFromRelativePath() to fileinfo and call listfile for SUCCESS.
     *  return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_getFileInfoFromRelativePath_async_003', 0, async (done) => {
      try {
        let relativePath = "Documents/";
        let fileinfo = await helper.getFileInfoFromRelativePath(relativePath);
        expect(fileinfo != null).assertTrue();
        let fileIterator = fileinfo.listFile();
        expect(fileIterator != null).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromRelativePath_async_003 has failed for ' + err);
        expect(false).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_FILEINFO_FROM_RELATIVEPATH_0004
     * @tc.name media_file_access_test_getFileInfoFromRelativePath_async_0004
     * @tc.desc Test getFileInfoFromRelativePath() interfaces for success,
     *  return in callback mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_getFileInfoFromRelativePath_async_004', 0, async (done) => {
      try {
        let relativePath = "";
        helper.getFileInfoFromRelativePath(relativePath, function(err, fileinfo) {
          if (err) {
            hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromRelativePath_async_004 has failed for ' + err);
            expect(false).assertTrue();
            done();
          }
          expect(fileinfo != null).assertTrue();
          done();
        });
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromRelativePath_async_004 has failed for ' + err);
        expect(false).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_FILEINFO_FROM_RELATIVEPATH_0005
     * @tc.name media_file_access_test_getFileInfoFromRelativePath_async_0005
     * @tc.desc Test getFileInfoFromRelativePath() interfaces for falied,
     *  return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_getFileInfoFromRelativePath_async_005', 0, async (done) => {
      try {
        let relativePath = "/";
        let fileinfo = await helper.getFileInfoFromRelativePath(relativePath);
        expect(fileinfo == null).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromRelativePath_async_005 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_FILEINFO_FROM_RELATIVEPATH_0006
     * @tc.name media_file_access_test_getFileInfoFromRelativePath_async_0006
     * @tc.desc Test getFileInfoFromRelativePath() convert the relative file path to fileinfo and call listfile for success.
     *  return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_getFileInfoFromRelativePath_async_006', 0, async (done) => {
      try {
        let relativePath = "Download/";
        let fileinfo = await helper.getFileInfoFromRelativePath(relativePath);
        expect(fileinfo != null).assertTrue();

        let dir = await helper.mkDir(fileinfo.uri, "relativePathTestdir");
        relativePath = "Download/relativePathTestdir";
        fileinfo = await helper.getFileInfoFromRelativePath(relativePath);

        let filePath = await helper.createFile(fileinfo.uri, "file1");
        filePath = await helper.createFile(fileinfo.uri, "file2");

        let fileIterator = fileinfo.listFile();
        let filesArrData = getFileInfoList(fileinfo);
        expect(filesArrData.length > 0).assertTrue();

        let number = await helper.delete(dir);
        expect(number == 0).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromRelativePath_async_006 has failed for ' + err);
        expect(false).assertTrue();
        done();
      };
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_FILEINFO_FROM_RELATIVEPATH_0007
     * @tc.name media_file_access_test_getFileInfoFromRelativePath_async_0007
     * @tc.desc Test getFileInfoFromRelativePath() interfaces for falied,
     *  return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_getFileInfoFromRelativePath_async_007', 0, async (done) => {
      try {
        let relativePath = "/d";
        let fileinfo = await helper.getFileInfoFromRelativePath(relativePath);
        expect(fileinfo == null).assertTrue();
        done();
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_getFileInfoFromRelativePath_async_007 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      };
    })
  })
}

