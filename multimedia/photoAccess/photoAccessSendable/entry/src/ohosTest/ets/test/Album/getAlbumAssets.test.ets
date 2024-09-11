/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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

import photoAccessHelper from '@ohos.file.photoAccessHelper'
import sendablePhotoAccessHelper from '@ohos.file.sendablePhotoAccessHelper'
import { describe, it, expect, beforeAll } from '@ohos/hypium'
import { common } from '@kit.AbilityKit'
import {
  sleep,
  genRadomStr,
  fetchOption,
  albumFetchOption,
  getFileAsset,
  photoKeys,
  getPermission
} from '../../util/common'

export default function getAlbumAssetsTest () {
  describe('getAlbumAssetsTest', () => {

    let globalContext: common.UIAbilityContext = AppStorage.get('globalContext') as common.UIAbilityContext;
    let sendablePhAccessHelper: sendablePhotoAccessHelper.PhotoAccessHelper = sendablePhotoAccessHelper.getPhotoAccessHelper(globalContext);
    const helper: photoAccessHelper.PhotoAccessHelper = photoAccessHelper.getPhotoAccessHelper(globalContext);

    beforeAll(async () => {
      console.info('beforeAll case');
      await getPermission();
      await sleep(10);
    });


    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_ADD_ASSETS_0100
     * @tc.name      : addAssets_promise_001
     * @tc.desc      : add image asset to user album
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('addAssets_promise_001', 0, async (done: Function) => {
      const testNum = 'addAssets_promise_001';
      try {
        // 创建相册
        let albumName: string = genRadomStr(20) + new Date().getTime();
        let albumChangeRequest1: photoAccessHelper.MediaAlbumChangeRequest = photoAccessHelper.MediaAlbumChangeRequest.createAlbumRequest(globalContext, albumName);
        await helper.applyChanges(albumChangeRequest1);
        // 获取照片
        let fetchOps: photoAccessHelper.FetchOptions = fetchOption(testNum, photoKeys.DISPLAY_NAME, 'addPro01.jpg');
        let asset: photoAccessHelper.PhotoAsset | undefined = await getFileAsset(globalContext, testNum, fetchOps);
        expect(asset !== undefined).assertTrue();
        let ops: photoAccessHelper.FetchOptions = albumFetchOption(testNum, 'album_name', albumName);
        // 查询上面创建的相册
        let albumFetchResult: photoAccessHelper.FetchResult<photoAccessHelper.Album> = await helper.getAlbums(photoAccessHelper.AlbumType.USER, photoAccessHelper.AlbumSubtype.USER_GENERIC, ops);
        let album: photoAccessHelper.Album = await albumFetchResult.getFirstObject();
        // 添加一个照片进入相册
        let albumChangeRequest2: photoAccessHelper.MediaAlbumChangeRequest = new photoAccessHelper.MediaAlbumChangeRequest(album);
        albumChangeRequest2.addAssets([asset]);
        await helper.applyChanges(albumChangeRequest2);
        // sendable 相册
        let fetchResult: sendablePhotoAccessHelper.FetchResult<sendablePhotoAccessHelper.Album> = await sendablePhAccessHelper.getAlbums(sendablePhotoAccessHelper.AlbumType.USER, sendablePhotoAccessHelper.AlbumSubtype.USER_GENERIC, ops);
        let sendableAlbum: sendablePhotoAccessHelper.Album = await fetchResult.getFirstObject();
        expect(sendableAlbum.imageCount).assertEqual(1);
        fetchResult.close();
        done();
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

  })
}
