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

let fileKeyObj = mediaLibrary.FileKey;

let imageType = mediaLibrary.MediaType.IMAGE;
let videoType = mediaLibrary.MediaType.VIDEO;
let audioType = mediaLibrary.MediaType.AUDIO;

let imageModifyfetchOp = {
    selections: fileKeyObj.RELATIVE_PATH + '= ? AND ' + fileKeyObj.MEDIA_TYPE + '= ? ',
    selectionArgs: ['Pictures/DynamicCb01/', imageType.toString()],
};

let videoModifyfetchOp = {
    selections: fileKeyObj.RELATIVE_PATH + '= ? AND ' + fileKeyObj.MEDIA_TYPE + '= ? ',
    selectionArgs: ['Videos/DynamicCb01/', videoType.toString()],
};

let audioModifyfetchOp = {
    selections: fileKeyObj.RELATIVE_PATH + '= ? AND ' + fileKeyObj.MEDIA_TYPE + '= ? ',
    selectionArgs: ['Audios/DynamicCb01/', audioType.toString()],
};

const filekeys = {
    parent: 'PARENT',
    dateTaken: 'DATE_TAKEN',
    orientation: 'ORIENTATION',
}

const mediaProps = {
    image: {
        title: '01',
        displayName: '01.jpg',

    },
    video: {
        title: '01',
        displayName: '01.mp4',
    },
    audio: {
        title: '01',
        displayName: '01.mp3',
    }
}

