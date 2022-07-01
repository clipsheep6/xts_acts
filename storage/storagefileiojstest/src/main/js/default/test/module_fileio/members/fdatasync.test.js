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
  describe, it, expect,
} from '../../Common';

describe('fileio_fdatasync', async function () {

  /**
   * @tc.number SUB_DF_FILEIO_FDATASYNC_ASYNC_0000
   * @tc.name fileio_test_fdatasync_async_000
   * @tc.desc Test fdatasync() interfaces, return in callback mode. Test file content data synchronization.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_fdatasync_async_000', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_fdatasync_async_000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let text = 'hello';

    try {
      let fd = fileio.openSync(fpath, 0o2002);
      fileio.writeSync(fd, text);
      fileio.fdatasync(fd, function (err) {
        let num = fileio.readSync(fd, new ArrayBuffer(4096), { position: 0 });
        expect(num == FILE_CONTENT.length + text.length).assertTrue();
        fileio.closeSync(fd);
        fileio.unlinkSync(fpath);
        done();
      });
    } catch (e) {
      console.info('fileio_test_fdatasync_async_000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_FDATASYNC_ASYNC_0100
   * @tc.name fileio_test_fdatasync_async_001
   * @tc.desc Test fdatasync() interfaces, return in promise mode. Test file content data synchronization.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_fdatasync_async_001', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_fdatasync_async_001');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let text = 'hello';

    try {
      let fd = fileio.openSync(fpath, 0o2002);
      fileio.writeSync(fd, text);
      await fileio.fdatasync(fd);
      let num = fileio.readSync(fd, new ArrayBuffer(4096), { position: 0 });
      expect(num == FILE_CONTENT.length + text.length).assertTrue();
      fileio.closeSync(fd);
      fileio.unlinkSync(fpath);
      done();
    } catch (e) {
      console.info('fileio_test_fdatasync_async_001 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_FDATASYNC_ASYNC_0200
   * @tc.name fileio_test_fdatasync_async_002
   * @tc.desc Test fdatasync() interfaces.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_fdatasync_async_002', 0, async function (done) {
    try {
      await fileio.fdatasync(-1);
    } catch (e) {
      console.info('fileio_test_fdatasync_async_002 has failed for ' + e);
      expect(e.message == 'Bad file descriptor').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_FDATASYNC_ASYNC_0300
   * @tc.name fileio_test_fdatasync_async_003
   * @tc.desc Test fdatasync() interfaces. Number of arguments unmatched.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_fdatasync_async_003', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_fdatasync_async_003');
    try {
      let fd = fileio.openSync(fpath, 0o102, 0o666);
      fileio.fdatasync(fd, '', function (err) {
      });
    } catch (e) {
      console.info('fileio_test_fdatasync_async_003 has failed for ' + e);
      expect(e.message == 'Number of arguments unmatched').assertTrue();
      fileio.unlinkSync(fpath);
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_FDATASYNC_ASYNC_0400
   * @tc.name fileio_test_fdatasync_async_004
   * @tc.desc Test fdatasync() interfaces. Invalid fd.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_fdatasync_async_004', 0, async function (done) {
    try {
      await fileio.fdatasync('');
    } catch (e) {
      console.info('fileio_test_fdatasync_async_004 has failed for ' + e);
      expect(e.message == 'Invalid fd').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_FDATASYNC_SYNC_0000
   * @tc.name fileio_test_fdatasync_sync_000
   * @tc.desc Test fdatasyncSync() interfaces. Test file content data synchronization.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_fdatasync_sync_000', 0, async function () {
    let fpath = await nextFileName('fileio_test_fdatasync_sync_000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let text = 'hello';

    try {
      let fd = fileio.openSync(fpath, 0o2002);
      fileio.writeSync(fd, text);
      fileio.fdatasyncSync(fd);
      let num = fileio.readSync(fd, new ArrayBuffer(4096), { position: 0 });
      expect(num == FILE_CONTENT.length + text.length).assertTrue();
      fileio.closeSync(fd);
      fileio.unlinkSync(fpath);
    } catch (e) {
      console.info('fileio_test_fdatasync_sync_000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_FDATASYNC_SYNC_0100
   * @tc.name fileio_test_fdatasync_sync_001
   * @tc.desc Test fdatasyncSync() interfaces.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_fdatasync_sync_001', 0, async function () {
    try {
      fileio.fdatasyncSync(-1);
    } catch (e) {
      console.info('fileio_test_fdatasync_sync_001 has failed for ' + e);
      expect(e.message == 'Bad file descriptor').assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_FDATASYNC_SYNC_0200
   * @tc.name fileio_test_fdatasync_sync_002
   * @tc.desc Test fdatasyncSync() interfaces.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
   it('fileio_test_fdatasync_sync_002', 0, async function () {
    try {
      fileio.fdatasyncSync('');
    } catch (e) {
      console.info('fileio_test_fdatasync_sync_002 has failed for ' + e);
      expect(e.message == 'Invalid fd').assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_FDATASYNC_SYNC_0300
   * @tc.name fileio_test_fdatasync_sync_003
   * @tc.desc Test fdatasyncSync() interfaces.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
   it('fileio_test_fdatasync_sync_003', 0, async function () {
    try {
      fileio.fdatasyncSync();
    } catch (e) {
      console.info('fileio_test_fdatasync_sync_003 has failed for ' + e);
      expect(e.message == 'Number of arguments unmatched').assertTrue();
    }
  });
});
