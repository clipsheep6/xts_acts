import {
  fileIO, FILE_CONTENT, nextFileName, prepareFile, describe, it, expect, 
} from '../Common';

export default function fileIOClose() {
describe('fileIO_fs_close', function () {
/**
   * @tc.number SUB_DF_FILEIO_CLOSE_SYNC_0000
   * @tc.name fileIOTestCloseSync000
   * @tc.desc Test closeSync() interfaces.
   * Open file and close file by fd.
   * @tc.size MediumTest
   * @tc.type Field
   * @tc.level Level 1
   * @tc.require
   */
   it('fileIOTestCloseSync000', 0, async function () {
    let fpath = await nextFileName('fileIOTestCloseSync000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let file = fileIO.openSync(fpath, fileIO.OpenMode.READ_WRITE);
      fileIO.closeSync(file.fd);
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIOTestCloseSync000 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });
  });
}