const fileKeyProps = {
    dateTaken: 0,
    orientation: 0,
}
export default function fileAssetPropsCallback(abilityContext) {
    describe('fileAssetPropsCallback', function () {
        beforeAll(function () { });
        beforeEach(async function () {
            await sleep(1000)
        });
        afterEach(function () { });
        afterAll(function () { });
        const media = mediaLibrary.getMediaLibrary(abilityContext);

        async function getFileAssetsBy(done, type) {
            const fetchFileResult = await media.getFileAssets(imageModifyfetchOp);
            const asset = await fetchFileResult.getFirstObject();
            if (type == 'parent') {
                expect(asset[type] != undefined).assertTrue();
            } else {
                expect(asset[type] == fileKeyProps[type]).assertTrue();
            }
            let Op = {
                selections: fileKeyObj[filekeys[type]] + '= ?',
                selectionArgs: [asset[type] + ''],
            };
            try {
                let fetchFileResult = await media.getFileAssets(Op);
                const fetchCount = fetchFileResult.getCount();
                expect(fetchCount > 0).assertTrue();
                done();
            } catch (error) {
                expect(false).assertTrue();
                done();
            }
        }

        async function getMediaProperty(done, testNum, type, key, value) {
            try {
                const fetchFileResult = await media.getFileAssets(type);
                const asset = await fetchFileResult.getFirstObject();
                expect(asset[key] == value).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} failed, message: ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function modifyProperty(done, testNum, type, key, value, isAbnormal) {
            try {
                const fetchFileResult = await media.getFileAssets(type);
                const asset = await fetchFileResult.getFirstObject();
                asset[key] = value;
                const id = asset.id;
                await asset.commitModify();

                let currentfetchOp = {
                    selections: fileKeyObj.ID + '= ?',
                    selectionArgs: [id + ''],
                };
                const fetchFileByIdResult = await media.getFileAssets(currentfetchOp);
                const currentAsset = await fetchFileByIdResult.getFirstObject();
                if (isAbnormal) {
                    expect(currentAsset[key] !== value).assertTrue();
                } else {
                    expect(currentAsset[key] === value).assertTrue();
                }
                done();
            } catch (error) {
                console.info(`${testNum} failed, message: ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function modifyPropertyErr(done, testNum, type, key, value) {
            try {
                const fetchFileResult = await media.getFileAssets(type);
                const asset = await fetchFileResult.getFirstObject();
                asset[key] = value;
                await asset.commitModify();
                expect(false).assertTrue();
                done();
            } catch (error) {
                expect(true).assertTrue();
                done();
            }
        }


        /**
         * @tc.number    : SUB_MEDIA_fileKey_CB_001
         * @tc.name      : getFileAssets
         * @tc.desc      : filekey parentOp
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */

        it('SUB_MEDIA_fileKey_CB_001', 0, async function (done) {
            await getFileAssetsBy(done, 'parent');
        });

        /**
         * @tc.number    : SUB_MEDIA_fileKey_CB_002
         * @tc.name      : getFileAssets
         * @tc.desc      : filekey mimeTypeOp
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_fileKey_CB_002', 0, async function (done) {
            await getFileAssetsBy(done, 'dateTaken');
        });

        /**
         * @tc.number    : SUB_MEDIA_fileKey_CB_003
         * @tc.name      : getFileAssets
         * @tc.desc      : filekey sizeOp
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_fileKey_CB_003', 0, async function (done) {
            await getFileAssetsBy(done, 'orientation');
        });



        /**
         * @tc.number    : SUB_MEDIA_GETPROPERTY_CB_001_01
         * @tc.name      : getFileAssets
         * @tc.desc      : image get title prop
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_GETPROPERTY_CB_001_01', 0, async function (done) {
            const key = 'title';
            const value = mediaProps.image[key];
            await getMediaProperty(done, 'SUB_MEDIA_GETPROPERTY_CB_001_01', imageModifyfetchOp, key, value)
        });

        /**
         * @tc.number    : SUB_MEDIA_GETPROPERTY_CB_001_02
         * @tc.name      : getFileAssets
         * @tc.desc      : video get title prop
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_GETPROPERTY_CB_001_02', 0, async function (done) {
            const key = 'title';
            const value = mediaProps.video[key];
            await getMediaProperty(done, 'SUB_MEDIA_GETPROPERTY_CB_001_02', videoModifyfetchOp, key, value)
        });

        /**
         * @tc.number    : SUB_MEDIA_GETPROPERTY_CB_001_03
         * @tc.name      : getFileAssets
         * @tc.desc      : audio get title prop
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_GETPROPERTY_CB_001_03', 0, async function (done) {
            const key = 'title';
            const value = mediaProps.audio[key];
            await getMediaProperty(done, 'SUB_MEDIA_GETPROPERTY_CB_001_03', audioModifyfetchOp, key, value)
        });

        /**
         * @tc.number    : SUB_MEDIA_GETPROPERTY_CB_002_01
         * @tc.name      : getFileAssets
         * @tc.desc      : image get displayName prop
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_GETPROPERTY_CB_002_01', 0, async function (done) {
            const key = 'displayName';
            const value = mediaProps.image[key];
            await getMediaProperty(done, 'SUB_MEDIA_GETPROPERTY_CB_002_01', imageModifyfetchOp, key, value)
        });

        /**
         * @tc.number    : SUB_MEDIA_GETPROPERTY_CB_002_02
         * @tc.name      : getFileAssets
         * @tc.desc      : image get displayName prop
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_GETPROPERTY_CB_002_02', 0, async function (done) {
            const key = 'displayName';
            const value = mediaProps.video[key];
            await getMediaProperty(done, 'SUB_MEDIA_GETPROPERTY_CB_002_02', videoModifyfetchOp, key, value)
        });

        /**
         * @tc.number    : SUB_MEDIA_GETPROPERTY_CB_002_03
         * @tc.name      : getFileAssets
         * @tc.desc      : image get displayName prop
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_GETPROPERTY_CB_002_03', 0, async function (done) {
            const key = 'displayName';
            const value = mediaProps.audio[key];
            await getMediaProperty(done, 'SUB_MEDIA_GETPROPERTY_CB_002_03', audioModifyfetchOp, key, value)
        });

        /**
             * @tc.number    : SUB_MEDIA_COMMITMODIFY_CB_002_01
             * @tc.name      : commitModify
             * @tc.desc      : Modify title, oldtitle -> 'title' + new Date().getTime()
             * @tc.size      : MEDIUM
             * @tc.type      : Function
             * @tc.level     : Level 0
             */
        it('SUB_MEDIA_COMMITMODIFY_CB_002_01', 0, async function (done) {
            const key = 'title';
            const value = key + new Date().getTime()
            await modifyProperty(done, 'SUB_MEDIA_COMMITMODIFY_CB_002_01', imageModifyfetchOp, key, value)
        });

        /**
         * @tc.number    : SUB_MEDIA_COMMITMODIFY_CB_002_02
         * @tc.name      : commitModify
         * @tc.desc      : Modify title, oldtitle -> true, failed
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_COMMITMODIFY_CB_002_02', 0, async function (done) {
            const key = 'title';
            const value = true;
            const isAbnormal = true;
            await modifyProperty(done, 'SUB_MEDIA_COMMITMODIFY_CB_002_02', imageModifyfetchOp, key, value, isAbnormal)
        });

        /**
         * @tc.number    : SUB_MEDIA_COMMITMODIFY_CB_002_03
         * @tc.name      : commitModify
         * @tc.desc      : Modify title, oldtitle -> 10, failed
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_COMMITMODIFY_CB_002_03', 0, async function (done) {
            const key = 'title';
            const value = 10;
            const isAbnormal = true;
            await modifyProperty(done, 'SUB_MEDIA_COMMITMODIFY_CB_002_03', imageModifyfetchOp, key, value, isAbnormal)
        });

        /**
         * @tc.number    : SUB_MEDIA_COMMITMODIFY_CB_002_04
         * @tc.name      : commitModify
         * @tc.desc      : Modify title, oldtitle -> {a:10}, failed
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_COMMITMODIFY_CB_002_04', 0, async function (done) {
            const key = 'title';
            const value = { a: 10 };
            const isAbnormal = true;
            await modifyProperty(done, 'SUB_MEDIA_COMMITMODIFY_CB_002_04', imageModifyfetchOp, key, value, isAbnormal)
        });

        /**
         * @tc.number    : SUB_MEDIA_COMMITMODIFY_CB_002_05
         * @tc.name      : commitModify
         * @tc.desc      : Modify title, oldtitle -> '', failed
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_COMMITMODIFY_CB_002_05', 0, async function (done) {
            const key = 'title';
            const value = '';
            const isAbnormal = true;
            await modifyPropertyErr(done, 'SUB_MEDIA_COMMITMODIFY_CB_002_05', imageModifyfetchOp, key, value, isAbnormal)
        });

        /**
         * @tc.number    : SUB_MEDIA_COMMITMODIFY_CB_002_06
         * @tc.name      : commitModify
         * @tc.desc      : Modify title, oldtitle -> null, failed
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_COMMITMODIFY_CB_002_06', 0, async function (done) {
            const key = 'title';
            const value = null;
            const isAbnormal = true;
            await modifyProperty(done, 'SUB_MEDIA_COMMITMODIFY_CB_002_06', imageModifyfetchOp, key, value, isAbnormal)
        });

        /**
         * @tc.number    : SUB_MEDIA_COMMITMODIFY_CB_001_01
         * @tc.name      : commitModify
         * @tc.desc      : Modify displayName, olddisplayName -> 'displayName' + new Date().getTime()
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_COMMITMODIFY_CB_001_01', 0, async function (done) {
            const key = 'displayName';
            const value = key + new Date().getTime() + '.jpg';
            await modifyProperty(done, 'SUB_MEDIA_COMMITMODIFY_CB_001_01', imageModifyfetchOp, key, value)
        });

        /**
         * @tc.number    : SUB_MEDIA_COMMITMODIFY_CB_001_02
         * @tc.name      : commitModify
         * @tc.desc      : Modify displayName, olddisplayName -> true ,failed
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_COMMITMODIFY_CB_001_02', 0, async function (done) {
            const key = 'displayName';
            const value = true;
            const isAbnormal = true;
            await modifyProperty(done, 'SUB_MEDIA_COMMITMODIFY_CB_001_02', imageModifyfetchOp, key, value, isAbnormal)
        });

        /**
         * @tc.number    : SUB_MEDIA_COMMITMODIFY_CB_001_03
         * @tc.name      : commitModify
         * @tc.desc      : Modify displayName, olddisplayName -> 10, failed
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_COMMITMODIFY_CB_001_03', 0, async function (done) {
            const key = 'displayName';
            const value = 10;
            const isAbnormal = true;
            await modifyProperty(done, 'SUB_MEDIA_COMMITMODIFY_CB_001_03', imageModifyfetchOp, key, value, isAbnormal)
        });

        /**
         * @tc.number    : SUB_MEDIA_COMMITMODIFY_CB_001_04
         * @tc.name      : commitModify
         * @tc.desc      : Modify displayName, olddisplayName -> {a: 10}, failed
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_COMMITMODIFY_CB_001_04', 0, async function (done) {
            const key = 'displayName';
            const value = { a: 10 };
            const isAbnormal = true;
            await modifyProperty(done, 'SUB_MEDIA_COMMITMODIFY_CB_001_04', imageModifyfetchOp, key, value, isAbnormal)
        });

        /**
         * @tc.number    : SUB_MEDIA_COMMITMODIFY_CB_001_05
         * @tc.name      : commitModify
         * @tc.desc      : Modify displayName, olddisplayName -> '', failed
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_MEDIA_COMMITMODIFY_CB_001_05', 0, async function (done) {
            const key = 'displayName';
            const value = '';
            await modifyPropertyErr(done, 'SUB_MEDIA_COMMITMODIFY_CB_001_05', imageModifyfetchOp, key, value)
        });

        /**
             * @tc.number    : SUB_MEDIA_COMMITMODIFY_CB_001_06
             * @tc.name      : commitModify
             * @tc.desc      : Modify displayName, olddisplayName -> null, failed
             * @tc.size      : MEDIUM
             * @tc.type      : Function
             * @tc.level     : Level 0
             */
        it('SUB_MEDIA_COMMITMODIFY_CB_001_06', 0, async function (done) {
            const key = 'displayName';
            const value = null;
            const isAbnormal = true;
            await modifyProperty(done, 'SUB_MEDIA_COMMITMODIFY_CB_001_06', imageModifyfetchOp, key, value, isAbnormal)
        });
    });
}

