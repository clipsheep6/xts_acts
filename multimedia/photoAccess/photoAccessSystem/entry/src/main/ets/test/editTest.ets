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
import fs from '@ohos.file.fs';
import fileuri from '@ohos.file.fileuri';
import { describe, it, expect } from 'deccjsunit/index';
import fs from '@ohos.file.fs';
import {
  photoKeys,
  fetchOption,
  photoFetchOption,
  getAssetId,
  sleep
} from '../../../../../../common';

export default function editTest () {
    describe('editTest', function () {
        const helper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);

        async function getFileAssetByHeight(testNum, height) : Promise<photoAccessHelper.PhotoAsset> {
          let asset: photoAccessHelper.PhotoAsset = undefined;
          try {
            let fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset>;
            let fetchOps = photoFetchOption(testNum, photoKeys.HEIGHT, height);
            fetchResult = await helper.getAssets(fetchOps);
            console.info(`${testNum} getFileAsset fetchResult: ${fetchResult.getCount()}`);
            if (fetchResult.getCount() > 0) {
              asset = await fetchResult.getFirstObject();
              while (true) {
                let fd = await asset.open('rw');
                let fdSize = fs.statSync(fd).size;
                if (fdSize !== 0) {
                  break;
                } else {
                  asset = await fetchResult.getNextObject();
                }
              }
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

        async function setFileAssetAsFileAndGetFileUri(testNum, photoAsset): Promise<string> {
          let uri: string = undefined;
          try {
            const context = globalThis.abilityContext;
            let pathDir = context.filesDir;
            let jpgFile = pathDir + "/" + testNum + ".jpg";
            let isAccess = await fs.access(jpgFile);
            if (!isAccess) {
              let rfd = await photoAsset.open('rw');
              let file = await fs.open(jpgFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
              const fileBytes = 10 * 1024 * 1024;
              let arrayBuffer = new ArrayBuffer(fileBytes);
              let readLen = await fs.read(rfd, arrayBuffer);
              await fs.write(file.fd, arrayBuffer, {
                length: readLen
              });
              fs.fsyncSync(file.fd);
              await photoAsset.close(rfd);
              fs.closeSync(file);
            }
            uri = fileuri.getUriFromPath(jpgFile);
          } catch (error) {
            console.info(`${testNum} setFileAssetAsFileAndGetFileUri error: ${error}`);
            throw error;
          }
          return new Promise((resolve, reject) => {
            resolve(uri);
          });
        }

        async function createNewAssetByCopyAsset(testNum, oldAsset) {
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          try {
            let displayName = 'newAsset.jpg';
            photoAsset = await helper.createAsset(displayName);
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not createAsset`);
              expect(false).assertTrue();
              done();
              return undefined;
            }
            let wfd: number = await photoAsset.open('rw');
            if (wfd <= 0) {
              console.info(`${testNum} failed; Can not open asset wfd ${wfd}`);
              expect(false).assertTrue();
              done();
              return undefined;
            }
            let rfd: number = await oldAsset.open('r');
            if (rfd <= 0) {
              console.info(`${testNum} failed; Can not open asset rfd ${rfd}`);
              expect(false).assertTrue();
              done();
              return undefined;
            }
            console.info(`${testNum} rfd: ${fs.statSync(rfd).size}`);
            if (fs.statSync(rfd).size === 0) {
              return new Promise((resolve, reject) => {
                resolve(-1);
              });
            }
            const fileBytes = 5 * 1024 * 1024;
            let arrayBuffer = new ArrayBuffer(fileBytes);
            let readLen = await fs.read(rfd, arrayBuffer, {
              offset: 0
            });
            await fs.write(wfd, arrayBuffer, {
              length: readLen
            });
            fs.fsyncSync(wfd);
            await photoAsset.close(wfd);
            await oldAsset.close(rfd);
          } catch (error) {
            console.info(`${testNum} createNewAssetByCopyAsset error: ${error}`);
            throw error;
          }
          return new Promise((resolve, reject) => {
            resolve(photoAsset);
          });
        }

        async function verifyAssetHeight(testNum, uri, height): Promise<boolean> {
          let isVerify: boolean = false;
          try {
            let asset: photoAccessHelper.PhotoAsset = undefined;
            let fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset>;
            let fetchOps = photoFetchOption(testNum, photoKeys.URI, uri);
            fetchResult = await helper.getAssets(fetchOps);
            console.info(`${testNum} verifyAssetHeight getFileAsset fetchResult: ${fetchResult.getCount()}`);
            if (fetchResult.getCount() > 0) {
              asset = await fetchResult.getFirstObject();
            } else {
              console.info(`${testNum} can not getFileAsset by uri ${uri}`)
              return new Promise((resolve, reject) => {
                resolve(isVerify);
              });
            }
            fetchResult.close();
            console.info(`${testNum} verifyAssetHeight height: ${asset.get(photoKeys.HEIGHT)}`);
            if (asset.get(photoKeys.HEIGHT) !== height) {
              isVerify = false;
            } else {
              isVerify = true;
            }
          } catch (error) {
            console.info(`${testNum} verifyAssetHeight error: ${error}`);
            throw error;
          }
          return new Promise((resolve, reject) => {
            resolve(isVerify);
          });
        }

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_ISEDIT_0000
         * @tc.name      : isedit_callback_000
         * @tc.desc      : Test isEdited function
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('isedit_callback_000', 0, async function (done) {
          const testNum = 'isedit_callback_000';
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
            photoAsset.isEdited(async (err, isEdited) => {
              if (err !== undefined) {
                console.info(`${testNum} failed; error: ${err}`);
                expect(false).assertTrue();
                done();
                return;
              }
              expect(true).assertTrue();
              done();
            });
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
        });

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_ISEDIT_0000
         * @tc.name      : isedit_promise_000
         * @tc.desc      : Test isEdited function
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('isedit_promise_000', 0, async function (done) {
          const testNum = 'isedit_promise_000';
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
            expect(true).assertTrue();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        });
        
        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_REQUESTEDITDATA_0000
         * @tc.name      : requestEditData_callback_000
         * @tc.desc      : Test requestEditData function
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('requestEditData_callback_000', 0, async function (done) {
          const testNum = 'requestEditData_callback_000';
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
            photoAsset.requestEditData(async (err, editData) => {
              if (err !== undefined) {
                console.info(`${testNum} failed; error: ${err}`);
                expect(false).assertTrue();
                done();
                return;
              }
              except(editData).assertEqual('');
              done();
            });
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        });
        
        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_REQUESTEDITDATA_0000
         * @tc.name      : requestEditData_promise_000
         * @tc.desc      : Test requestEditData function
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('requestEditData_promise_000', 0, async function (done) {
          const testNum = 'requestEditData_promise_000';
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
            expect(requestEditData).assertEqual('');
            done();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        });

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_REQUESTSOURCE_0000
         * @tc.name      : requestSource_callback_000
         * @tc.desc      : Test requestSource function
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('requestSource_callback_000', 0, async function (done) {
          const testNum = 'requestSource_callback_000';
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
            photoAsset.requestSource(async (err, fd) => {
              if (err !== undefined) {
                console.info(`${testNum} failed; error: ${error}`);
                expect(false).assertTrue();
                if (fd > 0) {
                  await photoAsset.close(fd);
                }
                done();
                return;
              }
              expect(fd).assertLarger(0);
              await photoAsset.close(fd);
              done();
              return;
            });
            done();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        });
        
        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_REQUESTSOURCE_0000
         * @tc.name      : requestSource_promise_000
         * @tc.desc      : Test requestEditedContent function
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('requestSource_promise_000', 0, async function (done) {
          const testNum = 'requestSource_promise_000';
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
            let fd = await photoAsset.requestSource();
            expect(fd).assertLarger(0);
            await photoAsset.close(fd);
            done();
            return;
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
        });

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_COMMIREDITEDASSET_0000
         * @tc.name      : commitEditedAsset_callback_000
         * @tc.desc      : commitEditedAsset by { undefined, undefined }
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 2
         */
        it('commitEditedAsset_callback_000', 0, async function (done) {   
          const testNum = 'commitEditedAsset_callback_000';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          const editdata = undefined;
          const uri = undefined;
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
            try {
              photoAsset.commitEditedAsset(editdata, uri, (err) => {
                if (err === undefined) {
                  console.info(`${testNum} can not find err`)
                  expect(false).assertTrue();
                  done();
                  return;
                }
                expect(true).assertTrue();
                done();
              });
            } catch (error) {
              expect(true).assertTrue();
              done();
            }
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;        
          }
        })

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_COMMIREDITEDASSET_0100
         * @tc.name      : commitEditedAsset_callback_001
         * @tc.desc      : commitEditedAsset by { undefined, "file://media" }
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 2
         */
        it('commitEditedAsset_callback_001', 0, async function (done) {
          const testNum = 'commitEditedAsset_callback_001';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          const editdata = undefined;
          const uri = "file://media";
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
            try {
              photoAsset.commitEditedAsset(editdata, uri, (err) => {
                if (err === undefined) {
                  console.info(`${testNum} can not find err`);
                  expect(false).assertTrue();
                  done();
                  return;
                }
                expect(true).assertTrue();
                done();
              });
            } catch (error) {
              expect(true).assertTrue();
              done();
            }
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
        })

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_COMMIREDITEDASSET_0200
         * @tc.name      : commitEditedAsset_callback_002
         * @tc.desc      : commitEditedAsset by { "123456", "undefined" }
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 2
         */
        it('commitEditedAsset_callback_002', 0, async function (done) {
          const testNum = 'commitEditedAsset_callback_002';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          const editdata = "123456";
          const uri = undefined;
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
            try {
              photoAsset.commitEditedAsset(editdata, uri, (err) => {
                if (err === undefined) {
                  console.info(`${testNum} can not find err`);
                  expect(false).assertTrue();
                  done();
                  return;
                }
                expect(true).assertTrue();
                done();
              });
            } catch (error) {
              expect(true).assertTrue();
              done();
            }
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
        })

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_COMMIREDITEDASSET_0300
         * @tc.name      : commitEditedAsset_callback_003
         * @tc.desc      : commitEditedAsset by { "123456", "file://media" }
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 2
         */
        it('commitEditedAsset_callback_003', 0, async function (done) {   
          const testNum = 'commitEditedAsset_callback_003';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          const editdata = "123456";
          const uri = "file://media";
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
            try {
              photoAsset.commitEditedAsset(editdata, uri, (err) => {
                if (err === undefined) {
                  console.info(`${testNum} can not find err`);
                  expect(false).assertTrue();
                  done();
                  return;
                }
                expect(true).assertTrue();
                done();
              });
            } catch (error) {
              expect(true).assertTrue();
              done();
            }
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
        })

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_COMMIREDITEDASSET_0400
         * @tc.name      : commitEditedAsset_callback_004
         * @tc.desc      : commitEditedAsset by { undefined, undefined, undefined }
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 2
         */
        it('commitEditedAsset_callback_004', 0, async function (done) {   
          const testNum = 'commitEditedAsset_callback_004';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          const editdata = undefined;
          const uri = undefined;
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
            try {
              photoAsset.commitEditedAsset(editdata,uri,undefined);
              expect(false).assertTrue();
              done();
              return;
            } catch (error) {
              expect(true).assertTrue();
            }
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        })

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_COMMIREDITEDASSET_0000
         * @tc.name      : commitEditedAsset_promise_000
         * @tc.desc      : commitEditedAsset by { undefined, undefined }
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 2
         */
        it('commitEditedAsset_promise_000', 0, async function (done) {
          const testNum = 'commitEditedAsset_promise_000';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          const editdata = undefined;
          const uri = undefined;
          try {
            let fetchColumn = {
              fetchColumns: [],
              predicates: new dataSharePredicates.DataSharePredicates()
            };
            let fetchResult = await helper.getAssets(fetchColumn);
            photoAsset = await fetchResult.getFirstObject();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          try {
            // @ts-ignore
            await photoAsset.commitEditedAsset(editdata, uri);
            console.info(`${testNum} can not find err`);
            expect(false).assertTrue();
            done();
            return;
          } catch (error) {
            expect(true).assertTrue();
          }
          done();
        })

        /**
        * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_COMMIREDITEDASSET_0100
        * @tc.name      : commitEditedAsset_promise_001
        * @tc.desc      : commitEditedAsset by { undefined, "file://media" }
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
        it('commitEditedAsset_promise_001', 0, async function (done) {
          const testNum = 'commitEditedAsset_promise_001';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          const editdata = undefined;
          const uri = "file://media";
          try {
            let fetchColumn = {
              fetchColumns: [],
              predicates: new dataSharePredicates.DataSharePredicates()
            };
            let fetchResult = await helper.getAssets(fetchColumn);
            photoAsset = await fetchResult.getFirstObject();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          try {
            // @ts-ignore
            await photoAsset.commitEditedAsset(editdata,uri);
            console.info(`${testNum} can not find err`);
            expect(false).assertTrue();
            done();
            return;
          } catch (error) {
            expect(true).assertTrue();
          }
          done();
        })

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_COMMIREDITEDASSET_0200
         * @tc.name      : commitEditedAsset_promise_002
         * @tc.desc      : commitEditedAsset by { "123456", undefined }
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 2
         */
        it('commitEditedAsset_promise_002', 0, async function (done) {
          const testNum = 'commitEditedAsset_promise_002';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          const editdata = "123456";
          const uri = undefined;
          try {
            let fetchColumn = {
              fetchColumns: [],
              predicates: new dataSharePredicates.DataSharePredicates()
            };
            let fetchResult = await helper.getAssets(fetchColumn);
            photoAsset = await fetchResult.getFirstObject();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          try {
            // @ts-ignore
            await photoAsset.commitEditedAsset(editdata, uri);
            console.info(`${testNum} can not find err`);
            expect(false).assertTrue();
            done();
            return;
          } catch (error) {
            expect(true).assertTrue();
          }
          done();
        })

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_COMMIREDITEDASSET_0300
         * @tc.name      : commitEditedAsset_promise_003
         * @tc.desc      : commitEditedAsset by { "123456",  "file://media" }
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 2
         */
        it('commitEditedAsset_promise_003', 0, async function (done) {
          const testNum = 'commitEditedAsset_promise_003';
          let photoAsset: photoAccessHelper.PhotoAsset = undefined;
          const editdata = "123456";
          const uri = "file://media";
          try {
            let fetchColumn = {
              fetchColumns: [],
              predicates: new dataSharePredicates.DataSharePredicates()
            };
            let fetchResult = await helper.getAssets(fetchColumn);
            photoAsset = await fetchResult.getFirstObject();
            if (photoAsset === undefined) {
              console.info(`${testNum} failed; Can not getAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          try {
            // @ts-ignore
            await photoAsset.commitEditedAsset(editdata, uri);
            console.info(`${testNum} can not find err`);
            expect(false).assertTrue();
            done();
            return;
          } catch (error) {
            expect(true).assertTrue();
          }
          done();
        })

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_REVERTTOORIGINAL_0000
         * @tc.name      : revertToOriginal_callback_000
         * @tc.desc      : commitEditedAsset by { undefined }
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 2
         */
        it('revertToOriginal_callback_000', 0, async function (done) {   
          const testNum = 'revertToOriginal_callback_000';
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
            try {
              photoAsset.revertToOriginal(undefined);
            } catch (error) {
              expect(true).assertTrue();
            }
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        })

        /**
        * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_REVERTTOORIGINAL_0100
        * @tc.name      : revertToOriginal_callback_001
        * @tc.desc      : commitEditedAsset by { AsyncCallback<void> }
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
        it('revertToOriginal_callback_001', 0, async function (done) {   
          const testNum = 'revertToOriginal_callback_001';
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
            }
            try {
              photoAsset.revertToOriginal((err) => {
                if (err === undefined) {
                  expect(true).assertTrue();
                } else {
                  console.info(`${testNum} find err`);
                  expect(false).assertTrue();
                  done();
                  return;
                }
              });
            } catch (error) {
              expect(false).assertTrue();
              done();
              return;
            }
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        })

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_REVERTTOORIGINAL_0000
         * @tc.name      : revertToOriginal_promise_000
         * @tc.desc      : commitEditedAsset
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 2
         */
        it('revertToOriginal_promise_000', 0, async function (done) {
          const testNum = 'revertToOriginal_promise_000';
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
            try {
                await photoAsset.revertToOriginal();
                expect(true).assertTrue();
              } catch (error) {
                console.info(`${testNum} failed; error: ${error}`);
                expect(false).assertTrue();
                done();
                return;
              }
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
          done();
        })

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_COMMITTEST_CALLBACK_0000
         * @tc.name      : committest_callback_000
         * @tc.desc      : test commit edit and verify
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('committest_callback_000', 0, async function (done) {
          // create -> verify -> commitEditedAsset -> verify
          const testNum = 'committest_callback_000';
          const oldAssetHeight = 1706;
          const newAssetHeight = 4608;
          const editData = '123456';
          try {
            let oldAssetToCopy = await getFileAssetByHeight(testNum, oldAssetHeight);
            if (oldAssetToCopy === undefined) {
              console.info(`${testNum} failed; Can not get oldAssetToCopy`);
              expect(false).assertTrue();
              done();
              return;
            }
            let newAssetToCopy = await getFileAssetByHeight(testNum, newAssetHeight);
            if (newAssetToCopy === undefined) {
              console.info(`${testNum} failed; Can not get newAssetToCopy`);
              expect(false).assertTrue();
              done();
              return;
            }
            let editAsset = await createNewAssetByCopyAsset(testNum, oldAssetToCopy);
            if (editAsset === undefined) {
              console.info(`${testNum} failed; Can not create editAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let isVerify = await verifyAssetHeight(testNum, editAsset.uri, oldAssetHeight);
            expect(isVerify).assertTrue();
            let fileUri = await setFileAssetAsFileAndGetFileUri(testNum, newAssetToCopy);
            if (fileUri === undefined || fileUri === '') {
              console.info(`${testNum} failed; Can not setFileAssetAsFileAndGetFileUri`);
              expect(false).assertTrue();
              done();
              return;
            }
            editAsset.commitEditedAsset(editData, fileUri, async (err) => {
              if (err !== undefined) {
                console.info(`${testNum} failed; error: ${err}`);
                expect(false).assertTrue();
                done();
                return;
              }
              isVerify = await verifyAssetHeight(testNum, editAsset.uri, newAssetHeight);
              expect(isVerify).assertTrue();
              editAsset.requestEditData(async (err, requestedEditData) => {
                if (err !== undefined) {
                  console.info(`${testNum} failed; error: ${err}`);
                  expect(false).assertTrue();
                  done();
                  return;
                }
                expect(requestedEditData).assertEqual(editData);
                done();
              })
            })
            done();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
        })

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_COMMITTEST_PROMISE_0000
         * @tc.name      : committest_promise_000
         * @tc.desc      : test commit edit and verify
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('committest_promise_000', 0, async function (done) {
          // create -> verify -> commitEditedAsset -> verify
          const testNum = 'committest_promise_000';
          const oldAssetHeight = 1706;
          const newAssetHeight = 4608;
          const editData = '123456';
          try {
            let oldAssetToCopy = await getFileAssetByHeight(testNum, oldAssetHeight);
            if (oldAssetToCopy === undefined) {
              console.info(`${testNum} failed; Can not get oldAssetToCopy`);
              expect(false).assertTrue();
              done();
              return;
            }
            let newAssetToCopy = await getFileAssetByHeight(testNum, newAssetHeight);
            if (newAssetToCopy === undefined) {
              console.info(`${testNum} failed; Can not get newAssetToCopy`);
              expect(false).assertTrue();
              done();
              return;
            }
            let editAsset = await createNewAssetByCopyAsset(testNum, oldAssetToCopy);
            if (editAsset === undefined) {
              console.info(`${testNum} failed; Can not create editAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let isVerify = await verifyAssetHeight(testNum, editAsset.uri, oldAssetHeight);
            expect(isVerify).assertTrue();
            let fileUri = await setFileAssetAsFileAndGetFileUri(testNum, newAssetToCopy);
            if (fileUri === undefined || fileUri === '') {
              console.info(`${testNum} failed; Can not setFileAssetAsFileAndGetFileUri`);
              expect(false).assertTrue();
              done();
              return;
            }
            await editAsset.commitEditedAsset(editData, fileUri);
            isVerify = await verifyAssetHeight(testNum, editAsset.uri, newAssetHeight);
            expect(isVerify).assertTrue();
            let requestedEditData = await editAsset.requestEditData();
            expect(requestedEditData).assertEqual(editData);
            done();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
        })

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_COMMITTEST_CALLBACK_0100
         * @tc.name      : committest_callback_001
         * @tc.desc      : test revert and verify
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('committest_callback_001', 0, async function (done) {
          // create -> commitEditedAsset -> revertToOriginal -> verify
          const testNum = 'committest_callback_001';
          const oldAssetHeight = 1706;
          const newAssetHeight = 4608;
          const editData = '123456';
          try {
            let oldAssetToCopy = await getFileAssetByHeight(testNum, oldAssetHeight);
            if (oldAssetToCopy === undefined) {
              console.info(`${testNum} failed; Can not get oldAssetToCopy`);
              expect(false).assertTrue();
              done();
              return;
            }
            let newAssetToCopy = await getFileAssetByHeight(testNum, newAssetHeight);
            if (newAssetToCopy === undefined) {
              console.info(`${testNum} failed; Can not get newAssetToCopy`);
              expect(false).assertTrue();
              done();
              return;
            }
            let editAsset = await createNewAssetByCopyAsset(testNum, oldAssetToCopy);
            if (editAsset === undefined) {
              console.info(`${testNum} failed; Can not create editAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let fileUri = await setFileAssetAsFileAndGetFileUri(testNum, newAssetToCopy);
            if (fileUri === undefined || fileUri === '') {
              console.info(`${testNum} failed; Can not setFileAssetAsFileAndGetFileUri`);
              expect(false).assertTrue();
              done();
              return;
            }
            editAsset.commitEditedAsset(editData, fileUri, async (err) => {
              if (err !== undefined) {
                console.info(`${testNum} failed; error: ${err}`);
                expect(false).assertTrue();
                done();
                return;
              }
              editAsset.revertToOriginal(async (err) => {
                if (err !== undefined) {
                  console.info(`${testNum} failed; error: ${err}`);
                  expect(false).assertTrue();
                  done();
                  return;
                }
                let isVerify = await verifyAssetHeight(testNum, editAsset.uri, oldAssetHeight);
                expect(isVerify).assertTrue();
                editAsset.requestEditData(async (err, requestedEditData) => {
                  if (err !== undefined) {
                    console.info(`${testNum} failed; error: ${err}`);
                    expect(false).assertTrue();
                    done();
                    return;
                  }
                  expect(requestedEditData).assertEqual('');
                  done();
                })
              })
            })
            done();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
        })

        /**
         * @tc.number    : SUB_PHOTOACCESS_HELPER_COMMITTEST_PROMISE_0100
         * @tc.name      : committest_promise_001
         * @tc.desc      : test commit edit and verify
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('committest_promise_001', 0, async function (done) {
          // create -> commitEditedAsset -> revertToOriginal -> verify
          const testNum = 'committest_promise_001';
          const oldAssetHeight = 1706;
          const newAssetHeight = 4608;
          const editData = '123456';
          try {
            let oldAssetToCopy = await getFileAssetByHeight(testNum, oldAssetHeight);
            if (oldAssetToCopy === undefined) {
              console.info(`${testNum} failed; Can not get oldAssetToCopy`);
              expect(false).assertTrue();
              done();
              return;
            }
            let newAssetToCopy = await getFileAssetByHeight(testNum, newAssetHeight);
            if (newAssetToCopy === undefined) {
              console.info(`${testNum} failed; Can not get newAssetToCopy`);
              expect(false).assertTrue();
              done();
              return;
            }
            let editAsset = await createNewAssetByCopyAsset(testNum, oldAssetToCopy);
            if (editAsset === undefined) {
              console.info(`${testNum} failed; Can not create editAsset`);
              expect(false).assertTrue();
              done();
              return;
            }
            let fileUri = await setFileAssetAsFileAndGetFileUri(testNum, newAssetToCopy);
            if (fileUri === undefined || fileUri === '') {
              console.info(`${testNum} failed; Can not setFileAssetAsFileAndGetFileUri`);
              expect(false).assertTrue();
              done();
              return;
            }
            await editAsset.commitEditedAsset(editData, fileUri);
            await editAsset.revertToOriginal();
            let isVerify = await verifyAssetHeight(testNum, editAsset.uri, oldAssetHeight);
            expect(isVerify).assertTrue();
            let requestedEditData = await editAsset.requestEditData();
            expect(requestedEditData).assertEqual('');
            done();
          } catch (error) {
            console.info(`${testNum} failed; error: ${error}`);
            expect(false).assertTrue();
            done();
            return;
          }
        })
    })
}