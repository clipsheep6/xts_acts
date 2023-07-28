import fileio from '@ohos.fileio';
import { describe,it,expect}from '@ohos/hypium'
import {
  FILE_CONTENT,
  prepareFile,
  nextFileName,
  prepareEmptyFile,
  randomString,
  fileName,
  forceRemoveDir
}
from './Common'
export default function fileIOTest() {
  describe('fileIOTest', function () {

    /**
     * @tc.number SUB_STORAGE_FILEIO_OPEN&CLOSESYNC_0000
     * @tc.name fileioTestOpenCloseSync000
     * @tc.desc Function of API, openSync. The test file is exist.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('fileioTestOpenCloseSync000', 0, async function () {
      let fpath = await nextFileName('fileioTestOpenCloseSync000');
      try {
        let fd = fileio.openSync(fpath, 0o102, 0o666);
        expect(fd !== null).assertTrue();
        fileio.closeSync(fd);
        fileio.unlinkSync(fpath);
      } 
      catch (err) {
        console.info('fileioTestOpenCloseSync000 has failed for ' + err);
        expect(null).assertFail();
      }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_OPENSYNC_0000
     * @tc.name fileioTestOpen000
     * @tc.desc Function of API, openSync(mode not for value). The test file is exist.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('fileioTestOpen000', 0, async function () {
      let fpath = await nextFileName('fileioTestOpen000');
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      try {
        let fd = fileio.openSync(fpath, 0o202);
        expect(fd !== null).assertTrue();
        fileio.closeSync(fd);
        fileio.unlinkSync(fpath);
      } 
      catch (err) {
        console.info('fileioTestOpen000 has failed for ' + err);
        expect(null).assertFail();
      }
    });

    /**
     * @tc.number SUB_STORAGE_FIlEIO_OPENSYNC_0100
     * @tc.name fileioTestOpen001
     * @tc.desc Function of API, flags=0o100. mode=0o001
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('fileioTestOpen001', 0, async function () {
      let fpath = await nextFileName('fileioTestOpen001');
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      try {
        let fd = fileio.openSync(fpath, 0o100, 0o001);
        expect(fd !== null).assertTrue();
        fileio.closeSync(fd);
        fileio.unlinkSync(fpath);
      } 
      catch (err) {
        console.info('fileioTestOpen001 has failed for ' + err);
        expect(null).assertFail();
      }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_OPENSYNC_0200
     * @tc.name fileioTestOpen002
     * @tc.desc Function of API,
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('fileioTestOpen002', 0, async function () {
      let fpath = await nextFileName('fileioTestOpen002');
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      try {
        let fd = fileio.openSync(fpath);
        expect(fd !== null).assertTrue();
        fileio.closeSync(fd);
        fileio.unlinkSync(fpath);
      } 
      catch (err) {
        console.info('fileioTestOpen002 has failed for ' + err);
        expect(null).assertFail();
      }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_OPENSYNC_0300
     * @tc.name fileioTestOpen003
     * @tc.desc Function of API, flags=0o100. mode=0o004
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('fileioTestOpen003', 0, async function () {
      let fpath = await nextFileName('fileioTestOpen003');
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      try {
        let fd = fileio.openSync(fpath, 0o100, 0o004);
        expect(fd !== null).assertTrue();
        fileio.writeSync(fd, FILE_CONTENT, {
          encoding: 'utf-8',
          offset: 1,
          length: 1,
        });
      }catch (err) {
        console.info('fileioTestOpen003 has failed for ' + err);
        expect(err.message == "Bad file descriptor").assertTrue();
        fileio.unlinkSync(fpath);
      }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_OPENSYNC_0400
     * @tc.name fileioTestOpen004
     * @tc.desc Function of API, flags=0o101. mode=0o002
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('fileioTestOpen004', 0, async function () {
      let fpath = await nextFileName('fileioTestOpen004');
      expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
      try {
        let fd = fileio.openSync(fpath, 0o101, 0o002);
        expect(fd !== null).assertTrue();
        fileio.readSync(fd, new ArrayBuffer(4096), {
          offset: 1,
        });
      }catch (err) {
        console.info('fileioTestOpen004 has failed for ' + err);
        expect(err.message == "Bad file descriptor").assertTrue();
        fileio.unlinkSync(fpath);
      }
    });

  })
}