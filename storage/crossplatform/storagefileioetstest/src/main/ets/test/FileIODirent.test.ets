import fileio from '@ohos.fileio';
import { describe,it,expect}from '@ohos/hypium'
import {
  FILE_CONTENT,
  prepareFile,
  nextFileName
}from './Common';

export default function fileIOTestDirent() {
describe('fileIOTestDirent', function () {

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIRENT_NAME_0000
   * @tc.name fileioTestDirentName000
   * @tc.desc Function of API, Get file name.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirentName000', 0, async function () {
    let dpath = await nextFileName('fileioTestDirentName000') + 'd';
    let fpath = dpath + '/f1';
    try {
      expect(fileio.mkdirSync(dpath) !== null);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      let dirent = dd.readSync();
      expect(dirent.name !== null).assertTrue();
      expect(dd.closeSync() !== null);
      expect(fileio.unlinkSync(fpath) !== null);
      expect(fileio.rmdirSync(dpath) !== null);
    } 
    catch (e) {
      console.log('fileioTestDirentName000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIRENT_ISBLOCKDEVICE_0000
   * @tc.name fileioTestDirentIsBlockDevice000
   * @tc.desc Function of API, isBlockDevice. Determine whether it is a block device.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirentIsBlockDevice000', 0, async function () {
    let dpath = await nextFileName('fileioTestDirentIsBlockDevice000') + 'd';
    let fpath = dpath + '/f1';
    try {
      expect(fileio.mkdirSync(dpath) !== null);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      let dirent = dd.readSync();
      expect(dirent !== null).assertTrue();
      expect(dirent.isBlockDevice() !== null);
      expect(dd.closeSync() !== null);
      expect(fileio.unlinkSync(fpath) !== null);
      expect(fileio.rmdirSync(dpath) !== null);
      return
    } 
    catch (e) {
      console.log('fileioTestDirentIsBlockDevice000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIRENT_ISBLOCKDEVICE_0100
   * @tc.name fileioTestDirentIsBlockDevice001
   * @tc.desc Function of API, isBlockDevice. The parameter is - 1.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirentIsBlockDevice001', 0, async function () {
    let dpath = await nextFileName('fileioTestDirentIsBlockDevice001') + 'd';
    let fpath = dpath + '/f1';
    let dd;
    try {
      expect(fileio.mkdirSync(dpath) !== null);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      let dirent = dd.readSync();
      expect(dirent !== null).assertTrue();
      dirent.isBlockDevice(-1);
      expect(null).assertFail();
    } 
    catch (e) {
      expect(dd.closeSync() !== null);
      expect(fileio.unlinkSync(fpath) !== null);
      expect(fileio.rmdirSync(dpath) !== null);
      console.log('fileioTestDirentIsBlockDevice001 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIRENT_ISCHARACTERDEVICE_0000
   * @tc.name fileioTestDirentIsCharacterDevice000
   * @tc.desc Function of API, isCharacterDevice. Determine whether it is a character device.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirentIsCharacterDevice000', 0, async function () {
    let dpath = await nextFileName('fileioTestDirentIsCharacterDevice000') + 'd';
    let fpath = dpath + '/f1';
    try {
      expect(fileio.mkdirSync(dpath) !== null);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      let dirent = dd.readSync();
      expect(dirent !== null).assertTrue();
      expect(dirent.isCharacterDevice() !== null);
      expect(dd.closeSync() !== null !== null);
      expect(fileio.unlinkSync(fpath) !== null);
      expect(fileio.rmdirSync(dpath) !== null);
    } 
    catch (e) {
      console.log('fileioTestDirentIsCharacterDevice000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIRENT_ISCHARACTERDEVICE_0100
   * @tc.name fileioTestDirentIsCharacterDevice001
   * @tc.desc Function of API, isCharacterDevice. The parameter is - 1.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirentIsCharacterDevice001', 0, async function () {
    let dpath = await nextFileName('fileioTestDirentIsCharacterDevice001') + 'd';
    let fpath = dpath + '/f1';
    let dd;
    try {
      expect(fileio.mkdirSync(dpath) !== null);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      let dirent = dd.readSync();
      expect(dirent !== null).assertTrue();
      dirent.isCharacterDevice(-1);
      expect(null).assertFail();
    } 
    catch (e) {
      expect(dd.closeSync() !== null);
      expect(fileio.unlinkSync(fpath) !== null);
      expect(fileio.rmdirSync(dpath) !== null);
      console.log('fileioTestDirentIsCharacterDevice001 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIRENT_ISDIRECTORY_0000
   * @tc.name fileioTestDirentIsDirectory000
   * @tc.desc Function of API, isDirectory. Determine whether it is a directory.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirentIsDirectory000', 0, async function () {
    let dpath = await nextFileName('fileioTestDirentIsDirectory000') + 'd';
    let fpath = dpath + '/f1';
    try {
      expect(fileio.mkdirSync(dpath) !== null);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      let dirent = dd.readSync();
      expect(dirent !== null).assertTrue();
      expect(dirent.isDirectory() !== null);
      expect(dd.closeSync() !== null);
      expect(fileio.unlinkSync(fpath) !== null);
      expect(fileio.rmdirSync(dpath) !== null);
    } 
    catch (e) {
      console.log('fileioTestDirentIsDirectory000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIRENT_ISDIRECTORY_0100
   * @tc.name fileioTestDirentIsDirectory001
   * @tc.desc Function of API, isDirectory. The parameter is - 1
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirentIsDirectory001', 0, async function () {
    let dpath = await nextFileName('fileioTestDirentIsDirectory001') + 'd';
    let fpath = dpath + '/f1';
    let dd;
    try {
      expect(fileio.mkdirSync(dpath) !== null);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      let dirent = dd.readSync();
      expect(dirent !== null).assertTrue();
      dirent.isDirectory(-1);
      expect(null).assertFail();
    } 
    catch (e) {
      expect(dd.closeSync() !== null);
      expect(fileio.unlinkSync(fpath) !== null);
      expect(fileio.rmdirSync(dpath) !== null);
      console.log('fileioTestDirentIsDirectory001 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIRENT_ISFIFO_0000
   * @tc.name fileioTestDirentIsFifo000
   * @tc.desc Function of API, isFIFO. Determine whether it is a fifo.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirentIsFifo000', 0, async function () {
    let dpath = await nextFileName('fileioTestDirentIsFifo000') + 'd';
    let fpath = dpath + '/f1';
    try {
      expect(fileio.mkdirSync(dpath) !== null);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      let dirent = dd.readSync();
      expect(dirent !== null).assertTrue();
      expect(dirent.isFIFO() !== null);
      expect(dd.closeSync() !== null);
      expect(fileio.unlinkSync(fpath) !== null);
      expect(fileio.rmdirSync(dpath) !== null);
    } 
    catch (e) {
      console.log('fileioTestDirentIsFifo000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIRENT_ISFIFO_0100
   * @tc.name fileioTestDirentIsFifo001
   * @tc.desc Function of API, isFIFO. The parameter is - 1
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirentIsFifo001', 0, async function () {
    let dpath = await nextFileName('fileioTestDirentIsFifo001') + 'd';
    let fpath = dpath + '/f1';
    let dd;
    try {
      expect(fileio.mkdirSync(dpath) !== null);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      let dirent = dd.readSync();
      expect(dirent !== null).assertTrue();
      dirent.isFIFO(-1);
      expect(null).assertFail();
    } 
    catch (e) {
      expect(dd.closeSync() !== null);
      expect(fileio.unlinkSync(fpath) !== null);
      expect(fileio.rmdirSync(dpath) !== null);
      console.log('fileioTestDirentIsFifo001 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIRENT_ISFILE_0000
   * @tc.name fileioTestDirentIsFile000
   * @tc.desc Function of API, isFile. Determine whether it is a file.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirentIsFile000', 0, async function () {
    let dpath = await nextFileName('fileioTestDirentIsFile000') + 'd';
    let fpath = dpath + '/f1';
    try {
      expect(fileio.mkdirSync(dpath) !== null);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      let dirent = dd.readSync();
      expect(dirent !== null).assertTrue();
      expect(dirent.isFile() !== null);
      expect(dd.closeSync() !== null);
      expect(fileio.unlinkSync(fpath) !== null);
      expect(fileio.rmdirSync(dpath) !== null);
    } 
    catch (e) {
      console.log('fileioTestDirentIsFile000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIRENT_ISFILE_0100
   * @tc.name fileioTestDirentIsFile001
   * @tc.desc Function of API, isFile. The parameter is - 1
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirentIsFile001', 0, async function () {
    let dpath = await nextFileName('fileioTestDirentIsFile001') + 'd';
    let fpath = dpath + '/f1';
    let dd;
    try {
      expect(fileio.mkdirSync(dpath) !== null);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      let dirent = dd.readSync();
      expect(dirent !== null).assertTrue();
      dirent.isFile(-1);
      expect(null).assertFail();
    } 
    catch (e) {
      expect(dd.closeSync() !== null);
      expect(fileio.unlinkSync(fpath) !== null);
      expect(fileio.rmdirSync(dpath) !== null);
      console.log('fileioTestDirentIsFile001 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIRENT_ISSOCKET_0000
   * @tc.name fileioTestDirentIsSocket000
   * @tc.desc Function of API, isSocket. Determine whether it is a socket.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirentIsSocket000', 0, async function () {
    let dpath = await nextFileName('fileioTestDirentIsSocket000') + 'd';
    let fpath = dpath + '/f1';
    try {
      expect(fileio.mkdirSync(dpath) !== null);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      let dirent = dd.readSync();
      expect(dirent !== null).assertTrue();
      expect(dirent.isSocket() !== null);
      expect(dd.closeSync() !== null);
      expect(fileio.unlinkSync(fpath) !== null);
      expect(fileio.rmdirSync(dpath) !== null);
    } 
    catch (e) {
      console.log('fileioTestDirentIsSocket000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIRENT_ISSOCKET_0100
   * @tc.name fileioTestDirentIsSocket001
   * @tc.desc Function of API, isSocket. The parameter is - 1
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirentIsSocket001', 0, async function () {
    let dpath = await nextFileName('fileioTestDirentIsSocket001') + 'd';
    let fpath = dpath + '/f1';
    let dd;
    try {
      expect(fileio.mkdirSync(dpath) !== null);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      let dirent = dd.readSync();
      expect(dirent !== null).assertTrue();
      dirent.isSocket(-1);
      expect(null).assertFail();
    } 
    catch (e) {
      expect(dd.closeSync() !== null);
      expect(fileio.unlinkSync(fpath) !== null);
      expect(fileio.rmdirSync(dpath) !== null);
      console.log('fileioTestDirentIsSocket001 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIRENT_ISSYMBOLICLLINK_0000
   * @tc.name fileioTestDirentIsSymbolicLink000
   * @tc.desc Function of API, isSymbolicLink. Determine whether it is a symbolic link.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
  it('fileioTestDirentIsSymbolicLink000', 0, async function () {
    let dpath = await nextFileName('fileioTestDirentIsSymbolicLink000') + 'd';
    let fpath = dpath + '/f1';
    try {
      expect(fileio.mkdirSync(dpath) !== null);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      let dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      let dirent = dd.readSync();
      expect(dirent !== null).assertTrue();
      expect(dirent.isSymbolicLink() !== null);
      expect(dd.closeSync() !== null);
      expect(fileio.unlinkSync(fpath) !== null);
      expect(fileio.rmdirSync(dpath) !== null);
    } 
    catch (e) {
      console.log('fileioTestDirentIsSymbolicLink000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FILEIO_DIRENT_ISSYMBOLICLLINK_0100
   * @tc.name fileioTestDirentIsSymbolicLink001
   * @tc.desc Function of API, isSymbolicLink. The parameter is - 1
   */
  it('fileioTestDirentIsSymbolicLink001', 0, async function () {
    let dpath = await nextFileName('fileioTestDirentIsSymbolicLink001') + 'd';
    let fpath = dpath + '/f1';
    let dd;
    try {
      expect(fileio.mkdirSync(dpath) !== null);
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      dd = fileio.opendirSync(dpath);
      expect(dd !== null).assertTrue();
      let dirent = dd.readSync();
      expect(dirent !== null).assertTrue();
      dirent.isSymbolicLink(-1);
      expect(null).assertFail();
    } 
    catch (e) {
      expect(dd.closeSync() !== null);
      expect(fileio.unlinkSync(fpath) !== null);
      expect(fileio.rmdirSync(dpath) !== null);
      console.log('fileioTestDirentIsSymbolicLink001 has failed for ' + e);
    }
  });

});}
