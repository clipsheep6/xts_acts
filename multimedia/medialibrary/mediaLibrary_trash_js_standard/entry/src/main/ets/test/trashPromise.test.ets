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

export default function trashPromise(abilityContext) {
    describe('trashPromise', function () {
        let fileKeyObj = mediaLibrary.FileKey;
        let trashType = mediaLibrary.PrivateAlbumType.TYPE_TRASH;
        console.log('trashType' + trashType)
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
        // testNum
        // let allAsset = await media.getFileAssets(allsfetchOp);
        // let allCount = allAsset.getCount();
        // console.info(` allCount: ${allCount}`)

        async function setTrash(done, testNum, databasefFetchOps, ablumFetchOps, noAlbum = false) {
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
                console.info(`${testNum} file info start`)
                let asset = await databaseFetchFileResult.getFirstObject();
                let id = asset.id;
                let istrash = await asset.isTrash()
                console.info(`${testNum} id:${id}`)
                console.info(`${testNum} istrash: ${istrash}`)
                expect(istrash).assertFalse();
                // trash operation
                await asset.trash(true)
                // after trash database info
                databaseFetchFileResult = await media.getFileAssets(databasefFetchOps);
                let databaseCount = databaseFetchFileResult.getCount();
                console.info(`after trash -> ${testNum} databaseCount: ${databaseCount}, param count: ${count}`)
                expect(databaseCount == (count - 1)).assertTrue();
                //album info
                if (!noAlbum) {
                    albumList = await media.getAlbums(ablumFetchOps);
                    album = albumList[0];
                    albumFetchFileResult = await album.getFileAssets(allsfetchOp);
                    albumFilesCount = albumFetchFileResult.getCount();
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
                const afterTrashTrashcount = fetchTrashFileResult.getCount();
                console.info(`${testNum} afterTrashTrashcount:${afterTrashTrashcount}`)
                expect(afterTrashTrashcount == (trashcount + 1)).assertTrue();
                const assetTrashed = await fetchTrashFileResult.getFirstObject();

                expect(afterTrashTrashcount == 1).assertTrue();
                // asset after trash Conut
                let assetOpts = idfetchOp(id);
                let trashAssetResult = await media.getFileAssets(assetOpts);
                let afterTrashAssetConut = trashAssetResult.getCount();
                expect(afterTrashAssetConut == 0).assertTrue();
                await assetTrashed.trash(false);
                done();
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
                    await asset.trash(value);
                    expect(false).assertTrue();
                    done();
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
                let count = databaseFetchFileResult.getCount();
                let asset = await databaseFetchFileResult.getFirstObject();
                let id = asset.id;
                await asset.trash(true);
                let trashalbum = await media.getPrivateAlbum(trashType);
                let assetTrashOp = {
                    selections: fileKeyObj.ID + '= ?',
                    selectionArgs: [id + ''],
                }
                let fetchTrashFileResult = await trashalbum[0].getFileAssets(assetTrashOp);
                let trashcount = fetchTrashFileResult.getCount()
                console.info(`${testNum} trashcount:${trashcount}`)
                let assetTrashed = await fetchTrashFileResult.getFirstObject();

                await assetTrashed.trash(false);
                trashalbum = await media.getPrivateAlbum(trashType);
                fetchTrashFileResult = await trashalbum[0].getFileAssets();
                let trashcount2 = fetchTrashFileResult.getCount()
                console.info(`after recovery ${testNum} trashcount2:${trashcount}`)
                expect((trashcount2 + 1) == trashcount).assertTrue();
                databaseFetchFileResult = await media.getFileAssets(databasefFetchOps);
                let databaseCount = databaseFetchFileResult.getCount();
                console.info(`after recovery -> ${testNum} databaseCount: ${databaseCount}, param count: ${count}`)
                expect(databaseCount == count).assertTrue();
                expect(trashcount == 1).assertTrue();
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
                    await assetTrashed.trash(value)
                    expect(false).assertTrue();
                    done()
                } catch (error) {
                    console.info(`${testNum} error1: ${error}`)
                    const trashalbum = await media.getPrivateAlbum(trashType);
                    const fetchTrashFileResult = await trashalbum[0].getFileAssets();
                    const trashcount2 = fetchTrashFileResult.getCount()
                    expect(trashcount2 == trashcount).assertTrue();
                    await assetTrashed.trash(false);
                    done()
                }
            } catch (error) {
                console.info(`${testNum} error: ${error}`)
                expect(false).assertTrue();
                done()
            }

        }

        async function setTrashSameName(done, testNum, databasefFetchOps, ablumFetchOps, dirPath, mediaType) {
            try {
                // database info
                let databaseFetchFileResult = await media.getFileAssets(databasefFetchOps);
                let count = databaseFetchFileResult.getCount();
                console.info(`${testNum} databaseCount: ${count}`)

                //album info
                let albumList = await media.getAlbums(ablumFetchOps);
                let album = albumList[0];
                let albumFetchFileResult = await album.getFileAssets(allsfetchOp);
                let albumFilesCount = albumFetchFileResult.getCount();
                console.info(`${testNum} albumFilesCount: ${albumFilesCount}`)
                expect(albumFilesCount == count).assertTrue();

                // privateAlbum info
                let trashalbum = await media.getPrivateAlbum(trashType);
                let fetchTrashFileResult = await trashalbum[0].getFileAssets();
                let trashcount = fetchTrashFileResult.getCount()
                console.info(`${testNum} trashcount:${trashcount}`)

                // file info
                let asset = await databaseFetchFileResult.getFirstObject();
                let id = asset.id;
                let istrash = await asset.isTrash();
                let mediaName = asset.displayName;
                console.info(`${testNum} old asset displayName:${mediaName}`)
                console.info(`${testNum} id:${id}`)
                console.info(`${testNum} istrash: ${istrash}`)

                expect(istrash).assertFalse();

                // trash operation
                await asset.trash(true)

                const newAsset = await media.createAsset(mediaType, mediaName, dirPath);
                let newAssetId = newAsset.id;
                console.info(`${testNum} new asset displayName:${newAsset.displayName}`)
                console.info(`${testNum} new asset id:${newAssetId}`)
                expect(newAssetId != id).assertTrue();
                count += 1
                await newAsset.trash(true)

                await media.createAsset(mediaType, mediaName, dirPath);
                count += 1

                await media.createAsset(mediaType, asset.title + '-copy.jpg', dirPath);
                count += 1

                // after trash database info
                databaseFetchFileResult = await media.getFileAssets(databasefFetchOps);
                let databaseCount = databaseFetchFileResult.getCount();
                console.info(`after trash -> ${testNum} databaseCount: ${databaseCount}, param count: ${count}`)
                expect(databaseCount == (count - 2)).assertTrue();

                //album info
                albumList = await media.getAlbums(ablumFetchOps);
                album = albumList[0];
                albumFetchFileResult = await album.getFileAssets(allsfetchOp);
                albumFilesCount = albumFetchFileResult.getCount();
                console.info(`after trash -> ${testNum} albumFilesCount: ${albumFilesCount}, param count: ${count}`)
                expect(databaseCount == (count - 2)).assertTrue();

                // privateAlbum info
                trashalbum = await media.getPrivateAlbum(trashType);
                fetchTrashFileResult = await trashalbum[0].getFileAssets();
                let afterTrashTrashcount = fetchTrashFileResult.getCount()
                console.info(`${testNum} afterTrashTrashcount:${afterTrashTrashcount}`)
                expect(afterTrashTrashcount == (trashcount + 2)).assertTrue();

                const allTrashFiles = await fetchTrashFileResult.getAllObject();
                let currentTrashCount = 0;
                let trashAsset1, trashAsset2;

                for (const asset of allTrashFiles) {
                    if (asset.id == id) {
                        trashAsset1 = asset;
                        currentTrashCount += 1
                    }
                    if (asset.id == newAssetId) {
                        trashAsset2 = asset;
                        currentTrashCount += 1
                    }
                    if (currentTrashCount == 2) {
                        break;
                    }
                }
                console.info(`${testNum} currentTrashCount:${currentTrashCount}`)

                expect(currentTrashCount == 2).assertTrue();

                await trashAsset1.trash(false)
                await trashAsset2.trash(false)

                // after trash database info
                databaseFetchFileResult = await media.getFileAssets(databasefFetchOps);
                databaseCount = databaseFetchFileResult.getCount();
                console.info(`after recovery -> ${testNum} databaseCount: ${databaseCount}, param count: ${count}`)
                expect(databaseCount == count).assertTrue();

                albumList = await media.getAlbums(ablumFetchOps);
                album = albumList[0];
                albumFetchFileResult = await album.getFileAssets(allsfetchOp);
                albumFilesCount = albumFetchFileResult.getCount();
                console.info(`after recovery -> ${testNum} albumFilesCount: ${albumFilesCount}, param count: ${count}`)
                expect(albumFilesCount == count).assertTrue();

                let assetOpts1 = idfetchOp(id);
                let assetOpts2 = idfetchOp(newAssetId);
                let recoveryAssetResult1 = await album.getFileAssets(assetOpts1);
                let recoveryAssetResult2 = await album.getFileAssets(assetOpts2);
                let recoveryAsset1 = await recoveryAssetResult1.getFirstObject();
                let recoveryAsset2 = await recoveryAssetResult2.getFirstObject();
                console.info(`recoveryAsset1- id: ${recoveryAsset1.id},displayName: ${recoveryAsset1.displayName}`)
                console.info(`recoveryAsset2- id: ${recoveryAsset2.id},displayName: ${recoveryAsset2.displayName}`)

                expect(recoveryAsset1.displayName == newAsset.title + '-copy-copy.jpg').assertTrue();
                expect(recoveryAsset2.displayName == newAsset.title + '-copy-copy-copy.jpg').assertTrue();

                done();
            } catch (error) {
                console.info(`${testNum} error: ${error}`)
                expect(false).assertTrue();
                done();
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
                await asset.trash(true);
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
            } catch (error) {
                console.info(`${testNum} error: ${error}`)
                expect(false).assertTrue();
                done()
            }

        }

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_PROMISE_01_001
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_PROMISE_01_001', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trash/', imageType)
            let aOps = albumInfofetchOp('Pictures/', 'trash', imageType)
            await setTrash(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_PROMISE_01_001', rOps, aOps)
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_PROMISE_01_002
         * @tc.name 	 : trash
         * @tc.desc 	 : video asset Trash by true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_PROMISE_01_002', 0, async function (done) {
            let rOps = relativefetchOp('Videos/trash/', videoType)
            let aOps = albumInfofetchOp('Videos/', 'trash', videoType)
            await setTrash(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_PROMISE_01_002', rOps, aOps)
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_PROMISE_01_003
         * @tc.name 	 : trash
         * @tc.desc 	 : audio asset Trash by true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_PROMISE_01_003', 0, async function (done) {
            let rOps = relativefetchOp('Audios/trash/', audioType)
            let aOps = albumInfofetchOp('Audios/', 'trash', audioType)
            await setTrash(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_PROMISE_01_003', rOps, aOps)
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_PROMISE_01_004
         * @tc.name 	 : trash
         * @tc.desc 	 : file asset Trash by true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_PROMISE_01_004', 0, async function (done) {
            let rOps = relativefetchOp('Documents/trash/', fileType);
            let aOps = albumInfofetchOp('Documents/', 'trash', fileType);
            let noAlbum = true
            await setTrash(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_PROMISE_01_004', rOps, aOps, noAlbum);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_PROMISE_02_001
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by 1
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_PROMISE_02_001', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trash/', imageType);
            let value = 1;
            await trashError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_PROMISE_02_001', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_PROMISE_02_002
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by 'abc'
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_PROMISE_02_002', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trash/', imageType);
            let value = 'abc';
            await trashError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_PROMISE_02_002', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_PROMISE_02_003
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by {a:10}
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_PROMISE_02_003', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trash/', imageType);
            let value = { a: 10 };
            await trashError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_PROMISE_02_003', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_PROMISE_02_004
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_PROMISE_02_004', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trash/', imageType);
            let value = undefined;
            await trashError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_PROMISE_02_004', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_PROMISE_02_005
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by null
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_PROMISE_02_005', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trash/', imageType);
            let value = null;
            await trashError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_ERROR_PROMISE_02_005', rOps, value);
        })

        /**
         * @tc.number : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_PROMISE_03_001
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_PROMISE_03_001', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trash/', imageType)
            let aOps = albumInfofetchOp('Pictures/', 'trash', imageType)
            await recovery(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_PROMISE_03_001', rOps, aOps)
        })

        /**
         * @tc.number : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_PROMISE_03_002
         * @tc.name 	 : trash
         * @tc.desc 	 : video asset Trash by false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_PROMISE_03_002', 0, async function (done) {
            let rOps = relativefetchOp('Videos/trash/', videoType)
            let aOps = albumInfofetchOp('Videos/', 'trash', videoType)
            await recovery(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_PROMISE_03_002', rOps, aOps)
        })

        /**
         * @tc.number : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_PROMISE_03_003
         * @tc.name 	 : trash
         * @tc.desc 	 : audio asset Trash by false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_PROMISE_03_003', 0, async function (done) {
            let rOps = relativefetchOp('Audios/trash/', audioType)
            let aOps = albumInfofetchOp('Audios/', 'trash', audioType)
            await recovery(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_PROMISE_03_003', rOps, aOps)
        })

        /**
         * @tc.number : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_PROMISE_03_004
         * @tc.name 	 : trash
         * @tc.desc 	 : file asset Trash by false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_PROMISE_03_004', 0, async function (done) {
            let rOps = relativefetchOp('Documents/trash/', fileType)
            let aOps = albumInfofetchOp('Documents/', 'trash', fileType)
            let noAlbum = true
            await recovery(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_PROMISE_03_004', rOps, aOps, noAlbum)
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_04_001
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by 1
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_04_001', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trash/', imageType);
            let value = 1;
            await recoveryError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_04_001', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_04_002
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by 'abc'
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_04_002', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trash/', imageType);
            let value = 'abc';
            await recoveryError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_04_002', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_04_003
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by {a:10}
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_04_003', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trash/', imageType);
            let value = { a: 10 };
            await recoveryError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_04_003', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_04_004
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_04_004', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trash/', imageType);
            let value = undefined;
            await recoveryError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_04_004', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_04_005
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by null
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_04_005', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trash/', imageType);
            let value = null;
            await recoveryError(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_04_005', rOps, value);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_PROMISE_05_001
         * @tc.name 	 : trash
         * @tc.desc 	 : get dateTrashed
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_PROMISE_05_001', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trash/', imageType)
            await trashDate(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_PROMISE_05_001', rOps);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_PROMISE_05_002
         * @tc.name 	 : trash
         * @tc.desc 	 : get dateTrashed
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_PROMISE_05_002', 0, async function (done) {
            let rOps = relativefetchOp('Videos/trash/', videoType)
            await trashDate(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_PROMISE_05_002', rOps);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_PROMISE_05_003
         * @tc.name 	 : trash
         * @tc.desc 	 : get dateTrashed
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_PROMISE_05_003', 0, async function (done) {
            let rOps = relativefetchOp('Audios/trash/', audioType)
            await trashDate(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_PROMISE_05_003', rOps);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_PROMISE_05_004
         * @tc.name 	 : trash
         * @tc.desc 	 : get dateTrashed
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_PROMISE_05_004', 0, async function (done) {
            let rOps = relativefetchOp('Documents/trash/', fileType)
            await trashDate(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_DATE_TRASHED_PROMISE_05_004', rOps);
        })

        /**
         * @tc.number	 : SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_06_001
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by null
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 0
         */
        it('SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_06_001', 0, async function (done) {
            let rOps = relativefetchOp('Pictures/trash/', imageType)
            let aOps = albumInfofetchOp('Pictures/', 'trash', imageType)
            await setTrashSameName(done, 'SUB_MEDIA_MIDIALIBRARY_TRASH_RECOVERY_ERROR_PROMISE_06_001', rOps, aOps, 'Pictures/trash/', imageType);
        })

    });
}

