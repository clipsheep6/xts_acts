/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import { describe, it, expect } from '@ohos/hypium';
import { randomString, getDownloadUri } from '../common';
import hilog from '@ohos.hilog';
import fileio from '@ohos.fileio';
import fileAccess from '@ohos.file.fileAccess';

const DOMAIN_CODE = 0x0001;
const TAG = 'mediaCopyTest';

export default function moveTest(helper) {
    describe('mediaMoveTest', async function () {
        let uri = 'datashare:///com.ohos.UserFile.ExternalFileManager/data/storage/el1/bundle/storage_daemon';
        let innerUri = await getDownloadUri(helper);

        /**
         * @tc.number SUB_DF_SHARE_FILE_ACCESS_COPY_0000
         * @tc.name share_file_access_test_copy_file_async_000
         * @tc.desc Test copy() interfaces, copy file, return in promise mode.
         * @tc.size MEDIUM
         * @tc.type Function
         * @tc.level Level 0
         * @tc.require
         */
        it('share_file_access_test_copy_file_async_000', 0, async (done) => {
            try {
                let name = `copy${new Date().getTime()}.txt`;
                let fileUri = await helper.createFile(uri, name);
                console.log(`copyFileInfosize000 fileUri: ${fileUri}`);
                let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
                console.log(`copyFileInfosize000 tarDirUri: ${tarDirUri}`);

                let copyResult = await helper.copy(fileUri, tarDirUri);
                console.log(`copyFileInfosize000 copyResult`);
                console.log(`copyFileInfosize000 copyResult: ${JSON.stringify(copyResult)}`);

                expect(copyResult.length).assertEqual(0);
                let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
                let fileIterator = dirInfo.scanFile();
                if (!fileIterator) {
                    console.error('listFile interface returns an undefined object');
                    return;
                }
                let copyFileInfo = fileIterator.next();
                expect(copyFileInfo.value.fileName).assertEqual(name);
                done();
            } catch (error) {
                hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_copy_file_async_000 has failed for ' + error);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number SUB_DF_SHARE_FILE_ACCESS_COPY_0100
         * @tc.name share_file_access_test_copy_dir_async_001
         * @tc.desc Test copy() interfaces, copy dir, return in promise mode.
         * @tc.size MEDIUM
         * @tc.type Function
         * @tc.level Level 0
         * @tc.require
         */
        it('share_file_access_test_copy_dir_async_001', 0, async (done) => {
            try {
                let name = `copy${new Date().getTime()}.txt`;
                let srcDirName = `srcDir${new Date().getTime()}`;
                let srcDirUri = await helper.mkDir(uri, srcDirName);
                console.log(`copyFileInfosize001 srcDirUri: ${srcDirUri}`);

                await helper.createFile(srcDirUri, name);
                let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
                console.log(`copyFileInfosize001 tarDirUri: ${tarDirUri}`);

                let copyResult = await helper.copy(srcDirUri, tarDirUri);
                console.log(`copyFileInfosize001 copyResult: ${JSON.stringify(copyResult)}`);

                expect(copyResult.length).assertEqual(0);
                let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
                let dirFileIterator = dirInfo.listFile();
                if (!dirFileIterator) {
                    console.error('listFile interface returns an undefined object');
                    return;
                }
                let copyDirInfo = dirFileIterator.next();
                expect(copyDirInfo.value.fileName).assertEqual(srcDirName);
                let fileFileIterator = copyDirInfo.value.listFile();
                if (!fileFileIterator) {
                    console.error('listFile interface returns an undefined object');
                    return;
                }
                let copyFileInfo = fileFileIterator.next();
                expect(copyFileInfo.value.fileName).assertEqual(name);
                done();
            } catch (error) {
                hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_copy_dir_async_001 has failed for ' + error);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number SUB_DF_SHARE_FILE_ACCESS_COPY_0200
         * @tc.name share_file_access_test_copy_file_async_002
         * @tc.desc Test copy() interfaces, copy file, have same file, force=true,return in promise mode.
         * @tc.size MEDIUM
         * @tc.type Function
         * @tc.level Level 0
         * @tc.require
         */
        it('share_file_access_test_copy_file_async_002', 0, async (done) => {
            try {
                let name = `copy${new Date().getTime()}.txt`;
                let fileUri = await helper.createFile(uri, name);
                // let fd = await helper.openFile(fileUri, fileAccess.OPENFLAGS.WRITE_READ);
                // console.log(`copyFileInfosize: ${fd}`);

                // await fileio.write(fd, 'test');
                // await fileio.close(fd);
                console.log(`copyFileInfosize002: 1`);

                let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
                console.log(`copyFileInfosize002: 2`);

                await helper.createFile(tarDirUri, name);
                console.log(`copyFileInfosize002: 3`);

                let copyResult = await helper.copy(fileUri, tarDirUri, true);
                console.log(`copyFileInfosize002: 4`);

                expect(copyResult.length).assertEqual(0);

                let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
                let fileIterator = dirInfo.scanFile();
                if (!fileIterator) {
                    console.error('listFile interface returns an undefined object');
                    return;
                }
                let copyFileInfo = fileIterator.next();
                expect(copyFileInfo.value.fileName).assertEqual(name);

                expect(copyFileInfo.value.size > 0).assertTrue();
                console.log(`copyFileInfosize: ${copyFileInfo.value.size}`);
                done();
            } catch (error) {
                hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_copy_file_async_002 has failed for ' + error);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number SUB_DF_SHARE_FILE_ACCESS_COPY_0300
         * @tc.name share_file_access_test_copy_file_async_003
         * @tc.desc Test copy() interfaces, copy file, have same file, no force params, return in promise mode.
         * @tc.size MEDIUM
         * @tc.type Function
         * @tc.level Level 0
         * @tc.require
         */
        it('share_file_access_test_copy_file_async_003', 0, async (done) => {
            try {
                let name = `copy${new Date().getTime()}.txt`;
                let fileUri = await helper.createFile(uri, name);
                let fd = await helper.openFile(fileUri, fileAccess.OPENFLAGS.WRITE_READ);
                console.log(`copyFileInfosize: ${fd}`);

                await fileio.write(fd, 'test');
                await fileio.close(fd);
                console.log(`copyFileInfosize003: 1`);

                let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
                console.log(`copyFileInfosize003: 2`);

                await helper.createFile(tarDirUri, name);
                console.log(`copyFileInfosize003: 3`);

                let copyResult = await helper.copy(fileUri, tarDirUri);
                console.log(`copyFileInfosize003: 4`);

                expect(copyResult.length).assertEqual(1);

                let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
                let fileIterator = dirInfo.scanFile();
                if (!fileIterator) {
                    console.error('listFile interface returns an undefined object');
                    return;
                }
                let copyFileInfo = fileIterator.next();

                expect(copyFileInfo.value.size == 0).assertTrue();
                console.log(`copyFileInfosize: ${copyFileInfo.value.size}`);
                done();
            } catch (error) {
                hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_copy_file_async_003 has failed for ' + error);
                expect(false).assertTrue();
                done();
            }
        });
        /**
         * @tc.number SUB_DF_SHARE_FILE_ACCESS_COPY_0400
         * @tc.name share_file_access_test_copy_file_async_004
         * @tc.desc Test copy() interfaces, copy file, have same file, force=false, return in promise mode.
         * @tc.size MEDIUM
         * @tc.type Function
         * @tc.level Level 0
         * @tc.require
         */
        it('share_file_access_test_copy_file_async_004', 0, async (done) => {
            try {
                let name = `copy${new Date().getTime()}.txt`;
                let fileUri = await helper.createFile(uri, name);
                let fd = await helper.openFile(fileUri, fileAccess.OPENFLAGS.WRITE_READ);
                console.log(`copyFileInfosize: ${fd}`);

                await fileio.write(fd, 'test');
                await fileio.close(fd);
                console.log(`copyFileInfosize004: 1`);

                let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
                console.log(`copyFileInfosize004: 2`);

                await helper.createFile(tarDirUri, name);
                console.log(`copyFileInfosize004: 3`);

                let copyResult = await helper.copy(fileUri, tarDirUri, false);
                console.log(`copyFileInfosize004: 4`);

                expect(copyResult.length).assertEqual(1);

                let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
                let fileIterator = dirInfo.scanFile();
                if (!fileIterator) {
                    console.error('listFile interface returns an undefined object');
                    return;
                }
                let copyFileInfo = fileIterator.next();

                expect(copyFileInfo.value.size == 0).assertTrue();
                console.log(`copyFileInfosize: ${copyFileInfo.value.size}`);
                done();
            } catch (error) {
                hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_copy_file_async_004 has failed for ' + error);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number SUB_DF_SHARE_FILE_ACCESS_COPY_0500
         * @tc.name share_file_access_test_copy_file_async_005
         * @tc.desc Test copy() interfaces, copy dir, have same file, force=true, return in promise mode.
         * @tc.size MEDIUM
         * @tc.type Function
         * @tc.level Level 0
         * @tc.require
         */
        it('share_file_access_test_copy_dir_async_005', 0, async (done) => {
            try {
                let name = `copy${new Date().getTime()}.txt`;
                let dirName = `tarDir${new Date().getTime()}`;

                let srcDirUri = await helper.mkDir(uri, dirName);
                let fileUri = await helper.createFile(srcDirUri, name);

                let fd = await helper.openFile(fileUri, fileAccess.OPENFLAGS.WRITE_READ);
                console.log(`copyFileInfosize: ${fd}`);

                await fileio.write(fd, 'test');
                await fileio.close(fd);
                console.log(`copyFileInfosize005: 1`);

                let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
                let tarDirUri_2 = await helper.mkDir(tarDirUri, dirName);
                console.log(`copyFileInfosiz005: 2`);

                await helper.createFile(tarDirUri_2, name);
                console.log(`copyFileInfosize005: 3`);

                let copyResult = await helper.copy(srcDirUri, tarDirUri, true);
                console.log(`copyFileInfosize005: 4`);

                expect(copyResult.length).assertEqual(1);

                let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
                let fileIterator = dirInfo.scanFile();
                if (!fileIterator) {
                    console.error('listFile interface returns an undefined object');
                    return;
                }
                let copyFileInfo = fileIterator.next();

                expect(copyFileInfo.value.size == 0).assertTrue();
                console.log(`copyFileInfosize: ${copyFileInfo.value.size}`);
                done();
            } catch (error) {
                hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_copy_dir_async_005 has failed for ' + error);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number SUB_DF_SHARE_FILE_ACCESS_COPY_0600
         * @tc.name share_file_access_test_copy_file_async_006
         * @tc.desc Test copy() interfaces, copy dir, have same file, no force params, return in promise mode.
         * @tc.size MEDIUM
         * @tc.type Function
         * @tc.level Level 0
         * @tc.require
         */
        it('share_file_access_test_copy_file_async_006', 0, async (done) => {
            try {
                let name = `copy${new Date().getTime()}.txt`;
                let dirName = `tarDir${new Date().getTime()}`;

                let srcDirUri = await helper.mkDir(uri, dirName);
                let fileUri = await helper.createFile(srcDirUri, name);

                let fd = await helper.openFile(fileUri, fileAccess.OPENFLAGS.WRITE_READ);
                console.log(`copyFileInfosize: ${fd}`);

                await fileio.write(fd, 'test');
                await fileio.close(fd);
                console.log(`copyFileInfosize006: 1`);

                let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
                let tarDirUri_2 = await helper.mkDir(tarDirUri, dirName);
                console.log(`copyFileInfosize006: 2`);

                await helper.createFile(tarDirUri_2, name);
                console.log(`copyFileInfosize006: 3`);

                let copyResult = await helper.copy(srcDirUri, tarDirUri);
                console.log(`copyFileInfosize006: 4`);

                expect(copyResult.length).assertEqual(1);

                let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
                let fileIterator = dirInfo.scanFile();
                if (!fileIterator) {
                    console.error('listFile interface returns an undefined object');
                    return;
                }
                let copyFileInfo = fileIterator.next();

                expect(copyFileInfo.value.size == 0).assertTrue();
                console.log(`copyFileInfosize: ${copyFileInfo.value.size}`);
                done();
            } catch (error) {
                hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_copy_file_async_006 has failed for ' + error);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number SUB_DF_SHARE_FILE_ACCESS_COPY_0700
         * @tc.name share_file_access_test_copy_file_async_007
         * @tc.desc Test copy() interfaces, copy dir, have same file, force=false, return in promise mode.
         * @tc.size MEDIUM
         * @tc.type Function
         * @tc.level Level 0
         * @tc.require
         */
        it('share_file_access_test_copy_file_async_007', 0, async (done) => {
            try {
                let name = `copy${new Date().getTime()}.txt`;
                let dirName = `tarDir${new Date().getTime()}`;

                let srcDirUri = await helper.mkDir(uri, dirName);
                let fileUri = await helper.createFile(srcDirUri, name);

                let fd = await helper.openFile(fileUri, fileAccess.OPENFLAGS.WRITE_READ);
                console.log(`copyFileInfosize: ${fd}`);

                await fileio.write(fd, 'test');
                await fileio.close(fd);
                console.log(`copyFileInfosize006: 1`);

                let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
                let tarDirUri_2 = await helper.mkDir(tarDirUri, dirName);
                console.log(`copyFileInfosize006: 2`);

                await helper.createFile(tarDirUri_2, name);
                console.log(`copyFileInfosize006: 3`);

                let copyResult = await helper.copy(srcDirUri, tarDirUri, false);
                console.log(`copyFileInfosize006: 4`);

                expect(copyResult.length).assertEqual(1);

                let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
                let fileIterator = dirInfo.scanFile();
                if (!fileIterator) {
                    console.error('listFile interface returns an undefined object');
                    return;
                }
                let copyFileInfo = fileIterator.next();

                expect(copyFileInfo.value.size == 0).assertTrue();
                console.log(`copyFileInfosize: ${copyFileInfo.value.size}`);
                done();
            } catch (error) {
                hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_copy_file_async_007 has failed for ' + error);
                expect(false).assertTrue();
                done();
            }
        });
        /**
         * @tc.number SUB_DF_SHARE_FILE_ACCESS_COPY_0800
         * @tc.name share_file_access_test_copy_dir_async_008
         * @tc.desc Test copy() interfaces, copy dir, inner to outside ，return in promise mode.
         * @tc.size MEDIUM
         * @tc.type Function
         * @tc.level Level 0
         * @tc.require
         */
        it('share_file_access_test_copy_dir_async_008', 0, async (done) => {
            try {
                let name = `copy${new Date().getTime()}.txt`;
                let srcDirName = `srcDir${new Date().getTime()}`;
                let srcDirUri = await helper.mkDir(innerUri, srcDirName);
                console.log(`copyFileInfosize008 srcDirUri: ${srcDirUri}`);

                await helper.createFile(srcDirUri, name);
                let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
                console.log(`copyFileInfosize008 tarDirUri: ${tarDirUri}`);

                let copyResult = await helper.copy(srcDirUri, tarDirUri);
                console.log(`copyFileInfosize008 copyResult: ${JSON.stringify(copyResult)}`);

                expect(copyResult.length).assertEqual(0);
                let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
                let dirFileIterator = dirInfo.listFile();
                if (!dirFileIterator) {
                    console.error('listFile interface returns an undefined object');
                    return;
                }
                let copyDirInfo = dirFileIterator.next();
                expect(copyDirInfo.value.fileName).assertEqual(srcDirName);
                let fileFileIterator = copyDirInfo.value.listFile();
                if (!fileFileIterator) {
                    console.error('listFile interface returns an undefined object');
                    return;
                }
                let copyFileInfo = fileFileIterator.next();
                expect(copyFileInfo.value.fileName).assertEqual(name);
                done();
            } catch (error) {
                hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_copy_dir_async_008 has failed for ' + error);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number SUB_DF_SHARE_FILE_ACCESS_COPY_0900
         * @tc.name share_file_access_test_copy_file_async_009
         * @tc.desc Test copy() interfaces, copy dir, inner to outside，have same file, force=true, return in promise mode.
         * @tc.size MEDIUM
         * @tc.type Function
         * @tc.level Level 0
         * @tc.require
         */
        it('share_file_access_test_copy_file_async_009', 0, async (done) => {
            try {
                let name = `copy${new Date().getTime()}.txt`;
                let dirName = `tarDir${new Date().getTime()}`;
                let srcDirUri = await helper.mkDir(innerUri, dirName);
                let fileUri = await helper.createFile(srcDirUri, name);

                let fd = await helper.openFile(fileUri, fileAccess.OPENFLAGS.WRITE_READ);
                console.log(`copyFileInfosize: ${fd}`);

                await fileio.write(fd, 'test');
                await fileio.close(fd);
                console.log(`copyFileInfosize_009: 1`);

                let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
                let tarDirUri_2 = await helper.mkDir(tarDirUri, dirName);
                console.log(`copyFileInfosize_009: 2`);

                await helper.createFile(tarDirUri_2, name);
                console.log(`copyFileInfosize_009: 3`);

                let copyResult = await helper.copy(srcDirUri, tarDirUri, true);
                console.log(`copyFileInfosize_009: 4 ${JSON.stringify(copyResult)}`);

                expect(copyResult.length).assertEqual(1);

                let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
                let fileIterator = dirInfo.scanFile();
                if (!fileIterator) {
                    console.error('listFile interface returns an undefined object');
                    return;
                }
                let copyFileInfo = fileIterator.next();

                expect(copyFileInfo.value.size == 0).assertTrue();
                console.log(`copyFileInfosize: ${copyFileInfo.value.size}`);
                done();
            } catch (error) {
                hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_copy_file_async_009 has failed for ' + error);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number SUB_DF_SHARE_FILE_ACCESS_COPY_1000
         * @tc.name share_file_access_test_copy_file_async_010
         * @tc.desc Test copy() interfaces, copy dir, have same file, no force params, return in promise mode.
         * @tc.size MEDIUM
         * @tc.type Function
         * @tc.level Level 0
         * @tc.require
         */
        it('share_file_access_test_copy_file_async_010', 0, async (done) => {
            try {
                let name = `copy${new Date().getTime()}.txt`;
                let dirName = `tarDir${new Date().getTime()}`;
                let srcDirUri = await helper.mkDir(innerUri, dirName);
                let fileUri = await helper.createFile(srcDirUri, name);

                let fd = await helper.openFile(fileUri, fileAccess.OPENFLAGS.WRITE_READ);
                console.log(`copyFileInfosize: ${fd}`);

                await fileio.write(fd, 'test');
                await fileio.close(fd);
                console.log(`copyFileInfosize010: 1`);

                let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
                let tarDirUri_2 = await helper.mkDir(tarDirUri, dirName);
                console.log(`copyFileInfosize010: 2`);

                await helper.createFile(tarDirUri_2, name);
                console.log(`copyFileInfosize010: 3`);

                let copyResult = await helper.copy(srcDirUri, tarDirUri);
                console.log(`copyFileInfosize010: 4 ${JSON.stringify(copyResult)}`);

                expect(copyResult.length).assertEqual(1);

                let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
                let fileIterator = dirInfo.scanFile();
                if (!fileIterator) {
                    console.error('listFile interface returns an undefined object');
                    return;
                }
                let copyFileInfo = fileIterator.next();

                expect(copyFileInfo.value.size == 0).assertTrue();
                console.log(`copyFileInfosize: ${copyFileInfo.value.size}`);
                done();
            } catch (error) {
                hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_copy_file_async_010 has failed for ' + error);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number SUB_DF_SHARE_FILE_ACCESS_COPY_1100
         * @tc.name share_file_access_test_copy_file_async_011
         * @tc.desc Test copy() interfaces, copy dir, have same file, force=false, return in promise mode.
         * @tc.size MEDIUM
         * @tc.type Function
         * @tc.level Level 0
         * @tc.require
         */
        it('share_file_access_test_copy_file_async_011', 0, async (done) => {
            try {
                let name = `copy${new Date().getTime()}.txt`;
                let dirName = `tarDir${new Date().getTime()}`;

                let srcDirUri = await helper.mkDir(innerUri, dirName);
                let fileUri = await helper.createFile(srcDirUri, name);

                let fd = await helper.openFile(fileUri, fileAccess.OPENFLAGS.WRITE_READ);
                console.log(`copyFileInfosize: ${fd}`);

                await fileio.write(fd, 'test');
                await fileio.close(fd);
                console.log(`copyFileInfosize011: 1`);

                let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
                let tarDirUri_2 = await helper.mkDir(tarDirUri, dirName);
                console.log(`copyFileInfosize011: 2`);

                await helper.createFile(tarDirUri_2, name);
                console.log(`copyFileInfosize011: 3`);

                let copyResult = await helper.copy(srcDirUri, tarDirUri, false);
                console.log(`copyFileInfosize011: 4`);

                expect(copyResult.length).assertEqual(1);

                let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
                let fileIterator = dirInfo.scanFile();
                if (!fileIterator) {
                    console.error('listFile interface returns an undefined object');
                    return;
                }
                let copyFileInfo = fileIterator.next();

                expect(copyFileInfo.value.size == 0).assertTrue();
                console.log(`copyFileInfosize: ${copyFileInfo.value.size}`);
                done();
            } catch (error) {
                hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_copy_file_async_011 has failed for ' + error);
                expect(false).assertTrue();
                done();
            }
        });
    });
}
