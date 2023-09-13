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
import { describe, it, expect }from '@ohos/hypium'
import { prepareTestDir, prepareTestFile, removeTestDir, removeTrashDir, recurListFile, getDocumentsUri, getDownloadUri, URI_PREFIX,
  DOCUMENTS_PATH, DOWNLOAD_PATH, TESTDIR, TESTFILE } from "../common"
import fileAccess from '@ohos.file.fileAccess'
import fs from '@ohos.file.fs'
import trash from "@ohos.file.trash"
import hilog from '@ohos.hilog'

const DOMAIN_CODE = 0x0001;
const TAG = 'trashRecoverTest';

export default function recoverTest(helper) {

  describe('recoverTest', function () {

    /**
     * @tc.number SUB_DF_FILE_TRASH_RECOVER_0000
     * @tc.name file_trash_test_recover_000
     * @tc.desc Test recover() interfaces. Delete directory and recover, check if file numbers is the same as before delete.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('file_trash_test_recover_000', 0, async function () {
      try {

        removeTrashDir();
        removeTestDir(DOCUMENTS_PATH);

        let documentUri = await getDocumentsUri(helper);
        prepareTestDir(DOCUMENTS_PATH);

        let fileList = [];
        recurListFile(DOCUMENTS_PATH + TESTDIR, fileList);

        let dirUri = documentUri + TESTDIR;
        let dirRes = await helper.delete(dirUri);
        expect(dirRes >= 0).assertTrue();
        if (dirRes < 0) {
          hilog.error(DOMAIN_CODE, TAG, 'delete Fail:' + dirUri);
          expect(false).assertTrue();
        }
        let files = trash.listFile();
        let size = files.length;
        hilog.info(DOMAIN_CODE, TAG, 'listFile Size:' + size);
        expect(size == 1).assertTrue();
        let fileInfo = files[0];
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.url:' + fileInfo.uri);
        // 恢复文件
        trash.recover(fileInfo.uri);

        // 判断回收站无文件
        files = trash.listFile();
        size = files.length;
        hilog.info(DOMAIN_CODE, TAG, 'listFile Size:' + size);
        expect(size == 0).assertTrue();

        // 判断恢复后的文件
        let fileRecoverList = [];
        recurListFile(DOCUMENTS_PATH + TESTDIR, fileRecoverList);

        expect(fileList.length == fileRecoverList.length).assertTrue();


        removeTestDir(DOCUMENTS_PATH);
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'file_trash_test_recover_000 has failed for ' + err);
        expect(false).assertTrue();
      }
    })

    /**
     * @tc.number SUB_DF_FILE_TRASH_RECOVER_0100
     * @tc.name file_trash_test_recover_001
     * @tc.desc Test recover() interfaces. Delete directory and recover, check if file recovered is accessible.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('file_trash_test_recover_001', 0, async function () {
      try {

        removeTrashDir();
        removeTestDir(DOWNLOAD_PATH);

        let downloadUri = await getDownloadUri(helper);
        prepareTestFile(DOWNLOAD_PATH);

        let fileUri = downloadUri + TESTFILE;
        let fileRes = await helper.delete(fileUri);
        expect(fileRes >= 0).assertTrue();
        if (fileRes < 0) {
          hilog.error(DOMAIN_CODE, TAG, 'delete Fail:' + fileUri);
          expect(false).assertTrue();
        }
        let files = trash.listFile();
        let size = files.length;
        hilog.info(DOMAIN_CODE, TAG, 'listFile Size:' + size);
        expect(size == 1).assertTrue();
        let fileInfo = files[0];
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.url:' + fileInfo.uri);
        // 恢复文件
        trash.recover(fileInfo.uri);

        // 判断回收站无文件
        files = trash.listFile();
        size = files.length;
        hilog.info(DOMAIN_CODE, TAG, 'listFile Size:' + size);
        expect(size == 0).assertTrue();

        // 判断回收站文件的源文件存在
        let sanboxPath = fileInfo.srcPath.substring(URI_PREFIX.length);
        expect(fs.accessSync(sanboxPath)).assertTrue();

        removeTestDir(DOWNLOAD_PATH);
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'file_trash_test_recover_001 has failed for ' + err);
        expect(false).assertTrue();
      }
    })

    /**
     * @tc.number SUB_DF_FILE_TRASH_RECOVER_0200
     * @tc.name file_trash_test_recover_002
     * @tc.desc Test recover() interfaces. Recover an non-exist file.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('file_trash_test_recover_002', 0, async function () {
      try {

        // 恢复文件
        trash.recover("Not Exist");
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'file_trash_test_recover_002 has failed for ' + err);
        expect(true).assertTrue();
        expect(err.code == 13900020 && err.message == "Invalid argument").assertTrue();
      }
    })
  })
}