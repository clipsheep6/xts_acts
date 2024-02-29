// @ts-nocheck
/**
 * Copyright (c) 2023 Shenzhen Kaihong Digital Industry Development Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import photoAccessHelper from '@ohos.file.photoAccessHelper';
import dataSharePredicates from '@ohos.data.dataSharePredicates';
import { checkUri,checkReadAndWrite,columns,photoExtensions,videoExtensions,sizes,
    fetchOptions_allocate_file,DEFAULT_PHOTO_URI } from './common.ets'
import userFileManager from '@ohos.filemanagement.userFileManager';
import { BusinessError } from '@ohos.base';
import { getPermission, photoKeys } from '../../../../../../../common'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';

export default function performanceTest() {

    describe('performanceTest', function () {
        let predicates: dataSharePredicates.DataSharePredicates = new dataSharePredicates.DataSharePredicates();
        let fetchOptions: photoAccessHelper.FetchOptions = {
            fetchColumns: [],
            predicates: predicates
        };
        let options: photoAccessHelper.CreateOptions = {
            title: 'testPhoto'
        }
        let tag;
        let date = new Date()
        let start;
        let end;
        let start_new;
        let end_new;
        let totalTime = 0;
        let executeTime;
        let averageTime;
        let totalTime_new = 0;
        let executeTime_new;
        let averageTime_new;
        let fetchResultCount = 0
        const context = globalThis.abilityContext
        const imageType = photoAccessHelper.PhotoType.IMAGE
        const videoType = photoAccessHelper.PhotoType.VIDEO
        let events = require('events');
        let eventEmitter = new events.EventEmitter();
        const GET_AVERAGE_TIME = 'getAverageTime'
        const CREATE_EVENT = 'getPhotoAccessHelper';
        const PRODUCE_EXTENSION = 'create_extension';
        const GET_PHOTOASSET_EVENT = 'getPhotoAsset';
        const CREATE_ASSET_CALLBACK_OPTIONS_EVENT = 'createAssetCallbackOptions';
        const CREATE_ASSET_CALLBACK_EVENT = 'createAssetCallback';
        const CREATE_ASSET_PROMISE_OPTIONS_EVENT = 'createAssetPromiseOptions';
        const GET_ASSETS_CALLBACK_EVENT = 'getAssetsCallback';
        const GET_ASSETS_PROMISE_EVENT = 'getAssetsCallPromise';
        const REGISTER_CHANGE_EVENT = 'registerChange'
        const PHOTOASSET_GET_ATTRS_EVENT = 'getPhotoAssetAttrs'
        const PHOTOASSET_SET_ATTRS_EVENT = 'setPhotoAssetAttrs'
        const PHOTOASSET_COMMITMODIFY_CALLBACK_EVENT = 'commitModifyCallback'
        const PHOTOASSET_COMMITMODIFY_PROMISE_EVENT = 'commitModifyPromise'
        const PHOTOASSET_GETREADONLYFD_CALLBACK_EVENT = 'getReadOnlyFdCallback'
        const PHOTOASSET_GETREADONLYFD_PROMISE_EVENT = 'getReadOnlyFdPromise'
        const PHOTOASSET_CLOSE_CALLBACK_EVENT = 'closePhotoAssetCallback'
        const PHOTOASSET_CLOSE_PROMISE_EVENT = 'closePhotoAssetPromise'
        const PHOTOASSET_GETTHUMBNAIL_CALLBACK_EVENT = 'getThumbnailCallback'
        const PHOTOASSET_GETTHUMBNAIL_WITH_SIZES_CALLBACK_EVENT = 'getThumbnailWithSizesCallback'
        const PHOTOASSET_GETTHUMBNAIL_WITH_SIZES_PROMISE_EVENT = 'getThumbnailWithSizesPromise'
        const FETCHRESULT_GETCOUNT_EVENT = 'getCount'
        const FETCHRESULT_ISAFTERLAST_EVENT = 'isAfterLast'
        const FETCHRESULT_CLOSE_EVENT = 'closeFetchResult'
        const FETCHRESULT_GETFIRSTOBJECT_CALLBACK_EVENT = 'getFirstObjectCallback'
        const FETCHRESULT_GETFIRSTOBJECT_PROMISE_EVENT = 'getFirstObjectPromise'
        const FETCHRESULT_GETNEXTOBJECT_CALLBACK_EVENT = 'getNextObjectCallback'
        const FETCHRESULT_GETNEXTOBJECT_PROMISE_EVENT = 'getNextObjectPromise'
        const FETCHRESULT_GETLASTOBJECT_CALLBACK_EVENT = 'getLastObjectCallback'
        const FETCHRESULT_GETLASTOBJECT_PROMISE_EVENT = 'getLastObjectPromise'
        const FETCHRESULT_GETOBJECTBYPOSITION_CALLBACK_EVENT = 'getObjectByPositionCallback'
        const FETCHRESULT_GETOBJECTBYPOSITION_PROMISE_EVENT = 'getObjectByPositionPromise'
        const FETCHRESULT_GETALLOBJECTS_CALLBACK_EVENT = 'getAllObjectsCallback'
        const FETCHRESULT_GETALLOBJECTS_PROMISE_EVENT = 'getAllObjectsPromise'
        const RELEASE_CALLBACK_TIME_EVENT = 'releaseCallbackTime'
        const RELEASE_PROMISE_TIME_EVENT = 'releasePromiseTime'
        const RELEASE_CALLBACK_EVENT = 'releaseCallback'
        const RELEASE_PROMISE_EVENT = 'releasePromise'
        const END_EVENT = 'end'
        const FAIL_EVENT = 'fail'

        function getPhotoHelper(context){
            return photoAccessHelper.getPhotoAccessHelper(context);
        }

        function toNextStep(phAccessHelper, fetchOptions, param1, param2, options, steps, done) {
            if (steps[0] == END_EVENT) {
                console.info('case success!!');
                done();
            } else if (steps[0] == FAIL_EVENT) {
                console.error('case failed!!');
                done();
            } else {
                console.info('next step: ' + steps[0])
                eventEmitter.emit(steps[0], phAccessHelper, fetchOptions, param1, param2, options, steps, done);
            }
        }

        function toNextStepAfterRelease(fetchOptions, param1, param2, options, steps, done) {
            if (steps[0] == END_EVENT) {
                console.info('case success!!');
                done();
            } else if (steps[0] == FAIL_EVENT) {
                console.error('case failed!!');
                done();
            } else {
                console.info('next step: ' + steps[0])
                eventEmitter.emit(steps[0], fetchOptions, param1, param2, options, steps, done);
            }
        }

        function getCurrentTime(target){
            let time =  new Date().getTime();
            console.info(`${target} time is :${time}`)
            return time
        }

        function getAverageTime(averageTime,tag) {
            console.info(`${tag} average excute time is :${averageTime} ms`)
            console.info(`${tag} excute pass`);
        }
        
        function updateTotalTime(start, end, totalTime){
            executeTime = end - start
            totalTime = totalTime + executeTime
            console.info(`totalTime is :${totalTime}`)
        }

        function registerChangeEvent(callBackSet, uriSet, phAccessHelper, forChildUris, photoAsset, onCallback1){
            if(uriSet){
                start = getCurrentTime("start")
                phAccessHelper.registerChange(photoAsset.uri, forChildUris, onCallback1);
                end = getCurrentTime("end")
                if(callBackSet){
                    start_new = getCurrentTime("start")
                    phAccessHelper.unRegisterChange(photoAsset.uri, onCallback1);
                    end_new = getCurrentTime("end")
                }else {
                    start_new = getCurrentTime("start")
                    phAccessHelper.unRegisterChange(photoAsset.uri);
                    end_new = getCurrentTime("end")
                }
            }else{
                start = getCurrentTime("start")
                phAccessHelper.registerChange(DEFAULT_PHOTO_URI, true, onCallback1);
                end = getCurrentTime("end")
                if(callBackSet){
                    start_new = getCurrentTime("start")
                    phAccessHelper.unRegisterChange(photoAsset.uri, onCallback1);
                    end_new = getCurrentTime("end")
                }else {
                    start_new = getCurrentTime("start")
                    phAccessHelper.unRegisterChange(photoAsset.uri);
                    end_new = getCurrentTime("end")
                }
            }
            return start,end,start_new,end_new
        }
        
        eventEmitter.on(CREATE_EVENT, (fetchOptions, param1, param2, options, steps, done) => {
            steps.shift();
            let phAccessHelper = getPhotoHelper(context)
            toNextStep(phAccessHelper, fetchOptions, param1, param2, options, steps, done)
        });

        eventEmitter.on(PRODUCE_EXTENSION, (phAccessHelper, fetchOptions, param1, param2, options, steps, done) => {
            steps.shift();
            try {
                if(param1==imageType){
                    param2 = photoExtensions[Math.floor(Math.random() * photoExtensions.length)];
                }else if(param1==videoType){
                    param2 = videoExtensions[Math.floor(Math.random() * videoExtensions.length)];
                }
                toNextStep(phAccessHelper, fetchOptions, param1, param2, options, steps, done)
            } catch (err) {
                console.error('PRODUCE_EXTENSION failed, message = ', err);
                expect(false).assertTrue();
            }
        });

        eventEmitter.on(GET_PHOTOASSET_EVENT, async (phAccessHelper, fetchOptions, param1, param2, options, steps, done) => {
            steps.shift();
            try {
                let fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset> = await phAccessHelper.getAssets(fetchOptions);
                let photoAsset: photoAccessHelper.PhotoAsset = await fetchResult.getFirstObject();
                toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
            } catch (err) {
                console.error('GET_PHOTOASSET_EVENT failed, message = ', err);
                expect(false).assertTrue();
            }
        });

        eventEmitter.on(GET_ASSETS_CALLBACK_EVENT, (phAccessHelper, fetchOptions, param1, param2, options, steps, done) => {
            steps.shift();
            start = getCurrentTime("start")
            phAccessHelper.getAssets(fetchOptions, (err, fetchResult) => {
                if (fetchResult != undefined) {
                    end = getCurrentTime("end")
                    updateTotalTime(start, end, totalTime)
                    toNextStep(phAccessHelper, fetchOptions, param1, param2, options, steps, done)
                } else {
                    console.error(`GET_ASSETS_CALLBACK_EVENT fetchResult fail, err is: ` + err);
                    expect(false).assertTrue();
                }
            });
        });

        eventEmitter.on(CREATE_ASSET_CALLBACK_OPTIONS_EVENT, (phAccessHelper, fetchOptions, photoType, extension, options, steps, done) => {
            steps.shift();
            start = getCurrentTime("start")
            try {
                phAccessHelper.createAsset(photoType, extension, options, (err, uri) => {
                    if (uri != undefined) {
                        end = getCurrentTime("end")
                        updateTotalTime(start, end, totalTime)
                        checkUri(uri,photoType, extension)
                        toNextStep(phAccessHelper, fetchOptions, photoType, extension, options, steps, done)
                    } else {
                        console.error('createAsset failed, message = ', err);
                    }
                });
            } catch (err) {
                console.error('CREATE_ASSET_CALLBACK_OPTIONS_EVENT failed, message = ', err);
                expect(false).assertTrue();
            }
        });

        eventEmitter.on(CREATE_ASSET_CALLBACK_EVENT, (phAccessHelper, fetchOptions, photoType, extension, options, steps, done) => {
            steps.shift();
            start = getCurrentTime("start")
            try {
                phAccessHelper.createAsset(photoType, extension, (err, uri) => {
                    if (uri != undefined) {
                        end = getCurrentTime("end")
                        updateTotalTime(start, end, totalTime)
                        checkUri(uri,photoType, extension)
                        toNextStep(phAccessHelper, fetchOptions, photoType, extension, options, steps, done)
                    } else {
                        console.error('createAsset failed, message = ', err);
                    }
                });
            } catch (err) {
                console.error('CREATE_ASSET_CALLBACK_EVENT failed, message = ', err);
                expect(false).assertTrue();
            }
        });

        eventEmitter.on(CREATE_ASSET_PROMISE_OPTIONS_EVENT, async (phAccessHelper, fetchOptions, photoType, extension, options, steps, done) => {
            steps.shift();
            try {
                start = getCurrentTime("start")
                let uri: string = await phAccessHelper.createAsset(photoType, extension, options);
                end = getCurrentTime("end")
                updateTotalTime(start, end, totalTime)
                checkUri(uri,photoType, extension)
                toNextStep(phAccessHelper, fetchOptions, photoType, extension, options, steps, done)
            } catch (err) {
                console.error('CREATE_ASSET_PROMISE_OPTIONS_EVENT failed, message = ', err);
                expect(false).assertTrue();
            }
        });

        eventEmitter.on(REGISTER_CHANGE_EVENT, (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                let onCallback1 = (changeData: photoAccessHelper.ChangeData) => {
                    console.info('onCallback1 success, changData: ' + JSON.stringify(changeData));
                }
                let callBackSet = Math.random() > 0.5;
                let uriSet = Math.random() > 0.5;
                let forChildUris = Math.random() > 0.5;
                start,end,start_new,end_new = registerChangeEvent(callBackSet, uriSet, phAccessHelper, forChildUris, photoAsset, onCallback1)
                updateTotalTime(start, end, totalTime)
                updateTotalTime(start_new, end_new, totalTime_new)
                setTimeout(() => {
                    eventEmitter.emit(steps[0], phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done);
                }, 500);
            } catch (err) {
                console.error('REGISTER_CHANGE_EVENT failed, message = ', err);
                expect(false).assertTrue();
            }
        });

        eventEmitter.on(RELEASE_CALLBACK_TIME_EVENT, (phAccessHelper, fetchOptions, param1, param2, options, steps, done) => {
            steps.shift();
            start = getCurrentTime("start")
            phAccessHelper.release((err) => {
                console.info('releaseDemo');
                if (err != undefined) {
                    console.error('release failed. message = ', err);
                    expect(false).assertTrue();
                } else {
                    end = getCurrentTime("end")
                    updateTotalTime(start, end, totalTime)
                    console.info('release ok.');
                    toNextStepAfterRelease(fetchOptions, param1, param2, options, steps, done)
                }
            });
        });

        eventEmitter.on(RELEASE_PROMISE_TIME_EVENT, async (phAccessHelper, fetchOptions, param1, param2, options, steps, done) => {
            steps.shift();
            try {
                start = getCurrentTime("start")
                await phAccessHelper.release();
                end = getCurrentTime("end")
                updateTotalTime(start, end, totalTime)
                console.info('release ok.');
                toNextStepAfterRelease(fetchOptions, param1, param2, options, steps, done)
            } catch (err) {
                console.error('release failed. message = ', err);
                expect(false).assertTrue();
            }
        });

        eventEmitter.on(PHOTOASSET_GET_ATTRS_EVENT, (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                let randomIndex = Math.floor(Math.random() * columns.length);
                console.info(`photoAsset Get randomIndex = `, randomIndex);
                console.info(`photoAsset Get ${columns[randomIndex]} = `, columns[randomIndex]);
                start = getCurrentTime("start")
                let getPhotoAssetAttr: photoAccessHelper.MemberType = photoAsset.get(columns[randomIndex].toString());
                end = getCurrentTime("end")
                updateTotalTime(start, end, totalTime)
                console.info(`photoAsset Get ${columns[randomIndex]} = `, getPhotoAssetAttr);
                setTimeout(() => {
                    toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                }, 300);
            } catch (err) {
                console.error('PHOTOASSET_GET_ATTRS_EVENT failed, message = ', err);
                expect(false).assertTrue();
            }
        });

        eventEmitter.on(PHOTOASSET_SET_ATTRS_EVENT, (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                let photoTitle: string = photoAccessHelper.PhotoKeys.TITLE.toString();
                start = getCurrentTime("start")
                photoAsset.set(photoTitle, 'newTitle');
                end = getCurrentTime("end")
                updateTotalTime(start, end, totalTime)
                setTimeout(() => {
                    toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                }, 300);
            } catch (err) {
                console.error('PHOTOASSET_SET_ATTRS_EVENT failed, message = ', err);
                expect(false).assertTrue();
            }
        });

        eventEmitter.on(PHOTOASSET_COMMITMODIFY_CALLBACK_EVENT, (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                let title: string = photoAccessHelper.PhotoKeys.TITLE.toString();
                start = getCurrentTime("start")
                photoAsset.commitModify((err) => {
                    if (err === undefined) {
                        end = getCurrentTime("end")
                        updateTotalTime(start, end, totalTime)
                        let newPhotoAssetTitle: photoAccessHelper.MemberType = photoAsset.get(title);
                        console.info('photoAsset get newPhotoAssetTitle = ', newPhotoAssetTitle);
                        setTimeout(() => {
                            toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                        }, 300);
                    } else {
                        console.error('commitModify failed, message =', err);
                        expect(false).assertTrue();
                        done();
                    }
                });
            } catch (err) {
                console.error('PHOTOASSET_COMMITMODIFY_CALLBACK_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(PHOTOASSET_COMMITMODIFY_PROMISE_EVENT, async (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                let title: string = photoAccessHelper.PhotoKeys.TITLE.toString();
                start = getCurrentTime("start")
                await photoAsset.commitModify();
                end = getCurrentTime("end")
                updateTotalTime(start, end, totalTime)
                setTimeout(() => {
                    toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                }, 300);
            } catch (err) {
                console.error('PHOTOASSET_COMMITMODIFY_PROMISE_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(PHOTOASSET_GETREADONLYFD_CALLBACK_EVENT, (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                start = getCurrentTime("start")
                photoAsset.getReadOnlyFd((err, fd) => {
                    if (fd != undefined) {
                        end = getCurrentTime("end")
                        updateTotalTime(start, end, totalTime)
                        console.info('File fd' + fd);
                        checkReadAndWrite(fd)
                        setTimeout(() => {
                            photoAsset.close(fd);
                            toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                        }, 300);
                    } else {
                        console.error('File err' + err);
                        expect(false).assertTrue();
                        done();
                    }
                });
            } catch (err) {
                console.error('PHOTOASSET_GETREADONLYFD_CALLBACK_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(PHOTOASSET_GETREADONLYFD_PROMISE_EVENT, async (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                start = getCurrentTime("start")
                let fd: number = await photoAsset.getReadOnlyFd();
                end = getCurrentTime("end")
                updateTotalTime(start, end, totalTime)
                if (fd !== undefined) {
                    console.info('File fd' + fd);
                    checkReadAndWrite(fd)
                    setTimeout(() => {
                        photoAsset.close(fd);
                        toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                    }, 300);
                } else {
                    console.error(' open File fail');
                    expect(false).assertTrue();
                    done();
                }
            } catch (err) {
                console.error('PHOTOASSET_GETREADONLYFD_PROMISE_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(PHOTOASSET_CLOSE_CALLBACK_EVENT, async (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                let fd: number = await photoAsset.getReadOnlyFd();
                if (fd !== undefined) {
                    console.info('File fd' + fd);
                    checkReadAndWrite(fd)
                    setTimeout(() => {
                        start = getCurrentTime("start")
                        photoAsset.close(fd, (err) => {
                            if (err === undefined) {
                                end = getCurrentTime("end")
                                updateTotalTime(start, end, totalTime)
                                console.info('asset close succeed.');
                                toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                            } else {
                                console.error('close failed, message = ' + err);
                                expect(false).assertTrue();
                                done();
                            }
                        });
                    }, 300);
                } else {
                    console.error(' open File fail');
                    expect(false).assertTrue();
                    done();
                }
            } catch (err) {
                console.error('PHOTOASSET_CLOSE_CALLBACK_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(PHOTOASSET_CLOSE_PROMISE_EVENT, async (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                let fd: number = await photoAsset.getReadOnlyFd();
                if (fd !== undefined) {
                    console.info('File fd' + fd);
                    checkReadAndWrite(fd)
                    start = getCurrentTime("start")
                    await photoAsset.close(fd);
                    end = getCurrentTime("end")
                    updateTotalTime(start, end, totalTime)
                    toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                } else {
                    console.error(' open File fail');
                }
            } catch (err) {
                console.error('PHOTOASSET_CLOSE_PROMISE_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(PHOTOASSET_GETTHUMBNAIL_CALLBACK_EVENT, (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                start = getCurrentTime("start")
                photoAsset.getThumbnail((err, pixelMap) => {
                    if (err == undefined) {
                        end = getCurrentTime("end")
                        updateTotalTime(start, end, totalTime)
                        expect(pixelMap).not().assertUndefined()
                        console.info('getThumbnail successful ' + pixelMap);
                        toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                    } else {
                        console.error('getThumbnail fail', err);
                        expect(false).assertTrue();
                        done();
                    }
                });
            } catch (err) {
                console.error('PHOTOASSET_GETTHUMBNAIL_CALLBACK_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(PHOTOASSET_GETTHUMBNAIL_WITH_SIZES_CALLBACK_EVENT, (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                let size = [200,200]
                start = getCurrentTime("start")
                photoAsset.getThumbnail(size, (err, pixelMap) => {
                    if (err == undefined) {
                        end = getCurrentTime("end")
                        updateTotalTime(start, end, totalTime)
                        expect(pixelMap).not().assertUndefined()
                        console.info('getThumbnail successful ' + pixelMap);
                        toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                    } else {
                        console.info('getThumbnail fail', err);
                        expect(false).assertTrue();
                        done();
                    }
                });
            } catch (err) {
                console.error('PHOTOASSET_GETTHUMBNAIL_WITH_SIZES_CALLBACK_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(PHOTOASSET_GETTHUMBNAIL_WITH_SIZES_PROMISE_EVENT, (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                let size = [200,200]
                start = getCurrentTime("start")
                photoAsset.getThumbnail(size).then((pixelMap) => {
                    end = getCurrentTime("end")
                    updateTotalTime(start, end, totalTime)
                    expect(pixelMap).not().assertUndefined()
                    console.info('getThumbnail successful ' + pixelMap);
                    toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                }).catch((err: BusinessError) => {
                    console.error('getThumbnail fail' + err);
                    expect(false).assertTrue();
                    done();
                });
            } catch (err) {
                console.error('PHOTOASSET_GETTHUMBNAIL_WITH_SIZES_PROMISE_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(FETCHRESULT_GETCOUNT_EVENT, (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                start = getCurrentTime("start")
                fetchResultCount = fetchResult.getCount();
                end = getCurrentTime("end")
                updateTotalTime(start, end, totalTime)
                console.info('fetchResultCount = ', fetchResultCount);
                expect(fetchResultCount).assertLarger(0)
                setTimeout(() => {
                    toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                }, 300);
            } catch (err) {
                console.error('FETCHRESULT_GETCOUNT_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(FETCHRESULT_ISAFTERLAST_EVENT, async (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                photoAsset = await fetchResult.getLastObject();
                start = getCurrentTime("start")
                let isAfterLast = fetchResult.isAfterLast()
                end = getCurrentTime("end")
                updateTotalTime(start, end, totalTime)
                expect(isAfterLast).assertTrue();
                setTimeout(() => {
                    toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                }, 300);
            } catch (err) {
                console.error('FETCHRESULT_ISAFTERLAST_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(FETCHRESULT_CLOSE_EVENT, (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                start = getCurrentTime("start")
                fetchResult.close();
                end = getCurrentTime("end")
                updateTotalTime(start, end, totalTime)
                try{
                    fetchResult.getCount();
                    expect(false).assertTrue();
                    done();
                } catch (err) {
                    console.info('fetchResult.getCount() fail. message = ' + err);
                    console.info('close succeed.');
                    setTimeout(() => {
                        toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                    }, 300);
                }
            } catch (err) {
                console.error('FETCHRESULT_CLOSE_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(FETCHRESULT_GETFIRSTOBJECT_CALLBACK_EVENT, (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                start = getCurrentTime("start")
                fetchResult.getFirstObject((err, photoAsset) => {
                    if (photoAsset != undefined) {
                        end = getCurrentTime("end")
                        updateTotalTime(start, end, totalTime)
                        expect(photoAsset.displayName).not().assertUndefined()
                        console.info('photoAsset displayName: ', photoAsset.displayName);
                        toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                    } else {
                        console.error('photoAsset failed with err:' + err);
                        expect(false).assertTrue();
                        done();
                    }
                });
            } catch (err) {
                console.error('FETCHRESULT_GETFIRSTOBJECT_CALLBACK_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(FETCHRESULT_GETFIRSTOBJECT_PROMISE_EVENT, async (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                start = getCurrentTime("start")
                photoAsset = await fetchResult.getFirstObject();
                end = getCurrentTime("end")
                updateTotalTime(start, end, totalTime)
                if (photoAsset != undefined) {
                    expect(photoAsset.displayName).not().assertUndefined()
                    console.info('photoAsset displayName: ', photoAsset.displayName);
                    toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                } else {
                    console.error('getFirstObjectPromise failed');
                    expect(false).assertTrue();
                    done();
                }
            } catch (err) {
                console.error('FETCHRESULT_GETFIRSTOBJECT_PROMISE_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(FETCHRESULT_GETNEXTOBJECT_CALLBACK_EVENT, async (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                await fetchResult.getFirstObject();
                if (!fetchResult.isAfterLast()) {
                    start = getCurrentTime("start")
                    fetchResult.getNextObject((err, photoAsset) => {
                        if (photoAsset != undefined) {
                            end = getCurrentTime("end")
                            updateTotalTime(start, end, totalTime)
                            expect(photoAsset.displayName).not().assertUndefined()
                            console.info('photoAsset displayName: ', photoAsset.displayName);
                            toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                        } else {
                            console.error('photoAsset failed with err: ' + err);
                            expect(false).assertTrue();
                            done();
                        }
                    });
                }
            } catch (err) {
                console.error('FETCHRESULT_GETNEXTOBJECT_CALLBACK_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(FETCHRESULT_GETNEXTOBJECT_PROMISE_EVENT, async (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                await fetchResult.getFirstObject();
                if (!fetchResult.isAfterLast()) {
                    start = getCurrentTime("start")
                    let photoAsset: photoAccessHelper.PhotoAsset = await fetchResult.getNextObject();
                    end = getCurrentTime("end")
                    updateTotalTime(start, end, totalTime)
                    expect(photoAsset).not().assertUndefined()
                    console.info('photoAsset displayName: ', photoAsset.displayName);
                    toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                }
            } catch (err) {
                console.error('FETCHRESULT_GETNEXTOBJECT_PROMISE_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(FETCHRESULT_GETLASTOBJECT_CALLBACK_EVENT, (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                start = getCurrentTime("start")
                fetchResult.getLastObject((err, photoAsset) => {
                    if (photoAsset != undefined) {
                        end = getCurrentTime("end")
                        updateTotalTime(start, end, totalTime)
                        expect(fetchResult.isAfterLast()).assertTrue()
                        console.info('photoAsset displayName: ', photoAsset.displayName);
                        toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                    } else {
                        console.error('photoAsset failed with err: ' + err);
                        expect(false).assertTrue();
                        done();
                    }
                });
            } catch (err) {
                console.error('FETCHRESULT_GETLASTOBJECT_CALLBACK_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(FETCHRESULT_GETLASTOBJECT_PROMISE_EVENT, async (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                start = getCurrentTime("start")
                let photoAsset: photoAccessHelper.PhotoAsset = await fetchResult.getLastObject();
                end = getCurrentTime("end")
                updateTotalTime(start, end, totalTime)
                expect(fetchResult.isAfterLast()).assertTrue()
                toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
            } catch (err) {
                console.error('FETCHRESULT_GETLASTOBJECT_PROMISE_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(FETCHRESULT_GETOBJECTBYPOSITION_CALLBACK_EVENT, (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                let position = Math.floor(Math.random() * fetchResultCount);
                start = getCurrentTime("start")
                fetchResult.getObjectByPosition(position, (err, photoAsset) => {
                    if (photoAsset != undefined) {
                        end = getCurrentTime("end")
                        updateTotalTime(start, end, totalTime)
                        expect(photoAsset.displayName).not().assertUndefined()
                        console.info('photoAsset displayName: ', photoAsset.displayName);
                        toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                    } else {
                        console.error('getObjectByPosition failed with err: ' + err);
                        expect(false).assertTrue();
                        done();
                    }
                });
            } catch (err) {
                console.error('FETCHRESULT_GETOBJECTBYPOSITION_CALLBACK_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(FETCHRESULT_GETOBJECTBYPOSITION_PROMISE_EVENT, async (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                let position = Math.floor(Math.random() * fetchResultCount);
                start = getCurrentTime("start")
                photoAsset = await fetchResult.getObjectByPosition(position);
                end = getCurrentTime("end")
                updateTotalTime(start, end, totalTime)
                expect(photoAsset.displayName).not().assertUndefined()
                console.info('photoAsset displayName: ', photoAsset.displayName);
                toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
            } catch (err) {
                console.error('FETCHRESULT_GETOBJECTBYPOSITION_PROMISE_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(FETCHRESULT_GETALLOBJECTS_CALLBACK_EVENT, (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                start = getCurrentTime("start")
                fetchResult.getAllObjects((err, photoAssetList) => {
                    if (photoAssetList != undefined) {
                        end = getCurrentTime("end")
                        updateTotalTime(start, end, totalTime)
                        console.info('photoAssetList length: ', photoAssetList.length);
                        expect(photoAssetList.length).assertEqual(fetchResultCount)
                        toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
                    } else {
                        console.error('photoAssetList failed with err:' + err);
                        expect(false).assertTrue();
                        done();
                    }
                });
            } catch (err) {
                console.error('FETCHRESULT_GETALLOBJECTS_CALLBACK_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(FETCHRESULT_GETALLOBJECTS_PROMISE_EVENT, async (phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done) => {
            steps.shift();
            try {
                start = getCurrentTime("start")
                let photoAssetList: Array<photoAccessHelper.PhotoAsset> = await fetchResult.getAllObjects();
                end = getCurrentTime("end")
                updateTotalTime(start, end, totalTime)
                console.info('photoAssetList length: ', photoAssetList.length);
                expect(photoAssetList.length).assertEqual(fetchResultCount)
                toNextStep(phAccessHelper, fetchOptions, fetchResult, photoAsset, options, steps, done)
            } catch (err) {
                console.error('FETCHRESULT_GETALLOBJECTS_PROMISE_EVENT failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        eventEmitter.on(GET_AVERAGE_TIME, (fetchOptions, param1, param2, options, steps, done) => {
            steps.shift();
            averageTime = parseFloat((totalTime/10).toFixed(2))
            getAverageTime(averageTime, tag)
            if(totalTime_new!=0){
                averageTime_new = parseFloat((totalTime_new/10).toFixed(2))
                getAverageTime(averageTime_new, "unRegister")
            }
            toNextStepAfterRelease(fetchOptions, param1, param2, options, steps, done)
        });

        eventEmitter.on(RELEASE_CALLBACK_EVENT, (phAccessHelper, fetchOptions, param1, param2, options, steps, done) => {
            steps.shift();
            phAccessHelper.release((err) => {
                console.info('releaseDemo');
                if (err != undefined) {
                    console.error('release failed. message = ', err);
                    expect(false).assertTrue();
                    done();
                } else {
                    console.info('release ok.');
                    toNextStepAfterRelease(fetchOptions, param1, param2, options, steps, done)
                }
            });
        });

        eventEmitter.on(RELEASE_PROMISE_EVENT, async (phAccessHelper, fetchOptions, param1, param2, options, steps, done) => {
            steps.shift();
            try {
                await phAccessHelper.release();
                console.info('release ok.');
                toNextStepAfterRelease(fetchOptions, param1, param2, options, steps, done)
            } catch (err) {
                console.error('release failed. message = ', err);
                expect(false).assertTrue();
                done();
            }
        });

        function releaseHelperCallback(phAccessHelper,done){
            phAccessHelper.release((err) => {
                console.info('releaseDemo');
                if (err != undefined) {
                    console.error('release failed. message = ', err);
                    expect(false).assertTrue();
                    done();
                } else {
                    console.info('release ok.');
                    done();
                }
            });
        }

        async function releaseHelperPromise(phAccessHelper,done){
            try {
                await phAccessHelper.release();
                console.info('release ok.');
                done();
            } catch (err) {
                console.error('release failed. message = ', err);
                expect(false).assertTrue();
                done();
            }
        }
        
        async function getPhotoAccessHelper(i){
            start = getCurrentTime("start")
            let photoHelper = getPhotoHelper(context)
            end = getCurrentTime("end")
            executeTime = end - start
            console.info(`execute ${i} time cost ${executeTime}ms`)
            totalTime = totalTime + executeTime
            console.info(`totalTime is :${totalTime}`)
            await photoHelper.release()
            console.info("photoHelper.release success")
            return totalTime
        }

        async function getAssetsPromise(photoHelper,i){
            try{
                start = getCurrentTime("start")
                let fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset> = await photoHelper.getAssets(fetchOptions);
                end = getCurrentTime("end")
                updateTotalTime(start, end, totalTime)
            } catch (err) {
                console.error('getAssetsPromise failed, message = ', err);
                expect(false).assertTrue();
                done();
            }
        }

        beforeAll(async function() {
            console.info('beforeAll case');
            await getPermission();
        })

        beforeEach(async function() {
            console.info('beforeEach case');
        })

        afterEach(async function() {
            console.info('afterEach case');
            fetchOptions.fetchColumns = []
            options = {
                title: 'testPhoto'
            }
            totalTime = 0
            totalTime_new = 0
        })

        afterAll(async function() {
            console.info('afterAll case');
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0100
           * @tc.name      : 001.getPhotoAccessHelper
           * @tc.desc      : getPhotoAccessHelper 10 times ,get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0100', 3, async function (done) {
            try{
                for(let i = 0; i< 10;i++){
                    totalTime = await getPhotoAccessHelper(i)
                    if(i==9){
                        averageTime = parseFloat((totalTime/10).toFixed(2))
                        getAverageTime(averageTime,'[Statistics]getPhotoAccessHelper')
                        done()
                    }
                }
            } catch(err){
                console.error('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0100 getPhotoAccessHelper failed , ' +
                'catch err is  ' + err.message);
                expect(false).assertTrue();
                done()
            }
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0200
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0200
           * @tc.desc      : getAssets callback 10 times ,get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0200', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and getAssets
                CREATE_EVENT, GET_ASSETS_CALLBACK_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // getAssets callback
                    GET_ASSETS_CALLBACK_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]getAssets callback'
            eventEmitter.emit(mySteps[0],fetchOptions, imageType, "svg", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0300
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0300
           * @tc.desc      : getAssets promise 10 times ,get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0300', 3, function (done) {
            try{
                let photoHelper = getPhotoHelper(context)
                setTimeout(async () => {
                    for(let i = 0; i< 10;i++){
                        await getAssetsPromise(photoHelper, i)
                        if(i==9){
                            averageTime = parseFloat((totalTime/10).toFixed(2))
                            getAverageTime(averageTime,'[Statistics]getAssets promise')
                            await photoHelper.release()
                            console.info("photoHelper.release success")
                            done()
                        }
                    }
                }, 1000);
            } catch(err){
                console.error('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0300 getPhotoAccessHelper failed , ' +
                'catch err is  ' + err.message);
                expect(false).assertTrue();
                done()
            }
        })
        
        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0400
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0400
           * @tc.desc      : createAsset callback 10 times with imageType and photoExtensions , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0400', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and createAsset
                CREATE_EVENT, PRODUCE_EXTENSION, CREATE_ASSET_CALLBACK_OPTIONS_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // createAsset callback
                    PRODUCE_EXTENSION, CREATE_ASSET_CALLBACK_OPTIONS_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]createAsset callback with imageType and photoExtensions'
            eventEmitter.emit(mySteps[0],fetchOptions, imageType, "svg", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0500
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0500
           * @tc.desc      : createAsset callback 10 times with videoType and videoExtensions , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0500', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and createAsset
                CREATE_EVENT, PRODUCE_EXTENSION, CREATE_ASSET_CALLBACK_OPTIONS_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // createAsset callback
                    PRODUCE_EXTENSION, CREATE_ASSET_CALLBACK_OPTIONS_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]createAsset callback with videoType and videoExtensions'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0600
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0600
           * @tc.desc      : createAsset without options callback 10 times with imageType and photoExtensions ,
                            get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0600', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and createAsset
                CREATE_EVENT, PRODUCE_EXTENSION, CREATE_ASSET_CALLBACK_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // createAsset callback
                    PRODUCE_EXTENSION, CREATE_ASSET_CALLBACK_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]createAsset without options callback with imageType and photoExtensions'
            eventEmitter.emit(mySteps[0],fetchOptions, imageType, "svg", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0700
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0700
           * @tc.desc      : createAsset without options callback 10 times with videoType and videoExtensions  ,
                            get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0700', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and createAsset
                CREATE_EVENT, PRODUCE_EXTENSION, CREATE_ASSET_CALLBACK_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // createAsset callback
                    PRODUCE_EXTENSION, CREATE_ASSET_CALLBACK_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]createAsset without options callback with videoType and videoExtensions'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0800
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0800
           * @tc.desc      : createAsset promise 10 times with imageType and photoExtensions , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0800', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and createAsset
                CREATE_EVENT, PRODUCE_EXTENSION, CREATE_ASSET_PROMISE_OPTIONS_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // createAsset callback
                    PRODUCE_EXTENSION, CREATE_ASSET_PROMISE_OPTIONS_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]createAsset promise with imageType and photoExtensions'
            eventEmitter.emit(mySteps[0],fetchOptions, imageType, "svg", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0900
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0900
           * @tc.desc      : createAsset promise 10 times with videoType and videoExtensions , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_0900', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and createAsset
                CREATE_EVENT, PRODUCE_EXTENSION, CREATE_ASSET_PROMISE_OPTIONS_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // createAsset callback
                    PRODUCE_EXTENSION, CREATE_ASSET_PROMISE_OPTIONS_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]createAsset promise with videoType and videoExtensions'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1000
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1000
           * @tc.desc      : registerChange and unRegisterChange 10 times with different attrs , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1000', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and register
                CREATE_EVENT, GET_PHOTOASSET_EVENT, REGISTER_CHANGE_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // createAsset callback
                    REGISTER_CHANGE_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]registerChange and unRegisterChange with different attrs'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1100
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1100
           * @tc.desc      : release callback 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1100', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and release
                CREATE_EVENT, RELEASE_CALLBACK_TIME_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // release callback
                    CREATE_EVENT, RELEASE_CALLBACK_TIME_EVENT
                )
            }
            mySteps.push(
                // end
                GET_AVERAGE_TIME, END_EVENT
            )
            tag = '[Statistics]release callback'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1200
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1200
           * @tc.desc      : release promise 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1200', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and release
                CREATE_EVENT, RELEASE_PROMISE_TIME_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // release promise
                    CREATE_EVENT, RELEASE_PROMISE_TIME_EVENT
                )
            }
            mySteps.push(
                // end
                GET_AVERAGE_TIME, END_EVENT
            )
            tag = '[Statistics]release promise'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1300
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1300
           * @tc.desc      : photoAsset.get 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1300', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and photoAsset.get
                CREATE_EVENT, GET_PHOTOASSET_EVENT, PHOTOASSET_GET_ATTRS_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // photoAsset.get
                    PHOTOASSET_GET_ATTRS_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]photoAsset.get'
            fetchOptions.fetchColumns = columns
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1400
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1400
           * @tc.desc      : photoAsset.set 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1400', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and photoAsset.set
                CREATE_EVENT, GET_PHOTOASSET_EVENT, PHOTOASSET_SET_ATTRS_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // photoAsset.set
                    PHOTOASSET_SET_ATTRS_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]photoAsset.set'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1500
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1500
           * @tc.desc      : photoAsset.commitModify callback 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1500', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and photoAsset.commitModify
                CREATE_EVENT, GET_PHOTOASSET_EVENT, PHOTOASSET_COMMITMODIFY_CALLBACK_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // photoAsset.commitModify
                    PHOTOASSET_COMMITMODIFY_CALLBACK_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]photoAsset.commitModify'
            fetchOptions_allocate_file.fetchColumns = columns
            eventEmitter.emit(mySteps[0],fetchOptions_allocate_file, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1600
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1600
           * @tc.desc      : photoAsset.commitModify promise 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1600', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and photoAsset.commitModify
                CREATE_EVENT, GET_PHOTOASSET_EVENT, PHOTOASSET_COMMITMODIFY_PROMISE_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // photoAsset.commitModify
                    PHOTOASSET_COMMITMODIFY_PROMISE_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]photoAsset.commitModify'
            fetchOptions_allocate_file.fetchColumns = columns
            eventEmitter.emit(mySteps[0],fetchOptions_allocate_file, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1700
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1700
           * @tc.desc      : photoAsset.getReadOnlyFd callback 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1700', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and photoAsset.getReadOnlyFd
                CREATE_EVENT, GET_PHOTOASSET_EVENT, PHOTOASSET_GETREADONLYFD_CALLBACK_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // photoAsset.getReadOnlyFd
                    PHOTOASSET_GETREADONLYFD_CALLBACK_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]photoAsset.getReadOnlyFd callback'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1800
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1800
           * @tc.desc      : photoAsset.getReadOnlyFd promise 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1800', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and photoAsset.getReadOnlyFd
                CREATE_EVENT, GET_PHOTOASSET_EVENT, PHOTOASSET_GETREADONLYFD_PROMISE_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // photoAsset.getReadOnlyFd
                    PHOTOASSET_GETREADONLYFD_PROMISE_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]photoAsset.getReadOnlyFd promise'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1900
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1900
           * @tc.desc      : photoAsset.close callback 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_1900', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and photoAsset.close
                CREATE_EVENT, GET_PHOTOASSET_EVENT, PHOTOASSET_CLOSE_CALLBACK_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // photoAsset.close
                    PHOTOASSET_CLOSE_CALLBACK_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]photoAsset.close callback'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2000
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2000
           * @tc.desc      : photoAsset.close promise 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2000', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and photoAsset.close
                CREATE_EVENT, GET_PHOTOASSET_EVENT, PHOTOASSET_CLOSE_PROMISE_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // photoAsset.close
                    PHOTOASSET_CLOSE_PROMISE_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]photoAsset.close promise'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2100
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2100
           * @tc.desc      : photoAsset.getThumbnail callback 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2100', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and photoAsset.close
                CREATE_EVENT, GET_PHOTOASSET_EVENT, PHOTOASSET_GETTHUMBNAIL_CALLBACK_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // photoAsset.getThumbnail
                    PHOTOASSET_GETTHUMBNAIL_CALLBACK_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]photoAsset.getThumbnail callback'
            eventEmitter.emit(mySteps[0],fetchOptions_allocate_file, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2200
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2200
           * @tc.desc      : photoAsset.getThumbnail callback with sizes 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2200', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and photoAsset.close
                CREATE_EVENT, GET_PHOTOASSET_EVENT, PHOTOASSET_GETTHUMBNAIL_WITH_SIZES_CALLBACK_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // photoAsset.getThumbnail
                    PHOTOASSET_GETTHUMBNAIL_WITH_SIZES_CALLBACK_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]photoAsset.getThumbnail callback with sizes'
            eventEmitter.emit(mySteps[0],fetchOptions_allocate_file, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2300
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2300
           * @tc.desc      : photoAsset.getThumbnail promise with sizes 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2300', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and photoAsset.close
                CREATE_EVENT, GET_PHOTOASSET_EVENT, PHOTOASSET_GETTHUMBNAIL_WITH_SIZES_PROMISE_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // photoAsset.getThumbnail
                    PHOTOASSET_GETTHUMBNAIL_WITH_SIZES_PROMISE_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]photoAsset.getThumbnail promise with sizes'
            eventEmitter.emit(mySteps[0],fetchOptions_allocate_file, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2400
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2400
           * @tc.desc      : fetchResult.getCount with sizes 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2400', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and fetchResult.getCount
                CREATE_EVENT, GET_PHOTOASSET_EVENT, FETCHRESULT_GETCOUNT_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // fetchResult.getCount
                    FETCHRESULT_GETCOUNT_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]fetchResult.getCount'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2500
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2500
           * @tc.desc      : fetchResult.isAfterLast with sizes 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2500', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and fetchResult.getCount
                CREATE_EVENT, GET_PHOTOASSET_EVENT, FETCHRESULT_ISAFTERLAST_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // fetchResult.isAfterLast
                    FETCHRESULT_ISAFTERLAST_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]fetchResult.isAfterLast'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2600
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2600
           * @tc.desc      : fetchResult.close with sizes 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2600', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and fetchResult.close
                CREATE_EVENT, GET_PHOTOASSET_EVENT, FETCHRESULT_CLOSE_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // fetchResult.close
                    FETCHRESULT_CLOSE_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]fetchResult.close'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2700
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2700
           * @tc.desc      : fetchResult.getFirstObject callback with sizes 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2700', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and fetchResult.getFirstObject
                CREATE_EVENT, GET_PHOTOASSET_EVENT, FETCHRESULT_GETFIRSTOBJECT_CALLBACK_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // fetchResult.getFirstObject
                    FETCHRESULT_GETFIRSTOBJECT_CALLBACK_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]fetchResult.getFirstObject callback'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2800
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2800
           * @tc.desc      : fetchResult.getFirstObject promise with sizes 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2800', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and fetchResult.getFirstObject
                CREATE_EVENT, GET_PHOTOASSET_EVENT, FETCHRESULT_GETFIRSTOBJECT_PROMISE_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // fetchResult.getFirstObject
                    FETCHRESULT_GETFIRSTOBJECT_PROMISE_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]fetchResult.getFirstObject promise'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2900
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2900
           * @tc.desc      : fetchResult.getNextObject callback with sizes 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_2900', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and fetchResult.getNextObject
                CREATE_EVENT, GET_PHOTOASSET_EVENT, FETCHRESULT_GETNEXTOBJECT_CALLBACK_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // fetchResult.getNextObject
                    FETCHRESULT_GETNEXTOBJECT_CALLBACK_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]fetchResult.getNextObject callback'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_3000
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_3000
           * @tc.desc      : fetchResult.getNextObject promise with sizes 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_3000', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and fetchResult.getNextObject
                CREATE_EVENT, GET_PHOTOASSET_EVENT, FETCHRESULT_GETNEXTOBJECT_PROMISE_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // fetchResult.getNextObject
                    FETCHRESULT_GETNEXTOBJECT_PROMISE_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]fetchResult.getNextObject promise'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_3100
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_3100
           * @tc.desc      : fetchResult.getLastObject callback with sizes 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_3100', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and fetchResult.getLastObject
                CREATE_EVENT, GET_PHOTOASSET_EVENT, FETCHRESULT_GETLASTOBJECT_CALLBACK_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // fetchResult.getLastObject
                    FETCHRESULT_GETLASTOBJECT_CALLBACK_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]fetchResult.getLastObject callback'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_3200
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_3200
           * @tc.desc      : fetchResult.getLastObject promise with sizes 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_3200', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and fetchResult.getLastObject
                CREATE_EVENT, GET_PHOTOASSET_EVENT, FETCHRESULT_GETLASTOBJECT_CALLBACK_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // fetchResult.getLastObject
                    FETCHRESULT_GETLASTOBJECT_CALLBACK_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]fetchResult.getLastObject promise'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_3300
           * @tc.name      : SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_3300
           * @tc.desc      : fetchResult.getObjectByPosition callback with sizes 10 times , get average time
           * @tc.size      : MediumTest
           * @tc.type      : Performance test
           * @tc.level     : Level3
           */
        it('SUB_MULTIMEDIA_MEDIA_PHOTOACCESSHELPER_PERFORMANCE_3300', 3, function (done) {
            let mySteps = new Array(
                // getPhotoAccessHelper and fetchResult.getObjectByPosition
                CREATE_EVENT, GET_PHOTOASSET_EVENT, FETCHRESULT_GETOBJECTBYPOSITION_CALLBACK_EVENT
            );
            for(let i = 0; i< 9;i++)
            {
                mySteps.push(
                    // fetchResult.getObjectByPosition
                    FETCHRESULT_GETOBJECTBYPOSITION_CALLBACK_EVENT
                )
            }
            mySteps.push(
                // release
                RELEASE_CALLBACK_EVENT, GET_AVERAGE_TIME, 
                // end
                END_EVENT
            )
            tag = '[Statistics]fetchResult.getObjectByPosition callback'
            eventEmitter.emit(mySteps[0],fetchOptions, videoType, "mp4", options, mySteps, done);
        })
    })
}
