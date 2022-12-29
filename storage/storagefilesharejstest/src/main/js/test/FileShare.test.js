/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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

import fileshare from '@ohos.fileshare';
import wantConstant from '@ohos.ability.wantConstant';
import {
  describe,
  it,
  expect
}
from '@ohos/hypium'

export default function fileShareTest() {
describe('file_share_test', function () {

  /**
   * @tc.number SUB_STORAGE_FileShare_GrantUriPermission_0000
   * @tc.name FileShare_GrantUriPermission_000
   * @tc.desc Function of API, Grant Uri Permission. Test normal function, argument is number.Promise
   */
  it('FileShare_GrantUriPermission_000', 0, async function (done) {
      try {
          let uri = "datashare:///media/image/9";
          let bundleName = "com.demo.a";
          fileShare.grantUriPermission(uri, bundleName, wantConstant.Flags.FLAG_AUTH_READ_URI_PERMISSION).then(() => {
              console.log("FileShare_GrantUriPermission_000 grantUriPermission success!");
              expect(false).assertTrue();
          }).catch(function (e) {
              console.log('FileShare_GrantUriPermission_000 grantUriPermission error info: '
              + e.message + ', code: ' + e.code);
              expect(e.code == 13900012 && e.message == 'Permission denied').assertTrue();
              done();
          });
      } catch (e) {
          console.log('FileShare_GrantUriPermission_000 grantUriPermission has failed for '
          + e.message + ', code: ' + e.code);
          expect(false).assertTrue();
      }
  });

  /**
   * @tc.number SUB_STORAGE_FileShare_GrantUriPermission_0100
   * @tc.name FileShare_GrantUriPermission_001
   * @tc.desc Function of API, Grant Uri Permission. Test normal function, argument is string.Promise
   */
  it('FileShare_GrantUriPermission_001', 0, async function (done) {
      try {
          let uri = "datashare:///media/image/9";
          let bundleName = "com.demo.a"
          fileShare.grantUriPermission(uri, bundleName, "r").then(function () {
              console.log("FileShare_GrantUriPermission_001 grantUriPermission success!");
              expect(false).assertTrue();
          }).catch(function (e) {
              console.log('FileShare_GrantUriPermission_001 grantUriPermission error info: '
              + e.message + ', code: ' + e.code);
              expect(e.code == 13900012 && e.message == 'Permission denied').assertTrue();
              done();
          });
      } catch (e) {
          console.log('FileShare_GrantUriPermission_001 grantUriPermission has failed for '
          + e.message + ', code: ' + e.code);
          expect(false).assertTrue();
      }
  });

  /**
   * @tc.number SUB_STORAGE_FileShare_GrantUriPermission_0200
   * @tc.name FileShare_GrantUriPermission_002
   * @tc.desc Function of API, Grant Uri Permission. Test error uri.Promise
   */
  it('FileShare_GrantUriPermission_002', 0, async function (done) {
      try {
          let invalidUri = "datashares:///media/image/9";
          let bundleName = "com.demo.a";
          fileShare.grantUriPermission(invalidUri, bundleName, "r").then(function () {
              console.log("FileShare_GrantUriPermission_002 grantUriPermission successful!");
              expect(false).assertTrue();
          }).catch(function (e) {
              console.log('FileShare_GrantUriPermission_002 grantUriPermission error info: '
              + e.message + ', code: ' + e.code);
              expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
              done();
          });

      } catch (e) {
          console.log('FileShare_GrantUriPermission_002 grantUriPermission has failed for '
          + e.message + ', code: ' + e.code);
          expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
          done();
      }
  });

  /**
   * @tc.number SUB_STORAGE_FileShare_GrantUriPermission_0300
   * @tc.name FileShare_GrantUriPermission_003
   * @tc.desc Function of API, Grant Uri Permission. Test empty bundleName.Promise
   */
  it('FileShare_GrantUriPermission_003', 0, async function (done) {
      try {
          let uri = "datashare:///media/image/9";
          let emptyBundleName = "";
          fileShare.grantUriPermission(uri, emptyBundleName, "r").then(function () {
              console.log("FileShare_GrantUriPermission_003 grantUriPermission successful!");
              expect(false).assertTrue();
          }).catch(function (e) {
              console.log('FileShare_GrantUriPermission_003 grantUriPermission error info: '
              + e.message + ', code: ' + e.code);
              expect(e.code == 13900012 && e.message == 'Permission denied').assertTrue();
              done();
          });

      } catch (e) {
          console.log('FileShare_GrantUriPermission_003 grantUriPermission has failed for '
          + e.message + ', code: ' + e.code);
          expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
          done();
      }
  });

  /**
   * @tc.number SUB_STORAGE_FileShare_GrantUriPermission_0400
   * @tc.name FileShare_GrantUriPermission_004
   * @tc.desc Function of API, Grant Uri Permission. Test normal function, argument is number.Callback
   */
  it('FileShare_GrantUriPermission_004', 0, async function (done) {
      try {
          let uri = "datashare:///media/image/9";
          let bundleName = "com.demo.a";
          fileShare.grantUriPermission(uri, bundleName, wantConstant.Flags.FLAG_AUTH_READ_URI_PERMISSION, (err) => {
              if (err) {
                  console.log("FileShare_GrantUriPermission_004 grantUriPermission fail: " + JSON.stringify(err));
                  expect(err.code == 13900012 && err.message == 'Permission denied').assertTrue();
                  done();
              } else {
                  console.log("FileShare_GrantUriPermission_004 grantUriPermission success!");
                  expect(false).assertTrue();
              }
          });
      } catch (e) {
          console.log('FileShare_GrantUriPermission_004 grantUriPermission has failed for '
          + e.message + ', code: ' + e.code);
          expect(false).assertTrue();
      }
  });//grantUriPermission success

  /**
   * @tc.number SUB_STORAGE_FileShare_GrantUriPermission_0500
   * @tc.name FileShare_GrantUriPermission_005
   * @tc.desc Function of API, Grant Uri Permission. Test normal function, argument is string.Callback
   */
  it('FileShare_GrantUriPermission_005', 0, async function (done) {
      try {
          let uri = "datashare:///media/image/9";
          let bundleName = "com.demo.a";
          fileShare.grantUriPermission(uri, bundleName, "r", (err) => {
              if (err) {
                  console.log("FileShare_GrantUriPermission_005 grantUriPermission fail: " + JSON.stringify(err));
                  expect(err.code == 13900012 && err.message == 'Permission denied').assertTrue();
                  done();
              } else {
                  console.log("FileShare_GrantUriPermission_005 grantUriPermission success!");
                  expect(false).assertTrue();
              }
          });
      } catch (e) {
          console.log('FileShare_GrantUriPermission_005 grantUriPermission has failed for '
          + e.message + ', code: ' + e.code);
          expect(false).assertTrue();
      }
  });//grantUriPermission success

  /**
   * @tc.number SUB_STORAGE_FileShare_GrantUriPermission_0600
   * @tc.name FileShare_GrantUriPermission_006
   * @tc.desc Function of API, Grant Uri Permission. Test error uri.Callback
   */
  it('FileShare_GrantUriPermission_006', 0, async function (done) {
      try {
          let invalidUri = "datashare:///medias/image/9";
          let bundleName = "com.demo.a";
          fileShare.grantUriPermission(invalidUri, bundleName, "r", (e) => {
              if (e) {
                  console.log('FileShare_GrantUriPermission_006 grantUriPermission error info: '
                  + e.message + ', code: ' + e.code);
                  expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
                  done();
              }
              console.log("FileShare_GrantUriPermission_006 grantUriPermission successful!");
              expect(false).assertTrue();
          });
      } catch (e) {
          console.log('FileShare_GrantUriPermission_006 grantUriPermission has failed for '
          + e.message + ', code: ' + e.code);
          expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
          done();
      }
  });

  /**
   * @tc.number SUB_STORAGE_FileShare_GrantUriPermission_0700
   * @tc.name FileShare_GrantUriPermission_007
   * @tc.desc Function of API, Grant Uri Permission. Test empty bundleName.Callback
   */
  it('FileShare_GrantUriPermission_007', 0, async function (done) {
      try {
          let uri = "datashare:///medias/image/9";
          let emptyBundleName = "";
          fileShare.grantUriPermission(uri, emptyBundleName, "r", (e) => {
              if (e) {
                  console.log('FileShare_GrantUriPermission_007 grantUriPermission error info: '
                  + e.message + ', code: ' + e.code);
                  expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
                  done();
              }
              console.log("FileShare_GrantUriPermission_007 grantUriPermission successful!");
              expect(false).assertTrue();
          });
      } catch (e) {
          console.log('FileShare_GrantUriPermission_007 grantUriPermission has failed for '
          + e.message + ', code: ' + e.code);
          expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
          done();
      }
  });
})
}
