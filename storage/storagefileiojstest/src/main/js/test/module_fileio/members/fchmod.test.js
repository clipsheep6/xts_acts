/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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
  fileio, FILE_CONTENT, prepareFile, nextFileName,
  describe, it, expect,beforeAll
} from '../../Common';

export default function fileioFchmod() {
describe('fileio_fchmod', function () {
  const TARGETVERSION = 11;
  let bundleInfo;
beforeAll(() => {
  try {
    bundleInfo = bundleManager.getBundleInfoForSelfSync(bundleManager.BundleFlag.GET_BUNDLE_INFO_WITH_APPLICATION);
    console.log('Target version: ' + bundleInfo.targetVersion);
  } catch(e) {
    console.info('getBundleInfoForSelfSync failed for' + e);
  }
});


  /**
   * @tc.number SUB_DF_FILEIO_FCHMOD_SYNC_0000
   * @tc.name fileio_test_fchmod_sync_000
   * @tc.desc Test fchmodSync() interfaces, mode = 0o660. Test file permissions modified successfully.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_fchmod_sync_000', 0, async function () {
    let fpath = await nextFileName('fileio_test_fchmod_sync_000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let fd = fileio.openSync(fpath, 0o2);
      fileio.fchmodSync(fd, 0o666);
      if (bundleInfo.targetVersion < TARGETVERSION) {
        expect((fileio.statSync(fpath).mode & 0o777) == 0o666).assertTrue();
      } else {
        expect((fileio.statSync(fpath).mode & 0o777) == 0o660).assertTrue();
      }
      fileio.closeSync(fd);
      fileio.unlinkSync(fpath);
    } catch (e) {
      console.info('fileio_test_fchmod_sync_000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_FCHMOD_ASYNC_0000
   * @tc.name fileio_test_fchmod_async_000
   * @tc.desc Test the fchmodAsync() interface with callback, mode = 1002. Test file permissions modified successfully.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_fchmod_async_000', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_fchmod_async_000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    let fd = fileio.openSync(fpath, 0o1, 0o0200);
    fileio.fchmod(fd, 1002, (err) => {
        if (err) {
            console.error('fileio_test_fchmod_async_000 has failed in callback: ' + err);
            expect(null).assertFail();
            fileio.closeSync(fd);
            fileio.unlinkSync(fpath);
            done();
        } else {
            if (bundleInfo.targetVersion < TARGETVERSION) {
              expect((fileio.statSync(fpath).mode & 0o777) == 1002).assertTrue();
            } else {
              expect((fileio.statSync(fpath).mode & 0o777) == 0o660).assertTrue();
            }
            fileio.closeSync(fd);
            fileio.unlinkSync(fpath);
            done();
        }
    });
});


  /**
   * @tc.number SUB_DF_FILEIO_FCHMOD_ASYNC_0100
   * @tc.name fileio_test_fchmod_async_001
   * @tc.desc Test the fchmodAsync() interface with callback, mode = 0o100. Test file permissions modified successfully.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_fchmod_async_001', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_fchmod_async_001');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    let fd = fileio.openSync(fpath, 0o1, 0o020);
    fileio.fchmod(fd, 0o100, async (err) => {
        if (err) {
            console.error('fileio_test_fchmod_async_001 has failed in callback: ' + err);
            expect(null).assertFail();
            fileio.closeSync(fd);
            fileio.unlinkSync(fpath);
            done();
        } else {
            if (bundleInfo.targetVersion < TARGETVERSION) {
                expect((fileio.statSync(fpath).mode & 0o777) == 0o100).assertTrue();
            } else {
                expect((fileio.statSync(fpath).mode & 0o777) == 0o660).assertTrue();
            }
            fileio.closeSync(fd);
            fileio.unlinkSync(fpath);
            done();
        }
    });
});
});
}
