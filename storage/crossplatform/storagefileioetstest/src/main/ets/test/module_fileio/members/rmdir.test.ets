import {
    fileio, FILE_CONTENT, prepareFile, nextFileName, randomString, isInclude,
    describe, it, expect,
} from '../../Common';
export default function fileioRmdir() {
describe('fileio_rmdir', function () {

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_SYNC_0000
     * @tc.name fileioTestRmdirSync000
     * @tc.desc Test rmdirSync() interface.
     * Recursively delete all files and subfolders in a directory.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
    it('fileioTestRmdirSync000', 0, async function () {
        let dpath = await nextFileName('fileioTestRmdirSync000') + 'd';
        let fpath = dpath + '/rmdir_sync_000';
        let ddpath = dpath + '/rmdir_sync_000_1d';
        fileio.mkdirSync(dpath);
        fileio.mkdirSync(ddpath);
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

        try {
            fileio.rmdirSync(dpath);
        } catch (err) {
            console.info('fileioTestRmdirSync000 has failed for ' + err);
            expect(null).assertFail();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_SYNC_0100
     * @tc.name fileioTestRmdirSync001
     * @tc.desc Test rmdirSync() interface.
     * Recursively delete all files and subfolders in a directory.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
    it('fileioTestRmdirSync001', 0, async function () {
        let dpath = await nextFileName('fileioTestRmdirSync001') + 'd';
        let fpath = dpath + '/rmdir_sync_001';
        let ffpath = dpath + '/rmdir_sync_001_1';
        let ddpath = dpath + '/rmdir_sync_001_1d';
        let fffpath = ddpath + '/rmdir_sync_002';
        fileio.mkdirSync(dpath);
        fileio.mkdirSync(ddpath);
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
        expect(prepareFile(ffpath, FILE_CONTENT)).assertTrue();
        expect(prepareFile(fffpath, FILE_CONTENT)).assertTrue();

        try {
            fileio.rmdirSync(dpath);
        } catch (err) {
            console.info('fileioTestRmdirSync001 has failed for ' + err);
            expect(null).assertFail();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_SYNC_0200
     * @tc.name fileioTestRmdirSync002
     * @tc.desc Test rmdirSync() interface.
     * Recursively delete all files and subfolders in a directory.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
    it('fileioTestRmdirSync002', 0, async function () {
        let dpath = await nextFileName('fileioTestRmdirSync002') + 'd';
        fileio.mkdirSync(dpath);
        let fdpath = dpath;

        try {
            for (let i = 0; i < 113; i++) {
                let fpath = dpath + '/f' + randomString(10) + i;
                fileio.openSync(fpath, 0o102, 0o777);
                dpath = dpath + '/d' + randomString(10) + i;
                fileio.mkdirSync(dpath);
            }
            fileio.rmdirSync(fdpath);
        } catch (err) {
            console.info('fileioTestRmdirSync002 has failed for ' + err);
            expect(null).assertFail();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_SYNC_0300
     * @tc.name fileioTestRmdirSync003
     * @tc.desc Test rmdirSync() interface. The path contains ../, normal call.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
    it('fileioTestRmdirSync003', 0, async function () {
        let dpath = await nextFileName('../cache/fileioTestRmdirSync003') + 'd';

        try {
            fileio.mkdirSync(dpath);
            fileio.rmdirSync(dpath);
        } catch (err) {
            console.info('fileioTestRmdirSync003 has failed for ' + err);
            expect(null).assertFail();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_SYNC_0400
     * @tc.name fileioTestRmdirSync004
     * @tc.desc Test rmdirSync() interface. Invalid path.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
    it('fileioTestRmdirSync004', 0, async function () {
        let dpath = await nextFileName('fileioTestRmdirSync004') + 'd';

        try {
            fileio.rmdirSync(dpath);
        } catch (err) {
            console.info('fileioTestRmdirSync004 has failed for ' + err);
            expect(isInclude(err.message, 'No such file or directory')).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_SYNC_0500
     * @tc.name fileioTestRmdirSync005
     * @tc.desc Test rmdirSync() interface. No parameters.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
    it('fileioTestRmdirSync005', 0, async function () {
        try {
            fileio.rmdirSync();
        } catch (err) {
            console.info('fileioTestRmdirSync005 has failed for ' + err);
            expect(isInclude(err.message, 'Number of arguments unmatched')).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_SYNC_0600
     * @tc.name fileioTestRmdirSync006
     * @tc.desc Test rmdirSync() interface. Invalid path.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
    it('fileioTestRmdirSync006', 0, async function () {
        try {
            fileio.rmdirSync('');
        } catch (err) {
            console.info('fileioTestRmdirSync006 has failed for ' + err);
            expect(isInclude(err.message, 'No such file or directory')).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_SYNC_0700
     * @tc.name fileioTestRmdirSync007
     * @tc.desc Test rmdirSync() interface. Not a directory.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
    it('fileioTestRmdirSync007', 0, async function () {
        let fpath = await nextFileName('fileioTestRmdirSync007');
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
        try {
            fileio.rmdirSync(fpath);
        } catch (err) {
            console.info('fileioTestRmdirSync007 has failed for ' + err);
            expect(isInclude(err.message, 'Not a directory')).assertTrue();
            fileio.unlinkSync(fpath);
        }
    });

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_ASYNC_0000
     * @tc.name fileioTestRmdirAsync000
     * @tc.desc Test rmdir() interface, return in promise mode.
     * Recursively delete all files and subfolders in a directory.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
    it('fileioTestRmdirAsync000', 0, async function (done) {
        let dpath = await nextFileName('fileioTestRmdirAsync000') + 'd';
        fileio.mkdirSync(dpath);
        let fdpath = dpath;

        try {
            for (let i = 0; i < 113; i++) {
                let fpath = dpath + '/f' + randomString(10) + i;
                await fileio.open(fpath, 0o102, 0o777);
                dpath = dpath + '/d' + randomString(10) + i;
                await fileio.mkdir(dpath);
            }
            await fileio.rmdir(fdpath);
            done();
        } catch (err) {
            console.info('fileioTestRmdirAsync000 has failed for ' + err);
            expect(null).assertFail();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_ASYNC_0100
     * @tc.name fileioTestRmdirAsync001
     * @tc.desc Test rmdir() interface, return in callback mode.
     * Recursively delete all files and subfolders in a directory.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
    it('fileioTestRmdirAsync001', 0, async function (done) {
        let dpath = await nextFileName('fileioTestRmdirAsync001') + 'd';
        fileio.mkdirSync(dpath);
        let fdpath = dpath;

        try {
            for (let i = 0; i < 113; i++) {
                let fpath = dpath + '/f' + randomString(10) + i;
                await fileio.open(fpath, 0o102, 0o777);
                dpath = dpath + '/d' + randomString(10) + i;
                await fileio.mkdir(dpath);
            }
            fileio.rmdir(fdpath, function () {
                done();
            });
        } catch (err) {
            console.info('fileioTestRmdirAsync001 has failed for ' + err);
            expect(null).assertFail();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_ASYNC_0200
     * @tc.name fileioTestRmdirAsync002
     * @tc.desc Test rmdir() interface, return in promise mode.
     * Recursively delete all files and subfolders in a directory.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
    it('fileioTestRmdirAsync002', 0, async function (done) {
        let dpath = await nextFileName('fileioTestRmdirAsync002') + 'd';
        let fpath = dpath + '/rmdir_async_002';
        let ddpath = dpath + '/rmdir_async_002_1d';
        fileio.mkdirSync(dpath);
        fileio.mkdirSync(ddpath);
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

        try {
            await fileio.rmdir(dpath);
            done()
        } catch (err) {
            console.info('fileioTestRmdirAsync002 has failed for ' + err);
            expect(null).assertFail();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_ASYNC_0300
     * @tc.name fileioTestRmdirAsync003
     * @tc.desc Test rmdir() interface, return in callback mode.
     * Recursively delete all files and subfolders in a directory.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
    it('fileioTestRmdirAsync003', 0, async function (done) {
        let dpath = await nextFileName('fileioTestRmdirAsync003') + 'd';
        let fpath = dpath + '/rmdir_async_003';
        let ffpath = dpath + '/rmdir_async_003_1';
        let ddpath = dpath + '/rmdir_async_003_1d';
        let fffpath = ddpath + '/rmdir_async_003_2';
        fileio.mkdirSync(dpath);
        fileio.mkdirSync(ddpath);
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
        expect(prepareFile(ffpath, FILE_CONTENT)).assertTrue();
        expect(prepareFile(fffpath, FILE_CONTENT)).assertTrue();

        try {
            fileio.rmdir(dpath, function () {
                done();
            });
        } catch (err) {
            console.info('fileioTestRmdirAsync003 has failed for ' + err);
            expect(null).assertFail();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_ASYNC_0400
     * @tc.name fileioTestRmdirAsync004
     * @tc.desc Test rmdirSync() interface. The path contains ../, normal call.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
    it('fileioTestRmdirAsync004', 0, async function () {
        let dpath = await nextFileName('../cache/fileioTestRmdirAsync004') + 'd';

        try {
            fileio.mkdirSync(dpath);
            await fileio.rmdir(dpath);
        } catch (err) {
            console.info('fileioTestRmdirAsync004 has failed for ' + err);
            expect(null).assertFail();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_ASYNC_0500
     * @tc.name fileioTestRmdirAsync005
     * @tc.desc Test rmdir() interface. Invalid path.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
     it('fileioTestRmdirAsync005', 0, async function (done) {
        let dpath = await nextFileName('fileioTestRmdirAsync005') + 'd';

        try {
            await fileio.rmdir(dpath);
        } catch (err) {
            console.info('fileioTestRmdirAsync005 has failed for ' + err);
            expect(isInclude(err.message, 'No such file or directory')).assertTrue();
            done();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_ASYNC_0600
     * @tc.name fileioTestRmdirAsync006
     * @tc.desc Test rmdir() interface. Parameter mismatch.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
    it('fileioTestRmdirAsync006', 0, async function (done) {
        let dpath = await nextFileName('fileioTestRmdirAsync006') + 'd';
        try {
            fileio.rmdir(dpath, '', function() {
            });
        } catch (err) {
            console.info('fileioTestRmdirAsync006 has failed for ' + err);
            expect(isInclude(err.message, 'Number of arguments unmatched')).assertTrue();
            done();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_ASYNC_0700
     * @tc.name fileioTestRmdirAsync007
     * @tc.desc Test rmdir() interface. Invalid path.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
    it('fileioTestRmdirAsync007', 0, async function (done) {
        try {
            await fileio.rmdir('');
        } catch (err) {
            console.info('fileioTestRmdirAsync007 has failed for ' + err);
            expect(isInclude(err.message, 'No such file or directory')).assertTrue();
            done();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FileIO_RMDIR_ASYNC_0800
     * @tc.name fileioTestRmdirAsync008
     * @tc.desc Test rmdir() interface. Not a directory.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     * @tc.require
     */
    it('fileioTestRmdirAsync008', 0, async function (done) {
        let fpath = await nextFileName('fileioTestRmdirAsync008');
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
        try {
            await fileio.rmdir(fpath);
        } catch (err) {
            console.info('fileioTestRmdirAsync008 has failed for ' + err);
            expect(isInclude(err.message, 'Not a directory')).assertTrue();
            fileio.unlinkSync(fpath);
            done();
        }
    });
})
}