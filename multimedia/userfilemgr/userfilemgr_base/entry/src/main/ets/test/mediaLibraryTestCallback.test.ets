/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
import mediaLibrary from '@ohos.multimedia.mediaLibrary';
import userfile_manager from '@ohos.filemanagement.userfile_manager';
import fileio from '@ohos.fileio';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';
import {
    sleep,
    IMAGE_TYPE,
    VIDEO_TYPE,
    AUDIO_TYPE,
    FILE_TYPE,
    FILEKEY,
    checkPresetsAssets,
    checkAssetsCount,
    fetchOps,
    getPermission,
    isNum,
} from '../../../../../../common';


export default function userFileMgrTestCallback(abilityContext) {
    describe('userFileMgrTestCallback', function () {
        const userfile_mgr = userfile_manager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info('beforeAll case');
            await getPermission();
            await checkPresetsAssets(userfile_mgr, 'ActsUserFileMgrBase');
        });
        beforeEach(function () {
            console.info('beforeEach case');
        });
        afterEach(async function () {
            console.info('afterEach case');
            await sleep(500)
        });
        afterAll(function () {
            console.info('afterAll case');
        });

        let imageAndVideofetchOp = {
            selections: '(' + FILEKEY.RELATIVE_PATH + '= ? or ' + FILEKEY.RELATIVE_PATH + '= ?' + ') AND (' +
                FILEKEY.MEDIA_TYPE + '= ? or ' + FILEKEY.MEDIA_TYPE + '= ?)',
            selectionArgs: ['Videos/Static/', 'Pictures/Static/', IMAGE_TYPE.toString(), VIDEO_TYPE.toString()],
        };
        let imageAndVideoAndfilefetchOp = {
            selections: '(' + FILEKEY.RELATIVE_PATH + '= ? or ' + FILEKEY.RELATIVE_PATH + '= ? or ' + FILEKEY.RELATIVE_PATH + '= ?' + ') AND (' +
                FILEKEY.MEDIA_TYPE + '= ? or ' + FILEKEY.MEDIA_TYPE + '= ? or ' + FILEKEY.MEDIA_TYPE + '= ?)',
            selectionArgs: ['Documents/Static/', 'Videos/Static/', 'Pictures/Static/', IMAGE_TYPE.toString(), VIDEO_TYPE.toString(), FILE_TYPE.toString()],
            order: FILEKEY.DATE_ADDED + " DESC",
        };
        let imageAndVideoAndfileAndAudiofetchOp = {
            selections: '(' + FILEKEY.RELATIVE_PATH + '= ? or ' + FILEKEY.RELATIVE_PATH + '= ? or ' + FILEKEY.RELATIVE_PATH + '= ? or ' + FILEKEY.RELATIVE_PATH + '= ?' + ') AND (' +
                FILEKEY.MEDIA_TYPE + '= ? or ' + FILEKEY.MEDIA_TYPE + '= ? or ' + FILEKEY.MEDIA_TYPE + '= ? or ' + FILEKEY.MEDIA_TYPE + '= ?)',
            selectionArgs: ['Documents/Static/', 'Videos/Static/', 'Pictures/Static/', 'Audios/Static/', IMAGE_TYPE.toString(), VIDEO_TYPE.toString(), FILE_TYPE.toString(), AUDIO_TYPE.toString(),],
            order: FILEKEY.DATE_ADDED + " DESC",
        };

        async function copyFile(fd1, fd2) {
            let stat = await fileio.fstat(fd1);
            let buf = new ArrayBuffer(stat.size);
            await fileio.read(fd1, buf);
            await fileio.write(fd2, buf);
        }

        const props = {
            image: {
                mimeType: 'image/*',
                displayName: '01.jpg',
                relativePath: 'Pictures/Static/',
                size: 348113,
                mediaType: IMAGE_TYPE.toString(),
                title: '01',
                width: 1279,
                height: 1706,
                orientation: 0,
                duration: '0',
                albumId: '1118',
            },
            video: {
                mimeType: 'video/mp4',
                displayName: '01.mp4',
                relativePath: 'Videos/Static/',
                size: 4853005,
                mediaType: VIDEO_TYPE.toString(),
                title: '01',
                width: 1280,
                height: 720,
                orientation: 0,
                duration: '10100',
            },
            audio: {
                mimeType: 'audio/mpeg',
                displayName: '01.mp3',
                relativePath: 'Audios/Static/',
                size: 1958311,
                mediaType: AUDIO_TYPE.toString(),
                title: '01',
                artist: '元数据测试',
                orientation: 0,
                duration: '219600',
            },
            file: {
                mimeType: 'file/*',
                displayName: '01.dat',
                relativePath: 'Documents/Static/',
                size: 10,
                mediaType: FILE_TYPE.toString(),
                title: '01',
                width: 0,
                height: 0,
                orientation: 0,
                duration: '0',
            }
        }

        async function checkFileAssetAttr(done, testNum, media_type, fetchOps, type, count) {
            try {
                const fetchFileResult = await userfile_mgr.getFileAssets(media_type, fetchOps);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, count);
                if (!checkAssetCountPass) return;
                fetchFileResult.getFirstObject(async (err, asset) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`)
                        expect.assertFail();
                        done();
                        return;
                    }
                    expect(asset.displayName).assertEqual(props[type].displayName);
                    expect(asset.mediaType.toString()).assertEqual(props[type].mediaType);
                    done();
                });

            } catch (error) {
                console.info(`${testNum}:: error :${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        const checkGetPublicDirectory = async (done, testNum, dir, val) => {
            try {
                userfile_mgr.getPublicDirectory(dir, async (err, res) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`)
                        expect.assertFail();
                        done();
                        return;
                    }
                    expect(res).assertEqual(val);
                    done();
                });

            } catch (error) {
                console.info(`${testNum}:: error :${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        const createAssetTest = async (done, testNum, media_type, fetchOps, type, name, path) => {
            try {
                const fetchFileResult = await userfile_mgr.getFileAssets(media_type, fetchOps);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                let asset = await fetchFileResult.getFirstObject();
                userfile_mgr.createAsset(type, name, path, async (err, creatAsset) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`)
                        expect.assertFail();
                        done();
                        return;
                    }
                    const fd = await asset.open('rw');
                    const creatAssetFd = await creatAsset.open('rw');
                    await copyFile(fd, creatAssetFd);
                    await creatAsset.close(creatAssetFd);
                    await asset.close(fd);
                    expect(true).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNum}:: error :${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        const createAssetSameNameTest = async (done, testNum, media_type, fetchOps, type, name, path) => {
            try {
                const fetchFileResult = await userfile_mgr.getFileAssets(media_type, fetchOps);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                let asset = await fetchFileResult.getFirstObject();
                const creatAsset = await userfile_mgr.createAsset(type, name, path);
                const fd = await asset.open('rw');
                const creatAssetFd = await creatAsset.open('rw');
                await copyFile(fd, creatAssetFd);
                await creatAsset.close(creatAssetFd);
                await asset.close(fd);
                try {
                    userfile_mgr.createAsset(type, name, path, async (err, creatAsset) => {
                        if (err || creatAsset == undefined) {
                            expect(true).assertTrue();
                            done();
                            return;
                        } else {
                            expect(false).assertTrue();
                            done();
                        }
                    });
                } catch (error) {
                    console.info(`${testNum}:: error :${error}`);
                    expect(false).assertTrue();
                    done();
                }
            } catch (error) {
                console.info(`${testNum}:: error :${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        /**
         * @tc.number    : SUB_USERFILE_MGR_CALLBACK_GETFILEASSETS_001
         * @tc.name      : getFileAssets
         * @tc.desc      : query all assets
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_CALLBACK_GETFILEASSETS_001', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_CALLBACK_GETFILEASSETS_001';
            let media_type = [IMAGE_TYPE];
            let currentFetchOps = fetchOps(testNum, 'Pictures/Static/', IMAGE_TYPE);
            let type = 'image';
            let count = 1;
            await checkFileAssetAttr(done, testNum, media_type, currentFetchOps, type, count)
        });

        /**
         * @tc.number    : SUB_USERFILE_MGR_CALLBACK_GETPUBLICDIRECTORY_001
         * @tc.name      : getPublicDirectory
         * @tc.desc      : getPublicDirectory DIR_CAMERA
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_CALLBACK_GETPUBLICDIRECTORY_001', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_CALLBACK_GETPUBLICDIRECTORY_001';
            let dir = mediaLibrary.DirectoryType.DIR_CAMERA;
            let val = 'Camera/';
            await checkGetPublicDirectory(done, testNum, dir, val)
        });

        /**
         * @tc.number    : SUB_USERFILE_MGR_CALLBACK_CREATEASSET_001
         * @tc.name      : createAsset
         * @tc.desc      : Create File Asset image (does not exist)
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_CALLBACK_CREATEASSET_001', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_CALLBACK_CREATEASSET_001';
            let media_type = [IMAGE_TYPE];
            let currentFetchOps = fetchOps(testNum, 'Pictures/Static/', IMAGE_TYPE);
            let type = IMAGE_TYPE;
            let name = new Date().getTime() + '.jpg';
            let path = 'Pictures/Create/';
            await createAssetTest(done, testNum, media_type, currentFetchOps, type, name, path)
        });

        /**
         * @tc.number    : SUB_USERFILE_MGR_CALLBACK_CREATEASSET_002
         * @tc.name      : createAsset
         * @tc.desc      : Create File Asset image (existed)
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_CALLBACK_CREATEASSET_002', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_CALLBACK_CREATEASSET_002';
            let media_type = [IMAGE_TYPE];
            let currentFetchOps = fetchOps(testNum, 'Pictures/Static/', IMAGE_TYPE);
            let type = IMAGE_TYPE;
            let name = new Date().getTime() + '.jpg';
            let path = 'Pictures/Create/';
            await createAssetSameNameTest(done, testNum, media_type, currentFetchOps, type, name, path)
        });
    });
}

