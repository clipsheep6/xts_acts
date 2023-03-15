// @ts-nocheck


/**
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
import { describe, it, expect } from "@ohos/hypium";
import print from '@ohos.print';
import Utils from './Utils';

export default function requestPrintJsunit3() {
    describe('requestPrintTest3', function () {
        let file = ['datashare://data/print/a.png','datashare://data/print/b.png']
        let printTaskResult;
        let jobInfo;
        let jobId;
        let jobState;
        let printerInfo;
        let extensionIds = [];
        let extensionInfo;
        let printerIdsArray = ['5', '6']
        let extensionInfoUpdate = 'newString'
        let extensionListNull = []
        let printerId6 = '6'
        let printerIdValid = 'com.acts.print.PrintFrameWorkTest:6'

        let printerPageSizeArr = [
            {
                id: '1',
                name: 'string',
                width: 200,
                height: 200,
            }
        ]

        let printMargin = {
            top: 1,
            bottom: 2,
            left: 1,
            right: 1,
        }

        let printerResolutionArr = [{
                                        id: '2',
                                        horizontalDpi: 2,
                                        verticalDpi: 1,
                                    }]
        let printerCapability = {
            minMargin: printMargin,
            pageSize: printerPageSizeArr,
            resolution: printerResolutionArr,
            colorMode: 1,
            duplexMode: 2,
        }

        let printerInfo1 = {
            printerId: '5',
            printerName: 'string',
            printerIcon: 1,
            printerState: 1,
            description: 'string',
            capability: printerCapability,
        }
        let printerInfo2 = {
            printerId: '6',
            printerName: 'string2',
            printerIcon: 1,
            printerState: 2,
            description: 'string2',
            capability: printerCapability,
        }
        let printerInfoArr = [printerInfo1, printerInfo2]

        let printerRange = {
            startPage: 1,
            endPage: 4,
        }
        let printerPageSize = {
            id: '1',
            name: 'string',
            width: 200,
            height: 200,
        }
        let previewAttribute = {
            previewRange: printerRange,
            result: 'string',
        }
        /*
        let info = {
            jobId:'6',
            state: print.PRINT_JOB_PREPARE,
            file: ['datashare://data/print/a.png','datashare://data/print/b.png']
        }
        */
        let TAG = '';
        function sleep(time) {
            return new Promise((resolve) => setTimeout(resolve, time))
        }
        const waitTime = 1000;
        const waitTime2 = 2000;
        const PRINTER_STATE_ADDED = print.PRINTER_ADDED;
        const PRINTER_STATE_REMOVED = print.PRINTER_REMOVED;
        const PRINTER_STATE_UPDATE_CAP = print.PRINTER_UPDATE_CAP;
        const PRINTER_STATE_CONNECTED = print.PRINTER_CONNECTED;
        const PRINTER_STATE_DISCONNECTED = print.PRINTER_DISCONNECTED;
        const PRINTER_STATE_RUNNING = print.PRINTER_RUNNING;
        const PRINTJOB_STATE_PREPARE = print.PRINT_JOB_PREPARE;
        const PRINTJOB_STATE_QUEUED = print.PRINT_JOB_QUEUED;
        const PRINTJOB_STATE_RUNNING = print.PRINT_JOB_RUNNING;
        const PRINTJOB_STATE_BLOCKED = print.PRINT_JOB_BLOCKED;
        const PRINTJOB_STATE_COMPLETED = print.PRINT_JOB_COMPLETED;
        const PRINTJOB_STATE_COMPLETE_SUCCESS = print.PRINT_JOB_COMPLETED_SUCCESS;
        const PRINT_JOB_COMPLETED_FAILED = print.PRINT_JOB_COMPLETED_FAILED;
        const PRINT_JOB_COMPLETED_CANCELLED = print.PRINT_JOB_COMPLETED_CANCELLED;
        const PRINT_JOB_COMPLETED_FILE_CORRUPT = print.PRINT_JOB_COMPLETED_FILE_CORRUPT;
        const PRINT_JOB_BLOCK_OFFLINE = print.PRINT_JOB_BLOCK_OFFLINE;
        const PRINTJOB_STATE_BLOCK_BUSY = print.PRINT_JOB_BLOCK_BUSY;
        const PRINT_JOB_BLOCK_CANCELLED = print.PRINT_JOB_BLOCK_CANCELLED;
        const PRINT_JOB_BLOCK_OUT_OF_PAPER = print.PRINT_JOB_BLOCK_OUT_OF_PAPER;
        const PRINT_JOB_BLOCK_OUT_OF_INK = print.PRINT_JOB_BLOCK_OUT_OF_INK;
        const PRINT_JOB_BLOCK_OUT_OF_TONER = print.PRINT_JOB_BLOCK_OUT_OF_TONER;
        const PRINT_JOB_BLOCK_JAMMED = print.PRINT_JOB_BLOCK_JAMMED;
        const PRINT_JOB_BLOCK_DOOR_OPEN = print.PRINT_JOB_BLOCK_DOOR_OPEN;
        const PRINT_JOB_BLOCK_SERVICE_REQUEST = print.PRINT_JOB_BLOCK_SERVICE_REQUEST;
        const PRINT_JOB_BLOCK_LOW_ON_INK = print.PRINT_JOB_BLOCK_LOW_ON_INK;
        const PRINT_JOB_BLOCK_LOW_ON_TONER = print.PRINT_JOB_BLOCK_LOW_ON_TONER;
        const PRINT_JOB_BLOCK_REALLY_LOW_ON_INK = print.PRINT_JOB_BLOCK_REALLY_LOW_ON_INK;
        const PRINT_JOB_BLOCK_BAD_CERTIFICATE = print.PRINT_JOB_BLOCK_BAD_CERTIFICATE;

        /**
         * @tc.number RequestPrint_notify_test_0100
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_PREPARE)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0100', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_0100-------------');
            TAG = 'RequestPrint_notify_test_0100';
            let startTime = Utils.getNowTime();
            print.on('jobStateChange', (state, info) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('on.jobStateChange: ', startTime, endTime);
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            printEvent(TAG, file);
            await sleep(waitTime);
            checkPrintJob0(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            console.info('------------end RequestPrint_notify_test_0100-------------');
            done();
        });

        function checkPrintJob0(msg, info) {
            console.info('------------checkPrintJob0 start-------------');
            expect(Array.isArray(info.files)).assertEqual(false);
            console.info('------------checkPrintJob0 end-------------');
            /*
            for (let n = 0; n < info.files.length; n++) {
                expect(typeof (info.files[n])).assertEqual('string');
                expect(info.files[0]).assertEqual('datashare://data/print/a.png');
                expect(info.files[1]).assertEqual('datashare://data/print/b.png');
            }
            * */
            console.info(msg + ' checkPrintJob info.jobState: ' + JSON.stringify(info.jobState));
            expect(typeof (info.jobState)).assertEqual('number');
            expect(info.jobState).assertEqual(PRINTJOB_STATE_PREPARE);
        };

        /**
         * @tc.number RequestPrint_notify_test_0200
         * @tc.name on: Register event callback for the state change of printer (PRINTER_ADDED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0200', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_0200-------------');
            TAG = 'RequestPrint_notify_test_0200';
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            let startTime = Utils.getNowTime();
            print.on('printerStateChange', (state, info) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('on.printerStateChange: ', startTime, endTime);
                if (state == PRINTER_STATE_ADDED) {
                    console.info(TAG + 'printer added. info: ' + JSON.stringify(info));
                    printerInfo = info;
                }
            });
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            checkPrinterInfo0(TAG, printerInfo);
            await sleep(waitTime);
            offPrinterStateChangeEvent(TAG);
            await sleep(waitTime);
            removePrintersEvent(TAG, printerIdsArray);
            await sleep(waitTime);
            stopDiscoverPrinterEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_0200-------------');
            done();
        });

        function checkPrinterInfo0(msg, info) {
            checkPrinterInfoCommon(msg, info);
            checkPrinterCapability(msg, info);
            console.info(msg + ' checkPrinterInfo info.printerState: ' + JSON.stringify(info.printerState));
            expect(typeof (info.printerState)).assertEqual('number');
            expect(info.printerState).assertEqual(PRINTER_STATE_ADDED);
        };

        /**
         * @tc.number RequestPrint_notify_test_0300
         * @tc.name on: Register event callback for the state change of printer (PRINTER_ADDED)
                        addPrinters(same printerId), can not notify again
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0300', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_0300-------------');
            TAG = 'RequestPrint_notify_test_0300';
            let changeTimes = 3;
            let count = 0;
            print.on('printerStateChange', (state, info) => {
                if (state == PRINTER_STATE_ADDED) {
                    console.info(TAG + 'printer added. info: ' + JSON.stringify(info));
                    count++;
                }
            });
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            if (count == changeTimes) {
                expect(false).assertTrue();
            }
            offPrinterStateChangeEvent(TAG);
            await sleep(waitTime);
            removePrintersEvent(TAG, printerIdsArray);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_0300-------------');
            done();
        });

        /**
         * @tc.number RequestPrint_notify_test_0400
         * @tc.name on: Register event callback for the state change of printer (PRINTER_REMOVED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0400', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_0400-------------');
            TAG = 'RequestPrint_notify_test_0400';
            print.on('printerStateChange', (state, info) => {
                if (state == PRINTER_STATE_REMOVED) {
                    console.info(TAG + 'printer removed. info: ' + JSON.stringify(info));
                    printerInfo = info;
                }
            });
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionListNull);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            removePrintersEvent(TAG, printerIdsArray);
            await sleep(waitTime);
            checkPrinterInfo1(TAG, printerInfo);
            await sleep(waitTime);
            offPrinterStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_0400-------------');
            done();
        });

        function checkPrinterInfo1(msg, info) {
            checkPrinterInfoCommon(msg, info);
            checkPrinterCapability(msg, info);
            console.info(msg + ' checkPrinterInfo info.printerState: ' + JSON.stringify(info.printerState));
            expect(typeof (info.printerState)).assertEqual('number');
            expect(info.printerState).assertEqual(PRINTER_STATE_REMOVED);
        };

        /**
         * @tc.number RequestPrint_notify_test_0500
         * @tc.name on: Register event callback for the state change of printer (PRINTER_UPDATE_CAP)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0500', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_0500-------------');
            TAG = 'RequestPrint_notify_test_0500';
            print.on('printerStateChange', (state, info) => {
                if (state == PRINTER_STATE_UPDATE_CAP) {
                    console.info(TAG + 'printer UPDATE_CAP. info: ' + JSON.stringify(info));
                    printerInfo = info;
                }
            });
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            updatePrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            checkPrinterInfo2(TAG, printerInfo);
            await sleep(waitTime);
            offPrinterStateChangeEvent(TAG);
            await sleep(waitTime);
            queryPrinterCapabilityEvent(TAG, printerIdValid)
            await sleep(waitTime);
            disconnectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            removePrintersEvent(TAG, printerIdsArray);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_0500-------------');
            done();
        });

        function checkPrinterInfo2(msg, info) {
            checkPrinterInfoCommon(msg, info);
            checkPrinterCapability(msg, info);
            console.info(msg + ' checkPrinterInfo info.printerState: ' + JSON.stringify(info.printerState));
            expect(typeof (info.printerState)).assertEqual('number');
            expect(info.printerState).assertEqual(PRINTER_STATE_UPDATE_CAP);
        };

        /**
         * @tc.number RequestPrint_notify_test_0600
         * @tc.name on: Register event callback for the state change of printer (PRINTER_CONNECTED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0600', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_0600-------------');
            TAG = 'RequestPrint_notify_test_0600';
            print.on('printerStateChange', (state, info) => {
                if (state == PRINTER_STATE_CONNECTED) {
                    console.info(TAG + 'printer connected. info: ' + JSON.stringify(info));
                    printerInfo = info;
                }
            });
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            updatePrinterStateEvent(TAG, printerId6, PRINTER_STATE_CONNECTED);
            await sleep(waitTime);
            checkPrinterInfo3(TAG, printerInfo);
            await sleep(waitTime);
            offPrinterStateChangeEvent(TAG);
            await sleep(waitTime);
            removePrintersEvent(TAG, printerIdsArray);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_0600-------------');
            done();
        });

        function checkPrinterInfo3(msg, info) {
            checkPrinterInfoCommon(msg, info);
            checkPrinterCapability(msg, info);
            console.info(msg + ' checkPrinterInfo info.printerState: ' + JSON.stringify(info.printerState));
            expect(typeof (info.printerState)).assertEqual('number');
            expect(info.printerState).assertEqual(PRINTER_STATE_CONNECTED);
        };

        /**
         * @tc.number RequestPrint_notify_test_0700
         * @tc.name on: Register event callback for the state change of printer (PRINTER_DISCONNECTED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0700', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_0700-------------');
            TAG = 'RequestPrint_notify_test_0700';
            print.on('printerStateChange', (state, info) => {
                if (state == PRINTER_STATE_DISCONNECTED) {
                    console.info(TAG + ' printer disconnect. info: ' + JSON.stringify(info));
                    printerInfo = info;
                }
            });
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            updatePrinterStateEvent(TAG, printerId6, PRINTER_STATE_DISCONNECTED);
            await sleep(waitTime);
            checkPrinterInfo4(TAG, printerInfo);
            await sleep(waitTime);
            offPrinterStateChangeEvent(TAG);
            await sleep(waitTime);
            removePrintersEvent(TAG, printerIdsArray);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_0700-------------');
            done();
        });

        function checkPrinterInfo4(msg, info) {
            checkPrinterInfoCommon(msg, info);
            checkPrinterCapability(msg, info);
            console.info(msg + ' checkPrinterInfo info.printerState: ' + JSON.stringify(info.printerState));
            expect(typeof (info.printerState)).assertEqual('number');
            expect(info.printerState).assertEqual(PRINTER_STATE_DISCONNECTED);
        };

        /**
         * @tc.number RequestPrint_notify_test_0800
         * @tc.name on: Register event callback for the state change of printer (PRINTER_RUNNING)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0800', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_0800-------------');
            TAG = 'RequestPrint_notify_test_0800';
            print.on('printerStateChange', (state, info) => {
                if (state == PRINTER_STATE_RUNNING) {
                    console.info(TAG + ' printer running. info: ' + JSON.stringify(info));
                    printerInfo = info;
                }
            });
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            updatePrinterStateEvent(TAG, printerId6, PRINTER_STATE_RUNNING);
            await sleep(waitTime);
            checkPrinterInfo5(TAG, printerInfo);
            await sleep(waitTime);
            offPrinterStateChangeEvent(TAG);
            await sleep(waitTime);
            removePrintersEvent(TAG, printerIdsArray);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_0800-------------');
            done();
        });

        function checkPrinterInfo5(msg, info) {
            checkPrinterInfoCommon(msg, info);
            checkPrinterCapability(msg, info);
            console.info(msg + ' checkPrinterInfo info.printerState: ' + JSON.stringify(info.printerState));
            expect(typeof (info.printerState)).assertEqual('number');
            expect(info.printerState).assertEqual(PRINTER_STATE_RUNNING);
        };

        /**
         * @tc.number RequestPrint_notify_test_0900
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_QUEUED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_0900', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_0900-------------');
            TAG = 'RequestPrint_notify_test_0900';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobId = info.jobId;
                    jobState = info.jobState;
                }
                if (state == PRINTJOB_STATE_QUEUED) {
                    console.info(TAG + ' the printJob is queued. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobState = info.jobState;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_QUEUED, PRINTJOB_STATE_QUEUED);
            await sleep(waitTime2);
            checkPrintJob1(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            requestPrintPreviewEvent(TAG, jobInfo1)
            await sleep(waitTime);
            cancelPrintJobEvent(TAG, jobId);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_0900-------------');
            done();
        });

        function checkPrintJob1(msg, info) {
            checkPrintJobCommon(msg, info);
            checkPrintJobOthers(msg, info);
            console.info(msg + ' checkPrintJob info.jobState: ' + JSON.stringify(info.jobState));
            expect(typeof (info.jobState)).assertEqual('number');
            expect(info.jobState).assertEqual(PRINTJOB_STATE_QUEUED);
        }

        /**
         * @tc.number RequestPrint_notify_test_1000
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_RUNNING)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_1000', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_1000-------------');
            TAG = 'RequestPrint_notify_test_1000';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_RUNNING) {
                    console.info(TAG + ' the printJob is running. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_RUNNING, PRINTJOB_STATE_RUNNING);
            await sleep(waitTime2);
            checkPrintJob2(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_1000-------------');
            done();
        });

        function checkPrintJob2(msg, info) {
            checkPrintJobCommon(msg, info);
            checkPrintJobOthers(msg, info);
            console.info(msg + ' checkPrintJob info.jobState: ' + JSON.stringify(info.jobState));
            expect(typeof (info.jobState)).assertEqual('number');
            expect(info.jobState).assertEqual(PRINTJOB_STATE_RUNNING);
        };

        /**
          * @tc.number RequestPrint_notify_test_1100
          * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_BLOCK_OFFLINE)
          * @tc.desc Function test
          */
        it('RequestPrint_notify_test_1100', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_1100-------------');
            TAG = 'RequestPrint_notify_test_1100';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_BLOCKED) {
                    console.info(TAG + ' the printJob is blocked. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_BLOCKED, PRINT_JOB_BLOCK_OFFLINE);
            await sleep(waitTime2);
            checkPrintJob3(TAG, jobInfo);
            checkJobSubState4(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_1100-------------');
            done();
        });

        function checkPrintJob3(msg, info) {
            checkPrintJobCommon(msg, info);
            checkPrintJobOthers(msg, info);
            console.info(msg + ' checkPrintJob info.jobState: ' + JSON.stringify(info.jobState));
            expect(typeof (info.jobState)).assertEqual('number');
            expect(info.jobState).assertEqual(PRINTJOB_STATE_BLOCKED);
        };

        function checkJobSubState4(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINT_JOB_BLOCK_OFFLINE);
            expect(printTaskResult).assertEqual('blocked');
        };

        /**
        * @tc.number RequestPrint_notify_test_1200
        * @tc.name on: Register event callback for the state change of print job (PRINTJOB_STATE_BLOCK_BUSY)
        * @tc.desc Function test
        */
        it('RequestPrint_notify_test_1200', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_1200-------------');
            TAG = 'RequestPrint_notify_test_1200';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_BLOCKED) {
                    console.info(TAG + ' the printJob is blocked. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_BLOCKED, PRINTJOB_STATE_BLOCK_BUSY);
            await sleep(waitTime2);
            //checkPrintJob3(TAG, jobInfo);
            checkJobSubState5(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_1200-------------');
            done();
        });

        function checkJobSubState5(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINTJOB_STATE_BLOCK_BUSY);
            expect(printTaskResult).assertEqual('blocked');
        };

        /**
         * @tc.number RequestPrint_notify_test_1300
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_BLOCK_CANCELLED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_1300', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_1300-------------');
            TAG = 'RequestPrint_notify_test_1300';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_BLOCKED) {
                    console.info(TAG + ' the printJob is blocked. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_BLOCKED, PRINT_JOB_BLOCK_CANCELLED);
            await sleep(waitTime2);
            checkPrintJob3(TAG, jobInfo);
            checkJobSubState6(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_1300-------------');
            done();
        });

        function checkJobSubState6(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINT_JOB_BLOCK_CANCELLED);
            expect(printTaskResult).assertEqual('blocked');
        };

        /**
         * @tc.number RequestPrint_notify_test_1400
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_BLOCK_OUT_OF_PAPER)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_1400', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_1400-------------');
            TAG = 'RequestPrint_notify_test_1400';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_BLOCKED) {
                    console.info(TAG + ' the printJob is blocked. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_BLOCKED, PRINT_JOB_BLOCK_OUT_OF_PAPER);
            await sleep(waitTime2);
            checkPrintJob3(TAG, jobInfo);
            checkJobSubState7(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_1400-------------');
            done();
        });

        function checkJobSubState7(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINT_JOB_BLOCK_OUT_OF_PAPER);
            expect(printTaskResult).assertEqual('blocked');
        };

        /**
         * @tc.number RequestPrint_notify_test_1500
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_BLOCK_OUT_OF_INK)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_1500', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_1500-------------');
            TAG = 'RequestPrint_notify_test_1500';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_BLOCKED) {
                    console.info(TAG + ' the printJob is blocked. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_BLOCKED, PRINT_JOB_BLOCK_OUT_OF_INK);
            await sleep(waitTime2);
            checkPrintJob3(TAG, jobInfo);
            checkJobSubState8(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_1500-------------');
            done();
        });

        function checkJobSubState8(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINT_JOB_BLOCK_OUT_OF_INK);
            expect(printTaskResult).assertEqual('blocked');
        };

        /**
         * @tc.number RequestPrint_notify_test_1600
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_BLOCK_OUT_OF_TONER)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_1600', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_1600-------------');
            TAG = 'RequestPrint_notify_test_1600';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_BLOCKED) {
                    console.info(TAG + ' the printJob is blocked. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_BLOCKED, PRINT_JOB_BLOCK_OUT_OF_TONER);
            await sleep(waitTime2);
            checkPrintJob3(TAG, jobInfo);
            checkJobSubState9(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_1600-------------');
            done();
        });

        function checkJobSubState9(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINT_JOB_BLOCK_OUT_OF_TONER);
            expect(printTaskResult).assertEqual('blocked');
        };

        /**
         * @tc.number RequestPrint_notify_test_1700
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_BLOCK_JAMMED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_1700', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_1700-------------');
            TAG = 'RequestPrint_notify_test_1700';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_BLOCKED) {
                    console.info(TAG + ' the printJob is blocked. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_BLOCKED, PRINT_JOB_BLOCK_JAMMED);
            await sleep(waitTime2);
            checkPrintJob3(TAG, jobInfo);
            checkJobSubState10(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_1700-------------');
            done();
        });

        function checkJobSubState10(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINT_JOB_BLOCK_JAMMED);
            expect(printTaskResult).assertEqual('blocked');
        };

        /**
         * @tc.number RequestPrint_notify_test_1800
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_BLOCK_DOOR_OPEN)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_1800', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_1800-------------');
            TAG = 'RequestPrint_notify_test_1800';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_BLOCKED) {
                    console.info(TAG + ' the printJob is blocked. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_BLOCKED, PRINT_JOB_BLOCK_DOOR_OPEN);
            await sleep(waitTime2);
            checkPrintJob3(TAG, jobInfo);
            checkJobSubState11(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_1800-------------');
            done();
        });

        function checkJobSubState11(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINT_JOB_BLOCK_DOOR_OPEN);
            expect(printTaskResult).assertEqual('blocked');
        };

        /**
         * @tc.number RequestPrint_notify_test_1900
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_BLOCK_SERVICE_REQUEST)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_1900', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_1900-------------');
            TAG = 'RequestPrint_notify_test_1900';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_BLOCKED) {
                    console.info(TAG + ' the printJob is blocked. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_BLOCKED, PRINT_JOB_BLOCK_SERVICE_REQUEST);
            await sleep(waitTime2);
            checkPrintJob3(TAG, jobInfo);
            checkJobSubState12(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_1900-------------');
            done();
        });

        function checkJobSubState12(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINT_JOB_BLOCK_SERVICE_REQUEST);
            expect(printTaskResult).assertEqual('blocked');
        };

        /**
         * @tc.number RequestPrint_notify_test_2000
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_BLOCK_LOW_ON_INK)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_2000', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_2000-------------');
            TAG = 'RequestPrint_notify_test_2000';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_BLOCKED) {
                    console.info(TAG + ' the printJob is blocked. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_BLOCKED, PRINT_JOB_BLOCK_LOW_ON_INK);
            await sleep(waitTime2);
            checkPrintJob3(TAG, jobInfo);
            checkJobSubState13(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_2000-------------');
            done();
        });

        function checkJobSubState13(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINT_JOB_BLOCK_LOW_ON_INK);
            expect(printTaskResult).assertEqual('blocked');
        };

        /**
         * @tc.number RequestPrint_notify_test_2100
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_BLOCK_LOW_ON_TONER)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_2100', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_2100-------------');
            TAG = 'RequestPrint_notify_test_2100';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_BLOCKED) {
                    console.info(TAG + ' the printJob is blocked. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_BLOCKED, PRINT_JOB_BLOCK_LOW_ON_TONER);
            await sleep(waitTime2);
            checkPrintJob3(TAG, jobInfo);
            checkJobSubState14(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_2100-------------');
            done();
        });

        function checkJobSubState14(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINT_JOB_BLOCK_LOW_ON_TONER);
            expect(printTaskResult).assertEqual('blocked');
        };

        /**
         * @tc.number RequestPrint_notify_test_2200
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_BLOCK_REALLY_LOW_ON_INK)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_2200', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_2200-------------');
            TAG = 'RequestPrint_notify_test_2200';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_BLOCKED) {
                    console.info(TAG + ' the printJob is blocked. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_BLOCKED, PRINT_JOB_BLOCK_REALLY_LOW_ON_INK);
            await sleep(waitTime2);
            checkPrintJob3(TAG, jobInfo);
            checkJobSubState15(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_2200-------------');
            done();
        });

        function checkJobSubState15(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINT_JOB_BLOCK_REALLY_LOW_ON_INK);
            expect(printTaskResult).assertEqual('blocked');
        };

        /**
         * @tc.number RequestPrint_notify_test_2300
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_BLOCK_BAD_CERTIFICATE)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_2300', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_2300-------------');
            TAG = 'RequestPrint_notify_test_2300';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_BLOCKED) {
                    console.info(TAG + ' the printJob is blocked. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_BLOCKED, PRINT_JOB_BLOCK_BAD_CERTIFICATE);
            await sleep(waitTime2);
            checkPrintJob3(TAG, jobInfo);
            checkJobSubState16(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_2300-------------');
            done();
        });

        function checkJobSubState16(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINT_JOB_BLOCK_BAD_CERTIFICATE);
            expect(printTaskResult).assertEqual('blocked');
        };

        /**
         * @tc.number RequestPrint_notify_test_2400
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_COMPLETED_SUCCESS)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_2400', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_2400-------------');
            TAG = 'RequestPrint_notify_test_2400';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_COMPLETED) {
                    console.info(TAG + ' the printJob is completed. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            //startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            //connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_COMPLETED, PRINTJOB_STATE_COMPLETE_SUCCESS);
            await sleep(waitTime2);
            checkPrintJob4(TAG, jobInfo);
            checkJobSubState0(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_2400-------------');
            done();
        });

        function checkPrintJob4(msg, info) {
            checkPrintJobCommon(msg, info);
            checkPrintJobOthers(msg, info);
            console.info(msg + ' checkPrintJob info.jobState: ' + JSON.stringify(info.jobState));
            expect(typeof (info.jobState)).assertEqual('number');
            expect(info.jobState).assertEqual(PRINTJOB_STATE_COMPLETED);
        };

        function checkJobSubState0(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINTJOB_STATE_COMPLETE_SUCCESS);
            expect(printTaskResult).assertEqual('success');
        };

        /**
         * @tc.number RequestPrint_notify_test_2500
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_COMPLETED_FAILED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_2500', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_2500-------------');
            TAG = 'RequestPrint_notify_test_2500';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_COMPLETED) {
                    console.info(TAG + ' the printJob is completed. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_COMPLETED, PRINT_JOB_COMPLETED_FAILED);
            await sleep(waitTime2);
            checkPrintJob4(TAG, jobInfo);
            checkJobSubState1(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_2500-------------');
            done();
        });

        function checkJobSubState1(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINT_JOB_COMPLETED_FAILED);
            expect(printTaskResult).assertEqual('failed');
        };

        /**
         * @tc.number RequestPrint_notify_test_2600
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_COMPLETED_CANCELLED)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_2600', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_2600-------------');
            TAG = 'RequestPrint_notify_test_2600';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_COMPLETED) {
                    console.info(TAG + ' the printJob is completed. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_COMPLETED, PRINT_JOB_COMPLETED_CANCELLED);
            await sleep(waitTime2);
            checkPrintJob4(TAG, jobInfo);
            checkJobSubState2(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_2600-------------');
            done();
        });

        function checkJobSubState2(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINT_JOB_COMPLETED_CANCELLED);
            expect(printTaskResult).assertEqual('cancelled');
        };

        /**
         * @tc.number RequestPrint_notify_test_2700
         * @tc.name on: Register event callback for the state change of print job (PRINT_JOB_COMPLETED_FILE_CORRUPT)
         * @tc.desc Function test
         */
        it('RequestPrint_notify_test_2700', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_2700-------------');
            TAG = 'RequestPrint_notify_test_2700';
            print.on('jobStateChange', (state, info) => {
                if (state == PRINTJOB_STATE_PREPARE ) {
                    console.info(TAG + ' the printJob is created. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
                if (state == PRINTJOB_STATE_COMPLETED) {
                    console.info(TAG + ' the printJob is completed. info: ' + JSON.stringify(info));
                    jobInfo = info;
                    jobId = info.jobId;
                    jobState = state;
                }
            });
            await sleep(waitTime);
            printEvent(TAG, file);
            await sleep(waitTime);
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            startDiscoverPrinterEvent(TAG, extensionIds);
            await sleep(waitTime);
            addPrintersEvent(TAG, printerInfoArr);
            await sleep(waitTime);
            connectPrinterEvent(TAG, printerIdValid);
            await sleep(waitTime);
            let jobInfo1 = {
                files: file,
                jobId: jobId,
                printerId: printerIdValid,
                jobState: jobState,
                jobSubState: 0,
                copyNumber: 3,
                pageRange: printerRange,
                isSequential: false,
                pageSize: printerPageSize,
                isLandscape: false,
                colorMode: 1,
                duplexMode: 1,
                margin: printMargin,
                preview: previewAttribute,
                option: 'string'
            }
            startPrintJobEvent(TAG, jobInfo1);
            await sleep(waitTime2);
            updatePrintJobStateEvent(TAG, jobId, PRINTJOB_STATE_COMPLETED, PRINT_JOB_COMPLETED_FILE_CORRUPT);
            await sleep(waitTime2);
            checkPrintJob4(TAG, jobInfo);
            checkJobSubState3(TAG, jobInfo);
            await sleep(waitTime);
            offJobStateChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_2700-------------');
            done();
        });

        function checkJobSubState3(msg, info) {
            console.info(msg + ' checkPrintJob info.jobSubState: ' + JSON.stringify(info.jobSubState));
            expect(typeof (info.jobSubState)).assertEqual('number');
            expect(info.jobSubState).assertEqual(PRINT_JOB_COMPLETED_FILE_CORRUPT);
        };

        /**
        * @tc.number RequestPrint_notify_test_2800
        * @tc.name on: Register event callback for the information change of print extension.
        * @tc.desc Function test
        */
        it('RequestPrint_notify_test_2800', 0, async function (done) {
            console.info('------------start RequestPrint_notify_test_2800-------------');
            TAG = 'RequestPrint_notify_test_2800';
            queryAllPrinterExtensionsEvent(TAG);
            await sleep(waitTime);
            let startTime = Utils.getNowTime();
            print.on('extInfoChange', (err, info) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('on.extInfoChange: ', startTime, endTime);
                console.info(TAG + ' err: ' + JSON.stringify(err) + ' ,info: ' + JSON.stringify(info));
                if (info) {
                    console.info(TAG + ' the extensionInfo is: ' + JSON.stringify(info));
                    extensionInfo = info;
                }
            });
            updateExtensionInfoEvent(TAG, extensionInfoUpdate);
            await sleep(waitTime);
            expect(extensionInfoUpdate).assertEqual('newString');
            await sleep(waitTime);
            offExtInfoChangeEvent(TAG);
            await sleep(waitTime);
            console.info('------------end RequestPrint_notify_test_2800-------------');
            done();
        });

        function printEvent(msg, file) {
            console.info(msg + 'printEvent start');
            let startTime = Utils.getNowTime();
            print.print(file, (err, task) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('print: ', startTime, endTime);
                if (err) {
                    console.info(msg + 'print fail. Cause: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                    return;
                } else {
                    console.info(msg + 'print printTask: ' + JSON.stringify(task));
                    task.on('success', () => {
                        console.info('print task success');
                        printTaskResult = 'success';
                    });
                    task.on('failed', () => {
                        console.info('print task failed');
                        printTaskResult = 'failed';
                    });
                    task.on('cancelled', () => {
                        console.info('print task cancelled');
                        printTaskResult = 'cancelled';
                    });
                    task.on('blocked', () => {
                        console.info('print task blocked');
                        printTaskResult = 'blocked';
                    });
                }
            });
            console.info(msg + ' printEvent end');
        };

        function startDiscoverPrinterEvent(msg, extensionIds) {
            console.info(msg + 'startDiscoverPrinter start');
            let startTime = Utils.getNowTime();
            print.startDiscoverPrinter(extensionIds).then((data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('startDiscoverPrinter: ', startTime, endTime);
                console.info(msg + ' startDiscoverPrinter result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' startDiscoverPrinter err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            console.info(msg + ' startDiscoverPrinter end');
        };

        function stopDiscoverPrinterEvent(msg) {
            console.info(msg + 'stopDiscoverPrinter start');
            let startTime = Utils.getNowTime();
            print.stopDiscoverPrinter().then((data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('stopDiscoverPrinter: ', startTime, endTime);
                console.info(msg + ' stopDiscoverPrinter result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' stopDiscoverPrinter err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info(msg + ' stopDiscoverPrinter end');
        };

        function addPrintersEvent(msg, printerInfoArr) {
            console.info(msg + 'addPrinters start');
            let startTime = Utils.getNowTime();
            print.addPrinters(printerInfoArr).then((data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('addPrinters: ', startTime, endTime);
                console.info(msg + ' addPrinters result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' addPrinters err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info(msg + ' addPrinters end');
        };

        function removePrintersEvent(msg, printerIdsArray) {
            console.info(msg + 'removePrinters start');
            let startTime = Utils.getNowTime();
            print.removePrinters(printerIdsArray).then((data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('removePrinters: ', startTime, endTime);
                console.info(msg + ' removePrinters result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' removePrinters err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info(msg + ' removePrinters end');
        };

        function connectPrinterEvent(msg, printerId) {
            console.info(msg + 'connectPrinter start');
            let startTime = Utils.getNowTime();
            print.connectPrinter(printerId).then((data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('connectPrinter: ', startTime, endTime);
                console.info(msg + ' connectPrinter result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' connectPrinter err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            console.info(msg + ' connectPrinter end');
        };

        function disconnectPrinterEvent(msg, printerId) {
            console.info(msg + 'disconnectPrinter start');
            let startTime = Utils.getNowTime();
            print.disconnectPrinter(printerId).then((data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('disconnectPrinter: ', startTime, endTime);
                console.info(msg + ' disconnectPrinter result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' disconnectPrinter err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            console.info(msg + ' disconnectPrinter end');
        };

        function startPrintJobEvent(msg, jobInfo) {
            console.info(msg + ' startPrintJob start');
            let startTime = Utils.getNowTime();
            print.startPrintJob(jobInfo).then((data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('startPrintJob: ', startTime, endTime);
                console.info(msg + ' startPrintJob result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' startPrintJob err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            console.info(msg + ' startPrintJob end');
        };

        function cancelPrintJobEvent(msg, jobId) {
            console.info(msg + ' startPrintJob start');
            let startTime = Utils.getNowTime();
            print.cancelPrintJob(jobId).then((data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('cancelPrintJob: ', startTime, endTime);
                console.info(msg + 'cancelPrintJob result:' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg = ' cancelPrintJob err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            console.info(msg + ' cancelPrintJob end');
        };

        function updatePrintJobStateEvent(msg, jobId, state, subState) {
            console.info(msg + 'updatePrintJobState start');
            let startTime = Utils.getNowTime();
            print.updatePrintJobState(jobId, state, subState).then((data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('updatePrintJobState: ', startTime, endTime);
                console.info(msg + ' updatePrintJobState result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' updatePrintJobState err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info(msg + ' updatePrintJobState end');
        };

        function updatePrinterStateEvent(msg, printerId, state) {
            console.info(msg + 'updatePrinterState start');
            let startTime = Utils.getNowTime();
            print.updatePrinterState(printerId, state).then((data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('updatePrinterState: ', startTime, endTime);
                console.info(msg + ' updatePrinterState result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' updatePrinterState err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info(msg + ' updatePrinterState end');
        };

        function queryPrinterCapabilityEvent(msg, printerId) {
            console.info(msg + ' queryPrinterCapability start');
            let startTime = Utils.getNowTime();
            print.queryPrinterCapability(printerId).then((data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('queryPrinterCapability: ', startTime, endTime);
                console.info(msg + ' result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            console.info(msg + ' queryPrinterCapability end');
        };

        function requestPrintPreviewEvent(msg, printJob) {
            console.info(msg + ' requestPrintPreview start');
            let startTime = Utils.getNowTime();
            print.requestPrintPreview(printJob).then((data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('requestPrintPreview: ', startTime, endTime);
                console.info(msg + ' requestPrintPreview result: ' + JSON.stringify(data));
                expect(data).assertEqual('');
            }).catch ((error) => {
                console.info(msg + ' requestPrintPreview err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            console.info(msg + ' requestPrintPreview end');
        };

        function offJobStateChangeEvent(msg) {
            console.info(msg + ' close jobStateChange event start');
            let startTime = Utils.getNowTime();
            print.off('jobStateChange', (err, data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('off.JobStateChange: ', startTime, endTime);
                if (err) {
                    console.error(msg + ' close jobStateChange event fail. Cause: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                    return;
                } else {
                    console.info(msg + ' close jobStateChange event successful. result: ' + JSON.stringify(data));
                    expect(typeof (data)).assertEqual('boolean');
                    expect(data).assertEqual(true);
                }
            });
            console.info(msg + ' close jobStateChange end');
        };

        function offPrinterStateChangeEvent(msg) {
            console.info(msg + ' close printerStateChange start');
            let startTime = Utils.getNowTime();
            print.off('printerStateChange', (err, data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('off.PrinterStateChange: ', startTime, endTime);
                if (err) {
                    console.error(msg + ' close printerStateChange event fail, Cause: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                    return;
                } else {
                    console.info(msg + ' close printerStateChange event successful, result: ' + JSON.stringify(data));
                    expect(typeof (data)).assertEqual('boolean');
                    expect(data).assertEqual(true);
                }
            });
            console.info(msg + ' close printerStateChange end');
        };

        function offExtInfoChangeEvent(msg) {
            console.info(msg + ' close extInfoChange start');
            let startTime = Utils.getNowTime();
            print.off('extInfoChange', (err, data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('off.ExtInfoChange: ', startTime, endTime);
                if (err) {
                    console.error(msg + ' close extInfoChange event fail, Cause: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                    return;
                } else {
                    console.info(msg + ' close extInfoChange event successful, result: ' + JSON.stringify(data));
                    expect(typeof (data)).assertEqual('boolean');
                    expect(data).assertEqual(true);
                }
            });
            console.info(msg + ' close extInfoChange end');
        };

        function updatePrintersEvent(msg, printerInfoArr) {
            console.info(msg + 'updatePrinters start');
            let startTime = Utils.getNowTime();
            print.updatePrinters(printerInfoArr).then((data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('updatePrinters: ', startTime, endTime);
                console.info(msg + ' updatePrinters result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' updatePrinters err: ' + JSON.stringify(error));
                expect(false).assertTrue();
            });
            console.info(msg + ' updatePrinters end');
        };

        function updateExtensionInfoEvent(msg, info) {
            console.info(msg + 'updateExtensionInfo start');
            let startTime = Utils.getNowTime();
            print.updateExtensionInfo(info).then((data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('updateExtensionInfo: ', startTime, endTime);
                console.info(msg + ' updateExtensionInfo result: ' + JSON.stringify(data));
                expect(data).assertEqual(true);
            }).catch ((error) => {
                console.info(msg + ' updateExtensionInfo err: ' + JSON.stringify(error));
                expect(false).assertFalse();
            });
            console.info(msg + ' updateExtensionInfo end');
        };

        function queryAllPrinterExtensionsEvent(msg) {
            console.info(msg + 'queryAllPrinterExtensionInfos start');
            let extensionInfos = [];
            let startTime = Utils.getNowTime();
            print.queryAllPrinterExtensionInfos((err, data) => {
                let endTime = Utils.getNowTime();
                Utils.getDurationTime('queryAllPrinterExtensionInfos: ', startTime, endTime);
                if (err) {
                    console.info(msg + ' queryAllPrinterExtensionInfos failed. Cause: ' + JSON.stringify(err));
                    expect(false).assertTrue();
                    return extensionInfos;
                } else {
                    console.info(msg + ' queryAllPrinterExtensionInfos successful. Data:' + JSON.stringify(data));
                    extensionInfos = data;
                    return extensionInfos;
                    for (let i = 0; i < extensionInfos.length; i++) {
                        extensionIds.push(extensionInfos[i].extensionId);
                        console.info(msg + ' extensionIds is: ' + JSON.stringify(data));
                    }
                    checkAllPrinterExtensionInfos(msg, data);
                }
            });
            console.info(msg + 'queryAllPrinterExtensionInfos end------------');
        };

        function checkAllPrinterExtensionInfos(msg, data) {
            console.log(msg + 'checkAllPrinterExtensionInfos start  ' + JSON.stringify(data));
            expect(Array.isArray(data)).assertEqual(true);
            for (let i = 0; i < data.length; i++) {
                console.info(msg + 'checkAllPrinterExtensionInfos data[0].extensionId : ' + data[0].extensionId);
                expect(typeof (data[0].extensionId)).assertEqual('string');
                expect(data[0].extensionId).assertEqual('com.acts.print.PrintFrameWorkTest');
                console.info(msg + 'checkAllPrinterExtensionInfos data[0].vendorId : ' + data[0].vendorId);
                expect(typeof (data[0].vendorId)).assertEqual('string');
                expect(data[0].vendorId).assertEqual('com.acts.print.PrintFrameWorkTest');
                console.info(msg + 'checkAllPrinterExtensionInfos data[0].vendorName : ' + data[0].vendorName);
                expect(typeof (data[0].vendorName)).assertEqual('string');
                expect(data[0].vendorName).assertEqual('com.acts.print.PrintFrameWorkTest');
                console.info(msg + 'checkAllPrinterExtensionInfos data[0].vendorIcon : ' + data[0].vendorIcon);
                expect(typeof (data[0].vendorIcon)).assertEqual('number');
                expect(data[0].vendorIcon).assertEqual(0);
                console.info(msg + 'checkAllPrinterExtensionInfos data[0].version : ' + data[0].version);
                expect(typeof (data[0].version)).assertEqual('string');
                expect(data[0].version).assertEqual('1.0.0');
            }
        };

        function checkPrinterInfoCommon(msg, info) {
            console.info(msg + ' checkPrinterInfo: ' + JSON.stringify(info));
            expect(typeof (info)).assertEqual('object');
            console.info(msg + ' checkPrinterInfo info.printerId: ' + JSON.stringify(info.printerId));
            expect(typeof (info.printerId)).assertEqual('string');
            expect(info.printerId).assertEqual('com.acts.print.PrintFrameWorkTest:6');
            console.info(msg + ' checkPrinterInfo info.printerName: ' + JSON.stringify(info.printerName));
            expect(typeof (info.printerName)).assertEqual('string');
            expect(info.printerName).assertEqual('string2');
            console.info(msg + ' checkPrinterInfo info.printerIcon: ' + JSON.stringify(info.printerIcon));
            expect(typeof (info.printerIcon)).assertEqual('number');
            expect(info.printerIcon).assertEqual(1);
            console.info(msg + ' checkPrintJobInfo info.description: ' + JSON.stringify(info.description));
            expect(typeof (info.description)).assertEqual('string');
            expect(info.description).assertEqual('string2');
        };

        function checkPrinterCapability(msg, info) {
            console.info(msg + ' checkPrinterCapability: ' + JSON.stringify(info.capability));
            expect(typeof (info.capability)).assertEqual('object');
            let printerCapability = info.capability;
            console.info(msg + ' checkPrinterCapability.minMargin: ' + JSON.stringify(printerCapability.minMargin));
            expect(typeof (printerCapability.minMargin)).assertEqual('object');
            /*
            let printMargin = printerCapability.minMargin;
            expect(typeof (printMargin.top)).assertEqual('number');
            expect(printMargin.top).assertEqual(1);
            expect(typeof (printMargin.bottom)).assertEqual('number');
            expect(printMargin.bottom).assertEqual(2);
            expect(typeof (printMargin.left)).assertEqual('number');
            expect(printMargin.left).assertEqual(1);
            expect(typeof (printMargin.right)).assertEqual('number');
            expect(printMargin.right).assertEqual(1);
            console.info(msg + ' checkPrinterCapability.pageSize: ' + JSON.stringify(printerCapability.pageSize));
            expect(Array.isArray(printerCapability.pageSize)).assertEqual(true);
            for (let s = 0; s < printerCapability.pageSize.length; s++) {
                let printerPageSize = printerCapability.pageSize[s];
                expect(typeof (printerPageSize.id)).assertEqual('string');
                expect(printerPageSize.id).assertEqual('1');
                expect(typeof (printerPageSize.name)).assertEqual('string');
                expect(printerPageSize.name).assertEqual('string');
                expect(typeof (printerPageSize.width)).assertEqual('number');
                expect(printerPageSize.width).assertEqual(200);
                expect(typeof (printerPageSize.height)).assertEqual('number');
                expect(printerPageSize.height).assertEqual(200);
            }
            console.info(msg + ' checkPrinterCapability.colorMode: ' + JSON.stringify(printerCapability.colorMode));
            expect(typeof (printerCapability.colorMode)).assertEqual('number');
            expect(printerCapability.colorMode).assertEqual(1);
            console.info(msg + ' checkPrinterCapability.duplexMode: ' + JSON.stringify(printerCapability.duplexMode));
            expect(typeof (printerCapability.duplexMode)).assertEqual('number');
            expect(printerCapability.duplexMode).assertEqual(2);
            * */
        };
        function checkPrintJobCommon(msg, info) {
            console.info(msg + ' checkPrintJob: ' + JSON.stringify(info));
            expect(typeof (info)).assertEqual('object');
            console.info(msg + ' checkPrintJob info.files: ' + JSON.stringify(info.files));
            expect(Array.isArray(info.files)).assertEqual(false);
            /*
            for (let n = 0; n < info.files.length; n++) {
                expect(typeof (info.files[n])).assertEqual('string');
                expect(info.files[0]).assertEqual('datashare://data/print/a.png');
                expect(info.files[1]).assertEqual('datashare://data/print/b.png');
            }
            * */
            console.info(msg + ' checkPrintJob info.copyNumber: ' + JSON.stringify(info.copyNumber));
            expect(typeof (info.copyNumber)).assertEqual('number');
            expect(info.copyNumber).assertEqual(0);
            console.info(msg + ' checkPrintJob info.pageRange: ' + JSON.stringify(info.pageRange));
            expect(typeof (info.pageRange)).assertEqual('object');
            let printerRange = info.pageRange;
            /*
            console.info(msg + ' checkPrinterRange.startPage: ' + JSON.stringify(printerRange.startPage));
            expect(typeof (printerRange.startPage)).assertEqual('number');
            expect(printerRange.startPage).assertEqual(0);
            console.info(msg + ' checkPrinterRange.endPage: ' + JSON.stringify(printerRange.endPage));
            expect(typeof (printerRange.endPage)).assertEqual('number');
            expect(printerRange.endPage).assertEqual(0);
            * */
        };

        function checkPrintJobOthers(msg, info) {
            console.info(msg + ' checkPrintJob info.isSequential: ' + JSON.stringify(info.isSequential));
            expect(typeof (info.isSequential)).assertEqual('number');
            expect(info.isSequential).assertEqual(0);
            console.info(msg + ' checkPrintJob info.isLandscape: ' + JSON.stringify(info.isLandscape));
            expect(typeof (info.isLandscape)).assertEqual('number');
            expect(info.isLandscape).assertEqual(0);
            /*
            console.info(msg + ' checkPrintJob info.colorMode: ' + JSON.stringify(info.colorMode));
            expect(typeof (info.colorMode)).assertEqual('number');
            expect(info.colorMode).assertEqual(1);
            console.info(msg + ' checkPrintJob info.duplexMode: ' + JSON.stringify(info.duplexMode));
            expect(typeof (info.duplexMode)).assertEqual('number');
            expect(info.duplexMode).assertEqual(1);
            console.info(msg + ' checkPrintJob info.pageSize: ' + JSON.stringify(info.pageSize));
            expect(typeof (info.pageSize)).assertEqual('object');
            expect(typeof (printerPageSize.id)).assertEqual('string');
            expect(printerPageSize.id).assertEqual('1');
            expect(typeof (printerPageSize.name)).assertEqual('string');
            expect(printerPageSize.name).assertEqual('string');
            expect(typeof (printerPageSize.width)).assertEqual('number');
            expect(printerPageSize.width).assertEqual(200);
            expect(typeof (printerPageSize.height)).assertEqual('number');
            expect(printerPageSize.height).assertEqual(200);
            console.info(msg + ' checkPrintJob info.margin: ' + JSON.stringify(info.margin));
            expect(typeof (info.margin)).assertEqual('object');
            let printMargin = info.margin;
            expect(typeof (printMargin.top)).assertEqual('number');
            expect(printMargin.top).assertEqual(1);
            expect(typeof (printMargin.bottom)).assertEqual('number');
            expect(printMargin.bottom).assertEqual(2);
            expect(typeof (printMargin.left)).assertEqual('number');
            expect(printMargin.left).assertEqual(1);
            expect(typeof (printMargin.right)).assertEqual('number');
            expect(printMargin.right).assertEqual(1);
            * */
        };
    });
}

