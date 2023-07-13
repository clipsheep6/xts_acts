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
        // let helper = fileAccess.createFileAccessHelper(globalThis.abilityContext);
        let uri = await getDownloadUri(helper);
        let outsideUri = 'datashare:///com.ohos.UserFile.ExternalFileManager/data/storage/el1/bundle/storage_daemon';

        // /**
        //  * @tc.number SUB_DF_MEDIA_FILE_ACCESS_COPY_0000
        //  * @tc.name media_file_access_test_copy_file_async_000
        //  * @tc.desc Test copy() interfaces, copy file, return in promise mode.
        //  * @tc.size MEDIUM
        //  * @tc.type Function
        //  * @tc.level Level 0
        //  * @tc.require
        //  */
        // it('media_file_access_test_copy_file_async_000', 0, async (done) => {
        //     try {
        //         let name = `copy${new Date().getTime()}.txt`;
        //         let srcFileUri = await helper.createFile(uri, name);
        //         let aaaa = await helper.getFileInfoFromUri(srcFileUri);

        //         console.log(`copyFile000: ${JSON.stringify(aaaa)}`);
        //         console.log(`copyFile000: ${aaaa.size}`);
        //         console.log(`copyFile000: ${aaaa.fileName}`);
        //         let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
        //         let copyResult = await helper.copy(srcFileUri, tarDirUri);
        //         console.log(`copyFile000:  ${copyResult}`);
        //         console.log(`copyFile000:  ${JSON.stringify(copyResult)}`);
        //         expect(copyResult.length).assertEqual(0);
        //         let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
        //         let fileIterator = dirInfo.scanFile();
        //         if (!fileIterator) {
        //             console.error('listFile interface returns an undefined object');
        //             return;
        //         }
        //         let copyFileInfo = fileIterator.next();
        //         expect(copyFileInfo.value.fileName).assertEqual(name);
        //         done();
        //     } catch (error) {
        //         hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_copy_file_async_000 has failed for ' + error);
        //         expect(false).assertTrue();
        //         done();
        //     }
        // });

        // /**
        //  * @tc.number SUB_DF_MEDIA_FILE_ACCESS_COPY_0100
        //  * @tc.name media_file_access_test_copy_dir_async_001
        //  * @tc.desc Test copy() interfaces, copy dir, return in promise mode.
        //  * @tc.size MEDIUM
        //  * @tc.type Function
        //  * @tc.level Level 0
        //  * @tc.require
        //  */
        // it('media_file_access_test_copy_dir_async_001', 0, async (done) => {
        //     try {
        //         let name = `copy${new Date().getTime()}.txt`;
        //         let srcDirName = `srcDir${new Date().getTime()}`;
        //         let srcDirUri = await helper.mkDir(uri, srcDirName);
        //         await helper.createFile(srcDirUri, name);
        //         let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
        //         let copyResult = await helper.copy(srcDirUri, tarDirUri);
        //         console.log(`copyFile001:  ${copyResult}`);
        //         console.log(`copyFile001:  ${JSON.stringify(copyResult)}`);
        //         expect(copyResult.length).assertEqual(0);
        //         let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
        //         let dirFileIterator = dirInfo.listFile();
        //         if (!dirFileIterator) {
        //             console.error('listFile interface returns an undefined object');
        //             return;
        //         }
        //         let copyDirInfo = dirFileIterator.next();
        //         expect(copyDirInfo.value.fileName).assertEqual(srcDirName);
        //         let fileFileIterator = copyDirInfo.value.listFile();
        //         if (!fileFileIterator) {
        //             console.error('listFile interface returns an undefined object');
        //             return;
        //         }
        //         let copyFileInfo = fileFileIterator.next();
        //         expect(copyFileInfo.value.fileName).assertEqual(name);
        //         done();
        //     } catch (error) {
        //         hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_copy_dir_async_001 has failed for ' + error);
        //         expect(false).assertTrue();
        //         done();
        //     }
        // });

        // /**
        //  * @tc.number SUB_DF_MEDIA_FILE_ACCESS_COPY_0200
        //  * @tc.name media_file_access_test_copy_file_async_002
        //  * @tc.desc Test copy() interfaces, copy file, have same file, force=true,return in promise mode.
        //  * @tc.size MEDIUM
        //  * @tc.type Function
        //  * @tc.level Level 0
        //  * @tc.require
        //  */
        // it('media_file_access_test_copy_file_async_002', 0, async (done) => {
        //     try {
        //         let name = `copy${new Date().getTime()}.txt`;
        //         let srcFileUri = await helper.createFile(uri, name);
        //         let fd = await helper.openFile(srcFileUri, fileAccess.OPENFLAGS.WRITE_READ);
        //         console.log(`copyFileInfosize1: ${fd} ${name}`);

        //         await fileio.write(fd, 'test');
        //         await fileio.close(fd);
        //         console.log(`copyFileInfosize0021: 1 ${srcFileUri}`);

        //         let aaaa = await helper.getFileInfoFromUri(srcFileUri);

        //         console.log(`copyFileInfosize: ${JSON.stringify(aaaa)}`);
        //         console.log(`copyFileInfosize: ${aaaa.size}`);

        //         let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
        //         console.log(`copyFileInfosize002: 2`);

        //         await helper.createFile(tarDirUri, name);
        //         console.log(`copyFileInfosize002: 3`);

        //         let copyResult = await helper.copy(srcFileUri, tarDirUri, true);
        //         console.log(`copyFileInfosize002: 4`);

        //         expect(copyResult.length).assertEqual(0);

        //         let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
        //         let fileIterator = dirInfo.scanFile();
        //         if (!fileIterator) {
        //             console.error('listFile interface returns an undefined object');
        //             return;
        //         }
        //         let copyFileInfo = fileIterator.next();
        //         expect(copyFileInfo.value.fileName).assertEqual(name);

        //         expect(copyFileInfo.value.size > 0).assertTrue();
        //         console.log(`copyFileInfosize: ${copyFileInfo.value.size}`);
        //         done();
        //     } catch (error) {
        //         hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_copy_file_async_002 has failed for ' + error);
        //         expect(false).assertTrue();
        //         done();
        //     }
        // });

        /**
         * @tc.number SUB_DF_MEDIA_FILE_ACCESS_COPY_0300
         * @tc.name media_file_access_test_copy_file_async_003
         * @tc.desc Test copy() interfaces, copy file, have same file, no force params, return in promise mode.
         * @tc.size MEDIUM
         * @tc.type Function
         * @tc.level Level 0
         * @tc.require
         */
        it('media_file_access_test_copy_file_async_003', 0, async (done) => {
            try {
                let name = `copy${new Date().getTime()}.txt`;
                let srcFileUri = await helper.createFile(uri, name);
                let fd = await helper.openFile(srcFileUri, fileAccess.OPENFLAGS.WRITE_READ);
                console.log(`copyFileInfosize fd: ${fd}`);

                await fileio.write(fd, 'test');
                await fileio.close(fd);
                console.log(`copyFileInfosize003: 1`);

                let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
                console.log(`copyFileInfosize003: 2`);

                await helper.createFile(tarDirUri, name);
                console.log(`copyFileInfosize003: 3`);

                let copyResult = await helper.copy(srcFileUri, tarDirUri);

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
                hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_copy_file_async_003 has failed for ' + error);
                expect(false).assertTrue();
                done();
            }
        });
        // /**
        //  * @tc.number SUB_DF_MEDIA_FILE_ACCESS_COPY_0400
        //  * @tc.name media_file_access_test_copy_file_async_004
        //  * @tc.desc Test copy() interfaces, copy file, have same file, force=false, return in promise mode.
        //  * @tc.size MEDIUM
        //  * @tc.type Function
        //  * @tc.level Level 0
        //  * @tc.require
        //  */
        // it('media_file_access_test_copy_file_async_004', 0, async (done) => {
        //     try {
        //         let name = `copy${new Date().getTime()}.txt`;
        //         let srcFileUri = await helper.createFile(uri, name);
        //         let fd = await helper.openFile(srcFileUri, fileAccess.OPENFLAGS.WRITE_READ);
        //         console.log(`copyFileInfosize: ${fd}`);

        //         await fileio.write(fd, 'test');
        //         await fileio.close(fd);
        //         console.log(`copyFileInfosize004: 1`);

        //         let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
        //         console.log(`copyFileInfosize004: 2`);

        //         await helper.createFile(tarDirUri, name);
        //         console.log(`copyFileInfosize004: 3`);

        //         let copyResult = await helper.copy(srcFileUri, tarDirUri, false);
        //         console.log(`copyFileInfosize004: 4`);

        //         expect(copyResult.length).assertEqual(1);

        //         let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
        //         let fileIterator = dirInfo.scanFile();
        //         if (!fileIterator) {
        //             console.error('listFile interface returns an undefined object');
        //             return;
        //         }
        //         let copyFileInfo = fileIterator.next();

        //         expect(copyFileInfo.value.size == 0).assertTrue();
        //         console.log(`copyFileInfosize: ${copyFileInfo.value.size}`);
        //         done();
        //     } catch (error) {
        //         hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_copy_file_async_004 has failed for ' + error);
        //         expect(false).assertTrue();
        //         done();
        //     }
        // });

        // /**
        //  * @tc.number SUB_DF_MEDIA_FILE_ACCESS_COPY_0500
        //  * @tc.name media_file_access_test_copy_dir_async_005
        //  * @tc.desc Test copy() interfaces, copy dir, have same file, force=true, return in promise mode.
        //  * @tc.size MEDIUM
        //  * @tc.type Function
        //  * @tc.level Level 0
        //  * @tc.require
        //  */
        // it('media_file_access_test_copy_dir_async_005', 0, async (done) => {
        //     try {
        //         let name = `copy${new Date().getTime()}.txt`;
        //         let dirName = `tarDir${new Date().getTime()}`;
        //         let srcDirUri = await helper.mkDir(uri, dirName);
        //         let srcFileUri = await helper.createFile(srcDirUri, name);

        //         let fd = await helper.openFile(srcFileUri, fileAccess.OPENFLAGS.WRITE_READ);
        //         console.log(`copyFileInfosize: ${fd}`);

        //         await fileio.write(fd, 'test');
        //         await fileio.close(fd);
        //         console.log(`copyFileInfosize005: 1`);

        //         let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
        //         let tarDirUri_2 = await helper.mkDir(tarDirUri, dirName);
        //         console.log(`copyFileInfosiz005: 2`);

        //         await helper.createFile(tarDirUri_2, name);
        //         console.log(`copyFileInfosize005: 3`);

        //         let copyResult = await helper.copy(srcDirUri, tarDirUri, true);
        //         console.log(`copyFileInfosize005: 4`);
        //         console.log(`copyFileInfosize005: 4${JSON.stringify(copyResult)}`);

        //         expect(copyResult.length).assertEqual(0);

        //         let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
        //         let fileIterator = dirInfo.scanFile();
        //         if (!fileIterator) {
        //             console.error('listFile interface returns an undefined object');
        //             return;
        //         }
        //         let copyFileInfo = fileIterator.next();
        //         console.log(`copyFileInfosize: ${copyFileInfo.value.size}`);

        //         expect(copyFileInfo.value.size == 4).assertTrue();
        //         done();
        //     } catch (error) {
        //         hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_copy_dir_async_005 has failed for ' + error);
        //         expect(false).assertTrue();
        //         done();
        //     }
        // });

        // /**
        //  * @tc.number SUB_DF_MEDIA_FILE_ACCESS_COPY_0600
        //  * @tc.name media_file_access_test_copy_dir_async_006
        //  * @tc.desc Test copy() interfaces, copy dir, have same file, no force params, return in promise mode.
        //  * @tc.size MEDIUM
        //  * @tc.type Function
        //  * @tc.level Level 0
        //  * @tc.require
        //  */
        // it('media_file_access_test_copy_dir_async_006', 0, async (done) => {
        //     try {
        //         let name = `copy${new Date().getTime()}.txt`;
        //         let dirName = `tarDir${new Date().getTime()}`;

        //         let srcDirUri = await helper.mkDir(uri, dirName);
        //         let srcFileUri = await helper.createFile(srcDirUri, name);

        //         let fd = await helper.openFile(srcFileUri, fileAccess.OPENFLAGS.WRITE_READ);
        //         console.log(`copyFileInfosize: ${fd}`);

        //         await fileio.write(fd, 'test');
        //         await fileio.close(fd);
        //         console.log(`copyFileInfosize006: 1`);

        //         let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
        //         let tarDirUri_2 = await helper.mkDir(tarDirUri, dirName);
        //         console.log(`copyFileInfosize006: 2`);

        //         await helper.createFile(tarDirUri_2, name);
        //         console.log(`copyFileInfosize006: 3`);

        //         let copyResult = await helper.copy(srcDirUri, tarDirUri);
        //         console.log(`copyFileInfosize006: 4`);

        //         expect(copyResult.length).assertEqual(1);

        //         let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
        //         let fileIterator = dirInfo.scanFile();
        //         if (!fileIterator) {
        //             console.error('listFile interface returns an undefined object');
        //             return;
        //         }
        //         let copyFileInfo = fileIterator.next();
        //         console.log(`copyFileInfosize: ${copyFileInfo.value.size}`);

        //         expect(copyFileInfo.value.size == 0).assertTrue();
        //         done();
        //     } catch (error) {
        //         hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_copy_dir_async_006 has failed for ' + error);
        //         expect(false).assertTrue();
        //         done();
        //     }
        // });

        // /**
        //  * @tc.number SUB_DF_MEDIA_FILE_ACCESS_COPY_0700
        //  * @tc.name media_file_access_test_copy_dir_async_007
        //  * @tc.desc Test copy() interfaces, copy dir, have same file, force=false, return in promise mode.
        //  * @tc.size MEDIUM
        //  * @tc.type Function
        //  * @tc.level Level 0
        //  * @tc.require
        //  */
        // it('media_file_access_test_copy_dir_async_007', 0, async (done) => {
        //     try {
        //         let name = `copy${new Date().getTime()}.txt`;
        //         let dirName = `tarDir${new Date().getTime()}`;

        //         let srcDirUri = await helper.mkDir(uri, dirName);
        //         let srcFileUri = await helper.createFile(srcDirUri, name);

        //         let fd = await helper.openFile(srcFileUri, fileAccess.OPENFLAGS.WRITE_READ);
        //         console.log(`copyFileInfosize: ${fd}`);

        //         await fileio.write(fd, 'test');
        //         await fileio.close(fd);
        //         console.log(`copyFileInfosize007: 1`);

        //         let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
        //         let tarDirUri_2 = await helper.mkDir(tarDirUri, dirName);
        //         console.log(`copyFileInfosize007: 2`);

        //         await helper.createFile(tarDirUri_2, name);
        //         console.log(`copyFileInfosize007: 3`);

        //         let copyResult = await helper.copy(srcDirUri, tarDirUri, false);
        //         console.log(`copyFileInfosize007: 4`);

        //         expect(copyResult.length).assertEqual(1);

        //         let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
        //         let fileIterator = dirInfo.scanFile();
        //         if (!fileIterator) {
        //             console.error('listFile interface returns an undefined object');
        //             return;
        //         }
        //         let copyFileInfo = fileIterator.next();

        //         expect(copyFileInfo.value.size == 0).assertTrue();
        //         console.log(`copyFileInfosize: ${copyFileInfo.value.size}`);
        //         done();
        //     } catch (error) {
        //         hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_copy_dir_async_007 has failed for ' + error);
        //         expect(false).assertTrue();
        //         done();
        //     }
        // });

        // /**
        //  * @tc.number SUB_DF_MEDIA_FILE_ACCESS_COPY_0800
        //  * @tc.name media_file_access_test_copy_file_async_008
        //  * @tc.desc Test copy() interfaces, copy file, outside to inner, return in promise mode.
        //  * @tc.size MEDIUM
        //  * @tc.type Function
        //  * @tc.level Level 0
        //  * @tc.require
        //  */
        // it('media_file_access_test_copy_file_async_008', 0, async (done) => {
        //     try {
        //         let name = `copy${new Date().getTime()}.txt`;
        //         console.log(`copyFile: 1,${name}`);

        //         let srcFileUri = await helper.createFile(outsideUri, name);
        //         console.log(`copyFile: 2,${srcFileUri}`);

        //         let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
        //         console.log(`copyFile: 3,${tarDirUri}`);

        //         let copyResult = await helper.copy(srcFileUri, tarDirUri);
        //         console.log(`copyFile: 4 ${copyResult}`);
        //         console.log(`copyFile: 4 ${JSON.stringify(copyResult)}`);

        //         expect(copyResult.length).assertEqual(0);
        //         let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
        //         let fileIterator = dirInfo.scanFile();
        //         if (!fileIterator) {
        //             console.error('listFile interface returns an undefined object');
        //             return;
        //         }
        //         let copyFileInfo = fileIterator.next();
        //         expect(copyFileInfo.value.fileName).assertEqual(name);
        //         done();
        //     } catch (error) {
        //         hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_copy_file_async_008 has failed for ' + error);
        //         expect(false).assertTrue();
        //         done();
        //     }
        // });

        // /**
        //  * @tc.number SUB_DF_MEDIA_FILE_ACCESS_COPY_0900
        //  * @tc.name media_file_access_test_copy_file_async_009
        //  * @tc.desc Test copy() interfaces, copy file, have same file, outside to inner,
        //  *          force=true,return in promise mode.
        //  * @tc.size MEDIUM
        //  * @tc.type Function
        //  * @tc.level Level 0
        //  * @tc.require
        //  */
        // it('media_file_access_test_copy_file_async_009', 0, async (done) => {
        //     try {
        //         let name = `copy${new Date().getTime()}.txt`;
        //         let srcFileUri = await helper.createFile(outsideUri, name);
        //         let fd = await helper.openFile(srcFileUri, fileAccess.OPENFLAGS.WRITE_READ);
        //         console.log(`copyFileInfosize: ${fd}`);

        //         await fileio.write(fd, 'test');
        //         await fileio.close(fd);
        //         console.log(`copyFileInfo009: 1`);

        //         let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
        //         console.log(`copyFileInfo009: 2`);

        //         await helper.createFile(tarDirUri, name);
        //         console.log(`copyFileInfo009: 3`);

        //         let copyResult = await helper.copy(srcFileUri, tarDirUri, true);
        //         console.log(`copyFileInfo009: 4, ${JSON.stringify(copyResult)}`);

        //         expect(copyResult.length).assertEqual(0);

        //         let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
        //         let fileIterator = dirInfo.scanFile();
        //         if (!fileIterator) {
        //             console.error('listFile interface returns an undefined object');
        //             return;
        //         }
        //         let copyFileInfo = fileIterator.next();
        //         console.log(`copyFileInfo009: ${copyFileInfo.value.size}`);
        //         console.log(`copyFileInfo009: ${copyFileInfo.value.fileName}`);

        //         expect(copyFileInfo.value.fileName).assertEqual(name);
        //         // expect(copyFileInfo.value.size).assertEqual(4);

        //         done();
        //     } catch (error) {
        //         hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_copy_file_async_009 has failed for ' + error);
        //         expect(false).assertTrue();
        //         done();
        //     }
        // });

        // /**
        //  * @tc.number SUB_DF_MEDIA_FILE_ACCESS_COPY_1000
        //  * @tc.name media_file_access_test_copy_file_async_010
        //  * @tc.desc Test copy() interfaces, copy file, have same file, outside to inner,
        //  *          no force params,return in promise mode.
        //  * @tc.size MEDIUM
        //  * @tc.type Function
        //  * @tc.level Level 0
        //  * @tc.require
        //  */
        // it('media_file_access_test_copy_file_async_010', 0, async (done) => {
        //     try {
        //         let name = `copy${new Date().getTime()}.txt`;
        //         let srcFileUri = await helper.createFile(outsideUri, name);
        //         let fd = await helper.openFile(srcFileUri, fileAccess.OPENFLAGS.WRITE_READ);
        //         console.log(`copyFileInfo010: ${fd}`);

        //         await fileio.write(fd, 'test');
        //         await fileio.close(fd);
        //         console.log(`copyFileInfo010: 1`);

        //         let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
        //         console.log(`copyFileInfo010: 2`);

        //         await helper.createFile(tarDirUri, name);
        //         console.log(`copyFileInfo010: 3`);

        //         let copyResult = await helper.copy(srcFileUri, tarDirUri);
        //         console.log(`copyFileInfo010: 4, ${JSON.stringify(copyResult)}`);

        //         expect(copyResult.length).assertEqual(1);

        //         let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
        //         let fileIterator = dirInfo.scanFile();
        //         if (!fileIterator) {
        //             console.error('listFile interface returns an undefined object');
        //             return;
        //         }
        //         let copyFileInfo = fileIterator.next();
        //         console.log(`copyFileInfo010: ${copyFileInfo.value.fileName}`);

        //         expect(copyFileInfo.value.fileName).assertEqual(name);
        //         console.log(`copyFileInfo010 size: ${copyFileInfo.value.size}`);

        //         expect(copyFileInfo.value.size == 0).assertTrue();
        //         done();
        //     } catch (error) {
        //         hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_copy_file_async_010 has failed for ' + error);
        //         expect(false).assertTrue();
        //         done();
        //     }
        // });

        // /**
        //  * @tc.number SUB_DF_MEDIA_FILE_ACCESS_COPY_1100
        //  * @tc.name media_file_access_test_copy_file_async_011
        //  * @tc.desc Test copy() interfaces, copy file, have same file, outside to inner,
        //  *          force=false,return in promise mode.
        //  * @tc.size MEDIUM
        //  * @tc.type Function
        //  * @tc.level Level 0
        //  * @tc.require
        //  */
        // it('media_file_access_test_copy_file_async_011', 0, async (done) => {
        //     try {
        //         let name = `copy${new Date().getTime()}.txt`;
        //         let srcFileUri = await helper.createFile(outsideUri, name);
        //         let fd = await helper.openFile(srcFileUri, fileAccess.OPENFLAGS.WRITE_READ);
        //         console.log(`copyFileInfo011: ${fd}`);

        //         await fileio.write(fd, 'test');
        //         await fileio.close(fd);
        //         console.log(`copyFileInfo011: 1`);

        //         let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
        //         console.log(`copyFileInfo011: 2`);

        //         await helper.createFile(tarDirUri, name);
        //         console.log(`copyFileInfo011: 3`);

        //         let copyResult = await helper.copy(srcFileUri, tarDirUri, false);
        //         console.log(`copyFileInfo011: 4, ${JSON.stringify(copyResult)}`);

        //         expect(copyResult.length).assertEqual(1);

        //         let dirInfo = await helper.getFileInfoFromUri(tarDirUri);
        //         let fileIterator = dirInfo.scanFile();
        //         if (!fileIterator) {
        //             console.error('listFile interface returns an undefined object');
        //             return;
        //         }
        //         let copyFileInfo = fileIterator.next();
        //         console.log(`copyFileInfo011: ${copyFileInfo.value.fileName}`);

        //         expect(copyFileInfo.value.fileName).assertEqual(name);
        //         console.log(`copyFileInfo011 size: ${copyFileInfo.value.size}`);

        //         expect(copyFileInfo.value.size == 0).assertTrue();
        //         done();
        //     } catch (error) {
        //         hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_copy_file_async_011 has failed for ' + error);
        //         expect(false).assertTrue();
        //         done();
        //     }
        // });

        // /**
        //  * @tc.number SUB_DF_MEDIA_FILE_ACCESS_COPY_1200
        //  * @tc.name media_file_access_test_copy_file_error_target_uri_async_012
        //  * @tc.desc Test copy() interfaces, copy file, error target uri, return in promise mode.
        //  * @tc.size MEDIUM
        //  * @tc.type Function
        //  * @tc.level Level 0
        //  * @tc.require
        //  */
        // it('media_file_access_test_copy_file_error_target_uri_async_012', 0, async (done) => {
        //     try {
        //         let name = `copy${new Date().getTime()}.txt`;
        //         let srcFileUri = await helper.createFile(uri, name);
        //         let copyResult = await helper.copy(srcFileUri, 'errorPath');
        //         expect(copyResult.length == 1).assertEqual(0);
        //         console.log(`copyResult: ${copyResult}`);
        //         console.log(`copyResult: ${JSON.stringify(copyResult)}`);

        //         done();
        //     } catch (error) {
        //         hilog.error(
        //             DOMAIN_CODE,
        //             TAG,
        //             'media_file_access_test_copy_file_error_target_uri_async_012 has failed for ' + error
        //         );
        //         expect(false).assertTrue();
        //         done();
        //     }
        // });

        // /**
        //  * @tc.number SUB_DF_MEDIA_FILE_ACCESS_COPY_1300
        //  * @tc.name media_file_access_test_copy_file_error_source_uri_async_013
        //  * @tc.desc Test copy() interfaces, copy file, error source uri, return in promise mode.
        //  * @tc.size MEDIUM
        //  * @tc.type Function
        //  * @tc.level Level 0
        //  * @tc.require
        //  */
        // it('media_file_access_test_copy_file_error_source_uri_async_013', 0, async (done) => {
        //     try {
        //         let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
        //         let copyResult = await helper.copy('errorPath', tarDirUri);

        //         expect(copyResult.length == 1).assertEqual(0);
        //         console.log(`copyResult: ${copyResult}`);
        //         console.log(`copyResult: ${JSON.stringify(copyResult)}`);

        //         done();
        //     } catch (error) {
        //         hilog.error(
        //             DOMAIN_CODE,
        //             TAG,
        //             'media_file_access_test_copy_file_error_source_uri_async_013 has failed for ' + error
        //         );
        //         expect(false).assertTrue();
        //         done();
        //     }
        // });

        // /**
        //  * @tc.number SUB_DF_MEDIA_FILE_ACCESS_COPY_1400
        //  * @tc.name media_file_access_test_copy_file_error_level_async_014
        //  * @tc.desc Test copy() interfaces, copy dir, return in promise mode.
        //  * @tc.size MEDIUM
        //  * @tc.type Function
        //  * @tc.level Level 0
        //  * @tc.require
        //  */
        // it('media_file_access_test_copy_file_error_level_async_014', 0, async (done) => {
        //     try {
        //         let name = `copy${new Date().getTime()}.txt`;
        //         let srcDirName = `srcDir${new Date().getTime()}`;
        //         let srcDirUri = await helper.mkDir(uri, srcDirName);
        //         await helper.createFile(srcDirUri, name);

        //         let tarDirUri = await helper.mkDir(srcDirUri, `tarDir${new Date().getTime()}`);
        //         let copyResult = await helper.copy(srcDirUri, tarDirUri);
        //         console.log(`copyFile001:  ${copyResult}`);
        //         console.log(`copyFile001:  ${JSON.stringify(copyResult)}`);
        //         expect(copyResult.length).assertEqual(1);
        //     } catch (error) {
        //         hilog.error(
        //             DOMAIN_CODE,
        //             TAG,
        //             'media_file_access_test_copy_file_error_level_async_014 has failed for ' + error
        //         );
        //         expect(false).assertTrue();
        //         done();
        //     }
        // });
    });
}
