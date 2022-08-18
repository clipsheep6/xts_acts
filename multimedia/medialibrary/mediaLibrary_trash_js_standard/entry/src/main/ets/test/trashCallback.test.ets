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
import featureAbility from '@ohos.ability.featureAbility';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';

import { sleep } from './common.ets';

export default function trashCallback(abilityContext) {
    describe('trashCallback', function () {
        let fileKeyObj = mediaLibrary.FileKey;
        let trashType = mediaLibrary.PrivateAlbumType.TYPE_TRASH;

        let fileType = mediaLibrary.MediaType.FILE;
        let imageType = mediaLibrary.MediaType.IMAGE;
        let videoType = mediaLibrary.MediaType.VIDEO;
        let audioType = mediaLibrary.MediaType.AUDIO;
        let allsfetchOp = {
            selections: '',
            selectionArgs: [],
        };
        let { RELATIVE_PATH, MEDIA_TYPE } = mediaLibrary.FileKey;
        function relativefetchOp(path, type) {
            return {
                selections: RELATIVE_PATH + '= ? AND ' + MEDIA_TYPE + '= ?',
                selectionArgs: [path, type.toString()],
            }
        }

        function albumInfofetchOp(path, album, type) {
            return {
                selections: fileKeyObj.RELATIVE_PATH + '= ? AND ' +
                    fileKeyObj.ALBUM_NAME + '= ? AND ' + fileKeyObj.MEDIA_TYPE + '= ?',
                selectionArgs: [path, album, type.toString()],
            }
        }

        function idfetchOp(id) {
            return {
                selections: fileKeyObj.ID + '= ? ',
                selectionArgs: [id.toString()],
            }
        }

        beforeAll(function () { });
        beforeEach(async function () {
            await sleep(1000)
        });
        afterEach(function () { });
        afterAll(function () { });
        const media = mediaLibrary.getMediaLibrary(abilityContext);

        async function setTrash(done, testNum, databasefFetchOps, ablumFetchOps, noAlbum) {
            try {
                // database info
                let databaseFetchFileResult = await media.getFileAssets(databasefFetchOps);
                let count = databaseFetchFileResult.getCount();
                console.info(`${testNum} databaseCount: ${count}`)
                //album info
                if (!noAlbum) {
                    let albumList = await media.getAlbums(ablumFetchOps);
                    let album = albumList[0];
                    let albumFetchFileResult = await album.getFileAssets(allsfetchOp);
                    let albumFilesCount = albumFetchFileResult.getCount();
                    console.info(`${testNum} albumFilesCount: ${albumFilesCount}`)
                    expect(albumFilesCount == count).assertTrue();
                }
                let trashalbum = await media.getPrivateAlbum(trashType);
                let fetchTrashFileResult = await trashalbum[0].getFileAssets();
                let trashcount = fetchTrashFileResult.getCount()
                console.info(`${testNum} trashcount:${trashcount}`)
                // file info
                let asset = await databaseFetchFileResult.getFirstObject();
                let id = asset.id;
                let istrash = await asset.isTrash()
                console.info(`${testNum} id:${id}`)
                console.info(`${testNum} istrash: ${istrash}`)
                expect(istrash).assertFalse();
                // trash operation
                asset.trash(true, async () => {
                    try {
                        // after trash database info
                        databaseFetchFileResult = await media.getFileAssets(databasefFetchOps);
                        let databaseCount = databaseFetchFileResult.getCount();
                        console.info(`after trash -> ${testNum} databaseCount: ${databaseCount}, param count: ${count}`)
                        expect(databaseCount == (count - 1)).assertTrue();
                        //album info
                        if (!noAlbum) {
                            let albumList = await media.getAlbums(ablumFetchOps);
                            let album = albumList[0];
                            let albumFetchFileResult = await album.getFileAssets(allsfetchOp);
                            let albumFilesCount = albumFetchFileResult.getCount();
                            console.info(`after trash -> ${testNum} albumFilesCount: ${albumFilesCount}, param count: ${count}`)
                            expect(databaseCount == (count - 1)).assertTrue();
                        }
                        // privateAlbum info
                        trashalbum = await media.getPrivateAlbum(trashType);
                        let assetTrashOp = {
                            selections: fileKeyObj.ID + '= ?',
                            selectionArgs: [asset.id + ''],
                        }
                        fetchTrashFileResult = await trashalbum[0].getFileAssets(assetTrashOp);

                        trashcount = fetchTrashFileResult.getCount()
                        console.info(`${testNum} trashcount:${trashcount}`)
                        const assetTrashed = await fetchTrashFileResult.getFirstObject();

                        expect(trashcount == 1).assertTrue();
                        // asset after trash Conut
                        let assetOpts = idfetchOp(id);
                        let trashAssetResult = await media.getFileAssets(assetOpts);
                        let afterTrashAssetConut = trashAssetResult.getCount();
                        expect(afterTrashAssetConut == 0).assertTrue();
                        await assetTrashed.trash(false)
                        done();
                    } catch (error) {
                        console.info(`${testNum} error: ${error}`)
                        expect(false).assertTrue();
                        done();
                    }
                })
            } catch (error) {
                console.info(`${testNum} error: ${error}`)
                expect(false).assertTrue();
                done();
            }
        }

        async function trashError(done, testNum, databasefFetchOps, value) {
            try {
                let databaseFetchFileResult = await media.getFileAssets(databasefFetchOps);
                let asset = await databaseFetchFileResult.getFirstObject();
                let count = databaseFetchFileResult.getCount();
                try {
                    asset.trash(value, async () => {
                        expect(false).assertTrue();
                        done();
                    });
                } catch (error) {
                    console.info(`${testNum} error: ${error}`)
                    let databaseFetchFileResult = await media.getFileAssets(databasefFetchOps);
                    let count2 = databaseFetchFileResult.getCount()
                    expect(count === count2).assertTrue();
                    done();
                }
            } catch (error) {
                console.info(`${testNum} error: ${error}`)
                expect(false).assertTrue();
                done();
            }
        }

        async function recovery(done, testNum, databasefFetchOps, ablumFetchOps, noAlbum) {
            try {
                let databaseFetchFileResult = await media.getFileAssets(databasefFetchOps);
                let asset = await databaseFetchFileResult.getFirstObject();
                let count = databaseFetchFileResult.getCount();
                let id = asset.id;
                console.info(`${testNum} count:${count}, id: ${id}`)
                await asset.trash(true);
                let trashalbum = await media.getPrivateAlbum(trashType);
                let assetTrashOp = {
                    selections: fileKeyObj.ID + '= ?',
                    selectionArgs: [id + ''],
                }
                let fetchTrashFileResult = await trashalbum[0].getFileAssets(assetTrashOp);
                let trashcount = fetchTrashFileResult.getCount()
                console.info(`${testNum} trashcount:${trashcount}`)
                const assetTrashed = await fetchTrashFileResult.getFirstObject();
                assetTrashed.trash(false, async () => {
                    trashalbum = await media.getPrivateAlbum(trashType);
                    fetchTrashFileResult = await trashalbum[0].getFileAssets();
                    let trashcount2 = fetchTrashFileResult.getCount()
                    console.info(`after recovery ${testNum} trashcount2:${trashcount}`)
                    expect((trashcount2 + 1) == trashcount).assertTrue();
                    databaseFetchFileResult = await media.getFileAssets(databasefFetchOps);
                    let databaseCount = databaseFetchFileResult.getCount();
                    console.info(`after recovery -> ${testNum} databaseCount: ${databaseCount}, param count: ${count}`)
                    expect(databaseCount == count).assertTrue();
                    //album info
                    if (!noAlbum) {
                        let albumList = await media.getAlbums(ablumFetchOps);
                        let album = albumList[0];
                        console.info(`${testNum} album length:${albumList.length}`)

                        let albumFetchFileResult = await album.getFileAssets(allsfetchOp);
                        let albumFilesCount = albumFetchFileResult.getCount();
                        console.info(`after recovery -> ${testNum} albumFilesCount: ${albumFilesCount}, param count: ${count}`)
                        expect(albumFilesCount == count).assertTrue();
                    }
                    // asset after trash Conut
                    let assetOpts = idfetchOp(id);
                    let recoveryAssetResult = await media.getFileAssets(assetOpts);
                    let afterRecoveryAssetConut = recoveryAssetResult.getCount();
                    console.info(`${testNum} afterRecoveryAssetConut:${afterRecoveryAssetConut}`)
                    expect(afterRecoveryAssetConut == 1).assertTrue();
                    done();
                });
                expect(trashcount == 1).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error: ${error}`)
                expect(false).assertTrue();
                done();
            }
        }

        async function recoveryError(done, testNum, databasefFetchOps, value) {
            try {
                let databaseFetchFileResult = await media.getFileAssets(databasefFetchOps);
                let count = databaseFetchFileResult.getCount();
                let asset = await databaseFetchFileResult.getFirstObject();
                let id = asset.id;
                console.info(`${testNum} id:${id}`);
                console.info(`${testNum} count:${count}`);
                await asset.trash(true);
                const trashalbum = await media.getPrivateAlbum(trashType);
                let assetTrashOp = {
                    selections: fileKeyObj.ID + '= ?',
                    selectionArgs: [id + ''],
                }
                const fetchTrashFileResult = await trashalbum[0].getFileAssets(assetTrashOp);
                const trashcount = fetchTrashFileResult.getCount()
                console.info(`${testNum} trashcount:${trashcount}`)
                const assetTrashed = await fetchTrashFileResult.getFirstObject();
                try {
                    assetTrashed.trash(value, async () => {
                        expect(false).assertTrue()
                        done()
                    });
                } catch (error) {
                    console.info(`${testNum} error: ${error}`)
                    const trashalbum = await media.getPrivateAlbum(trashType);
                    const fetchTrashFileResult = await trashalbum[0].getFileAssets();
                    const trashcount2 = fetchTrashFileResult.getCount();
                    expect(trashcount2 == trashcount).assertTrue();
                    await assetTrashed.trash(false);
                    done()
                }
            } catch (error) {
                console.info(`${testNum} error: ${error}`)
                expect(false).assertTrue()
                done()
            }

        }

        async function trashDate(done, testNum, databasefFetchOps) {
            try {
                let databaseFetchFileResult = await media.getFileAssets(databasefFetchOps);
                let count = databaseFetchFileResult.getCount();
                let asset = await databaseFetchFileResult.getFirstObject();
                let id = asset.id;
                console.info(`${testNum} id:${id}`);
                console.info(`${testNum} count:${count}`);
                asset.trash(true, async () => {
                    let addTrashTime = Number(String(new Date().getTime()).slice(0, 10));
                    const trashalbum = await media.getPrivateAlbum(trashType);

                    let assetTrashOp = {
                        selections: fileKeyObj.ID + '= ?',
                        selectionArgs: [asset.id + ''],
                    }
                    const fetchTrashFileResult = await trashalbum[0].getFileAssets(assetTrashOp);
                    const trashcount = fetchTrashFileResult.getCount()
                    console.info(`${testNum} trashcount:${trashcount}`)
                    const assetTrashed = await fetchTrashFileResult.getFirstObject();

                    console.info(`${testNum} dateTrashed:${assetTrashed.dateTrashed}`)
                    console.info(`${testNum} addTrashTime:${addTrashTime}`)
                    expect(assetTrashed.dateTrashed <= addTrashTime).assertTrue();
                    expect(assetTrashed.dateTrashed + 5 > addTrashTime).assertTrue();
                    await asset.trash(false);
                    done()
                });

            } catch (error) {
                console.info(`${testNum} error: ${error}`)
                expect(false).assertTrue();
                done()
            }
        }

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_CALLBACK_01_001
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_CALLBACK_01_001', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trashCb/', imageType)
            let aOps = albumInfofetchOp('Pictures/', 'trashCb', imageType)
            await setTrash(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_CALLBACK_01_001', rOps, aOps)
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_CALLBACK_01_002
         * @tc.name 	 : trash
         * @tc.desc 	 : video asset Trash by true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_CALLBACK_01_002', 0, async function (done) {
            let rOps = relativefetchOp('Videos/trashCb/', videoType)
            let aOps = albumInfofetchOp('Videos/', 'trashCb', videoType)
            await setTrash(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_CALLBACK_01_002', rOps, aOps)
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_CALLBACK_01_003
         * @tc.name 	 : trash
         * @tc.desc 	 : audio asset Trash by true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_CALLBACK_01_003', 0, async function (done) {
            let rOps = relativefetchOp('Audios/trashCb/', audioType)
            let aOps = albumInfofetchOp('Audios/', 'trashCb', audioType)
            await setTrash(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_CALLBACK_01_003', rOps, aOps)
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_CALLBACK_01_004
         * @tc.name 	 : trash
         * @tc.desc 	 : file asset Trash by true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_CALLBACK_01_004', 0, async function (done) {
            let rOps = relativefetchOp('Documents/trashCb/', fileType)
            let aOps = albumInfofetchOp('Documents/', 'trashCb', fileType)
            let noAlbum = true;
            await setTrash(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_CALLBACK_01_004', rOps, aOps, noAlbum)
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_CALLBACK_02_001
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by 1
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_CALLBACK_02_001', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trashCb/', imageType);
            let value = 1;
            await trashError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_CALLBACK_02_001', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_CALLBACK_02_002
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by 'abc'
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_CALLBACK_02_002', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trashCb/', imageType);
            let value = 'abc';
            await trashError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_CALLBACK_02_002', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_CALLBACK_02_003
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by {a:10}
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_CALLBACK_02_003', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trashCb/', imageType);
            let value = { a: 10 };
            await trashError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_CALLBACK_02_003', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_CALLBACK_02_004
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_CALLBACK_02_004', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trashCb/', imageType);
            let value = undefined;
            await trashError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_CALLBACK_02_004', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_CALLBACK_02_005
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by null
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_CALLBACK_02_005', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trashCb/', imageType);
            let value = null;
            await trashError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_CALLBACK_02_005', rOps, value);
        })

        /**
         * @tc.number : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_CALLBACK_03_001
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_CALLBACK_03_001', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trashCb/', imageType)
            let aOps = albumInfofetchOp('Pictures/', 'trashCb', imageType)
            await recovery(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_CALLBACK_03_001', rOps, aOps)
        })

        /**
         * @tc.number : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_CALLBACK_03_002
         * @tc.name 	 : trash
         * @tc.desc 	 : video asset Trash by false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_CALLBACK_03_002', 0, async function (done) {
            let rOps = relativefetchOp('Videos/trashCb/', videoType)
            let aOps = albumInfofetchOp('Videos/', 'trashCb', videoType)
            await recovery(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_CALLBACK_03_002', rOps, aOps)
        })

        /**
         * @tc.number : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_CALLBACK_03_003
         * @tc.name 	 : trash
         * @tc.desc 	 : audio asset Trash by false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_CALLBACK_03_003', 0, async function (done) {
            let rOps = relativefetchOp('Audios/trashCb/', audioType)
            let aOps = albumInfofetchOp('Audios/', 'trashCb', audioType)
            await recovery(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_CALLBACK_03_003', rOps, aOps)
        })

        /**
         * @tc.number : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_CALLBACK_03_004
         * @tc.name 	 : trash
         * @tc.desc 	 : file asset Trash by false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_CALLBACK_03_004', 0, async function (done) {
            let rOps = relativefetchOp('Documents/trashCb/', fileType)
            let aOps = albumInfofetchOp('Documents/', 'trashCb', fileType)
            let noAlbum = true;
            await recovery(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_CALLBACK_03_004', rOps, aOps, noAlbum)
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_CALLBACK_04_001
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by 1
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_CALLBACK_04_001', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trashCb/', imageType);
            let value = 1;
            await recoveryError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_CALLBACK_04_001', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_CALLBACK_04_002
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by 'abc'
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_CALLBACK_04_002', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trashCb/', imageType);
            let value = 'abc';
            await recoveryError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_CALLBACK_04_002', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_CALLBACK_04_003
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by {a:10}
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_CALLBACK_04_003', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trashCb/', imageType);
            let value = { a: 10 };
            await recoveryError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_CALLBACK_04_003', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_CALLBACK_04_004
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_CALLBACK_04_004', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trashCb/', imageType);
            let value = undefined;
            await recoveryError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_CALLBACK_04_004', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_CALLBACK_04_005
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by null
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_CALLBACK_04_005', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trashCb/', imageType);
            let value = null;
            await recoveryError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_CALLBACK_04_005', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_CALLBACK_05_001
         * @tc.name 	 : trash
         * @tc.desc 	 : get dateTrashed
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_CALLBACK_05_001', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trashCb/', imageType)
            await trashDate(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_CALLBACK_05_001', rOps);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_CALLBACK_05_002
         * @tc.name 	 : trash
         * @tc.desc 	 : get dateTrashed
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_CALLBACK_05_002', 0, async function (done) {
            let rOps = relativefetchOp('Videos/trashCb/', videoType)
            await trashDate(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_CALLBACK_05_002', rOps);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_CALLBACK_05_003
         * @tc.name 	 : trash
         * @tc.desc 	 : get dateTrashed
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_CALLBACK_05_003', 0, async function (done) {
            let rOps = relativefetchOp('Audios/trashCb/', audioType)
            await trashDate(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_CALLBACK_05_003', rOps);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_CALLBACK_05_004
         * @tc.name 	 : trash
         * @tc.desc 	 : get dateTrashed
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_CALLBACK_05_004', 0, async function (done) {
            let rOps = relativefetchOp('Documents/trashCb/', fileType)
            await trashDate(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_CALLBACK_05_004', rOps);
        })
    });
}

