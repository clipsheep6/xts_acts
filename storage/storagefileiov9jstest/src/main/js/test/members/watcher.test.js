/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import fileio from '@ohos.fileio';
import {
  fileIO, FILE_CONTENT, prepareFile, sleep, nextFileName,
  describe, it, expect,
} from '../Common';

  const WAIT_ONE_SECOND = 1000;
  const watcherEvent = {
    'IN_ACCESS': 0x00000001,
    'IN_MODIFY': 0x00000002,
    'IN_ATTRIB': 0x00000004,
    'IN_CLOSE_WRITE': 0x00000008,
    'IN_CLOSE_NOWRITE': 0x00000010,
    'IN_OPEN': 0x00000020,
    'IN_MOVED_FROM': 0x00000040,
    'IN_MOVED_TO': 0x00000080,
    'IN_CREATE': 0x00000100,
    'IN_DELETE': 0x00000200,
    'IN_DELETE_SELF': 0x00000400,
    'IN_MOVE_SELF': 0x00000800,
    'IN_ISDIR': 0x40000000
  }

  function startWatcher(testNum, eventCode, watchPath) {
    let ret = {
      flag: false,
      watcher: {}
    }
    try {
    ret.watcher = fileIO.createWatcher(watchPath, eventCode, (data) => {
      console.log(`${testNum} :{event: ${data.event}, fileName: ${data.fileName}, cookie: ${data.cookie}}`);
        if (eventCode === data.event) {
          ret.flag = true;
        }
      });
    } catch (e) {
      console.log(testNum + '-startWatcher failed for ' + e.message + ', code: ' + e.code);
    }
    ret.watcher.start();
    return ret;
  }

