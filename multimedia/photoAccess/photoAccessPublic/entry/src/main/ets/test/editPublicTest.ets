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

export default function editPublicTest () {
  describe('editPublicTest', function () {
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
      * @tc.number    : SUB_PHOTOACCESS_HELPER_EDITFUNC_PROMISE_WITHOUT_SYSTEMAPP_0000
      * @tc.name      : promise_editfunc_systemapp_000
      * @tc.desc      : Test isEdited function without system api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
      */
    it('promise_editfunc_systemapp_000', 0, async function (done) {
      const testNum = 'promise_editfunc_systemapp_000';
      try {
        let photoAsset = await getPhotoAsset();
        if (photoAsset === undefined) {
          console.info(`${testNum} failed; Can not getAsset`);
          expect(false).assertTrue();
          done();
          return;
        }
        let isEdited = await photoAsset.isEdited();
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
      * @tc.number    : SUB_PHOTOACCESS_HELPER_EDITFUNC_PROMISE_WITHOUT_SYSTEMAPP_0100
      * @tc.name      : promise_editfunc_systemapp_001
      * @tc.desc      : Test requestEditData function without system api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
      */
    it('promise_editfunc_systemapp_001', 0, async function (done) {
      const testNum = 'promise_editfunc_systemapp_001';
      try {
        let photoAsset = await getPhotoAsset();
        if (photoAsset === undefined) {
          console.info(`${testNum} failed; Can not getAsset`);
          expect(false).assertTrue();
          done();
          return;
        }
        let isEdited = await photoAsset.requestEditData();
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
      * @tc.number    : SUB_PHOTOACCESS_HELPER_EDITFUNC_PROMISE_WITHOUT_SYSTEMAPP_0200
      * @tc.name      : promise_editfunc_systemapp_002
      * @tc.desc      : Test requestSource function without system api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
      */
    it('promise_editfunc_systemapp_002', 0, async function (done) {
      const testNum = 'promise_editfunc_systemapp_002';
      try {
        let photoAsset = await getPhotoAsset();
        if (photoAsset === undefined) {
          console.info(`${testNum} failed; Can not getAsset`);
          expect(false).assertTrue();
          done();
          return;
        }
        let editdata = await photoAsset.requestSource();
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
      * @tc.number    : SUB_PHOTOACCESS_HELPER_EDITFUNC_PROMISE_WITHOUT_SYSTEMAPP_0300
      * @tc.name      : promise_editfunc_systemapp_003
      * @tc.desc      : Test commitEditedAsset function without system api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
      */
    it('promise_editfunc_systemapp_003', 0, async function (done) {
      const testNum = 'promise_editfunc_systemapp_003';
      try {
        let photoAsset = await getPhotoAsset();
        if (photoAsset === undefined) {
          console.info(`${testNum} failed; Can not getAsset`);
          expect(false).assertTrue();
          done();
          return;
        }
        let sourceFd = await photoAsset.commitEditedAsset('123456', 'file://media');
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
      * @tc.number    : SUB_PHOTOACCESS_HELPER_EDITFUNC_PROMISE_WITHOUT_SYSTEMAPP_0400
      * @tc.name      : promise_editfunc_systemapp_004
      * @tc.desc      : Test revertToOriginal function without system api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
      */
    it('promise_editfunc_systemapp_004', 0, async function (done) {
      const testNum = 'promise_editfunc_systemapp_004';
      try {
        let photoAsset = await getPhotoAsset();
        if (photoAsset === undefined) {
          console.info(`${testNum} failed; Can not getAsset`);
          expect(false).assertTrue();
          done();
          return;
        }
        let isEdited = await photoAsset.revertToOriginal();
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
      * @tc.number    : SUB_PHOTOACCESS_HELPER_EDITFUNC_CALLBACK_WITHOUT_SYSTEMAPP_0000
      * @tc.name      : callback_editfunc_systemapp_000
      * @tc.desc      : Test isEdited function without system api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
      */
    it('callback_editfunc_systemapp_000', 0, async function (done) {
      const testNum = 'callback_editfunc_systemapp_000';
      try {
        let photoAsset = await getPhotoAsset();
        if (photoAsset === undefined) {
          console.info(`${testNum} failed; Can not getAsset`);
          expect(false).assertTrue();
          done();
          return;
        }
        await photoAsset.isEdited(async (err, isEdited) => {
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
      * @tc.number    : SUB_PHOTOACCESS_HELPER_EDITFUNC_CALLBACK_WITHOUT_SYSTEMAPP_0100
      * @tc.name      : callback_editfunc_systemapp_001
      * @tc.desc      : Test requestEditData function without system api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
      */
    it('callback_editfunc_systemapp_001', 0, async function (done) {
      const testNum = 'callback_editfunc_systemapp_001';
      try {
        let photoAsset = await getPhotoAsset();
        if (photoAsset === undefined) {
          console.info(`${testNum} failed; Can not getAsset`);
          expect(false).assertTrue();
          done();
          return;
        }
        await photoAsset.requestEditData(async (err, editdata) => {
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
      * @tc.number    : SUB_PHOTOACCESS_HELPER_EDITFUNC_CALLBACK_WITHOUT_SYSTEMAPP_0200
      * @tc.name      : callback_editfunc_systemapp_002
      * @tc.desc      : Test requestSource function without system api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
      */
    it('callback_editfunc_systemapp_002', 0, async function (done) {
      const testNum = 'callback_editfunc_systemapp_002';
      try {
        let photoAsset = await getPhotoAsset();
        if (photoAsset === undefined) {
          console.info(`${testNum} failed; Can not getAsset`);
          expect(false).assertTrue();
          done();
          return;
        }
        await photoAsset.requestSource(async (err, sourceFd) => {
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
      * @tc.number    : SUB_PHOTOACCESS_HELPER_EDITFUNC_CALLBACK_WITHOUT_SYSTEMAPP_0300
      * @tc.name      : callback_editfunc_systemapp_003
      * @tc.desc      : Test commitEditedAsset function without system api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
      */
    it('callback_editfunc_systemapp_003', 0, async function (done) {
      const testNum = 'callback_editfunc_systemapp_003';
      try {
        let photoAsset = await getPhotoAsset();
        if (photoAsset === undefined) {
          console.info(`${testNum} failed; Can not getAsset`);
          expect(false).assertTrue();
          done();
          return;
        }
        await photoAsset.commitEditedAsset('123456', 'file://media', async (err) => {
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
      * @tc.number    : SUB_PHOTOACCESS_HELPER_EDITFUNC_CALLBACK_WITHOUT_SYSTEMAPP_0400
      * @tc.name      : callback_editfunc_systemapp_004
      * @tc.desc      : Test revertToOriginal function without system api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
      */
    it('callback_editfunc_systemapp_004', 0, async function (done) {
      const testNum = 'callback_editfunc_systemapp_004';
      try {
        let photoAsset = await getPhotoAsset();
        if (photoAsset === undefined) {
          console.info(`${testNum} failed; Can not getAsset`);
          expect(false).assertTrue();
          done();
          return;
        }
        await photoAsset.revertToOriginal(async (err) => {
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