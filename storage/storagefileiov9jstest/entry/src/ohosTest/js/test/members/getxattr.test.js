/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import {
    FILE_CONTENT, prepareFile, nextFileName, describe, it, expect
  } from '../Common';
import fs from '@ohos.file.fs';

export default function fileIOGetxattr() {
describe('fileIO_test_getxattr', function () {

  /**
   * @tc.number SUB_BASIC_FM_FileAPI_FileIo_GETXATTR_Sync_0100
   * @tc.name test_FileIO_Getxattr_Sync_001
   * @tc.desc Test getxattr() interface.
   * This interface shall work properly in normal case.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */  
  it('test_FileIO_Getxattr_Sync_001', 3, async function () {
    let fpath = await nextFileName('test_FileIO_Getxattr_Sync_001');
    let attrKey = 'user.comment';
    let attrValue = 'Test file.';
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    await fs.setxattr(fpath, attrKey, attrValue);
    
    try {
      let attrValue = fs.getxattrSync(fpath, attrKey);
      console.log("test_FileIO_Getxattr_Sync_001 the value is: " + attrValue);
      expect(attrValue).assertEqual('Test file.');
    } catch (e) {
      console.log('test_FileIO_Getxattr_Sync_001 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
   });
});
}