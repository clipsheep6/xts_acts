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
import dataSharePredicates from '@ohos.data.dataSharePredicates';
import { describe, it, expect } from 'deccjsunit/index';
import fs from '@ohos.file.fs';
import {
  photoKeys,
  fetchOption,
  getAssetId,
} from '../../../../../../common';

export default function editTest () {
    describe('editTest', function () {
        const helper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext)

        async function getAllPhotoCount (testNum) : Promise<number> {
          let count: number = 0
          try {
            const predicates = new dataSharePredicates.DataSharePredicates();
            const ops : photoAccessHelper.FetchOptions = {
              fetchColumns: [],
              predicates: predicates
            };
            let fetchResult = await helper.getAssets(ops);
            count = fetchResult.getCount();
            console.info(`${testNum} getAllPhotoCount ${count}`);
            fetchResult.close();
          } catch (error) {
            console.info(`${testNum} getAllPhotoCount failed; error: ${error}`);
            throw error;
          }

          return new Promise((resolve, reject) => {
            resolve(count);
          });
        }

        async function getFileAssetByUri (testNum, uri) : Promise<photoAccessHelper.PhotoAsset> {
          let asset: photoAccessHelper.PhotoAsset = undefined;
          try {
            let fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset>;
            let fetchOps = fetchOption(testNum, photoKeys.URI, uri);
            fetchResult = await helper.getAssets(fetchOps);
            console.info(`${testNum} getFileAsset fetchResult: ${fetchResult.getCount()}`);
            if (fetchResult.getCount() > 0) {
              asset = await fetchResult.getFirstObject();
            } else {
              console.info(`${testNum} can not getFileAsset by uri ${uri}`)
            }
            fetchResult.close();
          } catch (error) {
            console.info(`${testNum} getFileAssetByUri error: ${error}`);
            throw error;
          }
          return new Promise((resolve, reject) => {
            resolve(asset);
          });
        }

        /**
        * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_EDITTEST_0000
        * @tc.name      : editTest_callback_000
        * @tc.desc      : Test isEdited permits function
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('editTest_callback_000', 0, async function (done) {
          const testNum = 'editTest_callback_000';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          try {
            let fetchColumn = {
              fetchColumns: [],
              predicates: new dataSharePredicates.DataSharePredicates()
            };
            let fetchResult = await helper.getAssets(fetchColumn);
            photoAsset = await fetchResult.getFirstObject();
            fetchResult.close();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let isEdited = await photoAsset.isEdited();
            expect(isEdited).assertFalse();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        });

        /**
        * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_EDITTEST_0000
        * @tc.name      : editTest_callback_001
        * @tc.desc      : Test isEdited permits function
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('editTest_callback_001', 0, async function (done) {
          const testNum = 'editTest_callback_001';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          try {
            let fetchColumn = {
              fetchColumns: [],
              predicates: new dataSharePredicates.DataSharePredicates()
            };
            let fetchResult = await helper.getAssets(fetchColumn);
            photoAsset = await fetchResult.getFirstObject();
            fetchResult.close();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let isEdited = await photoAsset.isEdited();
            expect(isEdited).assertFalse();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        });


        /**
        * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_EDITTEST_0000
        * @tc.name      : editTest_promise_000
        * @tc.desc      : Test isEdited permits function
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('editTest_promise_000', 0, async function (done) {
          const testNum = 'editTest_promise_000';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          try {
            let fetchColumn = {
              fetchColumns: [],
              predicates: new dataSharePredicates.DataSharePredicates()
            };
            let fetchResult = await helper.getAssets(fetchColumn);
            photoAsset = await fetchResult.getFirstObject();
            fetchResult.close();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let isEdited = await photoAsset.isEdited();
            expect(isEdited).assertFalse();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        });
        
        /**
        * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_EDITTEST_0000
        * @tc.name      : requestEditData_callback_002
        * @tc.desc      : Test requestEditData permits function
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('requestEditData_callback_002', 0, async function (done) {
          const testNum = 'requestEditData_callback_002';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          try {
            let fetchColumn = {
              fetchColumns: [],
              predicates: new dataSharePredicates.DataSharePredicates()
            };
            let fetchResult = await helper.getAssets(fetchColumn);
            photoAsset = await fetchResult.getFirstObject();
            fetchResult.close();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let requestEditData = await photoAsset.requestEditData();
            expect(requestEditData).assertFalse();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        });
        
        /**
        * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_EDITTEST_0000
        * @tc.name      : requestEditData_callback_003
        * @tc.desc      : Test requestEditData permits function
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('requestEditData_callback_003', 0, async function (done) {
          const testNum = 'requestEditData_callback_003';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          try {
            let fetchColumn = {
              fetchColumns: [],
              predicates: new dataSharePredicates.DataSharePredicates()
            };
            let fetchResult = await helper.getAssets(fetchColumn);
            photoAsset = await fetchResult.getFirstObject();
            fetchResult.close();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let requestEditData = await photoAsset.requestEditData();
            expect(requestEditData).assertFalse();
            photoAsset.editTest( async (err) => {
              try {
                if (err !== undefined) {
                  console.info(`${testNum} getAssets failed; err: ${err}`);
                  expect(false).assertTrue();
                  expect(err).assertEqual(null);

                } else {
                  expect(true).assertTrue();
                }
              } catch (error) {
                console.info(`${testNum} editTest failed; error: ${error}`);
                expect(false).assertTrue();
              }
              done();
            })
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        });
        
        
        /**
        * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_EDITTEST_0000
        * @tc.name      : requestEditData_promise_001
        * @tc.desc      : Test requestEditData permits function
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
       
        it('requestEditData_promise_001', 0, async function (done) {
          const testNum = 'requestEditData_promise_001';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          try {
            let fetchColumn = {
              fetchColumns: [],
              predicates: new dataSharePredicates.DataSharePredicates()
            };
            let fetchResult = await helper.getAssets(fetchColumn);
            photoAsset = await fetchResult.getFirstObject();
            fetchResult.close();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let requestEditData = await photoAsset.requestEditData();
            expect(requestEditData).assertFalse();
            photoAsset.editTest( async (err) => {
              try {
                if (err !== undefined) {
                  console.info(`${testNum} getAssets failed; err: ${err}`);
                  expect(false).assertTrue();
                  expect(err).assertEqual(null);//判断返回结果是否为空字符串

                } else {
                  expect(true).assertTrue();
                }
              } catch (error) {
                console.info(`${testNum} editTest failed; error: ${error}`);
                expect(false).assertTrue();
              }
              done();
            })
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        });

        /**
        * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_EDITTEST_0000
        * @tc.name      : requestEditedContent_callback_004
        * @tc.desc      : Test requestEditedContent permits function
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('requestEditedContent_callback_004', 0, async function (done) {
          const testNum = 'requestEditedContent_callback_004';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;//入参两个undefined怎么写
          photoAsset.xxx(undefined, undefined)//这么写行么
          try {
            let fetchColumn = {
              fetchColumns: [],
              predicates: new dataSharePredicates.DataSharePredicates()
            };
            let fetchResult = await helper.getAssets(fetchColumn);
            photoAsset = await fetchResult.getFirstObject();
            fetchResult.close();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let requestEditedContent = await photoAsset.requestEditedContent();
            expect(requestEditedContent).assertFalse();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        });

        /**
        * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_EDITTEST_0000
        * @tc.name      : requestEditedContent_callback_005
        * @tc.desc      : Test requestEditedContent permits function
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('requestEditedContent_callback_005', 0, async function (done) {
          const testNum = 'requestEditedContent_callback_005';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          try {
            let fetchColumn = {
              fetchColumns: [],
              predicates: new dataSharePredicates.DataSharePredicates()
            };
            let fetchResult = await helper.getAssets(fetchColumn);
            photoAsset = await fetchResult.getFirstObject();
            fetchResult.close();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let requestEditedContent = await photoAsset.requestEditedContent();
            expect(requestEditedContent).assertFalse();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        });
        
        /**
        * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_EDITTEST_0000
        * @tc.name      : requestEditedContent_callback_006
        * @tc.desc      : Test requestEditedContent permits function
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
       it('requestEditedContent_callback_006', 0, async function (done) {
        const testNum = 'requestEditedContent_callback_006';
          let photoAsset: photoAccessHelper.PhotoAsset = true;//入参为true
          try {
            let fetchColumn = {
              fetchColumns: [],
              predicates: new dataSharePredicates.DataSharePredicates()
            };
            let fetchResult = await helper.getAssets(fetchColumn);
            photoAsset = await fetchResult.getFirstObject();
            fetchResult.close();
            let fd: number = await photoAsset.open('rw');//传入fd
            expect(fd).assertLarger(0);//判断fd大于0
            await photoAsset.close(fd);//关闭fd
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let requestEditedContent = await photoAsset.requestEditedContent();
            expect(requestEditedContent).assertFalse();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        });

        //借鉴// create -> pending(true) -> open -> write -> pending(false) -> close
        //   const testNum = 'requestEditedContent_callback_005';
        //   let photoAsset: photoAccessHelper.PhotoAsset = true;
        //   try {
        //     let oldCount: number = await getAllPhotoCount(testNum);
        //     let photoAsset: photoAccessHelper.PhotoAsset = await helper.createAsset(displayName);
        //     let newCount: number = await getAllPhotoCount(testNum);//判断是否增加
        //     expect(newCount - oldCount).assertLarger(0);
        //     await photoAsset.setPending(true);
        //     newCount = await getAllPhotoCount(testNum);
        //     expect(newCount - oldCount).assertLarger(0);
        //     let fd: number = await photoAsset.open('rw');
        //     await fs.write(fd, '123');
        //     await photoAsset.setPending(false);
        //     newCount = await getAllPhotoCount(testNum);
        //     expect(newCount - oldCount).assertLarger(0);
        //     await photoAsset.close(fd);
        //     newCount = await getAllPhotoCount(testNum);
        //     expect(newCount - oldCount).assertLarger(0);
        //     done();
        //   } catch (error) {
        //     console.info(`${testNum} failed; error: ${error}`);
        //     expect(false).assertTrue();
        //     done();
        //   }
        // });

        /**
        * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_EDITTEST_0000
        * @tc.name      : requestEditedContent_callback_007
        * @tc.desc      : Test requestEditedContent permits function
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('requestEditedContent_callback_007', 0, async function (done) {
          const testNum = 'requestEditedContent_callback_007';
            let photoAsset: photoAccessHelper.PhotoAsset = false;
            try {
              let fetchColumn = {
                fetchColumns: [],
                predicates: new dataSharePredicates.DataSharePredicates()
              };
              let fetchResult = await helper.getAssets(fetchColumn);
              photoAsset = await fetchResult.getFirstObject();
              fetchResult.close();
              let fd: number = await photoAsset.open('rw');
              expect(fd).assertLarger(0);
              await photoAsset.close(fd);
              if (photoAsset === undefined) {
                console.info(`${testNum} failed; Can not getAsset`);
                expect(false).assertTrue();
                done();
                return;
              }
              let requestEditedContent = await photoAsset.requestEditedContent();
              expect(requestEditedContent).assertFalse();
            } catch (error) {
              console.info(`${testNum} failed; error: ${error}`);
              expect(false).assertTrue();
              done();
              return;
            }
            done();
          });

        /**
        * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_EDITTEST_0000
        * @tc.name      : requestEditedContent_promise_002
        * @tc.desc      : Test requestEditedContent permits function
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('requestEditedContent_promise_002', 0, async function (done) {
          const testNum = 'requestEditedContent_promise_002';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          try {
            let fetchColumn = {
              fetchColumns: [],
              predicates: new dataSharePredicates.DataSharePredicates()
            };
            let fetchResult = await helper.getAssets(fetchColumn);
            photoAsset = await fetchResult.getFirstObject();
            fetchResult.close();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let requestEditedContent = await photoAsset.requestEditedContent();
            expect(requestEditedContent).assertFalse();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        });
          
        /**
        * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_EDITTEST_0000
        * @tc.name      : requestEditedContent_promise_003
        * @tc.desc      : Test requestEditedContent permits function
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
       it('requestEditedContent_promise_003', 0, async function (done) {
        const testNum = 'requestEditedContent_promise_003';
          let photoAsset: photoAccessHelper.PhotoAsset = true;
          try {
            let fetchColumn = {
              fetchColumns: [],
              predicates: new dataSharePredicates.DataSharePredicates()
            };
            let fetchResult = await helper.getAssets(fetchColumn);
            photoAsset = await fetchResult.getFirstObject();
            fetchResult.close();
            let fd: number = await photoAsset.open('rw');
            expect(fd).assertLarger(0);
            await photoAsset.close(fd);
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let requestEditedContent = await photoAsset.requestEditedContent();
            expect(requestEditedContent).assertFalse();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        });
        
        /**
        * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_EDITTEST_0000
        * @tc.name      : requestEditedContent_promise_004
        * @tc.desc      : Test requestEditedContent permits function
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
       it('requestEditedContent_promise_004', 0, async function (done) {
        const testNum = 'requestEditedContent_promise_004';
          let photoAsset: photoAccessHelper.PhotoAsset = false;
          try {
            let fetchColumn = {
              fetchColumns: [],
              predicates: new dataSharePredicates.DataSharePredicates()
            };
            let fetchResult = await helper.getAssets(fetchColumn);
            photoAsset = await fetchResult.getFirstObject();
            fetchResult.close();
            let fd: number = await photoAsset.open('rw');
            expect(fd).assertLarger(0);
            await photoAsset.close(fd);
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let requestEditedContent = await photoAsset.requestEditedContent();
            expect(requestEditedContent).assertFalse();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        });
    })
}