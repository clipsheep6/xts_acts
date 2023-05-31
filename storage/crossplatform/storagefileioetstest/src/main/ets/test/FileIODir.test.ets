import fileio from '@ohos.fileio';
import { describe,it,expect}from '@ohos/hypium'
import {
  FILE_CONTENT,
  prepareFile,
  nextFileName,
  randomString,
  forceRemoveDir
}
  from './Common'

export default function fileIOTestDir() {
describe('fileIOTestDir', function () {

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_OPENSYNC_0000
   * @tc.name fileioTestDirOpenSync000
   * @tc.desc Function of API, opendirSync.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirOpenSync000', 0, async function () {
    let dpath = await nextFileName('fileioTestDirOpenSync000') + 'd'
    try {
      fileio.mkdirSync(dpath);
      let dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      dd.closeSync();
      fileio.rmdirSync(dpath);
    }
    catch (e) {
      console.info('fileioTestDirOpenSync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_OPENSYNC_0100
   * @tc.name fileioTestDirOpenSync001
   * @tc.desc Function of API, not set parameter.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirOpenSync001', 0, function () {
    try {
      fileio.opendirSync();
      throw new Error('No Parameter');
    } 
    catch (e) {
      console.info('fileioTestDirOpenSync001 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_OPENSYNC_0200
   * @tc.name fileioTestDirOpenSync002
   * @tc.desc Function of API, dpath value is not exist.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirOpenSync002', 0, async function () {
    let dpath = await nextFileName('fileioTestDirOpenSync002') + 'd'
    try {
      fileio.opendirSync(dpath);
      expect(null).assertFail();
    }
    catch (e) {
      console.info('fileioTestDirOpenSync002 has failed for ' + e);
      expect(e.message == 'No such file or directory').assertTrue();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_OPENSYNC_0300
   * @tc.name fileioTestDirOpenSync003
   * @tc.desc Function of API, dpath too long.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirOpenSync003', 0, async function () {
    let dpath = await nextFileName('fileioTestDirOpenSync003');
    fileio.mkdirSync(dpath);
    try {
      for (let i = 0; i < 16; i++) {
        console.info('time' + i);
        dpath = dpath + '/d' + i;
        fileio.mkdirSync(dpath);
      }
      throw new Error('dpath too long');
    }
    catch (e) {
      console.info('fileioTestDirOpenSync003 has failed for ' + e);
      forceRemoveDir(dpath, 16);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_OPENSYNC_0400
   * @tc.name fileioTestDirOpenSync004
   * @tc.desc Function of API, filename too long.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirOpenSync004', 0, async function () {
    let dpath = await nextFileName(randomString(256));
    try {
      fileio.mkdirSync(dpath);
      expect(null).assertFail();
    }
    catch (e) {
      console.info('fileioTestDirOpenSync004 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_OPENSYNC_0500
   * @tc.name fileioTestDirOpenSync005
   * @tc.desc Function of API, uri dir too many layers.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirOpenSync005', 0, async function () {
    let dpath = await nextFileName('fileioTestDirOpenSync005');
    fileio.mkdirSync(dpath);
    try {
      for (let i = 0; i < 113; i++) {
        console.info('time' + i);
        dpath = dpath + '/d' + i
        fileio.mkdirSync(dpath);
      }
      throw new Error('dir too many layers');
    }
    catch (e) {
      console.info('fileioTestDirOpenSync005 has failed for ' + e);
      forceRemoveDir(dpath, 113);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_OPENSYNC_0600
   * @tc.name fileioTestDirOpenSync006
   * @tc.desc Function of API, file name contain special character.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirOpenSync006', 0, async function () {
    let dpath = await nextFileName('?*:<>/|');
    try {
      fileio.mkdirSync(dpath);
      expect(null).assertFail();
    }
    catch (e) {
      console.info('fileioTestDirOpenSync006 has failed for ' + e);
      expect(e.message == 'No such file or directory').assertTrue();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_OPENASYNC_001
   * @tc.name fileioTestDirOpenAsync001
   * @tc.desc Function of API, file name contain special character.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirOpenAsync001', 0, async function () {
    let dpath = await nextFileName('fileioTestDirOpenAsync001') + 'd'
    fileio.mkdirSync(dpath);
    fileio.opendir(dpath, function (err, dir) {
      expect(dir !== null).assertTrue();
      dir.closeSync();
      fileio.rmdirSync(dpath);
    });
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_OPENASYNC_001
   * @tc.name fileioTestDirOpenAsync001
   * @tc.desc Function of API, file name contain special character.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirOpenAsync002', 0, async function () {
    let dpath = await nextFileName('fileioTestDirOpenAsync002') + 'd'
    fileio.mkdirSync(dpath);
    fileio.opendir(dpath).then((dir)=> {
      expect(dir !== null).assertTrue();
      dir.closeSync();
      fileio.rmdirSync(dpath);
      console.info('fileio opendir Success');
    }).catch((err) => {
      console.info("fileio opendir err: "  + JSON.stringify(err));
    });
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_READSYNC_0000
   * @tc.name fileioTestDirReadSync000
   * @tc.desc Function of API, readSync. The dir contains 1 file.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirReadSync000', 0, async function () {
    let dpath = await nextFileName('fileioTestDirReadSync000') + 'd'
    let fpath = dpath + '/f0'
    try {
      fileio.mkdirSync(dpath);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      expect(dd.readSync() !== null).assertTrue();
      dd.closeSync();
      fileio.unlinkSync(fpath);
      fileio.rmdirSync(dpath);
    }
    catch (e) {
      console.info('fileioTestDirReadSync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_READSYNC_0100
   * @tc.name fileioTestDirReadSync001
   * @tc.desc Function of API, readSync. The dir contains more than 1 files.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirReadSync001', 0, async function () {
    let dpath = await nextFileName('fileioTestDirReadSync001') + 'd'
    let fpathArray = new Array(dpath + '/f1', dpath + '/f2', dpath + '/d3');
    try {
      fileio.mkdirSync(dpath);
      for (let i = 0; i < 3; i++) {
        if (i == 2) {
          fileio.mkdirSync(fpathArray[i])
        } else {
          expect(prepareFile(fpathArray[i], FILE_CONTENT)).assertTrue();
        }
      }
      let dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      for (let i = 0; i < 3; i++) {
        let bool = typeof (dd.readSync());
        expect(bool == 'object').assertTrue();
        console.info('---bool=' + bool);
      }
      dd.closeSync();
      for (let i = 0; i < 3; i++) {
        if (i == 2) {
          fileio.rmdirSync(fpathArray[i]);
        } else {
          fileio.unlinkSync(fpathArray[i]);
        }
      }
      fileio.rmdirSync(dpath);
    }
    catch (e) {
      console.info('fileioTestDirReadSync001 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_READSYNC_0200
   * @tc.name fileioTestDirReadSync002
   * @tc.desc Function of API, repeat read. The dir contains more than 1 files.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirReadSync002', 0, async function () {
    let dpath = await nextFileName('fileioTestDirReadSync002') + 'd'
    let fpathArray = new Array(dpath + '/f1', dpath + '/f2', dpath + '/d3');
    try {
      fileio.mkdirSync(dpath)
      for (let i = 0; i < 3; i++) {
        if (i == 2) {
          fileio.mkdirSync(fpathArray[i])
        } else {
          expect(prepareFile(fpathArray[i], FILE_CONTENT)).assertTrue();
        }
      }
      var dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      for (let i = 0; i < 3; i++) {
        expect(dd.readSync() !== null).assertTrue();
      }
      expect(dd.readSync() !== null).assertTrue();
      dd.closeSync();
      for (let i = 0; i < 3; i++) {
        if (i == 2) {
          fileio.rmdirSync(fpathArray[i]);
        } else {
          fileio.unlinkSync(fpathArray[i]);
        }
      }
      fileio.rmdirSync(dpath);
    }
    catch (e) {
      console.info('fileioTestDirReadSync002 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_READSYNC_0300
   * @tc.name fileioTestDirReadSync003
   * @tc.desc Function of API, readSync. The dir no any files.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirReadSync003', 0, async function () {
    let dpath = await nextFileName('fileioTestDirReadSync003') + 'd'
    let dd;
    try {
      fileio.mkdirSync(dpath);
      dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      expect(dd.readSync() !== null).assertTrue();
      dd.closeSync();
      fileio.rmdirSync(dpath);
    }
    catch (e) {
      console.info('fileioTestDirReadSync003 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_READSYNC_0400
   * @tc.name fileioTestDirReadSync004
   * @tc.desc Function of API, error parameter.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirReadSync004', 0, async function () {
    let dpath = await nextFileName('fileioTestDirReadSync004') + 'd'
    let fpath = dpath + '/f1'
    let dd
    try {
      fileio.mkdirSync(dpath);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      expect(dd.readSync(-1) == null).assertTrue();
      expect(null).assertFail();
    }
    catch (e) {
      console.info('fileioTestDirReadSync004 has failed for ' + e);
      expect(e.message == 'Number of arguments unmatched').assertTrue();
      dd.closeSync();
      fileio.unlinkSync(fpath);
      fileio.rmdirSync(dpath);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_READSYNC_0500
   * @tc.name fileioTestDirReadSync005
   * @tc.desc Function of API, excess files.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirReadSync005', 0, async function () {
    let dpath = await nextFileName('fileioTestDirReadSync005') + 'd'
    let fpath = dpath + '/f'
    try {
      fileio.mkdirSync(dpath);
      for (let i = 0; i < 10001; i++) {
        expect(prepareFile(fpath + i, 'test_text')).assertTrue();
      }
      let dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      expect(dd.readSync() !== null).assertTrue();
      dd.closeSync();
      for (let i = 0; i < 10001; i++) {
        fileio.unlinkSync(fpath + i);
      }
      fileio.rmdirSync(dpath);
    }
    catch (e) {
      console.info('fileioTestDirReadSync005 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_CLOSESYNC_0000
   * @tc.name fileioTestDirCloseSync000
   * @tc.desc Function of API, closeSync.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirCloseSync000', 0, async function () {
    let dpath = await nextFileName('fileioTestDirCloseSync000') + 'd'
    try {
      fileio.mkdirSync(dpath);
      let dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      dd.closeSync();
      fileio.rmdirSync(dpath);
    }
    catch (e) {
      console.info('fileioTestDirCloseSync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIR_CLOSESYNC_0100
   * @tc.name fileioTestDirCloseSync001
   * @tc.desc Function of API, closeSync. error parameter.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirCloseSync001', 0, async function () {
    let dpath = await nextFileName('fileioTestDirCloseSync001') + 'd'
    try {
      fileio.mkdirSync(dpath);
      let dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      dd.closeSync(-1);
      expect(null).assertFail();
    }
    catch (e) {
      console.info('fileioTestDirCloseSync001 has failed for ' + e);
      expect(e.message == 'Dir has been closed yet').assertTrue();
      fileio.rmdirSync(dpath);
    }
  });
});
}
