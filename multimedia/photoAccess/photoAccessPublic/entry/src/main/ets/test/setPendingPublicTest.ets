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

//@ts-nocheck
import photoAccessHelper from '@ohos.file.photoAccessHelper';
import { describe, it, expect, beforeAll } from 'deccjsunit/index';
import {
  photoKeys,
  photoFetchOption,
  getPermissionByAutoClick
} from '../../../../../../common';

export default function setPendingPublicTest () {
    describe('setPendingPublicTest', function () {
        const helper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);

        beforeAll(async function() {
          console.info('beforeAll case');
          await getPermissionByAutoClick('ohos.acts.multimedia.photoaccess');
        });

        async function getPhotoAsset() : Promise<photoAccessHelper.PhotoAsset> {
          let asset: photoAccessHelper.PhotoAsset = undefined;
          try {
            let fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset>;
            let fetchOps = photoFetchOption(testNum, photoKeys.HEIGHT, height);
            fetchResult = await helper.getAssets(fetchOps);
            console.info(`${testNum} getFileAsset fetchResult: ${fetchResult.getCount()}`);
            if (fetchResult.getCount() > 0) {
              asset = await fetchResult.getFirstObject();
            } else {
              console.info(`${testNum} can not getFileAsset by uri ${uri}`)
            }
            fetchResult.close();
          } catch (error) {
            console.info(`${testNum} getFileAssetByHeight error: ${error}`);
            throw error;
          }
          return new Promise((resolve, reject) => {
            resolve(asset);
          });
        }

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_PENDING_PROMISE_WITHOUT_SYSTEMAPP_0000
         * @tc.name      : promise_pending_systemapp_000
         * @tc.desc      : Test setPending(true) function without system api
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('promise_pending_systemapp_000', 0, async function (done) {
          const testNum = 'promise_pending_systemapp_000';
          try {
            let photoAsset = await getPhotoAsset();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let isEdited = await photoAsset.setPending(true);
            expect(false).assertTrue();
            done();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(error.code === 202).assertTrue();
            done();
            return;
          }
        });

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_PENDING_PROMISE_WITHOUT_SYSTEMAPP_0100
         * @tc.name      : promise_pending_systemapp_001
         * @tc.desc      : Test setPending(false) function without system api
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('promise_pending_systemapp_001', 0, async function (done) {
          const testNum = 'promise_pending_systemapp_001';
          try {
            let photoAsset = await getPhotoAsset();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let isEdited = await photoAsset.setPending(false);
            expect(false).assertTrue();
            done();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(error.code === 202).assertTrue();
            done();
            return;
          }
        });

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_PROMISE_WITHOUT_SYSTEMAPP_0000
         * @tc.name      : promise_callback_systemapp_000
         * @tc.desc      : Test setPending(true) function without system api
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('promise_callback_systemapp_000', 0, async function (done) {
          const testNum = 'promise_callback_systemapp_000';
          try {
            let photoAsset = await getPhotoAsset();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            await photoAsset.setPending(true, async (err) => {
              if (err === undefined) {
                expect(false).assertTrue();
                done();
                return;
              }
              console.info(`${testNum} failed; error: ${err}`);
              expect(err.code === 202).assertTrue();
              done();
              return;
            });
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(error.code === 202).assertTrue();
            done();
            return;
          }
        });

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_PROMISE_WITHOUT_SYSTEMAPP_0100
         * @tc.name      : promise_callback_systemapp_001
         * @tc.desc      : Test setPending(false) function without system api
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('promise_callback_systemapp_001', 0, async function (done) {
          const testNum = 'promise_callback_systemapp_001';
          try {
            let photoAsset = await getPhotoAsset();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            await photoAsset.setPending(false, async (err) => {
              if (err === undefined) {
                expect(false).assertTrue();
                done();
                return;
              }
              console.info(`${testNum} failed; error: ${err}`);
              expect(err.code === 202).assertTrue();
              done();
              return;
            });
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(error.code === 202).assertTrue();
            done();
            return;
          }
        });
    })
}