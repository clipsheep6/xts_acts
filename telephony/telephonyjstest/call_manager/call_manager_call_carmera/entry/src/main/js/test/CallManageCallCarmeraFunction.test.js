/**
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License")
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

import call from '@ohos.telephony.calltest';
import {Camera} from '@ohos.multimedia.camera_napi';
import camera from '@ohos.multimedia.camera_napi';

import {describe, afterAll, it, expect, beforeAll, afterEach} from 'deccjsunit/index';
import {
    CARMER_ID_NOT_EXIT,
    CARMER_ID_SPACE,
    IMAGE_PNG_PATH,
    IMAGE_JPG_PATH,
    IMAGE_BMP_PATH,
    IMAGE_WEBP_PATH,
    IMAGE_LOCAL_ERROR_PATH,
    IMAGE_SPACE_PATH,
    AUTO_ACCEPT_NUMBER,
    CALL_STATUS_DIALING,
    CALL_STATE_UNKNOWN,
    CALL_STATE_IDLE,
    DEFAULT_SLOT_ID,
    CALL_MODE_CS,
    POS_700,
    POS_10,
    POS_Z_1,
    POS_Z_0,
    POS_Z_ERROR,
    POS_Z_ERROR2,
    POS_LENGTH_300,
    POS_LENGTH_600,
    ZOOM_RATIO_5_0,
    ZOOM_RATIO_15_0,
    ZOOM_RATIO_0_0,
    ZOOM_RATIO_MINUS_1_0,
    ZOOM_RATIO_10_1,
    ROTATION_0,
    ROTATION_90,
    ROTATION_180,
    ROTATION_270,
    ROTATION_MINUS_1,
    ROTATION_60,
    ROTATION_360
} from './lib/Const.js';
import {toString} from './lib/ApiToPromise.js';
import {scenceInCalling, hangupCall2, hangupCall, callDetailsChangeOn} from './lib/ScenceInCalling.js';
let callId = null;

describe('CallManageCallCarmer', function () {
    beforeAll(async function (done) {
        callDetailsChangeOn();
        try {
            await call.setCallPreferenceMode(DEFAULT_SLOT_ID, CALL_MODE_CS);
            console.log('Telephony_CallManager setCallPreferenceMode success');
        } catch (error) {
            console.log(`Telephony_CallManager setCallPreferenceMode error,error:${toString(error)}`);
        }
        done();
    });

    afterEach(async function () {
        try {
            let callState = await call.getCallState();
            console.log(`Telephony_CallManager callState ${callState}`);
            if (callState === CALL_STATE_UNKNOWN || callState === CALL_STATE_IDLE) {
                return;
            }
            if (callId) {
                let data = await hangupCall('Telephony_CallManager', callId);
                console.log(`Telephony_CallManager hangupCall success ${toString(data)}`);
            }
        } catch (error) {
            console.log('Telephony_CallManager getCallState,hangupCall, error');
        }
    });

    afterAll(function () {
        console.log('Telephony_CallManager all  case 60 is over for callmanager CallManageCallCarmer');
    });

    /**
     * @tc.number  Telephony_CallManager_controlCamera_Async_0100
     * @tc.name    Dial a call and after answering the call,run function getCameraIDs to get cameraId,
     *             run function controlCamera by args right cameraId by callback,
     *             the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_controlCamera_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_controlCamera_Async_0100';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            camera.getCameraIDs((error, data) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                let cameraId = data && data.length && data[0];
                if (!cameraId) {
                    console.log(`${caseName} error,case failed,carmerId is not exit`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                call.controlCamera(cameraId, (error) => {
                    if (error) {
                        console.log(`${caseName} controlCamera open error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        hangupCall2(caseName, done, callId);
                        return;
                    }
                    call.controlCamera(CARMER_ID_SPACE, (error) => {
                        if (error) {
                            console.log(`${caseName} controlCamera close error,case failed,error:${toString(error)}`);
                            expect().assertFail();
                            hangupCall2(caseName, done, callId);
                            return;
                        }
                        console.log(`${caseName} case success`);
                        hangupCall2(caseName, done, callId);
                    });
                });
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_controlCamera_Async_0200
     * @tc.name    Dial a call and after answering the call,run function controlCamera by
     *             args cameraId CARMER_ID_NOT_EXIT by callback,
     *             the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_controlCamera_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_controlCamera_Async_0200';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            let cameraId = CARMER_ID_NOT_EXIT;
            call.controlCamera(cameraId, (error) => {
                if (error) {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} case failed`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });


    /**
     * @tc.number  Telephony_CallManager_controlCamera_Async_0500
     * @tc.name    Dial a call and after answering the call,run function controlCamera by
     *             args cameraId CARMER_ID_SPACE by callback,
     *             the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_controlCamera_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_controlCamera_Async_0500';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            let cameraId = CARMER_ID_SPACE;
            call.controlCamera(cameraId, (error) => {
                if (error) {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} case failed`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_controlCamera_Async_0600
     * @tc.name    Dial a call and after answering the call,run function controlCamera by
     *             args right cameraId  by callback,the callback function return void,
     *             run function controlCamera by
     *             args cameraId CARMER_ID_SPACE  by callback,the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_controlCamera_Async_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_controlCamera_Async_0600';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            camera.getCameraIDs((error, data) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                let cameraId = data && data.length && data[0];
                if (!cameraId) {
                    console.log(`${caseName} error,case failed,carmerId is not exit`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                call.controlCamera(cameraId, (error) => {
                    if (error) {
                        console.log(`${caseName} controlCamera open error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        hangupCall2(caseName, done, callId);
                        return;
                    }
                    console.log(`${caseName} controlCamera open success`);
                    call.controlCamera(CARMER_ID_SPACE, (error) => {
                        if (error) {
                            console.log(`${caseName} controlCamera close error,case failed,error:${toString(error)}`);
                            expect().assertFail();
                            hangupCall2(caseName, done, callId);
                            return;
                        }
                        console.log(`${caseName} case success`);
                        hangupCall2(caseName, done, callId);
                    });
                });
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_controlCamera_Promise_0100
     * @tc.name    Dial a call and after answering the call,run function getCameraIDs to get cameraId,
     *             run function controlCamera by args right cameraId  by promise,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_controlCamera_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_controlCamera_Promise_0100';
        callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await camera.getCameraIDs();
            console.log(`${caseName} getCameraIDs,data:${toString(data)}`);
            let cameraId = data && data.length && data[0];
            if (!cameraId) {
                console.log(`${caseName} case failed,carmerId is not exit`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
                return;
            }
            await call.controlCamera(cameraId);
            console.log(`${caseName} controlCamera open success`);
            await call.controlCamera(CARMER_ID_SPACE);
            console.log(`${caseName} case success`);
        } catch (err) {
            console.log(`${caseName} case failed. error:${toString(err)}`);
            expect().assertFail();
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_controlCamera_Promise_0200
     * @tc.name    Dial a call and after answering the call,run function controlCamera by args cameraId
     *             CARMER_ID_NOT_EXIT  by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_controlCamera_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_controlCamera_Promise_0200';
        let cameraId = CARMER_ID_NOT_EXIT;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.controlCamera(cameraId);
            console.log(`${caseName} case failed`);
            expect().assertFail();
        } catch (err) {
            console.log(`${caseName} case success. error:${toString(err)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_controlCamera_Promise_0500
     * @tc.name    Dial a call and after answering the call,run function controlCamera by args cameraId
     *             CARMER_ID_SPACE and by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_controlCamera_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_controlCamera_Promise_0500';
        let cameraId = CARMER_ID_SPACE;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.controlCamera(cameraId);
            console.log(`${caseName} case failed`);
            expect().assertFail();
        } catch (err) {
            console.log(`${caseName} case success. error:${toString(err)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_controlCamera_Promise_0600
     * @tc.name    Dial a call and after answering the call,run function controlCamera by args right cameraId
     *             by promise,the function return void,run function controlCamera by args cameraId
     *             CARMER_ID_SPACE and by promise,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_controlCamera_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_controlCamera_Promise_0600';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await camera.getCameraIDs();
            console.log(`${caseName} getCameraIDs,data:${toString(data)}`);
            let cameraId = data && data.length && data[0];
            if (!cameraId) {
                console.log(`${caseName} case failed,carmerId is not exit`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
                return;
            }
            await call.controlCamera(cameraId);
            console.log(`${caseName} controlCamera open success`);
            await call.controlCamera(CARMER_ID_SPACE);
            console.log(`${caseName} case success`);
        } catch (err) {
            console.log(`${caseName} case failed. error:${toString(err)}`);
            expect().assertFail();
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Async_0100
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x POS_700,y POS_10,z POS_Z_1,width POS_LENGTH_300,height  POS_LENGTH_600 by callback,
     *             the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPreviewWindow_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Async_0100';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            let info = {x: POS_700, y: POS_10, z: POS_Z_1, width: POS_LENGTH_300, height:  POS_LENGTH_600};
            call.setPreviewWindow(info, (error) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} case success`);
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Async_0200
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x POS_700,y POS_10,z POS_Z_0,width POS_LENGTH_300,height  POS_LENGTH_600 by callback,
     *             the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPreviewWindow_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Async_0200';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            let info = {x: POS_700, y: POS_10, z: POS_Z_0, width: POS_LENGTH_300, height:  POS_LENGTH_600};
            call.setPreviewWindow(info, (error) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} case success`);
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Async_0300
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x POS_700,y POS_10,z POS_Z_ERROR,width POS_LENGTH_300,height  POS_LENGTH_600 by callback,
     *             the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPreviewWindow_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Async_0300';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            let info = {x: POS_700, y: POS_10, z: POS_Z_ERROR, width: POS_LENGTH_300, height:  POS_LENGTH_600};
            call.setPreviewWindow(info, (error) => {
                if (error) {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} case faild`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Async_0400
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x POS_700,y POS_10,z POS_Z_ERROR2,width POS_LENGTH_300,height  POS_LENGTH_600 by callback,
     *             the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPreviewWindow_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Async_0400';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            let info = {x: POS_700, y: POS_10, z: POS_Z_ERROR2, width: POS_LENGTH_300, height:  POS_LENGTH_600};
            call.setPreviewWindow(info, (error) => {
                if (error) {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} case faild`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Promise_0100
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x POS_700,y POS_10,z POS_Z_1,width POS_LENGTH_300,height  POS_LENGTH_600 by promise,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPreviewWindow_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Promise_0100';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_1, width: POS_LENGTH_300, height:  POS_LENGTH_600};
            await call.setPreviewWindow(info);
            console.log(`${caseName} case success`);
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Promise_0200
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x POS_700,y POS_10,z POS_Z_0,width POS_LENGTH_300,height  POS_LENGTH_600 by promise,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPreviewWindow_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Promise_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_0, width: POS_LENGTH_300, height:  POS_LENGTH_600};
            await call.setPreviewWindow(info);
            console.log(`${caseName} case success`);
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Promise_0300
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x POS_700,y POS_10,z POS_Z_ERROR,width POS_LENGTH_300,height  POS_LENGTH_600 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPreviewWindow_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Promise_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_ERROR, width: POS_LENGTH_300, height:  POS_LENGTH_600};
            await call.setPreviewWindow(info);
            console.log(`${caseName} case faild`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Promise_0400
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x POS_700,y POS_10,z POS_Z_ERROR2,width POS_LENGTH_300,height  POS_LENGTH_600 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPreviewWindow_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Promise_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_ERROR2, width: POS_LENGTH_300, height:  POS_LENGTH_600};
            await call.setPreviewWindow(info);
            console.log(`${caseName} case faild`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Async_0100
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x POS_700,y POS_10,z POS_Z_1,width POS_LENGTH_300,height  POS_LENGTH_600 by callback,
     *             the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDisplayWindow_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Async_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_1, width: POS_LENGTH_300, height:  POS_LENGTH_600};
            await call.setDisplayWindow(info);
            console.log(`${caseName} case success`);
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Async_0200
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x POS_700,y POS_10,z POS_Z_0,width POS_LENGTH_300,height  POS_LENGTH_600 by callback,
     *             the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDisplayWindow_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Async_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_0, width: POS_LENGTH_300, height:  POS_LENGTH_600};
            await call.setDisplayWindow(info);
            console.log(`${caseName} case success`);
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Async_0300
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x POS_700,y POS_10,z POS_Z_ERROR,width POS_LENGTH_300,height  POS_LENGTH_600 by callback,
     *             the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDisplayWindow_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Async_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_ERROR, width: POS_LENGTH_300, height:  POS_LENGTH_600};
            await call.setDisplayWindow(info);
            console.log(`${caseName} case faild`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Async_0400
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x POS_700,y POS_10,z POS_Z_ERROR2,width POS_LENGTH_300,height  POS_LENGTH_600 by callback,
     *             the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDisplayWindow_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Async_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_ERROR2, width: POS_LENGTH_300, height:  POS_LENGTH_600};
            await call.setDisplayWindow(info);
            console.log(`${caseName} case faild`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Promise_0100
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x POS_700,y POS_10,z POS_Z_1,width POS_LENGTH_300,height  POS_LENGTH_600 by promise,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDisplayWindow_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Promise_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_1, width: POS_LENGTH_300, height:  POS_LENGTH_600};
            await call.setDisplayWindow(info);
            console.log(`${caseName} case success`);
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Promise_0200
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x POS_700,y POS_10,z POS_Z_0,width POS_LENGTH_300,height  POS_LENGTH_600 by promise,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDisplayWindow_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Promise_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_0, width: POS_LENGTH_300, height:  POS_LENGTH_600};
            await call.setDisplayWindow(info);
            console.log(`${caseName} case success`);
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Promise_0300
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x POS_700,y POS_10,z POS_Z_ERROR,width POS_LENGTH_300,height  POS_LENGTH_600 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDisplayWindow_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Promise_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_ERROR, width: POS_LENGTH_300, height:  POS_LENGTH_600};
            await call.setDisplayWindow(info);
            console.log(`${caseName} case faild`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Promise_0400
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x POS_700,y POS_10,z POS_Z_ERROR2,width POS_LENGTH_300,height  POS_LENGTH_600 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDisplayWindow_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Promise_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_ERROR2, width: POS_LENGTH_300, height:  POS_LENGTH_600};
            await call.setDisplayWindow(info);
            console.log(`${caseName} case faild`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setCameraZoom_Async_0100
     * @tc.name    Dial a call and after answering the call,run function getSupportedZoomRange to to get the zoomRatio,
     *             run function setCameraZoom by args getted zoomRatio by callback,the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCameraZoom_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCameraZoom_Async_0100';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            new Camera().getSupportedZoomRange((error, data) => {
                if (error) {
                    console.log(`${caseName} getSupportedZoomRange error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                let zoomRatio = data && data.length ? data[0] : ZOOM_RATIO_5_0;
                call.setCameraZoom(zoomRatio, (error) => {
                    if (error) {
                        console.log(`${caseName} setCameraZoom error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        hangupCall2(caseName, done, callId);
                        return;
                    }
                    console.log(`${caseName} case success`);
                    hangupCall2(caseName, done, callId);
                });
            });

        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCameraZoom_Async_0200
     * @tc.name    Dial a call and after answering the call,run function setCameraZoom by args
     *             zoomRatio ZOOM_RATIO_15_0 by callback,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCameraZoom_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCameraZoom_Async_0200';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setCameraZoom(ZOOM_RATIO_15_0, (error) => {
                if (error) {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} case failed`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCameraZoom_Async_0300
     * @tc.name    Dial a call and after answering the call,run function setCameraZoom by args
     *             zoomRatio ZOOM_RATIO_0_0 by callback,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCameraZoom_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCameraZoom_Async_0300';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setCameraZoom(ZOOM_RATIO_0_0, (error) => {
                if (error) {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} case failed`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCameraZoom_Async_0400
     * @tc.name    Dial a call and after answering the call,run function setCameraZoom by args
     *             zoomRatio ZOOM_RATIO_MINUS_1_0 by callback,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCameraZoom_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCameraZoom_Async_0400';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setCameraZoom(ZOOM_RATIO_MINUS_1_0, (error) => {
                if (error) {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} case failed`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCameraZoom_Async_0500
     * @tc.name    Dial a call and after answering the call,run function setCameraZoom by args
     *             zoomRatio ZOOM_RATIO_10_1 by callback,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCameraZoom_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCameraZoom_Async_0500';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setCameraZoom(ZOOM_RATIO_10_1, (error) => {
                if (error) {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} case failed`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCameraZoom_Promise_0100
     * @tc.name    Dial a call and after answering the call,run function getSupportedZoomRange to to get the zoomRatio,
     *             run function setCameraZoom by args getted zoomRatio by promise,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCameraZoom_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCameraZoom_Promise_0100';
        let zoomRatio = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            console.log(`${caseName} scenceInCalling success`);
            callId = data.callId;
            data = await new Camera().getSupportedZoomRange();
            console.log(`${caseName} getSupportedZoomRange success`);
            zoomRatio = data && data.length ? data[0] : ZOOM_RATIO_5_0;
        } catch (error) {
            console.log(`${caseName} scenceInCalling or getSupportedZoomRange error ,case failed,error:${
                toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setCameraZoom(zoomRatio);
            console.log(`${caseName} case success`);
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setCameraZoom_Promise_0200
     * @tc.name    Dial a call and after answering the call,run function setCameraZoom by args
     *             zoomRatio ZOOM_RATIO_15_0 by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCameraZoom_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCameraZoom_Promise_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setCameraZoom(ZOOM_RATIO_15_0);
            console.log(`${caseName} case failed`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setCameraZoom_Promise_0300
     * @tc.name    Dial a call and after answering the call,run function setCameraZoom
     *             by args zoomRatio ZOOM_RATIO_0_0 by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCameraZoom_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCameraZoom_Promise_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setCameraZoom(ZOOM_RATIO_0_0);
            console.log(`${caseName} case failed`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setCameraZoom_Promise_0400
     * @tc.name    Dial a call and after answering the call,run function setCameraZoom by args
     *             zoomRatio ZOOM_RATIO_MINUS_1_0 by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCameraZoom_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCameraZoom_Promise_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setCameraZoom(ZOOM_RATIO_MINUS_1_0);
            console.log(`${caseName} case failed`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setCameraZoom_Promise_0500
     * @tc.name    Dial a call and after answering the call,run function setCameraZoom by args
     *             zoomRatio ZOOM_RATIO_10_1 by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCameraZoom_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCameraZoom_Promise_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setCameraZoom(ZOOM_RATIO_10_1);
            console.log(`${caseName} case failed`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Async_0100
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_PNG_PATH by callback,the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Async_0100';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setPausePicture(IMAGE_PNG_PATH, (error) => {
                if (error) {
                    console.log(`${caseName} error,case error,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} case success`);
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Async_0200
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_JPG_PATH by callback,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Async_0200';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setPausePicture(IMAGE_JPG_PATH, (error) => {
                if (error) {
                    console.log(`${caseName} case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success,case failed`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Async_0300
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_BMP_PATH by callback,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Async_0300';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setPausePicture(IMAGE_BMP_PATH, (error) => {
                if (error) {
                    console.log(`${caseName} case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success,case failed`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Async_0400
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_WEBP_PATH by callback,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Async_0400';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setPausePicture(IMAGE_WEBP_PATH, (error) => {
                if (error) {
                    console.log(`${caseName} case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success,case failed`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Async_0500
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_LOCAL_ERROR_PATH by callback,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Async_0500';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setPausePicture(IMAGE_LOCAL_ERROR_PATH, (error) => {
                if (error) {
                    console.log(`${caseName} case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success,case failed`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Async_0600
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_SPACE_PATH by callback,the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Async_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Async_0600';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setPausePicture(IMAGE_SPACE_PATH, (error) => {
                if (error) {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success, case failed`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Promise_0100
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_PNG_PATH by promise,the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Promise_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setPausePicture(IMAGE_PNG_PATH);
            console.log(`${caseName} case success`);
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Promise_0200
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_JPG_PATH by promise,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Promise_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setPausePicture(IMAGE_JPG_PATH);
            console.log(`${caseName} success,case failed`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Promise_0300
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_BMP_PATH by promise,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Promise_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setPausePicture(IMAGE_BMP_PATH);
            console.log(`${caseName} success,case failed`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Promise_0400
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_WEBP_PATH by promise,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Promise_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setPausePicture(IMAGE_WEBP_PATH);
            console.log(`${caseName} success,case failed`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Promise_0500
     * @tc.name    Dial a call and after answering the call,run function setPausePicture
     *             by args path IMAGE_LOCAL_ERROR_PATH by promise,
     *             the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Promise_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setPausePicture(IMAGE_LOCAL_ERROR_PATH);
            console.log(`${caseName} success,case failed`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Promise_0600
     * @tc.name    Dial a call and after answering the call,run function setPausePicture
     *             by args path IMAGE_SPACE_PATH by promise,
     *             the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Promise_0600';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setPausePicture(IMAGE_SPACE_PATH);
            console.log(`${caseName} success, case failed`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });


    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Async_0100
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection
     *             by args rotation ROTATION_0 by callback,
     *             the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDeviceDirection_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Async_0100';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setDeviceDirection(ROTATION_0, (error) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success, case success`);
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Async_0200
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection
     *             by args rotation ROTATION_90 by callback,the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDeviceDirection_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Async_0200';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setDeviceDirection(ROTATION_90, (error) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success, case success`);
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Async_0300
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection
     *             by args rotation ROTATION_180 by callback,
     *             the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDeviceDirection_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Async_0300';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setDeviceDirection(ROTATION_180, (error) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success, case success`);
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Async_0400
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection
     *             by args rotation ROTATION_270 by callback,the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDeviceDirection_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Async_0400';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setDeviceDirection(ROTATION_270, (error) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success, case success`);
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Async_0500
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection
     *             by args rotation ROTATION_MINUS_1 by callback,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDeviceDirection_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Async_0500';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setDeviceDirection(ROTATION_MINUS_1, (error) => {
                if (error) {
                    console.log(`${caseName} success, case success`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Async_0600
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection
     *             by args rotation ROTATION_60 by callback,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDeviceDirection_Async_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Async_0600';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setDeviceDirection(ROTATION_60, (error) => {
                if (error) {
                    console.log(`${caseName} success, case success`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Async_0700
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection
     *             by args rotation ROTATION_360 by callback,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDeviceDirection_Async_0700', 0, function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Async_0700';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            call.setDeviceDirection(ROTATION_360, (error) => {
                if (error) {
                    console.log(`${caseName} success, case success`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Promise_0100
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection
     *             by args rotation ROTATION_0 by promise,the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDeviceDirection_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Promise_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setDeviceDirection(ROTATION_0);
            console.log(`${caseName} case success`);
        } catch (error) {
            console.log(`${caseName} error,case error,error:${toString(error)}`);
            expect().assertFail();
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Promise_0200
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection
     *             by args rotation ROTATION_90 by promise,the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDeviceDirection_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Promise_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setDeviceDirection(ROTATION_90);
            console.log(`${caseName} case success`);
        } catch (error) {
            console.log(`${caseName} error,case error,error:${toString(error)}`);
            expect().assertFail();
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Promise_0300
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection
     *             by args rotation ROTATION_180 by promise,the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDeviceDirection_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Promise_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setDeviceDirection(ROTATION_180);
            console.log(`${caseName} case success`);
        } catch (error) {
            console.log(`${caseName} error,case error,error:${toString(error)}`);
            expect().assertFail();
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Promise_0400
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection
     *             by args rotation ROTATION_270 by promise,the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDeviceDirection_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Promise_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setDeviceDirection(ROTATION_270);
            console.log(`${caseName} case success`);
        } catch (error) {
            console.log(`${caseName} error,case error,error:${toString(error)}`);
            expect().assertFail();
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Promise_0500
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection
     *             by args rotation ROTATION_MINUS_1 by promise,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDeviceDirection_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Promise_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setDeviceDirection(ROTATION_MINUS_1);
            console.log(`${caseName} success,case error`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Promise_0600
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection
     *             by args rotation ROTATION_60 by promise,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDeviceDirection_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Promise_0600';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setDeviceDirection(ROTATION_60);
            console.log(`${caseName} success,case error`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });


    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Promise_0700
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection by args
     *             rotation ROTATION_360 by promise,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDeviceDirection_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Promise_0700';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await call.setDeviceDirection(ROTATION_360);
            console.log(`${caseName} success,case error`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });
});