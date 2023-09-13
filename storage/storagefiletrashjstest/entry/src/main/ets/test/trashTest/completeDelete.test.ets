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
import { prepareTestFile, removeTestDir, removeTrashDir, getDocumentsUri, DOCUMENTS_PATH, TESTFILE } from "../common"
import fileAccess from '@ohos.file.fileAccess'
import trash from "@ohos.file.trash"
import hilog from '@ohos.hilog'

const DOMAIN_CODE = 0x0001;
const TAG = 'trashCompleteDeleteTest';

export default function CompleteDeleteTest(helper) {

  describe('CompleteDeleteTest', function () {

    /**
     * @tc.number SUB_DF_FILE_TRASH_COMPLETE_DELETE_0000
     * @tc.name file_trash_test_complete_delete_000
     * @tc.desc Test CompletelyDelete() interfaces. Complete delete exist file in trash.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('file_trash_test_complete_delete_000', 0, async function () {
      try {

        removeTrashDir();
        let documentUri = await getDocumentsUri(helper);
        prepareTestFile(DOCUMENTS_PATH);

        let fileUri = documentUri + TESTFILE;
        let fileRes = await helper.delete(fileUri);
        expect(fileRes >= 0).assertTrue();
        if (fileRes < 0) {
          hilog.error(DOMAIN_CODE, TAG, 'delete Fail:' + fileUri);
        }
        let files = trash.listFile();
        let size = files.length;
        hilog.info(DOMAIN_CODE, TAG, 'listFile Size:' + size);
        expect(size == 1).assertTrue();
        let fileInfo = files[0];
        hilog.info(DOMAIN_CODE, TAG, 'listFile fileInfo.url:' + fileInfo.uri);
        trash.completelyDelete(fileInfo.uri);
        expect(true).assertTrue();

        files = trash.listFile();
        size = files.length;
        hilog.info(DOMAIN_CODE, TAG, 'listFile Size:' + size);

        removeTestDir(DOCUMENTS_PATH);
        removeTrashDir();
        expect(size == 0).assertTrue();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'file_trash_test_complete_delete_000 has failed for ' + err);
        expect(false).assertTrue();
      }
    })

    /**
     * @tc.number SUB_DF_FILE_TRASH_COMPLETE_DELETE_0100
     * @tc.name file_trash_test_complete_delete_001
     * @tc.desc Test listFile() interfaces. Complete delete non-exist path in trash.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('file_trash_test_complete_delete_001', 0, async function () {
      try {
          trash.completelyDelete('Not Exist');
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'file_trash_test_complete_delete_001 has failed for ' + err);
        expect(true).assertTrue();
        expect(err.code == 13900020 && err.message == "Invalid argument").assertTrue();
      }
    })
  })
}