/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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
    fileIO, FILE_CONTENT, prepareFile, nextFileName,
    describe, it, expect,
} from '../Common';

export default function fileIORandomAccessFileRead() {
describe('fileIO_randomAccessFile_read', function () {

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_SYNC_0000
     * @tc.name fileIO_randomaccessfile_read_sync_000
     * @tc.desc Test readSync() interface. Test to read data synchronously.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_sync_000', 0, async function () {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_sync_000');

        try {
            let file = fileIO.openSync(fpath, fileIO.OpenMode.CREATE | fileIO.OpenMode.READ_WRITE);
            let randomaccessfile = fileIO.createRandomAccessFileSync(file, 0);
            let length = 4096;
            let num = randomaccessfile.writeSync(new ArrayBuffer(length));
            expect(num == length).assertTrue();
            randomaccessfile.setFilePointer(0);
            let number = randomaccessfile.readSync(new ArrayBuffer(length));
            expect(number == length).assertTrue();
            randomaccessfile.close();
            fileIO.closeSync(file.fd);
            fileIO.unlinkSync(fpath);
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_sync_000 has failed for ' + err);
            expect(false).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_SYNC_0100
     * @tc.name fileIO_randomaccessfile_read_sync_001
     * @tc.desc Test readSync() interface. When the offset is 1. Test to read data synchronously.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_sync_001', 0, async function () {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_sync_001');

        try {
            let randomaccessfile = fileIO.createRandomAccessFileSync(fpath, 0o102);
            let length = 20;
            let num = randomaccessfile.writeSync(new ArrayBuffer(length));
            expect(num == length).assertTrue();
            randomaccessfile.setFilePointer(0);
            let number = randomaccessfile.readSync(new ArrayBuffer(length), { offset: 1 });
            expect(number == length - 1).assertTrue();
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_sync_001 has failed for ' + err);
            expect(false).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_SYNC_0200
     * @tc.name fileIO_randomaccessfile_read_sync_002
     * @tc.desc Test readSync() interface. When the offset is 10. Test to read data synchronously.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_sync_002', 0, async function () {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_sync_002');

        try {
            let randomaccessfile = fileIO.createRandomAccessFileSync(fpath, 0o102);
            let length = 20;
            let num = randomaccessfile.writeSync(new ArrayBuffer(length));
            expect(num == length).assertTrue();
            randomaccessfile.setFilePointer(0);
            let number = randomaccessfile.readSync(new ArrayBuffer(length), { offset: 10 });
            expect(number == length - 10).assertTrue();
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_sync_002 has failed for ' + err);
            expect(false).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_SYNC_0300
     * @tc.name fileIO_randomaccessfile_read_sync_003
     * @tc.desc Test readSync() interface. When the offset is 1 and the length is 5. Test to read data synchronously.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_sync_003', 0, async function () {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_sync_003');

        try {
            let randomaccessfile = fileIO.createRandomAccessFileSync(fpath, 0o102);
            let length = 20;
            let num = randomaccessfile.writeSync(new ArrayBuffer(length));
            expect(num == length).assertTrue();
            randomaccessfile.setFilePointer(0);
            let number = randomaccessfile.readSync(new ArrayBuffer(length), { offset: 1, length: 5 });
            expect(number == 5).assertTrue();
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_sync_003 has failed for ' + err);
            expect(false).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_SYNC_0400
     * @tc.name fileIO_randomaccessfile_read_sync_004
     * @tc.desc Test readSync() interface. When offset equals buffer length. Test to read data synchronously.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_sync_004', 0, async function () {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_sync_004');

        try {
            let randomaccessfile = fileIO.createRandomAccessFileSync(fpath, 0o102);
            let length = 4096;
            let num = randomaccessfile.writeSync(new ArrayBuffer(length));
            expect(num == length).assertTrue();
            randomaccessfile.setFilePointer(0);
            let number = randomaccessfile.readSync(new ArrayBuffer(length), { offset: length });
            expect(number == 0).assertTrue();
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_sync_004 has failed for ' + err);
            expect(false).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_SYNC_0500
     * @tc.name fileIO_randomaccessfile_read_sync_005
     * @tc.desc Test readSync() interface. When the offset is 6. Test to read data synchronously.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_sync_005', 0, async function () {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_sync_005');
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

        try {
            let randomaccessfile = fileIO.createRandomAccessFileSync(fpath, 0o102);
            let length = 20;
            let number = randomaccessfile.readSync(new ArrayBuffer(length), {offset: 6 });
            expect(number == FILE_CONTENT.length - 6).assertTrue();
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_sync_005 has failed for ' + err);
            expect(false).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_SYNC_0600
     * @tc.name fileIO_randomaccessfile_read_sync_006
     * @tc.desc Test readSync() interface. When the offset is negative.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_sync_006', 3, async function () {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_sync_006');
        let file = fileIO.openSync(fpath, fileIO.OpenMode.CREATE | fileIO.OpenMode.READ_WRITE);
        let randomaccessfile = fileIO.createRandomAccessFileSync(file, 0);

        try {
            randomaccessfile.readSync(new ArrayBuffer(4096), { offset: -1 });
            expect(false).assertTrue();
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_sync_006 has failed for ' + err);
            randomaccessfile.close();
            fileIO.closeSync(file.fd);
            fileIO.unlinkSync(fpath);
            expect(err.code == 13900020 && err.message == "Invalid argument").assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_SYNC_0700
     * @tc.name fileIO_randomaccessfile_read_sync_007
     * @tc.desc Test readSync() interface. When offset+length>buffer.size.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_sync_007', 0, async function () {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_sync_007');
        let file = fileIO.openSync(fpath, fileIO.OpenMode.CREATE | fileIO.OpenMode.READ_WRITE);
        let randomaccessfile = fileIO.createRandomAccessFileSync(file, 0);

        try {
            randomaccessfile.readSync(new ArrayBuffer(4096), { offset: 1, length: 4096 });
            randomaccessfile.close();
            fileIO.closeSync(file.fd);
            fileIO.unlinkSync(fpath);
            expect(true).assertTrue();
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_sync_007 has failed for ' + err);
            expect(false).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_SYNC_0800
     * @tc.name fileIO_randomaccessfile_read_sync_008
     * @tc.desc Test readSync() interface. When the offset is greater than the buffer length.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_sync_008', 0, async function () {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_sync_008');
        let randomaccessfile = fileIO.createRandomAccessFileSync(fpath, 0o102);

        try {
            let length = 4096;
            randomaccessfile.readSync(new ArrayBuffer(length), { offset: length + 1 });
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
            expect(true).assertTrue();
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_sync_008 has failed for ' + err);
            expect(false).assertTrue();

        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_SYNC_0900
     * @tc.name fileIO_randomaccessfile_read_sync_009
     * @tc.desc Test readSync() interface. When the length is greater than the buffer length.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_sync_009', 3, async function () {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_sync_009');
        let randomaccessfile = fileIO.createRandomAccessFileSync(fpath, 0o102);

        try {
            let length = 4096;
            randomaccessfile.readSync(new ArrayBuffer(length), { length: length + 1 });
            expect(false).assertTrue();
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_sync_009 has failed for ' + err);
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
            expect(err.code == 13900020 && err.message == "Invalid argument").assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_SYNC_1000
     * @tc.name fileio_randomaccessfile_read_sync_010
     * @tc.desc Test readSync() interface. The "length" of option must > 0.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('fileio_randomaccessfile_read_sync_010', 3, async function () {
        let fpath = await nextFileName('fileio_randomaccessfile_read_sync_010');
        let randomaccessfile;

        try {
            randomaccessfile = fileIO.createRandomAccessFileSync(fpath, 0o102);
            let length = 4096;
            let num = randomaccessfile.writeSync(new ArrayBuffer(length));
            expect(num == length).assertTrue();
            randomaccessfile.setFilePointer(0);
            randomaccessfile.readSync(new ArrayBuffer(16), { offset: 13, length: -1 });
            expect(false).assertTrue();
        } catch (err) {
            console.info('fileio_randomaccessfile_read_sync_010 has failed for ' + err);
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
            expect(err.code == 13900020 && err.message == "Invalid argument").assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_SYNC_1100
     * @tc.name fileIO_randomaccessfile_read_sync_011
     * @tc.desc Test readSync() interface. When there are no parameters.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_sync_011', 3, async function () {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_sync_011');
        let randomaccessfile = fileIO.createRandomAccessFileSync(fpath, 0o102);

        try {
            randomaccessfile.readSync();
            expect(false).assertTrue();
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_sync_011 has failed for ' + err);
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
            expect(err.code == 13900020 && err.message == "Invalid argument").assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_SYNC_1200
     * @tc.name fileIO_randomaccessfile_read_sync_012
     * @tc.desc Test readSync() interface. When the offset is negative.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_sync_012', 3, async function () {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_sync_012');
        let randomaccessfile = fileIO.createRandomAccessFileSync(fpath, 0o102);

        try {
            randomaccessfile.readSync(new ArrayBuffer(4096), { offset: -1 });
            expect(false).assertTrue();
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_sync_012 has failed for ' + err);
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
            expect(err.code == 13900020 && err.message == "Invalid argument").assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_SYNC_1300
     * @tc.name fileIO_randomaccessfile_read_sync_013
     * @tc.desc Test readSync() interface. When the parameter type is wrong.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_sync_013', 3, async function () {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_sync_013');
        let randomaccessfile = fileIO.createRandomAccessFileSync(fpath, 0o102);

        try {
            randomaccessfile.readSync('');
            expect(false).assertTrue();
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_sync_013 has failed for ' + err);
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
            expect(err.code == 13900020 && err.message == "Invalid argument").assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_ASYNC_0000
     * @tc.name fileIO_randomaccessfile_read_async_000
     * @tc.desc Test read() interface. return in callback mode. Test to read data asynchronously.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_async_000', 0, async function (done) {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_async_000');

        try {
            let randomaccessfile = await fileIO.createRandomAccessFile(fpath, 0o102);
            let length = 4096;
            let num = await randomaccessfile.write(new ArrayBuffer(length));
            expect(num == length).assertTrue();
            randomaccessfile.setFilePointer(0);
            randomaccessfile.read(new ArrayBuffer(length), function (err, readLength) {
                expect(readLength == length).assertTrue();
                randomaccessfile.close();
                fileIO.unlinkSync(fpath);
                done();
            });
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_async_000 has failed for ' + err);
            expect(false).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_ASYNC_0100
     * @tc.name fileIO_randomaccessfile_read_async_001
     * @tc.desc Test read() interface. When the offset is 1. Test to read data asynchronously.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_async_001', 0, async function (done) {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_async_001');

        try {
            fileIO.createRandomAccessFile(fpath, 0o102, async function (err, randomaccessfile) {
                let length = 20;
                let num = await randomaccessfile.write(new ArrayBuffer(length));
                expect(num == length).assertTrue();
                randomaccessfile.setFilePointer(0);
                let readLength = await randomaccessfile.read(new ArrayBuffer(length), { offset: 1 });
                expect(readLength == length - 1).assertTrue();
                randomaccessfile.close();
                fileIO.unlinkSync(fpath);
                done();
            });
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_async_001 has failed for ' + err);
            expect(false).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_ASYNC_0200
     * @tc.name fileIO_randomaccessfile_read_async_002
     * @tc.desc Test read() interface. When the offset is 1. Test to read data asynchronously.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_async_002', 0, async function (done) {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_async_002');

        try {
            let file = fileIO.openSync(fpath, fileIO.OpenMode.CREATE | fileIO.OpenMode.READ_WRITE);
            let randomaccessfile = await fileIO.createRandomAccessFile(file, 0);
            let length = 20;
            let num = await randomaccessfile.write(new ArrayBuffer(length));
            expect(num == length).assertTrue();
            randomaccessfile.setFilePointer(0);
            let readLength = await randomaccessfile.read(new ArrayBuffer(length), { offset: 1 });
            expect(readLength == length - 1).assertTrue();
            randomaccessfile.close();
            fileIO.closeSync(file.fd);
            fileIO.unlinkSync(fpath);
            done();
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_async_002 has failed for ' + err);
            expect(false).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_ASYNC_0300
     * @tc.name fileIO_randomaccessfile_read_async_003
     * @tc.desc Test read() interface. When the offset is 1 and the length is 5. Test to read data asynchronously.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_async_003', 0, async function (done) {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_async_003');

        try {
            let randomaccessfile = await fileIO.createRandomAccessFile(fpath, 0o102);
            let length = 20;
            let num = await randomaccessfile.write(new ArrayBuffer(length));
            expect(num == length).assertTrue();
            randomaccessfile.setFilePointer(0);
            randomaccessfile.read(new ArrayBuffer(length), { offset: 1, length: 5 }, function (err, readLength) {
                expect(readLength == 5).assertTrue();
                randomaccessfile.close();
                fileIO.unlinkSync(fpath);
                done();
            });
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_async_003 has failed for ' + err);
            expect(false).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_ASYNC_0400
     * @tc.name fileIO_randomaccessfile_read_async_004
     * @tc.desc Test read() interface. When offset equals buffer length. Test to read data asynchronously.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_async_004', 0, async function (done) {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_async_004');

        try {
            let randomaccessfile = await fileIO.createRandomAccessFile(fpath, 0o102);
            let length = 4096;
            let num = await randomaccessfile.write(new ArrayBuffer(length));
            expect(num == length).assertTrue();
            randomaccessfile.setFilePointer(0);
            let readLength = await randomaccessfile.read(new ArrayBuffer(length), { offset: length });
            expect(readLength == 0).assertTrue();
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
            done();
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_async_004 has failed for ' + err);
            expect(false).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_ASYNC_0500
     * @tc.name fileIO_randomaccessfile_read_async_005
     * @tc.desc Test read() interface. When the offset is 6. Test to read data asynchronously.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_async_005', 0, async function (done) {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_async_005');
        expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

        try {
            let randomaccessfile = await fileIO.createRandomAccessFile(fpath, 0o102);
            let length = 20;
            let readLength = await randomaccessfile.read(new ArrayBuffer(length), { offset: 6});
            expect(readLength == FILE_CONTENT.length - 6).assertTrue();
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
            done();
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_async_005 has failed for ' + err);
            expect(false).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_ASYNC_0600
     * @tc.name fileIO_randomaccessfile_read_async_006
     * @tc.desc Test read() interface. When the offset is negative.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_async_006', 3, async function (done) {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_async_006');
        let randomaccessfile = await fileIO.createRandomAccessFile(fpath, 0o102);

        try {
            await randomaccessfile.read(new ArrayBuffer(4096), { offset: -1 });
            expect(fasle).assertTrue();
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_async_006 has failed for ' + err);
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
            expect(err.code == 13900020 && err.message == "Invalid argument").assertTrue();
            done();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_ASYNC_0700
     * @tc.name fileIO_randomaccessfile_read_async_007
     * @tc.desc Test read() interface. When offset+length>buffer.size.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_async_007', 0, async function (done) {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_async_007');
        let randomaccessfile = await fileIO.createRandomAccessFile(fpath, 0o102);

        try {
            await randomaccessfile.read(new ArrayBuffer(4096), { offset: 1, length: 4096 });
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
            expect(true).assertTrue();
            done();
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_async_007 has failed for ' + err);
            expect(fasle).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_ASYNC_0800
     * @tc.name fileIO_randomaccessfile_read_async_008
     * @tc.desc Test read() interface. When the offset is greater than the buffer length.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_async_008', 0, async function (done) {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_async_008');
        let file = fileIO.openSync(fpath, fileIO.OpenMode.CREATE | fileIO.OpenMode.READ_ONLY);
        let randomaccessfile = await fileIO.createRandomAccessFile(file, 0);

        try {
            let length = 4096;
            randomaccessfile.read(new ArrayBuffer(length), { offset: length + 1 }, function (err, readLength) {
                expect(readLength == 0).assertTrue();
                randomaccessfile.close();
                fileIO.closeSync(file.fd);
                fileIO.unlinkSync(fpath);
                expect(true).assertTrue();
                done();
            });
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_async_008 has failed for ' + err);
            expect(fasle).assertTrue();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_ASYNC_0900
     * @tc.name fileIO_randomaccessfile_read_async_009
     * @tc.desc Test read() interface. When the length is greater than the buffer length.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_async_009', 3, async function (done) {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_async_009');
        let randomaccessfile = await fileIO.createRandomAccessFile(fpath, 0o102);

        try {
            let length = 4096;
            await randomaccessfile.read(new ArrayBuffer(length), { length: length + 1 });
            expect(false).assertTrue();
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_async_009 has failed for ' + err);
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
            expect(err.code == 13900020 && err.message == "Invalid argument").assertTrue();
            done();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_ASYNC_1000
     * @tc.name fileio_randomaccessfile_read_async_010
     * @tc.desc Test read() interface. The "length" of option must > 0.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('fileio_randomaccessfile_read_async_010', 3, async function (done) {
        let fpath = await nextFileName('fileio_randomaccessfile_read_async_010');
        let randomaccessfile;

        try {
            randomaccessfile = await fileIO.createRandomAccessFile(fpath, 0o102);
            let length = 4096;
            let num = randomaccessfile.writeSync(new ArrayBuffer(length));
            expect(num == length).assertTrue();
            randomaccessfile.setFilePointer(0);
            await randomaccessfile.read(new ArrayBuffer(16), { offset: 13, length: -1 });
            expect(false).assertTrue();
        } catch (err) {
            console.info('fileio_randomaccessfile_read_async_010 has failed for ' + err);
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
            expect(err.code == 13900020 && err.message == "Invalid argument").assertTrue();
            done();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_ASYNC_1100
     * @tc.name fileIO_randomaccessfile_read_async_011
     * @tc.desc Test read() interface. When there are no parameters.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_async_011', 3, async function (done) {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_async_011');
        let randomaccessfile = await fileIO.createRandomAccessFile(fpath, 0o102);
        try {
            await randomaccessfile.read();
            expect(false).assertTrue();
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_async_011 has failed for ' + err);
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
            expect(err.code == 13900020 && err.message == "Invalid argument").assertTrue();
            done();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_ASYNC_1200
     * @tc.name fileIO_randomaccessfile_read_async_012
     * @tc.desc Test read() interface. When the offset is negative.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_async_012', 3, async function (done) {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_async_012');
        let randomaccessfile = await fileIO.createRandomAccessFile(fpath, 0o102);
        try {
            await randomaccessfile.read(new ArrayBuffer(4096), { offset: -1 });
            expect(false).assertTrue();
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_async_012 has failed for ' + err);
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
            expect(err.code == 13900020 && err.message == "Invalid argument").assertTrue();
            done();
        }
    });

    /**
     * @tc.number SUB_STORAGE_FILEIO_RANDOMACCESSFILE_READ_ASYNC_1300
     * @tc.name fileIO_randomaccessfile_read_async_013
     * @tc.desc Test read() interface. When the parameter type is wrong.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('fileIO_randomaccessfile_read_async_013', 3, async function (done) {
        let fpath = await nextFileName('fileIO_randomaccessfile_read_async_013');
        let randomaccessfile = await fileIO.createRandomAccessFile(fpath, 0o102);
        try {
            await randomaccessfile.read('');
            expect(false).assertTrue();
        } catch (err) {
            console.info('fileIO_randomaccessfile_read_async_013 has failed for ' + err);
            randomaccessfile.close();
            fileIO.unlinkSync(fpath);
            expect(err.code == 13900020 && err.message == "Invalid argument").assertTrue();
            done()
        }
    });
})
}