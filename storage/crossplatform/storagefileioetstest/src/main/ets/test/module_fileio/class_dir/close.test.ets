import {
  fileio,
  nextFileName,
  describe,
  it,
  expect,
} from '../../Common';

export default function fileioDirClose() {
describe('fileio_dir_close', function () {

  /**
   * @tc.number SUB_DF_FILEIO_DIR_CLOSE_ASYNC_0000
   * @tc.name fileioTestDirCloseAsync000
   * @tc.desc Test Dir close() interface,return in promise mode.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestDirCloseAsync000', 0, async function (done) {
    let dpath = await nextFileName('fileioTestDirCloseAsync000') + 'd';

    try {
      fileio.mkdirSync(dpath);
      let dd = await fileio.opendir(dpath);
      await dd.close();
      fileio.rmdirSync(dpath);
      done();
    } catch (e) {
      console.info('fileioTestDirCloseAsync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_DIR_CLOSE_ASYNC_0100
   * @tc.name fileioTestDirCloseAsync001
   * @tc.desc Test Dir close() interface,return in callback mode.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestDirCloseAsync001', 0, async function (done) {
    let dpath = await nextFileName('fileioTestDirCloseAsync001') + 'd';

    try {
      fileio.mkdirSync(dpath);
      let dd = await fileio.opendir(dpath);
      dd.close(function (err) {
        fileio.rmdirSync(dpath);
        done();
      });
    } catch (e) {
      console.info('fileioTestDirCloseAsync001 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_DIR_CLOSE_ASYNC_0200
   * @tc.name fileioTestDirCloseAsync002
   * @tc.desc Test Dir  close() interface,there are multiple parameters.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
   it('fileioTestDirCloseAsync002', 0, async function (done) {
    let dpath = await nextFileName('fileioTestDirCloseAsync002') + 'd';
    try {
      fileio.mkdirSync(dpath);
      let dd = await fileio.opendir(dpath);
      dd.close(-1,function (err) {
      });
    } catch (e) {
      console.info('fileioTestDirCloseAsync002 has failed for ' + e);
      expect(e.message == "Number of arguments unmatched").assertTrue();
      fileio.rmdirSync(dpath);
      done(); 
    }
  });
});
}
