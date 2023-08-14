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
import { prepareTestDir, prepareTestFile, removeTestDir, removeTrashDir, getDocumentsUri, getDownloadUri, getDesktopUri,
  DOCUMENTS_PATH, DOWNLOAD_PATH, DESKTOP_PATH, TESTDIR, TESTFILE } from "../common"
import fileAccess from '@ohos.file.fileAccess'
import trash from "@ohos.file.trash"
import hilog from '@ohos.hilog'

const DOMAIN_CODE = 0x0001;
const TAG = 'trashListFileTest';

export default function listFileTest(helper) {

  describe('listFileTest', function () {

    /**
     * @tc.number SUB_DF_FILE_TRASH_LIST_FILE_0000
     * @tc.name file_trash_test_list_file_000
     * @tc.desc Test listFile() interfaces. Delete directory & file and it should be only 2 item in trash.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('file_trash_test_list_file_000', 0, async function () {
      try {

        removeTrashDir();

        let documentUri = await getDocumentsUri(helper);
        prepareTestDir(DOCUMENTS_PATH);
        prepareTestFile(DOCUMENTS_PATH);

        let fileUri = documentUri + TESTFILE;
        let fileRes = await helper.delete(fileUri);
        expect(fileRes >= 0).assertTrue();
        if (fileRes < 0) {
          hilog.error(DOMAIN_CODE, TAG, 'delete Fail:' + fileUri);
        }

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
        expect(size == 2).assertTrue();
        for (let i = 0; i < size; i++) {
		      let fileInfo = files[i];
		      hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.url:' + fileInfo.uri);
		      hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.srcPath:' + fileInfo.srcPath);
		      hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.fileName:' + fileInfo.fileName);
	        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.mode:' + fileInfo.mode);
		      hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.size:' + fileInfo.size);
		      hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.mtime:' + fileInfo.mtime);
		      hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.ctime:' + fileInfo.ctime);
          expect(fileInfo.uri !== null && fileInfo.uri != undefined).assertTrue();
          expect(fileInfo.srcPath !== null && fileInfo.srcPath != undefined).assertTrue();
          expect(fileInfo.fileName !== null && fileInfo.fileName != undefined).assertTrue();
          expect(fileInfo.mode !== null && fileInfo.mode != undefined).assertTrue();
          expect(fileInfo.size !== null && fileInfo.size != undefined).assertTrue();
          expect(fileInfo.mtime !== null && fileInfo.mtime != undefined).assertTrue();
          expect(fileInfo.ctime !== null && fileInfo.ctime != undefined).assertTrue();
        }
        removeTestDir(DOCUMENTS_PATH);
        removeTrashDir();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'file_trash_test_list_file_000 has failed for ' + err);
        expect(false).assertTrue();
      }
    })

    /**
     * @tc.number SUB_DF_FILE_TRASH_LIST_FILE_0100
     * @tc.name file_trash_test_list_file_001
     * @tc.desc Test listFile() interfaces. Delete directory from Documents directory.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('file_trash_test_list_file_001', 0, async function () {
      try {

        removeTrashDir();

        let documentUri = await getDocumentsUri(helper);
        prepareTestDir(DOCUMENTS_PATH);

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
        expect(fileInfo.srcPath).assertEqual(dirUri);
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.url:' + fileInfo.uri);
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.srcPath:' + fileInfo.srcPath);
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.fileName:' + fileInfo.fileName);
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.mode:' + fileInfo.mode);
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.size:' + fileInfo.size);
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.mtime:' + fileInfo.mtime);
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.ctime:' + fileInfo.ctime);
        expect(fileInfo.uri !== null && fileInfo.uri != undefined).assertTrue();
        expect(fileInfo.srcPath !== null && fileInfo.srcPath != undefined).assertTrue();
        expect(fileInfo.fileName !== null && fileInfo.fileName != undefined).assertTrue();
        expect(fileInfo.mode !== null && fileInfo.mode != undefined).assertTrue();
        expect(fileInfo.size !== null && fileInfo.size != undefined).assertTrue();
        expect(fileInfo.mtime !== null && fileInfo.mtime != undefined).assertTrue();
        expect(fileInfo.ctime !== null && fileInfo.ctime != undefined).assertTrue();

        removeTestDir(DOCUMENTS_PATH);
        removeTrashDir();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'file_trash_test_list_file_001 has failed for ' + err);
        expect(false).assertTrue();
      }
    })

    /**
     * @tc.number SUB_DF_FILE_TRASH_LIST_FILE_0200
     * @tc.name file_trash_test_list_file_002
     * @tc.desc Test listFile() interfaces. Delete file from Download directory.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('file_trash_test_list_file_002', 0, async function () {
      try {

        removeTrashDir();

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
        expect(fileInfo.srcPath).assertEqual(fileUri);
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.url:' + fileInfo.uri);
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.srcPath:' + fileInfo.srcPath);
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.fileName:' + fileInfo.fileName);
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.mode:' + fileInfo.mode);
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.size:' + fileInfo.size);
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.mtime:' + fileInfo.mtime);
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.ctime:' + fileInfo.ctime);
        expect(fileInfo.uri !== null && fileInfo.uri != undefined).assertTrue();
        expect(fileInfo.srcPath !== null && fileInfo.srcPath != undefined).assertTrue();
        expect(fileInfo.fileName !== null && fileInfo.fileName != undefined).assertTrue();
        expect(fileInfo.mode !== null && fileInfo.mode != undefined).assertTrue();
        expect(fileInfo.size !== null && fileInfo.size != undefined).assertTrue();
        expect(fileInfo.mtime !== null && fileInfo.mtime != undefined).assertTrue();
        expect(fileInfo.ctime !== null && fileInfo.ctime != undefined).assertTrue();

        removeTestDir(DOWNLOAD_PATH);
        removeTrashDir();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'file_trash_test_list_file_002 has failed for ' + err);
        expect(false).assertTrue();
      }
    })


    /**
     * @tc.number SUB_DF_FILE_TRASH_LIST_FILE_0300
     * @tc.name file_trash_test_list_file_003
     * @tc.desc Test listFile() interfaces. Delete files not in Documents or Download directory, it will not move to trash.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('file_trash_test_list_file_003', 0, async function () {
      try {

        removeTrashDir();

        let desktopUri = await getDesktopUri(helper);
        prepareTestFile(DESKTOP_PATH);

        let fileUri = desktopUri + TESTFILE;
        let fileRes = await helper.delete(fileUri);
        expect(fileRes >= 0).assertTrue();
        if (fileRes < 0) {
          hilog.error(DOMAIN_CODE, TAG, 'delete Fail:' + fileUri);
          expect(false).assertTrue();
        }

        let files = trash.listFile();
        let size = files.length;
        hilog.info(DOMAIN_CODE, TAG, 'listFile Size:' + size);
        expect(size == 0).assertTrue();

        removeTestDir(DESKTOP_PATH);
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'file_trash_test_list_file_002 has failed for ' + err);
        expect(true).assertTrue();
        expect(err.code == 13900020 && err.message == "Invalid argument").assertTrue();
      }
    })
  })
}