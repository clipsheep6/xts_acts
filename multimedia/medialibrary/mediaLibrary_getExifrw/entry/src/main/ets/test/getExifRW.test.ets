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
import image from '@ohos.multimedia.image';
import mediaLibrary from '@ohos.multimedia.mediaLibrary';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';

export default function fileAssetTestPromiseTest(abilityContext) {
    describe('redaction', function () {

        var media = mediaLibrary.getMediaLibrary(abilityContext);
        const fileKeyObj = mediaLibrary.FileKey;
        let imageType = mediaLibrary.MediaType.IMAGE;

        /**
        * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETEXIFRW_001
        * @tc.name      : getImageProperty
        * @tc.desc      : open('rw')
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_MEDIALIBRARY_GETEXIFRW_001', 0, async function (done) {
            try {
                console.info('SUB_MEDIA_MEDIALIBRARY_GETEXIFRW_001 start1');
                let fetchOp = {
                    selections: fileKeyObj.RELATIVE_PATH + '= ? AND ' + fileKeyObj.MEDIA_TYPE + '= ?',
                    selectionArgs: ['Pictures/Images/', imageType.toString()],
                };
                console.info('SUB_MEDIA_MEDIALIBRARY_GETEXIFRW_001 start2');
                let fetchFileResult = await media.getFileAssets(fetchOp);
                const asset = await fetchFileResult.getFirstObject();
                let fd = await asset.open('rw');
                console.info('SUB_MEDIA_MEDIALIBRARY_GETEXIFRW_001 fd: ' + fd);
                const imageSource = image.createImageSource(fd);
                let value1 = await imageSource.getImageProperty("GPSLatitude");
                let value2 = await imageSource.getImageProperty("GPSLongitude");
                let value3 = await imageSource.getImageProperty("GPSLatitudeRef");
                let value4 = await imageSource.getImageProperty("GPSLongitudeRef");
                console.info('SUB_MEDIA_MEDIALIBRARY_GETEXIFRW_001 value1: ' + value1);
                console.info('SUB_MEDIA_MEDIALIBRARY_GETEXIFRW_001 value2: ' + value2);
                console.info('SUB_MEDIA_MEDIALIBRARY_GETEXIFRW_001 value3: ' + value3);
                console.info('SUB_MEDIA_MEDIALIBRARY_GETEXIFRW_001 value4: ' + value4);
                expect(value1.search("38") != -1).assertTrue();
                expect(value2.search("9") != -1).assertTrue();
                expect(value3).assertEqual('N');
                expect(value4).assertEqual('W');
                done();
            } catch (error) {
                console.info('SUB_MEDIA_MEDIALIBRARY_GETEXIFRW_001 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })
    })
}