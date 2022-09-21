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
    checkPresetsAssets,
    nameFetchOps,
    checkAssetsCount,
    getPermission,
    fetchOps,
    FILEKEY,
    isNum,
} from '../../../../../../common';


export default function fileTestCallbackTest(abilityContext) {
    describe('fileTestCallbackTest', function () {
        const userfile_mgr = userfile_manager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info('beforeAll case');
            await getPermission();
            await checkPresetsAssets(userfile_mgr, 'ActsUserFileMgrFile')
        });
        beforeEach(function () {
            console.info('beforeEach case');
        });
        afterEach(async function () {
            console.info('afterEach case');
            await sleep(400)
        });
        afterAll(function () {
            console.info('afterAll case');
        });

        async function copyFile(fd1, fd2) {
            let stat = await fileio.fstat(fd1);
            let buf = new ArrayBuffer(stat.size);
            await fileio.read(fd1, buf);
            await fileio.write(fd2, buf);
        }
        const creatAssetTest = async (done, testNum, media_type, fetchOp, path, type, name) => {
            try {
                const fetchFileResult = await userfile_mgr.getFileAssets(media_type, fetchOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                const asset = await fetchFileResult.getFirstObject();
                let displayName1 = `${new Date().getTime()}.${name}`;

                userfile_mgr.createAsset(type, displayName1, path, async (err, creatAsset1) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`)
                        expect.assertFail();
                        done();
                        return;
                    }
                    const fd = await asset.open('rw');
                    const creatAssetFd1 = await creatAsset1.open('rw');
                    await copyFile(fd, creatAssetFd1);
                    await creatAsset1.close(creatAssetFd1);

                    let displayName2 = `${new Date().getTime()}.${name}`;
                    const creatAsset2 = await userfile_mgr.createAsset(type, displayName2, path);
                    const creatAssetFd2 = await creatAsset2.open('rw');
                    await copyFile(fd, creatAssetFd2);
                    await creatAsset2.close(creatAssetFd2);
                    await asset.close(fd);
                    done();
                });
            } catch (error) {
                console.info(`${testNum} failed error: ${error}`)
                expect(false).assertTrue();
                done();
            }
        }

        const checkCreatAssetProps = async (done, testNum, media_type, fetchOp, path, type, name, key, val) => {
            try {
                const fetchFileResult = await userfile_mgr.getFileAssets(media_type, fetchOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                const asset = await fetchFileResult.getFirstObject();
                let displayName = `${new Date().getTime()}.${name}`;

                userfile_mgr.createAsset(type, displayName, path, async (err, creatAsset) => {
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

                    if (val == 'displayName') {
                        val = displayName
                    }
                    expect(creatAsset[key]).assertEqual(val);
                    done();
                });
            } catch (error) {
                console.info(`${testNum} failed error: ${error}`)
                expect(false).assertTrue();
                done();
            }
        }

        // ------------------------------- image type start ----------------------------
        /**
         * @tc.number    : SUB_USERFILE_MGR_CREATEASSET_CALLBACK_001_01
         * @tc.name      : createAsset
         * @tc.desc      : Insert two database records, read a unique identifier, expectations are not equal
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_CREATEASSET_CALLBACK_001_01', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_CREATEASSET_CALLBACK_001_01';
            let media_type = [IMAGE_TYPE];
            let currentFetchOp = nameFetchOps(testNum, 'Pictures/Static/', '01', IMAGE_TYPE)
            let name = 'jpg'
            let path = await userfile_mgr.getPublicDirectory(mediaLibrary.DirectoryType.DIR_IMAGE) + 'create/'
            let type = IMAGE_TYPE;
            await creatAssetTest(done, testNum, media_type, currentFetchOp, path, type, name)
        });

        /**
         * @tc.number    : SUB_USERFILE_MGR_CREATEASSET_CALLBACK_001_02
         * @tc.name      : createAsset
         * @tc.desc      : Access to the file displayName and validation is not undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_CREATEASSET_CALLBACK_001_02', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_CREATEASSET_CALLBACK_001_02';
            let media_type = [IMAGE_TYPE];
            let currentFetchOp = nameFetchOps(testNum, 'Pictures/Static/', '02', IMAGE_TYPE)
            let name = 'jpg'
            let path = await userfile_mgr.getPublicDirectory(mediaLibrary.DirectoryType.DIR_IMAGE) + 'create/';
            let type = IMAGE_TYPE;
            let key = 'displayName';
            let val = 'displayName';
            await checkCreatAssetProps(done, testNum, media_type, currentFetchOp, path, type, name, key, val)
        });
    });
}

