/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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
    checkAssetsCount,
    fetchOps,
    isNum,
    fileIdFetchOps,
} from '../../../../../../common';
export default function fileAssetTestPromiseTest(abilityContext) {
    describe('fileAssetTestPromiseTest', function () {
        const userfile_mgr = userfile_manager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info('beforeAll case');
            await checkPresetsAssets(userfile_mgr, 'ActsUserFileMgrFileAsset')
        });
        beforeEach(function () {
            console.info('beforeEach case');
        });
        afterEach(async function () {
            console.info('afterEach case');
            await sleep()
        });
        afterAll(function () {
            console.info('afterAll case');
        });

        const rwOpenTest = async function (done, testNum, media_type, fetchOp, assetProps, expectCount) {
            let asset, asset1;
            let fd, fd1;
            try {
                let fetchFileResult = await userfile_mgr.getFileAssets(media_type, fetchOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, expectCount);
                if (!checkAssetCountPass) return;
                asset = await fetchFileResult.getFirstObject();
                fd = await asset.open('rw');
                expect(isNum(fd)).assertTrue();
                let buf = new ArrayBuffer(4096);
                let res = await fileio.read(fd, buf);
                expect(res.bytesRead).assertEqual(assetProps.bytesRead);
                asset1 = await fetchFileResult.getNextObject();
                fd1 = await asset1.open('r');
                expect(isNum(fd1)).assertTrue();
                let buf1 = new ArrayBuffer(4096);
                await fileio.read(fd1, buf1);
                let write = await fileio.write(fd, buf1);
                expect(write).assertEqual(assetProps.write);
                console.info(`res.bytesRead:${res.bytesRead},write:${write}`)
                console.info(`fd1:${fd1},fd:${fd}`)
                await asset.close(fd);
                await asset1.close(fd1);
                done();
            } catch (error) {
                console.info(`${testNum} :: error: ${error}`);
                await asset.close(fd);
                await asset1.close(fd1);
                expect.assertFail();
                done();
            }
        }
        const rOpenTest = async function (done, testNum, media_type, fetchOp, assetProps, expectCount) {
            let asset;
            let fd;
            try {
                let fetchFileResult = await userfile_mgr.getFileAssets(media_type, fetchOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, expectCount);
                if (!checkAssetCountPass) return;
                asset = await fetchFileResult.getFirstObject();
                fd = await asset.open('r');
                expect(isNum(fd)).assertTrue();
                let buf = new ArrayBuffer(4096);
                let res = await fileio.read(fd, buf);
                console.log(' bytesRead: ' + res.bytesRead)
                expect(res.bytesRead).assertEqual(assetProps.bytesRead);
                try {
                    await fileio.write(fd, buf);
                    expect.assertFail();
                } catch (error) {
                    expect(true).assertTrue();
                    await asset.close(fd);
                    done();
                }
            } catch (error) {
                console.info(`${testNum} :: error: ${error}`);
                expect.assertFail();
                await asset.close(fd);
                done();
            }
        }

        const wOpenTest = async function (done, testNum, media_type, fetchOp, assetProps, expectCount) {
            let asset, asset1;
            let fd, fd1;
            try {

                let fetchFileResult = await userfile_mgr.getFileAssets(media_type, fetchOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, expectCount);
                if (!checkAssetCountPass) return;
                asset = await fetchFileResult.getFirstObject();
                asset1 = await fetchFileResult.getNextObject();

                fd = await asset.open('w');
                expect(isNum(fd)).assertTrue();
                fd1 = await asset1.open('r');
                let buf = new ArrayBuffer(4096);
                await fileio.read(fd1, buf);
                let write = await fileio.write(fd, buf);
                console.info(`${testNum} :: write: ${write}`);
                expect(write).assertEqual(assetProps.write);
                let buf1 = new ArrayBuffer(4096);
                try {
                    await fileio.read(fd, buf1);
                    expect.assertFail();

                } catch (error) {
                    expect(true).assertTrue();

                }
                done();
            } catch (error) {
                console.info(`${testNum} :: error: ${error}`);
                expect(false).assertTrue();
                await asset.close(fd);
                await asset1.close(fd1);
                done();
            }
        }

        const closeTest = async function (done, testNum, media_type, fetchOp) {
            let asset;
            let fd;
            try {
                let fetchFileResult = await userfile_mgr.getFileAssets(media_type, fetchOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 2);
                if (!checkAssetCountPass) return;
                const asset = await fetchFileResult.getFirstObject();
                fd = await asset.open('r');
                expect(isNum(fd)).assertTrue();
                await asset.close(fd);
                let count = 0
                let buf = new ArrayBuffer(4096);
                try {
                    await fileio.read(fd, buf);
                } catch (error) {
                    count++
                }
                try {
                    await fileio.write(fd, buf);
                } catch (error) {
                    count++
                }
                await sleep(1000)
                expect(count).assertEqual(2);
                done();
            } catch (error) {
                console.info(`${testNum} error:${error}`)
                await asset.close(fd);
                expect(false).assertTrue();
                done();
            }
        }

        /**
         * @tc.number    : SUB_USERFILE_MGR_OPENANDCLOSE_ASSET_PROMISE_005_01
         * @tc.name      : open('rw')
         * @tc.desc      : open -rw the type of FILE
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_OPENANDCLOSE_ASSET_PROMISE_005_01', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_OPENANDCLOSE_ASSET_PROMISE_005_01';
            let media_type = [FILE_TYPE];
            let fetchOp = fetchOps(testNum, 'Documents/RW/', FILE_TYPE);
            let assetProps = {
                bytesRead: 10,
                write: 4096,
            };
            let expectCount = 2;
            await rwOpenTest(done, testNum, media_type, fetchOp, assetProps, expectCount)
        });

        /**
         * @tc.number    : SUB_USERFILE_MGR_OPENANDCLOSE_ASSET_PROMISE_005_02
         * @tc.name      : open('r')
         * @tc.desc      : open -r the type of FILE
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_OPENANDCLOSE_ASSET_PROMISE_005_02', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_OPENANDCLOSE_ASSET_PROMISE_005_02';
            let media_type = [FILE_TYPE];
            let fetchOp = fetchOps(testNum, 'Documents/R/', FILE_TYPE);
            let assetProps = {
                bytesRead: 10,
                write: 4096,
            };
            let expectCount = 2;
            await rOpenTest(done, testNum, media_type, fetchOp, assetProps, expectCount)
        });

        /**
         * @tc.number    : SUB_USERFILE_MGR_OPENANDCLOSE_ASSET_PROMISE_005_03
         * @tc.name      : open('w')
         * @tc.desc      : open -w the type of FILE
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_OPENANDCLOSE_ASSET_PROMISE_005_03', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_OPENANDCLOSE_ASSET_PROMISE_005_03';
            let media_type = [FILE_TYPE];
            let fetchOp = fetchOps(testNum, 'Documents/W/', FILE_TYPE);
            let assetProps = {
                write: 4096,
            };
            let expectCount = 2;
            await wOpenTest(done, testNum, media_type, fetchOp, assetProps, expectCount)
        });
    });
}
