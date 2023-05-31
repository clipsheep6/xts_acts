import {
  fileio, FILE_CONTENT, prepareFile, nextFileName,
  describe, it, expect,
} from '../../Common';
export default function fileioRename() {
describe('fileio_rename', function () {

  /**
   * @tc.number SUB_DF_FILEIO_RENAME_ASYNC_0000
   * @tc.name fileioTestRenameAsync000
   * @tc.desc Test renameAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestRenameAsync000', 0, async function (done) {
    let fpath = await nextFileName('fileioTestRenameAsync000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let newf = fpath + '123';
      fileio.rename(fpath, newf)
        .then(function (err) {
          expect(fileio.accessSync(newf) == null).assertTrue();
          expect(err == null).assertTrue();
          expect(fileio.unlinkSync(newf) == null).assertTrue();
        })
        .catch(function (e) {
          expect(e == null).assertTrue();
        })
      done();
    } catch (e) {
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_RENAME_ASYNC_0010
   * @tc.name fileioTestRenameAsync001
   * @tc.desc Test renameAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestRenameAsync001', 0, async function (done) {
    let fpath = await nextFileName('fileioTestRenameAsync001');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let newf = fpath + 'aaa';
      fileio.rename(fpath, newf, function (err) {
        expect(fileio.accessSync(newf) == null).assertTrue();
        expect(fileio.unlinkSync(newf) == null).assertTrue();
        done();
      })
    } catch (e) {
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_RENAME_ASYNC_0020
   * @tc.name fileioTestRenameAsync002
   * @tc.desc Test renameAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestRenameAsync002', 0, async function (done) {
    let fpath = await nextFileName('fileioTestRenameAsync002');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileio.access(fpath).then(function (err) {
        let newf = fpath + '123';
        fileio.rename(fpath, newf)
          .then(function (err) {
            expect(fileio.accessSync(newf) == null).assertTrue();
            expect(err == null).assertTrue();
            expect(fileio.unlinkSync(newf) == null).assertTrue();
          })
      })
        .catch(function (e) {
          expect(e == null).assertTrue();
        })
      done();
    } catch (e) {
      expect(null).assertFail();
    }
  });
});}
