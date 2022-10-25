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

import {
    fileio, fileIO, FILE_CONTENT, prepareFile, nextFileName, isIntNum,
    describe, it, expect,
  } from '../../Common';
  
  export default function fileIOOpen() {
  describe('fileIO_fs_open_file', function () {

  /**
   * @tc.number SUB_DF_FILEIO_OPENIO_SYNC_0000
   * @tc.name fileIO_open_sync_000
   * @tc.desc Test openSync() interfaces. mode=0o2.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_sync_000', 0, async function () {
    let fpath = await nextFileName('fileIO_open_sync_000');

      try {
        let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
        expect(isIntNum(file.fd)).assertTrue();
        expect(fileio.closeSync(file.fd) == null).assertTrue();
        expect(fileio.unlinkSync(fpath) == null).assertTrue();
      } catch (e) {
        console.log('fileIO_open_sync_000 has failed for ' + e.message + ', code: ' + e.code);
        expect(null).assertFail();
      }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPENIO_SYNC_0010
   * @tc.name fileIO_open_sync_001
   * @tc.desc Test openSync() interfaces. Missing Parameter.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_sync_001', 0, function () {
      try {
        fileIO.openSync();
        expect(null).assertFail();
      } catch (e) {
        console.log('fileIO_open_sync_001 has failed for ' + e.message + ', code: ' + e.code);
        expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue;
      }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPENIO_SYNC_0020
   * @tc.name fileIO_open_sync_002
   * @tc.desc Test openSync() interfaces. mode=0o102.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_sync_002', 0, async function () {
    let fpath = await nextFileName('fileIO_open_sync_002');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = fileIO.openSync(fpath, fileIO.OpenMode.CREATE | fileIO.OpenMode.READ_WRITE);
      expect(isIntNum(file.fd)).assertTrue();
      expect(fileio.closeSync(file.fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileIO_open_sync_002 has failed for ' + e.message + ', code: ' + e.code);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPENIO_SYNC_0030
   * @tc.name fileIO_open_sync_003
   * @tc.desc Test openSync() interfaces. mode=0o1002.
   * If the file exists and the file is opened for write-only or read-write, trim its length to zero.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_sync_003', 0, async function () {
    let fpath = await nextFileName('fileIO_open_sync_003');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = fileIO.openSync(fpath, fileIO.OpenMode.TRUNC | fileIO.OpenMode.READ_WRITE);
      expect(isIntNum(file.fd)).assertTrue();
      let number = fileio.readSync(file.fd, new ArrayBuffer(4096));
      expect(number == 0).assertTrue();
      expect(fileio.closeSync(file.fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileIO_open_sync_003 has failed for ' + e.message + ', code: ' + e.code);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPENIO_SYNC_0040
   * @tc.name fileIO_open_sync_004
   * @tc.desc Test openSync() interfaces. mode=0o2002.
   * Open as append, subsequent writes will append to the end of the file.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_sync_004', 0, async function () {
    let fpath = await nextFileName('fileIO_open_sync_004');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = fileIO.openSync(fpath, fileIO.OpenMode.APPEND | fileIO.OpenMode.READ_WRITE);
      expect(isIntNum(file.fd)).assertTrue();
      let length = 100;
      let num = fileIO.writeSync(file.fd, new ArrayBuffer(length));
      expect(num == length).assertTrue();
      let number = fileio.readSync(file.fd, new ArrayBuffer(4096), { position: 0 });
      expect(number == length + FILE_CONTENT.length).assertTrue();
      expect(fileio.closeSync(file.fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileIO_open_sync_004 has failed for ' + e.message + ', code: ' + e.code);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPENIO_SYNC_0050
   * @tc.name fileIO_open_sync_005
   * @tc.desc Test openSync() interfaces. mode=0o4002.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_sync_005', 0, async function () {
    let fpath = await nextFileName('fileIO_open_sync_005');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = fileIO.openSync(fpath, fileIO.OpenMode.NONBLOCK | fileIO.OpenMode.READ_WRITE);
      expect(isIntNum(file.fd)).assertTrue();
      expect(fileio.closeSync(file.fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileIO_open_sync_005 has failed for ' + e.message + ', code: ' + e.code);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPENIO_SYNC_0060
   * @tc.name fileIO_open_sync_006
   * @tc.desc Test openSync() interfaces. mode=0o200000.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_sync_006', 0, async function () {
    let dpath = await nextFileName('fileIO_open_sync_006');
    fileio.mkdirSync(dpath);

    try {
      let file = fileIO.openSync(dpath, fileIO.OpenMode.DIR);
      expect(isIntNum(file.fd)).assertTrue();
      fileio.rmdirSync(dpath);
    } catch (e) {
      console.log('fileIO_open_sync_006 has failed for ' + e.message + ', code: ' + e.code);
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPENIO_SYNC_0070
   * @tc.name fileIO_open_sync_007
   * @tc.desc Test openSync() interfaces. mode=0o200000. Not a directory.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
   it('fileIO_open_sync_007', 0, async function () {
    let fpath = await nextFileName('fileIO_open_sync_007');
    expect(prepareFile(fpath, '')).assertTrue();

    try {
      fileIO.openSync(fpath, fileIO.OpenMode.DIR);
      expect(null).assertFail();
    } catch (e) {
      console.log('fileIO_open_sync_007 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900002 && e.message == 'No such file or directory').assertTrue;
      fileio.unlinkSync(fpath);
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPENIO_SYNC_0080
   * @tc.name fileIO_open_sync_008
   * @tc.desc Test openSync() interfaces. mode=0o200000. Invalid filepath.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_sync_008', 0, async function () {
    let dpath = await nextFileName('fileIO_open_sync_008') + 'aaa';
    fileio.mkdirSync(dpath);

    try {
      fileIO.openSync(dpath, fileIO.OpenMode.DIR);
      expect(null).assertFail();
    } catch (e) {
      console.log('fileIO_open_sync_008 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900002 && e.message == 'No such file or directory').assertTrue;
      fileio.rmdirSync(dpath);
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPENIO_SYNC_0090
   * @tc.name fileIO_open_sync_009
   * @tc.desc Test openSync() interfaces. mode=0o400002.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_sync_009', 0, async function () {
    let fpath = await nextFileName('fileIO_open_sync_009');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = fileIO.openSync(fpath, fileIO.OpenMode.NOFOLLOW | fileIO.OpenMode.READ_WRITE);
      expect(isIntNum(file.fd)).assertTrue();
      expect(fileio.closeSync(file.fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileIO_open_sync_009 has failed for ' + e.message + ', code: ' + e.code);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPENIO_SYNC_0100
   * @tc.name fileIO_open_sync_010
   * @tc.desc Test openSync() interfaces. mode=0o400002. Symbolic link loop.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
   it('fileIO_open_sync_010', 0, async function () {
    let fpath = await nextFileName('fileIO_open_sync_010');
    let ffpath = fpath + 'aaaa';
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileio.symlinkSync(fpath, ffpath);
      fileIO.openSync(ffpath, fileIO.OpenMode.NOFOLLOW | fileIO.OpenMode.READ_WRITE);
      expect(null).assertFail();
    } catch (e) {
      console.log('fileIO_open_sync_010 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900033 && e.message == 'Too many symbolic links encountered').assertTrue;
      fileio.unlinkSync(fpath);
      fileio.unlinkSync(ffpath);
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPENIO_SYNC_0110
   * @tc.name fileIO_open_sync_011
   * @tc.desc Test openSync() interfaces. mode=0o4010002.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_sync_011', 0, async function () {
    let fpath = await nextFileName('fileIO_open_sync_011');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = fileIO.openSync(fpath, fileIO.OpenMode.SYNC | fileIO.OpenMode.READ_WRITE);
      expect(isIntNum(file.fd)).assertTrue();
      expect(fileio.closeSync(file.fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileIO_open_sync_011 has failed for ' + e.message + ', code: ' + e.code);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPEN_FILE_ASYNC_0000
   * @tc.name fileIO_open_async_000
   * @tc.desc Test open() interfaces. mode=0o102. Promise.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_async_000', 0, async function (done) {
    let fpath = await nextFileName('fileIO_open_async_000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = await fileIO.open(fpath, 0o102);
      expect(isIntNum(file.fd)).assertTrue();
      expect(fileio.closeSync(file.fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileIO_open_async_000 has failed for ' + e.message + ', code: ' + e.code);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPENIO_ASYNC_0010
   * @tc.name fileIO_open_async_001
   * @tc.desc Test open() interfaces. Invalid fp.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_async_001', 0, function (done) {
    try {
      fileIO.open(-1, fileIO.OpenMode.READ_ONLY);
    } catch (e) {
      console.log('fileIO_open_async_001 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue;
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPEN_FILE_ASYNC_0020
   * @tc.name fileIO_open_async_002
   * @tc.desc Test open() interfaces. mode=0o2. No such file.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_async_002', 0, async function (done) {
    let fpath = await nextFileName('fileIO_open_async_002');

    try {
      await fileIO.open(fpath, 0o2);
    } catch (e) {
      console.log('fileIO_open_async_002 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900002 && e.message == 'No such file or directory').assertTrue;
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPEN_FILE_ASYNC_0030
   * @tc.name fileIO_open_async_003
   * @tc.desc Test open() interfaces. mode=0o1002.
   * If the file exists and the file is opened for write-only or read-write, trim its length to zero.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_async_003', 0, async function (done) {
    let fpath = await nextFileName('fileIO_open_async_003');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = await fileIO.open(fpath, fileIO.OpenMode.TRUNC | fileIO.OpenMode.READ_WRITE);
      expect(isIntNum(file.fd)).assertTrue();
      let number = fileio.readSync(file.fd, new ArrayBuffer(4096));
      expect(number == 0).assertTrue();
      expect(fileio.closeSync(file.fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileIO_open_async_003 has failed for ' + e.message + ', code: ' + e.code);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPEN_FILE_ASYNC_0040
   * @tc.name fileIO_open_async_004
   * @tc.desc Test open() interfaces. mode=0o2002.
   * Open as append, subsequent writes will append to the end of the file.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_async_004', 0, async function (done) {
    let fpath = await nextFileName('fileIO_open_async_004');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = await fileIO.open(fpath, fileIO.OpenMode.APPEND | fileIO.OpenMode.READ_WRITE);
      expect(isIntNum(file.fd)).assertTrue();
      let length = 100;
      let num = fileIO.writeSync(file.fd, new ArrayBuffer(length));
      expect(num == length).assertTrue();
      let number = fileio.readSync(file.fd, new ArrayBuffer(4096), { position: 0 });
      expect(number == length + FILE_CONTENT.length).assertTrue();
      expect(fileio.closeSync(file.fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileIO_open_async_004 has failed for ' + e.message + ', code: ' + e.code);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPEN_ASYNC_0050
   * @tc.name fileIO_open_async_005
   * @tc.desc Test open() interfaces. mode=0o4002.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_async_005', 0, async function (done) {
    let fpath = await nextFileName('fileIO_open_async_005');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = await fileIO.open(fpath, fileIO.OpenMode.NONBLOCK | fileIO.OpenMode.READ_WRITE);
      expect(isIntNum(file.fd)).assertTrue();
      expect(fileio.closeSync(file.fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileIO_open_async_005 has failed for ' + e.message + ', code: ' + e.code);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPEN_FILE_ASYNC_0060
   * @tc.name fileIO_open_async_006
   * @tc.desc Test open() interfaces. mode=0o200000.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_async_006', 0, async function (done) {
    let dpath = await nextFileName('fileIO_open_async_006');
    fileio.mkdirSync(dpath);

    try {
      let file = await fileIO.open(dpath, fileIO.OpenMode.DIR | fileIO.OpenMode.READ_WRITE);
      expect(isIntNum(file.fd)).assertTrue();
      fileio.rmdirSync(dpath);
      done();
    } catch (e) {
      console.log('fileIO_open_async_006 has failed for ' + e.message + ', code: ' + e.code);
    }
  });


  /**
   * @tc.number SUB_DF_FILEIO_OPEN_FILE_ASYNC_0070
   * @tc.name fileIO_open_async_007
   * @tc.desc Test open() interfaces. mode=0o200000. Not a directory.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
   it('fileIO_open_async_007', 0, async function (done) {
    let fpath = await nextFileName('fileIO_open_async_007');
    expect(prepareFile(fpath, '')).assertTrue();

    try {
      await fileIO.open(fpath, fileIO.OpenMode.DIR | fileIO.OpenMode.READ_WRITE);
    } catch (e) {
      console.log('fileIO_open_async_007 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900002 && e.message == 'No such file or directory').assertTrue;
      fileio.unlinkSync(fpath);
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPEN_FILE_ASYNC_0080
   * @tc.name fileIO_open_async_008
   * @tc.desc Test open() interfaces. mode=0o200000. Invalid filepath.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
 it('fileIO_open_async_008', 0, async function (done) {
  let dpath = await nextFileName('fileIO_open_async_008') + 'bbb';
  fileio.mkdirSync(dpath);

  try {
    fileIO.openSync(dpath, fileIO.OpenMode.DIR);
  } catch (e) {
    console.log('fileIO_open_async_008 has failed for ' + e.message + ', code: ' + e.code);
    expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue;
    fileio.rmdirSync(dpath);
    done();
  }
});

  /**
   * @tc.number SUB_DF_FILEIO_OPEN_FILE_ASYNC_0090
   * @tc.name fileIO_open_async_009
   * @tc.desc Test open() interfaces. mode=0o400002.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_async_009', 0, async function (done) {
    let fpath = await nextFileName('fileIO_open_async_009');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = await fileIO.open(fpath, fileIO.OpenMode.NOFOLLOW | fileIO.OpenMode.READ_WRITE);
      expect(isIntNum(file.fd)).assertTrue();
      expect(fileio.closeSync(file.fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileIO_open_async_009 has failed for ' + e.message + ', code: ' + e.code);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPEN_FILE_ASYNC_0100
   * @tc.name fileIO_open_async_010
   * @tc.desc Test open() interfaces. mode=0o400002. Symbolic link loop.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
   it('fileIO_open_async_010', 0, async function (done) {
    let fpath = await nextFileName('fileIO_open_async_010');
    let ffpath = fpath + 'aaaa';
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileio.symlinkSync(fpath, ffpath);
      await fileIO.open(ffpath, fileIO.OpenMode.NOFOLLOW | fileIO.OpenMode.READ_WRITE);
    } catch (e) {
      console.log('fileIO_open_async_010 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900033 && e.message == 'Too many symbolic links encountered').assertTrue;
      fileio.unlinkSync(fpath);
      fileio.unlinkSync(ffpath);
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPEN_FILE_ASYNC_0110
   * @tc.name fileIO_open_async_011
   * @tc.desc Test open() interfaces. mode=0o4010002.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_async_011', 0, async function (done) {
    let fpath = await nextFileName('fileIO_open_async_011');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileIO.open(fpath, fileIO.OpenMode.SYNC | fileIO.OpenMode.READ_WRITE, function(err, file) {
        expect(isIntNum(file.fd)).assertTrue();
        expect(fileio.closeSync(file.fd) == null).assertTrue();
        expect(fileio.unlinkSync(fpath) == null).assertTrue();
        done();
      });
    } catch (err) {
      console.log('fileIO_open_async_011 has failed for ' + err.message + ', code: ' + err.code);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPENIO_ASYNC_0120
   * @tc.name fileIO_open_async_012
   * @tc.desc Test open() interfaces. mode=0o102. Callback.
   * @tc.size MEDIUM
   * @tc.type Functoin
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_open_async_012', 0, async function (done) {
    let fpath = await nextFileName('fileIO_open_async_012');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileIO.open(fpath, fileIO.OpenMode.CREATE | fileIO.OpenMode.READ_WRITE, function (err, file) {
        expect(isIntNum(file.fd)).assertTrue();
        expect(fileio.closeSync(file.fd) == null).assertTrue();
        expect(fileio.unlinkSync(fpath) == null).assertTrue();
        done();
      });
    } catch (e) {
      console.log('fileIO_open_async_012 has failed for ' + e.message + ', code: ' + e.code);
      expect(null).assertFail();
    }
  });
});
}
