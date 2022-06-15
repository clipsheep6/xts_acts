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
  fileio,
  nextFileName,
  describe,
  it,
  expect,
} from '../../Common';

describe('fileio_dir_close', function () {

  /**
   * @tc.number SUB_DF_FILEIO_DIR_CLOSE_ASYNC_0000
   * @tc.name fileio_test_dir_close_async_000
   * @tc.desc Test Dir close() interface,return in promise mode.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_dir_close_async_000', 0, async function (done) {
    let dpath = await nextFileName('fileio_test_dir_close_async_000') + 'd';

    try {
      expect(fileio.mkdirSync(dpath) == null).assertTrue();
      let dd = await fileio.opendir(dpath);
      expect(dd !== null).assertTrue();
      expect((await dd.close()) == null).assertTrue();
      expect(fileio.rmdirSync(dpath) == null).assertTrue();
      done();
    } catch (e) {
      console.info('fileio_test_dir_close_async_000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FileIO_Dir_close_Async_0100
   * @tc.name fileio_test_dir_close_async_001
   * @tc.desc Test Dir close() interface,return in callback mode.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_dir_close_async_001', 0, async function (done) {
    let dpath = await nextFileName('fileio_test_dir_close_async_001') + 'd';

    try {
      expect(fileio.mkdirSync(dpath) == null).assertTrue();
      let dd = await fileio.opendir(dpath);
      expect(dd !== null).assertTrue();
      dd.close(function (err) {
        expect(fileio.rmdirSync(dpath) == null).assertTrue();
        done();
      });
    } catch (e) {
      console.info('fileio_test_dir_close_async_001 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FileIO_Dir_close_Async_0200
   * @tc.name fileio_test_dir_close_async_002
   * @tc.desc Test Dir  close() interface,there are multiple parameters.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
   it('fileio_test_dir_close_async_002', 0, async function (done) {
    let dpath = await nextFileName('fileio_test_dir_close_async_002') + 'd';

    try {
      expect(fileio.mkdirSync(dpath) == null).assertTrue();
      let dd = await fileio.opendir(dpath);
      expect(dd !== null).assertTrue();
      dd.close(-1,function (err) {
        
      });
    } catch (e) {
      console.info('fileio_test_dir_close_async_002 has failed for ' + e);
      expect(e.message == "Number of arguments unmatched").assertTrue();
      expect(fileio.rmdirSync(dpath) == null).assertTrue();
      done(); 
    }
  });
});