export default function fileIOWatcher() {
  describe('fileIO_test_watcher', function () {
  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_0000
   * @tc.name fileIO_test_watcher_000
   * @tc.desc Test watcher event '0x00000001': 'IN_ACCESS'
   *    read a file, verifying the event is 'IN_ACCESS'.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_test_watcher_000', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_000';
    let dpath = await nextFileName(testNum);
    let fpath = dpath + '/file_000.txt';
    fileIO.mkdirSync(dpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
      let resWatcher = startWatcher(testNum, watcherEvent.IN_ACCESS, dpath);
      fileIO.readSync(file.fd, new ArrayBuffer(4096));
      await sleep(WAIT_ONE_SECOND);
      expect(resWatcher.flag == true).assertTrue();
      resWatcher.watcher.stop();
      fileIO.closeSync(file);
      fileIO.rmdirSync(dpath);
      done();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_0100
   * @tc.name fileIO_test_watcher_001
   * @tc.desc Test watcher event '0x00000002': 'IN_MODIFY'
   *    write a file, verifying the event is 'IN_MODIFY'.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_test_watcher_001', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_001';
    let dpath = await nextFileName(testNum);
    let fpath = dpath + '/file_001.txt';
    fileIO.mkdirSync(dpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
      let resWatcher = startWatcher(testNum, watcherEvent.IN_MODIFY, dpath);
      fileIO.writeSync(file.fd, FILE_CONTENT);
      await sleep(WAIT_ONE_SECOND);
      expect(resWatcher.flag == true).assertTrue();
      resWatcher.watcher.stop();
      fileIO.closeSync(file);
      fileIO.rmdirSync(dpath);
      done();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_0200
   * @tc.name fileIO_test_watcher_002
   * @tc.desc Test watcher event '0x00000004': 'IN_ATTRIB'
   *    chmod a file, verifying the event is 'IN_ATTRIB'.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_test_watcher_002', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_002';
    let dpath = await nextFileName(testNum);
    let fpath = dpath + '/file_002.txt';
    fileIO.mkdirSync(dpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
      let resWatcher = startWatcher(testNum, watcherEvent.IN_ATTRIB, dpath);
      fileio.fchmodSync(file.fd, 0o444);
      await sleep(WAIT_ONE_SECOND);
      expect(resWatcher.flag == true).assertTrue();
      resWatcher.watcher.stop();
      fileIO.closeSync(file);
      fileIO.rmdirSync(dpath);
      done();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_0300
   * @tc.name fileIO_test_watcher_003
   * @tc.desc Test watcher event '0x00000008': 'IN_CLOSE_WRITE'
   *    open a file on read_write mode and then close the file.fd, verifying the event is 'IN_CLOSE_WRITE'.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_test_watcher_003', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_003';
    let dpath = await nextFileName(testNum);
    let fpath = dpath + '/file_003.txt';
    fileIO.mkdirSync(dpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
      let resWatcher = startWatcher(testNum, watcherEvent.IN_CLOSE_WRITE, dpath);
      fileIO.closeSync(file.fd);
      await sleep(WAIT_ONE_SECOND);
      expect(resWatcher.flag == true).assertTrue();
      resWatcher.watcher.stop();
      fileIO.rmdirSync(dpath);
      done();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_0400
   * @tc.name fileIO_test_watcher_004
   * @tc.desc Test watcher event '0x00000010': 'IN_CLOSE_NOWRITE'
   *    open a file on read only mode and then close the file.fd, verifying the event is 'IN_CLOSE_NOWRITE'.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_test_watcher_004', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_004';
    let dpath = await nextFileName(testNum);
    let fpath = dpath + '/file_004.txt';
    fileIO.mkdirSync(dpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
      let resWatcher = startWatcher(testNum, watcherEvent.IN_CLOSE_NOWRITE, dpath);
      fileIO.closeSync(file.fd);
      await sleep(WAIT_ONE_SECOND);
      expect(resWatcher.flag == true).assertTrue();
      resWatcher.watcher.stop();
      fileIO.rmdirSync(dpath);
      done();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_0500
   * @tc.name fileIO_test_watcher_005
   * @tc.desc Test watcher event '0x00000020': 'IN_OPEN'
   *    open a file on only read mode, verifying the event is 'IN_OPEN'.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_test_watcher_005', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_005';
    let dpath = await nextFileName(testNum);
    let fpath = dpath + '/file_005.txt';
    fileIO.mkdirSync(dpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let resWatcher = startWatcher(testNum, watcherEvent.IN_OPEN, dpath);
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_ONLY);
      await sleep(WAIT_ONE_SECOND);
      expect(resWatcher.flag == true).assertTrue();
      resWatcher.watcher.stop();
      fileIO.closeSync(file);
      fileIO.rmdirSync(dpath);
      done();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_0600
   * @tc.name fileIO_test_watcher_006
   * @tc.desc Test watcher event '0x00000040': 'IN_MOVED_FROM', '0x00000080': 'IN_MOVED_TO',
   *    rename a file, verifying the event is 'IN_MOVED_FROM' and 'IN_MOVED_TO'.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_test_watcher_006', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_006';
    let dpath = await nextFileName(testNum);
    let fpath = dpath + '/file_006.txt';
    fileIO.mkdirSync(dpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let watcherFrom = 0;
      let watcherTo = 0;
      let watcher = fileIO.createWatcher(dpath, watcherEvent.IN_MOVED_FROM | watcherEvent.IN_MOVED_TO, (data) => {
        console.log(`${testNum} :{event: ${data.event}, fileName: ${data.fileName}, cookie: ${data.cookie}}`);
        if (watcherEvent.IN_MOVED_FROM === data.event) {
          watcherFrom = data.cookie;
        }
        if (watcherEvent.IN_MOVED_TO === data.event) {
          watcherTo = data.cookie;
        }
      });
      watcher.start();
      fileIO.renameSync(fpath, fpath + 'newf');
      await sleep(WAIT_ONE_SECOND);
      expect(watcherFrom == watcherTo).assertTrue();
      watcher.stop();
      fileIO.rmdirSync(dpath);
      done();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_0700
   * @tc.name fileIO_test_watcher_007
   * @tc.desc Test watcher event '0x00000100': 'IN_CREATE'
   *    open a nonexistent file on create mode, verifying the event is 'IN_CREATE'.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_test_watcher_007', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_007';
    let dpath = await nextFileName(testNum);
    let fpath = dpath + '/file_007.txt';
    fileIO.mkdirSync(dpath);

    try {
      let resWatcher = startWatcher(testNum, watcherEvent.IN_CREATE, dpath);
      let file = fileIO.openSync(fpath, fileIO.OpenMode.CREATE);
      await sleep(WAIT_ONE_SECOND);
      expect(resWatcher.flag == true).assertTrue();
      resWatcher.watcher.stop();
      fileIO.closeSync(file);
      fileIO.rmdirSync(dpath);
      done();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_0800
   * @tc.name fileIO_test_watcher_008
   * @tc.desc Test watcher event '0x00000100': 'IN_CREATE'
   *    open a nonexistent folder on create mode, verifying the event is 'IN_ISDIR | IN_CREATE'.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_test_watcher_008', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_008';
    let dpath = await nextFileName(testNum);
    let ddpath = dpath + '/dir_008';
    fileIO.mkdirSync(dpath);

    try {
      let flag = false;
      let watcher = fileIO.createWatcher(dpath, watcherEvent.IN_CREATE, (data) => {
        console.log(`${testNum} :{event: ${data.event}, fileName: ${data.fileName}, cookie: ${data.cookie}}`);
        if ((watcherEvent.IN_ISDIR | watcherEvent.IN_CREATE) === data.event) {
          flag = true;
        }
      });
      watcher.start();
      fileIO.mkdirSync(ddpath);
      await sleep(WAIT_ONE_SECOND);
      expect(flag == true).assertTrue();
      watcher.stop();
      fileIO.rmdirSync(dpath);
      done();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_0900
   * @tc.name fileIO_test_watcher_009
   * @tc.desc Test watcher event '0x00000200': 'IN_DELETE'
   *    delete a file , verifying the event is 'IN_DELETE'.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_test_watcher_009', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_009';
    let dpath = await nextFileName(testNum);
    let fpath = dpath + '/file_009.txt';
    fileIO.mkdirSync(dpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let resWatcher = startWatcher(testNum, watcherEvent.IN_DELETE, dpath);
      fileIO.unlinkSync(fpath);
      await sleep(WAIT_ONE_SECOND);
      expect(resWatcher.flag == true).assertTrue();
      resWatcher.watcher.stop();
      fileIO.rmdirSync(dpath);
      done();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_1000
   * @tc.name fileIO_test_watcher_010
   * @tc.desc Test watcher event '0x00000200': 'IN_DELETE'
   *    delete a file , verifying the event is 'IN_ISDIR | IN_DELETE'.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_test_watcher_010', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_010';
    let dpath = await nextFileName(testNum);
    let ddpath = dpath + '/dir_010';
    fileIO.mkdirSync(dpath);
    fileIO.mkdirSync(ddpath);

    try {
      let flag = false;
      let watcher = fileIO.createWatcher(dpath, watcherEvent.IN_DELETE, (data) => {
        console.log(`${testNum} :{event: ${data.event}, fileName: ${data.fileName}, cookie: ${data.cookie}}`);
        if ((watcherEvent.IN_ISDIR | watcherEvent.IN_DELETE) === data.event) {
          flag = true;
        }
      });
      watcher.start();
      fileIO.rmdirSync(ddpath);
      await sleep(WAIT_ONE_SECOND);
      expect(flag == true).assertTrue();
      watcher.stop();
      fileIO.rmdirSync(dpath);
      done();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_1100
   * @tc.name fileIO_test_watcher_011
   * @tc.desc Test watcher event '0x00000400': 'IN_DELETE_SELF'
   *    delete watcher folder , verifying the event is 'IN_DELETE_SELF'.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_test_watcher_011', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_011';
    let dpath = await nextFileName(testNum);
    fileIO.mkdirSync(dpath);

    try {
      let resWatcher = startWatcher(testNum, watcherEvent.IN_DELETE_SELF, dpath);
      fileIO.rmdirSync(dpath);
      await sleep(WAIT_ONE_SECOND);
      expect(resWatcher.flag == true).assertTrue();
      resWatcher.watcher.stop();
      done();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_1200
   * @tc.name fileIO_test_watcher_012
   * @tc.desc Test watcher event '0x00000800': 'IN_MOVE_SELF'
   *    rename watcher folder , verifying the event is 'IN_MOVE_SELF'.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_test_watcher_012', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_012';
    let dpath = await nextFileName(testNum);
    fileIO.mkdirSync(dpath);

    try {
      let resWatcher = startWatcher(testNum, watcherEvent.IN_MOVE_SELF, dpath);
      fileIO.renameSync(dpath, dpath + 'newd');
      await sleep(WAIT_ONE_SECOND);
      expect(resWatcher.flag == true).assertTrue();
      resWatcher.watcher.stop();
      fileIO.rmdirSync(dpath + 'newd');
      done();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_1300
   * @tc.name fileIO_test_watcher_013
   * @tc.desc Test watcher event '0x00000800': 'IN_MOVE_SELF'
   *    rename watcher file , verifying the event is 'IN_MOVE_SELF'.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_watcher_013', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_013';
    let fpath = await nextFileName(testNum);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let resWatcher = startWatcher(testNum, watcherEvent.IN_MOVE_SELF, fpath);
      fileIO.renameSync(fpath, fpath + 'newd');
      await sleep(WAIT_ONE_SECOND);
      expect(resWatcher.flag == true).assertTrue();
      resWatcher.watcher.stop();
      fileIO.unlinkSync(fpath + 'newd');
      done();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_1400
   * @tc.name fileIO_test_watcher_014
   * @tc.desc The path point to nothing, no such file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_watcher_014', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_014';
    let fpath = await nextFileName(testNum);

    try {
      let watcher = fileIO.createWatcher(fpath, watcherEvent.IN_ACCESS, (data) => {});
      watcher.start();
      expect(false).assertTrue();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900002 && e.message == 'No such file or directory').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_1500
   * @tc.name fileIO_test_watcher_015
   * @tc.desc Test Invalid parameter, events = string.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_watcher_015', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_015';
    let fpath = await nextFileName(testNum);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    const invalidEvent = 'invalid_event';

    try {
      fileIO.createWatcher(fpath, invalidEvent, (data) => {});
      expect(false).assertTrue();
    } catch (e) {
      fileIO.unlinkSync(fpath);
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_1600
   * @tc.name fileIO_test_watcher_016
   * @tc.desc Test Invalid parameter, put a parameter in watcher.start.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_watcher_016', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_016';
    let fpath = await nextFileName(testNum);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let watcher = fileIO.createWatcher(fpath, watcherEvent.IN_ACCESS, (data) => {});
      watcher.start(-1);
      expect(false).assertTrue();
    } catch (e) {
      fileIO.unlinkSync(fpath);
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_1700
   * @tc.name fileIO_test_watcher_017
   * @tc.desc Test Invalid parameter, put a parameter in watcher.stop.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_watcher_017', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_017';
    let fpath = await nextFileName(testNum);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let watcher;

    try {
      watcher = fileIO.createWatcher(fpath, watcherEvent.IN_ACCESS, (data) => {});
      watcher.start();
      watcher.stop(-1);
      expect(false).assertTrue();
    } catch (e) {
      watcher.stop();
      fileIO.unlinkSync(fpath);
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_1800
   * @tc.name fileIO_test_watcher_018
   * @tc.desc No watcher started.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_watcher_018', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_018';
    let fpath = await nextFileName(testNum);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let watcher = fileIO.createWatcher(fpath, watcherEvent.IN_ACCESS, (data) => {});
      watcher.stop();
      expect(false).assertTrue();
    } catch (e) {
      fileIO.unlinkSync(fpath);
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_1900
   * @tc.name fileIO_test_watcher_019
   * @tc.desc Test Invalid parameter, callback = object.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_watcher_019', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_019';
    let fpath = await nextFileName(testNum);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    const invalidListener = {};

    try {
      fileIO.createWatcher(fpath, watcherEvent.IN_OPEN, invalidListener);
      expect(false).assertTrue();
    } catch (e) {
      fileIO.unlinkSync(fpath);
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_2000
   * @tc.name fileIO_test_watcher_020
   * @tc.desc Test Invalid parameter, events = -1
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_watcher_020', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_020';
    let fpath = await nextFileName(testNum);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    const invalidEvent = -1;

    try {
      let watcher = fileIO.createWatcher(fpath, invalidEvent, (data) => {});
      watcher.start();
      expect(false).assertTrue();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WATCHER_2100
   * @tc.name fileIO_test_watcher_021
   * @tc.desc Missing the third parametor.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_watcher_021', 0, async function (done) {
    let testNum = 'fileIO_test_watcher_021';
    let fpath = await nextFileName(testNum);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileIO.createWatcher(fpath, watcherEvent.IN_OPEN);
      expect(false).assertTrue();
    } catch (e) {
      console.log(testNum + ' has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
      done();
    }
  });
});
}
