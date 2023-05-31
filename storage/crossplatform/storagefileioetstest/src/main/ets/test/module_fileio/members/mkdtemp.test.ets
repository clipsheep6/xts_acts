import { fileio, nextFileName, describe, it, expect } from '../../Common';

export default function fileioMkdtemp() {
describe('fileio_mkdtemp', function () {

  /**
   * @tc.number SUB_DF_FILEIO_MKDTEMP_SYNC_0000
   * @tc.name fileioTestMkdtempSync000
   * @tc.desc Test mkdtempSync() interface.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestMkdtempSync000', 0, async function () {
    let dpath = await nextFileName('fileioTestMkdtempSync000');
    dpath = dpath + 'XXXX';

    try {
      let res = fileio.mkdtempSync(dpath);
      expect(null).assertFail();
    } catch (e) {
      console.log('fileioTestMkdtempSync000 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_MKDTEMP_SYNC_0010
   * @tc.name fileioTestMkdtempSync001
   * @tc.desc Test mkdtempSync() interface.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestMkdtempSync001', 0, async function () {
    let dpath = await nextFileName('fileioTestMkdtempSync001');
    dpath = dpath + 'XXXXXX';

    try {
      let res = fileio.mkdtempSync(dpath);
      expect(fileio.rmdirSync(res) == null).assertTrue();
    } catch (e) {
      console.log('fileioTestMkdtempSync001 has failed for ' + e);
      expect(null).assertFail();
    }
  });
  
  /**
   * @tc.number SUB_DF_FILEIO_MKDTEMP_ASYNC_0000
   * @tc.name fileioTestMkdtempAsync000
   * @tc.desc Test mkdtempASync() interface.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestMkdtempAsync000', 0, async function (done) {
    let dpath = await nextFileName('fileioTestMkdtempAsync000');
    dpath = dpath + 'XXXXXX';
    try {
      let res = await fileio.mkdtemp(dpath);
      expect(fileio.rmdirSync(res) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileioTestMkdtempAsync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_MKDTEMP_ASYNC_0010
   * @tc.name fileioTestMkdtempAsync001
   * @tc.desc Test mkdtempASync() interface.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestMkdtempAsync001', 0, async function (done) {
    let dpath = await nextFileName('fileioTestMkdtempAsync001');
    dpath = dpath + 'XXXXXX';

    try {
      fileio.mkdtemp(dpath, function (err, res) {
        expect(fileio.rmdirSync(res) == null).assertTrue();
        done();
      });
    } catch (e) {
      console.log('fileioTestMkdtempAsync001 has failed for ' + e);
      expect(null).assertFail();
    }
  });
});}
